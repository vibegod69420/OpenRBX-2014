#!/usr/bin/env bash
# Provision a Linux worker that compiles ROBLOXSTUDIO 0.164.0.50577 byte-accurately.
#
# Byte matching requires MSVC 11.0 (`cl` 17.00.50727) because that is the compiler
# the 2014 binary was built with; no other version reproduces its codegen. Microsoft
# never shipped it for Linux, so it runs under Wine. The Windows installer channel
# only offers v141+, so the toolchain is extracted from the VS2012 RTM DVD image.
#
# Usage:  sudo bash tools/provision_linux.sh [repo_url]
# Then:   install the harness unit (tools/openrbx-harness.service) and copy
#         robloxbin/RobloxStudioBeta.exe in, which is not tracked by git.
set -euo pipefail

WORKDIR=${WORKDIR:-/opt/openrbx}
MSVC_ROOT=${MSVC_ROOT:-/opt/msvc110}
REPO_URL=${1:-https://github.com/vibegod69420/OpenRBX-2014.git}

# The ISO sits in an encoded subdirectory on archive.org; the flat
# /download/<item>/<file> form only returns a 146-byte error page.
ISO_URL="https://archive.org/download/en_visual_studio_professional_2012_x86_dvd/Visual%20Studio%20Professional%202012%20%28x86%29%20-%20DVD%20%28English%29/en_visual_studio_professional_2012_x86_dvd_2262334.iso"
ISO_BYTES=1541943296

export DEBIAN_FRONTEND=noninteractive
if ! dpkg --print-foreign-architectures | grep -qx i386; then
  dpkg --add-architecture i386
fi
apt-get update -y
# cl.exe is a 32-bit binary, hence wine32 + the i386 architecture.
apt-get install -y --no-install-recommends \
  git python3 python3-pip ca-certificates curl unzip \
  p7zip-full msitools cabextract wine wine32 wine64 winbind xvfb
pip3 install --break-system-packages capstone

mkdir -p "$MSVC_ROOT"
if [ ! -s "$MSVC_ROOT/vs2012.iso" ] || [ "$(stat -c %s "$MSVC_ROOT/vs2012.iso")" -ne "$ISO_BYTES" ]; then
  curl -L --retry 5 --retry-delay 5 --retry-all-errors -o "$MSVC_ROOT/vs2012.iso" "$ISO_URL"
fi

rm -rf "$MSVC_ROOT/iso" "$MSVC_ROOT/extract"
mkdir -p "$MSVC_ROOT/iso" "$MSVC_ROOT/extract"
7z x -y -o"$MSVC_ROOT/iso" "$MSVC_ROOT/vs2012.iso" >/dev/null
while IFS= read -r msi; do
  msiextract -C "$MSVC_ROOT/extract" "$msi" >/dev/null 2>&1 \
    || 7z x -y -o"$MSVC_ROOT/extract" "$msi" >/dev/null 2>&1 \
    || echo "warn: could not extract $msi"
done < <(find "$MSVC_ROOT/iso" -iname '*.msi' | grep -iE '/(vc_[^/]*|winsdk[^/]*)\.msi$')

VC="$MSVC_ROOT/extract/Program Files/Microsoft Visual Studio 11.0"
mkdir -p "$MSVC_ROOT/bin/1033" "$MSVC_ROOT/include" "$MSVC_ROOT/lib"
cp -f "$VC/VC/bin/cl.exe" "$VC/VC/bin/c1.dll" "$VC/VC/bin/c2.dll" "$MSVC_ROOT/bin/"
cp -f "$VC/VC/bin/c1xx.dll" "$MSVC_ROOT/bin/" 2>/dev/null || true
cp -f "$VC/Common7/IDE/mspdb110.dll" "$MSVC_ROOT/bin/" 2>/dev/null || true
cp -f "$VC/VC/redist/x86/Microsoft.VC110.CRT/"*.dll "$MSVC_ROOT/bin/" 2>/dev/null || true
# cl.exe loads its messages from <dir of cl.exe>/1033/clui.dll; without it every
# invocation dies with "fatal error C1510: Cannot load language resource clui.dll".
cp -f "$VC/VC/bin/1033/clui.dll" "$MSVC_ROOT/bin/1033/"
cp -rn "$VC/VC/include/." "$MSVC_ROOT/include/"
cp -rn "$VC/VC/lib/." "$MSVC_ROOT/lib/"

install -m 0755 "$(dirname "$0")/msvc110-cl" "$MSVC_ROOT/bin/cl"
export WINEPREFIX="$MSVC_ROOT/wineprefix"
wineboot -u >/dev/null 2>&1 || true

mkdir -p "$WORKDIR"
cd "$WORKDIR"
[ -d OpenRBX-2014/.git ] || git clone "$REPO_URL"
cd OpenRBX-2014
mkdir -p robloxbin
echo "Note: copy RobloxStudioBeta.exe into $(pwd)/robloxbin/ (it is not tracked by git)."

MSVC_BIN_DIR="$MSVC_ROOT/bin" python3 - <<'PY'
import sys
sys.path.insert(0, "tools")
import verify_tu

version = verify_tu.get_compiler_version()
print(f"cl = {version} | matches target 17.00.50727: {verify_tu.compiler_matches_target()}")
if not verify_tu.compiler_matches_target():
    sys.exit("wrong compiler: byte matching is meaningless without MSVC 11.0")
PY
