// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10cac[];
// FUNCTION: ROBLOXSTUDIO 0x0047aa20
extern "C" __declspec(naked) void asm_0047aa20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [edx] }
	__asm { push esi }
	__asm { push dword ptr [eax + 8] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10cac] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0047b7a0
extern "C" __declspec(naked) void asm_0047b7a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0047b7ca }
	__asm { test al, 1 }
	__asm { jne L_0047b7c3 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0047b7c3 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0047b7c3: }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0047b7ca: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_0048c0b0();
// FUNCTION: ROBLOXSTUDIO 0x0047be60
extern "C" __declspec(naked) void asm_0047be60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push esi }
	__asm { lea esi, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0048c0b0 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e10508[];
extern "C" void fn_00480230();
// FUNCTION: ROBLOXSTUDIO 0x00480320
extern "C" __declspec(naked) void asm_00480320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [ecx - 0x70] }
	__asm { lea ecx, [edi + 0x70] }
	__asm { call fn_00480230 }
	__asm { lea ecx, [edi + 0x70] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00480349 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00480349: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004833f0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00481270
extern "C" __declspec(naked) void asm_00481270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00481297 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_004833f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00481297 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00481297: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0089a390();
extern "C" void fn_0089a610();
// FUNCTION: ROBLOXSTUDIO 0x004812a0
extern "C" __declspec(naked) void asm_004812a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0089a610 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { je L_004812ca }
	__asm { L_004812b3: }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { call fn_0089a390 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 8 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_004812b3 }
	__asm { L_004812ca: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004898e0();
// FUNCTION: ROBLOXSTUDIO 0x004894f0
extern "C" __declspec(naked) void asm_004894f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0048950c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004898e0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0048950c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12c8698 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00489690();
// FUNCTION: ROBLOXSTUDIO 0x00489560
extern "C" __declspec(naked) void asm_00489560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00489583 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00489690 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00489583: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12c8590 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x004895a0
extern "C" __declspec(naked) void asm_004895a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push dword ptr [esi + 8] }
	__asm { call eax }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004897b0();
// FUNCTION: ROBLOXSTUDIO 0x004895d0
extern "C" __declspec(naked) void asm_004895d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004895f3 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_004897b0 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004895f3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12c8488 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00489850
extern "C" __declspec(naked) void asm_00489850()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0048987a }
	__asm { test al, 1 }
	__asm { jne L_00489873 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00489873 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00489873: }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_0048987a: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0048bd50
extern "C" __declspec(naked) void asm_0048bd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0xde4 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0048b440();
extern "C" void fn_0048b5f0();
// FUNCTION: ROBLOXSTUDIO 0x0048cca0
extern "C" __declspec(naked) void asm_0048cca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_0048ccbe }
	__asm { mov ecx, esi }
	__asm { call fn_0048b440 }
	__asm { push esi }
	__asm { call fn_0048b5f0 }
	__asm { add esp, 4 }
	__asm { L_0048ccbe: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0048ce69
extern "C" __declspec(naked) void asm_0048ce69()
{
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0048ce80 }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_0048ce80: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_0048ce93 }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_0048ce93: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

// FUNCTION: ROBLOXSTUDIO 0x0048d159
extern "C" __declspec(naked) void asm_0048d159()
{
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0048d170 }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_0048d170: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_0048d183 }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_0048d183: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00402fd0();
// FUNCTION: ROBLOXSTUDIO 0x0048e630
extern "C" __declspec(naked) void asm_0048e630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { jb L_0048e641 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0048e641: }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { xor ecx, ecx }
	__asm { test eax, eax }
	__asm { sets al }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x0048eb20
extern "C" __declspec(naked) void asm_0048eb20()
{
	__asm { push 0x40 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0048eb35 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_0048eb35: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_0048eb40 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0048eb40: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0048eb49 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0048eb49: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_0048eee0();
// FUNCTION: ROBLOXSTUDIO 0x0048efa0
extern "C" __declspec(naked) void asm_0048efa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_0048eee0 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e10508[];
extern "C" void fn_0048f020();
// FUNCTION: ROBLOXSTUDIO 0x0048efd0
extern "C" __declspec(naked) void asm_0048efd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [ecx - 0x60] }
	__asm { lea ecx, [edi + 0x60] }
	__asm { call fn_0048f020 }
	__asm { lea ecx, [edi + 0x60] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0048eff9 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0048eff9: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00490c50();
// FUNCTION: ROBLOXSTUDIO 0x00490900
extern "C" __declspec(naked) void asm_00490900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0xa0] }
	__asm { je L_00490925 }
	__asm { mov byte ptr [ecx + 0xa0], al }
	__asm { push 0x1319b30 }
	__asm { add ecx, 0xd8 }
	__asm { call fn_00490c50 }
	__asm { L_00490925: }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_011ddd00[];
extern "C" void fn_00490c50();
// FUNCTION: ROBLOXSTUDIO 0x004909f0
extern "C" __declspec(naked) void asm_004909f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [g_011ddd00] }
	__asm { je L_00490a14 }
	__asm { push 0x1319bb4 }
	__asm { add ecx, 0xd8 }
	__asm { mov dword ptr [g_011ddd00], eax }
	__asm { call fn_00490c50 }
	__asm { L_00490a14: }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00490c50();
