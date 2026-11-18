#!/usr/bin/env python3
"""
Computes live byte-accuracy metrics for everything annotated in `Client/`, then
publishes them as data files and a badge:

  ROBLOXSTUDIOPROGRESS.json   canonical, complete record (summary + every function)
  ROBLOXSTUDIOPROGRESS.SVG    README badge
  docs/progress.json          dashboard summary + recent functions + subsystems
  docs/functions.json         full function list, fetched only when a visitor asks
  docs/history.json           rolling samples for the dashboard sparkline

`docs/index.html` is a static, hand-maintained page: it renders these files in
the browser, so this script never rewrites 250k lines of HTML again.

Usage:
    python tools/update_progress.py [--commit "Match ..."] [--push]
"""

from __future__ import annotations

import argparse
import datetime
import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import verify_tu  # noqa: E402
from targets import classify_target  # noqa: E402

CLIENT_DIR = ROOT / "Client"
DOCS_DIR = ROOT / "docs"
PROGRESS_JSON = ROOT / "ROBLOXSTUDIOPROGRESS.json"
PROGRESS_SVG = ROOT / "ROBLOXSTUDIOPROGRESS.SVG"
USAGE_LEDGER = ROOT / "data" / "llm_usage.jsonl"
WORK_LEDGER = ROOT / "data" / "work_ledger.jsonl"

RECENT_LIMIT = 250
HISTORY_LIMIT = 500
ACTIVITY_LIMIT = 120


def _usage_summary() -> dict:
    """Aggregate the last 24h of LLM calls recorded by deepai_backend."""
    calls = tokens = reasoning = 0
    latencies: list[float] = []
    failures = 0
    cutoff = datetime.datetime.now(datetime.timezone.utc) - datetime.timedelta(hours=24)
    try:
        lines = USAGE_LEDGER.read_text(encoding="utf-8").splitlines()
    except OSError:
        lines = []
    for line in lines:
        try:
            entry = json.loads(line)
            stamp = datetime.datetime.strptime(entry.get("ts", ""), "%Y-%m-%dT%H:%M:%S")
        except Exception:
            continue
        if stamp.replace(tzinfo=datetime.timezone.utc) < cutoff:
            continue
        if entry.get("ok"):
            calls += 1
            tokens += int(entry.get("completion_tokens") or 0)
            reasoning += int(entry.get("reasoning_tokens") or 0)
            if entry.get("latency_s"):
                latencies.append(float(entry["latency_s"]))
        else:
            failures += 1
    return {
        "calls_24h": calls,
        "failures_24h": failures,
        "completion_tokens_24h": tokens,
        "reasoning_tokens_24h": reasoning,
        "avg_latency_s": round(sum(latencies) / len(latencies), 1) if latencies else None,
    }


def _activity() -> list[dict]:
    """Newest verified functions from the harness ledger, for the dashboard feed."""
    events: list[dict] = []
    try:
        lines = WORK_LEDGER.read_text(encoding="utf-8").splitlines()
    except OSError:
        return events
    for line in reversed(lines):
        try:
            entry = json.loads(line)
        except Exception:
            continue
        if not entry.get("matched"):
            continue
        events.append({
            "ts": entry.get("ts"),
            "address": entry.get("address"),
            "name": entry.get("name"),
            "pct": entry.get("best_pct"),
        })
        if len(events) >= ACTIVITY_LIMIT:
            break
    return events


def _match_rate(history: list[dict]) -> float:
    """Verified functions per hour across the retained history window."""
    if len(history) < 2:
        return 0.0

    def stamp(entry: dict) -> datetime.datetime:
        return datetime.datetime.strptime(entry["t"], "%Y-%m-%d %H:%M:%S UTC").replace(
            tzinfo=datetime.timezone.utc
        )

    try:
        hours = (stamp(history[-1]) - stamp(history[0])).total_seconds() / 3600.0
        gained = int(history[-1].get("matched") or 0) - int(history[0].get("matched") or 0)
    except Exception:
        return 0.0
    return round(gained / hours, 2) if hours > 0 and gained > 0 else 0.0


