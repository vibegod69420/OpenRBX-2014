#!/usr/bin/env python3
"""
Sub-Second Single-Translation-Unit MSVC Byte-Accuracy Verifier (`verify_tu.py`)
for OpenRBX-2014 (`ROBLOXSTUDIO`).

Compiles a single `.cpp` file with MSVC `cl.exe /c /O2 /Ob2 /Oi /Ot /Oy- /GS /EHsc /GR /fp:precise`,
parses the resulting COFF `.obj` symbol table and `.text$mn` COMDAT sections (including COFF
relocations `IMAGE_REL_I386_DIR32` and `IMAGE_REL_I386_REL32`), and compares each annotated
`// FUNCTION: ROBLOXSTUDIO 0x...` or `// STUB: ROBLOXSTUDIO 0x...` function byte-for-byte
against `robloxbin/RobloxStudioBeta.exe` in ~0.4 seconds!

Usage:
    python tools/verify_tu.py Client/App/V8World/Joint.cpp [0x004f6040]
"""

import csv
import os
import re
import struct
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
EXE_PATH = ROOT / "robloxbin" / "RobloxStudioBeta.exe"
CSV_PATH = ROOT / "ROBLOXSTUDIO-function-size.csv"
BUILD_OBJ_DIR = ROOT / "build" / "tu_cache"

_SIZES_CACHE = None
_PE_CACHE = None


def load_function_sizes() -> dict[int, int]:
    global _SIZES_CACHE
    if _SIZES_CACHE is None:
        _SIZES_CACHE = {}
        if CSV_PATH.exists():
            with open(CSV_PATH, "r", encoding="utf-8") as f:
                for row in csv.DictReader(f):
                    _SIZES_CACHE[int(row["address"], 16)] = int(row["size"])
    return _SIZES_CACHE


def _get_pe_cache():
    global _PE_CACHE
    if _PE_CACHE is None:
        pe_bytes = EXE_PATH.read_bytes()
        pe_off = struct.unpack("<I", pe_bytes[0x3C:0x40])[0]
        nsec = struct.unpack("<H", pe_bytes[pe_off + 6 : pe_off + 8])[0]
        img_base = struct.unpack("<I", pe_bytes[pe_off + 52 : pe_off + 56])[0]
        opt_sz = struct.unpack("<H", pe_bytes[pe_off + 20 : pe_off + 22])[0]
        sec_off = pe_off + 24 + opt_sz
        secs = []
        for i in range(nsec):
            s = pe_bytes[sec_off + i * 40 : sec_off + (i + 1) * 40]
            vsz, va, rawsz, rawptr = struct.unpack("<IIII", s[8:24])
            secs.append((img_base + va, rawsz, rawptr))
        _PE_CACHE = (pe_bytes, secs)
    return _PE_CACHE


def _trim_at_padding(raw: bytes) -> bytes:
    """
    The address table partitions `.text`, so an entry can start at a real function but
    extend into the next one when the two are separated only by alignment padding.
    MSVC pads between functions with int3, which never appears three times in a row
    inside a real body: a terminator followed by that padding is the function's end.
    """
    for i, byte in enumerate(raw):
        if byte == 0xC3:
            end = i + 1
        elif byte == 0xC2:
            end = i + 3
        else:
            continue
        tail = raw[end:]
        if tail and (tail.startswith(b"\xcc\xcc\xcc") or set(tail) == {0xCC}):
            return raw[:end]
    return raw


def get_original_function_bytes(addr: int, size: int) -> bytes:
    pe_bytes, secs = _get_pe_cache()
    for sec_va, rawsz, rawptr in secs:
        if sec_va <= addr < sec_va + rawsz:
            off = rawptr + (addr - sec_va)
            raw = pe_bytes[off : off + size]
            # Handle 16-byte aligned leaf functions that had no trailing 0xCC padding before the next function
            if len(raw) > 16 and raw.startswith(b"\x55\x8b\xec"):
                if raw[15] == 0xC3 or (raw[13] == 0xC2 and raw[15] == 0x00):
                    return raw[:16]
            return _trim_at_padding(raw)
    return b""