// FUNCTION: ROBLOXSTUDIO 0x00490b40
extern "C" __declspec(naked) void asm_00490b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0x8c] }
	__asm { je L_00490b65 }
	__asm { mov byte ptr [ecx + 0x8c], al }
	__asm { push 0x1319c48 }
	__asm { add ecx, 0xd8 }
	__asm { call fn_00490c50 }
	__asm { L_00490b65: }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00490c50();
// FUNCTION: ROBLOXSTUDIO 0x00490b70
extern "C" __declspec(naked) void asm_00490b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0x8e] }
	__asm { je L_00490b95 }
	__asm { mov byte ptr [ecx + 0x8e], al }
	__asm { push 0x1319ca0 }
	__asm { add ecx, 0xd8 }
	__asm { call fn_00490c50 }
	__asm { L_00490b95: }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00493600();
// FUNCTION: ROBLOXSTUDIO 0x00492f40
extern "C" __declspec(naked) void asm_00492f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { mov esi, dword ptr [g_00e10508] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_00492f6f }
	__asm { push edi }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_00492f6f: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00494099
extern "C" __declspec(naked) void asm_00494099()
{
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_004940b0 }
	__asm { and dword ptr [esi + 0x1c], 0xffffffeb }
	__asm { L_004940b0: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { mov eax, esi }
	__asm { je L_004940c3 }
	__asm { and dword ptr [esi + 0x1c], 0xfffffff3 }
	__asm { L_004940c3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

// FUNCTION: ROBLOXSTUDIO 0x00495180
extern "C" __declspec(naked) void asm_00495180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_0049519d }
	__asm { add eax, -0x1c }
	__asm { je L_0049519d }
	__asm { lea ecx, [eax + 0x68] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0049519d: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { xor ecx, ecx }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x004951f0
extern "C" __declspec(naked) void asm_004951f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00495202 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00495204 }
	__asm { L_00495202: }
	__asm { xor edx, edx }
	__asm { L_00495204: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00499c80();
// FUNCTION: ROBLOXSTUDIO 0x00499c00
extern "C" __declspec(naked) void asm_00499c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00499c23 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00499c80 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00499c23: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cafa0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_0049bb20();
// FUNCTION: ROBLOXSTUDIO 0x0049b8a0
extern "C" __declspec(naked) void asm_0049b8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea esi, [ecx + 4] }
	__asm { mov dword ptr [ecx], 0x1014354 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0049bb20 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0049bb20();
extern "C" void fn_0049be50();
// FUNCTION: ROBLOXSTUDIO 0x0049b960
extern "C" __declspec(naked) void asm_0049b960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { je L_0049b992 }
	__asm { push esi }
	__asm { lea esi, [ecx + 4] }
	__asm { push edx }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0049be50 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0049bb20 }
	__asm { pop esi }
	__asm { L_0049b992: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12dec[];
// FUNCTION: ROBLOXSTUDIO 0x0049fd40
extern "C" __declspec(naked) void asm_0049fd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, esi }
	__asm { je L_0049fd62 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e12dec] }
	__asm { L_0049fd56: }
	__asm { sub esi, 4 }
	__asm { mov ecx, esi }
	__asm { call ebx }
	__asm { cmp esi, edi }
	__asm { jne L_0049fd56 }
	__asm { pop ebx }
	__asm { L_0049fd62: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
// FUNCTION: ROBLOXSTUDIO 0x004a4ba0
extern "C" __declspec(naked) void asm_004a4ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { jne L_004a4bb9 }
	__asm { cmp byte ptr [ebp + 8], al }
	__asm { jne L_004a4bb9 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004a4bb9: }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { add eax, 8 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
// FUNCTION: ROBLOXSTUDIO 0x004a4bd0
extern "C" __declspec(naked) void asm_004a4bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { jne L_004a4be9 }
	__asm { cmp byte ptr [ebp + 8], al }
	__asm { jne L_004a4be9 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004a4be9: }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { add eax, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11b34[];
extern "C" char g_00e12c94[];
extern "C" void fn_004acb70();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004aac40
extern "C" __declspec(naked) void asm_004aac40()
{
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 0x14], -1 }
	__asm { mov dword ptr [ecx + 0x18], 0xffffffff }
	__asm { jne L_004aac77 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x12cc9a0 }
	__asm { push 0x12c56b0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e12c94] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11b34] }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_004aac77: }
	__asm { call fn_004acb70 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_004b1d30();
// FUNCTION: ROBLOXSTUDIO 0x004adc10
extern "C" __declspec(naked) void asm_004adc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_004adc48 }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { push ecx }
	__asm { call fn_004b1d30 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_004adc48: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b3300();
// FUNCTION: ROBLOXSTUDIO 0x004adc50
extern "C" __declspec(naked) void asm_004adc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea edx, [esp + 4] }
	__asm { push edx }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { call fn_004b3300 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dl, byte ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], dl }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004b0630();
