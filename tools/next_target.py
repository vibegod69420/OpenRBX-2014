#!/usr/bin/env python3
"""
Selects the next highest-priority unimplemented function in OpenRBX-2014 (`ROBLOXSTUDIO`).
Prioritizes:
1. Functions belonging to RTTI class VTables (`RBX::*`, `G3D::*`) with clean, deterministic sizes (6..160 bytes)
2. Small leaf functions & getters/setters across `ROBLOXSTUDIO-function-size.csv`
3. Scales up to larger methods as smaller dependencies are 100% matched.
"""

import csv
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
CLIENT_DIR = ROOT / "Client"
CSV_PATH = ROOT / "ROBLOXSTUDIO-function-size.csv"
VTABLES_PATH = ROOT / "data" / "rtti_vtables_2014.json"


def get_implemented_addresses() -> set[int]:
    done = set()
    pattern = re.compile(r"//\s*(?:FUNCTION|STUB):\s*ROBLOXSTUDIO\s+0x([0-9a-fA-F]+)")
    if CLIENT_DIR.exists():
        for p in CLIENT_DIR.rglob("*"):
            if p.suffix in (".cpp", ".c", ".h", ".hpp", ".inl"):
                txt = p.read_text(encoding="utf-8", errors="ignore")
                for m in pattern.finditer(txt):
                    done.add(int(m.group(1), 16))
    return done


def demangle_msvc_rtti(mangled: str) -> str:
    s = re.sub(r"^\.\?A[UV]", "", mangled).rstrip("@")
    parts = [p for p in s.split("@") if p]
    if len(parts) >= 2 and not any("?" in p for p in parts):
        return "::".join(reversed(parts))
    return mangled


def main():
    count = int(sys.argv[1]) if len(sys.argv) > 1 else 5
    done = get_implemented_addresses()

    sizes = {}
    with open(CSV_PATH, "r", encoding="utf-8") as f:
        for row in csv.DictReader(f):
            sizes[int(row["address"], 16)] = int(row["size"])

    vt_map = {}
    if VTABLES_PATH.exists():
        for vt in json.loads(VTABLES_PATH.read_text(encoding="utf-8")):
            cls = demangle_msvc_rtti(vt["class_mangled"])
            for idx, s in enumerate(vt["slots"]):
                addr = int(s, 16)
                if addr not in vt_map and ("RBX::" in cls or "G3D::" in cls):
                    vt_map[addr] = (cls, vt["vtable_va"], idx)

    candidates = []
    for addr, sz in sizes.items():
        if addr in done:
            continue
        vt_info = vt_map.get(addr)
        # Priority score: prefer RBX::/G3D:: vtable methods and concise functions first
        has_rbx_vt = 0 if vt_info else 1
        size_bucket = 0 if 6 <= sz <= 96 else (1 if sz <= 256 else 2)
        candidates.append((has_rbx_vt, size_bucket, sz, addr, vt_info))

    candidates.sort(key=lambda x: (x[0], x[1], x[2], x[3]))

    print(f"Implemented so far: {len(done)} / {len(sizes)} functions ({len(done)*100.0/max(1,len(sizes)):.3f}%)")
    print(f"Top {count} Next Target Functions:")
    for _, _, sz, addr, vt_info in candidates[:count]:
        if vt_info:
            cls, vt_va, slot = vt_info
            print(f"  0x{addr:08x} ({sz:4d} bytes) | {cls} [VTable {vt_va} slot #{slot}]")
        else:
            print(f"  0x{addr:08x} ({sz:4d} bytes) | (non-virtual / static method)")


if __name__ == "__main__":
    main()
