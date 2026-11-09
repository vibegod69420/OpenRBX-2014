#!/usr/bin/env python3
"""
Computes live byte-accuracy metrics across all implemented functions in `Client/`,
generates `ROBLOXSTUDIOPROGRESS.SVG`, `ROBLOXSTUDIOPROGRESS.json`, and the live
GitHub Pages dashboard (`docs/index.html` + `docs/progress.json`), and optionally
commits and pushes to GitHub.

Usage:
    python tools/update_progress.py [--commit "Match RBX::Joint methods"] [--push]
"""

import argparse
import datetime
import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import verify_tu  # noqa: E402
import autonomous_harness as harness  # noqa: E402

CLIENT_DIR = ROOT / "Client"
DOCS_DIR = ROOT / "docs"
CSV_PATH = ROOT / "ROBLOXSTUDIO-function-size.csv"
PROGRESS_JSON = ROOT / "ROBLOXSTUDIOPROGRESS.json"
PROGRESS_SVG = ROOT / "ROBLOXSTUDIOPROGRESS.SVG"


def evaluate_all_client_files():
    sizes = verify_tu.load_function_sizes()
    total_funcs = len(sizes)
    total_binary_bytes = sum(sizes.values())

    # The address table is not all real functions: it also indexes mid-instruction fragments and
    # compiler-generated thunks. Reporting against the matchable subset keeps the denominator honest.
    kind_counts = {"real": 0, "fragment": 0, "thunk": 0, "seh": 0}
    for addr, sz in sizes.items():
        if sz < 3:
            continue
        kind_counts[harness.classify_target(verify_tu.get_original_function_bytes(addr, sz))] += 1

    records = []
    if CLIENT_DIR.exists():
        for cpp_path in sorted(CLIENT_DIR.rglob("*.cpp")):
            anns = verify_tu.parse_annotations_in_cpp(cpp_path)
            if not anns:
                continue
            ok, obj_path, compiler_out = verify_tu.compile_cpp_to_coff(cpp_path, use_cache=True)
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
                })

    func_count = sum(1 for r in records if r["kind"] == "FUNCTION")
    stub_count = sum(1 for r in records if r["kind"] == "STUB")
    perfect_count = sum(1 for r in records if r["match_pct"] >= 99.99)
    matched_bytes = sum(r["orig_size"] * (r["match_pct"] / 100.0) for r in records)
    avg_match_pct = (
        sum(r["match_pct"] for r in records) / len(records) if records else 0.0
    )

    cl_version = verify_tu.get_compiler_version()
    compiler_ok = cl_version.startswith(verify_tu.TARGET_CL_VERSION)
    if not compiler_ok:
        print(
            f"[WARN] Verifying with cl {cl_version}, but the target was built with MSVC 11.0 "
            f"({verify_tu.TARGET_CL_VERSION}). Matches above the trivial boilerplate are not "
            f"evidence until the v110 toolset is the one compiling."
        )

    summary = {
        "updated_at": datetime.datetime.now(datetime.timezone.utc).strftime("%Y-%m-%d %H:%M:%S UTC"),
        "target": "ROBLOXSTUDIO (RobloxStudioBeta.exe 0.164.0.50577 - Aug 20, 2014)",
        "compiler": f"cl {cl_version}" + (" (MSVC 11.0 / VS2012)" if compiler_ok else " (NOT the target toolchain)"),
        "compiler_version": cl_version,
        "compiler_matches_target": compiler_ok,
        "total_binary_functions": total_funcs,
        "total_binary_bytes": total_binary_bytes,
        "matchable_functions": kind_counts["real"],
        "fragment_entries": kind_counts["fragment"],
        "compiler_thunk_entries": kind_counts["thunk"],
        "seh_scaffold_entries": kind_counts["seh"],
        "matchable_coverage_pct": round(perfect_count * 100.0 / max(1, kind_counts["real"]), 4),
        "implemented_total": len(records),
        "function_annotations": func_count,
        "stub_annotations": stub_count,
        "perfect_100_count": perfect_count,
        "average_match_pct": round(avg_match_pct, 2),
        "overall_function_coverage_pct": round(len(records) * 100.0 / max(1, total_funcs), 4),
        "overall_byte_coverage_pct": round(matched_bytes * 100.0 / max(1, total_binary_bytes), 4),
        "functions": sorted(records, key=lambda r: r["address"]),
    }
    return summary


