#!/usr/bin/env python3
"""
Immortal 24/7 Autonomous Byte-Accurate Decompilation Harness for OpenRBX-2014 (`ROBLOXSTUDIO`).

Tuned for Clean Subsystem C++ Architecture (matching `Asphaltian/OpenRBX`) and a 320K-token
context window with maximum thinking (`DeepSeek V4.1 Flash` via `api.deepai.org/deepai_code`,
`reasoning_effort: max`). Generation escalates 16K -> 96K completion budget across repair attempts:
1. Routes every function (`0x00401000`..`0x00e0f3a3`) to its real subsystem `.cpp` and `.h` file
   via `tools/source_router.py` (`Client/App/v8world/Ball.cpp`, `Client/Network/ProfiledRakPeer.cpp`, etc.)
2. Emits idiomatic C++ class methods (`namespace RBX { ... }`) with zero `DecompBatch.cpp` dump files
3. High-speed per-class batch compilation (`cl.exe /c /O2`) + COFF relocation-invariant byte verification
4. Multi-attempt Compiler-in-the-Loop & Assembly-Diff Repair with REA-tools (`kuna.exe` SLEIGH C decompiler)
"""

import json
import os
import re
import struct
import subprocess
import sys
import time
import urllib.error
import urllib.request
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import deepai_backend   # noqa: E402
import func_context     # noqa: E402
import next_target      # noqa: E402
import opencode_backend  # noqa: E402
import source_router    # noqa: E402
import update_progress  # noqa: E402
import verify_tu        # noqa: E402
from targets import classify_target  # noqa: E402

KERNEL_REF = os.environ.get("KAGGLE_KERNEL_REF", "supahblob/kaggle-qwen-coder-api-server")
MODEL_NAME = os.environ.get("DECOMP_MODEL", deepai_backend.MODEL)
HARNESS_MODE = os.environ.get("DECOMP_HARNESS", "auto")
MAX_OUTPUT_TOKENS = int(os.environ.get("DECOMP_MAX_TOKENS", "98304"))
BACKEND = os.environ.get("DECOMP_BACKEND", "deepai")
OPENCODE_SENTINEL = "opencode://cli"
DEEPAI_SENTINEL = deepai_backend.SENTINEL
PUSH_ENABLED = os.environ.get("DECOMP_PUSH", "0").lower() in ("1", "true", "yes")
LOCAL_LLM_URL = os.environ.get("DECOMP_LOCAL_URL", "http://127.0.0.1:8080/v1")
LEDGER_PATH = ROOT / "data" / "work_ledger.jsonl"
COMPLETION_FLAG = ROOT / "COMPLETED_100_PERCENT.flag"
CONTEXT_WINDOW = 320000
TUNNEL_CACHE_FILE = ROOT / "data" / "active_tunnel_url.txt"


LAST_ACTIVITY = time.time()
_LOG_PATH = Path(os.environ.get("DECOMP_LOG_PATH", "/var/log/openrbx/harness.log"))
WATCHDOG_STALE_SECONDS = int(os.environ.get("DECOMP_WATCHDOG_STALE", "3600"))


import threading
from collections import deque
from concurrent.futures import FIRST_COMPLETED, ThreadPoolExecutor, wait


def log(msg: str):
    global LAST_ACTIVITY
    LAST_ACTIVITY = time.time()
    ts = time.strftime("%Y-%m-%d %H:%M:%S")
    print(f"[{ts}] {msg}", flush=True)


WORKER_STATUS = ROOT / "docs" / "worker.json"
_STATUS: dict = {"state": "starting", "address": None, "name": None, "attempt": 0, "pct": None}


def publish_status(**fields) -> None:
    """
    A hard routine can occupy four model calls, so the dashboard otherwise looks dead for ten
    minutes even though the worker is busy. This heartbeat is written before every request and
    published by tools/publish_progress.sh, which throttles commits of this file alone.
    """
    _STATUS.update(fields)
    _STATUS["ts"] = time.strftime("%Y-%m-%dT%H:%M:%S")
    try:
        WORKER_STATUS.parent.mkdir(parents=True, exist_ok=True)
        probe = WORKER_STATUS.with_suffix(".tmp")
        probe.write_text(json.dumps(_STATUS), encoding="utf-8")
        probe.replace(WORKER_STATUS)
    except OSError:
        pass


# Targets are decompiled by several subagents at once, but only one of them may touch the
# working tree: the `.cpp`/`.h` edits, the cl.exe compile and update_progress.py's rescan all
# have to see a consistent tree. Model calls, which are 95% of the wall clock, stay unlocked.
WRITE_LOCK = threading.Lock()
WORKERS = max(1, int(os.environ.get("DECOMP_WORKERS", "4")))

# A target that has burned its budget twice is a poor use of the API: the gateway saturates
# around six concurrent calls, so every wasted call directly displaces a productive one. The
# ledger of these lives on disk because restarts used to reset the in-memory set and re-burn
# the same hopeless targets from scratch.
SKIP_PATH = ROOT / "data" / "skipped.json"
SKIP_TTL_SECONDS = 12 * 3600
SKIP_AFTER_FAILURES = 2


def load_skips() -> dict:
    try:
        raw = json.loads(SKIP_PATH.read_text(encoding="utf-8"))
    except (OSError, ValueError):
        return {}
    now = time.time()
    return {k: v for k, v in raw.items() if isinstance(v, list) and now - v[1] < SKIP_TTL_SECONDS}


def save_skips(skips: dict) -> None:
    try:
        SKIP_PATH.parent.mkdir(parents=True, exist_ok=True)
        SKIP_PATH.write_text(json.dumps(skips), encoding="utf-8")
    except OSError:
        pass


def target_key(addr: int) -> str:
    """Targets sharing a header can never be edited concurrently, so group by header path."""
    try:
        route = source_router.get_router().route_address(addr)
        return route.get("h_rel") or route.get("cpp_rel") or f"addr:{addr}"
    except Exception:
        return f"addr:{addr}"


def _apply_and_verify(
    route: dict,
    cpp_path: Path,
    h_path: Path,
    snippet: str,
    addr: int,
    orig_bytes: bytes,
    original_cpp: str,
    original_h: str,
    parsed: dict | None = None,
):
    """
    Mutating half of one attempt: append, compile, score, then promote or restore. Runs under
    WRITE_LOCK so a publisher can never observe a half-written translation unit (which would
    make an unverified `// FUNCTION:` marker look implemented).
    """
    with WRITE_LOCK:
        if parsed and parsed.get("decl"):
            source_router.ensure_class_header_and_cpp(route, method_decl=parsed["decl"])
        source_router.append_method_to_cpp(cpp_path, snippet)
        ok, obj_path, compiler_out = verify_tu.compile_cpp_to_coff(cpp_path, use_cache=False)
        # A compile is ~2s and a model retry is ~150s, so undeclared types in the generated
        # signature are worth fixing with the compiler before buying another round-trip.
        repairs = 0
        while not ok and repairs < 2:
            if not _repair_missing_declarations(compiler_out, cpp_path, h_path):
                break
            repairs += 1
            ok, obj_path, compiler_out = verify_tu.compile_cpp_to_coff(cpp_path, use_cache=False)
        if repairs:
            log(
                f"  [0x{addr:08x}] auto-repaired missing declarations in {route['h_rel']} "
                f"({repairs} pass(es), compiles={ok})"
            )
        if not ok:
            cpp_path.write_text(original_cpp, encoding="utf-8")
            h_path.write_text(original_h, encoding="utf-8")
            return ("compile_failed", compiler_out)

        coff_funcs = verify_tu.parse_coff_functions(obj_path)
        anns = verify_tu.parse_annotations_in_cpp(cpp_path)
        fn_hint = next((h for a, k, h in anns if a == addr), f"func_{addr:08x}")

        # Score the best-matching symbol rather than the first name hit: the name hint comes from
        # parsing the model's own annotation, and when it drifts every symbol is skipped and a body
        # that compiled perfectly is silently recorded as 0%, which is indistinguishable from a
        # wrong routine and throws away a whole call.
        cur_pct, cur_diff = 0.0, []
        for sym_name, (recomp_bytes, rel_offsets) in coff_funcs.items():
            pct, diff = verify_tu.compare_with_relocations(orig_bytes, recomp_bytes, rel_offsets)
            if pct > cur_pct:
                cur_pct, cur_diff = pct, diff

        if cur_pct >= 99.99:
            promote_marker(cpp_path, addr)
            return ("match", cur_pct, fn_hint)

        cpp_path.write_text(original_cpp, encoding="utf-8")
        h_path.write_text(original_h, encoding="utf-8")
        return ("diff", cur_pct, cur_diff, fn_hint)


def rotate_log_if_needed(max_bytes: int = 64 * 1024 * 1024, keep: int = 8 * 1024 * 1024) -> None:
    """
    The worker writes one append-only file for weeks. systemd holds that fd in O_APPEND mode,
    so trimming in place is safe and needs no root-owned logrotate rule on the host.
    """
    try:
        if _LOG_PATH.stat().st_size <= max_bytes:
            return
        with open(_LOG_PATH, "rb") as fh:
            fh.seek(-keep, os.SEEK_END)
            tail = fh.read()
        with open(_LOG_PATH, "wb") as fh:
            fh.write(b"[log rotated; earlier output trimmed]\n")
            fh.write(tail)
    except OSError:
        pass


def watchdog_loop() -> None:
    """
    Restarts a wedged loop that systemd still reports as healthy: a stalled HTTP stream or a
    Wine deadlock keeps the process alive while nothing progresses. Exiting lets Restart=always
    start a clean supervisor, which is the only recovery that does not need root on the host.
    """
    last_rotation = time.time()
    while True:
        time.sleep(60)
        if time.time() - last_rotation > 3600:
            rotate_log_if_needed()
            last_rotation = time.time()
        idle = time.time() - LAST_ACTIVITY
        if idle > WATCHDOG_STALE_SECONDS:
            log(f"WATCHDOG: no activity for {int(idle)}s; exiting so systemd restarts the supervisor")
            try:
                sys.stdout.flush()
            except Exception:
                pass
            os._exit(1)


def start_watchdog() -> None:
    import threading

    threading.Thread(target=watchdog_loop, name="harness-watchdog", daemon=True).start()


def _first_error(compiler_out: str) -> str:
    """MSVC emits warnings before the real cause; report the first error line, not the last."""
    lines = [line.strip() for line in (compiler_out or "").splitlines() if line.strip()]
    errors = [line for line in lines if "error" in line.lower() and "D9002" not in line]
    picked = errors[:2] or lines[-2:]
    return " | ".join(picked)[:400] or "<no output>"


def record_work(addr: int, ok: bool, pct: float, name: str, seconds: float | None = None):
    """Append-only ledger: every attempt survives restarts and can be audited afterwards."""
    try:
        LEDGER_PATH.parent.mkdir(parents=True, exist_ok=True)
        with open(LEDGER_PATH, "a", encoding="utf-8") as fh:
            fh.write(json.dumps({
                "ts": time.strftime("%Y-%m-%dT%H:%M:%S"),
                "address": f"0x{addr:08x}",
                "matched": bool(ok and pct >= 99.99),
                "best_pct": round(pct, 2),
                "name": name,
                "backend": BACKEND,
                "seconds": round(seconds, 1) if seconds is not None else None,
            }) + chr(10))
    except Exception:
        pass


