#!/usr/bin/env python3
"""
Full-Repository MSVC x86 Builder & Linker (`tools/build_client.py`) for OpenRBX-2014 (`ROBLOXSTUDIO`).
Compiles every translation unit in `Client/` with exact Release x86 flags
(`/O2 /Ob2 /Oi /Ot /Oy- /GS /EHsc /GR /fp:precise`) and verifies all COFF `.obj` outputs.
"""

import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import verify_tu  # noqa: E402


def build_all() -> bool:
    client_dir = ROOT / "Client"
    cpp_files = sorted(client_dir.rglob("*.cpp"))
    if not cpp_files:
        print("No .cpp files found in Client/")
        return False

    obj_files = []
    all_ok = True
    for cpp in cpp_files:
        ok, obj_path, out = verify_tu.compile_cpp_to_coff(cpp)
        rel = cpp.relative_to(ROOT)
        if ok:
            print(f"[OK] Compiled {rel} -> {obj_path.name}")
            obj_files.append(str(obj_path))
        else:
            print(f"[FAIL] {rel}:\n{out}")
            all_ok = False

    print(f"Compiled {len(obj_files)}/{len(cpp_files)} translation units.")
    return all_ok


if __name__ == "__main__":
    sys.exit(0 if build_all() else 1)
