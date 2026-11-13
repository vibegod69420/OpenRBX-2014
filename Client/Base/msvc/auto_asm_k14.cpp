// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e1054c[];
extern "C" char g_00e10670[];
// FUNCTION: ROBLOXSTUDIO 0x0070ef40
extern "C" __declspec(naked) void asm_0070ef40()
{
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e1054c] }
	__asm { push 0xe47ee8 }
	__asm { call edi }
	__asm { push dword ptr [esp + 0x18] }
	__asm { push 0xe466d4 }
	__asm { call edi }
	__asm { push dword ptr [esp + 0x24] }
	__asm { push 0x100dedc }
	__asm { call edi }
	__asm { mov ebx, dword ptr [esp + 0x34] }
	__asm { mov eax, 0xa }
	__asm { add esp, 0x14 }
	__asm { cmp ebx, eax }
	__asm { cmovg ebx, eax }
	__asm { or esi, 0xffffffff }
	__asm { cmp ebx, 1 }
	__asm { jle L_0070f004 }
	__asm { push 0x1004e20 }
	__asm { call edi }
	__asm { push 0xe47f20 }
	__asm { call edi }
	__asm { mov ebp, dword ptr [esp + 0x24] }
	__asm { L_0070ef96: }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { js L_0070efa5 }
	__asm { cmp esi, ebx }
	__asm { jl L_0070f02a }
	__asm { L_0070efa5: }
	__asm { push 0x1004e20 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { xor esi, esi }
	__asm { test ebx, ebx }
	__asm { jle L_0070efd5 }
	__asm { L_0070efb5: }
	__asm { push dword ptr [ebp + esi*4] }
	__asm { push esi }
	__asm { cmp ebx, 3 }
	__asm { jg L_0070efc6 }
	__asm { push 0xe47f3c }
	__asm { jmp L_0070efcb }
	__asm { L_0070efc6: }
	__asm { push 0xe47f48 }
	__asm { L_0070efcb: }
	__asm { call edi }
	__asm { inc esi }
	__asm { add esp, 0xc }
	__asm { cmp esi, ebx }
	__asm { jl L_0070efb5 }
	__asm { L_0070efd5: }
	__asm { push 0xe47f54 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { call dword ptr [g_00e10670] }
	__asm { mov esi, eax }
	__asm { sub esi, 0x30 }
	__asm { js L_0070effa }
	__asm { cmp esi, ebx }
	__asm { jge L_0070effa }
	__asm { push esi }
	__asm { push 0x1012c70 }
	__asm { call edi }
	__asm { jmp L_0070ef96 }
	__asm { L_0070effa: }
	__asm { push esi }
	__asm { push 0xe47f58 }
	__asm { call edi }
	__asm { jmp L_0070ef96 }
	__asm { L_0070f004: }
	__asm { jne L_0070f018 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { push dword ptr [eax] }
	__asm { push 0xe47f74 }
	__asm { call edi }
	__asm { add esp, 8 }
	__asm { jmp L_0070f022 }
	__asm { L_0070f018: }
	__asm { push 0xe47f90 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_0070f022: }
	__asm { call dword ptr [g_00e10670] }
	__asm { xor esi, esi }
	__asm { L_0070f02a: }
	__asm { push 0xe47ee8 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_0040f890();
extern "C" void fn_00701aa0();
extern "C" void fn_00718ee0();
extern "C" void fn_0071a910();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00719020
extern "C" __declspec(naked) void asm_00719020()
{
	__asm { push -1 }
	__asm { push 0xd1995b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push dword ptr [esp + 0x38] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esp + 0x38] }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { push dword ptr [esp + 0x38] }
	__asm { call fn_00718ee0 }
	__asm { mov eax, dword ptr [esp + 0x40] }
	__asm { mov ecx, dword ptr [esp + 0x3c] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov dword ptr [esi], 0xe48034 }
	__asm { mov dword ptr [esi + 0x60], ecx }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { call fn_0071a910 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_0071a910 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push 0xe4816c }
	__asm { push eax }
	__asm { call fn_00701aa0 }
	__asm { add esp, 0x10 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov byte ptr [esp + 0x34], 1 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { jb L_007190b7 }
	__asm { push dword ptr [esp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007190b7: }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x28 }
	__asm { ret 0x14 }
}

extern "C" void fn_00403540();
extern "C" void fn_0040f890();
extern "C" void fn_00701aa0();
extern "C" void fn_00718ee0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007190d0
extern "C" __declspec(naked) void asm_007190d0()
{
	__asm { push -1 }
	__asm { push 0xd1998b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [esp + 0x40] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esp + 0x40] }
	__asm { mov dword ptr [esp + 0x14], esi }
	__asm { push dword ptr [esp + 0x40] }
	__asm { call fn_00718ee0 }
	__asm { mov edi, dword ptr [esp + 0x44] }
	__asm { lea ecx, [esi + 0x60] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], 0xe4803c }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ebx, dword ptr [esp + 0x48] }
	__asm { lea ecx, [esi + 0x78] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push ebx }
	__asm { mov byte ptr [esp + 0x3c], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { mov byte ptr [esp + 0x30], 2 }
	__asm { jb L_00719166 }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { L_00719166: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0071916e }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_0071916e: }
	__asm { push ebx }
	__asm { push edi }
	__asm { lea eax, [esp + 0x18] }
	__asm { push 0xe48198 }
	__asm { push eax }
	__asm { call fn_00701aa0 }
	__asm { add esp, 0x10 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov byte ptr [esp + 0x3c], 3 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { jb L_007191a7 }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007191a7: }
	__asm { mov ecx, dword ptr [esp + 0x28] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x28 }
	__asm { ret 0x14 }
}

extern "C" void fn_00403540();
extern "C" void fn_0040f890();
extern "C" void fn_00701aa0();
extern "C" void fn_00718ee0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007191c0
extern "C" __declspec(naked) void asm_007191c0()
{
	__asm { push -1 }
	__asm { push 0xd199bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [esp + 0x40] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esp + 0x40] }
	__asm { mov dword ptr [esp + 0x14], esi }
	__asm { push dword ptr [esp + 0x40] }
	__asm { call fn_00718ee0 }
	__asm { mov edi, dword ptr [esp + 0x44] }
	__asm { lea ecx, [esi + 0x60] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], 0xe48044 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ebx, dword ptr [esp + 0x48] }
	__asm { lea ecx, [esi + 0x78] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push ebx }
	__asm { mov byte ptr [esp + 0x3c], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { mov byte ptr [esp + 0x30], 2 }
	__asm { jb L_00719256 }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { L_00719256: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0071925e }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_0071925e: }
	__asm { push ebx }
	__asm { push edi }
	__asm { lea eax, [esp + 0x18] }
	__asm { push 0xe481c4 }
	__asm { push eax }
	__asm { call fn_00701aa0 }
	__asm { add esp, 0x10 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov byte ptr [esp + 0x3c], 3 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { jb L_00719297 }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00719297: }
	__asm { mov ecx, dword ptr [esp + 0x28] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x28 }
	__asm { ret 0x14 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00403540();
extern "C" void fn_006f1820();
extern "C" void fn_0070da00();
extern "C" void fn_0071a820();
extern "C" void fn_0071aa90();
extern "C" void fn_0071b5e0();
extern "C" void fn_0071ed40();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007192b0
extern "C" __declspec(naked) void asm_007192b0()
{
	__asm { push -1 }
	__asm { push 0xd199eb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 8 }
	__asm { mov dword ptr [esp + 8], edi }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00719305 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00719305: }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [eax], edi }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { call fn_0070da00 }
	__asm { push dword ptr [esp + 0x3c] }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov byte ptr [esp + 0x34], 1 }
	__asm { call fn_0071aa90 }
	__asm { mov eax, dword ptr [edi + 0x54] }
	__asm { inc eax }
	__asm { cmp byte ptr [edi + 0x5b], 0 }
	__asm { mov byte ptr [esp + 0x30], 2 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov dword ptr [edi + 0x2c], 1 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { jne L_00719370 }
	__asm { lea eax, [edi + 0x5c] }
	__asm { push eax }
	__asm { call fn_0071a820 }
	__asm { lea eax, [edi + 0x74] }
	__asm { push eax }
	__asm { call fn_0071a820 }
	__asm { add esp, 8 }
	__asm { L_00719370: }
	__asm { mov esi, dword ptr [esp + 0x38] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0071ed40 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [edi + 0x4c], 0 }
	__asm { mov byte ptr [esp + 0x30], 3 }
	__asm { jne L_0071939e }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { cmp ecx, esi }
	__asm { je L_0071939e }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00403540 }
	__asm { L_0071939e: }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { push 1 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x14] }
	__asm { call fn_0071b5e0 }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { lea eax, [esp + 0x10] }
	__asm { cmovae eax, dword ptr [esp + 0x10] }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_006f1820 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_007193dd }
	__asm { push dword ptr [esp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007193dd: }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x28 }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00719760();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00719900
extern "C" __declspec(naked) void asm_00719900()
{
	__asm { push -1 }
	__asm { push 0xd19a78 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x58] }
	__asm { push 0 }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esp + 0x58], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov byte ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [edi + 0x30], 9 }
	__asm { mov dword ptr [edi + 0x34], 9 }
	__asm { mov dword ptr [esp + 0x50], 0 }
	__asm { mov dword ptr [esp + 0xc], 1 }
	__asm { mov edi, edi }
	__asm { L_00719990: }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00719760 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [esp + 0x50], 1 }
	__asm { cmp edi, esi }
	__asm { je L_007199b6 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_007199b6: }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { mov al, byte ptr [esi + 0x18] }
	__asm { mov byte ptr [edi + 0x18], al }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov byte ptr [esp + 0x50], 0 }
	__asm { jb L_007199f8 }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007199f8: }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { cmp eax, 6 }
	__asm { je L_00719990 }
	__asm { cmp eax, 8 }
	__asm { je L_00719990 }
	__asm { mov ecx, dword ptr [esp + 0x48] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x48 }
	__asm { ret 4 }
}

extern "C" void fn_00402fd0();
extern "C" void fn_007190d0();
extern "C" void fn_0071a400();
extern "C" void fn_0071b450();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0071a4f0
extern "C" __declspec(naked) void asm_0071a4f0()
{
	__asm { push -1 }
	__asm { push 0xd19b18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc8 }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_0071a400 }
	__asm { mov esi, dword ptr [esp + 0xe0] }
	__asm { mov dword ptr [esp + 0xd8], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0071a535 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0071a537 }
	__asm { L_0071a535: }
	__asm { mov eax, esi }
	__asm { L_0071a537: }
	__asm { push dword ptr [esi + 0x10] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x20] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jne L_0071a57a }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { jb L_0071a561 }
	__asm { push dword ptr [esp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071a561: }
	__asm { mov ecx, dword ptr [esp + 0xd0] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0xd4 }
	__asm { ret 4 }
	__asm { L_0071a57a: }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0071b450 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [esp + 0x30] }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push dword ptr [esp + 0x30] }
	__asm { lea ecx, [esp + 0x50] }
	__asm { push eax }
	__asm { call fn_007190d0 }
	__asm { push 0x1102f24 }
	__asm { lea eax, [esp + 0x44] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006eb2a0();
extern "C" void fn_006f5410();
extern "C" void fn_00709640();
extern "C" void fn_0070a4d0();
extern "C" void fn_0070da00();
extern "C" void fn_0071b400();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0071a820
extern "C" __declspec(naked) void asm_0071a820()
{
	__asm { push -1 }
	__asm { push 0xd19b56 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea ecx, [esp + 8] }
	__asm { call fn_0070da00 }
	__asm { mov ebx, dword ptr [esp + 0x40] }
	__asm { lea eax, [esp + 8] }
	__asm { add ebx, 4 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { call fn_0071b400 }
	__asm { mov ecx, ebx }
	__asm { call fn_00709640 }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebx + 0xc], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { cmp dword ptr [esp + 0xc], esi }
	__asm { jle L_0071a8e7 }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { L_0071a885: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { call fn_0070a4d0 }
	__asm { add esp, 8 }
	__asm { lea ecx, [esp + 0x44] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [esp + 0x44], 1 }
	__asm { call fn_006eb2a0 }
	__asm { mov byte ptr [eax + 0x18], 1 }
	__asm { cmp dword ptr [esp + 0x30], 0x10 }
	__asm { mov byte ptr [esp + 0x3c], 0 }
	__asm { jb L_0071a8c7 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071a8c7: }
	__asm { inc esi }
	__asm { add edi, 0x18 }
	__asm { mov dword ptr [esp + 0x30], 0xf }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { cmp esi, dword ptr [esp + 0x10] }
	__asm { jl L_0071a885 }
	__asm { pop edi }
	__asm { L_0071a8e7: }
	__asm { lea ecx, [esp + 8] }
	__asm { mov dword ptr [esp + 0x38], 0xffffffff }
	__asm { call fn_006f5410 }
	__asm { mov ecx, dword ptr [esp + 0x30] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x34 }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0071a970();
// FUNCTION: ROBLOXSTUDIO 0x0071aa90
extern "C" __declspec(naked) void asm_0071aa90()
{
	__asm { push -1 }
	__asm { push 0xd18fc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 8], edi }
	__asm { mov esi, dword ptr [esp + 0x1c] }
	__asm { movzx eax, byte ptr [esi] }
	__asm { push -1 }
	__asm { mov byte ptr [edi], al }
	__asm { movzx eax, byte ptr [esi + 1] }
	__asm { mov byte ptr [edi + 1], al }
	__asm { movzx eax, byte ptr [esi + 2] }
	__asm { mov byte ptr [edi + 2], al }
	__asm { movzx eax, byte ptr [esi + 3] }
	__asm { mov byte ptr [edi + 3], al }
	__asm { movzx eax, byte ptr [esi + 4] }
	__asm { mov byte ptr [edi + 4], al }
	__asm { movzx eax, byte ptr [esi + 5] }
	__asm { mov byte ptr [edi + 5], al }
	__asm { movzx eax, byte ptr [esi + 6] }
	__asm { mov byte ptr [edi + 6], al }
	__asm { movzx eax, byte ptr [esi + 7] }
	__asm { mov byte ptr [edi + 7], al }
	__asm { movzx eax, byte ptr [esi + 8] }
	__asm { mov byte ptr [edi + 8], al }
	__asm { movzx eax, byte ptr [esi + 9] }
	__asm { mov byte ptr [edi + 9], al }
	__asm { movzx eax, byte ptr [esi + 0xa] }
	__asm { mov byte ptr [edi + 0xa], al }
	__asm { lea ecx, [edi + 0xc] }
	__asm { push 0 }
	__asm { lea eax, [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { movzx eax, byte ptr [esi + 0x28] }
	__asm { mov byte ptr [edi + 0x28], al }
	__asm { movzx eax, byte ptr [esi + 0x29] }
	__asm { mov byte ptr [edi + 0x29], al }
	__asm { movzx eax, byte ptr [esi + 0x2a] }
	__asm { mov byte ptr [edi + 0x2a], al }
	__asm { movzx eax, byte ptr [esi + 0x2b] }
	__asm { mov byte ptr [edi + 0x2b], al }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0xe47b30 }
	__asm { call fn_0071a970 }
	__asm { lea eax, [esi + 0x48] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x48] }
	__asm { mov byte ptr [esp + 0x18], 1 }
	__asm { mov dword ptr [edi + 0x44], 0xe47b30 }
	__asm { call fn_0071a970 }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 4 }
}

extern "C" void fn_00402f60();
extern "C" void fn_00701c40();
// FUNCTION: ROBLOXSTUDIO 0x0071b200
extern "C" __declspec(naked) void asm_0071b200()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { jne L_0071b20f }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_0071b20f: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0071b21e }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_0071b220 }
	__asm { L_0071b21e: }
	__asm { mov eax, edi }
	__asm { L_0071b220: }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push dword ptr [edi + 0x10] }
	__asm { push eax }
	__asm { call fn_00701c40 }
	__asm { xor edx, edx }
	__asm { mov ecx, eax }
	__asm { div dword ptr [esi + 0xc] }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esp + 0x14], ecx }
	__asm { mov esi, dword ptr [esi + edx*4] }
	__asm { test esi, esi }
	__asm { je L_0071b294 }
	__asm { L_0071b243: }
	__asm { cmp dword ptr [esi + 0x1c], ecx }
	__asm { jne L_0071b28d }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov ebx, dword ptr [edi + 0x10] }
	__asm { jb L_0071b255 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { jmp L_0071b257 }
	__asm { L_0071b255: }
	__asm { mov ecx, edi }
	__asm { L_0071b257: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov ebp, dword ptr [esi + 0x10] }
	__asm { jb L_0071b264 }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_0071b266 }
	__asm { L_0071b264: }
	__asm { mov edx, esi }
	__asm { L_0071b266: }
	__asm { mov eax, ebx }
	__asm { cmp ebp, ebx }
	__asm { cmovb eax, ebp }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_0071b289 }
	__asm { cmp ebp, ebx }
	__asm { jb L_0071b289 }
	__asm { cmp ebp, ebx }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_0071b29d }
	__asm { L_0071b289: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { L_0071b28d: }
	__asm { mov esi, dword ptr [esi + 0x20] }
	__asm { test esi, esi }
	__asm { jne L_0071b243 }
	__asm { L_0071b294: }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_0071b29d: }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_0071b140();
extern "C" void fn_0071b340();
// FUNCTION: ROBLOXSTUDIO 0x0071b2b0
extern "C" __declspec(naked) void asm_0071b2b0()
{
	__asm { push ebx }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { cmp ebp, ebx }
	__asm { je L_0071b331 }
	__asm { mov eax, dword ptr [ebp + 4] }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { lea edx, [eax*4] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { cmp dword ptr [ebx + 0xc], esi }
	__asm { jbe L_0071b330 }
	__asm { push edi }
	__asm { L_0071b2e4: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [eax + esi*4] }
	__asm { test edi, edi }
	__asm { je L_0071b31f }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { jne L_0071b2f9 }
	__asm { xor eax, eax }
	__asm { jmp L_0071b302 }
	__asm { L_0071b2f9: }
	__asm { lea eax, [ebx + 0x10] }
	__asm { push eax }
	__asm { call fn_0071b140 }
	__asm { L_0071b302: }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x1c] }
	__asm { lea eax, [edi + 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0071b340 }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { jmp L_0071b329 }
	__asm { L_0071b31f: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [eax + esi*4], 0 }
	__asm { L_0071b329: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebx + 0xc] }
	__asm { jb L_0071b2e4 }
	__asm { pop edi }
	__asm { L_0071b330: }
	__asm { pop esi }
	__asm { L_0071b331: }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" char g_00e105fc[];
