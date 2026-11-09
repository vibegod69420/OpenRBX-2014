#!/usr/bin/env python3
"""
Immortal 24/7 Autonomous Byte-Accurate Decompilation Harness for OpenRBX-2014 (`ROBLOXSTUDIO`).

Tuned for Maximum Context (256K Context Window) & Ultra-Generous Token Output (32K-64K Output Tokens)
against the private Dual Tesla T4 `llama-server` (`Qwen3.8` base model):
1. Live Kaggle Stream Tunnel Discovery (`api.kernels_logs_stream` + auto-restart if kernel expires)
2. Full Context Injection:
   - 100% of `CLAUDE.md` (untruncated)
   - Full `func_context.build_rich_context_card(addr)` (target assembly, neighboring vtable slots,
     direct callees assembly, `ReflectionMetadata.xml`, and full inlined 2007 `OpenRBX` `.h`/`.cpp` sources)
3. Multi-Harness Execution (`claude` Claude Code CLI, `pi` Coding Agent, and built-in Streaming OpenAI/Anthropic
   Compiler-in-the-Loop Repair Engine with up to 6 compiler/assembly diff retries per function)
4. Sub-Second COFF Byte-Accuracy Verification (`verify_tu.py`) + Continuous GitHub Pages Deployment (`update_progress.py`)
"""

import csv
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
import update_progress  # noqa: E402
import verify_tu        # noqa: E402

KERNEL_REF = os.environ.get("KAGGLE_KERNEL_REF", "supahblob/kaggle-qwen-coder-api-server")
MODEL_NAME = os.environ.get("DECOMP_MODEL", "qwen3.8:35b-a3b-abliterated")
HARNESS_MODE = os.environ.get("DECOMP_HARNESS", "auto")  # "claude", "pi", "direct", or "auto"
MAX_OUTPUT_TOKENS = int(os.environ.get("DECOMP_MAX_TOKENS", "32768"))
CONTEXT_WINDOW = 262144
TUNNEL_CACHE_FILE = ROOT / "data" / "active_tunnel_url.txt"

_VTABLE_MAP_CACHE = None


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
            headers={"User-Agent": "OpenRBX-Harness/2.0", "Authorization": "Bearer ollama"},
        )
        with urllib.request.urlopen(req, timeout=5) as resp:
            return resp.status == 200
    except Exception:
        return False


def update_pi_and_claude_configs(api_v1_url: str):
    """
    Updates ~/.pi/agent/models.json, ~/.pi/agent/settings.json, and environment variables
    with 262,144 context window and 65,536 max output tokens.
    """
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
                "name": "Kaggle Dual Tesla T4 Server (256K Context)",
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
                "defaultThinkingLevel": "high",
            },
            indent=2,
        ),
        encoding="utf-8",
    )


def discover_kaggle_tunnel_url() -> str | None:
    """
    Discovers the active Cloudflare Quick Tunnel URL via:
    1. Cached URL in `data/active_tunnel_url.txt` or `OPENAI_BASE_URL`
    2. Live `ntfy.sh` discovery channel (`https://ntfy.sh/openrbx2014_tunnel_vibegod69420/raw?poll=1&since=12h`)
    3. `~/.pi/agent/models.json`
    """
    for candidate in [
        os.environ.get("OPENAI_BASE_URL", ""),
        TUNNEL_CACHE_FILE.read_text(encoding="utf-8").strip() if TUNNEL_CACHE_FILE.exists() else "",
    ]:
        if candidate and check_endpoint_alive(candidate):
            return candidate

    try:
        req = urllib.request.Request(
            "https://ntfy.sh/openrbx2014_tunnel_vibegod69420/raw?poll=1&since=12h",
            headers={"User-Agent": "OpenRBX-Harness/2.0"},
        )
        with urllib.request.urlopen(req, timeout=6) as resp:
            lines = [l.strip() for l in resp.read().decode("utf-8", "ignore").splitlines() if "trycloudflare.com" in l]
            if lines:
                candidate = lines[-1]
                if not candidate.endswith("/v1"):
                    candidate = candidate.rstrip("/") + "/v1"
                if check_endpoint_alive(candidate):
                    log(f"Discovered live Kaggle 256K endpoint via ntfy channel: {candidate}")
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
    """
    Streams chat completion from the private Dual T4 llama-server with generous
    token limits (up to 32K-64K output tokens and 256K context window) and 600s timeout.
    """
    url = base_url.rstrip("/") + "/chat/completions"
    payload = {
        "model": MODEL_NAME,
        "messages": [
            {"role": "system", "content": system_prompt},
            {"role": "user", "content": user_prompt},
        ],
        "temperature": 0.2,
        "top_p": 0.95,
        "max_tokens": max_tokens,
        "max_completion_tokens": max_tokens,
        "stream": False,
    }
    body = json.dumps(payload).encode("utf-8")
    req = urllib.request.Request(
        url,
        data=body,
        headers={
            "Content-Type": "application/json",
            "Authorization": "Bearer ollama",
            "User-Agent": "OpenRBX-Harness/2.0",
        },
        method="POST",
    )
    with urllib.request.urlopen(req, timeout=600) as resp:
        data = json.loads(resp.read().decode("utf-8"))
        msg = data["choices"][0]["message"]
        content = msg.get("content") or ""
        content = re.sub(r"<think>.*?</think>", "", content, flags=re.DOTALL).strip()
        return content


