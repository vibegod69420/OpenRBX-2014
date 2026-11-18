#!/usr/bin/env python3
"""
Shared classification of the ROBLOXSTUDIO address table.

`ROBLOXSTUDIO-function-size.csv` is derived from `.text` boundaries and is not
a pure function list: it also holds mid-instruction starts and
compiler-generated redirects. Only `real` entries can ever be reproduced by C++
source, so both the harness and the progress reporter must agree on the split.
"""

from __future__ import annotations


def classify_target(orig: bytes) -> str:
    """
    - `fragment`: the bytes never terminate a routine (no `ret`), i.e. the size
      table holds mid-instruction starts. No C++ source can match these.
    - `thunk`: compiler-generated redirect emitted for multiple-inheritance
      adjustors (`sub ecx,N; jmp`), imported functions (`jmp [__imp_x]`) or tail
      calls (`jmp rel32`). There is no high-level body to write for them.
    - `seh`: a complete routine that opens an SEH frame.
    - `real`: a complete routine worth synthesizing or handing to the LLM.
    """
    if not orig:
        return "fragment"
    if orig[0] == 0xE9 or orig[:2] == b"\xff\x25":
        return "thunk"
    if orig[:2] == b"\x83\xe9" and len(orig) >= 7 and orig[3] == 0xE9:
        return "thunk"
    if orig[:3] == b"\x2b\x49\xfc" and orig[3:4] == b"\xe9":
        return "thunk"
    if orig[-1] not in (0xC3, 0xC2) or orig[-1:] == b"\xe9":
        return "fragment"
    if bytes.fromhex("64a100000000") in orig[:40] and bytes.fromhex("64892500000000") in orig[:56]:
        return "seh"
    return "real"