// FUNCTION: ROBLOXSTUDIO 0x004ae3a0
extern "C" __declspec(naked) void asm_004ae3a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_004ae3da }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_004ae3c0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b0630 }
	__asm { L_004ae3c0: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_004ae3da: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x004afb50
extern "C" __declspec(naked) void asm_004afb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xefb298 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004b03f0();
// FUNCTION: ROBLOXSTUDIO 0x004afb90
extern "C" __declspec(naked) void asm_004afb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_004b03f0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi + 0x30], 0xe1822c }
	__asm { je L_004afbb2 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004afbb2: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b4330();
// FUNCTION: ROBLOXSTUDIO 0x004b3a90
extern "C" __declspec(naked) void asm_004b3a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004b3ab3 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_004b4330 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b3ab3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cc5e0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b41a0();
// FUNCTION: ROBLOXSTUDIO 0x004b3ba0
extern "C" __declspec(naked) void asm_004b3ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004b3bc3 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_004b41a0 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b3bc3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cc460 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b46b0();
// FUNCTION: ROBLOXSTUDIO 0x004b3c00
extern "C" __declspec(naked) void asm_004b3c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004b3c1c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004b46b0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b3c1c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cc4b8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b4770();
// FUNCTION: ROBLOXSTUDIO 0x004b3c50
extern "C" __declspec(naked) void asm_004b3c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004b3c6c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004b4770 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b3c6c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cc338 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b47e0();
// FUNCTION: ROBLOXSTUDIO 0x004b3ca0
extern "C" __declspec(naked) void asm_004b3ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004b3cbc }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004b47e0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b3cbc: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cc3d0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b4850();
// FUNCTION: ROBLOXSTUDIO 0x004b3cf0
extern "C" __declspec(naked) void asm_004b3cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004b3d0c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004b4850 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b3d0c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cc140 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c8c[];
// FUNCTION: ROBLOXSTUDIO 0x004b3d20
extern "C" __declspec(naked) void asm_004b3d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push dword ptr [esi + 8] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b4930();
// FUNCTION: ROBLOXSTUDIO 0x004b3d50
extern "C" __declspec(naked) void asm_004b3d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004b3d6c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004b4930 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b3d6c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cc220 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c8c[];
// FUNCTION: ROBLOXSTUDIO 0x004b3d80
extern "C" __declspec(naked) void asm_004b3d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push dword ptr [esi + 8] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { call eax }
	__asm { add esp, 0x14 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b4200();
// FUNCTION: ROBLOXSTUDIO 0x004b3db0
extern "C" __declspec(naked) void asm_004b3db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004b3dd3 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_004b4200 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b3dd3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cc080 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b4260();
// FUNCTION: ROBLOXSTUDIO 0x004b3e00
extern "C" __declspec(naked) void asm_004b3e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004b3e23 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_004b4260 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b3e23: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cc0c0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b4440();
// FUNCTION: ROBLOXSTUDIO 0x004b3e50
extern "C" __declspec(naked) void asm_004b3e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004b3e73 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_004b4440 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b3e73: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cbf38 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b4560();
// FUNCTION: ROBLOXSTUDIO 0x004b3ea0
extern "C" __declspec(naked) void asm_004b3ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004b3ec3 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_004b4560 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b3ec3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cc008 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b42c0();
// FUNCTION: ROBLOXSTUDIO 0x004b3f60
extern "C" __declspec(naked) void asm_004b3f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004b3f83 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_004b42c0 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b3f83: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cbd50 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b4a10();
// FUNCTION: ROBLOXSTUDIO 0x004b3fc0
extern "C" __declspec(naked) void asm_004b3fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004b3fdc }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004b4a10 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004b3fdc: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cbe88 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004b4670
extern "C" __declspec(naked) void asm_004b4670()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_004b4698 }
	__asm { test al, 1 }
	__asm { jne L_004b4692 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b4692 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b4692: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_004b4698: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x004b64f0
extern "C" __declspec(naked) void asm_004b64f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x004b6780
extern "C" __declspec(naked) void asm_004b6780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0x68 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004c8a80();
// FUNCTION: ROBLOXSTUDIO 0x004b6bf0
extern "C" __declspec(naked) void asm_004b6bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_004c8a80 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x004c8e80
extern "C" __declspec(naked) void asm_004c8e80()
{
	__asm { push 0x1c }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_004c8e95 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_004c8e95: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_004c8ea0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_004c8ea0: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_004c8ea9 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_004c8ea9: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" void fn_004ceaa0();
// FUNCTION: ROBLOXSTUDIO 0x004ce8c0
extern "C" __declspec(naked) void asm_004ce8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004ce8dc }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004ceaa0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ce8dc: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12ccd48 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004ceb10();
// FUNCTION: ROBLOXSTUDIO 0x004ce8f0
extern "C" __declspec(naked) void asm_004ce8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004ce90c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004ceb10 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ce90c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12ccc38 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004ceb80();
// FUNCTION: ROBLOXSTUDIO 0x004ce940
extern "C" __declspec(naked) void asm_004ce940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004ce95c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004ceb80 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ce95c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12cccb8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004cebf0();
// FUNCTION: ROBLOXSTUDIO 0x004ce990
extern "C" __declspec(naked) void asm_004ce990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004ce9ac }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004cebf0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ce9ac: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12ccab0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004cec60();
// FUNCTION: ROBLOXSTUDIO 0x004ce9e0
extern "C" __declspec(naked) void asm_004ce9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_004ce9fc }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_004cec60 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004ce9fc: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12ccb40 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c8c[];
// FUNCTION: ROBLOXSTUDIO 0x004cea10
extern "C" __declspec(naked) void asm_004cea10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { call dword ptr [g_00e10c8c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0044db70();
// FUNCTION: ROBLOXSTUDIO 0x004d1c60
extern "C" __declspec(naked) void asm_004d1c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044db70 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004d1e40();
extern "C" void fn_004d21c0();
// FUNCTION: ROBLOXSTUDIO 0x004d1ef0
extern "C" __declspec(naked) void asm_004d1ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ecx + 0x70], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_004d1f14 }
	__asm { push esi }
	__asm { call fn_004d21c0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004d1f14: }
	__asm { push dword ptr [ecx + 8] }
	__asm { lea ecx, [ecx + 0x70] }
	__asm { push esi }
	__asm { call fn_004d1e40 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e123d8[];
extern "C" char g_00e12678[];
// FUNCTION: ROBLOXSTUDIO 0x004d3590
extern "C" __declspec(naked) void asm_004d3590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { call dword ptr [g_00e12678] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e123d8] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e123b4[];
// FUNCTION: ROBLOXSTUDIO 0x004d3620
extern "C" __declspec(naked) void asm_004d3620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movzx edx, word ptr [eax + 8] }
	__asm { cmp edx, 0x75 }
	__asm { je L_004d3643 }
	__asm { cmp edx, 0x33 }
	__asm { je L_004d3643 }
	__asm { cmp edx, 7 }
	__asm { je L_004d3643 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e123b4] }
	__asm { L_004d3643: }
	__asm { or word ptr [eax + 0xa], 4 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131a0fc[];
extern "C" char g_0131a100[];
extern "C" char g_0131a108[];
extern "C" void fn_004f4c70();
// FUNCTION: ROBLOXSTUDIO 0x004e99c0
extern "C" __declspec(naked) void asm_004e99c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [g_0131a100] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [g_0131a0fc] }
	__asm { call fn_004f4c70 }
	__asm { mov eax, dword ptr [g_0131a0fc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [g_0131a100], eax }
	__asm { mov dword ptr [g_0131a108], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004f4c70
extern "C" __declspec(naked) void asm_004f4c70()
{
	__asm { push edi }
	__asm { mov edi, edx }
	__asm { cmp ecx, edi }
	__asm { je L_004f4cac }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { L_004f4c82: }
	__asm { cmp dword ptr [esi], 0x10 }
	__asm { jb L_004f4c8f }
	__asm { push dword ptr [esi - 0x14] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_004f4c8f: }
	__asm { mov dword ptr [esi], 0xf }
	__asm { mov dword ptr [esi - 4], 0 }
	__asm { mov byte ptr [esi - 0x14], 0 }
	__asm { add esi, 0x20 }
	__asm { lea eax, [esi - 0x1c] }
	__asm { cmp eax, edi }
	__asm { jne L_004f4c82 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_004f4cac: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" char g_00e11108[];
extern "C" void fn_004f5940();
// FUNCTION: ROBLOXSTUDIO 0x004f5a70
extern "C" __declspec(naked) void asm_004f5a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { lea esi, [ecx + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_004f5a8f }
	__asm { call fn_004f5940 }
	__asm { L_004f5a8f: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12758[];
// FUNCTION: ROBLOXSTUDIO 0x004f7000
extern "C" __declspec(naked) void asm_004f7000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xffffffff }
	__asm { call dword ptr [g_00e12758] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [esi], 0x4b }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e129d0[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004f9d70
extern "C" __declspec(naked) void asm_004f9d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { je L_004f9daa }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { push 0 }
	__asm { push 0x12c6ac0 }
	__asm { push 0x12c39ac }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e129d0] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004f9daa }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x24] }
	__asm { L_004f9daa: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e129d0[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004f9db0
extern "C" __declspec(naked) void asm_004f9db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { je L_004f9dea }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { push 0 }
	__asm { push 0x12c6ac0 }
	__asm { push 0x12c39ac }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call dword ptr [g_00e129d0] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004f9dea }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x20] }
	__asm { L_004f9dea: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e122d4[];
// FUNCTION: ROBLOXSTUDIO 0x004f9e60
extern "C" __declspec(naked) void asm_004f9e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e122d4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add ecx, 3 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov eax, edx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01038228[];
// FUNCTION: ROBLOXSTUDIO 0x004fa120
extern "C" __declspec(naked) void asm_004fa120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr [ecx + 0x210] }
	__asm { sub eax, 0 }
	__asm { je L_004fa14a }
	__asm { dec eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { je L_004fa140 }
	__asm { cmp byte ptr [ecx + 0x20c], 0 }
	__asm { je L_004fa14d }
	__asm { L_004fa140: }
	__asm { fldz }
	__asm { fstp qword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004fa14a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_004fa14d: }
	__asm { fld qword ptr [g_01038228] }
	__asm { fstp qword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_0049bb20();
// FUNCTION: ROBLOXSTUDIO 0x004fa730
extern "C" __declspec(naked) void asm_004fa730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_0049bb20 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_004fe4f0();
// FUNCTION: ROBLOXSTUDIO 0x004fa760
extern "C" __declspec(naked) void asm_004fa760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_004fe4f0 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_004fe590();
// FUNCTION: ROBLOXSTUDIO 0x004fa790
extern "C" __declspec(naked) void asm_004fa790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_004fe590 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_004fe430();
// FUNCTION: ROBLOXSTUDIO 0x004fa7c0
extern "C" __declspec(naked) void asm_004fa7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_004fe430 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e123b4[];
extern "C" void fn_004fd020();
// FUNCTION: ROBLOXSTUDIO 0x004fcfe0
extern "C" __declspec(naked) void asm_004fcfe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, 0x3ed }
	__asm { cmp word ptr [eax + 8], cx }
	__asm { mov ecx, esi }
	__asm { je L_004fd002 }
	__asm { push eax }
	__asm { call dword ptr [g_00e123b4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004fd002: }
	__asm { call fn_004fd020 }
	__asm { mov byte ptr [esi + 0x38], 0 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004226b0();
// FUNCTION: ROBLOXSTUDIO 0x004ff790
extern "C" __declspec(naked) void asm_004ff790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { test eax, eax }
	__asm { je L_004ff7aa }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_004ff7aa: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x005001c0
extern "C" __declspec(naked) void asm_005001c0()
{
	__asm { push esi }
	__asm { push 0x14 }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_005001da }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_005001da: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_005001e9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005001e9: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_005001f4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005001f4: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e122d4[];
// FUNCTION: ROBLOXSTUDIO 0x00500460
extern "C" __declspec(naked) void asm_00500460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e122d4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add ecx, 2 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, 2 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov eax, edx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f8c[];
extern "C" void fn_00500b70();
// FUNCTION: ROBLOXSTUDIO 0x00501160
extern "C" __declspec(naked) void asm_00501160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00500b70 }
	__asm { test al, al }
	__asm { je L_00501187 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12bfdc0 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00501187 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00501187: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00511470();
// FUNCTION: ROBLOXSTUDIO 0x0050f860
extern "C" __declspec(naked) void asm_0050f860()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { je L_0050f87f }
	__asm { lea ecx, [esi - 8] }
	__asm { call fn_00511470 }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { add ecx, 8 }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { jmp eax }
	__asm { L_0050f87f: }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea eax, [esi + 0x44] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 0x28] }
	__asm { call eax }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0050fe90
extern "C" __declspec(naked) void asm_0050fe90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jne L_0050fea4 }
	__asm { L_0050fe9e: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0050fea4: }
	__asm { mov ecx, dword ptr [ecx + 0x3c] }
	__asm { test ecx, ecx }
	__asm { je L_0050fe9e }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add ecx, 8 }
	__asm { mov eax, dword ptr [eax + 0x50] }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp eax }
}