def extract_cpp_code_block(text: str) -> str:
    m = re.search(r"```(?:cpp|c\+\+|c)\s*\n(.*?)```", text, flags=re.DOTALL | re.IGNORECASE)
    if m:
        return m.group(1).strip()
    m2 = re.search(r"```\s*\n(.*?)```", text, flags=re.DOTALL)
    if m2:
        return m2.group(1).strip()
    return text.strip()


def get_rtti_fn_prefix(addr: int) -> str:
    global _VTABLE_MAP_CACHE
    if _VTABLE_MAP_CACHE is None:
        _VTABLE_MAP_CACHE = func_context.load_vtable_membership()
    slots = _VTABLE_MAP_CACHE.get(addr, [])
    if slots:
        cls = slots[0]["class"]
        clean_cls = re.sub(r"[^A-Za-z0-9_]", "_", cls).strip("_")
        clean_cls = re.sub(r"_+", "_", clean_cls)
        if len(clean_cls) > 44:
            clean_cls = clean_cls[:44]
        return f"{clean_cls}_vslot{slots[0]['slot']}_{addr:08x}"
    return f"rbx_func_{addr:08x}"


def synthesize_deterministic_msvc_cpp(addr: int, orig: bytes) -> str:
    """
    Exact MSVC 11.0 x86 instruction pattern synthesizer for leaf/vtable methods,
    verified byte-for-byte via `cl.exe /c /O2 /Ob2 /Oi /Ot /Oy-` in `verify_tu.py`.
    """
    fn_name = get_rtti_fn_prefix(addr)

    # 1. B8 <imm32> C3 -> mov eax, imm32; ret (6 bytes)
    if len(orig) == 6 and orig[0] == 0xB8 and orig[5] == 0xC3:
        val = struct.unpack_from("<i", orig, 1)[0]
        return f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\nint __cdecl {fn_name}()\n{{\n    return {val};\n}}"

    # 2. A0 <addr32> C3 -> mov al, byte ptr [global]; ret (6 bytes)
    if len(orig) == 6 and orig[0] == 0xA0 and orig[5] == 0xC3:
        return (
            f"extern bool g_flag_{addr:08x};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"bool __cdecl {fn_name}()\n{{\n    return g_flag_{addr:08x};\n}}"
        )

    # 3. A1 <addr32> C3 -> mov eax, dword ptr [global]; ret (6 bytes)
    if len(orig) == 6 and orig[0] == 0xA1 and orig[5] == 0xC3:
        return (
            f"extern int g_val_{addr:08x};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"int __cdecl {fn_name}()\n{{\n    return g_val_{addr:08x};\n}}"
        )

    # 4. B8 <imm32> C2 <imm16> -> mov eax, imm32; ret N (8 bytes)
    if len(orig) == 8 and orig[0] == 0xB8 and orig[5] == 0xC2:
        val = struct.unpack_from("<i", orig, 1)[0]
        stack_bytes = struct.unpack_from("<H", orig, 6)[0]
        n_args = stack_bytes // 4
        args = ", ".join(f"int a{i}" for i in range(n_args))
        return f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\nint __stdcall {fn_name}({args})\n{{\n    return {val};\n}}"

    # 5. 33 C0 C3 -> xor eax, eax; ret (3 bytes)
    if orig == b"\x33\xc0\xc3":
        return f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\nint __cdecl {fn_name}()\n{{\n    return 0;\n}}"

    # 6. 32 C0 C3 -> xor al, al; ret (3 bytes)
    if orig == b"\x32\xc0\xc3":
        return f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\nbool __cdecl {fn_name}()\n{{\n    return false;\n}}"

    # 7. B0 <imm8> C3 -> mov al, imm8; ret (3 bytes)
    if len(orig) == 3 and orig[0] == 0xB0 and orig[2] == 0xC3:
        val = orig[1]
        if val in (0, 1):
            lit = "true" if val == 1 else "false"
            return f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\nbool __cdecl {fn_name}()\n{{\n    return {lit};\n}}"
        return f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\nunsigned char __cdecl {fn_name}()\n{{\n    return {val};\n}}"

    # 8. 33 C0 C2 <imm16> -> xor eax, eax; ret N (5 bytes)
    if len(orig) == 5 and orig[:3] == b"\x33\xc0\xc2":
        stack_bytes = struct.unpack_from("<H", orig, 3)[0]
        args = ", ".join(f"int a{i}" for i in range(stack_bytes // 4))
        return f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\nint __stdcall {fn_name}({args})\n{{\n    return 0;\n}}"

    # 9. 32 C0 C2 <imm16> -> xor al, al; ret N (5 bytes)
    if len(orig) == 5 and orig[:3] == b"\x32\xc0\xc2":
        stack_bytes = struct.unpack_from("<H", orig, 3)[0]
        args = ", ".join(f"int a{i}" for i in range(stack_bytes // 4))
        return f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\nbool __stdcall {fn_name}({args})\n{{\n    return false;\n}}"

    # 10. B0 <imm8> C2 <imm16> -> mov al, imm8; ret N (5 bytes)
    if len(orig) == 5 and orig[0] == 0xB0 and orig[2] == 0xC2:
        val = orig[1]
        stack_bytes = struct.unpack_from("<H", orig, 3)[0]
        args = ", ".join(f"int a{i}" for i in range(stack_bytes // 4))
        if val in (0, 1):
            lit = "true" if val == 1 else "false"
            return f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\nbool __stdcall {fn_name}({args})\n{{\n    return {lit};\n}}"

    # 11. C3 -> ret (1 byte)
    if orig == b"\xc3":
        return f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\nvoid __cdecl {fn_name}()\n{{\n}}"

    # 12. 8B 41 <off8> C3 -> mov eax, [ecx+off8]; ret (4 bytes)
    if len(orig) == 4 and orig[0] == 0x8B and orig[1] == 0x41 and orig[3] == 0xC3:
        off8 = orig[2]
        return (
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off8)}]; int val; }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"int __fastcall {fn_name}(const Struct_{addr:08x}* self)\n{{\n    return self->val;\n}}"
        )

    # 13. 8A 41 <off8> C3 -> mov al, [ecx+off8]; ret (4 bytes)
    if len(orig) == 4 and orig[0] == 0x8A and orig[1] == 0x41 and orig[3] == 0xC3:
        off8 = orig[2]
        return (
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off8)}]; bool val; }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"bool __fastcall {fn_name}(const Struct_{addr:08x}* self)\n{{\n    return self->val;\n}}"
        )

    # 14. 8B 81 <off32> C3 -> mov eax, [ecx+off32]; ret (7 bytes)
    if len(orig) == 7 and orig[0] == 0x8B and orig[1] == 0x81 and orig[6] == 0xC3:
        off32 = struct.unpack_from("<I", orig, 2)[0]
        return (
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off32)}]; int val; }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"int __fastcall {fn_name}(const Struct_{addr:08x}* self)\n{{\n    return self->val;\n}}"
        )

    # 15. 8A 81 <off32> C3 -> mov al, [ecx+off32]; ret (7 bytes)
    if len(orig) == 7 and orig[0] == 0x8A and orig[1] == 0x81 and orig[6] == 0xC3:
        off32 = struct.unpack_from("<I", orig, 2)[0]
        return (
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off32)}]; bool val; }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"bool __fastcall {fn_name}(const Struct_{addr:08x}* self)\n{{\n    return self->val;\n}}"
        )

    # 16. 8D 41 <off8> C3 -> lea eax, [ecx+off8]; ret (4 bytes)
    if len(orig) == 4 and orig[0] == 0x8D and orig[1] == 0x41 and orig[3] == 0xC3:
        off8 = orig[2]
        return (
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off8)}]; int member; }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"const int* __fastcall {fn_name}(const Struct_{addr:08x}* self)\n{{\n    return &self->member;\n}}"
        )

    # 17. 8D 81 <off32> C3 -> lea eax, [ecx+off32]; ret (7 bytes)
    if len(orig) == 7 and orig[0] == 0x8D and orig[1] == 0x81 and orig[6] == 0xC3:
        off32 = struct.unpack_from("<I", orig, 2)[0]
        return (
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off32)}]; int member; }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"const int* __fastcall {fn_name}(const Struct_{addr:08x}* self)\n{{\n    return &self->member;\n}}"
        )

    # 18. 8B C1 C3 -> mov eax, ecx; ret (3 bytes)
    if orig == b"\x8b\xc1\xc3":
        return f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\nvoid* __fastcall {fn_name}(void* self)\n{{\n    return self;\n}}"

    # 19. 8B 41 <off1> 83 C0 <add8> C3 -> mov eax, [ecx+off1]; add eax, add8; ret (7 bytes)
    if len(orig) == 7 and orig[0] == 0x8B and orig[1] == 0x41 and orig[3] == 0x83 and orig[4] == 0xC0 and orig[6] == 0xC3:
        off1, add8 = orig[2], orig[5]
        return (
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off1)}]; char* ptr; }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"char* __fastcall {fn_name}(const Struct_{addr:08x}* self)\n{{\n    return self->ptr + {add8};\n}}"
        )

    # 20. 8B 41 <off1> 8B 40 <off2> C3 -> mov eax, [ecx+off1]; mov eax, [eax+off2]; ret (7 bytes)
    if len(orig) == 7 and orig[0] == 0x8B and orig[1] == 0x41 and orig[3] == 0x8B and orig[4] == 0x40 and orig[6] == 0xC3:
        off1, off2 = orig[2], orig[5]
        return (
            f"struct Sub_{addr:08x} {{ char pad[{max(1, off2)}]; int val; }};\n"
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off1)}]; Sub_{addr:08x}* sub; }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"int __fastcall {fn_name}(const Struct_{addr:08x}* self)\n{{\n    return self->sub->val;\n}}"
        )

    # 21. 8B 41 <off1> 8B 80 <off32> C3 -> mov eax, [ecx+off1]; mov eax, [eax+off32]; ret (10 bytes)
    if len(orig) == 10 and orig[0] == 0x8B and orig[1] == 0x41 and orig[3] == 0x8B and orig[4] == 0x80 and orig[9] == 0xC3:
        off1 = orig[2]
        off2 = struct.unpack_from("<I", orig, 5)[0]
        return (
            f"struct Sub_{addr:08x} {{ char pad[{max(1, off2)}]; int val; }};\n"
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off1)}]; Sub_{addr:08x}* sub; }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"int __fastcall {fn_name}(const Struct_{addr:08x}* self)\n{{\n    return self->sub->val;\n}}"
        )

    # 22. 8B 81 <off1_32> 8B 80 <off2_32> C3 -> mov eax, [ecx+off1_32]; mov eax, [eax+off2_32]; ret (13 bytes)
    if len(orig) == 13 and orig[0] == 0x8B and orig[1] == 0x81 and orig[6] == 0x8B and orig[7] == 0x80 and orig[12] == 0xC3:
        off1 = struct.unpack_from("<I", orig, 2)[0]
        off2 = struct.unpack_from("<I", orig, 8)[0]
        return (
            f"struct Sub_{addr:08x} {{ char pad[{max(1, off2)}]; int val; }};\n"
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off1)}]; Sub_{addr:08x}* sub; }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"int __fastcall {fn_name}(const Struct_{addr:08x}* self)\n{{\n    return self->sub->val;\n}}"
        )

    # 23. 8B 81 <off1_32> 8A 80 <off2_32> C3 -> mov eax, [ecx+off1_32]; mov al, [eax+off2_32]; ret (13 bytes)
    if len(orig) == 13 and orig[0] == 0x8B and orig[1] == 0x81 and orig[6] == 0x8A and orig[7] == 0x80 and orig[12] == 0xC3:
        off1 = struct.unpack_from("<I", orig, 2)[0]
        off2 = struct.unpack_from("<I", orig, 8)[0]
        return (
            f"struct Sub_{addr:08x} {{ char pad[{max(1, off2)}]; bool val; }};\n"
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off1)}]; Sub_{addr:08x}* sub; }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"bool __fastcall {fn_name}(const Struct_{addr:08x}* self)\n{{\n    return self->sub->val;\n}}"
        )

    # 24. 55 8B EC 8B 45 08 8B 00 5D C3 -> int __cdecl fn(const int* p) { return *p; } (10 bytes)
    if orig == b"\x55\x8b\xec\x8b\x45\x08\x8b\x00\x5d\xc3":
        return f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\nint __cdecl {fn_name}(const int* p)\n{{\n    return *p;\n}}"

    # 25. 55 8B EC 8B 45 08 5D C2 04 00 -> int __stdcall fn(int a) { return a; } (10 bytes)
    if orig == b"\x55\x8b\xec\x8b\x45\x08\x5d\xc2\x04\x00":
        return f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\nint __stdcall {fn_name}(int a)\n{{\n    return a;\n}}"

    # 26. 55 8B EC 8B 45 08 89 41 <off8> 5D C2 04 00 -> __thiscall int setter (13 bytes)
    if len(orig) == 13 and orig[:8] == b"\x55\x8b\xec\x8b\x45\x08\x89\x41" and orig[9:] == b"\x5d\xc2\x04\x00":
        off8 = orig[8]
        return (
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off8)}]; int val; void {fn_name}(int v); }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"void Struct_{addr:08x}::{fn_name}(int v)\n{{\n    this->val = v;\n}}"
        )

    # 27. 55 8B EC 8B 45 08 89 81 <off32> 5D C2 04 00 -> __thiscall int setter off32 (16 bytes)
    if len(orig) == 16 and orig[:8] == b"\x55\x8b\xec\x8b\x45\x08\x89\x81" and orig[12:] == b"\x5d\xc2\x04\x00":
        off32 = struct.unpack_from("<I", orig, 8)[0]
        return (
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off32)}]; int val; void {fn_name}(int v); }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"void Struct_{addr:08x}::{fn_name}(int v)\n{{\n    this->val = v;\n}}"
        )

    # 28. 55 8B EC 8A 45 08 88 41 <off8> 5D C2 04 00 -> __thiscall bool setter (13 bytes)
    if len(orig) == 13 and orig[:8] == b"\x55\x8b\xec\x8a\x45\x08\x88\x41" and orig[9:] == b"\x5d\xc2\x04\x00":
        off8 = orig[8]
        return (
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off8)}]; bool val; void {fn_name}(bool v); }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"void Struct_{addr:08x}::{fn_name}(bool v)\n{{\n    this->val = v;\n}}"
        )

    # 29. 55 8B EC 8A 45 08 88 81 <off32> 5D C2 04 00 -> __thiscall bool setter off32 (16 bytes)
    if len(orig) == 16 and orig[:8] == b"\x55\x8b\xec\x8a\x45\x08\x88\x81" and orig[12:] == b"\x5d\xc2\x04\x00":
        off32 = struct.unpack_from("<I", orig, 8)[0]
        return (
            f"struct Struct_{addr:08x} {{ char pad[{max(1, off32)}]; bool val; void {fn_name}(bool v); }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"void Struct_{addr:08x}::{fn_name}(bool v)\n{{\n    this->val = v;\n}}"
        )

    # 30. 55 8B EC 8B 45 08 A3 <addr32> 5D C2 04 00 -> __stdcall global int setter (15 bytes)
    if len(orig) == 15 and orig[:7] == b"\x55\x8b\xec\x8b\x45\x08\xa3" and orig[11:] == b"\x5d\xc2\x04\x00":
        return (
            f"extern int g_val_{addr:08x};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"void __stdcall {fn_name}(int v)\n{{\n    g_val_{addr:08x} = v;\n}}"
        )

    # 31. 55 8B EC 8B 4D 08 8B 45 0C 01 01 5D C3 -> void __cdecl fn(int* p, int v) { *p += v; } (13 bytes)
    if orig == b"\x55\x8b\xec\x8b\x4d\x08\x8b\x45\x0c\x01\x01\x5d\xc3":
        return f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\nvoid __cdecl {fn_name}(int* p, int v)\n{{\n    *p += v;\n}}"

    # 32. 55 8B EC 8B 55 08 8B 01 89 02 89 11 5D C2 04 00 -> intrusive list push (16 bytes)
    if orig == b"\x55\x8b\xec\x8b\x55\x08\x8b\x01\x89\x02\x89\x11\x5d\xc2\x04\x00":
        return (
            f"struct Node_{addr:08x} {{ int head; void {fn_name}(int* p); }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"void Node_{addr:08x}::{fn_name}(int* p)\n{{\n    *p = this->head;\n    this->head = (int)p;\n}}"
        )

    # 33. 55 8B EC 8B 45 08 8B 55 0C 89 10 89 48 04 5D C2 08 00 -> __thiscall pair init (18 bytes)
    if orig == b"\x55\x8b\xec\x8b\x45\x08\x8b\x55\x0c\x89\x10\x89\x48\x04\x5d\xc2\x08\x00":
        return (
            f"struct Pair_{addr:08x} {{ int a; int b; }};\n"
            f"struct Struct_{addr:08x} {{ Pair_{addr:08x}* {fn_name}(Pair_{addr:08x}* out, int x); }};\n"
            f"// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}\n"
            f"Pair_{addr:08x}* Struct_{addr:08x}::{fn_name}(Pair_{addr:08x}* out, int x)\n{{\n    out->a = x;\n    out->b = (int)this;\n    return out;\n}}"
        )

    return ""


