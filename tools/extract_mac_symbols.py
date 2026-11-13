#!/usr/bin/env python3
"""
Extract the symbol donor for OpenRBX-2014 (`ROBLOXSTUDIO` 0.164.0.50577).

The matching macOS i386 `RobloxPlayer` build was shipped unstripped: its
`LC_SYMTAB` carries ~38,500 C++ names (`RBX::*`, `bt*`, `G3D::*`, boost), which
is the only source of real method names for the Windows binary. This fetches the
build from the Roblonium archive, extracts the executable and writes
`data/mac_symbols_2014.json`:

    [{"mangled": "__ZN3RBX...", "address": "0x00637b62", "type": 30, "sect": 1}, ...]

Names are Itanium-mangled; use `c++filt` (or `tools.demangle_mac_name`) to read
them. Run with `--force` to rebuild the JSON from an already downloaded binary.

Usage:
    python tools/extract_mac_symbols.py [--force]
"""

import argparse
import json
import struct
import subprocess
import sys
import urllib.request
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
CACHE = ROOT / "toolchain" / "mac"
ZIP_PATH = CACHE / "player.zip"
BIN_PATH = CACHE / "RobloxPlayer"
OUT_PATH = ROOT / "data" / "mac_symbols_2014.json"

BUILD_URL = (
    "https://archive.roblonium.com/Client/Mac/Client/2014/8.2014/"
    "August%2020%20%280.164.0.50577%29/version-2502b9ace6c54552/"
    "0.164.0.50577%20player.zip"
)
MEMBER = "Roblox.app/Contents/MacOS/RobloxPlayer"
LC_SYMTAB = 0x2
MACH_MAGIC_32 = 0xFEEDFACE


def log(msg: str) -> None:
    print(f"[mac-symbols] {msg}", flush=True)


def fetch_binary() -> None:
    CACHE.mkdir(parents=True, exist_ok=True)
    if BIN_PATH.exists() and BIN_PATH.stat().st_size > 1_000_000:
        return
    if not ZIP_PATH.exists():
        log("downloading the 0.164.0.50577 macOS player (~38 MB)")
        urllib.request.urlretrieve(BUILD_URL, ZIP_PATH)
    with zipfile.ZipFile(ZIP_PATH) as zf:
        BIN_PATH.write_bytes(zf.read(MEMBER))


def parse_symtab(blob: bytes) -> list[dict]:
    magic = struct.unpack_from("<I", blob, 0)[0]
    if magic != MACH_MAGIC_32:
        raise SystemExit(f"unexpected Mach-O magic {magic:#x} (expected i386)")
    ncmds = struct.unpack_from("<I", blob, 16)[0]
    off = 28  # struct mach_header (32-bit)
    symoff = nsyms = stroff = strsize = 0
    for _ in range(ncmds):
        cmd, size = struct.unpack_from("<II", blob, off)
        if cmd == LC_SYMTAB:
            symoff, nsyms, stroff, strsize = struct.unpack_from("<IIII", blob, off + 8)
        off += size
    if not nsyms:
        raise SystemExit("no LC_SYMTAB symbols found")

    strtab = blob[stroff : stroff + strsize]
    symbols = []
    for i in range(nsyms):
        strx, ntype, nsect, ndesc, nvalue = struct.unpack_from("<IBBhI", blob, symoff + i * 12)
        if not strx:
            continue
        end = strtab.find(b"\0", strx)
        name = strtab[strx:end].decode("ascii", "ignore")
        if name:
            symbols.append(
                {
                    "mangled": name,
                    "address": f"0x{nvalue:08x}",
                    "type": ntype,
                    "sect": nsect,
                }
            )
    return symbols


def demangle(name: str) -> str:
    """Demangles one Itanium symbol with the system c++filt, if available."""
    try:
        res = subprocess.run(["c++filt", name], capture_output=True, text=True)
        return res.stdout.strip() or name
    except OSError:
        return name


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--force", action="store_true", help="reparse even if the JSON exists")
    args = parser.parse_args()

    if OUT_PATH.exists() and not args.force:
        log(f"already extracted: {OUT_PATH} ({OUT_PATH.stat().st_size / 1e6:.1f} MB)")
        return 0

    fetch_binary()
    symbols = parse_symtab(BIN_PATH.read_bytes())
    OUT_PATH.write_text(json.dumps(symbols, indent=0), encoding="utf-8")
    log(f"{len(symbols)} symbols -> {OUT_PATH.relative_to(ROOT)}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
