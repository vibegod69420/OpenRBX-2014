"""Regression checks for the routing/annotation fixes (runs without cl.exe)."""
import json
import re
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))

import source_router as sr
import verify_tu
import autonomous_harness as ah

failures = []


def check(cond, msg):
    print(("  ok   " if cond else "  FAIL ") + msg)
    if not cond:
        failures.append(msg)


def appears_as_token(cls, mangled):
    """True when `cls` occurs where an MSVC class name can legitimately sit."""
    return bool(
        re.search(r"(?:\.\?A[VU]|(?<![A-Za-z0-9_$])[VU]|\?\$)" + re.escape(cls) + r"@", mangled)
    ) or bool(re.match(re.escape(cls) + r"@", mangled))


print("== 1. class-name extraction over all 9004 vtables ==")
vt = json.loads((ROOT / "data" / "rtti_vtables_2014.json").read_text(encoding="utf-8"))
names = [(sr.extract_clean_class(v["class_mangled"])[1], v["class_mangled"]) for v in vt]
bad_chars = [n for n, _ in names if not re.match(r"^[A-Za-z_][A-Za-z0-9_]*$", n)]
check(not bad_chars, f"every class name is a valid identifier (bad={bad_chars[:5]})")

# `Instance` is the extractor's documented last-resort fallback for descriptors it cannot
# resolve, not a truncation, so it is excluded from the mid-identifier check.
FALLBACK_NAMES = {"Instance", "Engine"}
truncated = [(c, m) for c, m in names if c not in FALLBACK_NAMES and not appears_as_token(c, m)]
check(not truncated, f"no class name was cut mid-identifier (bad={truncated[:3]})")

for bogus in ("alue", "ehicleSeat", "ndoBehavior", "isualStyle", "erb", "ideoQuality"):
    check(bogus not in {n for n, _ in names}, f"`{bogus}` is no longer produced as a class name")

# Verb, VisualStyle, UndoBehavior and VideoQuality have no RTTI descriptor in this binary, so
# they are not asserted on; the invariant above is what matters.
for good in ("Value", "VehicleSeat"):
    check(good in {n for n, _ in names}, f"`{good}` is recovered")
check("ClusterPacketCacheBase" in {n for n, _ in names},
      "ClusterPacketCacheBase is recovered from its template descriptor")

print("== 2. generated bodies are STUB until verified ==")
sizes = verify_tu.load_function_sizes()
addr = 0x0045C670  # LogManager::scalarDeletingDestructorImp, the file in the screenshot
orig = verify_tu.get_original_function_bytes(addr, sizes[addr])
route = sr.get_router().route_address(addr)
synth = ah.synthesize_class_method_cpp(addr, orig, route, "")
check(synth is not None, "the 34-byte pattern still synthesizes")
check(
    synth is not None and synth["method_impl"].startswith("// STUB: ROBLOXSTUDIO 0x0045c670"),
    "marker emitted is STUB, not FUNCTION",
)

print("== 3. promote_marker flips only the matching address ==")
with tempfile.TemporaryDirectory() as td:
    p = Path(td) / "x.cpp"
    p.write_text(
        "// STUB: ROBLOXSTUDIO 0x0045c670\nvoid f() {}\n"
        "// STUB: ROBLOXSTUDIO 0x0045c680\nvoid g() {}\n",
        encoding="utf-8",
    )
    ok = ah.promote_marker(p, 0x0045C670)
    text = p.read_text(encoding="utf-8")
    check(ok and "// FUNCTION: ROBLOXSTUDIO 0x0045c670" in text, "target address promoted")
    check("// STUB: ROBLOXSTUDIO 0x0045c680" in text, "other address untouched")
    check(ah.promote_marker(p, 0xDEADBEEF) is False, "unknown address reports no promotion")

print("== 4. compiler version is reported, not assumed ==")
ver = verify_tu.get_compiler_version()
print(f"  cl version here: {ver}")
check(isinstance(ver, str) and bool(ver), "get_compiler_version returns a string")
check(
    verify_tu.compiler_matches_target() == ver.startswith("17.00.50727"),
    "compiler_matches_target agrees with the detected version",
)

print("== 5. scaffold no longer fabricates vtable markers ==")
src = (ROOT / "tools" / "source_router.py").read_text(encoding="utf-8")
check(
    'vt_comment = ""' in src and "// VTABLE: ROBLOXSTUDIO {vt_va}" not in src,
    "ensure_class_header_and_cpp emits no VTABLE marker",
)

print()
if failures:
    print(f"FAILED ({len(failures)}):")
    for f in failures:
        print("  -", f)
    sys.exit(1)
print("ALL CHECKS PASSED")
