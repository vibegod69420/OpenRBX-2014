#!/usr/bin/env python3
"""
Ultra-High-Context Pre-Flight Function Context Card Generator for OpenRBX-2014 (`ROBLOXSTUDIO`).
Designed for 256K-context frontier models (`Qwen3.8-27B` / `Qwen3.8-35B-A3B`).

Includes:
1. Exact byte budget & address bounds from `ROBLOXSTUDIO-function-size.csv`
2. Full x86 assembly + raw hex dump of the target function
3. Complete RTTI VTable membership + disassembly of neighboring vtable slots on the same class
   (revealing `[ecx + offset]` member field accesses across the class)
4. Disassembly of direct callees (`call 0x...`)
5. Referenced `.rdata` / `.data` string literals, `FFlag`/`FInt` names, `__FILE__` source paths,
   and `float`/`double` constants
6. Matching class metadata from `robloxbin/ReflectionMetadata.xml`
7. Full inlined C++ header & implementation reference from 2007 `OpenRBX` (`../OpenRBX/Client/...`)
"""

import csv
import json
import re
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
EXE_PATH = ROOT / "robloxbin" / "RobloxStudioBeta.exe"
RMETA_PATH = ROOT / "robloxbin" / "ReflectionMetadata.xml"
CSV_PATH = ROOT / "ROBLOXSTUDIO-function-size.csv"
VTABLES_PATH = ROOT / "data" / "rtti_vtables_2014.json"
OPENRBX_2007_DIR = ROOT.parent / "OpenRBX" / "Client"

_SIZES_CACHE = None
_VTABLES_CACHE = None
_MEMBERSHIP_CACHE = None
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


def demangle_msvc_rtti(mangled: str) -> str:
    s = re.sub(r"^\.\?A[UV]", "", mangled).rstrip("@")
    parts = [p for p in s.split("@") if p]
    if len(parts) >= 2 and not any("?" in p for p in parts):
        return "::".join(reversed(parts))
    return mangled


def load_vtables_and_membership():
    global _VTABLES_CACHE, _MEMBERSHIP_CACHE
    if _VTABLES_CACHE is None:
        _VTABLES_CACHE = []
        _MEMBERSHIP_CACHE = {}
        if VTABLES_PATH.exists():
            _VTABLES_CACHE = json.loads(VTABLES_PATH.read_text(encoding="utf-8"))
            for vt in _VTABLES_CACHE:
                cls_name = demangle_msvc_rtti(vt["class_mangled"])
                for slot_idx, fn_hex in enumerate(vt["slots"]):
                    addr = int(fn_hex, 16)
                    _MEMBERSHIP_CACHE.setdefault(addr, []).append({
                        "class": cls_name,
                        "raw_rtti": vt["class_mangled"],
                        "vtable_va": vt["vtable_va"],
                        "slot": slot_idx,
                        "vtable_offset": vt["vtable_offset"],
                        "all_slots": vt["slots"],
                    })
    return _VTABLES_CACHE, _MEMBERSHIP_CACHE


def load_pe():
    global _PE_CACHE
    if _PE_CACHE is None:
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
        _PE_CACHE = (pe_bytes, sections)
    return _PE_CACHE


def load_vtable_membership():
    _, mem = load_vtables_and_membership()
    return mem


