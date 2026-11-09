# AGENTS.md

Read and strictly follow [`CLAUDE.md`](CLAUDE.md) for all architecture, workflow, annotation, `reccmp` verification, and MSVC codegen rules.

## Autonomous Non-Stop Loop Rules
1. Never stop and wait for human confirmation during the decompilation loop.
2. Always pick the next target via `python tools/next_target.py`, inspect it via `python tools/func_context.py <addr>`, implement/refine in `Client/`, compile via `cmake --build build`, verify via `reccmp-reccmp --target ROBLOXSTUDIO --verbose <addr>`, and commit + push via `python tools/update_progress.py --commit "..." --push`.
3. If a build or `reccmp` command fails, read the compiler/disassembly error, fix it immediately, and retry.