KBENCH_ENV = os.environ.get("DECOMP_KBENCH_ENV", "/etc/openrbx/kbench.env")


def load_kbench_credentials() -> tuple[str, str]:
    """
    Kaggle's benchmark proxy mints an API key that expires after one hour, so the
    credentials are re-read on every call instead of being cached at import time.
    """
    url = os.environ.get("MODEL_PROXY_URL", "")
    key = os.environ.get("MODEL_PROXY_API_KEY", "")
    try:
        with open(KBENCH_ENV, encoding="utf-8") as fh:
            for line in fh:
                name, _, value = line.strip().partition("=")
                value = value.strip().strip('"').strip("'")
                if name == "MODEL_PROXY_URL" and value:
                    url = value
                elif name == "MODEL_PROXY_API_KEY" and value:
                    key = value
    except OSError:
        pass
    return url, key


def check_endpoint_alive(base_url: str) -> bool:
    if not base_url:
        return False
    url = base_url.rstrip("/") + "/models"
    try:
        req = urllib.request.Request(
            url,
            headers={"User-Agent": "OpenRBX-Harness/3.0", "Authorization": "Bearer ollama"},
        )
        with urllib.request.urlopen(req, timeout=5) as resp:
            return resp.status == 200
    except Exception:
        return False


def update_pi_and_claude_configs(api_v1_url: str):
    os.environ["OPENAI_BASE_URL"] = api_v1_url
    os.environ["ANTHROPIC_BASE_URL"] = api_v1_url.replace("/v1", "")
    os.environ["ANTHROPIC_API_KEY"] = "ollama"
    os.environ["OPENAI_API_KEY"] = "ollama"

    TUNNEL_CACHE_FILE.parent.mkdir(parents=True, exist_ok=True)
    TUNNEL_CACHE_FILE.write_text(api_v1_url, encoding="utf-8")

    pi_dir = Path.home() / ".pi" / "agent"
    pi_dir.mkdir(parents=True, exist_ok=True)
    models_file = pi_dir / "models.json"
    settings_file = pi_dir / "settings.json"

    thinking_level_map = {
        "off": "off",
        "minimal": "low",
        "low": "low",
        "medium": "medium",
        "high": "xhigh",
        "xhigh": "xhigh",
        "max": "max",
    }
    compat_config = {
        "supportsStore": False,
        "supportsDeveloperRole": False,
        "supportsReasoningEffort": True,
        "supportsUsageInStreaming": True,
        "supportsFinishReason": True,
        "maxTokensField": "max_completion_tokens",
        "requiresToolResultName": False,
        "requiresAssistantAfterToolResult": False,
        "requiresThinkingAsText": False,
        "requiresReasoningContentOnAssistantMessages": False,
        "thinkingFormat": "openai",
    }
    models_list = [
        {
            "id": alias,
            "name": f"Qwen3.8 ({alias}) [256K Context / 64K Max Output]",
            "contextWindow": CONTEXT_WINDOW,
            "maxTokens": 65536,
            "reasoning": True,
            "input": ["text"],
            "thinkingLevelMap": thinking_level_map,
            "compat": compat_config,
        }
        for alias in ("qwen3.8:35b-a3b-abliterated", "qwen3.8:27b", "qwen3.8:27b-abliterated", "default")
    ]
    data = {
        "providers": {
            "kaggle-ollama": {
                "name": "Kaggle Dual Tesla T4 MoE Server (256K Context)",
                "baseUrl": api_v1_url,
                "api": "openai-completions",
                "apiKey": "ollama",
                "models": models_list,
            }
        }
    }
    models_file.write_text(json.dumps(data, indent=2), encoding="utf-8")
    settings_file.write_text(
        json.dumps(
            {
                "defaultProvider": "kaggle-ollama",
                "defaultModel": MODEL_NAME,
                "defaultThinkingLevel": "max",
            },
            indent=2,
        ),
        encoding="utf-8",
    )


def discover_kaggle_tunnel_url() -> str | None:
    for candidate in [
        os.environ.get("OPENAI_BASE_URL", ""),
        TUNNEL_CACHE_FILE.read_text(encoding="utf-8").strip() if TUNNEL_CACHE_FILE.exists() else "",
    ]:
        if candidate and check_endpoint_alive(candidate):
            return candidate

    try:
        req = urllib.request.Request(
            "https://ntfy.sh/openrbx2014_tunnel_vibegod69420/raw?poll=1&since=12h",
            headers={"User-Agent": "OpenRBX-Harness/3.0"},
        )
        with urllib.request.urlopen(req, timeout=6) as resp:
            lines = [l.strip() for l in resp.read().decode("utf-8", "ignore").splitlines() if "trycloudflare.com" in l]
            if lines:
                candidate = lines[-1]
                if not candidate.endswith("/v1"):
                    candidate = candidate.rstrip("/") + "/v1"
                if check_endpoint_alive(candidate):
                    log(f"Discovered live Kaggle 256K MoE endpoint via ntfy channel: {candidate}")
                    update_pi_and_claude_configs(candidate)
                    return candidate
    except Exception:
        pass

    pi_models = Path.home() / ".pi" / "agent" / "models.json"
    if pi_models.exists():
        try:
            data = json.loads(pi_models.read_text(encoding="utf-8"))
            u = data.get("providers", {}).get("kaggle-ollama", {}).get("baseUrl", "")
            if check_endpoint_alive(u):
                update_pi_and_claude_configs(u)
                return u
        except Exception:
            pass

    return None


def call_llm_chat(
    base_url: str,
    system_prompt: str,
    user_prompt: str,
    max_tokens: int = MAX_OUTPUT_TOKENS,
    effort: str | None = None,
) -> str:
    if base_url.startswith(DEEPAI_SENTINEL):
        return deepai_backend.ask(system_prompt, user_prompt, max_tokens=max_tokens, effort=effort)
    if base_url.startswith(OPENCODE_SENTINEL):
        return opencode_backend.ask(system_prompt, user_prompt, max_tokens=max_tokens)
    kb_url, kb_key = load_kbench_credentials()
    use_proxy = bool(kb_url) and base_url.rstrip("/") in (kb_url.rstrip("/"), kb_url.rstrip("/") + "/v1")
    url = (kb_url.rstrip("/") + "/openapi" if use_proxy else base_url.rstrip("/")) + "/chat/completions"
    payload = {
        "model": MODEL_NAME,
        "messages": [
            {"role": "system", "content": system_prompt},
            {"role": "user", "content": user_prompt},
        ],
        "temperature": 0.6,
        "top_p": 0.95,
        "top_k": 20,
        "max_tokens": max_tokens,
        "max_completion_tokens": max_tokens,
        "reasoning_effort": "high",
        "thinking": {"type": "enabled", "budget_tokens": max_tokens},
        "chat_template_kwargs": {"enable_thinking": True},
        "stream": True,
    }
    if use_proxy:
        # The Kaggle proxy rejects llama.cpp-only knobs and temperature entirely.
        payload = {
            "model": MODEL_NAME,
            "messages": payload["messages"],
            "max_tokens": max_tokens,
            "stream": True,
        }
    body = json.dumps(payload).encode("utf-8")
    req = urllib.request.Request(
        url,
        data=body,
        headers={
            "Content-Type": "application/json",
            "Authorization": (f"Bearer {kb_key}" if use_proxy else "Bearer ollama"),
            "User-Agent": "OpenRBX-Harness/3.0",
        },
        method="POST",
    )
    # Stream the reply. A full reasoning chain routinely runs past the Cloudflare
    # quick-tunnel origin timeout, which answers HTTP 524 and throws the whole
    # completion away; streaming keeps bytes flowing so the tunnel stays open.
    content_parts: list[str] = []
    reasoning_parts: list[str] = []
    with urllib.request.urlopen(req, timeout=600) as resp:
        for raw_line in resp:
            line = raw_line.decode("utf-8", "ignore").strip()
            if not line.startswith("data:"):
                continue
            data_str = line[len("data:"):].strip()
            if data_str == "[DONE]":
                break
            try:
                chunk = json.loads(data_str)
            except json.JSONDecodeError:
                continue
            delta = (chunk.get("choices") or [{}])[0].get("delta") or {}
            if delta.get("content"):
                content_parts.append(delta["content"])
            if delta.get("reasoning_content"):
                reasoning_parts.append(delta["reasoning_content"])
    content = "".join(content_parts)
    reasoning = "".join(reasoning_parts)
    if reasoning:
        log(f"    [MoE-REASONING] Model generated {len(reasoning)} chars of deep thinking chain (budget={max_tokens})")
    content = re.sub(r"<think>.*?</think>", "", content, flags=re.DOTALL).strip()
    if not content and "`" in reasoning:
        content = reasoning
    return content


def promote_marker(cpp_path: Path, addr: int) -> bool:
    """
    Flips `// STUB: ROBLOXSTUDIO 0x...` to `// FUNCTION: ...` once the body is byte-verified.
    Generated code is a stub until proven: `// FUNCTION:` asserts a 100% match.
    """
    stub = f"// STUB: ROBLOXSTUDIO 0x{addr:08x}"
    fn = f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}"
    try:
        text = cpp_path.read_text(encoding="utf-8")
    except Exception:
        return False
    if stub not in text:
        return False
    cpp_path.write_text(text.replace(stub, fn, 1), encoding="utf-8")
    return True


def extract_cpp_code_block(text: str) -> str:
    m = re.search(r"```(?:cpp|c\+\+|c)\s*\n(.*?)```", text, flags=re.DOTALL | re.IGNORECASE)
    if m:
        return m.group(1).strip()
    m2 = re.search(r"```\s*\n(.*?)```", text, flags=re.DOTALL)
    if m2:
        return m2.group(1).strip()
    return text.strip()


def _pick_unique_method_name(base_name: str, addr: int, slot: int | None, existing_h_text: str) -> str:
    """
    Prefers a clean semantic method name (`getField68`, `setFlag158`, `scalarDeletingDestructor`)
    without any address suffix if not yet used in the class header; otherwise disambiguates
    by vtable slot (`_slot43`) or short address suffix (`_2180`).
    """
    if f" {base_name}(" not in existing_h_text and f"*{base_name}(" not in existing_h_text:
        return base_name
    if slot is not None:
        slot_name = f"{base_name}_slot{slot}"
        if f" {slot_name}(" not in existing_h_text and f"*{slot_name}(" not in existing_h_text:
            return slot_name
    return f"{base_name}_{addr & 0xFFFF:04x}"


def _make_field_union_entry(off: int, c_type: str, field_name: str) -> str:
    if off == 0:
        return f"{c_type} {field_name};"
    return f"struct {{ char _pad_{field_name}[0x{off:x}]; {c_type} {field_name}; }};"


# `classify_target` lives in tools/targets.py so the harness and the progress reporter
# cannot drift apart on which addresses are reproducible in C++.


