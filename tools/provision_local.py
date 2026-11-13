#!/usr/bin/env python3
"""
Provision the local MSVC 11.0 (VS2012 x86) toolchain used by `tools/verify_tu.py`.

Byte-accurate matching requires the exact compiler the 2014 binary was built with
(`cl` 17.00.50727); cl 14.x (VS2005) and 19.x (VS2015+) emit different codegen.
Microsoft never shipped VS2012 as a standalone toolset, so this extracts the
compiler, headers and x86 CRT libraries from the VS2012 Professional DVD image
into `toolchain/msvc11/` (git-ignored, local only).

Usage:
    python tools/provision_local.py [--keep-iso]

Everything happens on the local machine: no Wine, no admin rights, no install
registration (`msiexec /a` only unpacks the MSI payload into a target directory).
"""

import argparse
import os
import shutil
import struct
import subprocess
import sys
import urllib.request
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
TOOLCHAIN = ROOT / "toolchain"
MSVC = TOOLCHAIN / "msvc11"
DOWNLOAD = TOOLCHAIN / "download"
ISO_PATH = DOWNLOAD / "vs2012.iso"
RAW = TOOLCHAIN / "raw"

ISO_URL = (
    "https://archive.org/download/en_visual_studio_professional_2012_x86_dvd/"
    "Visual%20Studio%20Professional%202012%20%28x86%29%20-%20DVD%20%28English%29/"
    "en_visual_studio_professional_2012_x86_dvd_2262334.iso"
)
ISO_BYTES = 1541943296

MSI_PACKAGES = (
    r"vc_compilercore\vc_compilercore.msi",
    r"vc_compilercoreres\vc_compilercoreres.msi",
    r"vc_librarycore\vc_librarycore.msi",
)

# Files cl.exe needs at run time. c1xx.dll is the C++ front end; without it every
# C++ compile dies with "Command line error D8027: cannot execute 'c1xx'".
COMPILER_FILES = ("cl.exe", "c1.dll", "c1xx.dll", "c2.dll")


def log(msg: str) -> None:
    print(f"[provision] {msg}", flush=True)


def download_iso() -> None:
    DOWNLOAD.mkdir(parents=True, exist_ok=True)
    if ISO_PATH.exists() and ISO_PATH.stat().st_size == ISO_BYTES:
        log(f"ISO already present ({ISO_BYTES} bytes)")
        return
    log(f"downloading {ISO_URL.rsplit('/', 1)[-1]} ({ISO_BYTES / 1e9:.2f} GB)")
    tmp = ISO_PATH.with_suffix(".part")
    with urllib.request.urlopen(ISO_URL) as resp, open(tmp, "wb") as out:
        done = 0
        while True:
            chunk = resp.read(1 << 20)
            if not chunk:
                break
            out.write(chunk)
            done += len(chunk)
            if done % (256 << 20) < (1 << 20):
                log(f"  {done / 1e9:.2f} GB")
    if tmp.stat().st_size != ISO_BYTES:
        raise SystemExit(f"ISO size mismatch: {tmp.stat().st_size} != {ISO_BYTES}")
    tmp.replace(ISO_PATH)


def powershell(script: str) -> str:
    res = subprocess.run(
        ["powershell", "-NoProfile", "-NonInteractive", "-Command", script],
        capture_output=True,
        text=True,
    )
    if res.returncode != 0:
        raise SystemExit(f"powershell failed: {res.stderr.strip()}")
    return res.stdout.strip()


def mount_iso() -> str:
    out = powershell(
        f"$img = Mount-DiskImage -ImagePath '{ISO_PATH}' -PassThru; "
        "$img | Get-Volume | Select-Object -ExpandProperty DriveLetter"
    )
    letter = out.splitlines()[-1].strip() if out else ""
    if len(letter) != 1:
        raise SystemExit(f"could not determine mounted drive letter: {out!r}")
    log(f"mounted ISO at {letter}:")
    return f"{letter}:/"