def parse_annotations_in_cpp(cpp_path: Path) -> list[tuple[int, str, str]]:
    """
    Returns list of (address_int, kind ['FUNCTION'|'STUB'], function_name_hint)
    """
    txt = cpp_path.read_text(encoding="utf-8", errors="ignore")
    lines = txt.splitlines()
    results = []
    ann_re = re.compile(r"//\s*(FUNCTION|STUB):\s*ROBLOXSTUDIO\s+0x([0-9a-fA-F]+)")
    sig_re = re.compile(r"([A-Za-z_~][A-Za-z0-9_:~<>]*)\s*\(")
    ns_re = re.compile(r"^\s*namespace\s+([A-Za-z_][A-Za-z0-9_]*)\s*\{")

    active_ns = []
    for line in lines:
        nm = ns_re.match(line)
        if nm:
            active_ns.append(nm.group(1))
    ns_prefix = "::".join(active_ns)

    for i, line in enumerate(lines):
        m = ann_re.search(line)
        if m:
            kind = m.group(1)
            addr = int(m.group(2), 16)
            fn_hint = ""
            for j in range(i + 1, min(i + 8, len(lines))):
                sline = lines[j].strip()
                if sline.startswith("//") or not sline:
                    continue
                for m_cand in sig_re.finditer(sline):
                    cand = m_cand.group(1)
                    if cand not in ("if", "while", "for", "switch", "return", "sizeof", "alignof", "__declspec"):
                        if ns_prefix and "::" in cand and not cand.startswith(ns_prefix):
                            fn_hint = f"{ns_prefix}::{cand}"
                        else:
                            fn_hint = cand
                        break
                if fn_hint:
                    break
            results.append((addr, kind, fn_hint))
    return results


TARGET_CL_VERSION = "17.00.50727"  # MSVC 11.0, VS2012 x86 (target: 0.164.0.50577)
# Windows names the binary `cl.exe`; under Wine (Linux worker) the wrapper is `cl`.
CL_BIN = "cl.exe" if os.name == "nt" else "cl"
# Local checkout of the VS2012 x86 toolchain (see tools/provision_local.py).
LOCAL_MSVC_DIR = ROOT / "toolchain" / "msvc11"
_CL_VERSION_CACHE = None


def get_compiler_version() -> str:
    """
    Returns the version of the `cl.exe` this verifier is actually using.
    A body matched by cl 14.x (MSVC 8) or 19.x (VS2015+) is not evidence about the 2014
    binary: only MSVC 11.0 emits the code the original was built with.
    """
    global _CL_VERSION_CACHE
    if _CL_VERSION_CACHE is None:
        try:
            res = subprocess.run(
                CL_BIN, shell=True, capture_output=True, text=True, env=get_msvc_env()
            )
            m = re.search(
                r"Version (\d+\.\d+\.\d+(?:\.\d+)?)", (res.stdout or "") + (res.stderr or "")
            )
            _CL_VERSION_CACHE = m.group(1) if m else "unknown"
        except Exception:
            _CL_VERSION_CACHE = "unknown"
    return _CL_VERSION_CACHE


def compiler_matches_target() -> bool:
    return get_compiler_version().startswith(TARGET_CL_VERSION)


_MSVC_ENV_CACHE = None


