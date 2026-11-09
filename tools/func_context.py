#!/usr/bin/env python3
"""
Pre-Flight Function Context Card Generator for OpenRBX-2014 (`ROBLOXSTUDIO`).
Usage:
    python tools/func_context.py 0x00401000
"""

import csv
import json
import re
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
EXE_PATH = ROOT / "robloxbin" / "RobloxStudioBeta.exe"
CSV_PATH = ROOT / "ROBLOXSTUDIO-function-size.csv"
VTABLES_PATH = ROOT / "data" / "rtti_vtables_2014.json"
OPENRBX_2007_DIR = ROOT.parent / "OpenRBX" / "Client"


def load_function_sizes():
    sizes = {}
    if CSV_PATH.exists():
        with open(CSV_PATH, "r", encoding="utf-8") as f:
            reader = csv.DictReader(f)
            for row in reader:
                sizes[int(row["address"], 16)] = int(row["size"])
    return sizes


def demangle_msvc_rtti(mangled: str) -> str:
    # Convert `.?AVPartInstance@RBX@@` -> `RBX::PartInstance`
    s = re.sub(r"^\.\?A[UV]", "", mangled)
    s = s.rstrip("@")
    parts = [p for p in s.split("@") if p]
    if len(parts) >= 2 and not any("?" in p for p in parts):
        return "::".join(reversed(parts))
    return mangled


def load_vtable_membership():
    membership = {}
    if VTABLES_PATH.exists():
        vtables = json.loads(VTABLES_PATH.read_text(encoding="utf-8"))
        for vt in vtables:
            cls_name = demangle_msvc_rtti(vt["class_mangled"])
            for slot_idx, fn_hex in enumerate(vt["slots"]):
                addr = int(fn_hex, 16)
                membership.setdefault(addr, []).append({
                    "class": cls_name,
                    "raw_rtti": vt["class_mangled"],
                    "vtable_va": vt["vtable_va"],
                    "slot": slot_idx,
                    "vtable_offset": vt["vtable_offset"],
                })
    return membership


def disassemble_x86(code: bytes, base_va: int):
    try:
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        md = Cs(CS_ARCH_X86, CS_MODE_32)
        lines = []
        for insn in md.disasm(code, base_va):
            b_hex = " ".join(f"{b:02x}" for b in insn.bytes)
            lines.append(f"  0x{insn.address:08x}: {b_hex:<24} {insn.mnemonic:<8} {insn.op_str}")
        return lines
    except ImportError:
        # Lightweight fallback disassembler for common x86 instructions if capstone is not yet installed
        lines = []
        for off in range(0, len(code), 16):
            chunk = code[off : off + 16]
            b_hex = " ".join(f"{b:02x}" for b in chunk)
            lines.append(f"  0x{base_va + off:08x}: {b_hex}")
        return lines


def extract_referenced_strings_and_floats(pe_bytes: bytes, sections: dict, code: bytes, base_va: int):
    rdata = sections.get(".rdata")
    data_sec = sections.get(".data")
    text = sections.get(".text")

    def read_va(va: int, length: int):
        for s in sections.values():
            if s["va"] <= va < s["va"] + s["rawsz"]:
                off = s["rawptr"] + (va - s["va"])
                return pe_bytes[off : off + length]
        return None

    strings_found = []
    floats_found = []
    callees_found = []

    # Scan for 32-bit immediate VAs in .rdata / .data
    for i in range(len(code) - 4):
        imm = struct.unpack_from("<I", code, i)[0]
        if rdata and (rdata["va"] <= imm < rdata["va"] + rdata["rawsz"]):
            raw = read_va(imm, 128)
            if raw:
                m = re.match(rb"([\x20-\x7e]{4,120})\x00", raw)
                if m:
                    s_val = m.group(1).decode("ascii", "ignore")
                    strings_found.append(f"0x{imm:08x}: \"{s_val}\"")
                elif len(raw) >= 8:
                    f32 = struct.unpack_from("<f", raw, 0)[0]
                    f64 = struct.unpack_from("<d", raw, 0)[0]
                    if abs(f32) > 1e-7 and abs(f32) < 1e7:
                        floats_found.append(f"0x{imm:08x}: float={f32:.6g} / double={f64:.6g}")
        elif data_sec and (data_sec["va"] <= imm < data_sec["va"] + data_sec["rawsz"]):
            raw = read_va(imm, 64)
            if raw:
                m = re.match(rb"([\x20-\x7e]{4,60})\x00", raw)
                if m:
                    strings_found.append(f"0x{imm:08x} (.data): \"{m.group(1).decode('ascii', 'ignore')}\"")

    # Scan for direct E8 rel32 calls
    for i in range(len(code) - 5):
        if code[i] == 0xE8:
            rel = struct.unpack_from("<i", code, i + 1)[0]
            target = base_va + i + 5 + rel
            if text and (text["va"] <= target < text["va"] + text["vsz"]):
                callees_found.append(f"0x{target:08x}")

    return sorted(set(strings_found))[:20], sorted(set(floats_found))[:10], sorted(set(callees_found))