extern "C" char g_011dd418[];
extern "C" void fn_004039a0();
extern "C" void fn_006d8660();
extern "C" void fn_006d86d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0071b4c0
extern "C" __declspec(naked) void asm_0071b4c0()
{
	__asm { push -1 }
	__asm { push 0xd19bf9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ebp, dword ptr [edi] }
	__asm { lea esi, [edi + 8] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { jne L_0071b59a }
	__asm { call fn_006d8660 }
	__asm { cmp dword ptr [g_011dd418], ebx }
	__asm { je L_0071b54c }
	__asm { push 0xe37130 }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { call fn_004039a0 }
	__asm { mov dword ptr [esp + 0x38], ebx }
	__asm { mov ebx, 1 }
	__asm { push ebx }
	__asm { push 0x9e }
	__asm { push 0xe370e8 }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { push 0xe37160 }
	__asm { mov dword ptr [esp + 0x28], ebx }
	__asm { call dword ptr [g_011dd418] }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [esp + 0x13], bl }
	__asm { test al, al }
	__asm { jne L_0071b551 }
	__asm { L_0071b54c: }
	__asm { mov byte ptr [esp + 0x13], 0 }
	__asm { L_0071b551: }
	__asm { mov dword ptr [esp + 0x38], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_0071b586 }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { jb L_0071b571 }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071b571: }
	__asm { mov dword ptr [esp + 0x2c], 0xf }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov byte ptr [esp + 0x18], 0 }
	__asm { L_0071b586: }
	__asm { cmp byte ptr [esp + 0x13], 0 }
	__asm { je L_0071b595 }
	__asm { push -1 }
	__asm { call dword ptr [g_00e105fc] }
	__asm { L_0071b595: }
	__asm { call fn_006d86d0 }
	__asm { L_0071b59a: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [esp + 0x40] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea edx, [esp + 0x40] }
	__asm { cmovl edx, esi }
	__asm { mov esi, dword ptr [edx] }
	__asm { add esi, eax }
	__asm { mov edx, ebp }
	__asm { cmp eax, esi }
	__asm { jae L_0071b5c1 }
	__asm { L_0071b5b3: }
	__asm { test eax, eax }
	__asm { je L_0071b5bb }
	__asm { mov cl, byte ptr [edx] }
	__asm { mov byte ptr [eax], cl }
	__asm { L_0071b5bb: }
	__asm { inc eax }
	__asm { inc edx }
	__asm { cmp eax, esi }
	__asm { jb L_0071b5b3 }
	__asm { L_0071b5c1: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push ebp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esp + 0x30] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x2c }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x0071b710
extern "C" __declspec(naked) void asm_0071b710()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { lea ecx, [esi + 0x4c] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { movzx eax, byte ptr [edi + 4] }
	__asm { mov byte ptr [esi + 0x38], al }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { movzx eax, byte ptr [edi + 0x14] }
	__asm { mov byte ptr [esi + 0x48], al }
	__asm { lea eax, [edi + 0x18] }
	__asm { cmp ecx, eax }
	__asm { je L_0071b751 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_0071b751: }
	__asm { add edi, 0x30 }
	__asm { lea ecx, [esi + 0x64] }
	__asm { cmp ecx, edi }
	__asm { je L_0071b765 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00403540 }
	__asm { L_0071b765: }
	__asm { mov eax, dword ptr [esi + 0x7c] }
	__asm { imul eax, dword ptr [esi + 0x40] }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { dec ecx }
	__asm { test eax, eax }
	__asm { jg L_0071b778 }
	__asm { xor eax, eax }
	__asm { jmp L_0071b77d }
	__asm { L_0071b778: }
	__asm { cmp eax, ecx }
	__asm { cmovge eax, ecx }
	__asm { L_0071b77d: }
	__asm { cmp dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x80], eax }
	__asm { mov edx, 0x1019028 }
	__asm { mov eax, 0x1004e20 }
	__asm { cmovne edx, eax }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_0071b7ad }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [esi + 0x84] }
	__asm { call fn_004038a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_0071b7ad: }
	__asm { mov ecx, edx }
	__asm { lea edi, [ecx + 1] }
	__asm { L_0071b7b2: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0071b7b2 }
	__asm { sub ecx, edi }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [esi + 0x84] }
	__asm { call fn_004038a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_0071b5e0();
extern "C" void fn_0071c840();
// FUNCTION: ROBLOXSTUDIO 0x0071bc20
extern "C" __declspec(naked) void asm_0071bc20()
{
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_0071bc9c }
	__asm { xor ebx, ebx }
	__asm { cmp dword ptr [edi + 0x80], ebx }
	__asm { jle L_0071bc90 }
	__asm { L_0071bc35: }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { cmp ecx, dword ptr [edi + 0x2c] }
	__asm { jge L_0071bc4c }
	__asm { add eax, ecx }
	__asm { je L_0071bc47 }
	__asm { mov byte ptr [eax], 0x20 }
	__asm { L_0071bc47: }
	__asm { inc dword ptr [edi + 0x28] }
	__asm { jmp L_0071bc87 }
	__asm { L_0071bc4c: }
	__asm { lea edx, [esp + 0xe] }
	__asm { cmp edx, eax }
	__asm { jb L_0071bc6e }
	__asm { add eax, ecx }
	__asm { cmp edx, eax }
	__asm { jae L_0071bc6e }
	__asm { lea eax, [esp + 0xf] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x24] }
	__asm { mov byte ptr [esp + 0x13], 0x20 }
	__asm { call fn_0071c840 }
	__asm { jmp L_0071bc87 }
	__asm { L_0071bc6e: }
	__asm { lea eax, [ecx + 1] }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x24] }
	__asm { call fn_0071b5e0 }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov byte ptr [ecx + eax - 1], 0x20 }
	__asm { L_0071bc87: }
	__asm { inc ebx }
	__asm { cmp ebx, dword ptr [edi + 0x80] }
	__asm { jl L_0071bc35 }
	__asm { L_0071bc90: }
	__asm { mov eax, dword ptr [edi + 0x80] }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { L_0071bc9c: }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { cmp ecx, dword ptr [edi + 0x2c] }
	__asm { jge L_0071bcb6 }
	__asm { mov bl, byte ptr [esp + 0x14] }
	__asm { add eax, ecx }
	__asm { je L_0071bcb1 }
	__asm { mov byte ptr [eax], bl }
	__asm { L_0071bcb1: }
	__asm { inc dword ptr [edi + 0x28] }
	__asm { jmp L_0071bcf7 }
	__asm { L_0071bcb6: }
	__asm { lea edx, [esp + 0x14] }
	__asm { cmp edx, eax }
	__asm { jb L_0071bcdb }
	__asm { add eax, ecx }
	__asm { cmp edx, eax }
	__asm { jae L_0071bcdb }
	__asm { mov bl, byte ptr [esp + 0x14] }
	__asm { lea eax, [esp + 0xf] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x24] }
	__asm { mov byte ptr [esp + 0x13], bl }
	__asm { call fn_0071c840 }
	__asm { jmp L_0071bcf7 }
	__asm { L_0071bcdb: }
	__asm { lea eax, [ecx + 1] }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x24] }
	__asm { call fn_0071b5e0 }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov bl, byte ptr [esp + 0x14] }
	__asm { mov byte ptr [ecx + eax - 1], bl }
	__asm { L_0071bcf7: }
	__asm { cmp bl, 0xd }
	__asm { je L_0071bcff }
	__asm { inc dword ptr [edi + 4] }
	__asm { L_0071bcff: }
	__asm { cmp bl, 0x22 }
	__asm { jne L_0071bd0e }
	__asm { cmp byte ptr [edi + 8], 0 }
	__asm { sete al }
	__asm { mov byte ptr [edi + 8], al }
	__asm { L_0071bd0e: }
	__asm { cmp bl, 0xa }
	__asm { sete al }
	__asm { mov byte ptr [edi], al }
	__asm { test al, al }
	__asm { je L_0071bd21 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { L_0071bd21: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ecx }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_0070da00();
extern "C" void fn_0071b710();
// FUNCTION: ROBLOXSTUDIO 0x0071bd30
extern "C" __declspec(naked) void asm_0071bd30()
{
	__asm { push -1 }
	__asm { push 0xd19c64 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push -1 }
	__asm { lea ecx, [edi + 0xc] }
	__asm { mov byte ptr [edi], 1 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [esp + 0x14], edi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x24] }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_0070da00 }
	__asm { lea esi, [edi + 0x34] }
	__asm { push 4 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [esi], 1 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0x50 }
	__asm { mov dword ptr [esi + 0xc], 4 }
	__asm { mov byte ptr [esi + 0x14], 1 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0x100f9d0 }
	__asm { mov byte ptr [esp + 0x1c], 1 }
	__asm { mov dword ptr [esp + 0x24], esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { push 5 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf14aa8 }
	__asm { mov byte ptr [esp + 0x1c], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x98], 0xf }
	__asm { mov dword ptr [edi + 0x94], 0 }
	__asm { mov byte ptr [edi + 0x84], 0 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esp + 0x18], 4 }
	__asm { call fn_0071b710 }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 8 }
}

extern "C" void fn_004038a0();
extern "C" void fn_0070da00();
extern "C" void fn_0071b710();
// FUNCTION: ROBLOXSTUDIO 0x0071be50
extern "C" __declspec(naked) void asm_0071be50()
{
	__asm { push -1 }
	__asm { push 0xd19ca8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0xc] }
	__asm { mov byte ptr [edi], 1 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov dword ptr [esp + 0x10], edi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [edi + 0x24] }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { call fn_0070da00 }
	__asm { lea esi, [edi + 0x34] }
	__asm { push 4 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [esi], 1 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0x50 }
	__asm { mov dword ptr [esi + 0xc], 4 }
	__asm { mov byte ptr [esi + 0x14], 1 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0x100f9d0 }
	__asm { mov byte ptr [esp + 0x20], 1 }
	__asm { mov dword ptr [esp + 0x14], esi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { push 5 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xf14aa8 }
	__asm { mov byte ptr [esp + 0x20], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x98], 0xf }
	__asm { mov dword ptr [edi + 0x94], 0 }
	__asm { mov byte ptr [edi + 0x84], 0 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esp + 0x1c], 4 }
	__asm { call fn_0071b710 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x14 }
	__asm { ret 4 }
}

extern "C" char g_00e10550[];
extern "C" char g_00e10554[];
extern "C" char g_00e1055c[];
extern "C" void fn_0070b590();
extern "C" void fn_0070bbe0();
extern "C" void fn_0070bfc0();
extern "C" void fn_0070cb10();
extern "C" void fn_007208a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0071bf70
extern "C" __declspec(naked) void asm_0071bf70()
{
	__asm { push -1 }
	__asm { push 0xd19cba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [esp + 8] }
	__asm { lea esi, [edi + 0xc] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_007208a0 }
	__asm { add esp, 8 }
	__asm { lea eax, [esp + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { call fn_0070b590 }
	__asm { mov ecx, eax }
	__asm { call fn_0070bfc0 }
	__asm { test al, al }
	__asm { jne L_0071bfcd }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { call fn_0070b590 }
	__asm { mov ecx, eax }
	__asm { call fn_0070bbe0 }
	__asm { L_0071bfcd: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0071bfd5 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_0071bfd5: }
	__asm { push 0xe474cc }
	__asm { push esi }
	__asm { call fn_0070b590 }
	__asm { mov ecx, eax }
	__asm { call fn_0070cb10 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x28] }
	__asm { push 1 }
	__asm { push dword ptr [edi + 0x24] }
	__asm { call dword ptr [g_00e10554] }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [esp + 0x30], 0 }
	__asm { je L_0071c00c }
	__asm { push esi }
	__asm { call dword ptr [g_00e1055c] }
	__asm { add esp, 4 }
	__asm { L_0071c00c: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10550] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [esp + 0x1c], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_0071c02a }
	__asm { push dword ptr [esp] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071c02a: }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x24 }
	__asm { ret 4 }
}

extern "C" void fn_0071cc50();
extern "C" void fn_00cf6a20();
// FUNCTION: ROBLOXSTUDIO 0x0071c980
extern "C" __declspec(naked) void asm_0071c980()
{
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { lea eax, [ecx + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x30] }
	__asm { push eax }
	__asm { mov ebx, dword ptr [edi + 0xc] }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x1c], ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x2c], ebp }
	__asm { mov dword ptr [esp + 0x30], esi }
	__asm { mov dword ptr [esp + 0x40], ecx }
	__asm { mov dword ptr [esp + 0x24], ecx }
	__asm { mov dword ptr [esp + 0x28], ebx }
	__asm { call fn_0071cc50 }
	__asm { add esp, 0x10 }
	__asm { push esi }
	__asm { push ebp }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6a20 }
	__asm { push ebx }
	__asm { push dword ptr [esp + 0x34] }
	__asm { mov ebx, dword ptr [esp + 0x18] }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov edi, edx }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6a20 }
	__asm { add esi, eax }
	__asm { adc edi, edx }
	__asm { add esi, dword ptr [esp + 0x24] }
	__asm { mov eax, ebx }
	__asm { adc edi, dword ptr [esp + 0x28] }
	__asm { mov dword ptr [ebx], esi }
	__asm { mov dword ptr [ebx + 4], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x1c }
	__asm { ret 4 }
}

extern "C" char g_00e10554[];
extern "C" char g_00e1067c[];
extern "C" void fn_0072a2c0();
extern "C" void fn_00cf6a60();
// FUNCTION: ROBLOXSTUDIO 0x0071d650
extern "C" __declspec(naked) void asm_0071d650()
{
	__asm { mov eax, 0x2008 }
	__asm { call fn_00cf6a60 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x2014] }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x2014] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x2024] }
	__asm { push 1 }
	__asm { push 0x2000 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { call ebp }
	__asm { mov esi, eax }
	__asm { add esp, 0x10 }
	__asm { test esi, esi }
	__asm { jle L_0071d6cb }
	__asm { L_0071d692: }
	__asm { push dword ptr [esp + 0x2028] }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push esi }
	__asm { push 1 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10554] }
	__asm { add esp, 0x10 }
	__asm { cmp eax, esi }
	__asm { jne L_0071d703 }
	__asm { add dword ptr [edi + 0x1c], esi }
	__asm { push 1 }
	__asm { push 0x2000 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call ebp }
	__asm { mov esi, eax }
	__asm { add esp, 0x10 }
	__asm { test esi, esi }
	__asm { jg L_0071d692 }
	__asm { test esi, esi }
	__asm { L_0071d6cb: }
	__asm { jns L_0071d74c }
	__asm { push 4 }
	__asm { push 8 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call ebp }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 8 }
	__asm { jge L_0071d72a }
	__asm { mov eax, dword ptr [esp + 0x202c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov dword ptr [eax], 0x14 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { add esp, 0x2008 }
	__asm { ret }
	__asm { L_0071d703: }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { push 6 }
	__asm { push dword ptr [esp + 0x2034] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x2008 }
	__asm { ret }
	__asm { L_0071d72a: }
	__asm { mov ecx, dword ptr [esp + 0x202c] }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { add esp, 0x2008 }
	__asm { ret }
	__asm { L_0071d74c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { add esp, 0x2008 }
	__asm { ret }
}

extern "C" char g_00e10554[];
extern "C" char g_00e105b0[];
extern "C" char g_00e1065c[];
extern "C" char g_00e1067c[];
extern "C" char g_00e106a8[];
extern "C" void fn_00728f60();
extern "C" void fn_007294a0();
extern "C" void fn_0072a2c0();
extern "C" void fn_0072a2e0();
// FUNCTION: ROBLOXSTUDIO 0x0071db20
extern "C" __declspec(naked) void asm_0071db20()
{
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x14] }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x1c] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x24] }
	__asm { push edi }
	__asm { lea edi, [ebx + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { push ebp }
	__asm { call fn_007294a0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { js L_0071dbb9 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push ebx }
	__asm { call fn_00728f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_0071dbfa }
	__asm { push esi }
	__asm { call dword ptr [g_00e106a8] }
	__asm { push edi }
	__asm { mov ebx, eax }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_0072a2e0 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { js L_0071dbb9 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { lea eax, [esp + 0x14] }
	__asm { push 0xe48238 }
	__asm { push 9 }
	__asm { push eax }
	__asm { call dword ptr [g_00e105b0] }
	__asm { push 0 }
	__asm { lea eax, [ebx - 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e1065c] }
	__asm { add esp, 0x1c }
	__asm { test eax, eax }
	__asm { jns L_0071dbc4 }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { push 4 }
	__asm { push edi }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { L_0071dbb9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret }
	__asm { L_0071dbc4: }
	__asm { push esi }
	__asm { push 1 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push 8 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10554] }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 1 }
	__asm { je L_0071dbfa }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { push 6 }
	__asm { push edi }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret }
	__asm { L_0071dbfa: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret }
}