def get_msvc_env() -> dict[str, str]:
    global _MSVC_ENV_CACHE
    if _MSVC_ENV_CACHE is not None:
        return _MSVC_ENV_CACHE

    if os.name != "nt":
        # Linux worker: MSVC 11 runs under Wine through a wrapper that sets INCLUDE/LIB itself
        # (see tools/provision_linux.sh). `MSVC_BIN_DIR` overrides the search.
        for cand in (os.environ.get("MSVC_BIN_DIR"), "/opt/msvc110/bin", "/opt/msvc/bin/x86"):
            if cand and os.path.exists(os.path.join(cand, CL_BIN)):
                env = os.environ.copy()
                env["PATH"] = cand + os.pathsep + env.get("PATH", "")
                _MSVC_ENV_CACHE = env
                return _MSVC_ENV_CACHE
        _MSVC_ENV_CACHE = os.environ.copy()
        return _MSVC_ENV_CACHE

    # Project-local VS2012 toolchain wins: it is the exact compiler the target was built with.
    local_cl = LOCAL_MSVC_DIR / "bin" / CL_BIN
    if local_cl.exists():
        env = os.environ.copy()
        env["PATH"] = str(LOCAL_MSVC_DIR / "bin") + os.pathsep + env.get("PATH", "")
        env["INCLUDE"] = str(LOCAL_MSVC_DIR / "include")
        env["LIB"] = str(LOCAL_MSVC_DIR / "lib")
        _MSVC_ENV_CACHE = env
        return _MSVC_ENV_CACHE

    if subprocess.run("where cl.exe", shell=True, capture_output=True).returncode == 0:
        _MSVC_ENV_CACHE = os.environ.copy()
        return _MSVC_ENV_CACHE

    vcvars_candidates = [
        r"D:\VS2022\VC\Auxiliary\Build\vcvars32.bat",
        r"C:\VS2022\VC\Auxiliary\Build\vcvars32.bat",
        r"C:\BuildTools\VC\Auxiliary\Build\vcvars32.bat",
        r"C:\msvc\Common7\Tools\vsvars32.bat",
        str(ROOT / "msvc800sp1" / "Common7" / "Tools" / "vsvars32.bat"),
        r"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars32.bat",
        r"C:\Program Files\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars32.bat",
        r"C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars32.bat",
        r"C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Auxiliary\Build\vcvars32.bat",
        r"C:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\bin\vcvars32.bat",
        r"C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\bin\vcvars32.bat",
    ]
    # MSVC 11.0 (VS2012) must win over any newer or older toolchain: the 2014 binary was built
    # with cl 17.00.50727 and codegen differs from both 14.x and 19.x.
    vcvars_candidates = [
        r"C:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\bin\vcvars32.bat",
        r"C:\Program Files\Microsoft Visual Studio 11.0\VC\bin\vcvars32.bat",
        r"C:\VS2012\VC\bin\vcvars32.bat",
        r"C:\msvc11\VC\bin\vcvars32.bat",
    ] + vcvars_candidates

    for vc in vcvars_candidates:
        if os.path.exists(vc):
            res = subprocess.run(f'call "{vc}" >nul 2>&1 && set', shell=True, capture_output=True, text=True)
            if res.returncode == 0:
                env = {}
                for line in res.stdout.splitlines():
                    if "=" in line:
                        k, v = line.split("=", 1)
                        env[k] = v
                _MSVC_ENV_CACHE = env
                return _MSVC_ENV_CACHE

    _MSVC_ENV_CACHE = os.environ.copy()
    return _MSVC_ENV_CACHE


_NEWEST_HEADER_MTIME = None


def _newest_header_mtime() -> float:
    """Newest header mtime in the source tree, used to invalidate cached objects."""
    global _NEWEST_HEADER_MTIME
    if _NEWEST_HEADER_MTIME is None:
        newest = 0.0
        for pattern in ("Client/**/*.h", "Client/**/*.hpp", "util/**/*.h"):
            for header in ROOT.glob(pattern):
                try:
                    newest = max(newest, header.stat().st_mtime)
                except OSError:
                    pass
        _NEWEST_HEADER_MTIME = newest
    return _NEWEST_HEADER_MTIME


def compile_cpp_to_coff(cpp_path: Path, use_cache: bool = False) -> tuple[bool, Path, str]:
    BUILD_OBJ_DIR.mkdir(parents=True, exist_ok=True)
    try:
        rel_slug = "_".join(cpp_path.resolve().relative_to(ROOT.resolve()).parts)[:-4]
    except Exception:
        rel_slug = cpp_path.stem
    obj_path = BUILD_OBJ_DIR / f"{rel_slug}.obj"

    if use_cache and obj_path.exists():
        try:
            newest = max(cpp_path.stat().st_mtime, _newest_header_mtime())
            if obj_path.stat().st_mtime >= newest:
                return True, obj_path, ""
        except Exception:
            pass

    if obj_path.exists():
        obj_path.unlink()

    includes = [
        f'/I"{ROOT / "util"}"',
        f'/I"{ROOT / "Client" / "Base" / "include"}"',
        f'/I"{ROOT / "Client" / "App" / "include"}"',
        f'/I"{ROOT / "Client" / "Network" / "include"}"',
        f'/I"{ROOT / "Client" / "Rendering" / "G3D" / "include"}"',
        f'/I"{ROOT / "Client" / "Rendering" / "g3d" / "include"}"',
        f'/I"{cpp_path.parent}"',
    ]
    # /arch:SSE matters: the 2014 build used SSE1, so scalar int->float conversions
    # are `cvtsi2ss`; the default SSE2 target folds them into packed `cvtdq2ps`
    # and no float-bearing function can match.
    flags = (
        "/nologo /c /O2 /Ob2 /Oi /Ot /Oy- /GS /EHsc /GR /Gy /fp:precise "
        "/arch:SSE /Zc:wchar_t /Zc:forScope"
    )
    # A `// FLAGS:` line pins the exact flag set for a TU whose original was built
    # with different options (third-party libraries here use frame-pointer omission).
    try:
        head = cpp_path.read_text(errors="ignore")[:4000]
    except OSError:
        head = ""
    for line in head.splitlines():
        stripped = line.strip()
        if stripped.startswith("// FLAGS:"):
            flags = stripped.split(":", 1)[1].strip()
            break

    cmd_str = f'{CL_BIN} {flags} {" ".join(includes)} "{cpp_path}" /Fo"{obj_path}"'

    res = subprocess.run(cmd_str, shell=True, capture_output=True, text=True, env=get_msvc_env())
    out = (res.stdout + "\n" + res.stderr).strip()
    return (res.returncode == 0 and obj_path.exists()), obj_path, out