def decompile_function_with_retries(addr: int, base_url: str | None) -> tuple[bool, float, str]:
    """
    Runs the full decompile -> compile -> COFF byte-diff -> repair loop (up to 6 iterations)
    for function `0x<addr:08x>` with maximum 256K context and 32K+ output token allowance.
    """
    target_cpp = ROOT / "Client" / "App" / "V8World" / "DecompBatch.cpp"
    target_cpp.parent.mkdir(parents=True, exist_ok=True)
    if not target_cpp.exists():
        target_cpp.write_text(
            '#include "decomp.h"\n\nextern "C" volatile uint32_t g_rbx_stub_sink = 0;\n',
            encoding="utf-8",
        )

    sizes = verify_tu.load_function_sizes()
    fn_size = sizes.get(addr, 16)
    orig_bytes = verify_tu.get_original_function_bytes(addr, fn_size)

    # Fast-path: check deterministic synthesis BEFORE building the heavy 256K LLM context card
    det_snippet = synthesize_deterministic_msvc_cpp(addr, orig_bytes)
    if det_snippet:
        original_file_content = target_cpp.read_text(encoding="utf-8")
        test_content = original_file_content.rstrip() + "\n\n" + det_snippet + "\n"
        target_cpp.write_text(test_content, encoding="utf-8")
        ok, obj_path, _ = verify_tu.compile_cpp_to_coff(target_cpp)
        if ok:
            coff_funcs = verify_tu.parse_coff_functions(obj_path)
            fn_hint = get_rtti_fn_prefix(addr)
            for sym_name, (recomp_bytes, rel_offsets) in coff_funcs.items():
                if fn_hint in sym_name:
                    pct, _ = verify_tu.compare_with_relocations(orig_bytes, recomp_bytes, rel_offsets)
                    if pct >= 99.99:
                        log(f"  [0x{addr:08x}] Exact 100.00% match ({fn_hint}, {len(orig_bytes)}B)")
                        return True, pct, fn_hint
        target_cpp.write_text(original_file_content, encoding="utf-8")

    if not base_url:
        return False, 0.0, ""

    card = func_context.build_rich_context_card(addr)
    claude_md = (ROOT / "CLAUDE.md").read_text(encoding="utf-8")
    original_file_content = target_cpp.read_text(encoding="utf-8")

    # Full untruncated system prompt with complete CLAUDE.md
    system_prompt = (
        "You are an elite MSVC 11.0 (Visual Studio 2012 x86) C++ reverse engineer working on OpenRBX-2014.\n"
        "You have a 256,000-token context window and a 32,768-token output allowance.\n"
        "Output a valid, self-contained C++ implementation (including any needed helper structs/declarations) "
        f"preceded by `// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}` inside a ```cpp code block.\n"
        "Do NOT include `main()` or non-standard external headers that do not exist yet.\n\n"
        + claude_md
    )

    feedback_history = ""
    best_code = None
    best_pct = -1.0
    max_attempts = 6

    for attempt in range(1, max_attempts + 1):
        candidate_cpp_snippet = None
        prompt = (
            f"Decompile the following 2014 Roblox (`ROBLOXSTUDIO`) x86 function to 100% byte-matching C++:\n\n"
            f"{card}\n\n"
            f"{feedback_history}\n"
            f"Provide your self-contained C++ code with `// FUNCTION: ROBLOXSTUDIO 0x{addr:08x}` in a ```cpp block."
        )
        try:
            if HARNESS_MODE == "claude" and attempt == 1:
                env = os.environ.copy()
                env["ANTHROPIC_BASE_URL"] = base_url.replace("/v1", "")
                env["ANTHROPIC_API_KEY"] = "ollama"
                cli_res = subprocess.run(
                    ["claude", "-p", prompt, "--dangerously-skip-permissions"],
                    capture_output=True,
                    text=True,
                    env=env,
                    timeout=300,
                    cwd=ROOT,
                )
                if cli_res.returncode == 0 and "// FUNCTION:" in cli_res.stdout:
                    candidate_cpp_snippet = extract_cpp_code_block(cli_res.stdout)
            elif HARNESS_MODE == "pi" and attempt == 1:
                cli_res = subprocess.run(
                    ["pi", "-p", prompt],
                    capture_output=True,
                    text=True,
                    timeout=300,
                    cwd=ROOT,
                )
                if cli_res.returncode == 0 and "// FUNCTION:" in cli_res.stdout:
                    candidate_cpp_snippet = extract_cpp_code_block(cli_res.stdout)

            if not candidate_cpp_snippet:
                resp_text = call_llm_chat(base_url, system_prompt, prompt, max_tokens=MAX_OUTPUT_TOKENS)
                candidate_cpp_snippet = extract_cpp_code_block(resp_text)
        except Exception as e:
            log(f"  [0x{addr:08x} Attempt {attempt}] LLM request warning: {e}")
            continue

        if not candidate_cpp_snippet or f"0x{addr:08x}" not in candidate_cpp_snippet.lower():
            continue

        test_content = original_file_content.rstrip() + "\n\n" + candidate_cpp_snippet + "\n"
        target_cpp.write_text(test_content, encoding="utf-8")

        ok, obj_path, compiler_out = verify_tu.compile_cpp_to_coff(target_cpp)
        if not ok:
            feedback_history = (
                f"### Attempt {attempt} Compiler Error (`cl.exe /O2`):\n"
                f"```text\n{compiler_out[-3000:]}\n```\n"
                f"Your previous C++ snippet:\n```cpp\n{candidate_cpp_snippet}\n```\n"
                f"Fix all missing types/syntax errors so it compiles cleanly under MSVC x86."
            )
            target_cpp.write_text(original_file_content, encoding="utf-8")
            continue

        coff_funcs = verify_tu.parse_coff_functions(obj_path)
        anns = verify_tu.parse_annotations_in_cpp(target_cpp)
        fn_hint = next((h for a, k, h in anns if a == addr), f"func_{addr:08x}")

        cur_pct = 0.0
        cur_diff = []
        for sym_name, (recomp_bytes, rel_offsets) in coff_funcs.items():
            if fn_hint and fn_hint in sym_name:
                cur_pct, cur_diff = verify_tu.compare_with_relocations(orig_bytes, recomp_bytes, rel_offsets)
                break

        log(f"  [0x{addr:08x}] Attempt {attempt}/{max_attempts}: {cur_pct:.2f}% byte match ({fn_hint})")
        if cur_pct > best_pct:
            best_pct = cur_pct
            best_code = candidate_cpp_snippet

        if cur_pct >= 99.99:
            return True, cur_pct, fn_hint

        diff_text = "\n".join(cur_diff[:60])
        feedback_history = (
            f"### Attempt {attempt} Assembly Diff ({cur_pct:.2f}% Byte Match):\n"
            f"Your previous C++ snippet:\n```cpp\n{candidate_cpp_snippet}\n```\n"
            f"Side-by-side Disassembly (ORIG vs RECOMP):\n```text\n{diff_text}\n```\n"
            f"Apply the MSVC 11.0 codegen rules in CLAUDE.md (register order, stack frame delta, "
            f"`this->` access, calling convention `__thiscall`/`__fastcall`/`__stdcall`/`__cdecl`, "
            f"or float compare polarity) to achieve 100.00% byte accuracy."
        )
        target_cpp.write_text(original_file_content, encoding="utf-8")

    if best_code and best_pct >= 85.0:
        if best_pct < 99.99:
            best_code = best_code.replace("// FUNCTION:", "// STUB:")
        target_cpp.write_text(original_file_content.rstrip() + "\n\n" + best_code + "\n", encoding="utf-8")
        return True, best_pct, f"func_{addr:08x}"

    target_cpp.write_text(original_file_content, encoding="utf-8")
    return False, 0.0, ""


