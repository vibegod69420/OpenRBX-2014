#!/usr/bin/env python3
"""
Recover per-class virtual method names from the 0.164.0.50577 macOS symbol donor.

The Windows binary has exact RTTI vtables but no names; the matched macOS i386
build has the names but its vtables are not exported as symbols. Both were built
from the same source, so slot order is identical. This finds each class's vtable
in the macOS image (a vtable is the run of __text pointers that follows a pointer
to the class's `__ZTI...` typeinfo object) and resolves every slot to its symbol.

Output: `data/mac_vtables_2014.json`

    [{"class": "RBX::ManualWeldJoint", "vtable": "0x...", "slots": [
        {"slot": 0, "address": "0x...", "symbol": "__ZN3RBX..."} , ...]}]

Run `python tools/extract_mac_symbols.py` first (it downloads the binary).
"""

import json
import re
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
BIN_PATH = ROOT / "toolchain" / "mac" / "RobloxPlayer"
SYMBOLS_PATH = ROOT / "data" / "mac_symbols_2014.json"
OUT_PATH = ROOT / "data" / "mac_vtables_2014.json"

MH_MAGIC_32 = 0xFEEDFACE
LC_SEGMENT = 0x1


def log(msg: str) -> None:
    print(f"[mac-vtables] {msg}", flush=True)


def parse_segments(blob: bytes):
    """Returns {section_name: (vmaddr, size, fileoff)} for every Mach-O section."""
    ncmds = struct.unpack_from("<I", blob, 16)[0]
    off = 28
    sections = {}
    for _ in range(ncmds):
        cmd, size = struct.unpack_from("<II", blob, off)
        if cmd == LC_SEGMENT:
            nsects = struct.unpack_from("<I", blob, off + 48)[0]
            s = off + 56
            for _ in range(nsects):
                sectname = blob[s : s + 16].rstrip(b"\0").decode("ascii", "ignore")
                segname = blob[s + 16 : s + 32].rstrip(b"\0").decode("ascii", "ignore")
                addr, sz, fileoff = struct.unpack_from("<III", blob, s + 32)
                sections[f"{segname},{sectname}"] = (addr, sz, fileoff)
                s += 68
        off += size
    return sections


def main() -> int:
    if not BIN_PATH.exists():
        raise SystemExit("missing toolchain/mac/RobloxPlayer - run tools/extract_mac_symbols.py")
    blob = BIN_PATH.read_bytes()
    if struct.unpack_from("<I", blob, 0)[0] != MH_MAGIC_32:
        raise SystemExit("expected an i386 Mach-O")

    symbols = json.loads(SYMBOLS_PATH.read_text(encoding="utf-8"))
    by_name = {s["mangled"]: int(s["address"], 16) for s in symbols}
    by_addr = {int(s["address"], 16): s["mangled"] for s in symbols}
    info_addr = {
        m[len("__ZTI") :]: n
        for m, n in by_name.items()
        if m.startswith("__ZTI")
    }
    log(f"{len(info_addr)} typeinfo objects, {len(by_addr)} symbols")

    sections = parse_segments(blob)
    text = [(a, a + sz) for name, (a, sz, _o) in sections.items() if name.startswith("__TEXT,__text")]
    if not text:
        raise SystemExit("no __TEXT,__text section")
    text_lo = min(a for a, _b in text)
    text_hi = max(b for _a, b in text)

    # index every 4-byte little-endian word in the const/data sections, so the
    # scan for "pointer to typeinfo" is a dictionary lookup rather than 30M reads
    scan = {}
    for name, (addr, size, fileoff) in sections.items():
        if name.startswith("__TEXT,__text") or name.startswith("__TEXT,__textcoal"):
            continue
        if not (name.startswith("__DATA") or name.startswith("__TEXT,__const")):
            continue
        data = blob[fileoff : fileoff + size]
        for i in range(0, len(data) - 4, 4):
            scan.setdefault(struct.unpack_from("<I", data, i)[0], []).append((addr + i, fileoff + i))

    results = {}
    for mangled, ti in info_addr.items():
        cls = re.sub(r"^N(.*)E$", r"\1", mangled)
        hits = scan.get(ti, [])
        for vtable_slot_addr, fileoff in hits:
            # vtable[-1] is the typeinfo pointer; the slots start right after it
            start = fileoff + 4
            slots = []
            while start + 4 <= len(blob):
                fn = struct.unpack_from("<I", blob, start)[0]
                if not (text_lo <= fn < text_hi):
                    break
                slots.append(fn)
                start += 4
            if len(slots) < 2:
                continue
            key = f"{cls}@{vtable_slot_addr:08x}"
            results[key] = {
                "mangled_class": mangled,
                "vtable": f"0x{vtable_slot_addr:08x}",
                "slots": [
                    {"slot": i, "address": f"0x{fn:08x}", "symbol": by_addr.get(fn, "")}
                    for i, fn in enumerate(slots)
                ],
            }

    OUT_PATH.write_text(json.dumps(list(results.values()), indent=0), encoding="utf-8")
    named = sum(1 for r in results.values() for s in r["slots"] if s["symbol"])
    total = sum(len(r["slots"]) for r in results.values())
    log(f"{len(results)} vtables, {total} slots, {named} named -> {OUT_PATH.relative_to(ROOT)}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