def parse_coff_functions(obj_path: Path) -> dict[str, tuple[bytes, set[int]]]:
    """
    Extracts all code sections and symbols from a COFF .obj file.
    Returns dict: symbol_name -> (raw_code_bytes, set_of_relocated_byte_offsets)
    """
    data = obj_path.read_bytes()
    mach, nsec, ts, sym_ptr, nsyms, opt_sz, chars = struct.unpack_from("<HHIIIHH", data, 0)
    sec_table_off = 20 + opt_sz

    # String table immediately follows the symbol table (each symbol record is 18 bytes)
    str_table_off = sym_ptr + nsyms * 18

    def get_sym_name(raw8: bytes) -> str:
        z1, z2 = struct.unpack("<II", raw8)
        if z1 == 0:
            end = data.find(b"\x00", str_table_off + z2)
            return data[str_table_off + z2 : end].decode("ascii", "ignore")
        return raw8.rstrip(b"\x00").decode("ascii", "ignore")

    sections = []
    for i in range(nsec):
        s_off = sec_table_off + i * 40
        sname = data[s_off : s_off + 8].rstrip(b"\x00").decode("ascii", "ignore")
        vsz, va, rawsz, rawptr, relptr, lineptr, nrel, nline, schars = struct.unpack_from(
            "<IIIIIIHHI", data, s_off + 8
        )
        rel_offsets = set()
        for r in range(nrel):
            r_va, r_sym, r_type = struct.unpack_from("<IIH", data, relptr + r * 10)
            # Mark the 4-byte relocation span as wildcarded for address/call target relocation invariance
            for b in range(r_va, r_va + 4):
                rel_offsets.add(b)
        sec_bytes = data[rawptr : rawptr + rawsz] if rawptr and rawsz else b""
        sections.append((sname, sec_bytes, rel_offsets, schars))

    functions = {}
    idx = 0
    while idx < nsyms:
        rec_off = sym_ptr + idx * 18
        raw_name = data[rec_off : rec_off + 8]
        val, sec_num, sym_type, storage_cls, n_aux = struct.unpack_from("<IhHBB", data, rec_off + 8)
        name = get_sym_name(raw_name)
        # External or static function symbol in a code section (sec_num >= 1, sym_type == 0x20 function)
        if sec_num >= 1 and sec_num <= len(sections) and (sym_type == 0x20 or (storage_cls == 2 and name.startswith("?"))):
            sname, sec_bytes, rel_offsets, schars = sections[sec_num - 1]
            if sname.startswith(".text") and val < len(sec_bytes):
                fn_bytes = sec_bytes[val:]
                fn_rels = {r - val for r in rel_offsets if r >= val}
                functions[name] = (fn_bytes, fn_rels)
        idx += 1 + n_aux

    return functions