extern "C" char g_00e1067c[];
extern "C" char g_00e107f0[];
extern "C" void fn_0072a260();
extern "C" void fn_0072a3d0();
extern "C" void fn_0072a990();
extern "C" void fn_0072aa50();
// FUNCTION: ROBLOXSTUDIO 0x0071e1f0
extern "C" __declspec(naked) void asm_0071e1f0()
{
	__asm { sub esp, 0x14 }
	__asm { lea eax, [esp + 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0072aa50 }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_0071e251 }
	__asm { mov dword ptr [esp + 4], eax }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { call fn_0072a260 }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call fn_0072a990 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 1 }
	__asm { jne L_0071e23c }
	__asm { call dword ptr [g_00e1067c] }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_0071e23c: }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0071e24a }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0071e24a: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { add esp, 0x14 }
	__asm { ret }
	__asm { L_0071e251: }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call dword ptr [g_00e107f0] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { jne L_0071e282 }
	__asm { push esi }
	__asm { call fn_0072a3d0 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0071e27b }
	__asm { mov dword ptr [eax], 0xe }
	__asm { L_0071e27b: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { add esp, 0x14 }
	__asm { ret }
	__asm { L_0071e282: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { add esp, 0x14 }
	__asm { ret }
}

extern "C" char g_00e10614[];
extern "C" char g_00e1067c[];
extern "C" char g_00e106b8[];
extern "C" void fn_0072a2e0();
// FUNCTION: ROBLOXSTUDIO 0x0071e3d0
extern "C" __declspec(naked) void asm_0071e3d0()
{
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x18] }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_0071e497 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_0071e497 }
	__asm { cmp word ptr [eax + 0x14], 0x16 }
	__asm { jne L_0071e497 }
	__asm { push 0xe }
	__asm { push 0xe48258 }
	__asm { push dword ptr [eax + 0x10] }
	__asm { call dword ptr [g_00e10614] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_0071e497 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0xe] }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x12] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call dword ptr [g_00e1067c] }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x10 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e106b8] }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { cmp edi, -1 }
	__asm { jne L_0071e460 }
	__asm { call dword ptr [g_00e1067c] }
	__asm { cmp dword ptr [eax], 0 }
	__asm { jne L_0071e496 }
	__asm { L_0071e460: }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_0071e46d }
	__asm { cmp byte ptr [eax], 0 }
	__asm { jne L_0071e496 }
	__asm { L_0071e46d: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { push 0 }
	__asm { lea ecx, [esp + 0xc] }
	__asm { push ecx }
	__asm { push dword ptr [eax + 8] }
	__asm { push dword ptr [eax + 0xc] }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_0072a2e0 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { js L_0071e496 }
	__asm { cmp dword ptr [esp + 8], edi }
	__asm { jne L_0071e496 }
	__asm { or dword ptr [esi + 0x14], 1 }
	__asm { L_0071e496: }
	__asm { pop edi }
	__asm { L_0071e497: }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" char g_00e10538[];
// FUNCTION: ROBLOXSTUDIO 0x0071e960
extern "C" __declspec(naked) void asm_0071e960()
{
	__asm { mov edx, dword ptr [esp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x14] }
	__asm { cmp edx, ebx }
	__asm { jl L_0071ea3d }
	__asm { test ebx, ebx }
	__asm { je L_0071ea3d }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x14] }
	__asm { lea ecx, [eax - 1] }
	__asm { sub eax, ecx }
	__asm { push esi }
	__asm { sub eax, ebx }
	__asm { add eax, edx }
	__asm { push edi }
	__asm { push eax }
	__asm { movzx eax, byte ptr [ebp] }
	__asm { push eax }
	__asm { lea eax, [ecx + 1] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10538] }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { test edi, edi }
	__asm { je L_0071ea2f }
	__asm { lea ecx, [ebp + 1] }
	__asm { lea eax, [ebx - 1] }
	__asm { mov dword ptr [esp + 0x20], ecx }
	__asm { L_0071e9b4: }
	__asm { lea ebp, [edi + 1] }
	__asm { mov edx, ebp }
	__asm { mov esi, ecx }
	__asm { sub eax, 4 }
	__asm { jb L_0071e9d1 }
	__asm { L_0071e9c0: }
	__asm { mov ecx, dword ptr [edx] }
	__asm { cmp ecx, dword ptr [esi] }
	__asm { jne L_0071e9d6 }
	__asm { add edx, 4 }
	__asm { add esi, 4 }
	__asm { sub eax, 4 }
	__asm { jae L_0071e9c0 }
	__asm { L_0071e9d1: }
	__asm { cmp eax, -4 }
	__asm { je L_0071ea36 }
	__asm { L_0071e9d6: }
	__asm { mov cl, byte ptr [edx] }
	__asm { cmp cl, byte ptr [esi] }
	__asm { jne L_0071ea03 }
	__asm { cmp eax, -3 }
	__asm { je L_0071ea36 }
	__asm { mov cl, byte ptr [edx + 1] }
	__asm { cmp cl, byte ptr [esi + 1] }
	__asm { jne L_0071ea03 }
	__asm { cmp eax, -2 }
	__asm { je L_0071ea36 }
	__asm { mov cl, byte ptr [edx + 2] }
	__asm { cmp cl, byte ptr [esi + 2] }
	__asm { jne L_0071ea03 }
	__asm { cmp eax, -1 }
	__asm { je L_0071ea36 }
	__asm { mov al, byte ptr [edx + 3] }
	__asm { cmp al, byte ptr [esi + 3] }
	__asm { je L_0071ea36 }
	__asm { L_0071ea03: }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { sub eax, edi }
	__asm { sub eax, ebx }
	__asm { add eax, dword ptr [esp + 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { movzx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { push ebp }
	__asm { call dword ptr [g_00e10538] }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebx - 1] }
	__asm { test edi, edi }
	__asm { jne L_0071e9b4 }
	__asm { L_0071ea2f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0071ea36: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0071ea3d: }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_006e88f0();
// FUNCTION: ROBLOXSTUDIO 0x00724810
extern "C" __declspec(naked) void asm_00724810()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 0x58] }
	__asm { mov edi, dword ptr [esi + 0x5c] }
	__asm { mov ecx, edx }
	__asm { add ecx, 1 }
	__asm { mov eax, edi }
	__asm { adc eax, 0 }
	__asm { cmp eax, dword ptr [esi + 0x4c] }
	__asm { jl L_0072484a }
	__asm { jg L_00724833 }
	__asm { cmp ecx, dword ptr [esi + 0x48] }
	__asm { jbe L_0072484a }
	__asm { L_00724833: }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { push 0 }
	__asm { add ecx, edx }
	__asm { push 1 }
	__asm { adc eax, edi }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_006e88f0 }
	__asm { L_0072484a: }
	__asm { mov ecx, dword ptr [esi + 0x58] }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { add dword ptr [esi + 0x58], 1 }
	__asm { mov edx, dword ptr [esi + 0x58] }
	__asm { movzx eax, al }
	__asm { adc dword ptr [esi + 0x5c], 0 }
	__asm { mov edi, dword ptr [esi + 0x5c] }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { mov ecx, edx }
	__asm { add ecx, 1 }
	__asm { mov eax, edi }
	__asm { adc eax, 0 }
	__asm { cmp eax, dword ptr [esi + 0x4c] }
	__asm { jl L_00724895 }
	__asm { jg L_0072487e }
	__asm { cmp ecx, dword ptr [esi + 0x48] }
	__asm { jbe L_00724895 }
	__asm { L_0072487e: }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { push 0 }
	__asm { add ecx, edx }
	__asm { push 1 }
	__asm { adc eax, edi }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_006e88f0 }
	__asm { L_00724895: }
	__asm { mov ecx, dword ptr [esi + 0x58] }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { mov al, byte ptr [ecx + eax] }
	__asm { add dword ptr [esi + 0x58], 1 }
	__asm { mov edx, dword ptr [esi + 0x58] }
	__asm { movzx ebx, al }
	__asm { adc dword ptr [esi + 0x5c], 0 }
	__asm { mov edi, dword ptr [esi + 0x5c] }
	__asm { mov ecx, edx }
	__asm { add ecx, 1 }
	__asm { mov eax, edi }
	__asm { adc eax, 0 }
	__asm { cmp eax, dword ptr [esi + 0x4c] }
	__asm { jl L_007248dc }
	__asm { jg L_007248c5 }
	__asm { cmp ecx, dword ptr [esi + 0x48] }
	__asm { jbe L_007248dc }
	__asm { L_007248c5: }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { push 0 }
	__asm { add ecx, edx }
	__asm { push 1 }
	__asm { adc eax, edi }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_006e88f0 }
	__asm { L_007248dc: }
	__asm { mov ecx, dword ptr [esi + 0x58] }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { pop edi }
	__asm { mov cl, byte ptr [ecx + eax] }
	__asm { add dword ptr [esi + 0x58], 1 }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { adc dword ptr [esi + 0x5c], 0 }
	__asm { mov byte ptr [eax], cl }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 1], bl }
	__asm { mov byte ptr [eax + 2], cl }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" char g_00e10530[];
extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x007293b0
extern "C" __declspec(naked) void asm_007293b0()
{
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 8] }
	__asm { test edi, edi }
	__asm { je L_0072941e }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push ebp }
	__asm { xor ebp, ebp }
	__asm { cmp dword ptr [edi + 4], ebp }
	__asm { jle L_0072940d }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { push esi }
	__asm { nop }
	__asm { L_007293d0: }
	__asm { mov esi, dword ptr [edi] }
	__asm { add esi, eax }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call ebx }
	__asm { push dword ptr [esi + 0x24] }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { call ebx }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { call ebx }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { inc ebp }
	__asm { add eax, 0x40 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { cmp ebp, dword ptr [edi + 4] }
	__asm { jl L_007293d0 }
	__asm { pop esi }
	__asm { L_0072940d: }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call ebx }
	__asm { push dword ptr [edi] }
	__asm { call ebx }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { L_0072941e: }
	__asm { pop edi }
	__asm { ret }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_00729445 }
	__asm { push eax }
	__asm { push 0xe }
	__asm { push dword ptr [esp + 0x14] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00729445: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0xc] }
	__asm { mov eax, ebx }
	__asm { shl eax, 6 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10530] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { jne L_0072947a }
	__asm { push eax }
	__asm { push 0xe }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call fn_0072a2c0 }
	__asm { push esi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 0x10 }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072947a: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 4], ebx }
	__asm { mov word ptr [esi + 0x14], ax }
	__asm { pop ebx }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" char g_00e10530[];
extern "C" char g_00e10658[];
extern "C" char g_00e1067c[];
extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x0072a000
extern "C" __declspec(naked) void asm_0072a000()
{
	__asm { cmp dword ptr [esp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push edi }
	__asm { lea eax, [esi + 1] }
	__asm { jne L_0072a012 }
	__asm { mov eax, esi }
	__asm { L_0072a012: }
	__asm { push eax }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { jne L_0072a036 }
	__asm { push eax }
	__asm { push 0xe }
	__asm { push dword ptr [esp + 0x20] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072a036: }
	__asm { push dword ptr [esp + 0xc] }
	__asm { push esi }
	__asm { push 1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10658] }
	__asm { add esp, 0x10 }
	__asm { cmp eax, esi }
	__asm { jae L_0072a06d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { push 5 }
	__asm { push dword ptr [esp + 0x24] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0x10 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072a06d: }
	__asm { cmp dword ptr [esp + 0x14], 0 }
	__asm { je L_0072a08d }
	__asm { lea ecx, [edi + esi] }
	__asm { mov eax, edi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { cmp edi, ecx }
	__asm { jae L_0072a08d }
	__asm { L_0072a080: }
	__asm { cmp byte ptr [eax], 0 }
	__asm { jne L_0072a088 }
	__asm { mov byte ptr [eax], 0x20 }
	__asm { L_0072a088: }
	__asm { inc eax }
	__asm { cmp eax, ecx }
	__asm { jb L_0072a080 }
	__asm { L_0072a08d: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10658[];
extern "C" char g_00e1065c[];
extern "C" char g_00e1067c[];
extern "C" void fn_0072a2c0();
extern "C" void fn_00cf6a60();
extern "C" void fn_00cfbcf0();
// FUNCTION: ROBLOXSTUDIO 0x0072a2e0
extern "C" __declspec(naked) void asm_0072a2e0()
{
	__asm { mov eax, 0x2000 }
	__asm { call fn_00cf6a60 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cfbcf0 }
	__asm { mov ebx, dword ptr [esp + 0x2018] }
	__asm { mov ebp, dword ptr [esp + 0x200c] }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x2014] }
	__asm { mov dword ptr [ebx], eax }
	__asm { push ebp }
	__asm { call dword ptr [g_00e1065c] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_0072a343 }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { push 4 }
	__asm { push dword ptr [esp + 0x2024] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x2000 }
	__asm { ret }
	__asm { L_0072a343: }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x2018] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { jle L_0072a392 }
	__asm { mov ecx, 0x2000 }
	__asm { L_0072a355: }
	__asm { push ebp }
	__asm { mov eax, esi }
	__asm { cmp esi, 0x2000 }
	__asm { cmovg eax, ecx }
	__asm { push eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { push 1 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10658] }
	__asm { mov edi, eax }
	__asm { add esp, 0x10 }
	__asm { test edi, edi }
	__asm { je L_0072a39f }
	__asm { push edi }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cfbcf0 }
	__asm { sub esi, edi }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov ecx, 0x2000 }
	__asm { test esi, esi }
	__asm { jg L_0072a355 }
	__asm { L_0072a392: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { add esp, 0x2000 }
	__asm { ret }
	__asm { L_0072a39f: }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { push 5 }
	__asm { push dword ptr [esp + 0x202c] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x2000 }
	__asm { ret }
}

extern "C" char g_00e10658[];
extern "C" char g_00e1065c[];
extern "C" char g_00e1067c[];
extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x0072a6c0
extern "C" __declspec(naked) void asm_0072a6c0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x14] }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { lea ebx, [esi + 4] }
	__asm { je L_0072a6d5 }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072a6d5: }
	__asm { test byte ptr [esi + 0x10], 1 }
	__asm { push edi }
	__asm { jne L_0072a786 }
	__asm { cmp dword ptr [esi + 0x20], 0 }
	__asm { jbe L_0072a786 }
	__asm { mov edi, dword ptr [esp + 0x14] }
	__asm { test edi, edi }
	__asm { je L_0072a786 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { push dword ptr [eax + 4] }
	__asm { call dword ptr [g_00e1065c] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jns L_0072a727 }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { push 4 }
	__asm { push ebx }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072a727: }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp edi, ecx }
	__asm { push dword ptr [eax + 4] }
	__asm { cmovb ecx, edi }
	__asm { push ecx }
	__asm { push 1 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call dword ptr [g_00e10658] }
	__asm { mov edi, eax }
	__asm { add esp, 0x10 }
	__asm { test edi, edi }
	__asm { jne L_0072a75f }
	__asm { push eax }
	__asm { push 0x11 }
	__asm { push ebx }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { or edi, 0xffffffff }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072a75f: }
	__asm { jns L_0072a77a }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { push 5 }
	__asm { push ebx }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072a77a: }
	__asm { add dword ptr [esi + 0x18], edi }
	__asm { sub dword ptr [esi + 0x20], edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072a786: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" char g_00e10530[];
extern "C" char g_00e10638[];
extern "C" void fn_0072a2a0();
extern "C" void fn_0072a2c0();
extern "C" void fn_00cfbcf0();
// FUNCTION: ROBLOXSTUDIO 0x0072a790
extern "C" __declspec(naked) void asm_0072a790()
{
	__asm { push esi }
	__asm { push 0x34 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_0072a7b9 }
	__asm { push eax }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { add eax, 8 }
	__asm { push 0xe }
	__asm { push eax }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072a7b9: }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { lea eax, [ecx - 1] }
	__asm { cmp dword ptr [edi + 0x34], eax }
	__asm { jl L_0072a807 }
	__asm { lea ebx, [ecx + 0xa] }
	__asm { lea eax, [ebx*4] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { call dword ptr [g_00e10638] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_0072a801 }
	__asm { push eax }
	__asm { lea eax, [edi + 8] }
	__asm { push 0xe }
	__asm { push eax }
	__asm { call fn_0072a2c0 }
	__asm { push esi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 0x10 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072a801: }
	__asm { mov dword ptr [edi + 0x38], ebx }
	__asm { mov dword ptr [edi + 0x3c], eax }
	__asm { L_0072a807: }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [eax + ecx*4], esi }
	__asm { inc dword ptr [edi + 0x34] }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_0072a2a0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cfbcf0 }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { pop ebx }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x14], 0xffffffff }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1062c[];
extern "C" char g_00e1064c[];
extern "C" void fn_00728fb0();
extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x0072a890
extern "C" __declspec(naked) void asm_0072a890()
{
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [esp + 0x14], 0 }
	__asm { jne L_0072a8b1 }
	__asm { push 0 }
	__asm { push 0x12 }
	__asm { push dword ptr [esp + 0x24] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { add esp, 0xc }
	__asm { ret }
	__asm { L_0072a8b1: }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { test cl, 1 }
	__asm { mov eax, 0xcf6e86 }
	__asm { cmovne eax, dword ptr [g_00e1062c] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov eax, ecx }
	__asm { and eax, 8 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { je L_0072a8e4 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { jmp L_0072a8e7 }
	__asm { L_0072a8e4: }
	__asm { mov edx, dword ptr [ebp + 0x28] }
	__asm { L_0072a8e7: }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x28] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov dword ptr [esp + 0x10], edx }
	__asm { test edx, edx }
	__asm { jle L_0072a96f }
	__asm { xor ebx, ebx }
	__asm { L_0072a8fa: }
	__asm { mov ecx, dword ptr [esp + 0x28] }
	__asm { test eax, eax }
	__asm { je L_0072a90d }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + ebx + 0x1c] }
	__asm { jmp L_0072a923 }
	__asm { L_0072a90d: }
	__asm { push esi }
	__asm { push ecx }
	__asm { push edi }
	__asm { push ebp }
	__asm { call fn_00728fb0 }
	__asm { mov ecx, dword ptr [esp + 0x38] }
	__asm { mov edx, dword ptr [esp + 0x20] }
	__asm { add esp, 0x10 }
	__asm { mov esi, eax }
	__asm { L_0072a923: }
	__asm { test esi, esi }
	__asm { je L_0072a953 }
	__asm { test cl, 2 }
	__asm { je L_0072a93f }
	__asm { push 0x2f }
	__asm { push esi }
	__asm { call dword ptr [g_00e1064c] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_0072a93f }
	__asm { lea esi, [eax + 1] }
	__asm { L_0072a93f: }
	__asm { push esi }
	__asm { push dword ptr [esp + 0x28] }
	__asm { call dword ptr [esp + 0x20] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_0072a965 }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { L_0072a953: }
	__asm { mov esi, dword ptr [esp + 0x2c] }
	__asm { inc edi }
	__asm { add ebx, 0x40 }
	__asm { cmp edi, edx }
	__asm { jge L_0072a96f }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { jmp L_0072a8fa }
	__asm { L_0072a965: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { add esp, 0xc }
	__asm { ret }
	__asm { L_0072a96f: }
	__asm { push 0 }
	__asm { push 9 }
	__asm { push esi }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { add esp, 0xc }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" char g_00e10638[];
extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x0072a9b0
extern "C" __declspec(naked) void asm_0072a9b0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { test esi, esi }
	__asm { jne L_0072a9d9 }
	__asm { push 0x14 }
	__asm { call dword ptr [g_00e10530] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0072aa23 }
	__asm { push eax }
	__asm { push 0xe }
	__asm { push 8 }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072a9d9: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { lea eax, [ecx - 1] }
	__asm { cmp dword ptr [esi + 0x28], eax }
	__asm { jl L_0072aa17 }
	__asm { lea eax, [ecx + 0x10] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { lea eax, [eax + eax*4] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call dword ptr [g_00e10638] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { test eax, eax }
	__asm { jne L_0072aa17 }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push 0xe }
	__asm { push eax }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072aa17: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { lea ecx, [eax + eax*4] }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { L_0072aa23: }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0xffffffff }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0072aa4c }
	__asm { inc dword ptr [esi + 0x28] }
	__asm { L_0072aa4c: }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0072ae00
extern "C" __declspec(naked) void asm_0072ae00()
{
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov al, byte ptr [esp + 8] }
	__asm { mov edx, dword ptr [ecx + 0x58] }
	__asm { test edx, edx }
	__asm { je L_0072ae15 }
	__asm { mov byte ptr [edx + 0x80], al }
	__asm { L_0072ae15: }
	__asm { mov edx, dword ptr [ecx + 0x5c] }
	__asm { test edx, edx }
	__asm { je L_0072ae22 }
	__asm { mov byte ptr [edx + 0x80], al }
	__asm { L_0072ae22: }
	__asm { mov edx, dword ptr [ecx + 0x60] }
	__asm { test edx, edx }
	__asm { je L_0072ae2f }
	__asm { mov byte ptr [edx + 0x80], al }
	__asm { L_0072ae2f: }
	__asm { mov edx, dword ptr [ecx + 0x64] }
	__asm { test edx, edx }
	__asm { je L_0072ae3c }
	__asm { mov byte ptr [edx + 0x80], al }
	__asm { L_0072ae3c: }
	__asm { mov edx, dword ptr [ecx + 0x78] }
	__asm { test edx, edx }
	__asm { je L_0072ae49 }
	__asm { mov byte ptr [edx + 0x111], al }
	__asm { L_0072ae49: }
	__asm { mov edx, dword ptr [ecx + 0x88] }
	__asm { test edx, edx }
	__asm { je L_0072ae59 }
	__asm { mov byte ptr [edx + 0x111], al }
	__asm { L_0072ae59: }
	__asm { mov edx, dword ptr [ecx + 0x7c] }
	__asm { test edx, edx }
	__asm { je L_0072ae66 }
	__asm { mov byte ptr [edx + 0x111], al }
	__asm { L_0072ae66: }
	__asm { mov edx, dword ptr [ecx + 0x8c] }
	__asm { test edx, edx }
	__asm { je L_0072ae76 }
	__asm { mov byte ptr [edx + 0x111], al }
	__asm { L_0072ae76: }
	__asm { mov edx, dword ptr [ecx + 0x80] }
	__asm { test edx, edx }
	__asm { je L_0072ae86 }
	__asm { mov byte ptr [edx + 0x111], al }
	__asm { L_0072ae86: }
	__asm { mov edx, dword ptr [ecx + 0x90] }
	__asm { test edx, edx }
	__asm { je L_0072ae96 }
	__asm { mov byte ptr [edx + 0x111], al }
	__asm { L_0072ae96: }
	__asm { mov edx, dword ptr [ecx + 0x84] }
	__asm { test edx, edx }
	__asm { je L_0072aea6 }
	__asm { mov byte ptr [edx + 0x111], al }
	__asm { L_0072aea6: }
	__asm { mov ecx, dword ptr [ecx + 0x94] }
	__asm { test ecx, ecx }
	__asm { je L_0072aeb6 }
	__asm { mov byte ptr [ecx + 0x111], al }
	__asm { L_0072aeb6: }
	__asm { ret }
}