def run_forever():
    log("Starting OpenRBX-2014 Immortal 24/7 Autonomous Decompilation Supervisor (256K Context / 32K-64K Output)...")
    sizes = verify_tu.load_function_sizes()
    vt_map = func_context.load_vtable_membership()
    skipped_without_llm: set[int] = set()
    attempted_with_llm: set[int] = set()

    while True:
        try:
            base_url = discover_kaggle_tunnel_url()
            if base_url:
                log(f"Active 256K LLM Endpoint: {base_url} | Model: {MODEL_NAME} | Max Output: {MAX_OUTPUT_TOKENS} tokens")
            else:
                log("Kaggle Dual-T4 kernel still downloading/initializing model; running deterministic MSVC pass meanwhile...")

            done = next_target.get_implemented_addresses()
            exclude = attempted_with_llm if base_url else skipped_without_llm
            remaining = [addr for addr in sizes if addr not in done and addr not in exclude and sizes[addr] >= 3]
            if not remaining:
                if exclude:
                    exclude.clear()
                    continue
                log("100% OF ALL 40,561 FUNCTIONS IMPLEMENTED! Mission accomplished.")
                break

            # Prioritize RBX:: / G3D:: vtable methods and concise functions first, then larger methods when LLM is online
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
                if len(matched_in_cycle) >= 12 or (base_url and scanned >= 10) or (not base_url and scanned >= 400):
                    break

            if matched_in_cycle:
                commit_msg = f"Match {len(matched_in_cycle)} functions ({', '.join(matched_in_cycle[:4])}) [100% byte-exact]"
                log(f"Committing & pushing batch to GitHub Pages: {commit_msg}")
                subprocess.run(
                    [sys.executable, str(ROOT / "tools" / "update_progress.py"), "--commit", commit_msg, "--push"],
                    cwd=ROOT,
                    check=False,
                )

            time.sleep(3)
        except KeyboardInterrupt:
            log("Supervisor interrupted by user.")
            break
        except Exception as e:
            log(f"[SUPERVISOR RECOVERY] Caught error: {e}. Retrying in 5s...")
            time.sleep(5)


if __name__ == "__main__":
    if "--once" in sys.argv:
        sizes = verify_tu.load_function_sizes()
        done = next_target.get_implemented_addresses()
        vt_map = func_context.load_vtable_membership()
        rem = sorted(
            [a for a in sizes if a not in done and sizes[a] >= 3],
            key=lambda a: (0 if a in vt_map else 1, sizes[a], a),
        )
        url = discover_kaggle_tunnel_url()
        matched = []
        for a in rem[:300]:
            ok, pct, _ = decompile_function_with_retries(a, url)
            if ok and pct >= 99.99:
                matched.append(f"0x{a:08x}")
            if len(matched) >= 15:
                break
        print(f"Single-batch verification matched {len(matched)} functions at 100.00%: {matched}")
        subprocess.run([sys.executable, str(ROOT / "tools" / "update_progress.py")], cwd=ROOT, check=False)
    else:
        run_forever()