extern "C" void fn_00511140();
// FUNCTION: ROBLOXSTUDIO 0x00511110
extern "C" __declspec(naked) void asm_00511110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, 0x12e3aa8 }
	__asm { je L_00511124 }
	__asm { cmp eax, 0x12e1de0 }
	__asm { jne L_00511138 }
	__asm { L_00511124: }
	__asm { cmp eax, 0x12e1de0 }
	__asm { sete al }
	__asm { movzx eax, al }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00511140 }
	__asm { L_00511138: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038228[];
// FUNCTION: ROBLOXSTUDIO 0x00512540
extern "C" __declspec(naked) void asm_00512540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr [ecx + 0x218] }
	__asm { sub eax, 0 }
	__asm { je L_0051256a }
	__asm { dec eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { je L_00512560 }
	__asm { cmp byte ptr [ecx + 0x214], 0 }
	__asm { je L_0051256d }
	__asm { L_00512560: }
	__asm { fldz }
	__asm { fstp qword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0051256a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_0051256d: }
	__asm { fld qword ptr [g_01038228] }
	__asm { fstp qword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_006bc9a0();
extern "C" void fn_006c4220();
// FUNCTION: ROBLOXSTUDIO 0x00512800
extern "C" __declspec(naked) void asm_00512800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x210] }
	__asm { call fn_006bc9a0 }
	__asm { lea ecx, [esi + 0x20c] }
	__asm { call fn_006bc9a0 }
	__asm { mov ecx, esi }
	__asm { call fn_006c4220 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00512833 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00512833: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00513980();
// FUNCTION: ROBLOXSTUDIO 0x00512ab0
extern "C" __declspec(naked) void asm_00512ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00513980 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x00513dd0
extern "C" __declspec(naked) void asm_00513dd0()
{
	__asm { push 0x2c }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00513de5 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_00513de5: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_00513df0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00513df0: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00513df9 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00513df9: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" void fn_00410e50();
extern "C" void fn_005141d0();
// FUNCTION: ROBLOXSTUDIO 0x00513f10
extern "C" __declspec(naked) void asm_00513f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_005141d0 }
	__asm { mov edi, eax }
	__asm { lea ebx, [edi + 0x10] }
	__asm { mov word ptr [edi + 0xc], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00513f3e }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00410e50 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { mov eax, edi }
	__asm { pop esi }
	__asm { L_00513f3e: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00514190
extern "C" __declspec(naked) void asm_00514190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { jb L_005141a9 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005141a9: }
	__asm { mov dword ptr [esi + 0x24], 0xf }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x005141d0
extern "C" __declspec(naked) void asm_005141d0()
{
	__asm { push esi }
	__asm { push 0x2c }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_005141ea }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_005141ea: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_005141f9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_005141f9: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00514204 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00514204: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_004118e0();
extern "C" void fn_004fb9f0();
extern "C" void fn_007cc1b0();
// FUNCTION: ROBLOXSTUDIO 0x00516d10
extern "C" __declspec(naked) void asm_00516d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_00516d3b }
	__asm { call fn_004118e0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { push eax }
	__asm { call fn_007cc1b0 }
	__asm { test al, al }
	__asm { je L_00516d3b }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_004fb9f0 }
	__asm { L_00516d3b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
// FUNCTION: ROBLOXSTUDIO 0x00517200
extern "C" __declspec(naked) void asm_00517200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { jne L_00517219 }
	__asm { cmp byte ptr [ebp + 8], al }
	__asm { jne L_00517219 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00517219: }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { add eax, 0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0041f760();
extern "C" void fn_00421600();
extern "C" void fn_0082ea90();
// FUNCTION: ROBLOXSTUDIO 0x00517450
extern "C" __declspec(naked) void asm_00517450()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0082ea90 }
	__asm { test al, al }
	__asm { jne L_0051745e }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0051745e: }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00517481 }
	__asm { call fn_0041f760 }
	__asm { test eax, eax }
	__asm { je L_00517481 }
	__asm { mov ecx, eax }
	__asm { call fn_00421600 }
	__asm { cmp eax, 1 }
	__asm { jbe L_00517481 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00517481: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005241e0
extern "C" __declspec(naked) void asm_005241e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00524203 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax + 0xba0] }
	__asm { test eax, eax }
	__asm { je L_00524203 }
	__asm { mov al, byte ptr [eax + 0x1d8] }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00524203: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00532170();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0052d590