extern "C" void fn_0072cb70();
extern "C" void fn_0073a4a0();
extern "C" void fn_0073b730();
extern "C" void fn_0073c470();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x0072b140
extern "C" __declspec(naked) void asm_0072b140()
{
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { cmp ecx, 0x46 }
	__asm { je L_0072b178 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + 0x14], 0xd }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [eax + 0x18], 0x46 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [eax + 0x1c], ecx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072b178: }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { cmp ecx, 0x1b0 }
	__asm { je L_0072b1a5 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + 0x14], 0x16 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [eax + 0x18], 0x1b0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [eax + 0x1c], ecx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072b1a5: }
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { push 0x1b0 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { call fn_00cf6804 }
	__asm { push ebx }
	__asm { mov dword ptr [ebx], edi }
	__asm { mov dword ptr [ebx + 0xc], esi }
	__asm { mov byte ptr [ebx + 0x10], 1 }
	__asm { call fn_0073b730 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { mov dword ptr [ebx + 0x18], 0 }
	__asm { mov dword ptr [ebx + 0x90], 0 }
	__asm { mov dword ptr [ebx + 0x94], 0 }
	__asm { mov dword ptr [ebx + 0x98], 0 }
	__asm { mov dword ptr [ebx + 0x9c], 0 }
	__asm { mov dword ptr [ebx + 0xa0], 0 }
	__asm { mov dword ptr [ebx + 0xb0], 0 }
	__asm { mov dword ptr [ebx + 0xa4], 0 }
	__asm { mov dword ptr [ebx + 0xb4], 0 }
	__asm { mov dword ptr [ebx + 0xa8], 0 }
	__asm { mov dword ptr [ebx + 0xb8], 0 }
	__asm { mov dword ptr [ebx + 0xac], 0 }
	__asm { mov dword ptr [ebx + 0xbc], 0 }
	__asm { push ebx }
	__asm { mov dword ptr [ebx + 0x10c], 0 }
	__asm { call fn_0072cb70 }
	__asm { push ebx }
	__asm { call fn_0073c470 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebx + 0x14], 0xc8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { jmp fn_0073a4a0 }
}

// FUNCTION: ROBLOXSTUDIO 0x0072e160
extern "C" __declspec(naked) void asm_0072e160()
{
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x14] }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { mov ebp, dword ptr [esi] }
	__asm { test ebx, ebx }
	__asm { jne L_0072e18d }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0072e188 }
	__asm { L_0072e181: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072e188: }
	__asm { mov ebp, dword ptr [esi] }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { L_0072e18d: }
	__asm { movzx eax, byte ptr [ebp] }
	__asm { shl eax, 8 }
	__asm { inc ebp }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { dec ebx }
	__asm { jne L_0072e1ae }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_0072e181 }
	__asm { mov ebp, dword ptr [esi] }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { L_0072e1ae: }
	__asm { movzx edx, byte ptr [ebp] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [eax + 0x14], 0x5d }
	__asm { mov eax, dword ptr [edi + 0x180] }
	__asm { add ecx, -2 }
	__asm { add edx, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push edi }
	__asm { mov dword ptr [eax + 0x1c], edx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0x1c], edx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { lea eax, [ebp + 1] }
	__asm { mov dword ptr [esi], eax }
	__asm { add esp, 8 }
	__asm { lea eax, [ebx - 1] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test ecx, ecx }
	__asm { jle L_0072e205 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { push edi }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0072e205: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_007272a0();
extern "C" void fn_0072f910();
extern "C" void fn_00739ba0();
// FUNCTION: ROBLOXSTUDIO 0x0072f840
extern "C" __declspec(naked) void asm_0072f840()
{
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0xc] }
	__asm { push ebp }
	__asm { push edi }
	__asm { xor ebp, ebp }
	__asm { xor edi, edi }
	__asm { test ebx, ebx }
	__asm { je L_0072f904 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx] }
	__asm { test esi, esi }
	__asm { je L_0072f903 }
	__asm { mov eax, dword ptr [esi + 0x24c] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x244] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_0072f87d }
	__asm { mov ebp, dword ptr [eax] }
	__asm { L_0072f87d: }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { test eax, eax }
	__asm { je L_0072f887 }
	__asm { mov edi, dword ptr [eax] }
	__asm { L_0072f887: }
	__asm { push edi }
	__asm { push ebp }
	__asm { push esi }
	__asm { call fn_0072f910 }
	__asm { add esp, 0xc }
	__asm { test ebp, ebp }
	__asm { je L_0072f8bf }
	__asm { push -1 }
	__asm { push 0x4000 }
	__asm { push ebp }
	__asm { push esi }
	__asm { call fn_007272a0 }
	__asm { push dword ptr [esp + 0x28] }
	__asm { push dword ptr [esp + 0x24] }
	__asm { push ebp }
	__asm { call fn_00739ba0 }
	__asm { mov eax, dword ptr [esp + 0x38] }
	__asm { add esp, 0x1c }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_0072f8bf: }
	__asm { test edi, edi }
	__asm { je L_0072f8ec }
	__asm { push -1 }
	__asm { push 0x4000 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_007272a0 }
	__asm { push dword ptr [esp + 0x28] }
	__asm { push dword ptr [esp + 0x24] }
	__asm { push edi }
	__asm { call fn_00739ba0 }
	__asm { mov eax, dword ptr [esp + 0x3c] }
	__asm { add esp, 0x1c }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_0072f8ec: }
	__asm { push dword ptr [esp + 0x18] }
	__asm { push dword ptr [esp + 0x14] }
	__asm { push esi }
	__asm { call fn_00739ba0 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebx], 0 }
	__asm { L_0072f903: }
	__asm { pop esi }
	__asm { L_0072f904: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_007272a0();
extern "C" void fn_00731290();
extern "C" void fn_00739a00();
extern "C" void fn_00739ba0();
// FUNCTION: ROBLOXSTUDIO 0x007311e0
extern "C" __declspec(naked) void asm_007311e0()
{
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x14] }
	__asm { xor esi, esi }
	__asm { xor ebx, ebx }
	__asm { xor ebp, ebp }
	__asm { test edi, edi }
	__asm { je L_00731200 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov ebx, dword ptr [esi + 0x24c] }
	__asm { mov ebp, dword ptr [esi + 0x244] }
	__asm { L_00731200: }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { test eax, eax }
	__asm { je L_0073126c }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { test eax, eax }
	__asm { je L_0073126c }
	__asm { test esi, esi }
	__asm { je L_00731257 }
	__asm { push -1 }
	__asm { push 0x7fff }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007272a0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [esi + 0x220], 0 }
	__asm { je L_00731253 }
	__asm { push dword ptr [esi + 0x224] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 0x224], 0 }
	__asm { mov dword ptr [esi + 0x220], 0 }
	__asm { L_00731253: }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { L_00731257: }
	__asm { push ebp }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00739ba0 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_0073126c: }
	__asm { test esi, esi }
	__asm { je L_00731287 }
	__asm { push esi }
	__asm { call fn_00731290 }
	__asm { push ebp }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00739ba0 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_00731287: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00733640
extern "C" __declspec(naked) void asm_00733640()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov al, byte ptr [esi + 8] }
	__asm { mov edx, dword ptr [esi] }
	__asm { cmp al, 6 }
	__asm { jne L_00733698 }
	__asm { cmp byte ptr [esi + 9], 8 }
	__asm { jne L_00733673 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { add ecx, dword ptr [esp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_007336e8 }
	__asm { L_00733663: }
	__asm { or al, 0xff }
	__asm { sub al, byte ptr [ecx - 1] }
	__asm { lea ecx, [ecx - 4] }
	__asm { mov byte ptr [ecx + 3], al }
	__asm { dec edx }
	__asm { jne L_00733663 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00733673: }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { add esi, dword ptr [esp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_007336e8 }
	__asm { mov edi, edi }
	__asm { L_00733680: }
	__asm { or al, 0xff }
	__asm { sub al, byte ptr [esi - 1] }
	__asm { lea esi, [esi - 8] }
	__asm { mov byte ptr [esi + 7], al }
	__asm { or al, 0xff }
	__asm { sub al, byte ptr [esi + 6] }
	__asm { mov byte ptr [esi + 6], al }
	__asm { dec edx }
	__asm { jne L_00733680 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00733698: }
	__asm { cmp al, 4 }
	__asm { jne L_007336e8 }
	__asm { cmp byte ptr [esi + 9], 8 }
	__asm { jne L_007336c7 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { add ecx, dword ptr [esp + 0xc] }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { je L_007336e8 }
	__asm { nop }
	__asm { L_007336b0: }
	__asm { or al, 0xff }
	__asm { sub al, byte ptr [ecx - 1] }
	__asm { lea ecx, [ecx - 2] }
	__asm { mov byte ptr [esi - 1], al }
	__asm { mov al, byte ptr [ecx] }
	__asm { lea esi, [esi - 2] }
	__asm { mov byte ptr [esi], al }
	__asm { dec edx }
	__asm { jne L_007336b0 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007336c7: }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { add esi, dword ptr [esp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_007336e8 }
	__asm { L_007336d2: }
	__asm { or al, 0xff }
	__asm { sub al, byte ptr [esi - 1] }
	__asm { lea esi, [esi - 4] }
	__asm { mov byte ptr [esi + 3], al }
	__asm { or al, 0xff }
	__asm { sub al, byte ptr [esi + 2] }
	__asm { mov byte ptr [esi + 2], al }
	__asm { dec edx }
	__asm { jne L_007336d2 }
	__asm { L_007336e8: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007272a0();
extern "C" void fn_00739970();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_00cf67fe();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00738df0
extern "C" __declspec(naked) void asm_00738df0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { test esi, esi }
	__asm { je L_00738ea1 }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { test edi, edi }
	__asm { je L_00738ea0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x1c] }
	__asm { test ebx, ebx }
	__asm { js L_00738e1b }
	__asm { cmp ebx, 0x100 }
	__asm { jle L_00738e2f }
	__asm { L_00738e1b: }
	__asm { cmp byte ptr [edi + 0x19], 3 }
	__asm { push 0xe4b3cc }
	__asm { push esi }
	__asm { jne L_00738e97 }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_00738e2f: }
	__asm { push 0 }
	__asm { push 0x1000 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_007272a0 }
	__asm { push 0x300 }
	__asm { push esi }
	__asm { call fn_00739970 }
	__asm { push 0x300 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x114], eax }
	__asm { call fn_00cf6804 }
	__asm { lea eax, [ebx + ebx*2] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x40] }
	__asm { push dword ptr [esi + 0x114] }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [esi + 0x114] }
	__asm { add esp, 0x30 }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov word ptr [esi + 0x118], bx }
	__asm { or dword ptr [edi + 0xb8], 0x1000 }
	__asm { or dword ptr [edi + 8], 8 }
	__asm { mov word ptr [edi + 0x14], bx }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00738e97: }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop ebx }
	__asm { L_00738ea0: }
	__asm { pop edi }
	__asm { L_00738ea1: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e4b530[];
extern "C" char g_00e4b538[];
extern "C" char g_00e4b540[];
extern "C" char g_00e4b548[];
extern "C" char g_00e4b550[];
extern "C" char g_00e4b558[];
extern "C" char g_00e4b560[];
extern "C" char g_00e4b568[];
extern "C" char g_00e4b570[];
extern "C" void fn_007278a0();
extern "C" void fn_007385e0();
extern "C" void fn_007386f0();
extern "C" void fn_00738800();
extern "C" void fn_00738880();
// FUNCTION: ROBLOXSTUDIO 0x00738f00
extern "C" __declspec(naked) void asm_00738f00()
{
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 8] }
	__asm { test edi, edi }
	__asm { je L_0073900c }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { test esi, esi }
	__asm { je L_0073900b }
	__asm { fld qword ptr [g_00e4b560] }
	__asm { mov al, byte ptr [esp + 0x14] }
	__asm { or dword ptr [esi + 8], 0x800 }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [esi + 0x2c], al }
	__asm { fstp qword ptr [esp] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00738800 }
	__asm { push 0xb18f }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00738880 }
	__asm { push 0x1770 }
	__asm { push 0x3a98 }
	__asm { push 0xea60 }
	__asm { push 0x7530 }
	__asm { push 0x80e8 }
	__asm { push 0xfa00 }
	__asm { push 0x8084 }
	__asm { push 0x7a26 }
	__asm { push edi }
	__asm { call fn_007278a0 }
	__asm { add esp, 0x40 }
	__asm { test eax, eax }
	__asm { je L_0073900b }
	__asm { push 0x1770 }
	__asm { push 0x3a98 }
	__asm { push 0xea60 }
	__asm { push 0x7530 }
	__asm { push 0x80e8 }
	__asm { push 0xfa00 }
	__asm { push 0x8084 }
	__asm { push 0x7a26 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007386f0 }
	__asm { fld qword ptr [g_00e4b530] }
	__asm { fstp qword ptr [esp + 0x20] }
	__asm { sub esp, 0x18 }
	__asm { fld qword ptr [g_00e4b538] }
	__asm { fstp qword ptr [esp + 0x30] }
	__asm { fld qword ptr [g_00e4b568] }
	__asm { fstp qword ptr [esp + 0x28] }
	__asm { fld qword ptr [g_00e4b540] }
	__asm { fstp qword ptr [esp + 0x20] }
	__asm { fld qword ptr [g_00e4b558] }
	__asm { fstp qword ptr [esp + 0x18] }
	__asm { fld qword ptr [g_00e4b570] }
	__asm { fstp qword ptr [esp + 0x10] }
	__asm { fld qword ptr [g_00e4b550] }
	__asm { fstp qword ptr [esp + 8] }
	__asm { fld qword ptr [g_00e4b548] }
	__asm { fstp qword ptr [esp] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007385e0 }
	__asm { add esp, 0x48 }
	__asm { L_0073900b: }
	__asm { pop esi }
	__asm { L_0073900c: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" void fn_007272a0();
extern "C" void fn_007399d0();
extern "C" void fn_00739a00();
extern "C" void fn_00739e30();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00739010
extern "C" __declspec(naked) void asm_00739010()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { test esi, esi }
	__asm { je L_00739100 }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { test edi, edi }
	__asm { je L_007390ff }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x18] }
	__asm { test ebp, ebp }
	__asm { je L_007390fe }
	__asm { cmp dword ptr [esp + 0x20], 0 }
	__asm { je L_007390fe }
	__asm { mov ecx, ebp }
	__asm { lea edx, [ecx + 1] }
	__asm { L_00739047: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00739047 }
	__asm { sub ecx, edx }
	__asm { push ebx }
	__asm { lea eax, [ecx + 1] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { call fn_007399d0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { jne L_0073907b }
	__asm { push 0xe4b3e4 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0073907b: }
	__asm { push dword ptr [esp + 0x14] }
	__asm { push ebp }
	__asm { push ebx }
	__asm { call fn_00cf67fe }
	__asm { mov ebp, dword ptr [esp + 0x34] }
	__asm { push ebp }
	__asm { push esi }
	__asm { call fn_007399d0 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { test eax, eax }
	__asm { jne L_007390b6 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { push 0xe4b410 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 0x10 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007390b6: }
	__asm { push ebp }
	__asm { push dword ptr [esp + 0x28] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { push 0 }
	__asm { push 0x10 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_007272a0 }
	__asm { mov eax, dword ptr [esp + 0x30] }
	__asm { or dword ptr [edi + 0xb8], 0x10 }
	__asm { add esp, 0x1c }
	__asm { or dword ptr [edi + 8], 0x1000 }
	__asm { mov dword ptr [edi + 0xc8], eax }
	__asm { mov al, byte ptr [esp + 0x20] }
	__asm { mov dword ptr [edi + 0xc4], ebx }
	__asm { mov dword ptr [edi + 0xcc], ebp }
	__asm { mov byte ptr [edi + 0xd0], al }
	__asm { pop ebx }
	__asm { L_007390fe: }
	__asm { pop ebp }
	__asm { L_007390ff: }
	__asm { pop edi }
	__asm { L_00739100: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007272a0();
extern "C" void fn_00739970();
extern "C" void fn_00739e30();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00739300
extern "C" __declspec(naked) void asm_00739300()
{
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 8] }
	__asm { test ebp, ebp }
	__asm { je L_007393e7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { test esi, esi }
	__asm { je L_007393e6 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x20] }
	__asm { test ebx, ebx }
	__asm { je L_00739364 }
	__asm { push 0 }
	__asm { push 0x2000 }
	__asm { push esi }
	__asm { push ebp }
	__asm { call fn_007272a0 }
	__asm { push 0x100 }
	__asm { push ebp }
	__asm { call fn_00739970 }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { mov dword ptr [ebp + 0x188], eax }
	__asm { lea eax, [edi - 1] }
	__asm { add esp, 0x18 }
	__asm { cmp eax, 0xff }
	__asm { ja L_00739364 }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [esi + 0x4c] }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { L_00739364: }
	__asm { mov ebx, dword ptr [esp + 0x24] }
	__asm { test ebx, ebx }
	__asm { je L_007393ce }
	__asm { movzx ecx, byte ptr [esi + 0x18] }
	__asm { mov edx, 1 }
	__asm { shl edx, cl }
	__asm { mov cl, byte ptr [esi + 0x19] }
	__asm { test cl, cl }
	__asm { jne L_00739386 }
	__asm { movzx eax, word ptr [ebx + 8] }
	__asm { cmp eax, edx }
	__asm { jg L_007393a3 }
	__asm { L_00739386: }
	__asm { cmp cl, 2 }
	__asm { jne L_007393b1 }
	__asm { movzx eax, word ptr [ebx + 2] }
	__asm { cmp eax, edx }
	__asm { jg L_007393a3 }
	__asm { movzx eax, word ptr [ebx + 4] }
	__asm { cmp eax, edx }
	__asm { jg L_007393a3 }
	__asm { movzx eax, word ptr [ebx + 6] }
	__asm { cmp eax, edx }
	__asm { jle L_007393b1 }
	__asm { L_007393a3: }
	__asm { push 0xe4b480 }
	__asm { push ebp }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { L_007393b1: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 0x54], eax }
	__asm { mov ax, word ptr [ebx + 8] }
	__asm { mov word ptr [esi + 0x58], ax }
	__asm { test edi, edi }
	__asm { mov eax, 1 }
	__asm { cmove edi, eax }
	__asm { L_007393ce: }
	__asm { mov word ptr [esi + 0x16], di }
	__asm { test edi, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { je L_007393e6 }
	__asm { or dword ptr [esi + 8], 0x10 }
	__asm { or dword ptr [esi + 0xb8], 0x2000 }
	__asm { L_007393e6: }
	__asm { pop esi }
	__asm { L_007393e7: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1065c[];
extern "C" char g_00e1067c[];
extern "C" void fn_00729630();
extern "C" void fn_007296b0();
extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x0073a390
extern "C" __declspec(naked) void asm_0073a390()
{
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { sub esp, 0x40 }
	__asm { shl ecx, 6 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x48] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edi, dword ptr [eax + ecx + 0x3c] }
	__asm { push edi }
	__asm { push dword ptr [esi + 4] }
	__asm { call dword ptr [g_00e1065c] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_0073a3da }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [esi + 8] }
	__asm { push 4 }
	__asm { push eax }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { L_0073a3d2: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { add esp, 0x40 }
	__asm { ret }
	__asm { L_0073a3da: }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [esi + 4] }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007296b0 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { jne L_0073a3d2 }
	__asm { movzx esi, word ptr [esp + 0x28] }
	__asm { movzx ecx, word ptr [esp + 0x30] }
	__asm { lea eax, [esp + 8] }
	__asm { add esi, edi }
	__asm { push eax }
	__asm { add esi, ecx }
	__asm { call fn_00729630 }
	__asm { add esp, 4 }
	__asm { lea eax, [esi + 0x1e] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x40 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0073be80
extern "C" __declspec(naked) void asm_0073be80()
{
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x18] }
	__asm { xor ebx, ebx }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ebp, dword ptr [edi + 0x18] }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { imul ebp, eax }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { test esi, esi }
	__asm { jle L_0073bf01 }
	__asm { mov edx, dword ptr [esp + 0x14] }
	__asm { L_0073bea2: }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { sub esi, ebx }
	__asm { cmp dword ptr [edi + 0x14], esi }
	__asm { cmovl esi, dword ptr [edi + 0x14] }
	__asm { add ecx, ebx }
	__asm { sub eax, ecx }
	__asm { cmp esi, eax }
	__asm { cmovge esi, eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { cmp esi, eax }
	__asm { cmovge esi, eax }
	__asm { test esi, esi }
	__asm { jle L_0073bf01 }
	__asm { imul esi, dword ptr [esp + 0x18] }
	__asm { cmp byte ptr [esp + 0x1c], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { push ebp }
	__asm { push dword ptr [eax + ebx*4] }
	__asm { je L_0073bee4 }
	__asm { lea eax, [edi + 0x28] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { jmp L_0073beeb }
	__asm { L_0073bee4: }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { lea ecx, [edi + 0x28] }
	__asm { push ecx }
	__asm { L_0073beeb: }
	__asm { push edx }
	__asm { call eax }
	__asm { add ebx, dword ptr [edi + 0x14] }
	__asm { mov edx, dword ptr [esp + 0x28] }
	__asm { add ebp, esi }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { add esp, 0x14 }
	__asm { cmp ebx, esi }
	__asm { jl L_0073bea2 }
	__asm { L_0073bf01: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_00738c00();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x0073fbb0
extern "C" __declspec(naked) void asm_0073fbb0()
{
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x14] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov edi, dword ptr [esp + 0x1c] }
	__asm { test al, 1 }
	__asm { jne L_0073fbe0 }
	__asm { push 0xe4c418 }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_0073fbd2: }
	__asm { cmp dword ptr [esp + 0x20], 9 }
	__asm { je L_0073fc16 }
	__asm { push 0xe4c464 }
	__asm { jmp L_0073fbe9 }
	__asm { L_0073fbe0: }
	__asm { test al, 4 }
	__asm { je L_0073fc02 }
	__asm { push 0xe4c434 }
	__asm { L_0073fbe9: }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x28] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0xc }
	__asm { ret }
	__asm { L_0073fc02: }
	__asm { test edi, edi }
	__asm { je L_0073fbd2 }
	__asm { test dword ptr [edi + 8], 0x100 }
	__asm { je L_0073fbd2 }
	__asm { push 0xe4c44c }
	__asm { jmp L_0073fbe9 }
	__asm { L_0073fc16: }
	__asm { push 9 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737920 }
	__asm { push 9 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { jne L_0073fc97 }
	__asm { movzx eax, byte ptr [esp + 0x10] }
	__asm { movzx ecx, byte ptr [esp + 0xc] }
	__asm { push eax }
	__asm { movzx eax, byte ptr [esp + 0x11] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x12] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x13] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0xd] }
	__asm { push ecx }
	__asm { movzx ecx, byte ptr [esp + 0x10] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x12] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x13] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { push ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00738c00 }
	__asm { add esp, 0x14 }
	__asm { L_0073fc97: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0xc }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_007392d0();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x007409d0
