# CLAUDE.md — OpenRBX-2014 Byte-Accurate Decompilation Playbook

This file provides guidance to Claude Code (`claude`), Pi (`pi`), and autonomous decompilation agents working in this repository.

## Project Overview

**OpenRBX-2014** is a byte-accurate decompilation of the **August 20, 2014 Roblox engine (`0.164.0.50577`)** retrieved from the **Roblonium Archive (`archive.roblonium.com`)**:
- **Primary Win32 Target (`ROBLOXSTUDIO`)**: `RobloxStudioBeta.exe` (`0.164.0.50577`, compiled with **MSVC 11.0 / Visual Studio 2012**, `_MSC_VER == 1700`, Linker `11.0`, ImageBase `0x00400000`, `.text` `0x00401000`–`0x00e0f3a3`, completely un-VMProtected).
- **Symbol Donor (`ROBLOXMAC`)**: Matching `0.164.0.50577` macOS x86 `RobloxPlayer` binary containing **38,505 unstripped C++ symbols** (`__ZN3RBX...`, `__ZN3G3D...`) in `LC_SYMTAB`, plus `ReflectionMetadata.xml` and 2007 `OpenRBX` source reference (`../OpenRBX/`).

Our goal is **100% byte-for-byte accuracy** verified by `reccmp`. You must work **non-stop**, retrying on any compiler or `reccmp` mismatch until each target function reaches `100%` (or highest proven structural match), committing and pushing live progress to GitHub after every matched batch.

---

## Core Decompilation Workflow (Mandatory Loop)

Never guess blindly. Follow this exact 6-step loop for every function:

1. **Select Target Function**:
   ```bash
   python tools/next_target.py
   ```
   This selects the next unimplemented function from `ROBLOXSTUDIO-function-size.csv` (prioritizing RTTI vtable methods, small leaf functions, `FFlag`/`FInt` accessors, and functions with known symbols/strings).

2. **Generate Pre-Flight Function Context Card**:
   ```bash
   python tools/func_context.py 0x<ADDRESS>
   ```
   This outputs:
   - Exact byte size budget from `ROBLOXSTUDIO-function-size.csv`.
   - Full x86 disassembly of the target function in `RobloxStudioBeta.exe` (`0x<ADDRESS>`).
   - RTTI class & vtable slot membership from `data/rtti_vtables_2014.json`.
   - Cross-referenced string literals, `FFlag::*` / `FInt::*` fast flags, and `__FILE__` assert paths (`c:\buildagent\...`).
   - Matching C++ symbols from the `0.164.0.50577` Mac symbol table (`data/mac_symbols_2014.json`) and any matching 2007 `OpenRBX` implementation.

3. **Implement & Annotate in `Client/`**:
   - Place the function in the source file matching its embedded `__FILE__` path or RTTI subsystem (`Client/App/`, `Client/Rendering/`, `Client/Network/`, `Client/Base/`, `Client/Studio/`).
   - Annotate every function and vtable with `reccmp` comments:
     ```cpp
     // FUNCTION: ROBLOXSTUDIO 0x00401000
     ```
     Use `// STUB: ROBLOXSTUDIO 0x...` only while iterating or when blocked by an unimplemented sub-layout; convert to `// FUNCTION: ROBLOXSTUDIO 0x...` once byte-matched.
   - Annotate virtual tables on class declarations:
     ```cpp
     // VTABLE: ROBLOXSTUDIO 0x00e12340
     ```

4. **Compile & Run `reccmp` Diff**:
   ```bash
   cmake --build build
   reccmp-reccmp --target ROBLOXSTUDIO --verbose 0x<ADDRESS>
   ```
   Also run:
   ```bash
   python tools/check_folded.py --target ROBLOXSTUDIO
   python tools/update_progress.py --push
   ```