def disassemble_x86(code: bytes, base_va: int) -> list[str]:
    try:
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        md = Cs(CS_ARCH_X86, CS_MODE_32)
        lines = []
        for insn in md.disasm(code, base_va):
            b_hex = " ".join(f"{b:02x}" for b in insn.bytes)
            lines.append(f"  0x{insn.address:08x}: {b_hex:<24} {insn.mnemonic:<8} {insn.op_str}")
        return lines
    except ImportError:
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

    for i in range(max(0, len(code) - 4)):
        imm = struct.unpack_from("<I", code, i)[0]
        if rdata and (rdata["va"] <= imm < rdata["va"] + rdata["rawsz"]):
            raw = read_va(imm, 160)
            if raw:
                m = re.match(rb"([\x20-\x7e]{3,140})\x00", raw)
                if m:
                    s_val = m.group(1).decode("ascii", "ignore")
                    strings_found.append(f"0x{imm:08x}: \"{s_val}\"")
                elif len(raw) >= 8:
                    f32 = struct.unpack_from("<f", raw, 0)[0]
                    f64 = struct.unpack_from("<d", raw, 0)[0]
                    if abs(f32) > 1e-7 and abs(f32) < 1e7:
                        floats_found.append(f"0x{imm:08x}: float={f32:.7g}f (0x{struct.unpack_from('<I', raw, 0)[0]:08x}) | double={f64:.12g}")
        elif data_sec and (data_sec["va"] <= imm < data_sec["va"] + data_sec["rawsz"]):
            raw = read_va(imm, 80)
            if raw:
                m = re.match(rb"([\x20-\x7e]{3,70})\x00", raw)
                if m:
                    strings_found.append(f"0x{imm:08x} (.data): \"{m.group(1).decode('ascii', 'ignore')}\"")

    for i in range(max(0, len(code) - 5)):
        if code[i] == 0xE8:
            rel = struct.unpack_from("<i", code, i + 1)[0]
            target = base_va + i + 5 + rel
            if text and (text["va"] <= target < text["va"] + text["vsz"]):
                callees_found.append(target)

    return sorted(set(strings_found))[:35], sorted(set(floats_found))[:20], sorted(set(callees_found))


def find_2007_openrbx_sources(class_names: list[str], max_chars: int = 24000) -> list[tuple[str, str]]:
    if not OPENRBX_2007_DIR.exists() or not class_names:
        return []
    matched_files = []
    seen = set()
    for cls in class_names:
        short = cls.split("::")[-1]
        if len(short) < 3 or "?" in short:
            continue
        for p in sorted(OPENRBX_2007_DIR.rglob(f"*{short}*")):
            if p.suffix in (".h", ".hpp", ".inl", ".cpp") and p not in seen:
                seen.add(p)
                matched_files.append(p)

    results = []
    budget = max_chars
    for p in matched_files[:6]:
        if budget <= 0:
            break
        rel = str(p.relative_to(OPENRBX_2007_DIR.parent)).replace("\\", "/")
        content = p.read_text(encoding="utf-8", errors="ignore")
        snippet = content[: min(len(content), budget, 6000)]
        budget -= len(snippet)
        results.append((rel, snippet))
    return results


def find_reflection_metadata(class_names: list[str]) -> str:
    if not RMETA_PATH.exists() or not class_names:
        return ""
    xml = RMETA_PATH.read_text(encoding="utf-8", errors="ignore")
    out = []
    for cls in class_names:
        short = cls.split("::")[-1]
        if len(short) < 3 or "?" in short:
            continue
        pattern = re.compile(
            rf'<Item class="ReflectionMetadataClass">.*?<string name="Name">{re.escape(short)}</string>.*?</Item>',
            re.DOTALL,
        )
        m = pattern.search(xml)
        if m:
            out.append(m.group(0)[:3000])
    return "\n".join(out[:2])


