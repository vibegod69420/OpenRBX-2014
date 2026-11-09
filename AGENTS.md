# AGENTS.md

Read and strictly follow [`CLAUDE.md`](CLAUDE.md) for all architecture, workflow, annotation, `reccmp` verification, and MSVC codegen rules.

## Autonomous Non-Stop Loop Rules
1. Never stop and wait for human confirmation during the decompilation loop.
2. Always pick the next target via `python tools/next_target.py`, inspect it via `python tools/func_context.py <addr>`, implement/refine in `Client/`, verify the translation unit via `python tools/verify_tu.py Client/<subsystem>/<File>.cpp <addr>`, and commit + push via `python tools/update_progress.py --commit "..." --push`.
3. Verification must run under MSVC 11.0 (`cl 17.00.50727`); run `python -c "import sys; sys.path.insert(0,'tools'); import verify_tu; print(verify_tu.get_compiler_version())"` first and treat any other version as untrustworthy for new matches. On the Linux worker that compiler runs under Wine through `tools/msvc110-cl`, which `verify_tu.py` finds via `MSVC_BIN_DIR` (`/opt/msvc110/bin`).
4. Generated bodies stay `// STUB:` until verified; `tools/autonomous_harness.py` promotes them to `// FUNCTION:` on a verified match. Never claim `// FUNCTION:` by hand.
3. If a build or `reccmp` command fails, read the compiler/disassembly error, fix it immediately, and retry.