5. **Diagnose & Repair Every Assembly Diff Using the MSVC Codegen Playbook**:
   - **Compare Frame Size First**: In `reccmp --verbose`, check `sub esp, N` between Original and Recompiled. A constant `[esp+K]` offset shift across the body is a secondary effect of a single missing/extra 4-byte local or spilled temporary.
   - **Check Callee Set**: Compare every `call` instruction in Original vs Recompiled before tweaking expressions. Missing/extra `call` means a helper method was (or wasn't) inlined.

6. **Commit & Update Live GitHub Pages Progress**:
   - Once a function (or class batch) compiles and improves accuracy without regressions:
     ```bash
     python tools/update_progress.py --commit "Match <Class>::<Method> (0x<ADDRESS>) [100%]" --push
     ```

---

## MSVC Codegen Playbook (2007 $\to$ 2014 Engine Rules)

### 1. Register & Stack Slot Allocation (`ebx`, `ebp`, `esi`, `edi`)
- **Local Variable Declaration Order**: Reordering two local variables in C++ swaps which one gets a callee-saved register (`esi`, `edi`, `ebx`, `ebp`) vs a stack slot (`[esp+N]`). If `reccmp --verbose` shows the right instructions with two registers swapped, swap their C++ declaration order or move a declaration to its first use.
- **Explicit `this->` vs Implicit Member Access**: Writing `this->member` vs `member` inside a member function changes expression tree evaluation order and register assignment (`ecx`/`esi`/`edi`). Always test flipping `this->` when a member access uses the wrong register.
- **Commutative Operand Order**: In `a + b`, `a == b`, `a * b`, `a & b`, `a | b`, swapping operands changes which side MSVC evaluates into `eax`/`ecx` first.
- **Separate Local Declarations vs Comma Declarations**:
  ```cpp
  Vector3 a, b; // vs:
  Vector3 a;
  Vector3 b;
  ```
  Comma-separated declarations alter constructor call sequence and stack slot ordering.

### 2. Floating-Point Codegen (SSE2 Scalar & x87 FPU)
- **Strict IEEE-754 Comparisons (No `/fp:fast`)**:
  - Because NaN comparisons behave differently under `<` vs `>`, `if (a < b)` and `if (b > a)` emit **different instruction sequences** (flipping `comiss`/`ucomiss` or `fcom`/`fucom` operands and `jb`/`ja` vs `test ah, 0x05`/`0x41`).
  - If `reccmp` shows inverted float compare operands or `jb` vs `ja`, flip the comparison direction (`a < b` $\leftrightarrow$ `b > a`) or swap `if`/`else` polarity (`if (!(a < b))`).
- **`std::max` / `std::min` (`G3D::max` / `G3D::min`) Argument Reversal**:
  - `std::max(a, b)` expands to `(a < b) ? b : a`. If the assembly compares `b` against `a`, the source wrote `std::max(b, a)`!
- **`float` vs `double` Literals**:
  - A missing `f` suffix (`0.5` instead of `0.5f`) forces a `double` promotion (`cvtss2sd` / `cvtsd2ss` or 8-byte `.rdata` constant `__real@...`). Always check the `.rdata` constant size (4 bytes = `float`, 8 bytes = `double`).
- **`G3D::lerp(a, b, t)` vs `a + (b - a) * t`**:
  - Calling the `G3D::lerp` inline helper alters temporary lifetime and CSE compared to writing `a + (b - a) * t` inline.

### 3. Inlining, Templates & Identical COMDAT Folding (`/OPT:ICF`)
- **Inlining Control**:
  - Small getters (`size()`, `empty()`, `c_str()`, `get()`, `fastDynamicCast`) defined inside class bodies are implicitly `inline`.
  - If the binary emits a direct `call` to a small method, keep its definition out-of-line in the `.cpp` or mark it `__declspec(noinline)` (`RBX_NOINLINE` in `util/decomp.h`).
  - If the binary inlines a large helper at only one callsite, use `__forceinline` (`RBX_FORCEINLINE`).
- **Preventing Accidental Linker Folding (`check_folded.py`)**:
  - MSVC's `/OPT:ICF` merges byte-identical functions (`return 0;`, `return false;`, empty virtual stubs) into a single address.
  - Never leave multiple `// STUB:` functions with identical trivial bodies; give unimplemented stubs a unique address-seeded dummy side effect (`UNK_STUB(0x00401230);` from `util/decomp.h`) so `/OPT:ICF` never folds them together!

### 4. Class Layout, VTables, SEH & 2014 Roblox Idioms
- **SEH Exception Frames (`push -1; push __ehhandler$...; mov eax, fs:[0]`)**:
  - The `[ebp-4]` state variable (`__$EHRec$`) increments `0, 1, 2...` for each constructed local object with a non-trivial destructor (`std::string`, `boost::shared_ptr<T>`, `RBX::shared_ptr<T>`, `G3D::Array<T>`).
  - If a function has no SEH frame in the original binary, it **cannot** construct any non-trivial C++ object by value on that path.
- **2014 Fast Flags (`FFlag::*`, `FInt::*`, `DFInt::*`, `DFFlag::*`)**:
  - 2014 Roblox uses macros `FASTFLAG(Name)`, `FASTFLAGVARIABLE(Name, defaultVal)`, `FASTINT(Name)`, `FASTINTVARIABLE(Name, defaultVal)` in namespace `FFlag` / `FInt`.
- **2014 `RBX::Reflection` & `RBX::Creatable<Instance>`**:
  - Classes deriving from `RBX::DescribedCreatable<T, Base, sClassName>` register `RBX::Reflection::PropDescriptor`, `FuncDescriptor`, `EventDescriptor`, and `SignalDescriptor` singletons. Use `ReflectionMetadata.xml` and `data/rtti_vtables_2014.json` for exact class hierarchies and property names.
- **`BOOL` (`int`) vs `bool` Return Type (`xor eax, eax` before `cmp ...; setcc al; ret`)**:
  - When original assembly begins with `xor eax, eax` (`33 c0`) followed by `cmp ...; sete al; ret` (or `setne al`), the C++ return type is `int` (`BOOL`), **NOT** `bool`. Returning `bool` causes MSVC to omit `xor eax, eax`. Always use `int` return type when `xor eax, eax` precedes `setcc al`.