def evaluate_all_client_files() -> dict:
    sizes = verify_tu.load_function_sizes()
    total_funcs = len(sizes)
    total_binary_bytes = sum(sizes.values())

    kind_counts = {"real": 0, "fragment": 0, "thunk": 0, "seh": 0}
    real_addresses: set[int] = set()
    for addr, sz in sizes.items():
        if sz < 3:
            continue
        kind = classify_target(verify_tu.get_original_function_bytes(addr, sz))
        kind_counts[kind] += 1
        if kind == "real":
            real_addresses.add(addr)

    records: list[dict] = []
    if CLIENT_DIR.exists():
        for cpp_path in sorted(CLIENT_DIR.rglob("*.cpp")):
            anns = verify_tu.parse_annotations_in_cpp(cpp_path)
            if not anns:
                continue
            ok, obj_path, _ = verify_tu.compile_cpp_to_coff(cpp_path, use_cache=True)
            coff_funcs = verify_tu.parse_coff_functions(obj_path) if ok else {}
            rel_file = str(cpp_path.relative_to(ROOT)).replace("\\", "/")

            for addr, kind, fn_hint in anns:
                sz = sizes.get(addr, 16)
                orig_bytes = verify_tu.get_original_function_bytes(addr, sz)
                short_hint = fn_hint.split("::")[-1] if fn_hint else ""
                best_sym = fn_hint or f"func_0x{addr:08x}"
                actual_pct = 0.0
                recomp_len = 0

                if ok and coff_funcs:
                    best_score = -1.0
                    for sym_name, (recomp_bytes, rel_offsets) in coff_funcs.items():
                        pct, _ = verify_tu.compare_with_relocations(orig_bytes, recomp_bytes, rel_offsets)
                        bonus = (
                            20.0
                            if (short_hint and f"?{short_hint}@" in sym_name)
                            else (10.0 if (short_hint and short_hint in sym_name) else 0.0)
                        )
                        if pct + bonus > best_score:
                            best_score = pct + bonus
                            actual_pct = pct
                            best_sym = sym_name
                            recomp_len = len(recomp_bytes)

                records.append({
                    "address": f"0x{addr:08x}",
                    "kind": kind,
                    "name": fn_hint or best_sym,
                    "mangled": best_sym,
                    "file": rel_file,
                    "orig_size": sz,
                    "recomp_size": recomp_len,
                    "match_pct": round(actual_pct, 2),
                    "matchable": addr in real_addresses,
                })

    perfect = [r for r in records if r["match_pct"] >= 99.99]
    matched_real = [r for r in perfect if r["matchable"]]
    matched_bytes = sum(r["orig_size"] for r in perfect)
    avg_match_pct = sum(r["match_pct"] for r in records) / len(records) if records else 0.0

    cl_version = verify_tu.get_compiler_version()
    compiler_ok = cl_version.startswith(verify_tu.TARGET_CL_VERSION)
    if not compiler_ok:
        print(
            f"[WARN] Verifying with cl {cl_version}, but the target was built with MSVC 11.0 "
            f"({verify_tu.TARGET_CL_VERSION}). Matches above the trivial boilerplate are not "
            f"evidence until the v110 toolset is the one compiling."
        )

    model_name = "deepseek-v4.1-flash"
    try:
        import deepai_backend  # noqa: PLC0415

        model_name = deepai_backend.MODEL
        effort = deepai_backend.REASONING_EFFORT
        context_window = 320000
    except Exception:
        effort, context_window = "max", 320000

    summary = {
        "updated_at": datetime.datetime.now(datetime.timezone.utc).strftime("%Y-%m-%d %H:%M:%S UTC"),
        "target": "ROBLOXSTUDIO (RobloxStudioBeta.exe 0.164.0.50577 - Aug 20, 2014)",
        "compiler": f"cl {cl_version}" + (" (MSVC 11.0 / VS2012)" if compiler_ok else " (NOT the target toolchain)"),
        "compiler_version": cl_version,
        "compiler_matches_target": compiler_ok,
        "model": {
            "name": model_name,
            "reasoning_effort": effort,
            "context_window": context_window,
            "backend": "api.deepai.org",
        },
        "total_binary_functions": total_funcs,
        "total_binary_bytes": total_binary_bytes,
        "matchable_functions": kind_counts["real"],
        "fragment_entries": kind_counts["fragment"],
        "compiler_thunk_entries": kind_counts["thunk"],
        "seh_scaffold_entries": kind_counts["seh"],
        "matchable_coverage_pct": round(len(matched_real) * 100.0 / max(1, kind_counts["real"]), 4),
        "implemented_total": len(records),
        "function_annotations": sum(1 for r in records if r["kind"] == "FUNCTION"),
        "stub_annotations": sum(1 for r in records if r["kind"] == "STUB"),
        "perfect_100_count": len(perfect),
        "matched_real_functions": len(matched_real),
        "average_match_pct": round(avg_match_pct, 2),
        "overall_function_coverage_pct": round(len(perfect) * 100.0 / max(1, total_funcs), 4),
        "overall_byte_coverage_pct": round(matched_bytes * 100.0 / max(1, total_binary_bytes), 4),
        "usage": _usage_summary(),
        "functions": sorted(records, key=lambda r: r["address"]),
    }
    return summary


def _subsystems(records: list[dict]) -> list[dict]:
    buckets: dict[str, dict] = {}
    for rec in records:
        parts = rec["file"].split("/")
        key = "/".join(parts[1:3]) if len(parts) > 2 else parts[-1]
        bucket = buckets.setdefault(key, {"name": key, "matched": 0, "functions": 0, "bytes": 0})
        bucket["functions"] += 1
        if rec["match_pct"] >= 99.99:
            bucket["matched"] += 1
            bucket["bytes"] += rec["orig_size"]
    ordered = sorted(buckets.values(), key=lambda b: (-b["bytes"], -b["functions"]))
    return ordered