extern "C" __declspec(naked) void asm_007409d0()
{
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x18] }
	__asm { push edi }
	__asm { test byte ptr [esi + 0x68], 1 }
	__asm { mov edi, dword ptr [esp + 0x20] }
	__asm { jne L_00740a0c }
	__asm { push 0xe4c664 }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_007409f1: }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { test al, 4 }
	__asm { je L_007409fe }
	__asm { or eax, 8 }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { L_007409fe: }
	__asm { cmp dword ptr [esp + 0x24], 7 }
	__asm { je L_00740a37 }
	__asm { push 0xe4c694 }
	__asm { jmp L_00740a1e }
	__asm { L_00740a0c: }
	__asm { test edi, edi }
	__asm { je L_007409f1 }
	__asm { test dword ptr [edi + 8], 0x200 }
	__asm { je L_007409f1 }
	__asm { push 0xe4c67c }
	__asm { L_00740a1e: }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x2c] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_00740a37: }
	__asm { push 7 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737920 }
	__asm { push 7 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { jne L_00740ab7 }
	__asm { movzx eax, byte ptr [esp + 0xe] }
	__asm { movzx ecx, byte ptr [esp + 8] }
	__asm { mov byte ptr [esp + 0x16], al }
	__asm { movzx eax, byte ptr [esp + 0xd] }
	__asm { mov byte ptr [esp + 0x15], al }
	__asm { movzx eax, byte ptr [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x14], al }
	__asm { movzx eax, byte ptr [esp + 0xb] }
	__asm { mov byte ptr [esp + 0x13], al }
	__asm { movzx eax, byte ptr [esp + 0xa] }
	__asm { mov byte ptr [esp + 0x12], al }
	__asm { mov eax, 0x100 }
	__asm { imul cx, ax }
	__asm { movzx eax, byte ptr [esp + 9] }
	__asm { add cx, ax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { mov word ptr [esp + 0x1c], cx }
	__asm { call fn_007392d0 }
	__asm { add esp, 0xc }
	__asm { L_00740ab7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_00739c20();
extern "C" void fn_00741150();
// FUNCTION: ROBLOXSTUDIO 0x007418f0
extern "C" __declspec(naked) void asm_007418f0()
{
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x18] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x18] }
	__asm { mov dword ptr [esp + 0xc], 0x54414449 }
	__asm { test byte ptr [esi + 0x68], 4 }
	__asm { mov byte ptr [esp + 0x10], 0 }
	__asm { jne L_007419f2 }
	__asm { cmp byte ptr [esi + 0x260], 0 }
	__asm { jne L_007419f2 }
	__asm { mov al, byte ptr [ebp] }
	__asm { mov byte ptr [esp + 0x18], al }
	__asm { movzx eax, al }
	__asm { mov ecx, eax }
	__asm { and cl, 0xf }
	__asm { cmp cl, 8 }
	__asm { jne L_007419e4 }
	__asm { mov ecx, eax }
	__asm { and ecx, 0xf0 }
	__asm { cmp ecx, 0x70 }
	__asm { ja L_007419e4 }
	__asm { cmp dword ptr [esp + 0x20], 2 }
	__asm { jb L_007419f2 }
	__asm { mov edx, dword ptr [esi + 0xcc] }
	__asm { cmp edx, 0x4000 }
	__asm { jae L_007419f2 }
	__asm { mov ebx, dword ptr [esi + 0xc8] }
	__asm { cmp ebx, 0x4000 }
	__asm { jae L_007419f2 }
	__asm { movzx ecx, byte ptr [esi + 0x127] }
	__asm { push edi }
	__asm { movzx edi, byte ptr [esi + 0x12a] }
	__asm { imul edi, ecx }
	__asm { imul edi, ebx }
	__asm { add edi, 0xf }
	__asm { shr edi, 3 }
	__asm { imul edi, edx }
	__asm { shr eax, 4 }
	__asm { mov edx, 1 }
	__asm { lea ecx, [eax + 7] }
	__asm { shl edx, cl }
	__asm { cmp edi, edx }
	__asm { ja L_007419b4 }
	__asm { L_007419a5: }
	__asm { cmp edx, 0x100 }
	__asm { jb L_007419b4 }
	__asm { shr edx, 1 }
	__asm { dec eax }
	__asm { cmp edi, edx }
	__asm { jbe L_007419a5 }
	__asm { L_007419b4: }
	__asm { shl eax, 4 }
	__asm { or eax, 8 }
	__asm { pop edi }
	__asm { cmp byte ptr [esp + 0x18], al }
	__asm { je L_007419f2 }
	__asm { mov bl, byte ptr [ebp + 1] }
	__asm { and bl, 0xe0 }
	__asm { movzx ecx, bl }
	__asm { mov byte ptr [ebp], al }
	__asm { shl eax, 8 }
	__asm { add eax, ecx }
	__asm { xor edx, edx }
	__asm { mov ecx, 0x1f }
	__asm { div ecx }
	__asm { sub bl, dl }
	__asm { add bl, cl }
	__asm { mov byte ptr [ebp + 1], bl }
	__asm { jmp L_007419f2 }
	__asm { L_007419e4: }
	__asm { push 0xe4cb8c }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_007419f2: }
	__asm { push dword ptr [esp + 0x20] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push ebp }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00741150 }
	__asm { add esp, 0x10 }
	__asm { or dword ptr [esi + 0x68], 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret }
}

extern "C" void fn_00739e30();
extern "C" void fn_00741150();
// FUNCTION: ROBLOXSTUDIO 0x00741bf0
extern "C" __declspec(naked) void asm_00741bf0()
{
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esp + 0xc], 0x54494273 }
	__asm { mov byte ptr [esp + 0x10], 0 }
	__asm { test bl, 2 }
	__asm { je L_00741c7a }
	__asm { mov cl, 8 }
	__asm { cmp ebx, 3 }
	__asm { je L_00741c1b }
	__asm { mov cl, byte ptr [eax + 0x128] }
	__asm { L_00741c1b: }
	__asm { mov edx, dword ptr [esp + 0x1c] }
	__asm { mov ch, byte ptr [edx] }
	__asm { test ch, ch }
	__asm { je L_00741cc8 }
	__asm { cmp ch, cl }
	__asm { ja L_00741cc8 }
	__asm { mov bl, byte ptr [edx + 1] }
	__asm { mov byte ptr [esp + 7], bl }
	__asm { test bl, bl }
	__asm { mov ebx, dword ptr [esp + 0x20] }
	__asm { je L_00741cc8 }
	__asm { cmp byte ptr [esp + 7], cl }
	__asm { ja L_00741cc8 }
	__asm { mov al, byte ptr [edx + 2] }
	__asm { mov byte ptr [esp + 0x20], al }
	__asm { test al, al }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { je L_00741cc8 }
	__asm { cmp byte ptr [esp + 0x20], cl }
	__asm { ja L_00741cc8 }
	__asm { mov cl, byte ptr [esp + 7] }
	__asm { mov byte ptr [esp + 9], cl }
	__asm { mov cl, byte ptr [esp + 0x20] }
	__asm { mov byte ptr [esp + 8], ch }
	__asm { mov byte ptr [esp + 0xa], cl }
	__asm { mov ecx, 3 }
	__asm { jmp L_00741c96 }
	__asm { L_00741c7a: }
	__asm { mov edx, dword ptr [esp + 0x1c] }
	__asm { mov cl, byte ptr [edx + 3] }
	__asm { test cl, cl }
	__asm { je L_00741cc8 }
	__asm { cmp cl, byte ptr [eax + 0x128] }
	__asm { ja L_00741cc8 }
	__asm { mov byte ptr [esp + 8], cl }
	__asm { mov ecx, 1 }
	__asm { L_00741c96: }
	__asm { test bl, 4 }
	__asm { je L_00741caf }
	__asm { mov dl, byte ptr [edx + 4] }
	__asm { test dl, dl }
	__asm { je L_00741cc8 }
	__asm { cmp dl, byte ptr [eax + 0x128] }
	__asm { ja L_00741cc8 }
	__asm { mov byte ptr [esp + ecx + 8], dl }
	__asm { inc ecx }
	__asm { L_00741caf: }
	__asm { push ecx }
	__asm { lea ecx, [esp + 0xc] }
	__asm { push ecx }
	__asm { lea ecx, [esp + 0x14] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00741150 }
	__asm { add esp, 0x10 }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_00741cc8: }
	__asm { push 0xe4cca8 }
	__asm { push eax }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737840();
extern "C" void fn_00739e30();
extern "C" void fn_007411d0();
// FUNCTION: ROBLOXSTUDIO 0x007421e0
extern "C" __declspec(naked) void asm_007421e0()
{
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x18] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x18] }
	__asm { mov dword ptr [esp + 0xc], 0x42475273 }
	__asm { mov byte ptr [esp + 0x10], 0 }
	__asm { cmp ebx, 4 }
	__asm { jl L_0074220d }
	__asm { push 0xe4cbc0 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { L_0074220d: }
	__asm { mov byte ptr [esp + 0xb], bl }
	__asm { test esi, esi }
	__asm { je L_00742271 }
	__asm { push 1 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007411d0 }
	__asm { push 1 }
	__asm { lea eax, [esp + 0x1b] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737840 }
	__asm { push 1 }
	__asm { lea eax, [esp + 0x27] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { mov ecx, dword ptr [esi + 0x110] }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x18 }
	__asm { mov byte ptr [esp + 0x40], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x10 }
	__asm { mov byte ptr [esp + 0x41], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [esp + 0x42], al }
	__asm { push 4 }
	__asm { lea eax, [esp + 0x44] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [esp + 0x4f], cl }
	__asm { call fn_00737840 }
	__asm { add esp, 0x30 }
	__asm { L_00742271: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737840();
extern "C" void fn_00739e30();
extern "C" void fn_007411d0();
// FUNCTION: ROBLOXSTUDIO 0x00742d90
extern "C" __declspec(naked) void asm_00742d90()
{
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x28] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esp + 8], 0x7346466f }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { cmp ebx, 2 }
	__asm { jl L_00742dbd }
	__asm { push 0xe4cf90 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { L_00742dbd: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov eax, ecx }
	__asm { sar eax, 0x18 }
	__asm { mov byte ptr [esp + 0x10], al }
	__asm { mov eax, ecx }
	__asm { sar eax, 0x10 }
	__asm { mov byte ptr [esp + 0x11], al }
	__asm { mov eax, ecx }
	__asm { sar eax, 8 }
	__asm { mov byte ptr [esp + 0x12], al }
	__asm { mov byte ptr [esp + 0x13], cl }
	__asm { mov ecx, dword ptr [esp + 0x28] }
	__asm { mov eax, ecx }
	__asm { sar eax, 0x18 }
	__asm { mov byte ptr [esp + 0x14], al }
	__asm { mov eax, ecx }
	__asm { sar eax, 0x10 }
	__asm { mov byte ptr [esp + 0x15], al }
	__asm { mov eax, ecx }
	__asm { sar eax, 8 }
	__asm { mov byte ptr [esp + 0x16], al }
	__asm { mov byte ptr [esp + 0x17], cl }
	__asm { mov byte ptr [esp + 0x18], bl }
	__asm { test esi, esi }
	__asm { je L_00742e67 }
	__asm { push 9 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007411d0 }
	__asm { push 9 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737840 }
	__asm { push 9 }
	__asm { lea eax, [esp + 0x2c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { mov ecx, dword ptr [esi + 0x110] }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x18 }
	__asm { mov byte ptr [esp + 0x50], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x10 }
	__asm { mov byte ptr [esp + 0x51], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [esp + 0x52], al }
	__asm { push 4 }
	__asm { lea eax, [esp + 0x54] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [esp + 0x5f], cl }
	__asm { call fn_00737840 }
	__asm { add esp, 0x30 }
	__asm { L_00742e67: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0x14 }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737840();
extern "C" void fn_00739e30();
extern "C" void fn_007411d0();
// FUNCTION: ROBLOXSTUDIO 0x00743120
extern "C" __declspec(naked) void asm_00743120()
{
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x28] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esp + 8], 0x73594870 }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { cmp ebx, 2 }
	__asm { jl L_0074314d }
	__asm { push 0xe4cfc0 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { L_0074314d: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x18 }
	__asm { mov byte ptr [esp + 0x10], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x10 }
	__asm { mov byte ptr [esp + 0x11], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [esp + 0x12], al }
	__asm { mov byte ptr [esp + 0x13], cl }
	__asm { mov ecx, dword ptr [esp + 0x28] }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x18 }
	__asm { mov byte ptr [esp + 0x14], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x10 }
	__asm { mov byte ptr [esp + 0x15], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [esp + 0x16], al }
	__asm { mov byte ptr [esp + 0x17], cl }
	__asm { mov byte ptr [esp + 0x18], bl }
	__asm { test esi, esi }
	__asm { je L_007431f7 }
	__asm { push 9 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007411d0 }
	__asm { push 9 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737840 }
	__asm { push 9 }
	__asm { lea eax, [esp + 0x2c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { mov ecx, dword ptr [esi + 0x110] }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x18 }
	__asm { mov byte ptr [esp + 0x50], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x10 }
	__asm { mov byte ptr [esp + 0x51], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [esp + 0x52], al }
	__asm { push 4 }
	__asm { lea eax, [esp + 0x54] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [esp + 0x5f], cl }
	__asm { call fn_00737840 }
	__asm { add esp, 0x30 }
	__asm { L_007431f7: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0x14 }
	__asm { ret }
}

