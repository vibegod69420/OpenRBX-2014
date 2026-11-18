# OpenRBX-2014

![ROBLOXSTUDIO Progress](ROBLOXSTUDIOPROGRESS.SVG)

**Live dashboard:** https://vibegod69420.github.io/OpenRBX-2014/

**OpenRBX-2014** is an autonomous, byte-accurate decompilation of the **August 20, 2014 Roblox
engine (`0.164.0.50577`)** archived by [Roblonium](https://archive.roblonium.com). A routine counts
as decompiled only when the C++ written for it recompiles — with the original MSVC 11.0 toolchain —
to the exact machine code in the retail binary.

---

## Target

| Field | Value |
| :--- | :--- |
| **Binary** | `RobloxStudioBeta.exe` (`0.164.0.50577`, August 20, 2014) |
| **SHA-256** | `49c3c60717be968a14792d827a57ab517e47d61982b83619b38a82163c5b2703` |
| **Compiler** | MSVC 11.0 / Visual Studio 2012 x86 (`cl 17.00.50727`, Linker 11.0) |
| **`.text`** | `0x00401000`–`0x00e0f3a3`, 9,574,526 bytes, 40,561 indexed addresses |
| **Matchable** | 9,365 complete routines — 21,305 mid-instruction fragments, 2,184 compiler thunks and 7,707 SEH frames are excluded by construction |
| **Symbol donor** | macOS i386 `RobloxPlayer` of the same version (38,505 unstripped C++ symbols), `data/mac_symbols_2014.json` |
| **RTTI** | 7,087 `TypeDescriptor` records / 9,004 vtables, `data/rtti_vtables_2014.json` |

## Generation model

| Field | Value |
| :--- | :--- |
| **Model** | `deepseek-v4.1-flash` (DeepSeek V4.1 Flash 1017) via `api.deepai.org/deepai_code` |
| **Context** | 320,000 tokens, 131,072 max output |
| **Thinking** | `reasoning_effort: "max"` on every request |
| **Repair budget** | 16K → 32K → 64K → 96K completion tokens across four attempts |

The harness streams each reply, so multi-thousand-token thinking chains never trip an idle-read
timeout, and records token/latency usage in `data/llm_usage.jsonl` for the dashboard.

## How a match is proven

1. **Pre-flight context card** (`tools/func_context.py`) — exact byte budget, full x86 disassembly,
   RTTI vtable slot, referenced strings and float constants, fast-flag names, the class header and
   the tail of the target translation unit.
2. **Recompile** (`tools/verify_tu.py`) — `cl.exe 17.00.50727` builds one translation unit with
   `/O2 /Ob2 /Oi /Ot /Oy- /GS /EHsc /GR /Gy /fp:precise`. MSVC 11's x86 target is SSE2 by
   default; it has no `/arch:SSE` switch (that arrived in VS2013), so none is passed.
3. **Relocation-invariant COFF diff** — code bytes are compared with 4-byte relocation spans masked.
   Only 100.00% promotes `// STUB:` to `// FUNCTION:`; anything less is returned to the model as a
   side-by-side disassembly diff for repair.

Nothing is marked `FUNCTION` by hand, and a body that has not been measured stays a `STUB`.

---

## Quick start

```bash
python tools/provision_local.py --keep-iso     # one-time: MSVC 11.0 into toolchain/msvc11
python tools/deploy_aws.py fetch               # robloxbin/RobloxStudioBeta.exe (21.6 MB, SHA-256 checked)

export DEEPAI_API_KEY=...                      # DeepAI key; never commit it
python tools/next_target.py 8                  # highest-priority unmatched addresses
python tools/func_context.py 0x004f6040        # context card for one address
python tools/verify_tu.py Client/App/v8kernel/ManualWeldJoint.cpp 0x004f6040
python tools/update_progress.py                # recompute metrics + dashboard data
```

The full autonomous loop:

```bash
python tools/autonomous_harness.py             # BACKEND=deepai by default
```

One pass = pick target → context card → model → compile → diff → repair → commit → publish.

## AWS worker

The decompilation worker runs on EC2 because byte matching needs MSVC 11 under Wine. Everything is
driven through the AWS CLI by `tools/deploy_aws.py`:

```bash
python tools/deploy_aws.py compare     # price eligible instance types across regions
python tools/deploy_aws.py launch      # key pair + SSH-only security group + instance
python tools/deploy_aws.py sync        # copy this tree and install /etc/openrbx/deepai.env (0600)
python tools/deploy_aws.py provision   # VS2012 toolchain under Wine (~15 min)
python tools/deploy_aws.py fetch       # download + verify the target binary
python tools/deploy_aws.py service     # install and start openrbx-harness.service
python tools/deploy_aws.py status      # instance, unit state, last log lines
python tools/deploy_aws.py stop        # keep the disk
python tools/deploy_aws.py terminate   # delete the worker
```

**Why `t3.small` / `us-east-1`.** This AWS account is on the Free plan, which only permits
free-tier-eligible instance types (`t3.small`, `t3.micro`, `c7i-flex.large`, `m7i-flex.large`, …).
The worker is API-bound, not CPU-bound: it waits on DeepSeek responses and measures ~560 MB
resident at load 0.01, so the 8 GiB `m7i-flex.large` was mostly idle. `t3.small` gives 2
burstable vCPU and 2 GiB (plus a 4 GiB swapfile) at **$0.0208/hr** — $15.18/month instead of
$69.90 — with the same measured throughput. `tools/deploy_aws.py compare` reproduces that
comparison live.

The unit restarts on failure and is enabled at boot:

```
systemctl status openrbx-harness
tail -f /var/log/openrbx/harness.log
```

**Publishing.** The worker runs as root from a root-owned unit, and its git history predates the
annotation reset, so it cannot push `main` itself. Instead `/opt/openrbx/publish.sh` runs from the
ubuntu crontab every five minutes using a repo-scoped deploy key: it mirrors the worker's last
*committed* `Client/` tree plus its current `docs/` data into a shallow clone of `main` and pushes.
The repo's `pages.yml` workflow then deploys `docs/` to GitHub Pages. (`DECOMP_PUSH=1` is the
alternative path — the unit pushing its own history — but it has no credential.)
It is `0` by default because the worker has no GitHub credential.

