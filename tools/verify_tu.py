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


def load_function_sizes() -> dict[int, int]:
    sizes = {}
    if CSV_PATH.exists():
        with open(CSV_PATH, "r", encoding="utf-8") as f:
            for row in csv.DictReader(f):
                sizes[int(row["address"], 16)] = int(row["size"])
    return sizes


def get_original_function_bytes(addr: int, size: int) -> bytes:
    pe_bytes = EXE_PATH.read_bytes()
    pe_off = struct.unpack("<I", pe_bytes[0x3C:0x40])[0]
    nsec = struct.unpack("<H", pe_bytes[pe_off + 6 : pe_off + 8])[0]
    img_base = struct.unpack("<I", pe_bytes[pe_off + 52 : pe_off + 56])[0]
    opt_sz = struct.unpack("<H", pe_bytes[pe_off + 20 : pe_off + 22])[0]
    sec_off = pe_off + 24 + opt_sz

    for i in range(nsec):
        s = pe_bytes[sec_off + i * 40 : sec_off + (i + 1) * 40]
        vsz, va, rawsz, rawptr = struct.unpack("<IIII", s[8:24])
        sec_va = img_base + va
        if sec_va <= addr < sec_va + rawsz:
            off = rawptr + (addr - sec_va)
            return pe_bytes[off : off + size]
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

    for i, line in enumerate(lines):
        m = ann_re.search(line)
        if m:
            kind = m.group(1)
            addr = int(m.group(2), 16)
            fn_hint = ""
            for j in range(i + 1, min(i + 8, len(lines))):
                if lines[j].strip().startswith("//"):
                    continue
                sm = sig_re.search(lines[j])
                if sm:
                    fn_hint = sm.group(1).split("::")[-1]
                    break
            results.append((addr, kind, fn_hint))
    return results


_MSVC_ENV_CACHE = None


def get_msvc_env() -> dict[str, str]:
    global _MSVC_ENV_CACHE
    if _MSVC_ENV_CACHE is not None:
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


def compile_cpp_to_coff(cpp_path: Path) -> tuple[bool, Path, str]:
    BUILD_OBJ_DIR.mkdir(parents=True, exist_ok=True)
    obj_path = BUILD_OBJ_DIR / (cpp_path.stem + ".obj")
    if obj_path.exists():
        obj_path.unlink()

    includes = [
        f'/I"{ROOT / "util"}"',
        f'/I"{ROOT / "Client" / "Base" / "include"}"',
        f'/I"{ROOT / "Client" / "App" / "include"}"',
        f'/I"{ROOT / "Client" / "Rendering" / "G3D" / "include"}"',
    ]
    flags = "/nologo /c /O2 /Ob2 /Oi /Ot /Oy- /GS /EHsc /GR /Gy /fp:precise /Zc:wchar_t /Zc:forScope"
    cmd_str = f'cl.exe {flags} {" ".join(includes)} "{cpp_path}" /Fo"{obj_path}"'

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


def compare_with_relocations(orig: bytes, recomp: bytes, rel_offsets: set[int]) -> tuple[float, list[str]]:
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

        for sym_name, (recomp_bytes, rel_offsets) in coff_funcs.items():
            pct, diff = compare_with_relocations(orig_bytes, recomp_bytes, rel_offsets)
            bonus = 10.0 if (fn_hint and fn_hint in sym_name) else 0.0
            if pct + bonus > best_pct:
                best_pct = pct + bonus
                actual_pct = pct
                best_sym = sym_name
                best_diff = diff
                best_recomp_len = len(recomp_bytes)

        if best_sym is None:
            print(f"  [!] 0x{addr:08x} ({fn_hint}): No matching symbol emitted in .obj")
            continue

        print(f"  [{kind}] 0x{addr:08x} -> {best_sym} | Match: {actual_pct:.2f}% (Orig: {len(orig_bytes)}B, Recomp: {best_recomp_len}B)")
        if actual_pct < 100.0 or filter_addr is not None:
            for dl in best_diff[:30]:
                print(dl)


if __name__ == "__main__":
    main()
