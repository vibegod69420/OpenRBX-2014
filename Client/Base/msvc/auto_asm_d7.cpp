// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00886a60
extern "C" __declspec(naked) void asm_00886a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { js L_00886a85 }
	__asm { cmp eax, dword ptr [ecx + 0x10] }
	__asm { jge L_00886a85 }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_00886a77 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00886a77: }
	__asm { mov cl, byte ptr [ecx + eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [eax], cl }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00886a85: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b03f0();
extern "C" void fn_00887150();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008871b0
extern "C" __declspec(naked) void asm_008871b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { test eax, eax }
	__asm { je L_008871c6 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008871c6: }
	__asm { mov ecx, esi }
	__asm { call fn_007b03f0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_008871dc }
	__asm { push esi }
	__asm { call fn_00887150 }
	__asm { add esp, 4 }
	__asm { L_008871dc: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006dea00();
extern "C" void fn_00b589f0();
// FUNCTION: ROBLOXSTUDIO 0x008897d0
extern "C" __declspec(naked) void asm_008897d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00b589f0 }
	__asm { fld dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { fstp dword ptr [esi + 0x12c] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x130] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0x134] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f040();
extern "C" void fn_0088b380();
// FUNCTION: ROBLOXSTUDIO 0x0088b350
extern "C" __declspec(naked) void asm_0088b350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0088b380 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_0088b5b0();
// FUNCTION: ROBLOXSTUDIO 0x0088b580
extern "C" __declspec(naked) void asm_0088b580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0088b5b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006c58f0();
extern "C" void fn_0088fb70();
// FUNCTION: ROBLOXSTUDIO 0x0088fc80
extern "C" __declspec(naked) void asm_0088fc80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_006c58f0 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0088fb70 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0088fe90
extern "C" __declspec(naked) void asm_0088fe90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 0x20] }
	__asm { mov edx, dword ptr [edi + 0x18] }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov eax, dword ptr [edx + eax] }
	__asm { add eax, dword ptr [edi + 0x14] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { call eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0099d070();
extern "C" void fn_00b5c8e0();
// FUNCTION: ROBLOXSTUDIO 0x008900d0
extern "C" __declspec(naked) void asm_008900d0()
{
	__asm { mov ecx, dword ptr [ecx + 0xe0] }
	__asm { call fn_0099d070 }
	__asm { test eax, eax }
	__asm { je L_00890107 }
	__asm { mov ecx, eax }
	__asm { call fn_00b5c8e0 }
	__asm { test eax, eax }
	__asm { je L_008900fe }
	__asm { mov eax, dword ptr [eax + 0x108] }
	__asm { test eax, eax }
	__asm { je L_008900fe }
	__asm { add eax, -0x70 }
	__asm { mov al, byte ptr [eax + 0xf8] }
	__asm { ret }
	__asm { L_008900fe: }
	__asm { xor eax, eax }
	__asm { mov al, byte ptr [eax + 0xf8] }
	__asm { ret }
	__asm { L_00890107: }
	__asm { xor al, al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00890430
extern "C" __declspec(naked) void asm_00890430()
{
	__asm { mov ecx, dword ptr [ecx + 0xe0] }
	__asm { xor edx, edx }
	__asm { add ecx, 0x120 }
	__asm { mov edi, edi }
	__asm { L_00890440: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, 6 }
	__asm { je L_0089045d }
	__asm { cmp eax, 8 }
	__asm { je L_0089045d }
	__asm { cmp eax, 7 }
	__asm { je L_0089045d }
	__asm { inc edx }
	__asm { add ecx, 4 }
	__asm { cmp edx, 6 }
	__asm { jl L_00890440 }
	__asm { xor al, al }
	__asm { ret }
	__asm { L_0089045d: }
	__asm { mov al, 1 }
	__asm { ret }
}

extern "C" void fn_0079a4d0();
extern "C" void fn_00893100();
// FUNCTION: ROBLOXSTUDIO 0x00890460
extern "C" __declspec(naked) void asm_00890460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { je L_00890491 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { add edx, -0x1c }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { call fn_00893100 }
	__asm { mov ecx, eax }
	__asm { call fn_0079a4d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00890491: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0079a580();
extern "C" void fn_00893100();
// FUNCTION: ROBLOXSTUDIO 0x00890580
extern "C" __declspec(naked) void asm_00890580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { je L_008905b1 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { add edx, -0x1c }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { call fn_00893100 }
	__asm { mov ecx, eax }
	__asm { call fn_0079a580 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_008905b1: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00890ae0
extern "C" __declspec(naked) void asm_00890ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea edx, [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00890e50();
// FUNCTION: ROBLOXSTUDIO 0x00890de0
extern "C" __declspec(naked) void asm_00890de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test edx, edx }
	__asm { je L_00890df2 }
	__asm { add edx, -0x1c }
	__asm { jmp L_00890df4 }
	__asm { L_00890df2: }
	__asm { xor edx, edx }
	__asm { L_00890df4: }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0x28] }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { call fn_00890e50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fba4c[];
extern "C" char g_012fba50[];
extern "C" char g_012fba54[];
extern "C" char g_012fba58[];
// FUNCTION: ROBLOXSTUDIO 0x008911e0
extern "C" __declspec(naked) void asm_008911e0()
{
	__asm { mov eax, dword ptr [g_012fba58] }
	__asm { test al, 1 }
	__asm { jne L_0089120f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fba58], eax }
	__asm { mov dword ptr [g_012fba4c], 0x3f800000 }
	__asm { mov dword ptr [g_012fba50], 0x3dcccccd }
	__asm { mov dword ptr [g_012fba54], 0x3f800000 }
	__asm { L_0089120f: }
	__asm { mov eax, 0x12fba4c }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00891360
extern "C" __declspec(naked) void asm_00891360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_00891371 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00891373 }
	__asm { L_00891371: }
	__asm { xor edi, edi }
	__asm { L_00891373: }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov edx, dword ptr [ecx + 0x2c] }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { add eax, edi }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x008926e0
extern "C" __declspec(naked) void asm_008926e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea esi, [ecx + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_0099c980();
// FUNCTION: ROBLOXSTUDIO 0x00892730
extern "C" __declspec(naked) void asm_00892730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx - 0x34] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0099c980 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fba2c[];
extern "C" char g_012fba30[];
extern "C" char g_012fba34[];
extern "C" char g_012fba38[];
// FUNCTION: ROBLOXSTUDIO 0x008928c0
extern "C" __declspec(naked) void asm_008928c0()
{
	__asm { mov eax, dword ptr [g_012fba38] }
	__asm { test al, 1 }
	__asm { jne L_008928ef }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fba38], eax }
	__asm { mov dword ptr [g_012fba2c], 0x3f800000 }
	__asm { mov dword ptr [g_012fba30], 0x3f800000 }
	__asm { mov dword ptr [g_012fba34], 0x3f800000 }
	__asm { L_008928ef: }
	__asm { mov eax, 0x12fba2c }
	__asm { ret }
}

extern "C" char g_012fba3c[];
extern "C" char g_012fba40[];
extern "C" char g_012fba44[];
extern "C" char g_012fba48[];
// FUNCTION: ROBLOXSTUDIO 0x00892900
extern "C" __declspec(naked) void asm_00892900()
{
	__asm { mov eax, dword ptr [g_012fba48] }
	__asm { test al, 1 }
	__asm { jne L_0089292f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fba48], eax }
	__asm { mov dword ptr [g_012fba3c], 0x3e4ccccd }
	__asm { mov dword ptr [g_012fba40], 0x3e4ccccd }
	__asm { mov dword ptr [g_012fba44], 0x3e4ccccd }
	__asm { L_0089292f: }
	__asm { mov eax, 0x12fba3c }
	__asm { ret }
}

extern "C" char g_00e39be4[];
extern "C" char g_00e3b3dc[];
extern "C" char g_010380ac[];
// FUNCTION: ROBLOXSTUDIO 0x00892960
extern "C" __declspec(naked) void asm_00892960()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc8] }
	__asm { dec eax }
	__asm { je L_00892982 }
	__asm { dec eax }
	__asm { je L_0089297b }
	__asm { dec eax }
	__asm { je L_00892974 }
	__asm { fld1 }
	__asm { ret }
	__asm { L_00892974: }
	__asm { fld dword ptr [g_00e39be4] }
	__asm { ret }
	__asm { L_0089297b: }
	__asm { fld dword ptr [g_010380ac] }
	__asm { ret }
	__asm { L_00892982: }
	__asm { fld dword ptr [g_00e3b3dc] }
	__asm { ret }
}

extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
// FUNCTION: ROBLOXSTUDIO 0x00892a10
extern "C" __declspec(naked) void asm_00892a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { jne L_00892a29 }
	__asm { cmp byte ptr [ebp + 8], al }
	__asm { jne L_00892a29 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00892a29: }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { add eax, 0x38 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
// FUNCTION: ROBLOXSTUDIO 0x00892a40
extern "C" __declspec(naked) void asm_00892a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { jne L_00892a59 }
	__asm { cmp byte ptr [ebp + 8], al }
	__asm { jne L_00892a59 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00892a59: }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { add eax, 0x40 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
// FUNCTION: ROBLOXSTUDIO 0x00892a70
extern "C" __declspec(naked) void asm_00892a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { jne L_00892a89 }
	__asm { cmp byte ptr [ebp + 8], al }
	__asm { jne L_00892a89 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00892a89: }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { add eax, 0x3c }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
// FUNCTION: ROBLOXSTUDIO 0x00892aa0
extern "C" __declspec(naked) void asm_00892aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { jne L_00892ab9 }
	__asm { cmp byte ptr [ebp + 8], al }
	__asm { jne L_00892ab9 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00892ab9: }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { add eax, 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
// FUNCTION: ROBLOXSTUDIO 0x00892ad0
extern "C" __declspec(naked) void asm_00892ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { jne L_00892ae9 }
	__asm { cmp byte ptr [ebp + 8], al }
	__asm { jne L_00892ae9 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00892ae9: }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { add eax, 0x28 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008934d0
extern "C" __declspec(naked) void asm_008934d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe68ec4 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007cfeb0();
extern "C" void fn_007d5940();
// FUNCTION: ROBLOXSTUDIO 0x00893500
extern "C" __declspec(naked) void asm_00893500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { call fn_007d5940 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007cfeb0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007d01e0();
extern "C" void fn_007d59b0();
// FUNCTION: ROBLOXSTUDIO 0x00893530
extern "C" __declspec(naked) void asm_00893530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { call fn_007d59b0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007d01e0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007d0510();
extern "C" void fn_007d5be0();
// FUNCTION: ROBLOXSTUDIO 0x00893570
extern "C" __declspec(naked) void asm_00893570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { call fn_007d5be0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007d0510 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0099d070();
extern "C" void fn_00b5c8e0();
// FUNCTION: ROBLOXSTUDIO 0x00893d00
extern "C" __declspec(naked) void asm_00893d00()
{
	__asm { mov ecx, dword ptr [ecx + 0x70] }
	__asm { call fn_0099d070 }
	__asm { test eax, eax }
	__asm { je L_00893d35 }
	__asm { mov ecx, eax }
	__asm { call fn_00b5c8e0 }
	__asm { test eax, eax }
	__asm { je L_00893d26 }
	__asm { mov ecx, dword ptr [eax + 0x108] }
	__asm { test ecx, ecx }
	__asm { je L_00893d26 }
	__asm { add ecx, -0x70 }
	__asm { jmp L_00893d28 }
	__asm { L_00893d26: }
	__asm { xor ecx, ecx }
	__asm { L_00893d28: }
	__asm { mov ecx, dword ptr [ecx + 0xec] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { jmp eax }
	__asm { L_00893d35: }
	__asm { xor al, al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00893d40
extern "C" __declspec(naked) void asm_00893d40()
{
	__asm { cmp dword ptr [ecx + 0xf0], 0 }
	__asm { jge L_00893d67 }
	__asm { cmp dword ptr [ecx + 0xf4], 0 }
	__asm { jge L_00893d67 }
	__asm { cmp dword ptr [ecx + 0xf8], 0 }
	__asm { jge L_00893d67 }
	__asm { cmp dword ptr [ecx + 0xfc], 0 }
	__asm { jge L_00893d67 }
	__asm { xor al, al }
	__asm { ret }
	__asm { L_00893d67: }
	__asm { mov al, 1 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00893d70
extern "C" __declspec(naked) void asm_00893d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00893d98 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 4 }
	__asm { jl L_00893d98 }
	__asm { cmp eax, 5 }
	__asm { jg L_00893d98 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00893d98: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008940a0
extern "C" __declspec(naked) void asm_008940a0()
{
	__asm { mov eax, dword ptr [ecx + 0xe0] }
	__asm { cmp dword ptr [eax + 0x130], 4 }
	__asm { jne L_008940d6 }
	__asm { cmp dword ptr [eax + 0x134], 0 }
	__asm { jne L_008940d6 }
	__asm { cmp dword ptr [eax + 0x128], 0 }
	__asm { jne L_008940d6 }
	__asm { cmp dword ptr [eax + 0x12c], 0 }
	__asm { jne L_008940d6 }
	__asm { cmp dword ptr [eax + 0x120], 0 }
	__asm { jne L_008940d6 }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_008940d6: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
// FUNCTION: ROBLOXSTUDIO 0x00894920
extern "C" __declspec(naked) void asm_00894920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { je L_0089494c }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp ecx, dword ptr [eax + 0x20] }
	__asm { jne L_0089494c }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { mov dword ptr [eax + 0x20], 0 }
	__asm { L_0089494c: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c54a0();
// FUNCTION: ROBLOXSTUDIO 0x00896cc0
extern "C" __declspec(naked) void asm_00896cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_006c54a0 }
	__asm { fld qword ptr [eax] }
	__asm { add esp, 4 }
	__asm { fadd qword ptr [ebp + 8] }
	__asm { fstp qword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0xf0], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0xf4], eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00896e60();
// FUNCTION: ROBLOXSTUDIO 0x00896df0
extern "C" __declspec(naked) void asm_00896df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0xf0] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00896e60 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov bl, al }
	__asm { call dword ptr [edx + 0xec] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0088f4e0();
// FUNCTION: ROBLOXSTUDIO 0x00896e20
extern "C" __declspec(naked) void asm_00896e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0xf0] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0088f4e0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov bl, al }
	__asm { call dword ptr [edx + 0xec] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0099e060();
// FUNCTION: ROBLOXSTUDIO 0x00897740
extern "C" __declspec(naked) void asm_00897740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { cmp al, byte ptr [ecx + 0x111] }
	__asm { je L_00897769 }
	__asm { push eax }
	__asm { call fn_0099e060 }
	__asm { push 0x12fb650 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00897769: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0099e740();
// FUNCTION: ROBLOXSTUDIO 0x00897770
extern "C" __declspec(naked) void asm_00897770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sete al }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { mov byte ptr [ebp + 8], al }
	__asm { cmp al, byte ptr [ecx + 0x112] }
	__asm { je L_008977a2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0099e740 }
	__asm { push 0x12fb67c }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_008977a2: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00897560();
// FUNCTION: ROBLOXSTUDIO 0x008977b0
extern "C" __declspec(naked) void asm_008977b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { lea edx, [esi + 0x48] }
	__asm { add ecx, 0x38 }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { je L_008977e8 }
	__asm { push edx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00897560 }
	__asm { push 0x12fb514 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { push 0x12fb4e8 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_008977e8: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0099e200();
// FUNCTION: ROBLOXSTUDIO 0x008979b0
extern "C" __declspec(naked) void asm_008979b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { cmp al, byte ptr [ecx + 0x110] }
	__asm { je L_008979d9 }
	__asm { push eax }
	__asm { call fn_0099e200 }
	__asm { push 0x12fb9c0 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_008979d9: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00894650();
extern "C" void fn_00897dd0();
// FUNCTION: ROBLOXSTUDIO 0x00897f30
extern "C" __declspec(naked) void asm_00897f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx + 0xe0] }
	__asm { mov edi, dword ptr [eax + 0x70] }
	__asm { mov esi, dword ptr [eax + 0x74] }
	__asm { call fn_00897dd0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00894650 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_007b5910();
// FUNCTION: ROBLOXSTUDIO 0x00898100
extern "C" __declspec(naked) void asm_00898100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { lea edx, [esi + 0x48] }
	__asm { add ecx, 0x48 }
	__asm { cmp al, byte ptr [ecx] }
	__asm { je L_0089812c }
	__asm { push edx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007b5910 }
	__asm { push 0x12fb624 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_0089812c: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00897190();
extern "C" void fn_00898ca0();
// FUNCTION: ROBLOXSTUDIO 0x00898240
extern "C" __declspec(naked) void asm_00898240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { call fn_00898ca0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0xb0] }
	__asm { mov ecx, esi }
	__asm { call fn_00897190 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00898370();
extern "C" void fn_0099ea90();
// FUNCTION: ROBLOXSTUDIO 0x008983f0
extern "C" __declspec(naked) void asm_008983f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [esi + 0x30] }
	__asm { mov ecx, dword ptr [edi + 0xe0] }
	__asm { push eax }
	__asm { call fn_0099ea90 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00898370 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00898940
extern "C" __declspec(naked) void asm_00898940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00898952 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00898954 }
	__asm { L_00898952: }
	__asm { xor edx, edx }
	__asm { L_00898954: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00898980
extern "C" __declspec(naked) void asm_00898980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00898992 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00898994 }
	__asm { L_00898992: }
	__asm { xor edx, edx }
	__asm { L_00898994: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00477eb0();
// FUNCTION: ROBLOXSTUDIO 0x008989c0
extern "C" __declspec(naked) void asm_008989c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00477eb0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edi + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0088bb10();
// FUNCTION: ROBLOXSTUDIO 0x008989f0
extern "C" __declspec(naked) void asm_008989f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { push eax }
	__asm { call fn_0088bb10 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edi + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0044e160();
// FUNCTION: ROBLOXSTUDIO 0x00898a20
extern "C" __declspec(naked) void asm_00898a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { push eax }
	__asm { call fn_0044e160 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edi + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f630();
// FUNCTION: ROBLOXSTUDIO 0x0089a970
extern "C" __declspec(naked) void asm_0089a970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_0089a98b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_0043f630 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0089a98b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_0043f630 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4a10();
// FUNCTION: ROBLOXSTUDIO 0x0089c880
extern "C" __declspec(naked) void asm_0089c880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_007b4a10 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4a80();
// FUNCTION: ROBLOXSTUDIO 0x0089c8a0
extern "C" __declspec(naked) void asm_0089c8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { call dword ptr [eax + 0x24] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_007b4a80 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008a2e50
extern "C" __declspec(naked) void asm_008a2e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe6a484 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x008a3900
extern "C" __declspec(naked) void asm_008a3900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 6], 0x83008300 }
	__asm { mov ecx, dword ptr [ebp - 6] }
	__asm { mov dword ptr [eax], ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0xc], 0x7d007d00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov esi, 0x7d00 }
	__asm { mov edx, 0xffff8300 }
	__asm { mov dword ptr [eax + 6], ecx }
	__asm { mov word ptr [eax + 0xa], si }
	__asm { mov word ptr [eax + 4], dx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007d0130();
extern "C" void fn_00a56540();
// FUNCTION: ROBLOXSTUDIO 0x008a3b40
extern "C" __declspec(naked) void asm_008a3b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { call fn_00a56540 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007d0130 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008a3e10
extern "C" __declspec(naked) void asm_008a3e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe6a46c }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008a4070
extern "C" __declspec(naked) void asm_008a4070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe6a4a0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0044ac20();
// FUNCTION: ROBLOXSTUDIO 0x008a4860
extern "C" __declspec(naked) void asm_008a4860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { push eax }
	__asm { call fn_0044ac20 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edi + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008a56c0
extern "C" __declspec(naked) void asm_008a56c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_008a56d7 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008a56d7: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe6aad8 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_008a62d0();
// FUNCTION: ROBLOXSTUDIO 0x008a77c0
extern "C" __declspec(naked) void asm_008a77c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008a77ee }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_008a62d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_008a77ee: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_008a79f0();
// FUNCTION: ROBLOXSTUDIO 0x008a79c0
extern "C" __declspec(naked) void asm_008a79c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008a79db }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_008a79f0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008a79db: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_008a79f0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x008a9f20
extern "C" __declspec(naked) void asm_008a9f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_008a9f40 }
	__asm { mov ecx, dword ptr [edx + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008a9f40: }
	__asm { mov ecx, dword ptr [edx + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012fc528[];
extern "C" char g_012fc52c[];
extern "C" char g_012fc530[];
extern "C" char g_012fc534[];
// FUNCTION: ROBLOXSTUDIO 0x008ac820
extern "C" __declspec(naked) void asm_008ac820()
{
	__asm { mov eax, dword ptr [g_012fc534] }
	__asm { test al, 1 }
	__asm { jne L_008ac84f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fc534], eax }
	__asm { mov dword ptr [g_012fc528], 0x3e4ccccd }
	__asm { mov dword ptr [g_012fc52c], 0x3e4ccccd }
	__asm { mov dword ptr [g_012fc530], 0x3e4ccccd }
	__asm { L_008ac84f: }
	__asm { mov eax, 0x12fc528 }
	__asm { ret }
}

extern "C" void fn_00892d80();
extern "C" void fn_008abd30();
// FUNCTION: ROBLOXSTUDIO 0x008ac970
extern "C" __declspec(naked) void asm_008ac970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_00892d80 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_008abd30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008acd50
extern "C" __declspec(naked) void asm_008acd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x110] }
	__asm { cmp ecx, eax }
	__asm { je L_008acd6d }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_008acd6d: }
	__asm { push 0x12fc414 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008acda0
extern "C" __declspec(naked) void asm_008acda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx + 0x160] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 0x164] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 0x168] }
	__asm { mov dword ptr [ebp + 8], 0x12fc498 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
}

extern "C" void fn_00403540();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008acef0
extern "C" __declspec(naked) void asm_008acef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x128] }
	__asm { cmp ecx, eax }
	__asm { je L_008acf0d }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_008acf0d: }
	__asm { push 0x12fc440 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00963670();
// FUNCTION: ROBLOXSTUDIO 0x008adec0
extern "C" __declspec(naked) void asm_008adec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { lea ecx, [edi + 0x68] }
	__asm { call dword ptr [eax + 0x18] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 8], 0x8ada90 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_00963670 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008af3d0
extern "C" __declspec(naked) void asm_008af3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_008af402 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_008af402: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008b3200();
// FUNCTION: ROBLOXSTUDIO 0x008b1670
extern "C" __declspec(naked) void asm_008b1670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { inc eax }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jbe L_008b1688 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008b3200 }
	__asm { L_008b1688: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ecx], al }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b3200();
// FUNCTION: ROBLOXSTUDIO 0x008b16a0
extern "C" __declspec(naked) void asm_008b16a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, 0xc }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jbe L_008b16ba }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008b3200 }
	__asm { L_008b16ba: }
	__asm { mov edx, dword ptr [esi] }
	__asm { add edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { add dword ptr [esi + 4], 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b3200();
// FUNCTION: ROBLOXSTUDIO 0x008b16e0
extern "C" __declspec(naked) void asm_008b16e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, 6 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jbe L_008b16fa }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008b3200 }
	__asm { L_008b16fa: }
	__asm { mov edx, dword ptr [esi] }
	__asm { add edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov ax, word ptr [ecx + 4] }
	__asm { mov word ptr [edx + 4], ax }
	__asm { add dword ptr [esi + 4], 6 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b2c20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008b1720
extern "C" __declspec(naked) void asm_008b1720()
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
	__asm { call fn_008b2c20 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008b19b0
extern "C" __declspec(naked) void asm_008b19b0()
{
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_008b19c4 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_008b19c4: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_008b19cf }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008b19cf: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_008b19d8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008b19d8: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_008b1af0();
// FUNCTION: ROBLOXSTUDIO 0x008b4c80
extern "C" __declspec(naked) void asm_008b4c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { sub eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sar eax, 2 }
	__asm { cmp eax, edx }
	__asm { jae L_008b4cae }
	__asm { cmp edx, 0x3fffffff }
	__asm { jbe L_008b4ca5 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_008b4ca5: }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_008b1af0 }
	__asm { L_008b4cae: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008b9c60();
extern "C" void fn_008bb540();
// FUNCTION: ROBLOXSTUDIO 0x008b9cd0
extern "C" __declspec(naked) void asm_008b9cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_008bb540 }
	__asm { mov esi, eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008b9cf4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008b9c60 }
	__asm { mov eax, esi }
	__asm { L_008b9cf4: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008bb540
extern "C" __declspec(naked) void asm_008bb540()
{
	__asm { push esi }
	__asm { push 0x2c }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_008bb559 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_008bb559: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_008bb568 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008bb568: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_008bb573 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008bb573: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x008bbb20
extern "C" __declspec(naked) void asm_008bbb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add ecx, 0xac }
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

extern "C" void fn_00402fd0();
// FUNCTION: ROBLOXSTUDIO 0x008bde40
extern "C" __declspec(naked) void asm_008bde40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { or esi, 0xffffffff }
	__asm { cmp dword ptr [edx + 0x10], -1 }
	__asm { cmovb esi, dword ptr [edx + 0x10] }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { jb L_008bde5a }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_008bde5a: }
	__asm { push esi }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00402fd0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x008c07f0
extern "C" __declspec(naked) void asm_008c07f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { test eax, eax }
	__asm { je L_008c07ff }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { jmp L_008c0801 }
	__asm { L_008c07ff: }
	__asm { xor ecx, ecx }
	__asm { L_008c0801: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { test eax, eax }
	__asm { je L_008c0819 }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { xor eax, eax }
	__asm { cmp ecx, edx }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008c0819: }
	__asm { xor edx, edx }
	__asm { xor eax, eax }
	__asm { cmp ecx, edx }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc96e[];
extern "C" void fn_0043fa70();
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x008c19c0
extern "C" __declspec(naked) void asm_008c19c0()
{
	__asm { mov al, byte ptr [g_012fc96e] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_008c19e3 }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { movzx eax, al }
	__asm { push esi }
	__asm { push 0xe6efc4 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_008c19e3: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_008c19f9 }
	__asm { push eax }
	__asm { call fn_0043fa70 }
	__asm { pop ecx }
	__asm { L_008c19f9: }
	__asm { ret }
}

extern "C" void fn_008c23c0();
// FUNCTION: ROBLOXSTUDIO 0x008c4130
extern "C" __declspec(naked) void asm_008c4130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008c415e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_008c23c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_008c415e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_008c2470();
// FUNCTION: ROBLOXSTUDIO 0x008c4170
extern "C" __declspec(naked) void asm_008c4170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008c419e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_008c2470 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_008c419e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0079a580();
extern "C" void fn_009ec9b0();
// FUNCTION: ROBLOXSTUDIO 0x008c41b0
extern "C" __declspec(naked) void asm_008c41b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { je L_008c41e1 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { add edx, -0x1c }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { call fn_009ec9b0 }
	__asm { mov ecx, eax }
	__asm { call fn_0079a580 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_008c41e1: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_008c4e30();
// FUNCTION: ROBLOXSTUDIO 0x008c46b0
extern "C" __declspec(naked) void asm_008c46b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008c46cb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_008c4e30 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008c46cb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_008c4e30 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f630();
// FUNCTION: ROBLOXSTUDIO 0x008c46e0
extern "C" __declspec(naked) void asm_008c46e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_008c46f1 }
	__asm { add eax, -0x1c }
	__asm { jmp L_008c46f3 }
	__asm { L_008c46f1: }
	__asm { xor eax, eax }
	__asm { L_008c46f3: }
	__asm { mov ecx, dword ptr [edx + 0x2c] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 0x28] }
	__asm { push 0 }
	__asm { call eax }
	__asm { test eax, eax }
	__asm { je L_008c470a }
	__asm { mov ecx, eax }
	__asm { call fn_0043f630 }
	__asm { L_008c470a: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f040();
extern "C" void fn_008c3c60();
// FUNCTION: ROBLOXSTUDIO 0x008c6550
extern "C" __declspec(naked) void asm_008c6550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0xb8] }
	__asm { call fn_0043f040 }
	__asm { fldz }
	__asm { mov al, byte ptr [ebp + 0x10] }
	__asm { fstp qword ptr [ebp - 0x18] }
	__asm { fld qword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 8], al }
	__asm { lea eax, [ebp - 0x18] }
	__asm { fstp qword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xa0] }
	__asm { call fn_008c3c60 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01038198[];
extern "C" char g_011fa331[];
extern "C" void fn_006c46c0();
// FUNCTION: ROBLOXSTUDIO 0x008c6920
extern "C" __declspec(naked) void asm_008c6920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_011fa331], 0 }
	__asm { je L_008c6934 }
	__asm { fld qword ptr [ecx + 0x208] }
	__asm { jmp L_008c693a }
	__asm { L_008c6934: }
	__asm { fld qword ptr [g_01038198] }
	__asm { L_008c693a: }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00626a40();