def compare_with_relocations(orig: bytes, recomp: bytes, rel_offsets: set[int], want_diff: bool = False) -> tuple[float, list[str]]:
    """
    Computes byte-accuracy match percentage (ignoring 4-byte COFF relocation target addresses,
    identical to `reccmp` relocation masking) and returns a diagnostic diff.
    """
    max_len = max(len(orig), len(recomp), 1)
    min_len = min(len(orig), len(recomp))

    # Also mask E8 (call rel32) disp32 in orig if recomp also has E8 at the same offset
    matched = 0
    for i in range(min_len):
        if i in rel_offsets:
            matched += 1
        elif orig[i] == recomp[i]:
            matched += 1
        elif i >= 1 and i <= 4 and orig[0] == 0xE8 and recomp[0] == 0xE8:
            matched += 1

    pct = (matched * 100.0) / max_len

    diff_lines = []
    if pct >= 100.0 or not want_diff:
        return pct, diff_lines
    try:
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        md = Cs(CS_ARCH_X86, CS_MODE_32)
        orig_insns = list(md.disasm(orig, 0))
        recomp_insns = list(md.disasm(recomp, 0))
        max_ins = max(len(orig_insns), len(recomp_insns))
        for k in range(max_ins):
            o_str = f"{orig_insns[k].mnemonic} {orig_insns[k].op_str}" if k < len(orig_insns) else "<end>"
            r_str = f"{recomp_insns[k].mnemonic} {recomp_insns[k].op_str}" if k < len(recomp_insns) else "<end>"
            marker = "  " if o_str.split()[0:1] == r_str.split()[0:1] and len(orig_insns[k].bytes if k < len(orig_insns) else b"") == len(recomp_insns[k].bytes if k < len(recomp_insns) else b"") else "!="
            diff_lines.append(f"  {marker} ORIG: {o_str:<34} | RECOMP: {r_str}")
    except ImportError:
        diff_lines.append(f"  ORIG HEX  : {orig.hex()}")
        diff_lines.append(f"  RECOMP HEX: {recomp.hex()}")

    return pct, diff_lines


def main():
    if len(sys.argv) < 2:
        print("Usage: python tools/verify_tu.py <path/to/file.cpp> [0xADDRESS]")
        sys.exit(1)

    cpp_path = Path(sys.argv[1]).resolve()
    filter_addr = int(sys.argv[2], 16) if len(sys.argv) > 2 else None

    annotations = parse_annotations_in_cpp(cpp_path)
    if not annotations:
        print(f"[!] No `// FUNCTION: ROBLOXSTUDIO 0x...` annotations found in {cpp_path}")
        sys.exit(1)

    ok, obj_path, compiler_out = compile_cpp_to_coff(cpp_path)
    if not ok:
        print(f"[COMPILE FAILED] {cpp_path.name}:\n{compiler_out}")
        sys.exit(2)

    coff_funcs = parse_coff_functions(obj_path)
    sizes = load_function_sizes()

    print(f"=== Verification Report for {cpp_path.name} ({len(coff_funcs)} COFF functions compiled) ===")
    for addr, kind, fn_hint in annotations:
        if filter_addr is not None and addr != filter_addr:
            continue
        sz = sizes.get(addr, 32)
        orig_bytes = get_original_function_bytes(addr, sz)

        # Match symbol by fn_hint or best byte similarity
        best_sym = None
        best_pct = -1.0
        best_diff = []
        best_recomp_len = 0

        short_hint = fn_hint.split("::")[-1] if fn_hint else ""
        class_hint = fn_hint.split("::")[0] if fn_hint and "::" in fn_hint else ""
        for sym_name, (recomp_bytes, rel_offsets) in coff_funcs.items():
            pct, diff = compare_with_relocations(orig_bytes, recomp_bytes, rel_offsets)
            bonus = 10.0 if (short_hint and short_hint in sym_name) else 0.0
            # Folded bodies are byte-identical across classes; the qualifier breaks
            # the tie so the recorded symbol belongs to the annotated class.
            if class_hint and class_hint in sym_name:
                bonus += 5.0
            if pct + bonus > best_pct:
                best_pct = pct + bonus
                actual_pct = pct
                best_sym = sym_name
                best_diff = diff
                best_recomp_len = len(recomp_bytes)
                best_recomp_bytes = recomp_bytes
                best_rel_offsets = rel_offsets

        if best_sym is None:
            print(f"  [!] 0x{addr:08x} ({fn_hint}): No matching symbol emitted in .obj")
            continue

        print(f"  [{kind}] 0x{addr:08x} -> {best_sym} | Match: {actual_pct:.2f}% (Orig: {len(orig_bytes)}B, Recomp: {best_recomp_len}B)")
        if actual_pct < 100.0 or filter_addr is not None:
            if not best_diff:
                _, best_diff = compare_with_relocations(orig_bytes, best_recomp_bytes, best_rel_offsets, want_diff=True)
            for dl in best_diff[:30]:
                print(dl)


if __name__ == "__main__":
    main()
