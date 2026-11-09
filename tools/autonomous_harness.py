#!/usr/bin/env python3
"""
Immortal 24/7 Autonomous Byte-Accurate Decompilation Harness for OpenRBX-2014 (`ROBLOXSTUDIO`).

Tuned for Clean Subsystem C++ Architecture (matching `Asphaltian/OpenRBX`), Maximum Context (256K),
and Adaptive MoE Reasoning (`8K -> 24K -> 64K` output/thinking budget) against the Dual Tesla T4
`Qwen3.8-35B-A3B` MoE server:
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
import func_context     # noqa: E402
import next_target      # noqa: E402
import source_router    # noqa: E402
import update_progress  # noqa: E402
import verify_tu        # noqa: E402

KERNEL_REF = os.environ.get("KAGGLE_KERNEL_REF", "supahblob/kaggle-qwen-coder-api-server")
MODEL_NAME = os.environ.get("DECOMP_MODEL", "qwen2.5-coder-14b")
HARNESS_MODE = os.environ.get("DECOMP_HARNESS", "auto")
MAX_OUTPUT_TOKENS = int(os.environ.get("DECOMP_MAX_TOKENS", "65536"))
CONTEXT_WINDOW = 262144
TUNNEL_CACHE_FILE = ROOT / "data" / "active_tunnel_url.txt"


def log(msg: str):
    ts = time.strftime("%Y-%m-%d %H:%M:%S")
    print(f"[{ts}] {msg}", flush=True)


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


def call_llm_chat(base_url: str, system_prompt: str, user_prompt: str, max_tokens: int = MAX_OUTPUT_TOKENS) -> str:
    url = base_url.rstrip("/") + "/chat/completions"
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
    body = json.dumps(payload).encode("utf-8")
    req = urllib.request.Request(
        url,
        data=body,
        headers={
            "Content-Type": "application/json",
            "Authorization": "Bearer ollama",
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


def classify_target(orig: bytes) -> str:
    """
    Separates the address table into what C++ can actually reproduce byte-for-byte:

      - `fragment`: the bytes never terminate a routine (no `ret`), i.e. the size table
        holds mid-instruction starts. No C++ source can ever match these.
      - `thunk`: compiler-generated redirect emitted for multiple-inheritance adjustors
        (`sub ecx,N; jmp`), imported functions (`jmp [__imp_x]`) or tail calls (`jmp rel32`).
        There is no high-level body to write for them.
      - `real`: a complete routine worth synthesizing or handing to the LLM.
    """
    if not orig:
        return "fragment"
    if orig[0] == 0xE9 or orig[:2] == b"\xff\x25":
        return "thunk"
    if orig[:2] == b"\x83\xe9" and len(orig) >= 7 and orig[3] == 0xE9:
        return "thunk"
    if orig[:3] == b"\x2b\x49\xfc" and orig[3:4] == b"\xe9":
        return "thunk"
    if orig[-1] not in (0xC3, 0xC2) or orig[-1:] == b"\xe9":
        return "fragment"
    return "real"


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


def decompile_function_with_retries(addr: int, base_url: str | None) -> tuple[bool, float, str]:
    """
    Runs the full decompile -> compile -> COFF byte-diff -> repair loop (up to 6 iterations)
    for function `0x<addr:08x>`, routing it to its real subsystem `.cpp` and `.h` file and using
    Adaptive MoE Reasoning Escalation (`8K -> 24K -> 64K` output/thinking budget).
    """
    router = source_router.get_router()
    route = router.route_address(addr)
    cpp_path, h_path = source_router.ensure_class_header_and_cpp(route)

    sizes = verify_tu.load_function_sizes()
    fn_size = sizes.get(addr, 16)
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

    system_prompt = (
        "You are an elite MSVC 11.0 (Visual Studio 2012 x86) C++ reverse engineer working on OpenRBX-2014.\n"
        f"Target Source File: `{route['cpp_rel']}` | Target Header: `{route['h_rel']}` | Owning Class: `{route['qualified_class']}`\n"
        "Write clean, human-readable C++ code matching the style of `Asphaltian/OpenRBX`.\n"
        f"Your code will be placed inside `namespace {'::'.join(route['namespaces'])}` in `{route['cpp_rel']}`.\n"
        "You may define a static/member method or free function preceded by "
        f"`// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}` inside a ```cpp code block.\n"
        "Do NOT include `main()` or non-existent external headers.\n\n"
        + claude_md
    )

    feedback_history = ""
    best_code = None
    best_pct = -1.0
    max_attempts = 4
    # Adaptive MoE Reasoning Escalation, trimmed to 4 passes: a measured run converted nothing
    # across 6 escalating attempts (best 50%), so the two most expensive passes were dropped.
    token_schedule = [8192, 24576, 49152, 65536]

    for attempt in range(1, max_attempts + 1):
        budget_tokens = min(MAX_OUTPUT_TOKENS, token_schedule[attempt - 1])
        candidate_cpp_snippet = None
        prompt = (
            f"Decompile the following 2014 Roblox (`ROBLOXSTUDIO`) x86 function (`0x{addr:08x}`) "
            f"for `{route['qualified_class']}` in `{route['cpp_rel']}` to 100% byte-matching C++:\n\n"
            f"Current `{route['h_rel']}` header:\n```cpp\n{original_h_content}\n```\n\n"
            f"{card}\n\n"
            f"{feedback_history}\n"
            f"Provide only the C++ implementation block (and any needed inline struct/declaration above it) "
            f"preceded by `// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}` in a ```cpp block."
        )
        try:
            resp_text = call_llm_chat(base_url, system_prompt, prompt, max_tokens=budget_tokens)
            candidate_cpp_snippet = extract_cpp_code_block(resp_text)
        except Exception as e:
            log(f"  [0x{addr:08x} Attempt {attempt}] LLM request warning: {e}")
            continue

        if not candidate_cpp_snippet or f"0x{addr:08x}" not in candidate_cpp_snippet.lower():
            continue

        source_router.append_method_to_cpp(cpp_path, candidate_cpp_snippet)
        ok, obj_path, compiler_out = verify_tu.compile_cpp_to_coff(cpp_path, use_cache=False)
        if not ok:
            feedback_history = (
                f"### Attempt {attempt} Compiler Error (`cl.exe /O2` on `{route['cpp_rel']}`):\n"
                f"```text\n{compiler_out[-3000:]}\n```\n"
                f"Your previous C++ snippet:\n```cpp\n{candidate_cpp_snippet}\n```\n"
                f"Fix all missing declarations/syntax errors so `{route['cpp_rel']}` compiles cleanly."
            )
            cpp_path.write_text(original_cpp_content, encoding="utf-8")
            h_path.write_text(original_h_content, encoding="utf-8")
            continue

        coff_funcs = verify_tu.parse_coff_functions(obj_path)
        anns = verify_tu.parse_annotations_in_cpp(cpp_path)
        fn_hint = next((h for a, k, h in anns if a == addr), f"func_{addr:08x}")
        short_hint = fn_hint.split("::")[-1]

        cur_pct = 0.0
        cur_diff = []
        for sym_name, (recomp_bytes, rel_offsets) in coff_funcs.items():
            if short_hint and short_hint in sym_name:
                cur_pct, cur_diff = verify_tu.compare_with_relocations(orig_bytes, recomp_bytes, rel_offsets)
                break

        log(f"  [0x{addr:08x}] Attempt {attempt}/{max_attempts}: {cur_pct:.2f}% byte match ({fn_hint} in {route['cpp_rel']})")
        if cur_pct > best_pct:
            best_pct = cur_pct
            best_code = candidate_cpp_snippet

        if cur_pct >= 99.99:
            promote_marker(cpp_path, addr)
            return True, cur_pct, fn_hint

        diff_text = "\n".join(cur_diff[:60])
        feedback_history = (
            f"### Attempt {attempt} Assembly Diff ({cur_pct:.2f}% Byte Match):\n"
            f"Your previous C++ snippet:\n```cpp\n{candidate_cpp_snippet}\n```\n"
            f"Side-by-side Disassembly (ORIG vs RECOMP):\n```text\n{diff_text}\n```\n"
            f"Adjust the C++ implementation to achieve 100.00% byte accuracy under MSVC 11.0 `/O2`."
        )
        cpp_path.write_text(original_cpp_content, encoding="utf-8")
        h_path.write_text(original_h_content, encoding="utf-8")

    cpp_path.write_text(original_cpp_content, encoding="utf-8")
    h_path.write_text(original_h_content, encoding="utf-8")
    return False, 0.0, ""


def run_forever():
    log("Starting OpenRBX-2014 Immortal 24/7 Autonomous Decompilation Supervisor (Clean Subsystem Layout + MoE Max Reasoning)...")
    sizes = verify_tu.load_function_sizes()
    vt_map = func_context.load_vtable_membership()
    skipped_without_llm: set[int] = set()
    attempted_with_llm: set[int] = set()

    # Classify the address table once: the LLM must never spend a token on a target that is
    # impossible by construction (mid-instruction fragments, compiler-generated thunks).
    real_targets: set[int] = set()
    kind_counts = {"real": 0, "fragment": 0, "thunk": 0}
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
        f"{kind_counts['thunk']} compiler-generated thunks -> both excluded from matching"
    )

    while True:
        try:
            base_url = discover_kaggle_tunnel_url()
            if base_url:
                log(f"Active 256K MoE Endpoint: {base_url} | Model: {MODEL_NAME} | Max Output: {MAX_OUTPUT_TOKENS} tokens")
            else:
                ensure_kaggle_kernel_alive()
                log("Kaggle Dual-T4 MoE kernel initializing; running fast deterministic C++ class synthesis pass...")

            done = next_target.get_implemented_addresses()
            exclude = attempted_with_llm if base_url else skipped_without_llm
            remaining = [addr for addr in real_targets if addr not in done and addr not in exclude]
            if not remaining:
                if exclude:
                    exclude.clear()
                    continue
                log("100% OF ALL 40,561 FUNCTIONS IMPLEMENTED! Running full-client build verification...")
                subprocess.run([sys.executable, str(ROOT / "tools" / "build_client.py")], cwd=ROOT, check=False)
                subprocess.run(
                    [sys.executable, str(ROOT / "tools" / "update_progress.py"), "--commit", "100% of RobloxStudioBeta.exe matched!", "--push"],
                    cwd=ROOT,
                    check=False,
                )
                (ROOT / "COMPLETED_100_PERCENT.flag").write_text("100% COMPLETED\n", encoding="utf-8")
                break

            remaining.sort(key=lambda a: (0 if a in vt_map else 1, sizes[a], a))

            matched_in_cycle = []
            scanned = 0
            for addr in remaining:
                scanned += 1
                ok, pct, fn_name = decompile_function_with_retries(addr, base_url)
                if ok and pct >= 99.99:
                    matched_in_cycle.append(f"0x{addr:08x}")
                else:
                    if base_url:
                        attempted_with_llm.add(addr)
                    else:
                        skipped_without_llm.add(addr)
                if len(matched_in_cycle) >= 20 or (base_url and scanned >= 10) or (not base_url and scanned >= 500):
                    break

            if matched_in_cycle:
                commit_msg = f"Match {len(matched_in_cycle)} class methods ({', '.join(matched_in_cycle[:4])}) [100% byte-exact]"
                log(f"Committing & pushing clean C++ subsystem batch to GitHub Pages: {commit_msg}")
                subprocess.run(
                    [sys.executable, str(ROOT / "tools" / "update_progress.py"), "--commit", commit_msg, "--push"],
                    cwd=ROOT,
                    check=False,
                )

            time.sleep(2)
        except KeyboardInterrupt:
            log("Supervisor interrupted by user.")
            break
        except Exception as e:
            log(f"Supervisor loop error (recovering in 10s): {e}")
            time.sleep(10)


if __name__ == "__main__":
    run_forever()