extern "C" void fn_00739e30();
extern "C" void fn_00741150();
// FUNCTION: ROBLOXSTUDIO 0x00743200
extern "C" __declspec(naked) void asm_00743200()
{
	__asm { sub esp, 0x14 }
	__asm { mov edx, dword ptr [esp + 0x1c] }
	__asm { push ebx }
	__asm { mov bl, byte ptr [edx + 2] }
	__asm { mov dword ptr [esp + 8], 0x454d4974 }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { cmp bl, 0xc }
	__asm { ja L_00743286 }
	__asm { cmp bl, 1 }
	__asm { jb L_00743286 }
	__asm { mov bh, byte ptr [edx + 3] }
	__asm { cmp bh, 0x1f }
	__asm { ja L_00743286 }
	__asm { cmp bh, 1 }
	__asm { jb L_00743286 }
	__asm { cmp byte ptr [edx + 4], 0x17 }
	__asm { ja L_00743286 }
	__asm { cmp byte ptr [edx + 6], 0x3c }
	__asm { ja L_00743286 }
	__asm { movzx ecx, word ptr [edx] }
	__asm { mov eax, ecx }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [esp + 0x10], al }
	__asm { mov al, byte ptr [edx + 4] }
	__asm { mov byte ptr [esp + 0x14], al }
	__asm { movzx eax, byte ptr [edx + 5] }
	__asm { mov byte ptr [esp + 0x15], al }
	__asm { mov al, byte ptr [edx + 6] }
	__asm { mov byte ptr [esp + 0x16], al }
	__asm { push 7 }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x28] }
	__asm { mov byte ptr [esp + 0x21], cl }
	__asm { mov byte ptr [esp + 0x22], bl }
	__asm { mov byte ptr [esp + 0x23], bh }
	__asm { call fn_00741150 }
	__asm { add esp, 0x10 }
	__asm { pop ebx }
	__asm { add esp, 0x14 }
	__asm { ret }
	__asm { L_00743286: }
	__asm { push 0xe4cfe8 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop ebx }
	__asm { add esp, 0x14 }
	__asm { ret }
}

extern "C" char g_00e105b0[];
extern "C" void fn_00741150();
// FUNCTION: ROBLOXSTUDIO 0x007432a0
extern "C" __declspec(naked) void asm_007432a0()
{
	__asm { sub esp, 0x48 }
	__asm { fld qword ptr [esp + 0x54] }
	__asm { mov al, byte ptr [esp + 0x50] }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [esp + 0x10], al }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe4cfb8 }
	__asm { lea eax, [esp + 0x15] }
	__asm { push 0x3f }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x14], 0x4c414373 }
	__asm { mov byte ptr [esp + 0x18], 0 }
	__asm { call dword ptr [g_00e105b0] }
	__asm { lea ecx, [esp + 0x1d] }
	__asm { add esp, 0x14 }
	__asm { lea edx, [ecx + 1] }
	__asm { mov edi, edi }
	__asm { L_007432e0: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_007432e0 }
	__asm { fld qword ptr [esp + 0x5c] }
	__asm { push ebx }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { sub ecx, edx }
	__asm { fstp qword ptr [esp] }
	__asm { mov eax, 0x40 }
	__asm { lea ebx, [ecx + 2] }
	__asm { push 0xe4cfb8 }
	__asm { sub eax, ebx }
	__asm { lea esi, [esp + 0x1c] }
	__asm { push eax }
	__asm { add esi, ebx }
	__asm { push esi }
	__asm { call dword ptr [g_00e105b0] }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [esi + 1] }
	__asm { L_00743318: }
	__asm { mov al, byte ptr [esi] }
	__asm { inc esi }
	__asm { test al, al }
	__asm { jne L_00743318 }
	__asm { sub esi, ecx }
	__asm { lea eax, [esi + ebx] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x60] }
	__asm { call fn_00741150 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0x48 }
	__asm { ret }
}

extern "C" void fn_00739970();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00743600
extern "C" __declspec(naked) void asm_00743600()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { movzx ecx, byte ptr [esi + 0x12b] }
	__asm { movzx eax, byte ptr [esi + 0x128] }
	__asm { imul ecx, eax }
	__asm { cmp ecx, 8 }
	__asm { jl L_00743627 }
	__asm { shr ecx, 3 }
	__asm { imul ecx, dword ptr [esi + 0xc8] }
	__asm { jmp L_00743634 }
	__asm { L_00743627: }
	__asm { imul ecx, dword ptr [esi + 0xc8] }
	__asm { add ecx, 7 }
	__asm { shr ecx, 3 }
	__asm { L_00743634: }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00739970 }
	__asm { mov dword ptr [esi + 0xec], eax }
	__asm { add esp, 8 }
	__asm { mov byte ptr [eax], 0 }
	__asm { test byte ptr [esi + 0x125], 0x10 }
	__asm { je L_0074366e }
	__asm { mov eax, dword ptr [esi + 0xd8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00739970 }
	__asm { mov dword ptr [esi + 0xf0], eax }
	__asm { add esp, 8 }
	__asm { mov byte ptr [eax], 1 }
	__asm { L_0074366e: }
	__asm { test byte ptr [esi + 0x125], 0xe0 }
	__asm { je L_007436fd }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00739970 }
	__asm { push edi }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0xe8], eax }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0x14 }
	__asm { test byte ptr [esi + 0x125], 0x20 }
	__asm { je L_007436b7 }
	__asm { mov eax, dword ptr [esi + 0xd8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00739970 }
	__asm { mov dword ptr [esi + 0xf4], eax }
	__asm { add esp, 8 }
	__asm { mov byte ptr [eax], 2 }
	__asm { L_007436b7: }
	__asm { test byte ptr [esi + 0x125], 0x40 }
	__asm { je L_007436da }
	__asm { mov eax, dword ptr [esi + 0xd8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00739970 }
	__asm { mov dword ptr [esi + 0xf8], eax }
	__asm { add esp, 8 }
	__asm { mov byte ptr [eax], 3 }
	__asm { L_007436da: }
	__asm { test byte ptr [esi + 0x125], 0x80 }
	__asm { je L_007436fd }
	__asm { mov eax, dword ptr [esi + 0xd8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00739970 }
	__asm { mov dword ptr [esi + 0xfc], eax }
	__asm { add esp, 8 }
	__asm { mov byte ptr [eax], 4 }
	__asm { L_007436fd: }
	__asm { cmp byte ptr [esi + 0x123], 0 }
	__asm { mov eax, dword ptr [esi + 0xcc] }
	__asm { pop edi }
	__asm { je L_0074372d }
	__asm { test byte ptr [esi + 0x70], 2 }
	__asm { jne L_0074372d }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { mov dword ptr [esi + 0xd0], eax }
	__asm { mov eax, dword ptr [esi + 0xc8] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { jmp L_00743739 }
	__asm { L_0074372d: }
	__asm { mov dword ptr [esi + 0xd0], eax }
	__asm { mov eax, dword ptr [esi + 0xc8] }
	__asm { L_00743739: }
	__asm { mov dword ptr [esi + 0xd4], eax }
	__asm { mov eax, dword ptr [esi + 0xb0] }
	__asm { mov dword ptr [esi + 0x84], eax }
	__asm { mov eax, dword ptr [esi + 0xac] }
	__asm { mov dword ptr [esi + 0x80], eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007458b0();
extern "C" void fn_00745b90();
// FUNCTION: ROBLOXSTUDIO 0x007457f0
extern "C" __declspec(naked) void asm_007457f0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0x20 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call eax }
	__asm { mov edi, eax }
	__asm { mov dword ptr [esi + 0x168], edi }
	__asm { push esi }
	__asm { mov dword ptr [edi], 0x746220 }
	__asm { mov dword ptr [edi + 4], 0x7463d0 }
	__asm { mov dword ptr [edi + 8], 0x746400 }
	__asm { mov byte ptr [edi + 0xd], 0 }
	__asm { call fn_007458b0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [esi + 0xcc], 0 }
	__asm { je L_0074583f }
	__asm { push esi }
	__asm { call fn_00745b90 }
	__asm { add esp, 4 }
	__asm { jmp L_00745850 }
	__asm { L_0074583f: }
	__asm { mov byte ptr [esi + 0xf8], 0 }
	__asm { mov dword ptr [esi + 0xc8], 1 }
	__asm { L_00745850: }
	__asm { cmp byte ptr [esi + 0xf8], 0 }
	__asm { je L_00745869 }
	__asm { cmp byte ptr [esi + 0xd1], 0 }
	__asm { jne L_00745869 }
	__asm { mov byte ptr [esi + 0xd2], 1 }
	__asm { L_00745869: }
	__asm { cmp byte ptr [esp + 0x10], 0 }
	__asm { je L_00745881 }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [esi + 0xd2], al }
	__asm { sete al }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { jmp L_00745888 }
	__asm { L_00745881: }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { L_00745888: }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { cmp byte ptr [esi + 0xd2], 0 }
	__asm { mov eax, dword ptr [esi + 0xc8] }
	__asm { je L_007458a7 }
	__asm { add eax, eax }
	__asm { L_007458a7: }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00745f40
extern "C" __declspec(naked) void asm_00745f40()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0xcc] }
	__asm { test ecx, ecx }
	__asm { je L_00745fb4 }
	__asm { mov eax, dword ptr [esi + 0x168] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { xor edi, edi }
	__asm { lea eax, [eax + eax*8] }
	__asm { lea ebx, [ecx + eax*4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi + 0x110], eax }
	__asm { cmp dword ptr [ebx], edi }
	__asm { jle L_00745f8c }
	__asm { lea ecx, [esi + 0x114] }
	__asm { lea edx, [ebx + 4] }
	__asm { L_00745f77: }
	__asm { mov eax, dword ptr [edx] }
	__asm { imul eax, eax, 0x58 }
	__asm { add eax, dword ptr [esi + 0x54] }
	__asm { inc edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea edx, [edx + 4] }
	__asm { lea ecx, [ecx + 4] }
	__asm { cmp edi, dword ptr [ebx] }
	__asm { jl L_00745f77 }
	__asm { L_00745f8c: }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [esi + 0x158], eax }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x15c], eax }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { mov dword ptr [esi + 0x160], eax }
	__asm { mov eax, dword ptr [ebx + 0x20] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x164], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00745fb4: }
	__asm { cmp dword ptr [esi + 0x4c], 4 }
	__asm { jle L_00745fde }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x1b }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 0x1c], 4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00745fde: }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi + 0x110], eax }
	__asm { test eax, eax }
	__asm { jle L_00746008 }
	__asm { xor edx, edx }
	__asm { lea edi, [esi + 0x114] }
	__asm { L_00745ff5: }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { add eax, edx }
	__asm { mov dword ptr [edi], eax }
	__asm { inc ecx }
	__asm { add edx, 0x58 }
	__asm { lea edi, [edi + 4] }
	__asm { cmp ecx, dword ptr [esi + 0x4c] }
	__asm { jl L_00745ff5 }
	__asm { L_00746008: }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x158], 0 }
	__asm { mov dword ptr [esi + 0x15c], 0x3f }
	__asm { mov dword ptr [esi + 0x160], 0 }
	__asm { mov dword ptr [esi + 0x164], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00749280();
// FUNCTION: ROBLOXSTUDIO 0x00749750
extern "C" __declspec(naked) void asm_00749750()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push 7 }
	__asm { push 0x7f }
	__asm { push esi }
	__asm { call fn_00749280 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00749800 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov byte ptr [eax], 0xff }
	__asm { inc dword ptr [esi] }
	__asm { dec dword ptr [esi + 4] }
	__asm { push edi }
	__asm { jne L_007497a2 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { push eax }
	__asm { mov edi, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_007497fb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_007497a2: }
	__asm { mov cl, byte ptr [esp + 0x10] }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub cl, 0x30 }
	__asm { mov byte ptr [eax], cl }
	__asm { inc dword ptr [esi] }
	__asm { dec dword ptr [esi + 4] }
	__asm { jne L_007497d1 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { push eax }
	__asm { mov edi, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_007497fb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_007497d1: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [eax + 0x110], ecx }
	__asm { jle L_007497f6 }
	__asm { lea edx, [esi + 0x10] }
	__asm { L_007497e1: }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { inc ecx }
	__asm { lea edx, [edx + 4] }
	__asm { cmp ecx, dword ptr [eax + 0x110] }
	__asm { jl L_007497e1 }
	__asm { L_007497f6: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007497fb: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00749800: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0074e060();
// FUNCTION: ROBLOXSTUDIO 0x0074e180
extern "C" __declspec(naked) void asm_0074e180()
{
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { cmp ecx, ebx }
	__asm { jge L_0074e1b3 }
	__asm { push ebx }
	__asm { push ecx }
	__asm { push dword ptr [esp + 0x18] }
	__asm { push edi }
	__asm { call fn_0074e060 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { jne L_0074e1ab }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0074e1ab: }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { jmp L_0074e1b7 }
	__asm { L_0074e1b3: }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { L_0074e1b7: }
	__asm { sub ecx, ebx }
	__asm { mov eax, edx }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x1c] }
	__asm { sar eax, cl }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx*4 + 0xe4d208] }
	__asm { and esi, eax }
	__asm { cmp esi, dword ptr [ebp + ebx*4] }
	__asm { jle L_0074e201 }
	__asm { L_0074e1d2: }
	__asm { add esi, esi }
	__asm { cmp ecx, 1 }
	__asm { jge L_0074e1f0 }
	__asm { push 1 }
	__asm { push ecx }
	__asm { push edx }
	__asm { push edi }
	__asm { call fn_0074e060 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_0074e22f }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { L_0074e1f0: }
	__asm { dec ecx }
	__asm { mov eax, edx }
	__asm { sar eax, cl }
	__asm { inc ebx }
	__asm { and eax, 1 }
	__asm { or esi, eax }
	__asm { cmp esi, dword ptr [ebp + ebx*4] }
	__asm { jg L_0074e1d2 }
	__asm { L_0074e201: }
	__asm { mov dword ptr [edi + 8], edx }
	__asm { mov dword ptr [edi + 0xc], ecx }
	__asm { cmp ebx, 0x10 }
	__asm { jle L_0074e237 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { push -1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [eax + 0x14], 0x79 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0074e22f: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0074e237: }
	__asm { mov eax, dword ptr [ebp + ebx*4 + 0x48] }
	__asm { add eax, dword ptr [ebp + 0x8c] }
	__asm { movzx eax, byte ptr [eax + esi + 0x11] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00751760();
extern "C" void fn_007518b0();
extern "C" void fn_007520c0();
// FUNCTION: ROBLOXSTUDIO 0x00751590
extern "C" __declspec(naked) void asm_00751590()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push 0x58 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push esi }
	__asm { call eax }
	__asm { mov dword ptr [esi + 0x1ac], eax }
	__asm { mov dword ptr [eax], 0x752110 }
	__asm { mov dword ptr [eax + 8], 0x7521f0 }
	__asm { mov dword ptr [eax + 0xc], 0x752200 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax + 0x44], 0 }
	__asm { mov dword ptr [eax + 0x34], 0 }
	__asm { cmp dword ptr [esi + 0x64], 4 }
	__asm { jle L_007515ee }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x39 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 0x18], 4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007515ee: }
	__asm { cmp dword ptr [esi + 0x54], 0x100 }
	__asm { jle L_00751613 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x3b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 0x18], 0x100 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00751613: }
	__asm { push esi }
	__asm { call fn_00751760 }
	__asm { push esi }
	__asm { call fn_007518b0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x4c], 2 }
	__asm { jne L_00751631 }
	__asm { push esi }
	__asm { call fn_007520c0 }
	__asm { add esp, 4 }
	__asm { L_00751631: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00752450();
extern "C" void fn_00752850();
extern "C" void fn_007529b0();
// FUNCTION: ROBLOXSTUDIO 0x00752b40
extern "C" __declspec(naked) void asm_00752b40()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 8] }
	__asm { push ebp }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x14] }
	__asm { push edi }
	__asm { mov eax, esi }
	__asm { shl eax, 5 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { push ebx }
	__asm { call eax }
	__asm { mov edi, eax }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0x1f }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0x3f }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0x1f }
	__asm { call fn_00752450 }
	__asm { push esi }
	__asm { push 1 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00752850 }
	__asm { mov ebp, eax }
	__asm { add esp, 0x24 }
	__asm { xor esi, esi }
	__asm { test ebp, ebp }
	__asm { jle L_00752bb6 }
	__asm { L_00752ba3: }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_007529b0 }
	__asm { inc esi }
	__asm { add esp, 0xc }
	__asm { add edi, 0x20 }
	__asm { cmp esi, ebp }
	__asm { jl L_00752ba3 }
	__asm { L_00752bb6: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebx + 0x70], ebp }
	__asm { mov dword ptr [eax + 0x14], 0x62 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 1 }
	__asm { mov dword ptr [eax + 0x18], ebp }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044b730();
// FUNCTION: ROBLOXSTUDIO 0x0076f650
extern "C" __declspec(naked) void asm_0076f650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0076f69b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0076f69b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0076f6e2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe4dde8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe4ddf0 }
	__asm { mov dword ptr [esi + 8], 0xe4de00 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xe4de08 }
	__asm { mov dword ptr [esi + 8], 0xe4de18 }
	__asm { jmp L_0076f6e4 }
	__asm { L_0076f6e2: }
	__asm { xor esi, esi }
	__asm { L_0076f6e4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0076f701 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0076f701: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0044b730();
// FUNCTION: ROBLOXSTUDIO 0x0076f720
extern "C" __declspec(naked) void asm_0076f720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0076f76b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0076f76b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0076f7b2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe4dde8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe4de20 }
	__asm { mov dword ptr [esi + 8], 0xe4de30 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xe4de38 }
	__asm { mov dword ptr [esi + 8], 0xe4de48 }
	__asm { jmp L_0076f7b4 }
	__asm { L_0076f7b2: }
	__asm { xor esi, esi }
	__asm { L_0076f7b4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0044b730 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0076f7d1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0076f7d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00656f60();
// FUNCTION: ROBLOXSTUDIO 0x0076f7f0
extern "C" __declspec(naked) void asm_0076f7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0076f83b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0076f83b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_0076f882 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe38b54 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe4ddb0 }
	__asm { mov dword ptr [esi + 8], 0xe4ddc0 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xe4ddc8 }
	__asm { mov dword ptr [esi + 8], 0xe4ddd8 }
	__asm { jmp L_0076f884 }
	__asm { L_0076f882: }
	__asm { xor esi, esi }
	__asm { L_0076f884: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00656f60 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_0076f8a1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_0076f8a1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004226b0();
extern "C" void fn_00657110();
extern "C" void fn_0076f7f0();
extern "C" void fn_0076f8c0();
extern "C" void fn_00a10090();
// FUNCTION: ROBLOXSTUDIO 0x0076fa30
extern "C" __declspec(naked) void asm_0076fa30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd47a08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_0076fa68 }
	__asm { push esi }
	__asm { call fn_00a10090 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0xe8], eax }
	__asm { L_0076fa68: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0x58 }
	__asm { mov dword ptr [ebp - 0x14], 0x76fe40 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_0076f7f0 }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00657110 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0076faae }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0076faae: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0x76fbb0 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_0076f8c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0052c370();
