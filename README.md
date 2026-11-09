# OpenRBX-2014

![ROBLOXSTUDIO Progress](ROBLOXSTUDIOPROGRESS.SVG)

**[Live Autonomous Decompilation Dashboard (GitHub Pages)](https://vibegod69420.github.io/OpenRBX-2014/)**

**OpenRBX-2014** is an autonomous, byte-accurate decompilation of the **August 20, 2014 Roblox engine (`0.164.0.50577`)** archived by **Roblonium (`archive.roblonium.com`)**.

---

## Target Binary & Architecture

| Field | Value |
| :--- | :--- |
| **Target Binary (`ROBLOXSTUDIO`)** | `RobloxStudioBeta.exe` (`0.164.0.50577`, August 20, 2014) |
| **Archive Source** | [Roblonium Archive (`archive.roblonium.com`)](https://archive.roblonium.com/Client/Windows/RobloxStudio/main%20%28roblox.com%29/2014/8.2014/August%2020%20%280.164.0.50577%29/version-56db56d41a444c41/RobloxStudioBeta.exe) |
| **SHA-256** | `49c3c60717be968a14792d827a57ab517e47d61982b83619b38a82163c5b2703` |
| **Compiler & Linker** | Microsoft Visual C++ 11.0 (Visual Studio 2012 x86, `_MSC_VER == 1700`, Linker `11.0`) |
| **Indexed Functions** | `40,561` functions in `.text` (`0x00401000`–`0x00e0f3a3`) |
| **Recovered MSVC RTTI Classes** | `7,087` `TypeDescriptor` records & `9,004` exact virtual function tables (`data/rtti_vtables_2014.json`) |
| **Embedded Source Paths** | `589` original `D:\BuildAgent\work\Trunk2012\Client\...` source paths (`data/source_tree_2014.txt`) |
| **Matching Symbol Donor** | `0.164.0.50577` macOS x86 `RobloxPlayer` (`38,505` unstripped C++ symbols in `LC_SYMTAB`) — **not extracted yet**: `setup_2014_binaries.py` defines the URL but does not fetch or parse it, so names are currently synthesised from templates and struct offsets |

---

## Tooling & Autonomous 24/7 Harness

- **[`CLAUDE.md`](CLAUDE.md) & [`AGENTS.md`](AGENTS.md)**: Complete MSVC 11.0 x86 byte-matching playbook adapted from `Asphaltian/OpenRBX` for the 2014 engine.
- **[`tools/next_target.py`](tools/next_target.py)**: Prioritizes unimplemented functions across all 40,561 `.text` addresses (RTTI vtable methods and leaf functions first).
- **[`tools/func_context.py`](tools/func_context.py)**: Generates a complete Pre-Flight Function Context Card (exact byte budget, x86 disassembly, RTTI vtable slots, referenced `.rdata` strings/floats, and 2007 `OpenRBX` reference hints).
- **[`tools/verify_tu.py`](tools/verify_tu.py)**: Sub-second (`~0.4s`) single-translation-unit MSVC `cl.exe /c` COFF `.obj` relocation-invariant byte comparator against `RobloxStudioBeta.exe`.
- **[`tools/update_progress.py`](tools/update_progress.py)**: Recomputes repo-wide accuracy metrics, updates `ROBLOXSTUDIOPROGRESS.SVG`, `ROBLOXSTUDIOPROGRESS.json`, and `docs/index.html`, and commits/pushes to GitHub Pages.
- **[`tools/autonomous_harness.py`](tools/autonomous_harness.py)**: Immortal 24/7 supervisor daemon running on AWS EC2 (`i-023705d972a85fb82`, Ubuntu 24.04), wired to the `Qwen3.8` base model server on Dual Tesla T4 GPUs with automatic tunnel discovery, compiler-in-the-loop retries, and continuous GitHub Pages deployment.
- **[`tools/provision_linux.sh`](tools/provision_linux.sh)**: Rebuilds the Linux worker from scratch: extracts MSVC 11.0 (`cl 17.00.50727`) from the VS2012 RTD media and runs it under Wine through [`tools/msvc110-cl`](tools/msvc110-cl). [`tools/openrbx-harness.service`](tools/openrbx-harness.service) supervises the daemon with systemd.