extern "C" __declspec(naked) void asm_0052d590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0052d5b7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00532170 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0052d5b7 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052d5b7: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00517260();
// FUNCTION: ROBLOXSTUDIO 0x0052e250
extern "C" __declspec(naked) void asm_0052e250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0052e272 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { nop }
	__asm { L_0052e260: }
	__asm { test esi, esi }
	__asm { je L_0052e26b }
	__asm { mov ecx, esi }
	__asm { call fn_00517260 }
	__asm { L_0052e26b: }
	__asm { add esi, 0x54 }
	__asm { dec edi }
	__asm { jne L_0052e260 }
	__asm { pop esi }
	__asm { L_0052e272: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0052fe90();
// FUNCTION: ROBLOXSTUDIO 0x0052e280
extern "C" __declspec(naked) void asm_0052e280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0052e2a2 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { nop }
	__asm { L_0052e290: }
	__asm { test esi, esi }
	__asm { je L_0052e29b }
	__asm { mov ecx, esi }
	__asm { call fn_0052fe90 }
	__asm { L_0052e29b: }
	__asm { add esi, 0x4c }
	__asm { dec edi }
	__asm { jne L_0052e290 }
	__asm { pop esi }
	__asm { L_0052e2a2: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0052ff50();
// FUNCTION: ROBLOXSTUDIO 0x0052f940
extern "C" __declspec(naked) void asm_0052f940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0052f963 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0052ff50 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052f963: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d1cc8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005303e0();
// FUNCTION: ROBLOXSTUDIO 0x0052f9a0
extern "C" __declspec(naked) void asm_0052f9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0052f9bc }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_005303e0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052f9bc: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d1d88 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00530450();
// FUNCTION: ROBLOXSTUDIO 0x0052f9d0
extern "C" __declspec(naked) void asm_0052f9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0052f9ec }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00530450 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052f9ec: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d1a88 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00530030();
// FUNCTION: ROBLOXSTUDIO 0x0052fa00
extern "C" __declspec(naked) void asm_0052fa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0052fa23 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00530030 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052fa23: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d1b38 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005304c0();
// FUNCTION: ROBLOXSTUDIO 0x0052fac0
extern "C" __declspec(naked) void asm_0052fac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0052fadc }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_005304c0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052fadc: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d1750 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00530130();
// FUNCTION: ROBLOXSTUDIO 0x0052fb80
extern "C" __declspec(naked) void asm_0052fb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0052fba3 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00530130 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052fba3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d1830 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00530580();
// FUNCTION: ROBLOXSTUDIO 0x0052fc60
extern "C" __declspec(naked) void asm_0052fc60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0052fc7c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00530580 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052fc7c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d1660 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0052ffc0();
// FUNCTION: ROBLOXSTUDIO 0x0052fc90
extern "C" __declspec(naked) void asm_0052fc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0052fcb3 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0052ffc0 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052fcb3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d15d0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00530640();
// FUNCTION: ROBLOXSTUDIO 0x0052fd00
extern "C" __declspec(naked) void asm_0052fd00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0052fd1c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00530640 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052fd1c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d1528 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005306f0();
// FUNCTION: ROBLOXSTUDIO 0x0052fd70
extern "C" __declspec(naked) void asm_0052fd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0052fd8c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_005306f0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052fd8c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d1328 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005307a0();
// FUNCTION: ROBLOXSTUDIO 0x0052fde0
extern "C" __declspec(naked) void asm_0052fde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0052fdfc }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_005307a0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052fdfc: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d1428 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00530240();
// FUNCTION: ROBLOXSTUDIO 0x0052fe30
extern "C" __declspec(naked) void asm_0052fe30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0052fe53 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00530240 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052fe53: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d1228 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x005303a0
extern "C" __declspec(naked) void asm_005303a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_005303b5 }
	__asm { push dword ptr [esi + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005303b5: }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00530d90();
// FUNCTION: ROBLOXSTUDIO 0x00530d30
extern "C" __declspec(naked) void asm_00530d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00530d4c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00530d90 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00530d4c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d1108 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00530e00();
// FUNCTION: ROBLOXSTUDIO 0x00530d60
extern "C" __declspec(naked) void asm_00530d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00530d7c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00530e00 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00530d7c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d11a0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00533de0();
// FUNCTION: ROBLOXSTUDIO 0x00533210
extern "C" __declspec(naked) void asm_00533210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00533de0 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10d6c[];
extern "C" char g_00e10f00[];
extern "C" char g_00e123b8[];
// FUNCTION: ROBLOXSTUDIO 0x00533700
extern "C" __declspec(naked) void asm_00533700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { je L_00533725 }
	__asm { call dword ptr [g_00e10d6c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e123b8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00533725: }
	__asm { call dword ptr [g_00e10f00] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e123b8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_0048c0b0();
// FUNCTION: ROBLOXSTUDIO 0x00536330
extern "C" __declspec(naked) void asm_00536330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_0048c0b0 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00536e00();
extern "C" void fn_0053bca0();
// FUNCTION: ROBLOXSTUDIO 0x00537f90
extern "C" __declspec(naked) void asm_00537f90()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00536e00 }
	__asm { cmp dword ptr [edi + 0x1c], 0 }
	__asm { jne L_00537fc2 }
	__asm { cmp dword ptr [edi + 0x24], 0 }
	__asm { jne L_00537fc2 }
	__asm { cmp dword ptr [edi + 0x2c], 0 }
	__asm { jne L_00537fc2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { lea esi, [edi - 0x20] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, eax }
	__asm { call fn_0053bca0 }
	__asm { and dword ptr [esi + 0x5c], 0xfffffffd }
	__asm { pop esi }
	__asm { L_00537fc2: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" char g_01318fa6[];
extern "C" void fn_00536f20();
extern "C" void fn_0053bca0();
// FUNCTION: ROBLOXSTUDIO 0x00537fd0
extern "C" __declspec(naked) void asm_00537fd0()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00536f20 }
	__asm { cmp dword ptr [edi + 0x1c], 0 }
	__asm { jne L_0053800b }
	__asm { cmp byte ptr [g_01318fa6], 0 }
	__asm { je L_00537ff3 }
	__asm { cmp dword ptr [edi + 0x24], 0 }
	__asm { jne L_0053800b }
	__asm { cmp dword ptr [edi + 0x2c], 0 }
	__asm { jne L_0053800b }
	__asm { L_00537ff3: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { lea esi, [edi - 0x20] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, eax }
	__asm { call fn_0053bca0 }
	__asm { and dword ptr [esi + 0x5c], 0xfffffffd }
	__asm { pop esi }
	__asm { L_0053800b: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" char g_00e10f6c[];
extern "C" void fn_0053a640();
// FUNCTION: ROBLOXSTUDIO 0x0053e200
extern "C" __declspec(naked) void asm_0053e200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0053e231 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0xa8 }
	__asm { call dword ptr [g_00e10f6c] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [eax + 0xb8], 0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { call fn_0053a640 }
	__asm { L_0053e231: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131a221[];
extern "C" void fn_0053e9b0();
// FUNCTION: ROBLOXSTUDIO 0x0053e3d0
extern "C" __declspec(naked) void asm_0053e3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movzx eax, byte ptr [g_0131a221] }
	__asm { sub esp, 8 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_0053e9b0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dl, byte ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], dl }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0053fc70
extern "C" __declspec(naked) void asm_0053fc70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { lea esi, [ecx + 4] }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0053fc70();
extern "C" void fn_00542e50();
// FUNCTION: ROBLOXSTUDIO 0x00542330
extern "C" __declspec(naked) void asm_00542330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x78], 0 }
	__asm { jne L_00542354 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00542354 }
	__asm { sub esp, 0x1c }
	__asm { push esp }
	__asm { call fn_0053fc70 }
	__asm { mov ecx, esi }
	__asm { call fn_00542e50 }
	__asm { L_00542354: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005451a0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00545050
extern "C" __declspec(naked) void asm_00545050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00545077 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_005451a0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00545077 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00545077: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00545f50();
// FUNCTION: ROBLOXSTUDIO 0x00545f10
extern "C" __declspec(naked) void asm_00545f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00545f33 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00545f50 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00545f33: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d3760 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_004f4c70();
// FUNCTION: ROBLOXSTUDIO 0x0054d6c0
extern "C" __declspec(naked) void asm_0054d6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_0054d6f8 }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { push ecx }
	__asm { call fn_004f4c70 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_0054d6f8: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_00e118d4[];
extern "C" char g_00e11bc4[];
// FUNCTION: ROBLOXSTUDIO 0x005502e0
extern "C" __declspec(naked) void asm_005502e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e118d4] }
	__asm { test al, al }
	__asm { je L_005502f3 }
	__asm { call dword ptr [g_00e11bc4] }
	__asm { L_005502f3: }
	__asm { cmp dword ptr [esi + 0x30], 0 }
	__asm { je L_00550311 }
	__asm { push 0x10311b0 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0x10 }
	__asm { L_00550311: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10974[];
extern "C" char g_00e1097c[];
extern "C" char g_00e10c6c[];
extern "C" char g_00e1290c[];
// FUNCTION: ROBLOXSTUDIO 0x005512e0
extern "C" __declspec(naked) void asm_005512e0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10974] }
	__asm { test al, al }
	__asm { jne L_005512ff }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10c6c] }
	__asm { jmp L_0055130c }
	__asm { L_005512ff: }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov byte ptr [esi + 0x14], 1 }
	__asm { call dword ptr [g_00e1097c] }
	__asm { L_0055130c: }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e1290c] }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00555990