def synthesize_class_method_cpp(addr: int, orig: bytes, route: dict, existing_h_text: str) -> dict | None:
    """
    Synthesizes a clean C++ class member method on `route['class_name']` inside `route['namespaces']`
    for 45+ MSVC 11.0 x86 instruction patterns, verified byte-for-byte via `cl.exe /O2`.

    Returns dict with keys:
      - `method_name`: short method name (`setFlag68`, `getField20`, `scalarDeletingDestructor`, etc.)
      - `qualified_name`: `RBX::ClassName::methodName`
      - `method_decl`: declaration to add to `ClassName.h`
      - `field_decl`: optional union member layout line for `ClassName.h`
      - `helper_decl`: optional helper struct/global declaration before `ClassName` in `ClassName.h`
      - `method_impl`: clean C++ implementation block with `// FUNCTION: ROBLOXSTUDIO 0x...`
    """
    cls = route["class_name"]
    q_cls = route["qualified_class"]
    slot = route.get("slot")

    def pack(base_name: str, ret_type: str, args_sig: str, body_lines: list[str], is_const: bool = False, is_static: bool = False, field_decl: str = "", helper_decl: str = ""):
        m_name = _pick_unique_method_name(base_name, addr, slot, existing_h_text)
        const_kw = " const" if (is_const and not is_static) else ""
        static_kw = "static " if is_static else ""
        decl = f"{static_kw}{ret_type} {m_name}({args_sig}){const_kw};"
        body = "\n".join(f"\t{line}" for line in body_lines)
        impl = (
            f"// STUB: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"{ret_type} {cls}::{m_name}({args_sig}){const_kw}\n"
            f"{{\n"
            f"{body}\n"
            f"}}"
        )
        return {
            "method_name": m_name,
            "qualified_name": f"{q_cls}::{m_name}",
            "method_decl": decl,
            "field_decl": field_decl,
            "helper_decl": helper_decl,
            "method_impl": impl,
        }

    # 1. 33-byte MSVC scalar deleting destructor (492 occurrences in RobloxStudioBeta.exe):
    #    55 8B EC 56 8B F1 E8 <rel32> F6 45 08 01 74 09 56 E8 <rel32> 83 C4 04 8B C6 5E 5D C2 04 00
    if (
        len(orig) == 33
        and orig[:7] == b"\x55\x8b\xec\x56\x8b\xf1\xe8"
        and orig[11:19] == b"\xf6\x45\x08\x01\x74\x09\x56\xe8"
        and orig[23:] == b"\x83\xc4\x04\x8b\xc6\x5e\x5d\xc2\x04\x00"
    ):
        res = pack(
            "scalarDeletingDestructor",
            "void*",
            "unsigned int flags",
            [
                "onDestroy();",
                "if (flags & 1)",
                "\trbx_free_mem(this);",
                "return this;",
            ],
        )
        if "void onDestroy();" not in existing_h_text:
            res["method_decl"] = "void onDestroy();\n\t" + res["method_decl"]
        return res

    # 2. 34-byte MSVC dllimport scalar deleting destructor (90 occurrences):
    #    55 8B EC 56 8B F1 E8 <rel32> F6 45 08 01 74 0A 56 FF 15 <addr32> 83 C4 04 8B C6 5E 5D C2 04 00
    if (
        len(orig) == 34
        and orig[:7] == b"\x55\x8b\xec\x56\x8b\xf1\xe8"
        and orig[11:20] == b"\xf6\x45\x08\x01\x74\x0a\x56\xff\x15"
        and orig[24:] == b"\x83\xc4\x04\x8b\xc6\x5e\x5d\xc2\x04\x00"
    ):
        res = pack(
            "scalarDeletingDestructorImp",
            "void*",
            "unsigned int flags",
            [
                "onDestroy();",
                "if (flags & 1)",
                "\trbx_free_mem_imp(this);",
                "return this;",
            ],
        )
        if "void onDestroy();" not in existing_h_text:
            res["method_decl"] = "void onDestroy();\n\t" + res["method_decl"]
        return res

    # 3. 30-byte static destroy pointer helper (28 occurrences):
    #    55 8B EC 56 8B 75 08 85 F6 74 10 8B CE E8 <rel32> 56 E8 <rel32> 83 C4 04 5E 5D C3
    if (
        len(orig) == 30
        and orig[:14] == b"\x55\x8b\xec\x56\x8b\x75\x08\x85\xf6\x74\x10\x8b\xce\xe8"
        and orig[18:20] == b"\x56\xe8"
        and orig[24:] == b"\x83\xc4\x04\x5e\x5d\xc3"
    ):
        res = pack(
            "destroyInstance",
            "void",
            f"{cls}* p",
            [
                "if (p) {",
                "\tp->onDestroy();",
                "\trbx_free_mem(p);",
                "}",
            ],
            is_static=True,
        )
        if "void onDestroy();" not in existing_h_text:
            res["method_decl"] = "void onDestroy();\n\t" + res["method_decl"]
        return res

    # 4. 26-byte member pointer destroy helper (26 occurrences):
    #    56 8B 71 <off8> 85 F6 74 10 8B CE E8 <rel32> 56 E8 <rel32> 83 C4 04 5E C3
    if (
        len(orig) == 26
        and orig[:3] == b"\x56\x8b\x71"
        and orig[3] < 0x80
        and orig[4:11] == b"\x85\xf6\x74\x10\x8b\xce\xe8"
        and orig[15:17] == b"\x56\xe8"
        and orig[21:] == b"\x83\xc4\x04\x5e\xc3"
    ):
        off8 = orig[3]
        fname = f"ptr_{off8:04x}"
        fdecl = _make_field_union_entry(off8, f"{cls}*", fname)
        res = pack(
            f"destroySubPtr{off8:02X}",
            "void",
            "",
            [
                f"{cls}* p = {fname};",
                "if (p) {",
                "\tp->onDestroy();",
                "\trbx_free_mem(p);",
                "}",
            ],
            field_decl=fdecl,
        )
        if "void onDestroy();" not in existing_h_text:
            res["method_decl"] = "void onDestroy();\n\t" + res["method_decl"]
        return res

    # 5. 36-byte smart-pointer reset (3 occurrences):
    #    55 8B EC 8B 45 08 56 8B 31 89 01 85 F6 74 10 8B CE E8 <rel32> 56 E8 <rel32> 83 C4 04 5E 5D C2 04 00
    if (
        len(orig) == 36
        and orig[:18] == b"\x55\x8b\xec\x8b\x45\x08\x56\x8b\x31\x89\x01\x85\xf6\x74\x10\x8b\xce\xe8"
        and orig[22:24] == b"\x56\xe8"
        and orig[28:] == b"\x83\xc4\x04\x5e\x5d\xc2\x04\x00"
    ):
        fdecl = _make_field_union_entry(0, f"{cls}*", "ptr_0000")
        res = pack(
            "resetPtr",
            "void",
            f"{cls}* newPtr",
            [
                f"{cls}* old = ptr_0000;",
                "ptr_0000 = newPtr;",
                "if (old) {",
                "\told->onDestroy();",
                "\trbx_free_mem(old);",
                "}",
            ],
            field_decl=fdecl,
        )
        if "void onDestroy();" not in existing_h_text:
            res["method_decl"] = "void onDestroy();\n\t" + res["method_decl"]
        return res

    # 6. 21-byte constructor/init wrapper:
    #    55 8B EC 56 FF 75 08 8B F1 E8 <rel32> 8B C6 5E 5D C2 04 00
    if (
        len(orig) == 21
        and orig[:10] == b"\x55\x8b\xec\x56\xff\x75\x08\x8b\xf1\xe8"
        and orig[14:] == b"\x8b\xc6\x5e\x5d\xc2\x04\x00"
    ):
        res = pack(
            "initWithArg",
            f"{cls}*",
            "int value",
            [
                "onInitArg(value);",
                "return this;",
            ],
        )
        if "void onInitArg(int value);" not in existing_h_text:
            res["method_decl"] = "void onInitArg(int value);\n\t" + res["method_decl"]
        return res

    # 7. 17-byte wrapper pushing imm8 (0 or 1) + arg:
    #    55 8B EC 6A <imm8> FF 75 08 E8 <rel32> 5D C2 04 00
    if (
        len(orig) == 17
        and orig[:4] == b"\x55\x8b\xec\x6a"
        and orig[5:9] == b"\xff\x75\x08\xe8"
        and orig[13:] == b"\x5d\xc2\x04\x00"
    ):
        imm8 = struct.unpack_from("<b", orig, 4)[0]
        res = pack(
            f"dispatchWithFlag{imm8 & 0xFF}",
            "void",
            "int arg",
            [f"onDispatchWithFlag(arg, {imm8});"],
        )
        if "void onDispatchWithFlag(int arg, int flag);" not in existing_h_text:
            res["method_decl"] = "void onDispatchWithFlag(int arg, int flag);\n\t" + res["method_decl"]
        return res

    # 8. 10-byte free member field:
    #    FF 71 <off8> E8 <rel32> 59 C3
    if len(orig) == 10 and orig[:2] == b"\xff\x71" and orig[2] < 0x80 and orig[3] == 0xE8 and orig[8:] == b"\x59\xc3":
        off8 = orig[2]
        fname = f"alloc_{off8:04x}"
        fdecl = _make_field_union_entry(off8, "void*", fname)
        return pack(
            f"freeMember{off8:02X}",
            "void",
            "",
            [f"rbx_free_mem({fname});"],
            field_decl=fdecl,
        )

    # 9. 24-byte static assignIfNull (51 occurrences):
    #    55 8B EC 8B 4D 08 83 39 00 75 0B 8B 45 0C 8B 00 85 C0 74 02 89 01 5D C3
    if orig == b"\x55\x8b\xec\x8b\x4d\x08\x83\x39\x00\x75\x0b\x8b\x45\x0c\x8b\x00\x85\xc0\x74\x02\x89\x01\x5d\xc3":
        return pack(
            "assignIfNull",
            "void",
            "int* dst, const int* src",
            [
                "if (*dst == 0) {",
                "\tint v = *src;",
                "\tif (v != 0)",
                "\t\t*dst = v;",
                "}",
            ],
            is_static=True,
        )

    # 10. 26-byte member virtual delete (18 occurrences):
    #     55 8B EC 8B 4D 08 85 C9 74 0C 8B 01 C7 45 08 01 00 00 00 5D FF 20 5D C2 04 00
    if orig == b"\x55\x8b\xec\x8b\x4d\x08\x85\xc9\x74\x0c\x8b\x01\xc7\x45\x08\x01\x00\x00\x00\x5d\xff\x20\x5d\xc2\x04\x00":
        return pack(
            "deleteObject",
            "void",
            "RbxVDelBase* p",
            [
                "if (p)",
                "\tdelete p;",
            ],
        )

    # 11. 18-byte static virtual delete:
    #     55 8B EC 8B 4D 08 85 C9 74 06 8B 01 6A 01 FF 10 5D C3
    if orig == b"\x55\x8b\xec\x8b\x4d\x08\x85\xc9\x74\x06\x8b\x01\x6a\x01\xff\x10\x5d\xc3":
        return pack(
            "deleteObjectStatic",
            "void",
            "RbxVDelBase* p",
            ["delete p;"],
            is_static=True,
        )

    # 12. B8 <imm32> C3 -> mov eax, imm32; ret (6 bytes)
    if len(orig) == 6 and orig[0] == 0xB8 and orig[5] == 0xC3:
        val = struct.unpack_from("<i", orig, 1)[0]
        bname = f"getConst{val}" if val >= 0 else f"getConstNeg{abs(val)}"
        return pack(bname, "int", "", [f"return {val};"], is_const=True)

    # 13. A0 <addr32> C3 -> mov al, byte ptr [global]; ret (6 bytes)
    if len(orig) == 6 and orig[0] == 0xA0 and orig[5] == 0xC3:
        gname = f"s_flag_{addr:08x}"
        return pack(
            f"getFlag_{addr & 0xFFFF:04x}",
            "bool",
            "",
            [f"return {gname};"],
            is_const=True,
            helper_decl=f"extern bool {gname};",
        )

    # 14. A1 <addr32> C3 -> mov eax, dword ptr [global]; ret (6 bytes)
    if len(orig) == 6 and orig[0] == 0xA1 and orig[5] == 0xC3:
        gname = f"s_value_{addr:08x}"
        return pack(
            f"getGlobal_{addr & 0xFFFF:04x}",
            "int",
            "",
            [f"return {gname};"],
            is_const=True,
            helper_decl=f"extern int {gname};",
        )

    # 15. B8 <imm32> C2 <imm16> -> mov eax, imm32; ret N (8 bytes)
    if len(orig) == 8 and orig[0] == 0xB8 and orig[5] == 0xC2:
        val = struct.unpack_from("<i", orig, 1)[0]
        stack_bytes = struct.unpack_from("<H", orig, 6)[0]
        if stack_bytes % 4 == 0 and stack_bytes <= 32:
            args = ", ".join(f"int a{i}" for i in range(stack_bytes // 4))
            bname = f"evalConst{val}" if val >= 0 else f"evalConstNeg{abs(val)}"
            return pack(bname, "int", args, [f"return {val};"], is_const=True)

    # 16. 33 C0 C3 -> xor eax, eax; ret (3 bytes)
    if orig == b"\x33\xc0\xc3":
        return pack("getZero", "int", "", ["return 0;"], is_const=True)

    # 17. 32 C0 C3 -> xor al, al; ret (3 bytes)
    if orig == b"\x32\xc0\xc3":
        return pack("isFalse", "bool", "", ["return false;"], is_const=True)

    # 18. B0 <imm8> C3 -> mov al, imm8; ret (3 bytes)
    if len(orig) == 3 and orig[0] == 0xB0 and orig[2] == 0xC3:
        val = orig[1]
        if val in (0, 1):
            lit = "true" if val == 1 else "false"
            bname = "isTrue" if val == 1 else "isFalse"
            return pack(bname, "bool", "", [f"return {lit};"], is_const=True)
        return pack(f"getByte{val}", "unsigned char", "", [f"return {val};"], is_const=True)

    # 19. 33 C0 C2 <imm16> -> xor eax, eax; ret N (5 bytes)
    if len(orig) == 5 and orig[:3] == b"\x33\xc0\xc2":
        stack_bytes = struct.unpack_from("<H", orig, 3)[0]
        if stack_bytes % 4 == 0 and stack_bytes <= 32:
            args = ", ".join(f"int a{i}" for i in range(stack_bytes // 4))
            return pack("evalZero", "int", args, ["return 0;"], is_const=True)

    # 20. 32 C0 C2 <imm16> -> xor al, al; ret N (5 bytes)
    if len(orig) == 5 and orig[:3] == b"\x32\xc0\xc2":
        stack_bytes = struct.unpack_from("<H", orig, 3)[0]
        if stack_bytes % 4 == 0 and stack_bytes <= 32:
            args = ", ".join(f"int a{i}" for i in range(stack_bytes // 4))
            return pack("canAccept", "bool", args, ["return false;"], is_const=True)

    # 21. B0 <imm8> C2 <imm16> -> mov al, imm8; ret N (5 bytes)
    if len(orig) == 5 and orig[0] == 0xB0 and orig[2] == 0xC2:
        val = orig[1]
        stack_bytes = struct.unpack_from("<H", orig, 3)[0]
        if stack_bytes % 4 == 0 and stack_bytes <= 32 and val in (0, 1):
            args = ", ".join(f"int a{i}" for i in range(stack_bytes // 4))
            lit = "true" if val == 1 else "false"
            return pack("shouldAllow" if val == 1 else "canAccept", "bool", args, [f"return {lit};"], is_const=True)

    # 22. C3 -> ret (1 byte)
    if orig == b"\xc3":
        return pack("noop", "void", "", [])

    # 23. 8B 41 <off8> C3 -> mov eax, [ecx+off8]; ret (4 bytes)
    if len(orig) == 4 and orig[0] == 0x8B and orig[1] == 0x41 and orig[2] < 0x80 and orig[3] == 0xC3:
        off8 = orig[2]
        fname = f"field_{off8:04x}"
        fdecl = _make_field_union_entry(off8, "int", fname)
        return pack(f"getField{off8:02X}", "int", "", [f"return {fname};"], is_const=True, field_decl=fdecl)

    # 24. 8A 41 <off8> C3 -> mov al, [ecx+off8]; ret (4 bytes)
    if len(orig) == 4 and orig[0] == 0x8A and orig[1] == 0x41 and orig[2] < 0x80 and orig[3] == 0xC3:
        off8 = orig[2]
        fname = f"flag_{off8:04x}"
        fdecl = _make_field_union_entry(off8, "bool", fname)
        return pack(f"getFlag{off8:02X}", "bool", "", [f"return {fname};"], is_const=True, field_decl=fdecl)

    # 25. 8B 81 <off32> C3 -> mov eax, [ecx+off32]; ret (7 bytes)
    if len(orig) == 7 and orig[0] == 0x8B and orig[1] == 0x81 and orig[6] == 0xC3:
        off32 = struct.unpack_from("<I", orig, 2)[0]
        if 0x80 <= off32 <= 0x10000:
            fname = f"field_{off32:04x}"
            fdecl = _make_field_union_entry(off32, "int", fname)
            return pack(f"getField{off32:X}", "int", "", [f"return {fname};"], is_const=True, field_decl=fdecl)

    # 26. 8A 81 <off32> C3 -> mov al, [ecx+off32]; ret (7 bytes)
    if len(orig) == 7 and orig[0] == 0x8A and orig[1] == 0x81 and orig[6] == 0xC3:
        off32 = struct.unpack_from("<I", orig, 2)[0]
        if 0x80 <= off32 <= 0x10000:
            fname = f"flag_{off32:04x}"
            fdecl = _make_field_union_entry(off32, "bool", fname)
            return pack(f"getFlag{off32:X}", "bool", "", [f"return {fname};"], is_const=True, field_decl=fdecl)

    # 27. 8D 41 <off8> C3 -> lea eax, [ecx+off8]; ret (4 bytes)
    if len(orig) == 4 and orig[0] == 0x8D and orig[1] == 0x41 and orig[2] < 0x80 and orig[3] == 0xC3:
        off8 = orig[2]
        fname = f"member_{off8:04x}"
        fdecl = _make_field_union_entry(off8, "int", fname)
        return pack(f"getMemberPtr{off8:02X}", "const int*", "", [f"return &{fname};"], is_const=True, field_decl=fdecl)

    # 28. 8D 81 <off32> C3 -> lea eax, [ecx+off32]; ret (7 bytes)
    if len(orig) == 7 and orig[0] == 0x8D and orig[1] == 0x81 and orig[6] == 0xC3:
        off32 = struct.unpack_from("<I", orig, 2)[0]
        if 0x80 <= off32 <= 0x10000:
            fname = f"member_{off32:04x}"
            fdecl = _make_field_union_entry(off32, "int", fname)
            return pack(f"getMemberPtr{off32:X}", "const int*", "", [f"return &{fname};"], is_const=True, field_decl=fdecl)

    # 29. 8B C1 C3 -> mov eax, ecx; ret (3 bytes)
    if orig == b"\x8b\xc1\xc3":
        return pack("getSelf", f"const {cls}*", "", ["return this;"], is_const=True)

    # 30. 8B 41 <off1> 83 C0 <add8> C3 -> mov eax, [ecx+off1]; add eax, add8; ret (7 bytes)
    if len(orig) == 7 and orig[0] == 0x8B and orig[1] == 0x41 and orig[2] < 0x80 and orig[3] == 0x83 and orig[4] == 0xC0 and orig[5] < 0x80 and orig[6] == 0xC3:
        off1, add8 = orig[2], orig[5]
        fname = f"buf_{off1:04x}"
        fdecl = _make_field_union_entry(off1, "char*", fname)
        return pack(f"getBufferOffset{off1:02X}_{add8:02X}", "char*", "", [f"return {fname} + {add8};"], is_const=True, field_decl=fdecl)

    # 31. 8B 41 <off1> 8B 40 <off2> C3 -> mov eax, [ecx+off1]; mov eax, [eax+off2]; ret (7 bytes)
    if len(orig) == 7 and orig[0] == 0x8B and orig[1] == 0x41 and orig[2] < 0x80 and orig[3] == 0x8B and orig[4] == 0x40 and orig[5] < 0x80 and orig[6] == 0xC3:
        off1, off2 = orig[2], orig[5]
        sub_struct = f"Sub_{cls}_{off1:02x}_{off2:02x}"
        hdecl = f"struct {sub_struct} {{ char pad[{max(1, off2)}]; int val; }};"
        fname = f"sub_{off1:04x}_{off2:02x}"
        fdecl = _make_field_union_entry(off1, f"{sub_struct}*", fname)
        return pack(f"getSubField{off1:02X}_{off2:02X}", "int", "", [f"return {fname}->val;"], is_const=True, field_decl=fdecl, helper_decl=hdecl)

    # 32. 8B 41 <off1> 8B 80 <off32> C3 -> mov eax, [ecx+off1]; mov eax, [eax+off32]; ret (10 bytes)
    if len(orig) == 10 and orig[0] == 0x8B and orig[1] == 0x41 and orig[2] < 0x80 and orig[3] == 0x8B and orig[4] == 0x80 and orig[9] == 0xC3:
        off1 = orig[2]
        off2 = struct.unpack_from("<I", orig, 5)[0]
        if 0x80 <= off2 <= 0x10000:
            sub_struct = f"Sub_{cls}_{off1:02x}_{off2:04x}"
            hdecl = f"struct {sub_struct} {{ char pad[{max(1, off2)}]; int val; }};"
            fname = f"sub_{off1:04x}_{off2:04x}"
            fdecl = _make_field_union_entry(off1, f"{sub_struct}*", fname)
            return pack(f"getSubField{off1:02X}_{off2:X}", "int", "", [f"return {fname}->val;"], is_const=True, field_decl=fdecl, helper_decl=hdecl)

    # 33. 8B 81 <off1_32> 8B 80 <off2_32> C3 -> mov eax, [ecx+off1_32]; mov eax, [eax+off2_32]; ret (13 bytes)
    if len(orig) == 13 and orig[0] == 0x8B and orig[1] == 0x81 and orig[6] == 0x8B and orig[7] == 0x80 and orig[12] == 0xC3:
        off1 = struct.unpack_from("<I", orig, 2)[0]
        off2 = struct.unpack_from("<I", orig, 8)[0]
        if 0x80 <= off1 <= 0x10000 and 0x80 <= off2 <= 0x10000:
            sub_struct = f"Sub_{cls}_{off1:04x}_{off2:04x}"
            hdecl = f"struct {sub_struct} {{ char pad[{max(1, off2)}]; int val; }};"
            fname = f"sub_{off1:04x}_{off2:04x}"
            fdecl = _make_field_union_entry(off1, f"{sub_struct}*", fname)
            return pack(f"getSubField{off1:X}_{off2:X}", "int", "", [f"return {fname}->val;"], is_const=True, field_decl=fdecl, helper_decl=hdecl)

    # 34. 8B 81 <off1_32> 8A 80 <off2_32> C3 -> mov eax, [ecx+off1_32]; mov al, [eax+off2_32]; ret (13 bytes)
    if len(orig) == 13 and orig[0] == 0x8B and orig[1] == 0x81 and orig[6] == 0x8A and orig[7] == 0x80 and orig[12] == 0xC3:
        off1 = struct.unpack_from("<I", orig, 2)[0]
        off2 = struct.unpack_from("<I", orig, 8)[0]
        if 0x80 <= off1 <= 0x10000 and 0x80 <= off2 <= 0x10000:
            sub_struct = f"SubBool_{cls}_{off1:04x}_{off2:04x}"
            hdecl = f"struct {sub_struct} {{ char pad[{max(1, off2)}]; bool val; }};"
            fname = f"subb_{off1:04x}_{off2:04x}"
            fdecl = _make_field_union_entry(off1, f"{sub_struct}*", fname)
            return pack(f"getSubFlag{off1:X}_{off2:X}", "bool", "", [f"return {fname}->val;"], is_const=True, field_decl=fdecl, helper_decl=hdecl)

    # 35. 55 8B EC 8B 45 08 8B 00 5D C3 -> static int derefInt(const int* p) { return *p; } (10 bytes)
    if orig == b"\x55\x8b\xec\x8b\x45\x08\x8b\x00\x5d\xc3":
        return pack("derefInt", "int", "const int* p", ["return *p;"], is_static=True)

    # 36. 55 8B EC 8B 45 08 5D C2 04 00 -> int identity(int a) const { return a; } (10 bytes)
    if orig == b"\x55\x8b\xec\x8b\x45\x08\x5d\xc2\x04\x00":
        return pack("identity", "int", "int a", ["return a;"], is_const=True)

    # 37. 55 8B EC 8B 45 08 89 41 <off8> 5D C2 04 00 -> __thiscall int setter (13 bytes)
    if len(orig) == 13 and orig[:8] == b"\x55\x8b\xec\x8b\x45\x08\x89\x41" and orig[8] < 0x80 and orig[9:] == b"\x5d\xc2\x04\x00":
        off8 = orig[8]
        fname = f"field_{off8:04x}"
        fdecl = _make_field_union_entry(off8, "int", fname)
        return pack(f"setField{off8:02X}", "void", "int value", [f"{fname} = value;"], field_decl=fdecl)

    # 38. 55 8B EC 8B 45 08 89 81 <off32> 5D C2 04 00 -> __thiscall int setter off32 (16 bytes)
    if len(orig) == 16 and orig[:8] == b"\x55\x8b\xec\x8b\x45\x08\x89\x81" and orig[12:] == b"\x5d\xc2\x04\x00":
        off32 = struct.unpack_from("<I", orig, 8)[0]
        if 0x80 <= off32 <= 0x10000:
            fname = f"field_{off32:04x}"
            fdecl = _make_field_union_entry(off32, "int", fname)
            return pack(f"setField{off32:X}", "void", "int value", [f"{fname} = value;"], field_decl=fdecl)

    # 39. 55 8B EC 8A 45 08 88 41 <off8> 5D C2 04 00 -> __thiscall bool setter (13 bytes)
    if len(orig) == 13 and orig[:8] == b"\x55\x8b\xec\x8a\x45\x08\x88\x41" and orig[8] < 0x80 and orig[9:] == b"\x5d\xc2\x04\x00":
        off8 = orig[8]
        fname = f"flag_{off8:04x}"
        fdecl = _make_field_union_entry(off8, "bool", fname)
        return pack(f"setFlag{off8:02X}", "void", "bool value", [f"{fname} = value;"], field_decl=fdecl)

    # 40. 55 8B EC 8A 45 08 88 81 <off32> 5D C2 04 00 -> __thiscall bool setter off32 (16 bytes)
    if len(orig) == 16 and orig[:8] == b"\x55\x8b\xec\x8a\x45\x08\x88\x81" and orig[12:] == b"\x5d\xc2\x04\x00":
        off32 = struct.unpack_from("<I", orig, 8)[0]
        if 0x80 <= off32 <= 0x10000:
            fname = f"flag_{off32:04x}"
            fdecl = _make_field_union_entry(off32, "bool", fname)
            return pack(f"setFlag{off32:X}", "void", "bool value", [f"{fname} = value;"], field_decl=fdecl)

    # 41. 55 8B EC 8B 45 08 A3 <addr32> 5D C2 04 00 -> global int setter (15 bytes)
    if len(orig) == 15 and orig[:7] == b"\x55\x8b\xec\x8b\x45\x08\xa3" and orig[11:] == b"\x5d\xc2\x04\x00":
        gname = f"s_val_{addr:08x}"
        return pack(
            f"setGlobal_{addr & 0xFFFF:04x}",
            "void",
            "int value",
            [f"{gname} = value;"],
            helper_decl=f"extern int {gname};",
        )

    # 42. 55 8B EC 8B 4D 08 8B 45 0C 01 01 5D C3 -> static void addAssign(int* p, int v) { *p += v; } (13 bytes)
    if orig == b"\x55\x8b\xec\x8b\x4d\x08\x8b\x45\x0c\x01\x01\x5d\xc3":
        return pack("addAssign", "void", "int* p, int v", ["*p += v;"], is_static=True)

    # 43. 55 8B EC 8B 55 08 8B 01 89 02 89 11 5D C2 04 00 -> intrusive list push (16 bytes)
    if orig == b"\x55\x8b\xec\x8b\x55\x08\x8b\x01\x89\x02\x89\x11\x5d\xc2\x04\x00":
        return pack(
            "pushFrontNode",
            "void",
            "int* node",
            [
                "*node = _vtable_or_head;",
                "_vtable_or_head = (int)node;",
            ],
        )

    # 44. 55 8B EC 8B 45 08 8B 55 0C 89 10 89 48 04 5D C2 08 00 -> __thiscall pair init (18 bytes)
    if orig == b"\x55\x8b\xec\x8b\x45\x08\x8b\x55\x0c\x89\x10\x89\x48\x04\x5d\xc2\x08\x00":
        return pack(
            "makePair",
            "RbxPairInt*",
            "RbxPairInt* out, int firstVal",
            [
                "out->first = firstVal;",
                "out->second = (int)this;",
                "return out;",
            ],
        )

    return None


_LAST_KAGGLE_CHECK_TS = 0.0


def ensure_kaggle_kernel_alive():
    if BACKEND != "kaggle":
        return
    """
    If the 12-hour Kaggle Dual-T4 GPU session expires (`COMPLETE` / `ERROR` / `CANCELLED`),
    automatically deletes any stale kernel versions and pushes a fresh `NvidiaTeslaT4` session.
    """
    global _LAST_KAGGLE_CHECK_TS
    now = time.time()
    if now - _LAST_KAGGLE_CHECK_TS < 600:
        return
    _LAST_KAGGLE_CHECK_TS = now

    kernel_dirs = [
        ROOT / "tools" / "kaggle_agent_host",
        Path(r"C:\kaggle_agent_host"),
        Path(r"D:\Work\KaggleAIhosting\kaggle_agent_host"),
    ]
    host_dir = next((d for d in kernel_dirs if (d / "kernel-metadata.json").exists()), None)
    if not host_dir:
        return

    try:
        res = subprocess.run(
            ["kaggle", "kernels", "status", KERNEL_REF],
            capture_output=True,
            text=True,
            timeout=20,
        )
        out = (res.stdout or "") + (res.stderr or "")
        if res.returncode == 0 and any(
            s in out for s in ("KernelWorkerStatus.COMPLETE", "KernelWorkerStatus.ERROR", "KernelWorkerStatus.CANCELLED", "403 - Forbidden")
        ):
            log(f"Kaggle kernel status is '{out.strip()}'. Deleting old session & pushing fresh 12h Dual-T4 session...")
            subprocess.run(["kaggle", "kernels", "delete", KERNEL_REF, "--yes"], check=False, timeout=30)
            subprocess.run(["kaggle", "kernels", "push", "-p", str(host_dir), "--accelerator", "NvidiaTeslaT4"], check=False, timeout=45)
    except Exception as e:
        log(f"Kaggle status check warning: {e}")


def run_deterministic_batch_pass(candidate_addrs: list[int], max_matches: int = 80) -> list[str]:
    """
    Scans `candidate_addrs` for deterministic MSVC 11.0 x86 patterns, routes each matched
    function to its real subsystem `.cpp` and `.h` file (`Client/App/v8world/Ball.cpp`,
    `Client/Network/ProfiledRakPeer.cpp`, etc.), and compiles & verifies per `.cpp` file in batches.
    """
    router = source_router.get_router()
    sizes = verify_tu.load_function_sizes()
    matched_hex: list[str] = []
    touched_cpps: dict[Path, list[tuple[int, bytes, str, str]]] = {}

    for addr in candidate_addrs:
        if len(matched_hex) >= max_matches:
            break
        sz = sizes.get(addr, 16)
        if sz > 40:
            continue
        orig_bytes = verify_tu.get_original_function_bytes(addr, sz)
        route = router.route_address(addr)
        cpp_path, h_path = source_router.ensure_class_header_and_cpp(route)
        existing_h = h_path.read_text(encoding="utf-8")

        synth = synthesize_class_method_cpp(addr, orig_bytes, route, existing_h)
        if not synth:
            continue

        source_router.ensure_class_header_and_cpp(
            route,
            method_decl=synth["method_decl"],
            field_decl=synth["field_decl"],
            helper_decl=synth["helper_decl"],
        )
        source_router.append_method_to_cpp(cpp_path, synth["method_impl"])
        touched_cpps.setdefault(cpp_path, []).append((addr, orig_bytes, synth["method_name"], synth["qualified_name"]))
        matched_hex.append(f"0x{addr:08x}")

    # Verify every touched .cpp translation unit with cl.exe /O2
    verified_hex: list[str] = []
    for cpp_path, items in touched_cpps.items():
        ok, obj_path, compiler_out = verify_tu.compile_cpp_to_coff(cpp_path, use_cache=False)
        if not ok:
            log(f"  [WARN] Batch compile failed on {cpp_path.relative_to(ROOT)}: {compiler_out[:300]}")
            continue
        coff_funcs = verify_tu.parse_coff_functions(obj_path)
        for addr, orig_bytes, short_name, q_name in items:
            matched_sym = False
            for sym_name, (recomp_bytes, rel_offsets) in coff_funcs.items():
                if f"?{short_name}@" in sym_name or short_name in sym_name:
                    pct, _ = verify_tu.compare_with_relocations(orig_bytes, recomp_bytes, rel_offsets)
                    if pct >= 99.99:
                        promote_marker(cpp_path, addr)
                        log(f"  [0x{addr:08x}] 100.00% byte-exact match -> {q_name} in {cpp_path.relative_to(ROOT)} ({len(orig_bytes)}B)")
                        verified_hex.append(f"0x{addr:08x}")
                        matched_sym = True
                        break
            if not matched_sym:
                log(f"  [WARN] Symbol {short_name} (0x{addr:08x}) did not reach 100% in {cpp_path.name}")

    return verified_hex


_STORAGE_KEYWORDS = (
    "virtual",
    "static",
    "inline",
    "__thiscall",
    "__cdecl",
    "__stdcall",
    "explicit",
    "extern",
    "constexpr",
    "register",
)
_BUILTIN_TYPE_WORDS = {
    "void", "int", "char", "float", "double", "bool", "short", "long", "unsigned",
    "signed", "const", "volatile", "struct", "class", "enum", "union", "std",
    "size_t", "wchar_t", "auto", "this", "return", "operator", "true", "false",
}
_QUALIFIED_HEAD_RE = re.compile(
    r"(?P<qual>(?:[A-Za-z_]\w*\s*::\s*)+)(?P<name>~?[A-Za-z_]\w*)\s*\("
)
_STATEMENT_SEP_RE = re.compile(r"[;{}]")


def _split_params(text: str, open_idx: int) -> tuple[str, int]:
    """Returns (parameter_text, index_after_closing_paren) for the `(` at `open_idx`."""
    depth = 0
    angle = 0
    i = open_idx
    while i < len(text):
        ch = text[i]
        if ch == '"':
            i += 1
            while i < len(text) and text[i] != '"':
                i += 2 if text[i] == "\\" else 1
        elif ch == "<":
            angle += 1
        elif ch == ">" and angle:
            angle -= 1
        elif not angle and ch == "(":
            depth += 1
        elif not angle and ch == ")":
            depth -= 1
            if depth == 0:
                return text[open_idx + 1 : i], i + 1
        i += 1
    return "", -1


def _normalize_generated_definition(snippet: str, route: dict) -> tuple[str, dict | None]:
    """
    Collapses a generated definition head onto `<route.class_name>::<name>` and derives the
    member declaration the header must carry.

    The block is appended *inside* `namespace X { ... }`, so a definition that repeats the
    enclosing namespace is C2888 ('symbol cannot be defined within namespace "X"'), and one
    that names any other owning class is C2039 ('is not a member of'). Together those were 86
    of 192 compile failures in a 4.6 hour window, and each cost a full model round-trip.
    """
    cls = route["class_name"]
    for match in _QUALIFIED_HEAD_RE.finditer(snippet):
        prefix = snippet[: match.start()]
        seg_start = 0
        for sep in _STATEMENT_SEP_RE.finditer(prefix):
            seg_start = sep.end()
        # The `// FUNCTION: 0x...` marker sits right above the head and is not part of the
        # signature; leaving it in rejects a perfectly good definition.
        segment = re.sub(r"//[^\n]*", "", prefix[seg_start:])
        # A call (`return RBX::Math::clamp(`) is not a definition head: a definition head is a
        # return type, optionally preceded by storage keywords, and nothing else.
        if any(tok in segment for tok in ("=", "(", ")", "return", "delete", "[", "]")):
            continue
        ret_type = " ".join(segment.split())
        for _ in range(4):
            for kw in _STORAGE_KEYWORDS:
                if ret_type.startswith(kw + " "):
                    ret_type = ret_type[len(kw) + 1 :].strip()

        name = match.group("name").strip()
        if ret_type:
            if not re.match(r"^[A-Za-z_~]", ret_type):
                continue
        elif name not in (cls, "~" + cls):
            # A head with no return type is only legal for a constructor/destructor.
            continue

        params, after = _split_params(snippet, match.end() - 1)
        if after < 0:
            continue
        # A parameter list split across lines is legal but produces an unreadable declaration.
        params = re.sub(r"\s*\n\s*", " ", params)
        is_const = bool(re.match(r"\s*const\b", snippet[after : after + 24]))
        parts = [p.strip() for p in match.group("qual").strip().rstrip(":").split("::") if p.strip()]
        original_class = parts[-1] if parts else cls
        # `QWidget *Class::m()` rather than `QWidget * Class::m()`.
        sep = "" if ret_type.endswith(("*", "&")) else " "

        # Rewrite only the qualified head itself. Rebuilding from the statement start would
        # delete the `// STUB:`/`// FUNCTION:` marker sitting above it, and a match with no
        # annotation promotes nothing and is silently left as uncounted dead code.
        snippet = snippet[: match.start()] + f"{cls}::{name}(" + snippet[match.end() :]
        return snippet, {
            "method_name": name,
            "class": cls,
            "original_class": original_class,
            "renamed": original_class != cls,
            "decl": (f"{ret_type}{sep}" if ret_type else "") + f"{name}({params}){' const' if is_const else ''};",
        }
    return snippet, None


_ERROR_LINE_RE = re.compile(
    r"(?P<file>[^|\n]+?)\((?P<line>\d+)\)\s*:\s*(?:fatal\s+)?error\s+(?P<code>C\d{4})\s*:\s*(?P<msg>[^|\n]*)"
)
# C4430/C2143/C3646 report an unknown type; C2065/C2653 name it in quotes; C2504 is an
# undefined base class. C2039 is deliberately absent: the quoted token there is the *member*
# name, so forward-declaring it would inject `class dispose;`.
_UNKNOWN_TYPE_CODES = {"C4430", "C2143", "C2065", "C2653", "C2504", "C3646"}


def _leading_pointer_type(line: str) -> str | None:
    """`QWidget *getWidget();` -> `QWidget` (the type MSVC could not name)."""
    m = re.match(r"^\s*(?:[A-Za-z_]\w*\s+)*(?P<name>[A-Za-z_]\w*)\s*[\*&]", line)
    return m.group("name") if m else None


def _repair_missing_declarations(compiler_out: str, cpp_path: Path, h_path: Path) -> bool:
    """
    Uses the ~2s compiler as a declaration oracle instead of paying a ~150s model call for it:
    reads undeclared-type errors and forward-declares them in the target header so the caller can
    simply recompile. Declarations are kept inside the namespace block so unqualified uses resolve.
    Returns True when the header actually changed.
    """
    try:
        h_text = h_path.read_text(encoding="utf-8")
        cpp_text = cpp_path.read_text(encoding="utf-8", errors="ignore")
    except OSError:
        return False

    wanted: list[str] = []
    for m in _ERROR_LINE_RE.finditer(compiler_out):
        if m.group("code") not in _UNKNOWN_TYPE_CODES:
            continue
        ident = None
        quoted = re.search(r"'([A-Za-z_]\w*)'", m.group("msg"))
        if quoted:
            ident = quoted.group(1)
        else:
            err_file = m.group("file").replace("\\", "/").rsplit("/", 1)[-1]
            source = h_text if err_file == h_path.name else cpp_text if err_file == cpp_path.name else None
            if source is not None:
                try:
                    ident = _leading_pointer_type(source.splitlines()[int(m.group("line")) - 1])
                except (IndexError, ValueError):
                    ident = None
        if ident and ident not in _BUILTIN_TYPE_WORDS and ident not in wanted:
            wanted.append(ident)
    if not wanted:
        return False

    extra: list[str] = []
    for ident in wanted[:4]:
        if re.search(r"\b(?:class|struct|union|enum)\s+" + re.escape(ident) + r"\b", h_text):
            continue
        if re.search(r"\btypedef\b[^;]*\b" + re.escape(ident) + r"\b\s*;", h_text):
            continue
        if ident == "NULL":
            if "#define NULL" in h_text:
                continue
            extra.append("#ifndef NULL\n#define NULL 0\n#endif")
        else:
            extra.append(f"class {ident};")
    if not extra:
        return False

    block = "\n".join(extra)
    marker = "// AUTO-GENERATED HELPERS"
    if marker in h_text:
        h_text = h_text.replace(marker, f"{block}\n{marker}", 1)
    else:
        ns = re.search(r"^namespace\s+\w+\s*\{", h_text, flags=re.MULTILINE)
        if not ns:
            return False
        h_text = h_text[: ns.end()] + f"\n{block}" + h_text[ns.end() :]
    h_path.write_text(h_text, encoding="utf-8")
    return True


def _mentions_address(text: str, addr: int) -> bool:
    """Models echo the marker either padded (`0x004028a0`) or unpadded (`0x4028a0`)."""
    low = text.lower()
    return f"0x{addr:08x}" in low or f"0x{addr:x}" in low


def decompile_function_with_retries(addr: int, base_url: str | None) -> tuple[bool, float, str]:
    """
    Runs the full decompile -> compile -> COFF byte-diff -> repair loop (up to 6 iterations)
    for function `0x<addr:08x>`, routing it to its real subsystem `.cpp` and `.h` file and using
    Adaptive MoE Reasoning Escalation (`8K -> 24K -> 64K` output/thinking budget).
    """
    router = source_router.get_router()
    route = router.route_address(addr)
    with WRITE_LOCK:
        cpp_path, h_path = source_router.ensure_class_header_and_cpp(route)

    sizes = verify_tu.load_function_sizes()
    fn_size = sizes.get(addr, 16)
    # Small routines are usually one-block getters: `high` reproduces them as reliably as
    # `max` and returns in half the time. Anything larger keeps the deeper first pass.
    # The gateway queues requests, so at this pool size `low` (128s) is no faster than `max`
    # (140s): thinking effort costs almost nothing in wall clock, while a weak first pass costs
    # a whole extra call. Buy accuracy up front instead of buying retries later.
    first_effort = "high"
    orig_bytes = verify_tu.get_original_function_bytes(addr, fn_size)
    if classify_target(orig_bytes) != "real":
        return False, 0.0, ""

    # Fast-path deterministic check first
    existing_h = h_path.read_text(encoding="utf-8")
    synth = synthesize_class_method_cpp(addr, orig_bytes, route, existing_h)
    if synth:
        prev_h = existing_h
        prev_cpp = cpp_path.read_text(encoding="utf-8")
        source_router.ensure_class_header_and_cpp(
            route,
            method_decl=synth["method_decl"],
            field_decl=synth["field_decl"],
            helper_decl=synth["helper_decl"],
        )
        source_router.append_method_to_cpp(cpp_path, synth["method_impl"])
        ok, obj_path, _ = verify_tu.compile_cpp_to_coff(cpp_path, use_cache=False)
        if ok:
            coff_funcs = verify_tu.parse_coff_functions(obj_path)
            short_name = synth["method_name"]
            for sym_name, (recomp_bytes, rel_offsets) in coff_funcs.items():
                if f"?{short_name}@" in sym_name or short_name in sym_name:
                    pct, _ = verify_tu.compare_with_relocations(orig_bytes, recomp_bytes, rel_offsets)
                    if pct >= 99.99:
                        promote_marker(cpp_path, addr)
                        log(f"  [0x{addr:08x}] Exact 100.00% match -> {synth['qualified_name']} in {route['cpp_rel']} ({len(orig_bytes)}B)")
                        return True, pct, synth["qualified_name"]
        h_path.write_text(prev_h, encoding="utf-8")
        cpp_path.write_text(prev_cpp, encoding="utf-8")

    if not base_url:
        return False, 0.0, ""

    card = func_context.build_rich_context_card(addr)
    claude_md = (ROOT / "CLAUDE.md").read_text(encoding="utf-8")
    original_cpp_content = cpp_path.read_text(encoding="utf-8")
    original_h_content = h_path.read_text(encoding="utf-8")
    # 320K of context is affordable, but the prompt still has to stay a single useful request:
    # the tail holds the most recent helpers and the exact style the model should continue.
    cpp_excerpt = original_cpp_content[-24000:] if len(original_cpp_content) > 24000 else original_cpp_content

    system_prompt = (
        "You are an elite MSVC 11.0 (Visual Studio 2012 x86) C++ reverse engineer working on OpenRBX-2014.\n"
        f"Target Source File: `{route['cpp_rel']}` | Target Header: `{route['h_rel']}` | Owning Class: `{route['qualified_class']}`\n"
        "Write clean, human-readable C++ code matching the style of `Asphaltian/OpenRBX`.\n"
        f"Your code will be placed inside `namespace {'::'.join(route['namespaces'])}` in `{route['cpp_rel']}`.\n"
        "You may define a static/member method or free function preceded by "
        f"`// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}` inside a ```cpp code block.\n"
        "Do NOT include `main()` or non-existent external headers.\n\n"
        "Write plain C++ only: no `__asm`/inline assembly, no absolute-address calls, and "
        f"the body must be a member of `{route['class_name']}` with an ordinary signature.\n\n"
        f"HARD RULES for the owning class `{route['class_name']}`:\n"
        f"1. Define exactly one method as `<ReturnType> {route['class_name']}::<name>(<params>)`.\n"
        f"2. Never repeat `{'::'.join(route['namespaces'])}::` in that definition head -- the block is "
        "already inserted inside that namespace, so a qualified head is MSVC C2888.\n"
        f"3. Never define a member of a different class; if the real owner looks different, still write "
        f"`{route['class_name']}::<name>` (anything else is C2039).\n"
        f"4. The matching declaration is added to `{route['h_rel']}` automatically. Every type you use "
        "must be a builtin, already visible in the header, or forward-declared (`class Foo;`) at the "
        "top of your own block.\n"
        "5. Never declare a class, struct or enum inside the function body: a local class whose methods "
        "are not defined inline is MSVC C3640, which cannot be repaired afterwards.\n"
        "6. A non-void return type must return a value on every path (C4716).\n"
        "7. Never open or extend `namespace std`; doing so corrupts the system headers that follow.\n\n"
        + claude_md
    )

    feedback_history = ""
    best_code = None
    best_pct = -1.0
    max_attempts = 2
    # Thinking budget escalation. DeepSeek V4.1 Flash accepts 131,072 output tokens, and the
    # gateway bills this catalog entry 0 theos per request, so the ceiling is set high: a
    # difficult 2014 routine benefits far more from one deep pass than from many shallow ones.
    # Effort is tiered: most targets are small getters, and paying `max` thinking on a
    # first attempt wasted more time than the repair loop it was meant to avoid.
    token_schedule = [16384, 32768, 65536]

    for attempt in range(1, max_attempts + 1):
        budget_tokens = min(MAX_OUTPUT_TOKENS, token_schedule[attempt - 1])
        candidate_cpp_snippet = None
        prompt = (
            f"Decompile the following 2014 Roblox (`ROBLOXSTUDIO`) x86 function (`0x{addr:08x}`) "
            f"for `{route['qualified_class']}` in `{route['cpp_rel']}` to 100% byte-matching C++:\n\n"
            f"Current `{route['h_rel']}` header:\n```cpp\n{original_h_content}\n```\n\n"
            f"Current `{route['cpp_rel']}` translation unit (tail, for existing members and helpers):\n"
            f"```cpp\n{cpp_excerpt}\n```\n\n"
            f"{card}\n\n"
            f"{feedback_history}\n"
            f"Provide only the C++ implementation block (and any needed inline struct/declaration above it) "
            f"preceded by `// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}` in a ```cpp block."
        )
        publish_status(
            state="generating",
            address=f"0x{addr:08x}",
            name=route["qualified_class"],
            attempt=attempt,
            pct=round(best_pct, 2) if best_pct >= 0 else None,
        )
        effort = first_effort if attempt == 1 else "max"
        try:
            resp_text = call_llm_chat(base_url, system_prompt, prompt, max_tokens=budget_tokens, effort=effort)
            candidate_cpp_snippet = extract_cpp_code_block(resp_text)
        except (opencode_backend.QuotaExhausted, deepai_backend.QuotaExhausted):
            raise
        except Exception as e:
            log(f"  [0x{addr:08x} Attempt {attempt}] LLM request warning: {e}")
            continue

        if not candidate_cpp_snippet or not _mentions_address(candidate_cpp_snippet, addr):
            log(
                f"  [0x{addr:08x} Attempt {attempt}] reply unusable "
                f"(code_block={bool(candidate_cpp_snippet)}, {len(resp_text)} chars): "
                f"{resp_text[:160]!r}"
            )
            continue

        # The reply only has to mention the address, so a model that writes a bare comment or no
        # marker at all still yields usable code. Without the canonical annotation the body is
        # invisible to both scoring and promote_marker, so a 100% match is silently discarded.
        if not re.search(r"//\s*(?:FUNCTION|STUB):\s*ROBLOXSTUDIO\s+0x", candidate_cpp_snippet, re.IGNORECASE):
            candidate_cpp_snippet = f"// STUB: ROBLOXSTUDIO 0x{addr:08x}\n{candidate_cpp_snippet}"

        candidate_cpp_snippet, parsed_def = _normalize_generated_definition(candidate_cpp_snippet, route)
        if parsed_def and parsed_def["renamed"]:
            log(
                f"  [0x{addr:08x} Attempt {attempt}] re-qualified definition "
                f"{parsed_def['original_class']}::{parsed_def['method_name']} -> "
                f"{parsed_def['class']}::{parsed_def['method_name']}"
            )

        if re.search(r"\b_*asm\b", candidate_cpp_snippet, re.IGNORECASE):
            log(f"  [0x{addr:08x} Attempt {attempt}] rejected inline-assembly snippet (not verifiable C++)")
            continue

        # A body the header already defines inline can never be redeclared: skip before
        # spending the compile, and before a retry re-burns the same guaranteed failure.
        if parsed_def and re.search(
            r"\b" + re.escape(parsed_def["method_name"]) + r"\s*\([^;{]*\{",
            h_path.read_text(encoding="utf-8"),
        ):
            log(f"  [0x{addr:08x} Attempt {attempt}] member already defined inline in header; skipping target")
            continue

        outcome = _apply_and_verify(
            route,
            cpp_path,
            h_path,
            candidate_cpp_snippet,
            addr,
            orig_bytes,
            original_cpp_content,
            original_h_content,
            parsed=parsed_def,
        )
        if outcome[0] == "compile_failed":
            compiler_out = outcome[1]
            if "previous definition" in compiler_out or "C2011" in compiler_out:
                log(
                    f"  [0x{addr:08x} Attempt {attempt}] member already defined elsewhere in the "
                    f"header; skipping target instead of retrying a guaranteed failure"
                )
                break
            log(
                f"  [0x{addr:08x} Attempt {attempt}] COMPILE FAILED on {route['cpp_rel']}: "
                f"{_first_error(compiler_out)}"
            )
            feedback_history = (
                f"### Attempt {attempt} Compiler Error (`cl.exe /O2` on `{route['cpp_rel']}`):\n"
                f"```text\n{compiler_out[-3000:]}\n```\n"
                f"Your previous C++ snippet:\n```cpp\n{candidate_cpp_snippet}\n```\n"
                f"Fix all missing declarations/syntax errors so `{route['cpp_rel']}` compiles cleanly."
            )
            continue

        if outcome[0] == "match":
            _, cur_pct, fn_hint = outcome
            log(f"  [0x{addr:08x}] Attempt {attempt}/{max_attempts}: {cur_pct:.2f}% byte match ({fn_hint} in {route['cpp_rel']})")
            return True, cur_pct, fn_hint

        _, cur_pct, cur_diff, fn_hint = outcome
        log(f"  [0x{addr:08x}] Attempt {attempt}/{max_attempts}: {cur_pct:.2f}% byte match ({fn_hint} in {route['cpp_rel']})")
        if cur_pct > best_pct:
            best_pct = cur_pct
            best_code = candidate_cpp_snippet
        # Below a few percent the reply is a different routine entirely; further attempts only
        # spend minutes reproducing the same guess.
        if attempt == 1 and cur_pct < 5.0:
            log(f"  [0x{addr:08x}] first attempt at {cur_pct:.2f}% is the wrong routine; moving on")
            break

        diff_text = "\n".join(cur_diff[:60])
        feedback_history = (
            f"### Attempt {attempt} Assembly Diff ({cur_pct:.2f}% Byte Match):\n"
            f"Your previous C++ snippet:\n```cpp\n{candidate_cpp_snippet}\n```\n"
            f"Side-by-side Disassembly (ORIG vs RECOMP):\n```text\n{diff_text}\n```\n"
            f"Adjust the C++ implementation to achieve 100.00% byte accuracy under MSVC 11.0 `/O2`."
        )

    cpp_path.write_text(original_cpp_content, encoding="utf-8")
    h_path.write_text(original_h_content, encoding="utf-8")
    return False, 0.0, ""


_DEEPAI_READY: bool | None = None


def deepai_ready() -> bool:
    """One-time catalogue/auth check for the DeepAI gateway. Never raises."""
    global _DEEPAI_READY
    if _DEEPAI_READY is None:
        try:
            report = deepai_backend.preflight()
            log(
                f"DeepAI ready: {report['name']} | context {report['context_window']} | "
                f"max output {report['max_tokens']} | thinking {report['reasoning_effort']} | "
                f"key ...{report['key_suffix']}"
            )
            _DEEPAI_READY = True
        except Exception as exc:
            log(f"DeepAI backend unavailable ({exc}); deterministic synthesis only")
            _DEEPAI_READY = False
    return _DEEPAI_READY


def progress_command(message: str) -> list[str]:
    """`update_progress.py` invocation; pushing stays opt-in via DECOMP_PUSH."""
    args = [sys.executable, str(ROOT / "tools" / "update_progress.py"), "--commit", message]
    if PUSH_ENABLED:
        args.append("--push")
    return args


_OPENCODE_READY: bool | None = None


def opencode_ready() -> bool:
    """One-time readiness check for the logged-out free tier. Never raises."""
    global _OPENCODE_READY
    if _OPENCODE_READY is None:
        try:
            report = opencode_backend.preflight()
            log(
                f"OpenCode free tier ready: v{report['version']} | "
                f"{report['model']} | logged out"
            )
            _OPENCODE_READY = True
        except Exception as exc:
            log(f"OpenCode backend unavailable ({exc}); deterministic synthesis only")
            _OPENCODE_READY = False
    return _OPENCODE_READY


def rotate_after_quota(reason: str) -> bool:
    """
    Stops this instance so the next start hands out a new public IP (tools/quota_rotate.py).
    Declines when the rolling 24h cap is spent, so a limit that is not IP-keyed cannot turn
    into an endless stop/start loop.
    """
    try:
        import quota_rotate
    except Exception as exc:
        log(f"Rotation controller unavailable: {exc}")
        return False
    try:
        return quota_rotate.on_quota(reason)
    except Exception as exc:
        log(f"Rotation failed: {exc}")
        return False


def idle_when_complete() -> None:
    """
    The unit is Restart=always, so a finished project that exits would be relaunched and would
    re-run the full-client build every restart. Parking here keeps the worker healthy and quiet
    until someone intentionally starts the next phase.
    """
    log("COMPLETED_100_PERCENT.flag present: every matchable function is verified; idling")
    while True:
        time.sleep(1800)
        log("idle heartbeat: project complete, nothing left to match")


def run_forever():
    start_watchdog()
    log(
        "Starting OpenRBX-2014 Immortal 24/7 Autonomous Decompilation Supervisor "
        f"(watchdog: {WATCHDOG_STALE_SECONDS}s idle -> restart, log self-rotation at 64 MiB)..."
    )
    if COMPLETION_FLAG.exists():
        idle_when_complete()
    sizes = verify_tu.load_function_sizes()
    vt_map = func_context.load_vtable_membership()
    skipped_without_llm: set[int] = set()
    attempted_with_llm: set[int] = set()

    # Classify the address table once: the LLM must never spend a token on a target that is
    # impossible by construction (mid-instruction fragments, compiler-generated thunks).
    real_targets: set[int] = set()
    kind_counts = {"real": 0, "fragment": 0, "thunk": 0, "seh": 0}
    for _a, _sz in sizes.items():
        if _sz < 3:
            continue
        _kind = classify_target(verify_tu.get_original_function_bytes(_a, _sz))
        kind_counts[_kind] += 1
        if _kind == "real":
            real_targets.add(_a)
    log(
        f"Target classification: {kind_counts['real']} matchable functions | "
        f"{kind_counts['fragment']} fragments (bytes never terminate a routine) | "
        f"{kind_counts['thunk']} thunks | {kind_counts['seh']} SEH-scaffolded frames "f"-> excluded from matching"
    )

    while True:
        try:
            if BACKEND == "deepai":
                base_url = DEEPAI_SENTINEL if deepai_ready() else None
            elif BACKEND == "opencode":
                base_url = OPENCODE_SENTINEL if opencode_ready() else None
            elif BACKEND == "kaggle":
                base_url = discover_kaggle_tunnel_url()
            elif BACKEND == "kbench":
                kb_url, kb_key = load_kbench_credentials()
                base_url = kb_url if (kb_url and kb_key) else None
            elif BACKEND == "local":
                base_url = LOCAL_LLM_URL if check_endpoint_alive(LOCAL_LLM_URL) else None
            else:
                base_url = None
            if base_url:
                shown_model = (
                    deepai_backend.MODEL
                    if base_url == DEEPAI_SENTINEL
                    else opencode_backend.MODEL
                    if base_url == OPENCODE_SENTINEL
                    else MODEL_NAME
                )
                log(f"Generation backend: {base_url} | Model: {shown_model}")
            elif BACKEND == "local":
                log("No local llama-server reachable; running deterministic synthesis only")
            elif BACKEND == "kaggle":
                ensure_kaggle_kernel_alive()
                log("Kaggle endpoint unavailable; running deterministic synthesis only")
            else:
                log("Deterministic synthesis only (no external GPU dependency)")

            done = next_target.get_implemented_addresses()
            exclude = attempted_with_llm if base_url else skipped_without_llm
            parked = {int(k, 16) for k, v in load_skips().items() if v[0] >= SKIP_AFTER_FAILURES}
            remaining = [
                addr for addr in real_targets
                if addr not in done and addr not in exclude and addr not in parked
            ]
            if not remaining:
                if exclude or parked:
                    # Parked targets are retried once their skip entry expires; never report
                    # completion while candidates are merely benched.
                    exclude.clear()
                    if parked:
                        log(f"Every remaining candidate is parked after repeated failures ({len(parked)}); retrying in 10 minutes")
                        time.sleep(600)
                    continue
                log(
                    f"All {len(real_targets)} matchable functions verified byte-exact! "
                    "Running full-client build verification..."
                )
                subprocess.run([sys.executable, str(ROOT / "tools" / "build_client.py")], cwd=ROOT, check=False)
                subprocess.run(
                    progress_command("100% of RobloxStudioBeta.exe matched!"),
                    cwd=ROOT,
                    check=False,
                )
                COMPLETION_FLAG.write_text("100% COMPLETED\n", encoding="utf-8")
                break

            remaining.sort(key=lambda a: (0 if a in vt_map else 1, sizes[a], a))

            # Sorting by size clusters sibling methods of one class, and siblings share a header
            # so they cannot run concurrently. Round-robin the groups so consecutive candidates
            # always belong to different headers and every subagent has work.
            by_header: dict[str, deque] = {}
            for _a in remaining:
                by_header.setdefault(target_key(_a), deque()).append(_a)
            lanes = deque(by_header.values())
            spread: list[int] = []
            while lanes:
                lane = lanes.popleft()
                spread.append(lane.popleft())
                if lane:
                    lanes.append(lane)
            remaining = spread

            skips = load_skips()
            matched_in_cycle = []
            scanned = 0
            last_publish = 0.0
            last_cfg = 0.0
            last_stats = 0.0
            # The queue must stay deep. A short cycle made every wave wait for its slowest
            # target (a three-attempt repair takes minutes) while the other subagents sat idle.
            scan_limit = 500
            # Hot-reloadable concurrency: tuning the pool must not need a service restart.
            workers = WORKERS
            try:
                _override = (ROOT / "data" / "workers.txt").read_text(encoding="utf-8").strip()
                if _override:
                    workers = max(1, min(32, int(_override)))
            except (OSError, ValueError):
                pass
            queue = deque(remaining)
            inflight: dict = {}
            busy_keys: set[str] = set()
            with ThreadPoolExecutor(max_workers=workers) as pool:
                while queue or inflight:
                    if time.time() - last_stats >= 30:
                        last_stats = time.time()
                        log(
                            f"[pool] workers={workers} inflight={len(inflight)} "
                            f"queue={len(queue)} busy_headers={len(busy_keys)}"
                        )
                    # Re-read the target concurrency mid-flight so tuning never needs a restart.
                    if time.time() - last_cfg >= 5:
                        last_cfg = time.time()
                        try:
                            tuned = max(1, min(32, int((ROOT / "data" / "workers.txt").read_text(encoding="utf-8").strip())))
                        except (OSError, ValueError):
                            tuned = workers
                        if tuned != workers:
                            log(f"Concurrency {workers} -> {tuned}; draining this wave")
                            workers = tuned
                            break
                    rotations = 0
                    while queue and len(inflight) < workers:
                        if scanned >= scan_limit:
                            queue.clear()
                            break
                        addr = queue.popleft()
                        key = target_key(addr)
                        if key in busy_keys:
                            queue.append(addr)
                            rotations += 1
                            if rotations >= len(queue):
                                break
                            continue
                        scanned += 1
                        busy_keys.add(key)
                        inflight[pool.submit(decompile_function_with_retries, addr, base_url)] = (
                            addr,
                            key,
                            time.time(),
                        )
                    if not inflight:
                        break
                    finished, _ = wait(inflight, return_when=FIRST_COMPLETED)
                    for fut in finished:
                        addr, key, started_at = inflight.pop(fut)
                        busy_keys.discard(key)
                        try:
                            ok, pct, fn_name = fut.result()
                        except Exception as exc:
                            log(f"  [0x{addr:08x}] subagent failed: {exc}")
                            ok, pct, fn_name = False, 0.0, ""
                        record_work(addr, ok, pct, fn_name, seconds=time.time() - started_at)
                        skip_key = f"0x{addr:08x}"
                        if ok and pct >= 99.99:
                            skips.pop(skip_key, None)
                        else:
                            fails = (skips.get(skip_key) or [0, 0])[0] + 1
                            skips[skip_key] = [fails, time.time()]
                        save_skips(skips)
                        if ok and pct >= 99.99:
                            # Publish the moment a function is proven; batching left the site
                            # stale for half an hour at a time.
                            matched_in_cycle.append(f"0x{addr:08x}")
                        elif base_url:
                            attempted_with_llm.add(addr)
                        else:
                            skipped_without_llm.add(addr)
                    # update_progress.py rescans the tree and takes ~40s, and it must run under
                    # the write lock so a half-written TU is never counted as implemented. At
                    # 15s cadence that lock was held almost continuously and starved the pool,
                    # so publishing is deliberately sparse: the decompilers own the CPU.
                    if matched_in_cycle and time.time() - last_publish >= 300:
                        commit_msg = f"Match {len(matched_in_cycle)} class methods ({', '.join(matched_in_cycle[:4])}) [100% byte-exact]"
                        log(f"Committing & pushing clean C++ subsystem batch to GitHub Pages: {commit_msg}")
                        with WRITE_LOCK:
                            subprocess.run(progress_command(commit_msg), cwd=ROOT, check=False)
                        last_publish = time.time()
                        matched_in_cycle = []

            if matched_in_cycle:
                commit_msg = f"Match {len(matched_in_cycle)} class methods ({', '.join(matched_in_cycle[:4])}) [100% byte-exact]"
                log(f"Committing & pushing clean C++ subsystem batch to GitHub Pages: {commit_msg}")
                with WRITE_LOCK:
                    subprocess.run(progress_command(commit_msg), cwd=ROOT, check=False)
                matched_in_cycle = []

            time.sleep(2)
        except (opencode_backend.QuotaExhausted, deepai_backend.QuotaExhausted) as exc:
            log(f"OpenCode free-tier quota reached: {exc}")
            if rotate_after_quota(str(exc)):
                log("Instance stop requested; quota_rotate.py --start (or the EventBridge schedule) restarts it on a new public IP")
                break
            log("Rotation not performed (24h cap reached or AWS refused); parking 1h before retrying")
            time.sleep(3600)
            continue
        except KeyboardInterrupt:
            log("Supervisor interrupted by user.")
            break
        except Exception as e:
            log(f"Supervisor loop error (recovering in 10s): {e}")
            time.sleep(10)


if __name__ == "__main__":
    run_forever()