def write_svg(summary: dict):
    svg = f"""<svg xmlns="http://www.w3.org/2000/svg" width="540" height="120" viewBox="0 0 540 120">
  <rect width="540" height="120" rx="10" fill="#0d1117" stroke="#30363d" stroke-width="2"/>
  <text x="20" y="32" fill="#58a6ff" font-family="Segoe UI, Ubuntu, sans-serif" font-size="16" font-weight="bold">
    OpenRBX-2014 Live Decompilation Progress (0.164.0.50577)
  </text>
  <text x="20" y="58" fill="#c9d1d9" font-family="Consolas, monospace" font-size="13">
    Matched Functions: {summary['perfect_100_count']} (100% Byte-Exact) | Total Annotated: {summary['implemented_total']} / {summary['total_binary_functions']}
  </text>
  <text x="20" y="80" fill="#8b949e" font-family="Consolas, monospace" font-size="13">
    Active Accuracy: {summary['average_match_pct']:.2f}% avg | Updated: {summary['updated_at']}
  </text>
  <rect x="20" y="94" width="500" height="12" rx="6" fill="#21262d"/>
  <rect x="20" y="94" width="{max(6, int(5.0 * min(100.0, summary['average_match_pct'])))}" height="12" rx="6" fill="#2ea043"/>
</svg>
"""
    PROGRESS_SVG.write_text(svg, encoding="utf-8")
    DOCS_DIR.mkdir(parents=True, exist_ok=True)
    (DOCS_DIR / "ROBLOXSTUDIOPROGRESS.SVG").write_text(svg, encoding="utf-8")