def find_2007_openrbx_hints(class_names: list[str]):
    if not OPENRBX_2007_DIR.exists() or not class_names:
        return []
    hints = []
    for cls in class_names:
        short = cls.split("::")[-1]
        if len(short) < 3:
            continue
        for p in OPENRBX_2007_DIR.rglob(f"*{short}*"):
            if p.suffix in (".h", ".cpp", ".inl"):
                hints.append(str(p.relative_to(OPENRBX_2007_DIR.parent)))
    return sorted(set(hints))[:8]


def main():
    if len(sys.argv) < 2:
        print("Usage: python tools/func_context.py 0x<ADDRESS>")
        sys.exit(1)

    addr = int(sys.argv[1], 16)
    sizes = load_function_sizes()
    fn_size = sizes.get(addr, 64)

    pe_bytes = EXE_PATH.read_bytes()
    pe_off = struct.unpack("<I", pe_bytes[0x3C:0x40])[0]
    nsec = struct.unpack("<H", pe_bytes[pe_off + 6 : pe_off + 8])[0]
    img_base = struct.unpack("<I", pe_bytes[pe_off + 52 : pe_off + 56])[0]
    opt_sz = struct.unpack("<H", pe_bytes[pe_off + 20 : pe_off + 22])[0]
    sec_off = pe_off + 24 + opt_sz

    sections = {}
    for i in range(nsec):
        s = pe_bytes[sec_off + i * 40 : sec_off + (i + 1) * 40]
        sname = s[:8].rstrip(b"\x00").decode("ascii", "ignore")
        vsz, va, rawsz, rawptr = struct.unpack("<IIII", s[8:24])
        sections[sname] = {"va": img_base + va, "vsz": vsz, "rawsz": rawsz, "rawptr": rawptr}

    text = sections[".text"]
    file_off = text["rawptr"] + (addr - text["va"])
    code = pe_bytes[file_off : file_off + fn_size]

    membership = load_vtable_membership().get(addr, [])
    strings_ref, floats_ref, callees_ref = extract_referenced_strings_and_floats(pe_bytes, sections, code, addr)
    class_list = [m["class"] for m in membership]
    openrbx_hints = find_2007_openrbx_hints(class_list)

    print("=" * 76)
    print(f"PRE-FLIGHT FUNCTION CONTEXT CARD: ROBLOXSTUDIO 0x{addr:08x}")
    print("=" * 76)
    print(f"Exact Byte Budget : {fn_size} bytes (0x{addr:08x} .. 0x{addr + fn_size:08x})")
    print(f"Annotation Header : // FUNCTION: ROBLOXSTUDIO 0x{addr:08x}")
    if membership:
        print("RTTI VTable Slots :")
        for m in membership[:5]:
            print(f"  - Class `{m['class']}` | VTable {m['vtable_va']} slot #{m['slot']} (offset +{m['vtable_offset']})")
    else:
        print("RTTI VTable Slots : (non-virtual or free/static function)")

    if callees_ref:
        print(f"Direct Callees    : {', '.join(callees_ref)}")
    if strings_ref:
        print("Referenced Strings:")
        for s in strings_ref:
            print(f"  - {s}")
    if floats_ref:
        print("Referenced Floats :")
        for fl in floats_ref:
            print(f"  - {fl}")
    if openrbx_hints:
        print("2007 OpenRBX Refs :")
        for h in openrbx_hints:
            print(f"  - ../OpenRBX/{h}")

    print("\nOriginal x86 Assembly (MSVC 11.0):")
    for line in disassemble_x86(code, addr):
        print(line)
    print("=" * 76)


if __name__ == "__main__":
    main()