def _history(summary: dict) -> list[dict]:
    path = DOCS_DIR / "history.json"
    try:
        history = json.loads(path.read_text(encoding="utf-8"))
        if not isinstance(history, list):
            history = []
    except Exception:
        history = []
    sample = {
        "t": summary["updated_at"],
        "matched": summary["perfect_100_count"],
        "implemented": summary["implemented_total"],
        "pct": summary["matchable_coverage_pct"],
    }
    if history and history[-1].get("matched") == sample["matched"] and history[-1].get("implemented") == sample["implemented"]:
        history[-1] = sample
    else:
        history.append(sample)
    return history[-HISTORY_LIMIT:]


def write_svg(summary: dict):
    pct = summary["matchable_coverage_pct"]
    bar = max(6, int(5.0 * min(100.0, pct)))
    svg = f"""<svg xmlns="http://www.w3.org/2000/svg" width="560" height="124" viewBox="0 0 560 124">
  <rect width="560" height="124" rx="10" fill="#0b0f16" stroke="#222c3d" stroke-width="2"/>
  <text x="22" y="34" fill="#7dd3fc" font-family="Segoe UI, Ubuntu, sans-serif" font-size="16" font-weight="bold">
    OpenRBX-2014 &middot; byte-accurate decompilation
  </text>
  <text x="22" y="60" fill="#e2e8f0" font-family="Consolas, ui-monospace, monospace" font-size="13">
    {summary['perfect_100_count']:,} matched / {summary['matchable_functions']:,} matchable &middot; {pct:.2f}% &middot; {summary['overall_byte_coverage_pct']:.2f}% of .text bytes
  </text>
  <text x="22" y="80" fill="#8b9bb4" font-family="Consolas, ui-monospace, monospace" font-size="12">
    {summary['model']['name']} @ {summary['model']['reasoning_effort']} &middot; {summary['compiler_version']} &middot; {summary['updated_at']}
  </text>
  <rect x="22" y="94" width="516" height="12" rx="6" fill="#1b2432"/>
  <rect x="22" y="94" width="{bar}" height="12" rx="6" fill="url(#g)"/>
  <defs><linearGradient id="g" x1="0" x2="1"><stop offset="0" stop-color="#22d3ee"/><stop offset="1" stop-color="#34d399"/></linearGradient></defs>
</svg>
"""
    PROGRESS_SVG.write_text(svg, encoding="utf-8")
    DOCS_DIR.mkdir(parents=True, exist_ok=True)
    (DOCS_DIR / "ROBLOXSTUDIOPROGRESS.SVG").write_text(svg, encoding="utf-8")


def write_dashboard_data(summary: dict):
    DOCS_DIR.mkdir(parents=True, exist_ok=True)
    history = _history(summary)
    functions = summary["functions"]
    recent = sorted(functions, key=lambda r: r["address"], reverse=True)[:RECENT_LIMIT]
    subsystems = _subsystems(functions)

    public = {k: v for k, v in summary.items() if k != "functions"}
    public["functions_total"] = len(functions)
    public["subsystems"] = subsystems
    public["recent"] = recent
    public["history"] = history
    public["activity"] = _activity()
    public["match_rate_per_hour"] = _match_rate(history)

    (DOCS_DIR / "progress.json").write_text(json.dumps(public, indent=1), encoding="utf-8")
    (DOCS_DIR / "history.json").write_text(json.dumps(history, indent=0), encoding="utf-8")
    (DOCS_DIR / "functions.json").write_text(
        json.dumps({"generated_at": summary["updated_at"], "functions": functions}, separators=(",", ":")),
        encoding="utf-8",
    )
    PROGRESS_JSON.write_text(json.dumps(summary, indent=2), encoding="utf-8")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--commit", type=str, default=None, help="Git commit message")
    parser.add_argument("--push", action="store_true", help="Push to origin main")
    args = parser.parse_args()

    summary = evaluate_all_client_files()
    write_svg(summary)
    write_dashboard_data(summary)

    print(
        f"[PROGRESS] Annotated: {summary['implemented_total']} | "
        f"100% exact: {summary['perfect_100_count']} | "
        f"Matchable: {summary['matched_real_functions']}/{summary['matchable_functions']} "
        f"({summary['matchable_coverage_pct']:.2f}%) | "
        f"Bytes: {summary['overall_byte_coverage_pct']:.2f}% | "
        f"Avg match: {summary['average_match_pct']:.2f}%"
    )

    if args.commit:
        subprocess.run(["git", "add", "-A"], cwd=ROOT, check=False)
        subprocess.run(["git", "commit", "-m", args.commit], cwd=ROOT, check=False)
    if args.push:
        r = subprocess.run(["git", "push", "origin", "main"], cwd=ROOT, check=False)
        if r.returncode != 0:
            subprocess.run(["git", "pull", "--rebase", "-X", "theirs", "origin", "main"], cwd=ROOT, check=False)
            subprocess.run(["git", "push", "origin", "main"], cwd=ROOT, check=False)


if __name__ == "__main__":
    main()