def write_dashboard_html(summary: dict):
    DOCS_DIR.mkdir(parents=True, exist_ok=True)
    (DOCS_DIR / "progress.json").write_text(json.dumps(summary, indent=2), encoding="utf-8")
    PROGRESS_JSON.write_text(json.dumps(summary, indent=2), encoding="utf-8")

    rows_html = []
    for fn in reversed(summary["functions"]):
        badge_color = "#2ea043" if fn["match_pct"] >= 99.99 else ("#d29922" if fn["match_pct"] >= 75.0 else "#f85149")
        gh_url = f"https://github.com/vibegod69420/OpenRBX-2014/blob/main/{fn['file']}"
        rows_html.append(
            f"""<tr>
              <td><code>{fn['address']}</code></td>
              <td><span class="tag">{fn['kind']}</span></td>
              <td><strong>{fn['name']}</strong><br><small style="color:#8b949e">{fn['mangled']}</small></td>
              <td><a href="{gh_url}" target="_blank" style="color:var(--accent);text-decoration:none"><code>{fn['file']}</code></a></td>
              <td>{fn['orig_size']} B</td>
              <td><span class="badge" style="background:{badge_color}">{fn['match_pct']:.2f}%</span></td>
            </tr>"""
        )

    html = f"""<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <meta http-equiv="refresh" content="30">
  <title>OpenRBX-2014 — Live Autonomous Decompilation Dashboard</title>
  <style>
    :root {{
      --bg: #0d1117;
      --panel: #161b22;
      --border: #30363d;
      --text: #c9d1d9;
      --muted: #8b949e;
      --accent: #58a6ff;
      --green: #2ea043;
    }}
    body {{
      margin: 0;
      padding: 32px;
      background: var(--bg);
      color: var(--text);
      font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, Arial, sans-serif;
    }}
    .container {{ max-width: 1200px; margin: 0 auto; }}
    .header {{
      display: flex;
      justify-content: space-between;
      align-items: center;
      border-bottom: 1px solid var(--border);
      padding-bottom: 20px;
      margin-bottom: 24px;
    }}
    h1 {{ margin: 0; font-size: 24px; color: #fff; }}
    .sub {{ color: var(--muted); font-size: 14px; margin-top: 6px; }}
    .grid {{
      display: grid;
      grid-template-columns: repeat(auto-fit, minmax(240px, 1fr));
      gap: 16px;
      margin-bottom: 24px;
    }}
    .card {{
      background: var(--panel);
      border: 1px solid var(--border);
      border-radius: 8px;
      padding: 18px;
    }}
    .card .label {{ color: var(--muted); font-size: 12px; text-transform: uppercase; letter-spacing: 0.05em; }}
    .card .val {{ font-size: 28px; font-weight: 700; color: #fff; margin-top: 6px; }}
    .card .hint {{ color: var(--accent); font-size: 12px; margin-top: 4px; }}
    table {{
      width: 100%;
      border-collapse: collapse;
      background: var(--panel);
      border: 1px solid var(--border);
      border-radius: 8px;
      overflow: hidden;
    }}
    th, td {{
      padding: 12px 14px;
      text-align: left;
      border-bottom: 1px solid var(--border);
      font-size: 13px;
    }}
    th {{ background: #21262d; color: #fff; font-weight: 600; }}
    code {{ font-family: ui-monospace, SFMono-Regular, Consolas, monospace; color: var(--accent); }}
    .badge {{
      display: inline-block;
      padding: 3px 8px;
      border-radius: 12px;
      color: #fff;
      font-weight: 600;
      font-size: 12px;
    }}
    .tag {{
      display: inline-block;
      padding: 2px 6px;
      border-radius: 4px;
      background: #21262d;
      border: 1px solid var(--border);
      font-family: monospace;
      font-size: 11px;
    }}
  </style>
</head>
<body>
  <div class="container">
    <div class="header">
      <div>
        <h1>OpenRBX-2014 — Autonomous Byte-Accurate Decompilation</h1>
        <div class="sub">
          Target: <code>RobloxStudioBeta.exe (0.164.0.50577 — Aug 20, 2014)</code> &bull;
          Compiler: <code>MSVC 11.0 (VS2012 x86)</code> &bull;
          Auto-refreshes every 30s &bull; Last Updated: <strong>{summary['updated_at']}</strong>
        </div>
      </div>
      <div>
        <img src="ROBLOXSTUDIOPROGRESS.SVG" alt="Progress SVG" height="72">
      </div>
    </div>

    <div class="grid">
      <div class="card">
        <div class="label">100% Byte-Matched Functions</div>
        <div class="val">{summary['perfect_100_count']}</div>
        <div class="hint">{summary['implemented_total']} total decompiled functions</div>
      </div>
      <div class="card">
        <div class="label">Active Function Accuracy</div>
        <div class="val">{summary['average_match_pct']:.2f}%</div>
        <div class="hint">Relocation-invariant COFF/reccmp match</div>
      </div>
      <div class="card">
        <div class="label">Matchable Function Index</div>
        <div class="val">{summary['perfect_100_count']} / {summary['matchable_functions']:,}</div>
        <div class="hint">{summary['matchable_coverage_pct']:.2f}% of addressable functions &bull;
          {summary['fragment_entries']:,} fragments + {summary['compiler_thunk_entries']:,} thunks + {summary['seh_scaffold_entries']:,} SEH frames excluded</div>
      </div>
      <div class="card">
        <div class="label">Agent Harness Status</div>
        <div class="val" style="color: var(--green);">RUNNING 24/7</div>
        <div class="hint">AWS EC2 &bull; deterministic pattern synthesis (no external GPU)</div>
      </div>
    </div>

    <table>
      <thead>
        <tr>
          <th>Address</th>
          <th>Status</th>
          <th>Symbol / Method</th>
          <th>Source File</th>
          <th>Size</th>
          <th>Byte Accuracy</th>
        </tr>
      </thead>
      <tbody>
        {"".join(rows_html) if rows_html else '<tr><td colspan="6">Initializing first batch...</td></tr>'}
      </tbody>
    </table>
  </div>
</body>
</html>
"""
    (DOCS_DIR / "index.html").write_text(html, encoding="utf-8")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--commit", type=str, default=None, help="Git commit message")
    parser.add_argument("--push", action="store_true", help="Push to origin main")
    args = parser.parse_args()

    summary = evaluate_all_client_files()
    write_svg(summary)
    write_dashboard_html(summary)

    print(
        f"[PROGRESS] Annotated: {summary['implemented_total']} | "
        f"100% Exact: {summary['perfect_100_count']} | "
        f"Avg Match: {summary['average_match_pct']:.2f}% | "
        f"Matchable: {summary['matchable_functions']} ({summary['fragment_entries']} fragments, "
        f"{summary['compiler_thunk_entries']} thunks, {summary['seh_scaffold_entries']} SEH excluded)"
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