def build_rich_context_card(addr: int) -> str:
    sizes = load_function_sizes()
    fn_size = sizes.get(addr, 64)
    pe_bytes, sections = load_pe()
    text = sections[".text"]
    file_off = text["rawptr"] + (addr - text["va"])
    code = pe_bytes[file_off : file_off + fn_size]

    _, membership_map = load_vtables_and_membership()
    membership = membership_map.get(addr, [])
    strings_ref, floats_ref, callees_ref = extract_referenced_strings_and_floats(pe_bytes, sections, code, addr)
    class_list = [m["class"] for m in membership]

    out = []
    out.append("=" * 80)
    out.append(f"PRE-FLIGHT FUNCTION CONTEXT CARD: ROBLOXSTUDIO 0x{addr:08x}")
    out.append("=" * 80)
    out.append(f"Exact Byte Budget : {fn_size} bytes (0x{addr:08x} .. 0x{addr + fn_size:08x})")
    out.append(f"Raw Machine Hex   : {code.hex()}")
    out.append(f"Annotation Header : // FUNCTION: ROBLOXSTUDIO 0x{addr:08x}")

    if membership:
        out.append("\nRTTI VTable Slots :")
        for m in membership[:8]:
            out.append(
                f"  - Class `{m['class']}` (RTTI `{m['raw_rtti']}`) | "
                f"VTable {m['vtable_va']} slot #{m['slot']} (offset +{m['vtable_offset']}, total slots={len(m['all_slots'])})"
            )
    else:
        out.append("\nRTTI VTable Slots : (non-virtual or free/static function)")

    if strings_ref:
        out.append("\nReferenced Strings & FastFlags (.rdata / .data):")
        for s in strings_ref:
            out.append(f"  - {s}")

    if floats_ref:
        out.append("\nReferenced Float/Double Constants (.rdata):")
        for fl in floats_ref:
            out.append(f"  - {fl}")

    out.append("\nTarget x86 Assembly (MSVC 11.0 / Visual Studio 2012):")
    out.extend(disassemble_x86(code, addr))

    # Include neighboring vtable slots disassembly for class field layout context
    if membership:
        primary = membership[0]
        slots = primary["all_slots"]
        slot_idx = primary["slot"]
        start_s = max(0, slot_idx - 2)
        end_s = min(len(slots), slot_idx + 4)
        out.append(f"\nNeighboring VTable Slots on `{primary['class']}` ({primary['vtable_va']}):")
        for s_i in range(start_s, end_s):
            if s_i == slot_idx:
                continue
            s_addr = int(slots[s_i], 16)
            s_sz = min(sizes.get(s_addr, 32), 64)
            s_off = text["rawptr"] + (s_addr - text["va"])
            s_code = pe_bytes[s_off : s_off + s_sz]
            out.append(f"  --- Slot #{s_i}: 0x{s_addr:08x} ({sizes.get(s_addr, 0)} bytes) ---")
            for l in disassemble_x86(s_code, s_addr)[:12]:
                out.append("  " + l)

    # Include direct callees disassembly
    if callees_ref:
        out.append("\nDirect Callees Disassembly (first 12 instructions each):")
        for c_addr in callees_ref[:6]:
            c_sz = min(sizes.get(c_addr, 48), 64)
            c_off = text["rawptr"] + (c_addr - text["va"])
            c_code = pe_bytes[c_off : c_off + c_sz]
            c_vt = membership_map.get(c_addr, [])
            c_cls = f" [{c_vt[0]['class']} slot #{c_vt[0]['slot']}]" if c_vt else ""
            out.append(f"  --- Callee 0x{c_addr:08x} ({sizes.get(c_addr, 0)} bytes){c_cls} ---")
            for l in disassemble_x86(c_code, c_addr)[:12]:
                out.append("  " + l)

    # Include ReflectionMetadata.xml if matched
    rmeta_xml = find_reflection_metadata(class_list)
    if rmeta_xml:
        out.append("\n2014 ReflectionMetadata.xml Entry:")
        out.append(rmeta_xml)

    # Include full 2007 OpenRBX C++ source files for matching classes
    openrbx_sources = find_2007_openrbx_sources(class_list)
    if openrbx_sources:
        out.append("\n2007 OpenRBX C++ Reference Files (Direct Engine Ancestor):")
        for rel_path, src_text in openrbx_sources:
            out.append(f"\n--- ../OpenRBX/{rel_path} ---")
            out.append(src_text)

    out.append("=" * 80)
    return "\n".join(out)


def main():
    if len(sys.argv) < 2:
        print("Usage: python tools/func_context.py 0x<ADDRESS>")
        sys.exit(1)
    addr = int(sys.argv[1], 16)
    print(build_rich_context_card(addr))


if __name__ == "__main__":
    main()
