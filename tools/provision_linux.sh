#!/usr/bin/env bash
# Provision an Ubuntu worker that compiles ROBLOXSTUDIO 0.164.0.50577 byte-accurately.
#
# Byte matching requires MSVC 11.0 (`cl` 17.00.50727) because that is the compiler
# the 2014 binary was built with; no other version reproduces its codegen. Microsoft
# never shipped it for Linux, so it runs under Wine. The Windows installer channel
# only offers v141+, so the toolchain is extracted from the VS2012 RTM DVD image.
#
# Usage:  sudo bash tools/provision_linux.sh [repo_url]
# Then:   tools/deploy_aws.py fetch   (RobloxStudioBeta.exe is not tracked by git)
#         tools/deploy_aws.py service
set -euo pipefail

WORKDIR=${WORKDIR:-/opt/openrbx}
MSVC_ROOT=${MSVC_ROOT:-/opt/msvc110}
REPO_URL=${1:-https://github.com/vibegod69420/OpenRBX-2014.git}

# The ISO sits in an encoded subdirectory on archive.org; the flat
# /download/<item>/<file> form only returns a 146-byte error page.
ISO_URL="https://archive.org/download/en_visual_studio_professional_2012_x86_dvd/Visual%20Studio%20Professional%202012%20%28x86%29%20-%20DVD%20%28English%29/en_visual_studio_professional_2012_x86_dvd_2262334.iso"
ISO_BYTES=1541943296

export DEBIAN_FRONTEND=noninteractive
# Wine plus a 32-bit cl.exe is comfortable in 8 GiB, but the ISO extraction is spiky; a
# swapfile keeps the worker from OOM-killing itself mid-batch on a 2 vCPU instance.
if [ ! -f /swapfile ]; then
  fallocate -l 4G /swapfile && chmod 600 /swapfile && mkswap /swapfile >/dev/null && swapon /swapfile
  grep -q '^/swapfile' /etc/fstab || echo '/swapfile none swap sw 0 0' >> /etc/fstab
fi
if ! dpkg --print-foreign-architectures | grep -qx i386; then
  dpkg --add-architecture i386
fi
apt-get update -y
# cl.exe is a 32-bit binary, hence wine32 + the i386 architecture.
apt-get install -y --no-install-recommends \
  git python3 python3-pip ca-certificates curl unzip rsync jq \
  p7zip-full msitools cabextract wine wine32 wine64 winbind xvfb
# Ubuntu 24.04 no longer ships an `awscli` deb; the pip package is only needed by the
# optional quota_rotate.py controller.
pip3 install --break-system-packages capstone awscli

mkdir -p "$MSVC_ROOT" /etc/openrbx
if [ ! -s "$MSVC_ROOT/vs2012.iso" ] || [ "$(stat -c %s "$MSVC_ROOT/vs2012.iso")" -ne "$ISO_BYTES" ]; then
  echo "downloading the VS2012 RTM image (1.5 GiB)…"
  curl -L --retry 5 --retry-delay 5 --retry-all-errors -o "$MSVC_ROOT/vs2012.iso" "$ISO_URL"
fi
if [ "$(stat -c %s "$MSVC_ROOT/vs2012.iso")" -ne "$ISO_BYTES" ]; then
  echo "error: $MSVC_ROOT/vs2012.iso is not $ISO_BYTES bytes" >&2
  exit 1
fi

rm -rf "$MSVC_ROOT/iso" "$MSVC_ROOT/extract"
mkdir -p "$MSVC_ROOT/iso" "$MSVC_ROOT/extract"
7z x -y -o"$MSVC_ROOT/iso" "$MSVC_ROOT/vs2012.iso" >/dev/null
while IFS= read -r msi; do
  msiextract -C "$MSVC_ROOT/extract" "$msi" >/dev/null 2>&1 \
    || 7z x -y -o"$MSVC_ROOT/extract" "$msi" >/dev/null 2>&1 \
    || echo "warn: could not extract $msi"
done < <(find "$MSVC_ROOT/iso" -iname '*.msi' | grep -iE '/(vc_[^/]*|winsdk[^/]*)\.msi$')

# Discover the extracted layout instead of assuming an administrative-install tree:
# the MSI payload path differs between the RTM DVD and the archive.org mirror.
# The DVD also carries cross compilers in VC/bin/x86_arm and VC/bin/x86_amd64; those
# define _M_ARM/_M_AMD64, and the ARM front end aborts on crtdefs.h. Only the native
# compiler directly in VC/bin targets x86, so require that exact path.
CL_PATH=$(find "$MSVC_ROOT/extract" -type f -iname 'cl.exe' -path '*/VC/bin/cl.exe' | head -n 1 || true)
if [ -z "$CL_PATH" ]; then
  echo "error: the native x86 VC/bin/cl.exe was not found in the extracted image" >&2
  find "$MSVC_ROOT/extract" -type f -iname 'cl.exe' >&2 || true
  exit 1
fi
if ! file -b "$CL_PATH" | grep -q 'Intel 80386'; then
  echo "error: $CL_PATH is not the x86 host compiler: $(file -b "$CL_PATH")" >&2
  exit 1
fi
VC_BIN=$(dirname "$CL_PATH")
VC_ROOT=$(dirname "$VC_BIN")                      # .../VC
INC_SRC=$(find "$MSVC_ROOT/extract" -type f -iname 'stdio.h' -path '*VC/include*' | head -n 1 || true)
LIB_SRC=$(find "$MSVC_ROOT/extract" -type f -iname 'libcmt.lib' -path '*VC/lib*' | head -n 1 || true)

mkdir -p "$MSVC_ROOT/bin/1033" "$MSVC_ROOT/include" "$MSVC_ROOT/lib"
cp -f "$CL_PATH" "$MSVC_ROOT/bin/"
# c1xx/c2 are the actual compilers; mspdb110 is the PDB writer; clui is the message table.
cp -f "$VC_BIN"/*.dll "$MSVC_ROOT/bin/" 2>/dev/null || true
cp -f "$VC_BIN/1033/clui.dll" "$MSVC_ROOT/bin/1033/" 2>/dev/null || true
find "$MSVC_ROOT/extract" -iname 'mspdb110.dll' -type f -exec cp -f {} "$MSVC_ROOT/bin/" \; 2>/dev/null || true

if [ -n "$INC_SRC" ]; then
  cp -rn "$(dirname "$INC_SRC")/." "$MSVC_ROOT/include/" 2>/dev/null || true
else
  echo "warn: no VC include directory found; cl may fail with missing headers" >&2
fi
if [ -n "$LIB_SRC" ]; then
  cp -rn "$(dirname "$LIB_SRC")/." "$MSVC_ROOT/lib/" 2>/dev/null || true
else
  echo "warn: no VC lib directory found; cl may fail to link" >&2
fi

install -m 0755 "$(dirname "$0")/msvc110-cl" "$MSVC_ROOT/bin/cl"
export WINEPREFIX="$MSVC_ROOT/wineprefix"
export WINEDLLOVERRIDES="mscoree,mshtml="
export WINEDEBUG=-all
wineboot -u >/dev/null 2>&1 || true

mkdir -p "$WORKDIR"
cd "$WORKDIR"
[ -d OpenRBX-2014/.git ] || git clone "$REPO_URL"
cd OpenRBX-2014 || exit 1
mkdir -p robloxbin
git config --system --add safe.directory "$(pwd)" 2>/dev/null || true
echo "note: run tools/deploy_aws.py fetch to place RobloxStudioBeta.exe in $(pwd)/robloxbin/"

MSVC_BIN_DIR="$MSVC_ROOT/bin" MSVC_ROOT="$MSVC_ROOT" WINEPREFIX="$MSVC_ROOT/wineprefix" python3 - <<'PY'
import sys
sys.path.insert(0, "tools")
import verify_tu

version = verify_tu.get_compiler_version()
print(f"cl = {version} | matches target 17.00.50727: {verify_tu.compiler_matches_target()}")
if not verify_tu.compiler_matches_target():
    sys.exit("wrong compiler: byte matching is meaningless without MSVC 11.0")
PY