extern "C" void fn_008c7380();
// FUNCTION: ROBLOXSTUDIO 0x008c8b20
extern "C" __declspec(naked) void asm_008c8b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00626a40 }
	__asm { mov esi, eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008c8b44 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008c7380 }
	__asm { mov eax, esi }
	__asm { L_008c8b44: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008d1d60();
extern "C" void fn_00a7e3f0();
// FUNCTION: ROBLOXSTUDIO 0x008c8bd0
extern "C" __declspec(naked) void asm_008c8bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_008d1d60 }
	__asm { mov esi, eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008c8bf4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a7e3f0 }
	__asm { mov eax, esi }
	__asm { L_008c8bf4: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008d1da0();
// FUNCTION: ROBLOXSTUDIO 0x008c8c00
extern "C" __declspec(naked) void asm_008c8c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_008d1da0 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_008c8c35 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, esi }
	__asm { L_008c8c35: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008d5990();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008cfbc0
extern "C" __declspec(naked) void asm_008cfbc0()
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
	__asm { call fn_008d5990 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008d5d40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008cfbf0
extern "C" __declspec(naked) void asm_008cfbf0()
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
	__asm { call fn_008d5d40 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008d6110();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008cfc20
extern "C" __declspec(naked) void asm_008cfc20()
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
	__asm { call fn_008d6110 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c81e0();
// FUNCTION: ROBLOXSTUDIO 0x008d0bc0
extern "C" __declspec(naked) void asm_008d0bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [esi], edx }
	__asm { test eax, eax }
	__asm { je L_008d0be2 }
	__asm { push eax }
	__asm { call fn_007c81e0 }
	__asm { add esp, 4 }
	__asm { L_008d0be2: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008d1cc0
extern "C" __declspec(naked) void asm_008d1cc0()
{
	__asm { push 0x38 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_008d1cd4 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_008d1cd4: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_008d1cdf }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008d1cdf: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_008d1ce8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008d1ce8: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008d1cf0
extern "C" __declspec(naked) void asm_008d1cf0()
{
	__asm { push 0x4c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_008d1d04 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_008d1d04: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_008d1d0f }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008d1d0f: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_008d1d18 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008d1d18: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008d1d20
extern "C" __declspec(naked) void asm_008d1d20()
{
	__asm { push esi }
	__asm { push 0x4c }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_008d1d39 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_008d1d39: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_008d1d48 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008d1d48: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_008d1d53 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008d1d53: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008d1d60
extern "C" __declspec(naked) void asm_008d1d60()
{
	__asm { push esi }
	__asm { push 0x40 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_008d1d79 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_008d1d79: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_008d1d88 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008d1d88: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_008d1d93 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008d1d93: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008d1da0
extern "C" __declspec(naked) void asm_008d1da0()
{
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_008d1db9 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_008d1db9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_008d1dc8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008d1dc8: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_008d1dd3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008d1dd3: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008d1de0
extern "C" __declspec(naked) void asm_008d1de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x34], 0x10 }
	__asm { jb L_008d1df8 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d1df8: }
	__asm { mov dword ptr [esi + 0x34], 0xf }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008d0aa0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008d1e20
extern "C" __declspec(naked) void asm_008d1e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x28] }
	__asm { call fn_008d0aa0 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { jb L_008d1e40 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d1e40: }
	__asm { mov dword ptr [esi + 0x24], 0xf }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008cc460();
// FUNCTION: ROBLOXSTUDIO 0x008d3f50
extern "C" __declspec(naked) void asm_008d3f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008d3f7e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_008cc460 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_008d3f7e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_008cc510();
// FUNCTION: ROBLOXSTUDIO 0x008d3f90
extern "C" __declspec(naked) void asm_008d3f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008d3fbe }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_008cc510 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_008d3fbe: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_008d4d70();
// FUNCTION: ROBLOXSTUDIO 0x008d4d10
extern "C" __declspec(naked) void asm_008d4d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008d4d2b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_008d4d70 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008d4d2b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_008d4d70 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008d5100();
// FUNCTION: ROBLOXSTUDIO 0x008d4d40
extern "C" __declspec(naked) void asm_008d4d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008d4d5b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_008d5100 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008d4d5b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_008d5100 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008d54a0
extern "C" __declspec(naked) void asm_008d54a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe71960 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x008d8bb0
extern "C" __declspec(naked) void asm_008d8bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_008d8bde }
	__asm { fld qword ptr [ebp - 8] }
	__asm { fistp dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008d8bde: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008c88d0();
// FUNCTION: ROBLOXSTUDIO 0x008da430
extern "C" __declspec(naked) void asm_008da430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 8 }
	__asm { call fn_008c88d0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x008da560
extern "C" __declspec(naked) void asm_008da560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call eax }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35690();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x008db130
extern "C" __declspec(naked) void asm_008db130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { jb L_008db141 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008db141: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0xed3764 }
	__asm { push 0x1030674 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a39240 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008db970();
// FUNCTION: ROBLOXSTUDIO 0x008db1a0
extern "C" __declspec(naked) void asm_008db1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008db1c3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008db970 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008db1c3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12116d8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008dbae0();
// FUNCTION: ROBLOXSTUDIO 0x008db1e0
extern "C" __declspec(naked) void asm_008db1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008db203 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008dbae0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008db203: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1211f20 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008dbc40();
// FUNCTION: ROBLOXSTUDIO 0x008db220
extern "C" __declspec(naked) void asm_008db220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008db243 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008dbc40 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008db243: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1211e18 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008dbda0();
// FUNCTION: ROBLOXSTUDIO 0x008db2c0
extern "C" __declspec(naked) void asm_008db2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008db2e3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008dbda0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008db2e3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1211960 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008dbee0();
// FUNCTION: ROBLOXSTUDIO 0x008db360
extern "C" __declspec(naked) void asm_008db360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_008db383 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008dbee0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008db383: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1212020 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097efd0();
extern "C" void fn_00a38a50();
// FUNCTION: ROBLOXSTUDIO 0x008dcfd0
extern "C" __declspec(naked) void asm_008dcfd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ecx + 0x128], 0 }
	__asm { je L_008dd000 }
	__asm { call fn_0097efd0 }
	__asm { cmp dword ptr [eax], 2 }
	__asm { je L_008dcff0 }
	__asm { call fn_0097efd0 }
	__asm { cmp dword ptr [eax], 4 }
	__asm { jne L_008dd000 }
	__asm { L_008dcff0: }
	__asm { push 0xe70290 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { L_008dd000: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0128dc74[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00b7bf00();
// FUNCTION: ROBLOXSTUDIO 0x008dd840
extern "C" __declspec(naked) void asm_008dd840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0128dc74] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00b7bf00 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc78[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00b7bf60();
// FUNCTION: ROBLOXSTUDIO 0x008dd870
extern "C" __declspec(naked) void asm_008dd870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0128dc78] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00b7bf60 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc7c[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00b7c000();
// FUNCTION: ROBLOXSTUDIO 0x008dd8a0
extern "C" __declspec(naked) void asm_008dd8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0128dc7c] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00b7c000 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128e200[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00b84440();
// FUNCTION: ROBLOXSTUDIO 0x008dd8d0
extern "C" __declspec(naked) void asm_008dd8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0128e200] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00b84440 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012105e0[];
extern "C" void fn_008c1820();
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
// FUNCTION: ROBLOXSTUDIO 0x008dd900
extern "C" __declspec(naked) void asm_008dd900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_012105e0] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_008c1820 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012105e4[];
extern "C" void fn_008c1820();
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
// FUNCTION: ROBLOXSTUDIO 0x008dd930
extern "C" __declspec(naked) void asm_008dd930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_012105e4] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_008c1820 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012105e8[];
extern "C" void fn_008c1820();
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
// FUNCTION: ROBLOXSTUDIO 0x008dd960
extern "C" __declspec(naked) void asm_008dd960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_012105e8] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_008c1820 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128d3b4[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00b78700();
// FUNCTION: ROBLOXSTUDIO 0x008dd990
extern "C" __declspec(naked) void asm_008dd990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0128d3b4] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00b78700 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac8[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3ce20();
// FUNCTION: ROBLOXSTUDIO 0x008dd9c0
extern "C" __declspec(naked) void asm_008dd9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124eac8] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3ce20 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead0[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3d0c0();
// FUNCTION: ROBLOXSTUDIO 0x008dd9f0
extern "C" __declspec(naked) void asm_008dd9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124ead0] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3d0c0 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead4[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3d320();
// FUNCTION: ROBLOXSTUDIO 0x008dda20
extern "C" __declspec(naked) void asm_008dda20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124ead4] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3d320 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb28[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3d480();
// FUNCTION: ROBLOXSTUDIO 0x008dda50
extern "C" __declspec(naked) void asm_008dda50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124eb28] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3d480 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eacc[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3d580();
// FUNCTION: ROBLOXSTUDIO 0x008dda80
extern "C" __declspec(naked) void asm_008dda80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124eacc] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3d580 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac4[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3db80();
// FUNCTION: ROBLOXSTUDIO 0x008ddab0
extern "C" __declspec(naked) void asm_008ddab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124eac4] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3db80 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc80[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00b81210();
// FUNCTION: ROBLOXSTUDIO 0x008ddae0
extern "C" __declspec(naked) void asm_008ddae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0128dc80] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00b81210 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb1c[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3dd50();
// FUNCTION: ROBLOXSTUDIO 0x008ddb10
extern "C" __declspec(naked) void asm_008ddb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124eb1c] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3dd50 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead8[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3df90();
// FUNCTION: ROBLOXSTUDIO 0x008ddb40
extern "C" __declspec(naked) void asm_008ddb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124ead8] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3df90 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eadc[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3e080();
// FUNCTION: ROBLOXSTUDIO 0x008ddb70
extern "C" __declspec(naked) void asm_008ddb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124eadc] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3e080 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb30[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3e170();
// FUNCTION: ROBLOXSTUDIO 0x008ddba0
extern "C" __declspec(naked) void asm_008ddba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124eb30] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3e170 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb2c[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3e300();
// FUNCTION: ROBLOXSTUDIO 0x008ddbd0
extern "C" __declspec(naked) void asm_008ddbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3e300 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb20[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3e400();
// FUNCTION: ROBLOXSTUDIO 0x008ddc00
extern "C" __declspec(naked) void asm_008ddc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124eb20] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3e400 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb24[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3e650();
// FUNCTION: ROBLOXSTUDIO 0x008ddc30
extern "C" __declspec(naked) void asm_008ddc30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124eb24] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3e650 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb14[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3e770();
// FUNCTION: ROBLOXSTUDIO 0x008ddc60
extern "C" __declspec(naked) void asm_008ddc60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124eb14] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3e770 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb18[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3ebb0();
// FUNCTION: ROBLOXSTUDIO 0x008ddc90
extern "C" __declspec(naked) void asm_008ddc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0124eb18] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3ebb0 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128e204[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00b846b0();
// FUNCTION: ROBLOXSTUDIO 0x008ddcc0
extern "C" __declspec(naked) void asm_008ddcc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0128e204] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00b846b0 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc74[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00b7c0e0();
// FUNCTION: ROBLOXSTUDIO 0x008ddcf0
extern "C" __declspec(naked) void asm_008ddcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0128dc74] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00b7c0e0 }
	__asm { add esp, 0x20 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc78[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00b7c110();
// FUNCTION: ROBLOXSTUDIO 0x008ddd30
extern "C" __declspec(naked) void asm_008ddd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0128dc78] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00b7c110 }
	__asm { add esp, 0x20 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc7c[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00b7c140();
// FUNCTION: ROBLOXSTUDIO 0x008ddd70
extern "C" __declspec(naked) void asm_008ddd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0128dc7c] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00b7c140 }
	__asm { add esp, 0x20 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128e200[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3f7f0();
// FUNCTION: ROBLOXSTUDIO 0x008dddb0
extern "C" __declspec(naked) void asm_008dddb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_0128e200] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3f7f0 }
	__asm { add esp, 0x20 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012105e0[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3f7f0();
// FUNCTION: ROBLOXSTUDIO 0x008dddf0
extern "C" __declspec(naked) void asm_008dddf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_012105e0] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3f7f0 }
	__asm { add esp, 0x20 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012105e4[];
extern "C" void fn_00a389c0();
extern "C" void fn_00a3bc50();
extern "C" void fn_00a3f7f0();
// FUNCTION: ROBLOXSTUDIO 0x008dde30
extern "C" __declspec(naked) void asm_008dde30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a3bc50 }
	__asm { push dword ptr [g_012105e4] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00a3f7f0 }
	__asm { add esp, 0x20 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}