## Tooling

| Tool | Purpose |
| :--- | :--- |
| `tools/autonomous_harness.py` | Main loop: select → prompt → compile → diff → repair → commit |
| `tools/deepai_backend.py` | DeepAI streaming client (`Api-Key` + `deepseek-v4.1-flash`, max thinking) |
| `tools/next_target.py` | Ranks unmatched addresses (vtable methods and small leaves first) |
| `tools/func_context.py` | Pre-flight context card: disassembly, RTTI, strings, flags, header |
| `tools/verify_tu.py` | Single-TU MSVC COFF comparator (~0.4 s, relocation-invariant) |
| `tools/source_router.py` | Routes an address to its real 2014 source path and class header |
| `tools/targets.py` | Shared fragment/thunk/SEH/real classification of the address table |
| `tools/update_progress.py` | Metrics, SVG badge, `docs/progress.json` + `docs/functions.json` |
| `tools/deploy_aws.py` | AWS CLI launcher, sync, provisioning, service and status |
| `tools/provision_linux.sh` | Extracts VS2012 from the RTD image and runs `cl` under Wine |
| `tools/quota_rotate.py` | Optional stop/start IP rotation controller |

## Repository layout

```
Client/            generated decompilation output, one file per 2014 source path
data/              RTTI, vtable, symbol-donor and source-tree indexes
docs/              static dashboard (reads progress.json / functions.json)
tools/             harness, verifier, router, provisioning, deployment
util/decomp.h      shared helpers (RBX_NOINLINE, UNK_STUB, free-memory shims)
```

The dashboard in `docs/` is a hand-maintained static page: it fetches `progress.json` every 30 s and
only loads the full function list when a visitor asks for it. `tools/update_progress.py` writes data,
never HTML.