extern "C" void fn_0052e690();
extern "C" void fn_0063edc0();
extern "C" void fn_007cd560();
extern "C" void fn_00a10090();
// FUNCTION: ROBLOXSTUDIO 0x0076fd70
extern "C" __declspec(naked) void asm_0076fd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_0076fdc8 }
	__asm { add eax, 0x1c }
	__asm { je L_0076fdc8 }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { call fn_0052c370 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0076fdc8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0076fdc8 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_0076fdba }
	__asm { push esi }
	__asm { call fn_00a10090 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0xe8], eax }
	__asm { L_0076fdba: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076fdc8: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test eax, eax }
	__asm { je L_0076fdf1 }
	__asm { add eax, 0x1c }
	__asm { je L_0076fdf1 }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { call fn_0063edc0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0076fdf1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_0076fe17 }
	__asm { L_0076fdf1: }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { test ebx, ebx }
	__asm { je L_0076fe34 }
	__asm { add ebx, 0x1c }
	__asm { je L_0076fe34 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0052e690 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0076fe34 }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_0076fe34 }
	__asm { L_0076fe17: }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_0076fe2d }
	__asm { push esi }
	__asm { call fn_00a10090 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0xe8], eax }
	__asm { L_0076fe2d: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { L_0076fe34: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0063ee40();
extern "C" void fn_0063eec0();
extern "C" void fn_00640970();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00770c10
extern "C" __declspec(naked) void asm_00770c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, dword ptr [ecx + 4] }
	__asm { je L_00770c23 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00770c23: }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00640970 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00770ca4 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [esi + 0xe8] }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { and bl, 1 }
	__asm { call fn_0063eec0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00770c78 }
	__asm { mov edx, edi }
	__asm { test edx, edx }
	__asm { je L_00770c78 }
	__asm { mov edx, dword ptr [edx + 0xc8] }
	__asm { test edx, edx }
	__asm { je L_00770c92 }
	__asm { cmp edx, 5 }
	__asm { je L_00770c92 }
	__asm { movzx ecx, bl }
	__asm { pop ebx }
	__asm { xor eax, eax }
	__asm { cmp edx, 3 }
	__asm { pop edi }
	__asm { cmove eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00770c78: }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_0063ee40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00770c9b }
	__asm { mov eax, edi }
	__asm { test eax, eax }
	__asm { je L_00770c9b }
	__asm { L_00770c92: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00770c9b: }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00770ca4: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00770db0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00770cb0
extern "C" __declspec(naked) void asm_00770cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov edi, dword ptr [ebp + 0x20] }
	__asm { lea ecx, [esi + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], edi }
	__asm { mov word ptr [esi + 4], 0x101 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { push 0xe303d0 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x20], 0xffffffff }
	__asm { mov dword ptr [esi + 0x24], 0xffffffff }
	__asm { mov word ptr [esi + 0x28], 0 }
	__asm { mov byte ptr [esi + 0x2a], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { call fn_00770db0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00770d7a }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { push 0xe4df88 }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { push 0xe4df8c }
	__asm { push eax }
	__asm { call fn_00770db0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_00770db0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00770d7a }
	__asm { and edi, 0xfff00000 }
	__asm { cmp edi, 0x2000000 }
	__asm { jb L_00770d7a }
	__asm { mov byte ptr [esi + 5], 1 }
	__asm { jmp L_00770d7e }
	__asm { L_00770d7a: }
	__asm { mov byte ptr [esi + 5], 0 }
	__asm { L_00770d7e: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00770d8f }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00770d8f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10528[];
extern "C" void fn_004033d0();
extern "C" void fn_00410540();
extern "C" void fn_00773740();
extern "C" void fn_007739a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00773870
extern "C" __declspec(naked) void asm_00773870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1aac0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { jne L_007738c9 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp + 8], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x28], 0xe19198 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00410540 }
	__asm { L_007738c9: }
	__asm { add eax, 8 }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00773740 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004033d0 }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { je L_00773921 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00773921: }
	__asm { mov eax, 0x7738d8 }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00773b20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00773a60
extern "C" __declspec(naked) void asm_00773a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ab10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_00773b20 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00773afa }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00773afa: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00773b0b }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00773b0b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00403540();
extern "C" void fn_00833c40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00773b20
extern "C" __declspec(naked) void asm_00773b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ab10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, 0xe4e754 }
	__asm { mov ecx, esi }
	__asm { call fn_00833c40 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_00773bc9 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00773bc9: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { jb L_00773be3 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00773be3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00403540();
extern "C" void fn_00773cd0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00773c00
extern "C" __declspec(naked) void asm_00773c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ab30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_00773cd0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00773c90 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00773c90: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { jb L_00773cb3 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00773cb3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102d4[];
extern "C" char g_00e102d8[];
extern "C" char g_00e10318[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10328[];
extern "C" void fn_00424610();
extern "C" void fn_00426140();
extern "C" void fn_004270c0();
extern "C" void fn_004276b0();
// FUNCTION: ROBLOXSTUDIO 0x00773f90
extern "C" __declspec(naked) void asm_00773f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ab9d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xb8 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 0xc0], 0x1004fbc }
	__asm { mov dword ptr [ebp - 0xb0], 0x1004fb4 }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xa8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 2 }
	__asm { call dword ptr [g_00e10328] }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xc0], 0xe18340 }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ebp + ecx - 0xc4], eax }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [ebp - 0xa8], 0xe1827c }
	__asm { mov dword ptr [ebp - 0x70], 0 }
	__asm { mov dword ptr [ebp - 0x6c], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0xb0] }
	__asm { push 0xe4e2e0 }
	__asm { push 0x11df054 }
	__asm { push 0xe4e2e4 }
	__asm { push 0x11df03c }
	__asm { push 0xe4e2ec }
	__asm { push 0xe4e2f4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004270c0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004270c0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004270c0 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00424610 }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xc0], 0xe18340 }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ebp + ecx - 0xc4], eax }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { mov dword ptr [ebp - 0xa8], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebp - 0xa0] }
	__asm { call dword ptr [g_00e102d8] }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00775460();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007753b0
extern "C" __declspec(naked) void asm_007753b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { jne L_007753d9 }
	__asm { xor esi, esi }
	__asm { jmp L_007753e1 }
	__asm { L_007753d9: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_007753e1 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_007753e1: }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00775414 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00775414: }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_0077541f }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_0077541f: }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { jb L_0077542a }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_0077542a: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00775460 }
	__asm { add esp, 0x1c }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_00775452 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00775452: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040f890();
extern "C" void fn_0042e3d0();
extern "C" void fn_006b98c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00776170
extern "C" __declspec(naked) void asm_00776170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1afb9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov ebx, dword ptr [ebp + 0x1c] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test ebx, ebx }
	__asm { je L_00776236 }
	__asm { L_007761c0: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { cmovae eax, dword ptr [ebp + 0xc] }
	__asm { mov al, byte ptr [eax + esi] }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { cmp al, 0x2f }
	__asm { jbe L_007761f7 }
	__asm { cmp al, 0x3a }
	__asm { jb L_007761dd }
	__asm { cmp al, 0x40 }
	__asm { jbe L_007761f7 }
	__asm { L_007761dd: }
	__asm { cmp al, 0x5b }
	__asm { jb L_007761e5 }
	__asm { cmp al, 0x60 }
	__asm { jbe L_007761f7 }
	__asm { L_007761e5: }
	__asm { cmp al, 0x7b }
	__asm { jae L_007761f7 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, edi }
	__asm { push 1 }
	__asm { call fn_0042e3d0 }
	__asm { jmp L_00776231 }
	__asm { L_007761f7: }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push 0xe4e78c }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jb L_00776231 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00776231: }
	__asm { inc esi }
	__asm { cmp esi, ebx }
	__asm { jb L_007761c0 }
	__asm { L_00776236: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00776247 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00776247: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00776cb0();
extern "C" void fn_007786c0();
extern "C" void fn_007795e0();
// FUNCTION: ROBLOXSTUDIO 0x00776390
extern "C" __declspec(naked) void asm_00776390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b0f3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xbc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0xc8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007786c0 }
	__asm { mov al, byte ptr [ebp + 0xb8] }
	__asm { mov byte ptr [ebp - 0x18], al }
	__asm { mov eax, dword ptr [ebp - 0xc8] }
	__asm { sub esp, 0xb8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp - 0xc0] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007786c0 }
	__asm { movzx eax, byte ptr [ebp - 0x18] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0xa8], al }
	__asm { call fn_00776cb0 }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_007795e0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007795e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xbc }
}

extern "C" void fn_00402150();
extern "C" void fn_00776f10();
extern "C" void fn_00777ef0();
// FUNCTION: ROBLOXSTUDIO 0x00776450
extern "C" __declspec(naked) void asm_00776450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1aff0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x80 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00777ef0 }
	__asm { mov al, byte ptr [ebp + 0x80] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0x70], al }
	__asm { call fn_00776f10 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x60] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007764d9 }
	__asm { test al, 1 }
	__asm { jne L_007764d2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007764d2 }
	__asm { lea ecx, [ebp + 0x68] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007764d2: }
	__asm { mov dword ptr [ebp + 0x60], 0 }
	__asm { L_007764d9: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00402150 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x84 }
}

extern "C" void fn_00777170();
extern "C" void fn_00778960();
extern "C" void fn_007794e0();
// FUNCTION: ROBLOXSTUDIO 0x007765b0
extern "C" __declspec(naked) void asm_007765b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xa8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00778960 }
	__asm { mov al, byte ptr [ebp + 0xa8] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0x98], al }
	__asm { call fn_00777170 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x88] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00776645 }
	__asm { test al, 1 }
	__asm { jne L_0077663b }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0077663b }
	__asm { lea ecx, [ebp + 0x90] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0077663b: }
	__asm { mov dword ptr [ebp + 0x88], 0 }
	__asm { L_00776645: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007794e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xac }
}

extern "C" void fn_007765b0();
extern "C" void fn_00778960();
extern "C" void fn_007794e0();
// FUNCTION: ROBLOXSTUDIO 0x00776670
extern "C" __declspec(naked) void asm_00776670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0xa8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00778960 }
	__asm { mov al, byte ptr [ebp + 0xa8] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0x98], al }
	__asm { call fn_007765b0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x88] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00776701 }
	__asm { test al, 1 }
	__asm { jne L_007766f7 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007766f7 }
	__asm { lea ecx, [ebp + 0x90] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007766f7: }
	__asm { mov dword ptr [ebp + 0x88], 0 }
	__asm { L_00776701: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007794e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xac }
}

extern "C" void fn_00403540();
extern "C" void fn_00778ff0();
// FUNCTION: ROBLOXSTUDIO 0x00776730
extern "C" __declspec(naked) void asm_00776730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b010 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movzx eax, byte ptr [esi + 0xa8] }
	__asm { push eax }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi + 0x88] }
	__asm { test edx, edx }
	__asm { je L_007767c4 }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_007767ad }
	__asm { mov eax, dword ptr [esi + 0x90] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x94] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x98] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x9c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0xa0] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0xa4] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { jmp L_007767c4 }
	__asm { L_007767ad: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x90] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007767c4: }
	__asm { movzx eax, byte ptr [esi + 0x80] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x68] }
	__asm { push eax }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x50] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00778ff0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x94 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00778ff0();
// FUNCTION: ROBLOXSTUDIO 0x00776840
extern "C" __declspec(naked) void asm_00776840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41938 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movzx eax, byte ptr [esi + 0x70] }
	__asm { push eax }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { test ecx, ecx }
	__asm { je L_007768b9 }
	__asm { mov dword ptr [edx], ecx }
	__asm { test cl, 1 }
	__asm { je L_007768a5 }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x60] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x64] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x6c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_007768b9 }
	__asm { L_007768a5: }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 0x58] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007768b9: }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00778ff0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x74 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00402150();
extern "C" void fn_00777ef0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00776a80
extern "C" __declspec(naked) void asm_00776a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b07e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 0x80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00776ad9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], ecx }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00777ef0 }
	__asm { mov al, byte ptr [ebp + 0x80] }
	__asm { mov byte ptr [edi + 0x78], al }
	__asm { pop esi }
	__asm { jmp L_00776adb }
	__asm { L_00776ad9: }
	__asm { xor edi, edi }
	__asm { L_00776adb: }
	__asm { mov eax, dword ptr [ebp + 0x88] }
	__asm { mov dword ptr [eax], edi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x88], eax }
	__asm { mov eax, dword ptr [ebp + 0x60] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_00776b1b }
	__asm { test al, 1 }
	__asm { jne L_00776b14 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00776b14 }
	__asm { lea ecx, [ebp + 0x68] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00776b14: }
	__asm { mov dword ptr [ebp + 0x60], 0 }
	__asm { L_00776b1b: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00402150 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x88 }
}

extern "C" void fn_00778960();
extern "C" void fn_007794e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00776b40
extern "C" __declspec(naked) void asm_00776b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b0ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 0xa8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00776b9c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], ecx }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00778960 }
	__asm { mov al, byte ptr [ebp + 0xa8] }
	__asm { mov byte ptr [edi + 0xa0], al }
	__asm { pop esi }
	__asm { jmp L_00776b9e }
	__asm { L_00776b9c: }
	__asm { xor edi, edi }
	__asm { L_00776b9e: }
	__asm { mov eax, dword ptr [ebp + 0xb0] }
	__asm { mov dword ptr [eax], edi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0xb0], eax }
	__asm { mov eax, dword ptr [ebp + 0x88] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_00776be7 }
	__asm { test al, 1 }
	__asm { jne L_00776bdd }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00776bdd }
	__asm { lea ecx, [ebp + 0x90] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00776bdd: }
	__asm { mov dword ptr [ebp + 0x88], 0 }
	__asm { L_00776be7: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007794e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xb0 }
}

extern "C" void fn_0040c260();
extern "C" void fn_007769f0();
extern "C" void fn_007786c0();
extern "C" void fn_007795e0();
// FUNCTION: ROBLOXSTUDIO 0x00776c10
extern "C" __declspec(naked) void asm_00776c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b0c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00776c83 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc0] }
	__asm { sub esp, 0xb8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007786c0 }
	__asm { mov al, byte ptr [ebp + 0xb8] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0xa8], al }
	__asm { call fn_007769f0 }
	__asm { mov bl, 1 }
	__asm { jmp L_00776c85 }
	__asm { L_00776c83: }
	__asm { xor bl, bl }
	__asm { L_00776c85: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007795e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc0 }
}

extern "C" void fn_00776c10();
extern "C" void fn_007786c0();
extern "C" void fn_007795e0();
// FUNCTION: ROBLOXSTUDIO 0x00776cb0
extern "C" __declspec(naked) void asm_00776cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b0f3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xbc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0xc8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_007786c0 }
	__asm { mov al, byte ptr [ebp + 0xb8] }
	__asm { mov byte ptr [ebp - 0x18], al }
	__asm { mov eax, dword ptr [ebp - 0xc8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0xb8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp - 0xc0] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007786c0 }
	__asm { mov al, byte ptr [ebp - 0x18] }
	__asm { mov byte ptr [esi + 0xa8], al }
	__asm { mov esi, 0xe4ef7c }
	__asm { mov ecx, esi }
	__asm { call fn_00776c10 }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_007795e0 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007795e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xb8 }
}

extern "C" void fn_00402150();
extern "C" void fn_0040c260();
extern "C" void fn_00776a80();
extern "C" void fn_00777ef0();
// FUNCTION: ROBLOXSTUDIO 0x00776d80
extern "C" __declspec(naked) void asm_00776d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b113 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00776df0 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x88] }
	__asm { sub esp, 0x80 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00777ef0 }
	__asm { mov al, byte ptr [ebp + 0x80] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0x70], al }
	__asm { call fn_00776a80 }
	__asm { mov bl, 1 }
	__asm { jmp L_00776df2 }
	__asm { L_00776df0: }
	__asm { xor bl, bl }
	__asm { L_00776df2: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x88], eax }
	__asm { mov eax, dword ptr [ebp + 0x60] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00776e29 }
	__asm { test al, 1 }
	__asm { jne L_00776e22 }
	__asm { and eax, 0xfffffffe }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_00776e22 }
	__asm { lea eax, [ebp + 0x68] }
	__asm { push 2 }
	__asm { push eax }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { L_00776e22: }
	__asm { mov dword ptr [ebp + 0x60], 0 }
	__asm { L_00776e29: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00402150 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x88 }
}

extern "C" void fn_00402150();
extern "C" void fn_00776d80();
extern "C" void fn_00777ef0();
// FUNCTION: ROBLOXSTUDIO 0x00776e50
extern "C" __declspec(naked) void asm_00776e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b113 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x88] }
	__asm { sub esp, 0x80 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00777ef0 }
	__asm { mov al, byte ptr [ebp + 0x80] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0x70], al }
	__asm { call fn_00776d80 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x88], eax }
	__asm { mov ecx, dword ptr [ebp + 0x60] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00776ee7 }
	__asm { test cl, 1 }
	__asm { jne L_00776ee0 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00776ee0 }
	__asm { lea ecx, [ebp + 0x68] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00776ee0: }
	__asm { mov dword ptr [ebp + 0x60], 0 }
	__asm { L_00776ee7: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00402150 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x84 }
}

extern "C" void fn_00402150();
extern "C" void fn_00776e50();
extern "C" void fn_00777ef0();
// FUNCTION: ROBLOXSTUDIO 0x00776f10
extern "C" __declspec(naked) void asm_00776f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1aff0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x80 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00777ef0 }
	__asm { mov al, byte ptr [ebp + 0x80] }
	__asm { mov byte ptr [esi + 0x70], al }
	__asm { mov esi, 0xe4ef5c }
	__asm { mov ecx, esi }
	__asm { call fn_00776e50 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x60] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00776fa5 }
	__asm { test al, 1 }
	__asm { jne L_00776f9e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00776f9e }
	__asm { lea ecx, [ebp + 0x68] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00776f9e: }
	__asm { mov dword ptr [ebp + 0x60], 0 }
	__asm { L_00776fa5: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00402150 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x80 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00776b40();
extern "C" void fn_00778960();
extern "C" void fn_007794e0();
// FUNCTION: ROBLOXSTUDIO 0x00776fc0
extern "C" __declspec(naked) void asm_00776fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b133 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00777033 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xb0] }
	__asm { sub esp, 0xa8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00778960 }
	__asm { mov al, byte ptr [ebp + 0xa8] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0x98], al }
	__asm { call fn_00776b40 }
	__asm { mov bl, 1 }
	__asm { jmp L_00777035 }
	__asm { L_00777033: }
	__asm { xor bl, bl }
	__asm { L_00777035: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0xb0], eax }
	__asm { mov eax, dword ptr [ebp + 0x88] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00777075 }
	__asm { test al, 1 }
	__asm { jne L_0077706b }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0077706b }
	__asm { lea ecx, [ebp + 0x90] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0077706b: }
	__asm { mov dword ptr [ebp + 0x88], 0 }
	__asm { L_00777075: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007794e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xb0 }
}

extern "C" void fn_00776fc0();
extern "C" void fn_00778960();
extern "C" void fn_007794e0();
// FUNCTION: ROBLOXSTUDIO 0x007770a0
extern "C" __declspec(naked) void asm_007770a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b133 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0xb0] }
	__asm { sub esp, 0xa8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00778960 }
	__asm { mov al, byte ptr [ebp + 0xa8] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0x98], al }
	__asm { call fn_00776fc0 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0xb0], eax }
	__asm { mov ecx, dword ptr [ebp + 0x88] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00777143 }
	__asm { test cl, 1 }
	__asm { jne L_00777139 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00777139 }
	__asm { lea ecx, [ebp + 0x90] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00777139: }
	__asm { mov dword ptr [ebp + 0x88], 0 }
	__asm { L_00777143: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007794e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xac }
}