def dismount_iso() -> None:
    subprocess.run(
        [
            "powershell",
            "-NoProfile",
            "-NonInteractive",
            "-Command",
            f"Dismount-DiskImage -ImagePath '{ISO_PATH}'",
        ],
        capture_output=True,
        check=False,
    )


def admin_install(msi: Path, target: Path) -> None:
    target.mkdir(parents=True, exist_ok=True)
    log(f"unpacking {msi.name}")
    subprocess.run(
        [
            "powershell",
            "-NoProfile",
            "-NonInteractive",
            "-Command",
            "Start-Process msiexec.exe -Wait -ArgumentList "
            f"'/a','{msi}','/qn','TARGETDIR={target}'",
        ],
        capture_output=True,
        check=False,
    )
    if not any(target.rglob("*.exe")) and not any(target.rglob("*.lib")):
        raise SystemExit(f"msiexec produced nothing for {msi}")


def clean_version(msvc_dir: Path) -> str:
    """Returns the `cl` version string of a candidate toolchain."""
    env = os.environ.copy()
    env["PATH"] = str(msvc_dir / "bin") + os.pathsep + env.get("PATH", "")
    env["INCLUDE"] = str(msvc_dir / "include")
    env["LIB"] = str(msvc_dir / "lib")
    res = subprocess.run(
        [str(msvc_dir / "bin" / "cl.exe")], capture_output=True, text=True, env=env
    )
    for line in (res.stdout + res.stderr).splitlines():
        if "Version" in line:
            return line.split("Version", 1)[1].split()[0]
    return "unknown"


def force_rmtree(path: Path) -> None:
    """MSI payloads land read-only; clear the bit so a rebuild can replace them."""
    if not path.exists():
        return
    def on_exc(func, target, _exc):
        os.chmod(target, 0o700)
        func(target)

    shutil.rmtree(path, onexc=on_exc)


def assemble(src: Path) -> None:
    vc = src / "Program Files" / "Microsoft Visual Studio 11.0"
    bin_dir = MSVC / "bin"
    for name in COMPILER_FILES:
        shutil.copy2(vc / "VC" / "bin" / name, bin_dir / name)
    (bin_dir / "1033").mkdir(parents=True, exist_ok=True)
    shutil.copy2(vc / "VC" / "bin" / "1033" / "clui.dll", bin_dir / "1033" / "clui.dll")
    for extra in ("Common7/IDE/mspdb110.dll",):
        cand = vc / extra
        if cand.exists():
            shutil.copy2(cand, bin_dir / cand.name)

    for sub in ("include", "lib"):
        target = MSVC / sub
        force_rmtree(target)
        shutil.copytree(vc / "VC" / sub, target)
    # Only x86 objects are used; the arm/amd64 static libraries are ~510 MB.
    for arch in ("amd64", "arm"):
        force_rmtree(MSVC / "lib" / arch)


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--keep-iso", action="store_true", help="keep the 1.5 GB DVD image")
    parser.add_argument("--force", action="store_true", help="rebuild even if cl 17.00 is present")
    args = parser.parse_args()

    complete = all((MSVC / "bin" / name).exists() for name in COMPILER_FILES)
    if not args.force and complete:
        version = clean_version(MSVC)
        if version.startswith("17.00.50727"):
            log(f"already provisioned: cl {version}")
            return 0

    download_iso()
    MSVC.mkdir(parents=True, exist_ok=True)
    force_rmtree(RAW)
    drive = mount_iso()
    try:
        for pkg in MSI_PACKAGES:
            admin_install(Path(drive) / "packages" / pkg, RAW / "vs")
    finally:
        dismount_iso()

    assemble(RAW / "vs")
    force_rmtree(RAW)
    if not args.keep_iso:
        ISO_PATH.unlink(missing_ok=True)

    version = clean_version(MSVC)
    log(f"cl {version}")
    if not version.startswith("17.00.50727"):
        raise SystemExit("wrong compiler version; byte matching would be meaningless")
    log("ready: tools/verify_tu.py now compiles with the target toolchain")
    return 0


if __name__ == "__main__":
    sys.exit(main())