extern "C" __declspec(naked) void asm_00555990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe18150 }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_005559b2 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005559b2: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10270[];
// FUNCTION: ROBLOXSTUDIO 0x00555a50
extern "C" __declspec(naked) void asm_00555a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10270] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], esi }
	__asm { je L_00555a76 }
	__asm { mov dword ptr [eax + 4], 0x12d971c }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00555a76: }
	__asm { mov dword ptr [eax + 4], 0x12d9718 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b3b40();
// FUNCTION: ROBLOXSTUDIO 0x00555d20
extern "C" __declspec(naked) void asm_00555d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, 0x51eb851f }
	__asm { mul dword ptr [ecx + 0x74] }
	__asm { push esi }
	__asm { mov esi, edx }
	__asm { shr esi, 5 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp - 8], 1 }
	__asm { call fn_007b3b40 }
	__asm { cmp esi, 1 }
	__asm { lea ecx, [ebp - 4] }
	__asm { lea edx, [ebp - 8] }
	__asm { cmovle ecx, edx }
	__asm { pop esi }
	__asm { add eax, dword ptr [ecx] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x0056f790
extern "C" __declspec(naked) void asm_0056f790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [edx] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea esi, [edx + 4] }
	__asm { push esi }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx], eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0056fb90();
// FUNCTION: ROBLOXSTUDIO 0x0056f9f0
extern "C" __declspec(naked) void asm_0056f9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0056fa0c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0056fb90 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0056fa0c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d70d0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0056fb20();
// FUNCTION: ROBLOXSTUDIO 0x0056fa40
extern "C" __declspec(naked) void asm_0056fa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0056fa63 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0056fb20 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0056fa63: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d7268 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0056fc80();
// FUNCTION: ROBLOXSTUDIO 0x0056fa80
extern "C" __declspec(naked) void asm_0056fa80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0056fa9c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0056fc80 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0056fa9c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d71a0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x005700e0
extern "C" __declspec(naked) void asm_005700e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0x12c0888 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004c92a0();
// FUNCTION: ROBLOXSTUDIO 0x005731c0
extern "C" __declspec(naked) void asm_005731c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0xc4] }
	__asm { test ecx, ecx }
	__asm { je L_005731e8 }
	__asm { call fn_004c92a0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { je L_005731e8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [ecx + eax + 0x124] }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_005731e8: }
	__asm { xor al, al }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004c92a0();
// FUNCTION: ROBLOXSTUDIO 0x005731f0
extern "C" __declspec(naked) void asm_005731f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0xc4] }
	__asm { test ecx, ecx }
	__asm { je L_00573214 }
	__asm { call fn_004c92a0 }
	__asm { test eax, eax }
	__asm { je L_00573214 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [eax + ecx + 0x124] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00573214: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00575810();
// FUNCTION: ROBLOXSTUDIO 0x005757b0
extern "C" __declspec(naked) void asm_005757b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_005757d3 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00575810 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005757d3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d7878 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00575990();
// FUNCTION: ROBLOXSTUDIO 0x00575870
extern "C" __declspec(naked) void asm_00575870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_0057588c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00575990 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0057588c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12d7798 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}