extern "C" void fn_007770a0();
extern "C" void fn_00778960();
extern "C" void fn_007794e0();
// FUNCTION: ROBLOXSTUDIO 0x00777170
extern "C" __declspec(naked) void asm_00777170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xa8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00778960 }
	__asm { mov al, byte ptr [ebp + 0xa8] }
	__asm { mov byte ptr [esi + 0x98], al }
	__asm { mov esi, 0xe4ef84 }
	__asm { mov ecx, esi }
	__asm { call fn_007770a0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x88] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00777211 }
	__asm { test al, 1 }
	__asm { jne L_00777207 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00777207 }
	__asm { lea ecx, [ebp + 0x90] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00777207: }
	__asm { mov dword ptr [ebp + 0x88], 0 }
	__asm { L_00777211: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007794e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xa8 }
}

extern "C" void fn_00402150();
extern "C" void fn_00778240();
extern "C" void fn_00778ff0();
// FUNCTION: ROBLOXSTUDIO 0x00777a10
extern "C" __declspec(naked) void asm_00777a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x78] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { test eax, eax }
	__asm { je L_00777a90 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00777a79 }
	__asm { mov eax, dword ptr [ebp + 0x60] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x64] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x68] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x6c] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x70] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x74] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_00777a90 }
	__asm { L_00777a79: }
	__asm { mov ecx, dword ptr [ebp + 0x58] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x60] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00777a90: }
	__asm { sub esp, 0x50 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00778ff0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00778240 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00402150 }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00777adc }
	__asm { test al, 1 }
	__asm { jne L_00777adc }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00777adc }
	__asm { lea ecx, [ebp + 0x60] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00777adc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x74 }
}

extern "C" void fn_00778ff0();
// FUNCTION: ROBLOXSTUDIO 0x00777ef0
extern "C" __declspec(naked) void asm_00777ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b698 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00778ff0 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00777f82 }
	__asm { mov dword ptr [esi + 0x50], ecx }
	__asm { test cl, 1 }
	__asm { je L_00777f6e }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { mov dword ptr [esi + 0x58], eax }
	__asm { mov eax, dword ptr [edi + 0x5c] }
	__asm { mov dword ptr [esi + 0x5c], eax }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { mov dword ptr [esi + 0x60], eax }
	__asm { mov eax, dword ptr [edi + 0x64] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { mov eax, dword ptr [edi + 0x6c] }
	__asm { mov dword ptr [esi + 0x6c], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00777f6e: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x58] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x58] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00777f82: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402150();
extern "C" void fn_00778ff0();
// FUNCTION: ROBLOXSTUDIO 0x00777fa0
extern "C" __declspec(naked) void asm_00777fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b3d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00778ff0 }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00778ff0 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_00402150 }
	__asm { mov ecx, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0077803f }
	__asm { mov dword ptr [esi + 0x50], ecx }
	__asm { test cl, 1 }
	__asm { je L_0077802b }
	__asm { mov eax, dword ptr [ebp + 0x60] }
	__asm { mov dword ptr [esi + 0x58], eax }
	__asm { mov eax, dword ptr [ebp + 0x64] }
	__asm { mov dword ptr [esi + 0x5c], eax }
	__asm { mov eax, dword ptr [ebp + 0x68] }
	__asm { mov dword ptr [esi + 0x60], eax }
	__asm { mov eax, dword ptr [ebp + 0x6c] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { mov eax, dword ptr [ebp + 0x70] }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { mov eax, dword ptr [ebp + 0x74] }
	__asm { mov dword ptr [esi + 0x6c], eax }
	__asm { jmp L_0077803f }
	__asm { L_0077802b: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x58] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x60] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0077803f: }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00402150 }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0077806e }
	__asm { test al, 1 }
	__asm { jne L_0077806e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0077806e }
	__asm { lea ecx, [ebp + 0x60] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0077806e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x70 }
}

extern "C" void fn_00402150();
extern "C" void fn_00403540();
extern "C" void fn_00777e50();
extern "C" void fn_00778ff0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00778150
extern "C" __declspec(naked) void asm_00778150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x58] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x50 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00778ff0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00777e50 }
	__asm { lea ecx, [esi + 0x68] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x70] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00402150 }
	__asm { cmp dword ptr [ebp + 0x6c], 0x10 }
	__asm { jb L_007781f9 }
	__asm { push dword ptr [ebp + 0x58] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007781f9: }
	__asm { cmp dword ptr [ebp + 0x84], 0x10 }
	__asm { mov dword ptr [ebp + 0x6c], 0xf }
	__asm { mov dword ptr [ebp + 0x68], 0 }
	__asm { mov byte ptr [ebp + 0x58], 0 }
	__asm { jb L_0077821f }
	__asm { push dword ptr [ebp + 0x70] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0077821f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x80 }
}

extern "C" void fn_00402150();
extern "C" void fn_00777fa0();
extern "C" void fn_00778ff0();
// FUNCTION: ROBLOXSTUDIO 0x00778240
extern "C" __declspec(naked) void asm_00778240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { test eax, eax }
	__asm { je L_007782bd }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_007782a6 }
	__asm { mov eax, dword ptr [ebp + 0x60] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x64] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x68] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x6c] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x70] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x74] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_007782bd }
	__asm { L_007782a6: }
	__asm { mov ecx, dword ptr [ebp + 0x58] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x60] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007782bd: }
	__asm { sub esp, 0x50 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00778ff0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00777fa0 }
	__asm { mov al, byte ptr [ebp + 0x78] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [esi + 0x70], al }
	__asm { call fn_00402150 }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0077830f }
	__asm { test al, 1 }
	__asm { jne L_0077830f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0077830f }
	__asm { lea ecx, [ebp + 0x60] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0077830f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x74 }
}

extern "C" void fn_00402150();
extern "C" void fn_00403540();
extern "C" void fn_00778150();
extern "C" void fn_00778ff0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007784d0
extern "C" __declspec(naked) void asm_007784d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b508 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x70] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x58] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x50 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00778ff0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00778150 }
	__asm { mov al, byte ptr [ebp + 0x88] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [esi + 0x80], al }
	__asm { call fn_00402150 }
	__asm { cmp dword ptr [ebp + 0x6c], 0x10 }
	__asm { jb L_00778587 }
	__asm { push dword ptr [ebp + 0x58] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00778587: }
	__asm { cmp dword ptr [ebp + 0x84], 0x10 }
	__asm { mov dword ptr [ebp + 0x6c], 0xf }
	__asm { mov dword ptr [ebp + 0x68], 0 }
	__asm { mov byte ptr [ebp + 0x58], 0 }
	__asm { jb L_007785ad }
	__asm { push dword ptr [ebp + 0x70] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007785ad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x84 }
}

extern "C" void fn_00778430();
// FUNCTION: ROBLOXSTUDIO 0x007786c0
extern "C" __declspec(naked) void asm_007786c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b568 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00778430 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov ecx, dword ptr [edi + 0x88] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00778789 }
	__asm { mov dword ptr [esi + 0x88], ecx }
	__asm { test cl, 1 }
	__asm { je L_0077876f }
	__asm { mov eax, dword ptr [edi + 0x90] }
	__asm { mov dword ptr [esi + 0x90], eax }
	__asm { mov eax, dword ptr [edi + 0x94] }
	__asm { mov dword ptr [esi + 0x94], eax }
	__asm { mov eax, dword ptr [edi + 0x98] }
	__asm { mov dword ptr [esi + 0x98], eax }
	__asm { mov eax, dword ptr [edi + 0x9c] }
	__asm { mov dword ptr [esi + 0x9c], eax }
	__asm { mov eax, dword ptr [edi + 0xa0] }
	__asm { mov dword ptr [esi + 0xa0], eax }
	__asm { mov eax, dword ptr [edi + 0xa4] }
	__asm { mov dword ptr [esi + 0xa4], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0077876f: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x90] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x90] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00778789: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402c40();
extern "C" void fn_00403540();
extern "C" void fn_0077b470();
// FUNCTION: ROBLOXSTUDIO 0x00778ff0
extern "C" __declspec(naked) void asm_00778ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b65b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea edi, [esi + 0x34] }
	__asm { lea esi, [ebx + 0x34] }
	__asm { mov byte ptr [edi], 0 }
	__asm { push dword ptr [esi + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { call fn_00402c40 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { fld dword ptr [esi + 0xc] }
	__asm { fstp dword ptr [edi + 0xc] }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0077b470 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov al, byte ptr [ebx + 0x4c] }
	__asm { mov byte ptr [ecx + 0x4c], al }
	__asm { pop edi }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101a4[];
extern "C" char g_012de64f[];
extern "C" char g_012e070c[];
extern "C" char g_012e0710[];
extern "C" void fn_006b8a90();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007790c0
extern "C" __declspec(naked) void asm_007790c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b686 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov ebx, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0077911b }
	__asm { push esi }
	__asm { call dword ptr [g_00e101a4] }
	__asm { mov al, byte ptr [g_012de64f] }
	__asm { test al, al }
	__asm { je L_0077911d }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0x100df30 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { jmp L_0077911d }
	__asm { L_0077911b: }
	__asm { xor esi, esi }
	__asm { L_0077911d: }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [g_012e070c], esi }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0077917e }
	__asm { push esi }
	__asm { call dword ptr [g_00e101a4] }
	__asm { mov al, byte ptr [g_012de64f] }
	__asm { test al, al }
	__asm { je L_00779166 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0x100df30 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00779166: }
	__asm { mov dword ptr [g_012e0710], esi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0077917e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [g_012e0710], 0 }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007798e0();
extern "C" void fn_00779b50();
extern "C" void fn_00779c10();
// FUNCTION: ROBLOXSTUDIO 0x00779a40
extern "C" __declspec(naked) void asm_00779a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00779b50 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00779c10 }
	__asm { test byte ptr [ebp + 0xc], 5 }
	__asm { je L_00779b45 }
	__asm { test eax, eax }
	__asm { je L_00779b45 }
	__asm { cmp dword ptr [esi + 0x1234], 0 }
	__asm { push edi }
	__asm { lea edi, [esi + 0x1234] }
	__asm { jbe L_00779a97 }
	__asm { push 0x81 }
	__asm { lea eax, [esi + 0x122] }
	__asm { push edi }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_007798e0 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { je L_00779b44 }
	__asm { dec dword ptr [edi] }
	__asm { L_00779a97: }
	__asm { cmp dword ptr [esi + 0x1238], 0 }
	__asm { lea edi, [esi + 0x1238] }
	__asm { jbe L_00779ac6 }
	__asm { push 0x81 }
	__asm { lea eax, [esi + 0x1a3] }
	__asm { push edi }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_007798e0 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { je L_00779b44 }
	__asm { dec dword ptr [edi] }
	__asm { L_00779ac6: }
	__asm { cmp dword ptr [esi + 0x1230], 0 }
	__asm { lea edi, [esi + 0x1230] }
	__asm { jbe L_00779aee }
	__asm { push 0x101 }
	__asm { lea eax, [esi + 0x21] }
	__asm { push edi }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_007798e0 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { je L_00779b44 }
	__asm { dec dword ptr [edi] }
	__asm { L_00779aee: }
	__asm { cmp dword ptr [esi + 0x123c], 0 }
	__asm { lea edi, [esi + 0x123c] }
	__asm { jbe L_00779b19 }
	__asm { push 0x801 }
	__asm { lea eax, [esi + 0x224] }
	__asm { push edi }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_007798e0 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { je L_00779b44 }
	__asm { dec dword ptr [edi] }
	__asm { L_00779b19: }
	__asm { cmp dword ptr [esi + 0x1240], 0 }
	__asm { lea edi, [esi + 0x1240] }
	__asm { jbe L_00779b44 }
	__asm { push 0x801 }
	__asm { lea eax, [esi + 0xa25] }
	__asm { push edi }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_007798e0 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { je L_00779b44 }
	__asm { dec dword ptr [edi] }
	__asm { L_00779b44: }
	__asm { pop edi }
	__asm { L_00779b45: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012b5580[];
extern "C" void fn_0045f030();
extern "C" void fn_007779a0();
// FUNCTION: ROBLOXSTUDIO 0x0077a2a0
extern "C" __declspec(naked) void asm_0077a2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { xor eax, eax }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { mov edi, ecx }
	__asm { cmovs esi, eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ebx, dword ptr [eax - 0xc] }
	__asm { cmp esi, ebx }
	__asm { jl L_0077a2e0 }
	__asm { add eax, -0x10 }
	__asm { push eax }
	__asm { call fn_0045f030 }
	__asm { add esp, 4 }
	__asm { lea ecx, [eax + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077a2e0: }
	__asm { mov ecx, dword ptr [eax - 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_0077a2f0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_0077a2fd }
	__asm { L_0077a2f0: }
	__asm { mov eax, dword ptr [g_012b5580] }
	__asm { mov ecx, 0x12b5580 }
	__asm { call dword ptr [eax + 0x10] }
	__asm { L_0077a2fd: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { sub eax, esi }
	__asm { push esi }
	__asm { add eax, ebx }
	__asm { push eax }
	__asm { call fn_007779a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10580[];
extern "C" char g_00e106f0[];
extern "C" void fn_0042ee70();
extern "C" void fn_00460390();
// FUNCTION: ROBLOXSTUDIO 0x0077a3e0
extern "C" __declspec(naked) void asm_0077a3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_0077a456 }
	__asm { cmp byte ptr [esi], 0 }
	__asm { je L_0077a404 }
	__asm { cmp byte ptr [edi + 0x122], 0 }
	__asm { jne L_0077a404 }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0077a404: }
	__asm { push ebx }
	__asm { push 0x81 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10580] }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { cmp ebx, 0x80 }
	__asm { jbe L_0077a427 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0077a427: }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [edi + 0x1a3] }
	__asm { push 0x81 }
	__asm { push eax }
	__asm { call dword ptr [g_00e106f0] }
	__asm { push eax }
	__asm { call fn_00460390 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0x1238], ebx }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0077a456: }
	__asm { push 0x80004005 }
	__asm { call fn_0042ee70 }
}

extern "C" char g_012e077c[];
extern "C" void fn_00776500();
extern "C" void fn_00777450();
extern "C" void fn_00778ff0();
extern "C" void fn_00a1cd30();
// FUNCTION: ROBLOXSTUDIO 0x0077b020
extern "C" __declspec(naked) void asm_0077b020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b850 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { push 0 }
	__asm { sub esp, 0x80 }
	__asm { mov ebx, esp }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp + 0x28], esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0077b0af }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_0077b098 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_0077b0af }
	__asm { L_0077b098: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0077b0af: }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00778ff0 }
	__asm { push 0x77a6f0 }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00777450 }
	__asm { add esp, 0x7c }
	__asm { mov ecx, edi }
	__asm { call fn_00776500 }
	__asm { mov ecx, dword ptr [g_012e077c] }
	__asm { call fn_00a1cd30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0077b109 }
	__asm { test al, 1 }
	__asm { jne L_0077b109 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0077b109 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0077b109: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00402ce0();
extern "C" void fn_00403170();
extern "C" void fn_007777d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0077b470
extern "C" __declspec(naked) void asm_0077b470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1b888 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { mov edi, ecx }
	__asm { je L_0077b51d }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00402ce0 }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_0077b4ae }
	__asm { inc eax }
	__asm { jmp L_0077b4b0 }
	__asm { L_0077b4ae: }
	__asm { xor eax, eax }
	__asm { L_0077b4b0: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_0077b4e2 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_0077b4e2 }
	__asm { add eax, -0x30 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_0077b4e9 }
	__asm { L_0077b4e2: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_0077b4e9: }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [eax] }
	__asm { call fn_007777d0 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { add esp, 0xc }
	__asm { test esi, esi }
	__asm { je L_0077b51d }
	__asm { cmp byte ptr [ebp - 0xf], 0 }
	__asm { je L_0077b514 }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00403170 }
	__asm { add esp, 8 }
	__asm { L_0077b514: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0077b51d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00783400();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0077ccd0
extern "C" __declspec(naked) void asm_0077ccd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b9eb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { lea edi, [esi + 0x18] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x10 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0077cd63 }
	__asm { push dword ptr [ebx + 0x18] }
	__asm { mov ecx, eax }
	__asm { call fn_00783400 }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { jmp L_0077cd6a }
	__asm { L_0077cd63: }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { L_0077cd6a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10500[];
extern "C" void fn_00403540();
extern "C" void fn_00783400();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0077d110
extern "C" __declspec(naked) void asm_0077d110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ba4b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { jae L_0077d161 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { inc eax }
	__asm { je L_0077d16b }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_0077d16b }
	__asm { L_0077d161: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_0077d16b: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { push -1 }
	__asm { lea ebx, [edi + 0x18] }
	__asm { lea edi, [esi + 0x18] }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x10 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0077d1dd }
	__asm { push dword ptr [ebx + 0x18] }
	__asm { mov ecx, eax }
	__asm { call fn_00783400 }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { jmp L_0077d1e4 }
	__asm { L_0077d1dd: }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { L_0077d1e4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0077d2e0
extern "C" __declspec(naked) void asm_0077d2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c6e3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x20 }
	__asm { mov edi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0077d34c }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe4fa6c }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edx + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { jmp L_0077d34e }
	__asm { L_0077d34c: }
	__asm { xor esi, esi }
	__asm { L_0077d34e: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { test ecx, ecx }
	__asm { je L_0077d365 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0077d365: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00781fa0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0077d3d0
extern "C" __declspec(naked) void asm_0077d3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ba73 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x20 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00cf661e }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_0077d447 }
	__asm { push edi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], 0xe4fa8c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ax, word ptr [esi + 4] }
	__asm { mov word ptr [ebx + 8], ax }
	__asm { movzx eax, byte ptr [esi + 6] }
	__asm { add esi, 8 }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebx + 0xa], al }
	__asm { call fn_00781fa0 }
	__asm { movzx eax, byte ptr [esi + 0x10] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebx + 0x1c], al }
	__asm { pop edi }
	__asm { jmp L_0077d449 }
	__asm { L_0077d447: }
	__asm { xor ebx, ebx }
	__asm { L_0077d449: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 4], ebx }
	__asm { test ecx, ecx }
	__asm { je L_0077d460 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0077d460: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0077d8b0
extern "C" __declspec(naked) void asm_0077d8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ba90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push -1 }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp - 0x44], al }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0077d934 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0077d934: }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov al, byte ptr [ebp - 0x44] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov byte ptr [esi], al }
	__asm { lea ecx, [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { jb L_0077d987 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0077d987: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0077d9a0
extern "C" __declspec(naked) void asm_0077d9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ba90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0077da1c }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0077da1c: }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov al, byte ptr [ebp - 0x44] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov byte ptr [esi], al }
	__asm { lea ecx, [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { jb L_0077da6f }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0077da6f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0077da90
extern "C" __declspec(naked) void asm_0077da90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bab0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push -1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x48], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x44], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0077db1a }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0077db1a: }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov eax, dword ptr [ebp - 0x48] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x44] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 8] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { jb L_0077db73 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0077db73: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0077db90
extern "C" __declspec(naked) void asm_0077db90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ba90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 0x44], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0077dc12 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0077dc12: }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov eax, dword ptr [ebp - 0x44] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { jb L_0077dc65 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0077dc65: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}
