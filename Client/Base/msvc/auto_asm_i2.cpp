// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_0131c24c[];
extern "C" char g_0131c250[];
extern "C" void fn_004084f0();
extern "C" void fn_00408580();
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00491930
extern "C" __declspec(naked) void asm_00491930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [g_0131c250] }
	__asm { mov ecx, dword ptr [g_0131c24c] }
	__asm { sub eax, ecx }
	__asm { sar eax, 2 }
	__asm { mov dword ptr [ebp - 8], 0x1013220 }
	__asm { cmp eax, 2 }
	__asm { ja L_0049196f }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 3 }
	__asm { mov ecx, 0x131c24c }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00408580 }
	__asm { mov ecx, dword ptr [g_0131c24c] }
	__asm { L_0049196f: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov dword ptr [ecx + 8], 1 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, 0x131c220 }
	__asm { call fn_004084f0 }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_004124c0();
extern "C" void fn_007d5390();
// FUNCTION: ROBLOXSTUDIO 0x00492e70
extern "C" __declspec(naked) void asm_00492e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_00492e81 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_00492e83 }
	__asm { L_00492e81: }
	__asm { xor edi, edi }
	__asm { L_00492e83: }
	__asm { mov edx, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edi + ecx] }
	__asm { call edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_004124c0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00494ae0
extern "C" __declspec(naked) void asm_00494ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00494b17 }
	__asm { mov dword ptr [eax], 0x10136e4 }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00494b19 }
	__asm { L_00494b17: }
	__asm { xor eax, eax }
	__asm { L_00494b19: }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00494b30
extern "C" __declspec(naked) void asm_00494b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00494b67 }
	__asm { mov dword ptr [eax], 0x10136d0 }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00494b69 }
	__asm { L_00494b67: }
	__asm { xor eax, eax }
	__asm { L_00494b69: }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00494b80
extern "C" __declspec(naked) void asm_00494b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00494bb7 }
	__asm { mov dword ptr [eax], 0x10136bc }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00494bb9 }
	__asm { L_00494bb7: }
	__asm { xor eax, eax }
	__asm { L_00494bb9: }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00494bd0
extern "C" __declspec(naked) void asm_00494bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00494c07 }
	__asm { mov dword ptr [eax], 0x10136a8 }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00494c09 }
	__asm { L_00494c07: }
	__asm { xor eax, eax }
	__asm { L_00494c09: }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00494c20
extern "C" __declspec(naked) void asm_00494c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00494c57 }
	__asm { mov dword ptr [eax], 0x1013694 }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00494c59 }
	__asm { L_00494c57: }
	__asm { xor eax, eax }
	__asm { L_00494c59: }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00494c70
extern "C" __declspec(naked) void asm_00494c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00494ca7 }
	__asm { mov dword ptr [eax], 0x1013680 }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00494ca9 }
	__asm { L_00494ca7: }
	__asm { xor eax, eax }
	__asm { L_00494ca9: }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00494cc0
extern "C" __declspec(naked) void asm_00494cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00494cf7 }
	__asm { mov dword ptr [eax], 0x101366c }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00494cf9 }
	__asm { L_00494cf7: }
	__asm { xor eax, eax }
	__asm { L_00494cf9: }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00494d80
extern "C" __declspec(naked) void asm_00494d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00494db7 }
	__asm { mov dword ptr [eax], 0x1013644 }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00494db9 }
	__asm { L_00494db7: }
	__asm { xor eax, eax }
	__asm { L_00494db9: }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00494dd0
extern "C" __declspec(naked) void asm_00494dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00494e07 }
	__asm { mov dword ptr [eax], 0x1013630 }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00494e09 }
	__asm { L_00494e07: }
	__asm { xor eax, eax }
	__asm { L_00494e09: }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004951b0
extern "C" __declspec(naked) void asm_004951b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_004951d4 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { lea edx, [eax - 0x1c] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add ecx, edx }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_004951d4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { xor edx, edx }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
// FUNCTION: ROBLOXSTUDIO 0x00499710
extern "C" __declspec(naked) void asm_00499710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_0049972f }
	__asm { test eax, eax }
	__asm { je L_0049973a }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0049972f: }
	__asm { test eax, eax }
	__asm { je L_0049973a }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0049973a: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c34[];
extern "C" char g_00e10c38[];
extern "C" char g_00e10c3c[];
// FUNCTION: ROBLOXSTUDIO 0x0049a760
extern "C" __declspec(naked) void asm_0049a760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e10c3c] }
	__asm { test al, al }
	__asm { je L_0049a788 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10c38] }
	__asm { test eax, eax }
	__asm { jne L_0049a790 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10c34] }
	__asm { L_0049a788: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0049a790: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10c34] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10c88[];
// FUNCTION: ROBLOXSTUDIO 0x0049b690
extern "C" __declspec(naked) void asm_0049b690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp ebx, esi }
	__asm { je L_0049b6c0 }
	__asm { push edi }
	__asm { L_0049b6a0: }
	__asm { mov edi, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test edi, edi }
	__asm { je L_0049b6bb }
	__asm { push edi }
	__asm { call dword ptr [g_00e10c88] }
	__asm { push edi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 8 }
	__asm { L_0049b6bb: }
	__asm { cmp esi, ebx }
	__asm { jne L_0049b6a0 }
	__asm { pop edi }
	__asm { L_0049b6c0: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_0049bb20();
// FUNCTION: ROBLOXSTUDIO 0x0049b850
extern "C" __declspec(naked) void asm_0049b850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi], 0x1014354 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0049bb20 }
	__asm { push dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [g_00e10508] }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0049b88a }
	__asm { push edi }
	__asm { call esi }
	__asm { add esp, 4 }
	__asm { L_0049b88a: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f90[];
extern "C" char g_00e11110[];
extern "C" char g_00e12dec[];
// FUNCTION: ROBLOXSTUDIO 0x0049f610
extern "C" __declspec(naked) void asm_0049f610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { cmp esi, ebx }
	__asm { je L_0049f63c }
	__asm { push edi }
	__asm { L_0049f620: }
	__asm { lea edi, [esi] }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { lea ecx, [edi - 8] }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [edi - 4] }
	__asm { call dword ptr [g_00e12dec] }
	__asm { cmp esi, ebx }
	__asm { jne L_0049f620 }
	__asm { pop edi }
	__asm { L_0049f63c: }
	__asm { push 8 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10f90] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e12a28[];
extern "C" void fn_004a0b80();
extern "C" void fn_004a2150();
// FUNCTION: ROBLOXSTUDIO 0x004a0ac0
extern "C" __declspec(naked) void asm_004a0ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { add eax, 0x10 }
	__asm { push esi }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_004a0b80 }
	__asm { test eax, eax }
	__asm { js L_004a0b07 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_004a2150 }
	__asm { add eax, 0x30 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c0998 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_004a0b07: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e12a28] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x004a27e0
extern "C" __declspec(naked) void asm_004a27e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp ebx, esi }
	__asm { je L_004a2812 }
	__asm { push edi }
	__asm { L_004a27f0: }
	__asm { mov edi, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test edi, edi }
	__asm { je L_004a280d }
	__asm { lea ecx, [edi + 0x30] }
	__asm { call dword ptr [g_00e11110] }
	__asm { push edi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004a280d: }
	__asm { cmp esi, ebx }
	__asm { jne L_004a27f0 }
	__asm { pop edi }
	__asm { L_004a2812: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403110();
// FUNCTION: ROBLOXSTUDIO 0x004a75e0
extern "C" __declspec(naked) void asm_004a75e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [ebp - 4] }
	__asm { mov byte ptr [esi], 0 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { push 0xf12f28 }
	__asm { mov word ptr [esi + 0xc], 0x101 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_004a762b }
	__asm { sub eax, 4 }
	__asm { L_004a762b: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11aec[];
extern "C" char g_00e11af0[];
extern "C" void fn_004ac4a0();
extern "C" void fn_004acbc0();
// FUNCTION: ROBLOXSTUDIO 0x004acb70
extern "C" __declspec(naked) void asm_004acb70()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov ebx, ecx }
	__asm { call fn_004ac4a0 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_004acbb0 }
	__asm { mov ecx, edi }
	__asm { xor esi, esi }
	__asm { call dword ptr [g_00e11af0] }
	__asm { test eax, eax }
	__asm { jle L_004acbb0 }
	__asm { L_004acb90: }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e11aec] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_004acbc0 }
	__asm { mov ecx, edi }
	__asm { inc esi }
	__asm { call dword ptr [g_00e11af0] }
	__asm { cmp esi, eax }
	__asm { jl L_004acb90 }
	__asm { L_004acbb0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00403110();
// FUNCTION: ROBLOXSTUDIO 0x004ae340
extern "C" __declspec(naked) void asm_004ae340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_004ae371 }
	__asm { sub eax, 4 }
	__asm { L_004ae371: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x004afbc0
extern "C" __declspec(naked) void asm_004afbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xefb39c }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_004afbec }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_004afbec }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_004afbec: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_004afc04 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004afc04: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x004b03f0
extern "C" __declspec(naked) void asm_004b03f0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xefb3b0 }
	__asm { mov dword ptr [esi + 0x14], 0xefb3bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x28], 0xefb3c4 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xefb39c }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_004b0441 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_004b0441 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_004b0441: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004b1150
extern "C" __declspec(naked) void asm_004b1150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_004b118a }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_004b1180 }
	__asm { test al, 1 }
	__asm { jne L_004b117a }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004b117a }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004b117a: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_004b1180: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004b118a: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004b3030
extern "C" __declspec(naked) void asm_004b3030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, esi }
	__asm { je L_004b3069 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { L_004b3046: }
	__asm { mov eax, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test eax, eax }
	__asm { je L_004b3064 }
	__asm { push eax }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_004b3064: }
	__asm { cmp esi, edi }
	__asm { jne L_004b3046 }
	__asm { pop ebx }
	__asm { L_004b3069: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004b0630();
// FUNCTION: ROBLOXSTUDIO 0x004b3b30
extern "C" __declspec(naked) void asm_004b3b30()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_004b3b79 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_004b3b6f }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_004b3b55 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b0630 }
	__asm { L_004b3b55: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_004b3b6f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004b3b79: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_004b0630();
// FUNCTION: ROBLOXSTUDIO 0x004b4ba0
extern "C" __declspec(naked) void asm_004b4ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_004b4bec }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_004b4be2 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_004b4bc8 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b0630 }
	__asm { L_004b4bc8: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_004b4be2: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004b4bec: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004c58b0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x004c5850
extern "C" __declspec(naked) void asm_004c5850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_004c589d }
	__asm { cmp dword ptr [esi + 0x6c], 0 }
	__asm { jne L_004c589d }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_004c588c }
	__asm { push 0xaf5 }
	__asm { push 0x10188c8 }
	__asm { push 0x1019b54 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004c589d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004c588c: }
	__asm { movzx eax, al }
	__asm { push 0x1019af0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004c589d: }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [esi + 0x6c] }
	__asm { call fn_004c58b0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004cd4a0();
// FUNCTION: ROBLOXSTUDIO 0x004ccfb0
extern "C" __declspec(naked) void asm_004ccfb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_004cd4a0 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_004ccff3 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov eax, esi }
	__asm { L_004ccff3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c650[];
extern "C" void fn_004cf530();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x004cf5d0
extern "C" __declspec(naked) void asm_004cf5d0()
{
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004cf61e }
	__asm { cmp dword ptr [g_0131c650], 0x29a }
	__asm { je L_004cf61e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004cf60d }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004cf61e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004cf60d: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004cf61e: }
	__asm { call fn_004cf530 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c664[];
extern "C" void fn_004cfb00();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x004cfba0
extern "C" __declspec(naked) void asm_004cfba0()
{
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004cfbee }
	__asm { cmp dword ptr [g_0131c664], 0x29a }
	__asm { je L_004cfbee }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004cfbdd }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004cfbee }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004cfbdd: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004cfbee: }
	__asm { call fn_004cfb00 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c678[];
extern "C" void fn_004d00d0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x004d0170
extern "C" __declspec(naked) void asm_004d0170()
{
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004d01be }
	__asm { cmp dword ptr [g_0131c678], 0x29a }
	__asm { je L_004d01be }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004d01ad }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004d01be }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004d01ad: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004d01be: }
	__asm { call fn_004d00d0 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c68c[];
extern "C" void fn_004d06a0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x004d0740
extern "C" __declspec(naked) void asm_004d0740()
{
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004d078e }
	__asm { cmp dword ptr [g_0131c68c], 0x29a }
	__asm { je L_004d078e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004d077d }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004d078e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004d077d: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004d078e: }
	__asm { call fn_004d06a0 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c6e8[];
extern "C" void fn_004d1260();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x004d1300
extern "C" __declspec(naked) void asm_004d1300()
{
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004d134e }
	__asm { cmp dword ptr [g_0131c6e8], 0x29a }
	__asm { je L_004d134e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004d133d }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004d134e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004d133d: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004d134e: }
	__asm { call fn_004d1260 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c6fc[];
extern "C" void fn_004d1830();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x004d18d0
extern "C" __declspec(naked) void asm_004d18d0()
{
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_004d191e }
	__asm { cmp dword ptr [g_0131c6fc], 0x29a }
	__asm { je L_004d191e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004d190d }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004d191e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004d190d: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004d191e: }
	__asm { call fn_004d1830 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x004d1ab0
extern "C" __declspec(naked) void asm_004d1ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_004d1afa }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { jne L_004d1afa }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004d1ae9 }
	__asm { push 0x42 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004d1afa }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_004d1ae9: }
	__asm { movzx eax, al }
	__asm { push 0x1018178 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004d1afa: }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + eax*8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f90[];
extern "C" char g_00e11110[];
extern "C" char g_00e125cc[];
// FUNCTION: ROBLOXSTUDIO 0x004d63b0
extern "C" __declspec(naked) void asm_004d63b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { cmp esi, ebx }
	__asm { je L_004d63dc }
	__asm { push edi }
	__asm { L_004d63c0: }
	__asm { lea edi, [esi] }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { lea ecx, [edi - 8] }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [edi - 4] }
	__asm { call dword ptr [g_00e125cc] }
	__asm { cmp esi, ebx }
	__asm { jne L_004d63c0 }
	__asm { pop edi }
	__asm { L_004d63dc: }
	__asm { push 8 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10f90] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e125cc[];
// FUNCTION: ROBLOXSTUDIO 0x004d6c10
extern "C" __declspec(naked) void asm_004d6c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp ebx, esi }
	__asm { je L_004d6c42 }
	__asm { push edi }
	__asm { L_004d6c20: }
	__asm { mov edi, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test edi, edi }
	__asm { je L_004d6c3d }
	__asm { lea ecx, [edi + 8] }
	__asm { call dword ptr [g_00e125cc] }
	__asm { push edi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004d6c3d: }
	__asm { cmp esi, ebx }
	__asm { jne L_004d6c20 }
	__asm { pop edi }
	__asm { L_004d6c42: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1119c[];
extern "C" char g_013000f0[];
// FUNCTION: ROBLOXSTUDIO 0x004f2c80
extern "C" __declspec(naked) void asm_004f2c80()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e1119c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0x278] }
	__asm { push dword ptr [esi + 0x274] }
	__asm { call edi }
	__asm { cmp byte ptr [g_013000f0], 0 }
	__asm { mov ecx, esi }
	__asm { je L_004f2cb1 }
	__asm { push dword ptr [esi + 0x274] }
	__asm { push dword ptr [esi + 0x278] }
	__asm { jmp L_004f2ccd }
	__asm { L_004f2cb1: }
	__asm { push dword ptr [esi + 0x27c] }
	__asm { push dword ptr [esi + 0x278] }
	__asm { call edi }
	__asm { push dword ptr [esi + 0x274] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [esi + 0x27c] }
	__asm { L_004f2ccd: }
	__asm { call edi }
	__asm { push dword ptr [esi + 0x280] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [esi + 0x274] }
	__asm { call edi }
	__asm { push dword ptr [esi + 0x318] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [esi + 0x280] }
	__asm { call edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004f4cb0
extern "C" __declspec(naked) void asm_004f4cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_004f4cc9 }
	__asm { push dword ptr [esi + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004f4cc9: }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_004f4cf5 }
	__asm { push dword ptr [esi + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004f4cf5: }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_004f72a0();
extern "C" void fn_004f8060();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004f6e60
extern "C" __declspec(naked) void asm_004f6e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_004f6e9c }
	__asm { push 0 }
	__asm { push 0x12ce7f4 }
	__asm { push 0x12c61f4 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { add esp, 0x14 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { call fn_004f72a0 }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { push esi }
	__asm { call fn_004f8060 }
	__asm { L_004f6e9c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x004f8a00
extern "C" __declspec(naked) void asm_004f8a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { cmp esi, edi }
	__asm { je L_004f8a28 }
	__asm { L_004f8a12: }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [esi] }
	__asm { add esp, 0xc }
	__asm { cmp esi, edi }
	__asm { jne L_004f8a12 }
	__asm { L_004f8a28: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e129d0[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004f9d20
extern "C" __declspec(naked) void asm_004f9d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp dword ptr [eax + 4], 1 }
	__asm { jne L_004f9d62 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { push 0 }
	__asm { push 0x12c6ac0 }
	__asm { push 0x12c39ac }
	__asm { push 0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e129d0] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_004f9d62 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x1c] }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_004f9d62: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e129d0[];
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x004f9df0
extern "C" __declspec(naked) void asm_004f9df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [eax + 4], 1 }
	__asm { jne L_004f9e31 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { push 0 }
	__asm { push 0x12c6ac0 }
	__asm { push 0x12c39ac }
	__asm { push 0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e129d0] }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, eax }
	__asm { add esp, 0x14 }
	__asm { test ecx, ecx }
	__asm { je L_004f9e31 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_004f9e31: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_006bca40();
extern "C" void fn_006bca60();
// FUNCTION: ROBLOXSTUDIO 0x004fa230
extern "C" __declspec(naked) void asm_004fa230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { fld qword ptr [esi + 0x218] }
	__asm { fadd qword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x210] }
	__asm { fstp qword ptr [esi + 0x220] }
	__asm { dec eax }
	__asm { je L_004fa272 }
	__asm { dec eax }
	__asm { jne L_004fa299 }
	__asm { mov ecx, dword ptr [esi + 0x208] }
	__asm { mov dword ptr [esi + 0x210], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x180] }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004fa272: }
	__asm { lea ecx, [esi + 0x228] }
	__asm { call fn_006bca40 }
	__asm { lea ecx, [esi + 0x22c] }
	__asm { call fn_006bca60 }
	__asm { mov byte ptr [esi + 0x20c], 0 }
	__asm { mov dword ptr [esi + 0x210], 2 }
	__asm { L_004fa299: }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004ff7c0
extern "C" __declspec(naked) void asm_004ff7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { cmp ecx, dword ptr [edi + 0x14] }
	__asm { je L_004ff7f8 }
	__asm { push esi }
	__asm { L_004ff7e8: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { cmp esi, dword ptr [edi + 0x14] }
	__asm { jne L_004ff7e8 }
	__asm { pop esi }
	__asm { L_004ff7f8: }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call ebx }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11004[];
extern "C" void fn_004cc2e0();
// FUNCTION: ROBLOXSTUDIO 0x005043a0
extern "C" __declspec(naked) void asm_005043a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jne L_005043c0 }
	__asm { push 0x33 }
	__asm { push 0x1024240 }
	__asm { push 0x1024228 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_005043c0: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_005043d6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_004cc2e0 }
	__asm { L_005043d6: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_005043ec }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 8] }
	__asm { call fn_004cc2e0 }
	__asm { L_005043ec: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, 3 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e129b8[];
extern "C" char g_00e12a04[];
extern "C" char g_00e134b0[];
extern "C" char g_00e13624[];
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0050a1f0
extern "C" __declspec(naked) void asm_0050a1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [g_00e129b8] }
	__asm { sub esp, 0xc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { je L_0050a217 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12a04] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0050a217: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [g_00e134b0] }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { je L_0050a238 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e13624] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0050a238: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x102657c }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11034[];
// FUNCTION: ROBLOXSTUDIO 0x0050eeb0
extern "C" __declspec(naked) void asm_0050eeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 8] }
	__asm { add esi, 5 }
	__asm { add edi, 5 }
	__asm { lea esi, [ecx + esi*4] }
	__asm { lea edi, [ecx + edi*4] }
	__asm { cmp edi, esi }
	__asm { je L_0050eee8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { L_0050eed5: }
	__asm { push dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { cmp esi, edi }
	__asm { jne L_0050eed5 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop ebx }
	__asm { L_0050eee8: }
	__asm { push ecx }
	__asm { call dword ptr [g_00e11034] }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
// FUNCTION: ROBLOXSTUDIO 0x0050fb10
extern "C" __declspec(naked) void asm_0050fb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x3c] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0050fb39 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { add ecx, 8 }
	__asm { push esi }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0050fb39: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x102775c }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01301e64[];
extern "C" void fn_0041f760();
extern "C" void fn_00421600();
extern "C" void fn_0082ea90();
// FUNCTION: ROBLOXSTUDIO 0x0051c170
extern "C" __declspec(naked) void asm_0051c170()
{
	__asm { cmp byte ptr [g_01301e64], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jne L_0051c180 }
	__asm { L_0051c17c: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0051c180: }
	__asm { call fn_0082ea90 }
	__asm { test al, al }
	__asm { je L_0051c17c }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0051c1ab }
	__asm { call fn_0041f760 }
	__asm { test eax, eax }
	__asm { je L_0051c1ab }
	__asm { mov ecx, eax }
	__asm { call fn_00421600 }
	__asm { test eax, eax }
	__asm { je L_0051c1ab }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0051c1ab: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_004226b0();
extern "C" void fn_0052b9d0();
// FUNCTION: ROBLOXSTUDIO 0x005258e0
extern "C" __declspec(naked) void asm_005258e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { sub esp, 0x18 }
	__asm { test eax, eax }
	__asm { je L_0052592d }
	__asm { mov dword ptr [esp + 0x10], ecx }
	__asm { lea ecx, [esp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [esp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0xac8] }
	__asm { mov dword ptr [esp + 0x10], 0x524b00 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_0052b9d0 }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { je L_0052592d }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_0052592d: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005316c0();
// FUNCTION: ROBLOXSTUDIO 0x0052f720
extern "C" __declspec(naked) void asm_0052f720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, ebx }
	__asm { je L_0052f750 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { L_0052f733: }
	__asm { test edi, edi }
	__asm { je L_0052f73f }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_005316c0 }
	__asm { L_0052f73f: }
	__asm { add esi, 0x54 }
	__asm { add edi, 0x54 }
	__asm { cmp esi, ebx }
	__asm { jne L_0052f733 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0052f750: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00530340
extern "C" __declspec(naked) void asm_00530340()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x3c], 0x10 }
	__asm { jb L_00530355 }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00530355: }
	__asm { mov dword ptr [esi + 0x3c], 0xf }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov byte ptr [esi + 0x28], 0 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_0053038e }
	__asm { test al, 1 }
	__asm { jne L_00530387 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00530387 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00530387: }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_0053038e: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c790[];
extern "C" void fn_00531e50();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00531ef0
extern "C" __declspec(naked) void asm_00531ef0()
{
	__asm { push ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00531f3e }
	__asm { cmp dword ptr [g_0131c790], 0x29a }
	__asm { je L_00531f3e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00531f2d }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00531f3e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00531f2d: }
	__asm { movzx eax, al }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00531f3e: }
	__asm { call fn_00531e50 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_004cd4a0();
// FUNCTION: ROBLOXSTUDIO 0x00533ea0
extern "C" __declspec(naked) void asm_00533ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_004cd4a0 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_00533ee2 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, esi }
	__asm { L_00533ee2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
extern "C" char g_00e12ac4[];
extern "C" void fn_0053dc10();
// FUNCTION: ROBLOXSTUDIO 0x0053db90
extern "C" __declspec(naked) void asm_0053db90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { add ecx, -0x50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0053dc10 }
	__asm { test eax, eax }
	__asm { je L_0053dbbf }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12ac4] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0053dbbf: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xf12f2d }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101a4[];
extern "C" char g_00e1022c[];
extern "C" char g_012de64f[];
// FUNCTION: ROBLOXSTUDIO 0x005402e0
extern "C" __declspec(naked) void asm_005402e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], 0x102f538 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call dword ptr [g_00e101a4] }
	__asm { mov al, byte ptr [g_012de64f] }
	__asm { test al, al }
	__asm { je L_00540317 }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0x100df30 }
	__asm { push eax }
	__asm { call dword ptr [g_00e1022c] }
	__asm { add esp, 0xc }
	__asm { L_00540317: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x102f500 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_01038228[];
// FUNCTION: ROBLOXSTUDIO 0x005404d0
extern "C" __declspec(naked) void asm_005404d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [ecx + 0x218], 0 }
	__asm { je L_005404fd }
	__asm { fldz }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [esp] }
	__asm { fstp qword ptr [esp] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_005404fd: }
	__asm { fld qword ptr [g_01038228] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [esp + 8] }
	__asm { fstp qword ptr [esp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00545160
extern "C" __declspec(naked) void asm_00545160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00545182 }
	__asm { nop }
	__asm { L_00545170: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { add ecx, dword ptr [ebp + 0x18] }
	__asm { call dword ptr [ebp + 0x14] }
	__asm { add esi, 8 }
	__asm { cmp esi, edi }
	__asm { jne L_00545170 }
	__asm { L_00545182: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x20] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101a8[];
extern "C" char g_00e1022c[];
extern "C" char g_00e10508[];
extern "C" char g_012de64f[];
// FUNCTION: ROBLOXSTUDIO 0x005461c0
extern "C" __declspec(naked) void asm_005461c0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_005461ea }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { L_005461ea: }
	__asm { lea edi, [esi + 8] }
	__asm { push edi }
	__asm { call dword ptr [g_00e101a8] }
	__asm { mov al, byte ptr [g_012de64f] }
	__asm { test al, al }
	__asm { je L_00546210 }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0x100df10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e1022c] }
	__asm { add esp, 0xc }
	__asm { L_00546210: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e11108[];
extern "C" char g_00e12f34[];
// FUNCTION: ROBLOXSTUDIO 0x00547a70
extern "C" __declspec(naked) void asm_00547a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { lea edx, [ecx + 0xc] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00547aa1 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call dword ptr [g_00e12f34] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00547aa1: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10a48[];
extern "C" char g_00e11004[];
extern "C" char g_00e11110[];
extern "C" void fn_004149b0();
// FUNCTION: ROBLOXSTUDIO 0x00548c80
extern "C" __declspec(naked) void asm_00548c80()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { cmp eax, dword ptr [edx + 8] }
	__asm { jne L_00548ca6 }
	__asm { push 0x108 }
	__asm { push 0x1002fd0 }
	__asm { push 0x1012b6c }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00548ca6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { je L_00548cb9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004149b0 }
	__asm { L_00548cb9: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { add ecx, 0x14 }
	__asm { mov esi, dword ptr [ecx - 0xc] }
	__asm { lea esi, [ecx + esi*4] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11110] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10a48] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e11098[];
extern "C" char g_00e110a8[];
extern "C" char g_00e116ec[];
extern "C" void fn_004140a0();
extern "C" void fn_00511470();
extern "C" void fn_005678f0();
// FUNCTION: ROBLOXSTUDIO 0x0054e090
extern "C" __declspec(naked) void asm_0054e090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push ecx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e116ec] }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { test ecx, ecx }
	__asm { je L_0054e0af }
	__asm { call fn_00511470 }
	__asm { L_0054e0af: }
	__asm { call fn_004140a0 }
	__asm { cmp byte ptr [eax + 0x15a], 0 }
	__asm { je L_0054e0eb }
	__asm { push 0x1030f08 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0x1030e98 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { call fn_005678f0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e11098] }
	__asm { add esp, 0x10 }
	__asm { L_0054e0eb: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10510[];
// FUNCTION: ROBLOXSTUDIO 0x00555ba0
extern "C" __declspec(naked) void asm_00555ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [esi], 0xe182d0 }
	__asm { mov dword ptr [ecx], 0xe18150 }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00555bda }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00555bda }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_00555bda: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00555bea }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00555bea: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x005561a0
extern "C" __declspec(naked) void asm_005561a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x9c], 0x10 }
	__asm { jb L_005561bb }
	__asm { push dword ptr [esi + 0x88] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_005561bb: }
	__asm { mov dword ptr [esi + 0x9c], 0xf }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov byte ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esi], 0x1032224 }
	__asm { mov dword ptr [esi + 4], 0x1031d54 }
	__asm { mov dword ptr [esi + 0x18], 0x10327ac }
	__asm { mov dword ptr [esi + 0x1c], 0x10326e8 }
	__asm { cmp dword ptr [esi + 0x7c], 0x10 }
	__asm { jb L_00556203 }
	__asm { push dword ptr [esi + 0x68] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00556203: }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_007b00e0 }
}

extern "C" char g_00e10508[];
extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x005587e0
extern "C" __declspec(naked) void asm_005587e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0x1032224 }
	__asm { mov dword ptr [esi + 4], 0x1031d54 }
	__asm { mov dword ptr [esi + 0x18], 0x10327ac }
	__asm { mov dword ptr [esi + 0x1c], 0x10326e8 }
	__asm { cmp dword ptr [esi + 0x7c], 0x10 }
	__asm { jb L_00558813 }
	__asm { push dword ptr [esi + 0x68] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00558813: }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_0055883c }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0055883c: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004c92a0();
extern "C" void fn_00572d10();
// FUNCTION: ROBLOXSTUDIO 0x00572de0
extern "C" __declspec(naked) void asm_00572de0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00572d10 }
	__asm { test al, al }
	__asm { jne L_00572e2a }
	__asm { mov ecx, dword ptr [esi + 0xc4] }
	__asm { test ecx, ecx }
	__asm { je L_00572e09 }
	__asm { call fn_004c92a0 }
	__asm { test eax, eax }
	__asm { je L_00572e09 }
	__asm { mov al, byte ptr [eax + 0x195] }
	__asm { test al, al }
	__asm { jne L_00572e2a }
	__asm { L_00572e09: }
	__asm { mov ecx, dword ptr [esi + 0xc4] }
	__asm { test ecx, ecx }
	__asm { je L_00572e26 }
	__asm { call fn_004c92a0 }
	__asm { test eax, eax }
	__asm { je L_00572e26 }
	__asm { mov al, byte ptr [eax + 0x189] }
	__asm { test al, al }
	__asm { jne L_00572e2a }
	__asm { L_00572e26: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00572e2a: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e105d4[];
extern "C" void fn_00426850();
// FUNCTION: ROBLOXSTUDIO 0x00574800
extern "C" __declspec(naked) void asm_00574800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ecx + 0x28], 0 }
	__asm { je L_0057482b }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { push 1 }
	__asm { mov byte ptr [ebp + 8], al }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0x18 }
	__asm { call fn_00426850 }
	__asm { xor ecx, ecx }
	__asm { cmp eax, -1 }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0057482b: }
	__asm { cmp byte ptr [ecx + 0x31], 0 }
	__asm { je L_00574849 }
	__asm { movsx eax, byte ptr [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e105d4] }
	__asm { add esp, 4 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00574849: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00574ce0
extern "C" __declspec(naked) void asm_00574ce0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x5c], 0x10 }
	__asm { mov edi, dword ptr [g_00e10508] }
	__asm { jb L_00574cf8 }
	__asm { push dword ptr [esi + 0x48] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_00574cf8: }
	__asm { mov dword ptr [esi + 0x5c], 0xf }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov byte ptr [esi + 0x48], 0 }
	__asm { cmp dword ptr [esi + 0x2c], 0x10 }
	__asm { jb L_00574d18 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_00574d18: }
	__asm { mov dword ptr [esi + 0x2c], 0xf }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00574d37 }
	__asm { push dword ptr [esi] }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { L_00574d37: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1107c[];
extern "C" void fn_00426fa0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00578c40
extern "C" __declspec(naked) void asm_00578c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, 0x3fc }
	__asm { cmp word ptr [eax + 8], dx }
	__asm { je L_00578c5b }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e1107c] }
	__asm { L_00578c5b: }
	__asm { push 0 }
	__asm { push 0x12bf0d4 }
	__asm { push 0x12bf0fc }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00578c82 }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00578c82 }
	__asm { call fn_00426fa0 }
	__asm { L_00578c82: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0057db00
extern "C" __declspec(naked) void asm_0057db00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov edx, edi }
	__asm { test eax, eax }
	__asm { je L_0057db25 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ecx + 4] }
	__asm { cmp edi, edx }
	__asm { je L_0057db34 }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [eax + edx*4], esi }
	__asm { L_0057db25: }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { cmp dword ptr [eax + edi*4], esi }
	__asm { jne L_0057db34 }
	__asm { mov dword ptr [eax + edi*4], 0 }
	__asm { L_0057db34: }
	__asm { pop edi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004b0630();
// FUNCTION: ROBLOXSTUDIO 0x0057dee0
extern "C" __declspec(naked) void asm_0057dee0()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_0057df25 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_0057df21 }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { je L_0057df07 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_004b0630 }
	__asm { L_0057df07: }
	__asm { push dword ptr [edi + 0x18] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { L_0057df21: }
	__asm { mov byte ptr [edi], 0 }
	__asm { pop esi }
	__asm { L_0057df25: }
	__asm { pop edi }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" void fn_004b0630();
// FUNCTION: ROBLOXSTUDIO 0x0057dfe0
extern "C" __declspec(naked) void asm_0057dfe0()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi + 0x10], 0 }
	__asm { je L_0057e027 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_0057e022 }
	__asm { cmp dword ptr [edi + 0x1c], 0 }
	__asm { je L_0057e008 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { call fn_004b0630 }
	__asm { L_0057e008: }
	__asm { push dword ptr [edi + 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { L_0057e022: }
	__asm { mov byte ptr [edi + 0x10], 0 }
	__asm { pop esi }
	__asm { L_0057e027: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" void fn_0044cb30();
extern "C" void fn_0044cc00();
extern "C" void fn_0044cc90();
// FUNCTION: ROBLOXSTUDIO 0x00584330
extern "C" __declspec(naked) void asm_00584330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_00584346 }
	__asm { call fn_0044cb30 }
	__asm { L_00584346: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0044cc00 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { pop esi }
	__asm { cmp eax, ecx }
	__asm { jne L_00584373 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044cc90 }
	__asm { L_00584373: }
	__asm { add eax, -4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10f7c[];
// FUNCTION: ROBLOXSTUDIO 0x00584ac0
extern "C" __declspec(naked) void asm_00584ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push 4 }
	__asm { push 0x14 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10f7c] }
	__asm { mov esi, eax }
	__asm { lea edx, [esi - 0x14] }
	__asm { test edx, edx }
	__asm { je L_00584ae4 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [edx], ecx }
	__asm { L_00584ae4: }
	__asm { add edx, 4 }
	__asm { je L_00584b04 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, esi }
	__asm { L_00584b04: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00585090();
// FUNCTION: ROBLOXSTUDIO 0x00585270
extern "C" __declspec(naked) void asm_00585270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_005852ab }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_005852a9 }
	__asm { cmp esi, 9 }
	__asm { jge L_005852a6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00585090 }
	__asm { add esp, 0x10 }
	__asm { L_005852a6: }
	__asm { sub esi, 9 }
	__asm { L_005852a9: }
	__asm { mov eax, esi }
	__asm { L_005852ab: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e121e4[];
extern "C" void fn_00585320();
// FUNCTION: ROBLOXSTUDIO 0x005854d0
extern "C" __declspec(naked) void asm_005854d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0058550b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00585509 }
	__asm { cmp esi, 7 }
	__asm { jge L_00585506 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00585320 }
	__asm { add esp, 0x10 }
	__asm { L_00585506: }
	__asm { sub esi, 7 }
	__asm { L_00585509: }
	__asm { mov eax, esi }
	__asm { L_0058550b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12104[];
extern "C" void fn_00585520();
// FUNCTION: ROBLOXSTUDIO 0x00585670
extern "C" __declspec(naked) void asm_00585670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12104] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_005856ab }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_005856a9 }
	__asm { cmp esi, 5 }
	__asm { jge L_005856a6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00585520 }
	__asm { add esp, 0x10 }
	__asm { L_005856a6: }
	__asm { sub esi, 5 }
	__asm { L_005856a9: }
	__asm { mov eax, esi }
	__asm { L_005856ab: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12104[];
extern "C" void fn_00585520();
// FUNCTION: ROBLOXSTUDIO 0x005858f0
extern "C" __declspec(naked) void asm_005858f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12104] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00585929 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00585929 }
	__asm { cmp esi, 5 }
	__asm { jge L_00585926 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00585520 }
	__asm { add esp, 0x10 }
	__asm { L_00585926: }
	__asm { sub esi, 5 }
	__asm { L_00585929: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00585ad0();
// FUNCTION: ROBLOXSTUDIO 0x00585bd0
extern "C" __declspec(naked) void asm_00585bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00585c09 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00585c07 }
	__asm { cmp esi, 1 }
	__asm { jge L_00585c06 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00585ad0 }
	__asm { add esp, 0x10 }
	__asm { L_00585c06: }
	__asm { dec esi }
	__asm { L_00585c07: }
	__asm { mov eax, esi }
	__asm { L_00585c09: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f00[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" char g_00e12a20[];
// FUNCTION: ROBLOXSTUDIO 0x00585cd0
extern "C" __declspec(naked) void asm_00585cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00585d1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12c0938 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00585d02 }
	__asm { push 0x2e }
	__asm { push 0x1036158 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00585d02: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_00585d1b }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { call dword ptr [g_00e10f00] }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e12a20] }
	__asm { L_00585d1b: }
	__asm { pop esi }
	__asm { L_00585d1c: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
// FUNCTION: ROBLOXSTUDIO 0x00585d20
extern "C" __declspec(naked) void asm_00585d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00585d68 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12c0948 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00585d52 }
	__asm { push 0x7a }
	__asm { push 0x1036158 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00585d52: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_00585d63 }
	__asm { dec eax }
	__asm { jne L_00585d67 }
	__asm { mov byte ptr [esi + 0x28], al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00585d63: }
	__asm { mov byte ptr [esi + 0x28], 1 }
	__asm { L_00585d67: }
	__asm { pop esi }
	__asm { L_00585d68: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12104[];
extern "C" void fn_00585d20();
// FUNCTION: ROBLOXSTUDIO 0x00585e20
extern "C" __declspec(naked) void asm_00585e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12104] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00585e5b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00585e59 }
	__asm { cmp esi, 2 }
	__asm { jge L_00585e56 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00585d20 }
	__asm { add esp, 0x10 }
	__asm { L_00585e56: }
	__asm { sub esi, 2 }
	__asm { L_00585e59: }
	__asm { mov eax, esi }
	__asm { L_00585e5b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_0047abb0();
// FUNCTION: ROBLOXSTUDIO 0x00585e70
extern "C" __declspec(naked) void asm_00585e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00585ebe }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12c0958 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00585ea0 }
	__asm { push 0x2e }
	__asm { push 0x10361a0 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00585ea0: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_00585ebe }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_0047abb0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_00585ebe }
	__asm { mov byte ptr [ecx], al }
	__asm { L_00585ebe: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00585e70();
// FUNCTION: ROBLOXSTUDIO 0x00585f70
extern "C" __declspec(naked) void asm_00585f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00585fa9 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00585fa7 }
	__asm { cmp esi, 1 }
	__asm { jge L_00585fa6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00585e70 }
	__asm { add esp, 0x10 }
	__asm { L_00585fa6: }
	__asm { dec esi }
	__asm { L_00585fa7: }
	__asm { mov eax, esi }
	__asm { L_00585fa9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00586700();
// FUNCTION: ROBLOXSTUDIO 0x005868b0
extern "C" __declspec(naked) void asm_005868b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_005868eb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_005868e9 }
	__asm { cmp esi, 3 }
	__asm { jge L_005868e6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00586700 }
	__asm { add esp, 0x10 }
	__asm { L_005868e6: }
	__asm { sub esi, 3 }
	__asm { L_005868e9: }
	__asm { mov eax, esi }
	__asm { L_005868eb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12f78[];
extern "C" void fn_00586970();
// FUNCTION: ROBLOXSTUDIO 0x00586ad0
extern "C" __declspec(naked) void asm_00586ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12f78] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00586b0b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00586b09 }
	__asm { cmp esi, 4 }
	__asm { jge L_00586b06 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00586970 }
	__asm { add esp, 0x10 }
	__asm { L_00586b06: }
	__asm { sub esi, 4 }
	__asm { L_00586b09: }
	__asm { mov eax, esi }
	__asm { L_00586b0b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
// FUNCTION: ROBLOXSTUDIO 0x00586b20
extern "C" __declspec(naked) void asm_00586b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00586b80 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12c0998 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00586b53 }
	__asm { push 0x2e }
	__asm { push 0x1036300 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00586b53: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_00586b80 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c0998 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_00586b80: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12c58[];
extern "C" void fn_00586b20();
// FUNCTION: ROBLOXSTUDIO 0x00586c40
extern "C" __declspec(naked) void asm_00586c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12c58] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00586c79 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00586c77 }
	__asm { cmp esi, 1 }
	__asm { jge L_00586c76 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00586b20 }
	__asm { add esp, 0x10 }
	__asm { L_00586c76: }
	__asm { dec esi }
	__asm { L_00586c77: }
	__asm { mov eax, esi }
	__asm { L_00586c79: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
// FUNCTION: ROBLOXSTUDIO 0x00586c80
extern "C" __declspec(naked) void asm_00586c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00586ce0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0xf1e370 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00586cb3 }
	__asm { push 0x7f }
	__asm { push 0x1036300 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00586cb3: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_00586ce0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0xf1e370 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_00586ce0: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12c58[];
extern "C" void fn_00586b20();
// FUNCTION: ROBLOXSTUDIO 0x00586ec0
extern "C" __declspec(naked) void asm_00586ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12c58] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00586ef7 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00586ef7 }
	__asm { cmp esi, 1 }
	__asm { jge L_00586ef6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00586b20 }
	__asm { add esp, 0x10 }
	__asm { L_00586ef6: }
	__asm { dec esi }
	__asm { L_00586ef7: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12b88[];
extern "C" void fn_00586f00();
// FUNCTION: ROBLOXSTUDIO 0x00587060
extern "C" __declspec(naked) void asm_00587060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12b88] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0058709b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00587099 }
	__asm { cmp esi, 3 }
	__asm { jge L_00587096 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00586f00 }
	__asm { add esp, 0x10 }
	__asm { L_00587096: }
	__asm { sub esi, 3 }
	__asm { L_00587099: }
	__asm { mov eax, esi }
	__asm { L_0058709b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
// FUNCTION: ROBLOXSTUDIO 0x005870b0
extern "C" __declspec(naked) void asm_005870b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_005870fa }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12c09c8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_005870e5 }
	__asm { push 0x16e }
	__asm { push 0x1036300 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_005870e5: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_005870f9 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_005870f9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x54] }
	__asm { L_005870f9: }
	__asm { pop esi }
	__asm { L_005870fa: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e121e4[];
extern "C" void fn_005870b0();
// FUNCTION: ROBLOXSTUDIO 0x005871b0
extern "C" __declspec(naked) void asm_005871b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_005871e9 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_005871e7 }
	__asm { cmp esi, 1 }
	__asm { jge L_005871e6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_005870b0 }
	__asm { add esp, 0x10 }
	__asm { L_005871e6: }
	__asm { dec esi }
	__asm { L_005871e7: }
	__asm { mov eax, esi }
	__asm { L_005871e9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_005871f0();
// FUNCTION: ROBLOXSTUDIO 0x00587300
extern "C" __declspec(naked) void asm_00587300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00587339 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00587337 }
	__asm { cmp esi, 1 }
	__asm { jge L_00587336 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_005871f0 }
	__asm { add esp, 0x10 }
	__asm { L_00587336: }
	__asm { dec esi }
	__asm { L_00587337: }
	__asm { mov eax, esi }
	__asm { L_00587339: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11f0c[];
extern "C" void fn_00587340();
// FUNCTION: ROBLOXSTUDIO 0x00587450
extern "C" __declspec(naked) void asm_00587450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11f0c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0058748b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00587489 }
	__asm { cmp esi, 2 }
	__asm { jge L_00587486 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00587340 }
	__asm { add esp, 0x10 }
	__asm { L_00587486: }
	__asm { sub esi, 2 }
	__asm { L_00587489: }
	__asm { mov eax, esi }
	__asm { L_0058748b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00587a10();
// FUNCTION: ROBLOXSTUDIO 0x00587bc0
extern "C" __declspec(naked) void asm_00587bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00587bfb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00587bf9 }
	__asm { cmp esi, 2 }
	__asm { jge L_00587bf6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00587a10 }
	__asm { add esp, 0x10 }
	__asm { L_00587bf6: }
	__asm { sub esi, 2 }
	__asm { L_00587bf9: }
	__asm { mov eax, esi }
	__asm { L_00587bfb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00587c10();
// FUNCTION: ROBLOXSTUDIO 0x00587f00
extern "C" __declspec(naked) void asm_00587f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00587f3b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00587f39 }
	__asm { cmp esi, 8 }
	__asm { jge L_00587f36 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00587c10 }
	__asm { add esp, 0x10 }
	__asm { L_00587f36: }
	__asm { sub esi, 8 }
	__asm { L_00587f39: }
	__asm { mov eax, esi }
	__asm { L_00587f3b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11f0c[];
extern "C" void fn_00587f50();
// FUNCTION: ROBLOXSTUDIO 0x00588110
extern "C" __declspec(naked) void asm_00588110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11f0c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0058814b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00588149 }
	__asm { cmp esi, 6 }
	__asm { jge L_00588146 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00587f50 }
	__asm { add esp, 0x10 }
	__asm { L_00588146: }
	__asm { sub esi, 6 }
	__asm { L_00588149: }
	__asm { mov eax, esi }
	__asm { L_0058814b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e121e4[];
extern "C" void fn_00588190();
// FUNCTION: ROBLOXSTUDIO 0x00588290
extern "C" __declspec(naked) void asm_00588290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_005882c9 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_005882c7 }
	__asm { cmp esi, 1 }
	__asm { jge L_005882c6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00588190 }
	__asm { add esp, 0x10 }
	__asm { L_005882c6: }
	__asm { dec esi }
	__asm { L_005882c7: }
	__asm { mov eax, esi }
	__asm { L_005882c9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_005882d0();
// FUNCTION: ROBLOXSTUDIO 0x00588440
extern "C" __declspec(naked) void asm_00588440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0058847b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00588479 }
	__asm { cmp esi, 4 }
	__asm { jge L_00588476 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_005882d0 }
	__asm { add esp, 0x10 }
	__asm { L_00588476: }
	__asm { sub esi, 4 }
	__asm { L_00588479: }
	__asm { mov eax, esi }
	__asm { L_0058847b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11f0c[];
extern "C" void fn_00588490();
// FUNCTION: ROBLOXSTUDIO 0x005885f0
extern "C" __declspec(naked) void asm_005885f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11f0c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0058862b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00588629 }
	__asm { cmp esi, 4 }
	__asm { jge L_00588626 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00588490 }
	__asm { add esp, 0x10 }
	__asm { L_00588626: }
	__asm { sub esi, 4 }
	__asm { L_00588629: }
	__asm { mov eax, esi }
	__asm { L_0058862b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12104[];
extern "C" void fn_00588700();
// FUNCTION: ROBLOXSTUDIO 0x00588830
extern "C" __declspec(naked) void asm_00588830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12104] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0058886b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00588869 }
	__asm { cmp esi, 3 }
	__asm { jge L_00588866 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00588700 }
	__asm { add esp, 0x10 }
	__asm { L_00588866: }
	__asm { sub esi, 3 }
	__asm { L_00588869: }
	__asm { mov eax, esi }
	__asm { L_0058886b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00588880();
// FUNCTION: ROBLOXSTUDIO 0x005889c0
extern "C" __declspec(naked) void asm_005889c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_005889f9 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_005889f7 }
	__asm { cmp esi, 1 }
	__asm { jge L_005889f6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00588880 }
	__asm { add esp, 0x10 }
	__asm { L_005889f6: }
	__asm { dec esi }
	__asm { L_005889f7: }
	__asm { mov eax, esi }
	__asm { L_005889f9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00524cb0();
extern "C" void fn_00524d90();
// FUNCTION: ROBLOXSTUDIO 0x00588b00
extern "C" __declspec(naked) void asm_00588b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00588b53 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12c0ac8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00588b35 }
	__asm { push 0xbb }
	__asm { push 0x1036600 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00588b35: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_00588b49 }
	__asm { dec eax }
	__asm { jne L_00588b52 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00524cb0 }
	__asm { L_00588b49: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00524d90 }
	__asm { L_00588b52: }
	__asm { pop esi }
	__asm { L_00588b53: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00588b00();
// FUNCTION: ROBLOXSTUDIO 0x00588c50
extern "C" __declspec(naked) void asm_00588c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00588c8b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00588c89 }
	__asm { cmp esi, 2 }
	__asm { jge L_00588c86 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00588b00 }
	__asm { add esp, 0x10 }
	__asm { L_00588c86: }
	__asm { sub esi, 2 }
	__asm { L_00588c89: }
	__asm { mov eax, esi }
	__asm { L_00588c8b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00588ca0();
// FUNCTION: ROBLOXSTUDIO 0x00588de0
extern "C" __declspec(naked) void asm_00588de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00588e19 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00588e17 }
	__asm { cmp esi, 1 }
	__asm { jge L_00588e16 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00588ca0 }
	__asm { add esp, 0x10 }
	__asm { L_00588e16: }
	__asm { dec esi }
	__asm { L_00588e17: }
	__asm { mov eax, esi }
	__asm { L_00588e19: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_00525f70();
extern "C" void fn_00526080();
// FUNCTION: ROBLOXSTUDIO 0x00588e20
extern "C" __declspec(naked) void asm_00588e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00588e73 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12c0a98 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00588e55 }
	__asm { push 0x156 }
	__asm { push 0x1036600 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00588e55: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_00588e69 }
	__asm { dec eax }
	__asm { jne L_00588e72 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00526080 }
	__asm { L_00588e69: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00525f70 }
	__asm { L_00588e72: }
	__asm { pop esi }
	__asm { L_00588e73: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00588e20();
// FUNCTION: ROBLOXSTUDIO 0x00588f70
extern "C" __declspec(naked) void asm_00588f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00588fab }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00588fa9 }
	__asm { cmp esi, 2 }
	__asm { jge L_00588fa6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00588e20 }
	__asm { add esp, 0x10 }
	__asm { L_00588fa6: }
	__asm { sub esi, 2 }
	__asm { L_00588fa9: }
	__asm { mov eax, esi }
	__asm { L_00588fab: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11f0c[];
extern "C" void fn_005891a0();
// FUNCTION: ROBLOXSTUDIO 0x005892b0
extern "C" __declspec(naked) void asm_005892b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11f0c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_005892eb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_005892e9 }
	__asm { cmp esi, 2 }
	__asm { jge L_005892e6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_005891a0 }
	__asm { add esp, 0x10 }
	__asm { L_005892e6: }
	__asm { sub esi, 2 }
	__asm { L_005892e9: }
	__asm { mov eax, esi }
	__asm { L_005892eb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" char g_00e11108[];
extern "C" void fn_00534ce0();
// FUNCTION: ROBLOXSTUDIO 0x00589300
extern "C" __declspec(naked) void asm_00589300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00589352 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, 0x12c0ae8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00589330 }
	__asm { push 0x2f }
	__asm { push 0x10366a8 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00589330: }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jne L_00589352 }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { push dword ptr [eax] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push dword ptr [edx + 4] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00534ce0 }
	__asm { L_00589352: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11ee0[];
extern "C" void fn_00589300();
// FUNCTION: ROBLOXSTUDIO 0x00589410
extern "C" __declspec(naked) void asm_00589410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11ee0] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00589449 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00589447 }
	__asm { cmp esi, 1 }
	__asm { jge L_00589446 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00589300 }
	__asm { add esp, 0x10 }
	__asm { L_00589446: }
	__asm { dec esi }
	__asm { L_00589447: }
	__asm { mov eax, esi }
	__asm { L_00589449: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e121e4[];
extern "C" void fn_00589450();
// FUNCTION: ROBLOXSTUDIO 0x00589560
extern "C" __declspec(naked) void asm_00589560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0058959b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00589599 }
	__asm { cmp esi, 2 }
	__asm { jge L_00589596 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00589450 }
	__asm { add esp, 0x10 }
	__asm { L_00589596: }
	__asm { sub esi, 2 }
	__asm { L_00589599: }
	__asm { mov eax, esi }
	__asm { L_0058959b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11f0c[];
extern "C" void fn_005895b0();
// FUNCTION: ROBLOXSTUDIO 0x00589840
extern "C" __declspec(naked) void asm_00589840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e11f0c] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0058987b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00589879 }
	__asm { cmp esi, 0xd }
	__asm { jge L_00589876 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_005895b0 }
	__asm { add esp, 0x10 }
	__asm { L_00589876: }
	__asm { sub esi, 0xd }
	__asm { L_00589879: }
	__asm { mov eax, esi }
	__asm { L_0058987b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e121e4[];
extern "C" void fn_005898c0();
// FUNCTION: ROBLOXSTUDIO 0x005899f0
extern "C" __declspec(naked) void asm_005899f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e121e4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00589a2b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00589a29 }
	__asm { cmp esi, 3 }
	__asm { jge L_00589a26 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_005898c0 }
	__asm { add esp, 0x10 }
	__asm { L_00589a26: }
	__asm { sub esi, 3 }
	__asm { L_00589a29: }
	__asm { mov eax, esi }
	__asm { L_00589a2b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00589a40();
// FUNCTION: ROBLOXSTUDIO 0x00589c30
extern "C" __declspec(naked) void asm_00589c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00589c6b }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00589c69 }
	__asm { cmp esi, 7 }
	__asm { jge L_00589c66 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00589a40 }
	__asm { add esp, 0x10 }
	__asm { L_00589c66: }
	__asm { sub esi, 7 }
	__asm { L_00589c69: }
	__asm { mov eax, esi }
	__asm { L_00589c6b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00589c80();
// FUNCTION: ROBLOXSTUDIO 0x00589e90
extern "C" __declspec(naked) void asm_00589e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00589ecb }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00589ec9 }
	__asm { cmp esi, 7 }
	__asm { jge L_00589ec6 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00589c80 }
	__asm { add esp, 0x10 }
	__asm { L_00589ec6: }
	__asm { sub esi, 7 }
	__asm { L_00589ec9: }
	__asm { mov eax, esi }
	__asm { L_00589ecb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12104[];
extern "C" void fn_00589ee0();
// FUNCTION: ROBLOXSTUDIO 0x00589fe0
extern "C" __declspec(naked) void asm_00589fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12104] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0058a019 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_0058a017 }
	__asm { cmp esi, 1 }
	__asm { jge L_0058a016 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00589ee0 }
	__asm { add esp, 0x10 }
	__asm { L_0058a016: }
	__asm { dec esi }
	__asm { L_0058a017: }
	__asm { mov eax, esi }
	__asm { L_0058a019: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012bfc78[];
// FUNCTION: ROBLOXSTUDIO 0x0058a040
extern "C" __declspec(naked) void asm_0058a040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { add eax, 3 }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { call dword ptr [g_012bfc78] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0058a071 }
	__asm { lea eax, [esi + 3] }
	__asm { lea ecx, [esi - 1] }
	__asm { add eax, edx }
	__asm { not ecx }
	__asm { and eax, ecx }
	__asm { pop esi }
	__asm { mov dword ptr [eax - 4], edx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0058a071: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0058fbf0
extern "C" __declspec(naked) void asm_0058fbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0xd8] }
	__asm { mov eax, ecx }
	__asm { shr eax, 2 }
	__asm { not al }
	__asm { test al, 1 }
	__asm { je L_0058fc2b }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax + 0xd8] }
	__asm { mov eax, edx }
	__asm { shr eax, 2 }
	__asm { not al }
	__asm { test al, 1 }
	__asm { je L_0058fc2b }
	__asm { test cl, 3 }
	__asm { je L_0058fc25 }
	__asm { test dl, 3 }
	__asm { jne L_0058fc2b }
	__asm { L_0058fc25: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0058fc2b: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012bfc70[];
extern "C" char g_01318fc0[];
// FUNCTION: ROBLOXSTUDIO 0x0058ff00
extern "C" __declspec(naked) void asm_0058ff00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0x40] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0058ff3e }
	__asm { cmp ecx, dword ptr [edx + 0x10] }
	__asm { jb L_0058ff2e }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { imul eax, dword ptr [edx] }
	__asm { add eax, dword ptr [edx + 0x10] }
	__asm { cmp ecx, eax }
	__asm { jae L_0058ff2e }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { inc dword ptr [edx + 8] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0058ff2e: }
	__asm { inc dword ptr [g_01318fc0] }
	__asm { push ecx }
	__asm { call dword ptr [g_012bfc70] }
	__asm { add esp, 4 }
	__asm { L_0058ff3e: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00595d10
extern "C" __declspec(naked) void asm_00595d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x24] }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call dword ptr [edx + 0x18] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], eax }
	__asm { test eax, eax }
	__asm { je L_00595d41 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { L_00595d41: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop esi }
	__asm { mov eax, 0x1036d18 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x005a6870
extern "C" __declspec(naked) void asm_005a6870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [ebx + 8], esi }
	__asm { jle L_005a689f }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { L_005a6882: }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov ecx, dword ptr [eax + edi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_005a6895 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_005a6895: }
	__asm { inc esi }
	__asm { add edi, 0xc }
	__asm { cmp esi, dword ptr [ebx + 8] }
	__asm { jl L_005a6882 }
	__asm { pop edi }
	__asm { L_005a689f: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005aa620
extern "C" __declspec(naked) void asm_005aa620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0xc], esi }
	__asm { jle L_005aa649 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { L_005aa632: }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [eax + esi*4] }
	__asm { test ecx, ecx }
	__asm { je L_005aa642 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_005aa642: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0xc] }
	__asm { jl L_005aa632 }
	__asm { pop ebx }
	__asm { L_005aa649: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005aa880
extern "C" __declspec(naked) void asm_005aa880()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor esi, esi }
	__asm { mov ebx, dword ptr [edi + 0xc] }
	__asm { test ebx, ebx }
	__asm { jle L_005aa8b3 }
	__asm { mov edi, edi }
	__asm { L_005aa890: }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [eax + esi*4] }
	__asm { test ecx, ecx }
	__asm { je L_005aa8ae }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0 }
	__asm { call dword ptr [eax] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [eax + esi*4] }
	__asm { call dword ptr [edx + 0x38] }
	__asm { L_005aa8ae: }
	__asm { inc esi }
	__asm { cmp esi, ebx }
	__asm { jl L_005aa890 }
	__asm { L_005aa8b3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005d5920
extern "C" __declspec(naked) void asm_005d5920()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor eax, eax }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jle L_005d594d }
	__asm { nop }
	__asm { L_005d5930: }
	__asm { inc eax }
	__asm { cmp eax, esi }
	__asm { jge L_005d593a }
	__asm { lea ecx, [edx + 0x70] }
	__asm { jmp L_005d593c }
	__asm { L_005d593a: }
	__asm { xor ecx, ecx }
	__asm { L_005d593c: }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { add edx, 0x70 }
	__asm { cmp eax, esi }
	__asm { jl L_005d5930 }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_005d594d: }
	__asm { pop edi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005d5960
extern "C" __declspec(naked) void asm_005d5960()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor eax, eax }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jle L_005d598d }
	__asm { nop }
	__asm { L_005d5970: }
	__asm { inc eax }
	__asm { cmp eax, esi }
	__asm { jge L_005d597a }
	__asm { lea ecx, [edx + 0x18] }
	__asm { jmp L_005d597c }
	__asm { L_005d597a: }
	__asm { xor ecx, ecx }
	__asm { L_005d597c: }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { add edx, 0x18 }
	__asm { cmp eax, esi }
	__asm { jl L_005d5970 }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_005d598d: }
	__asm { pop edi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005d59a0
extern "C" __declspec(naked) void asm_005d59a0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor eax, eax }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jle L_005d59cd }
	__asm { nop }
	__asm { L_005d59b0: }
	__asm { inc eax }
	__asm { cmp eax, esi }
	__asm { jge L_005d59ba }
	__asm { lea ecx, [edx + 0x3c] }
	__asm { jmp L_005d59bc }
	__asm { L_005d59ba: }
	__asm { xor ecx, ecx }
	__asm { L_005d59bc: }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { add edx, 0x3c }
	__asm { cmp eax, esi }
	__asm { jl L_005d59b0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_005d59cd: }
	__asm { pop edi }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_005d9f60();
// FUNCTION: ROBLOXSTUDIO 0x005da6f0
extern "C" __declspec(naked) void asm_005da6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov ebx, edx }
	__asm { mov edi, ecx }
	__asm { cmp edi, ebx }
	__asm { je L_005da71e }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_005da701: }
	__asm { test esi, esi }
	__asm { je L_005da70d }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_005d9f60 }
	__asm { L_005da70d: }
	__asm { add edi, 0x78 }
	__asm { add esi, 0x78 }
	__asm { cmp edi, ebx }
	__asm { jne L_005da701 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005da71e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10800[];
// FUNCTION: ROBLOXSTUDIO 0x005da730
extern "C" __declspec(naked) void asm_005da730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea esi, [eax + eax*2] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + esi*4], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + esi*4 + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + esi*4 + 8], eax }
	__asm { inc dword ptr [edi] }
	__asm { cmp dword ptr [edi], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jbe L_005da76e }
	__asm { push 0x4a }
	__asm { push 0x1037f78 }
	__asm { push 0x1037f60 }
	__asm { call dword ptr [g_00e10800] }
	__asm { add esp, 0xc }
	__asm { L_005da76e: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e136b8[];
extern "C" char g_00e136bc[];
extern "C" void fn_005dcc70();
extern "C" void fn_00c34a10();
// FUNCTION: ROBLOXSTUDIO 0x005dcc20
extern "C" __declspec(naked) void asm_005dcc20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e136b8] }
	__asm { sub eax, 9 }
	__asm { je L_005dcc49 }
	__asm { dec eax }
	__asm { jne L_005dcc60 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_005dcc70 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005dcc49: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e136bc] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00c34a10 }
	__asm { L_005dcc60: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005df3e0
extern "C" __declspec(naked) void asm_005df3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x24], eax }
	__asm { jne L_005df3f2 }
	__asm { mov dword ptr [ecx + 0x24], 0 }
	__asm { L_005df3f2: }
	__asm { cmp dword ptr [ecx + 0x34], eax }
	__asm { jne L_005df3fe }
	__asm { mov dword ptr [ecx + 0x34], 0 }
	__asm { L_005df3fe: }
	__asm { cmp dword ptr [ecx + 0x44], eax }
	__asm { jne L_005df40a }
	__asm { mov dword ptr [ecx + 0x44], 0 }
	__asm { L_005df40a: }
	__asm { cmp dword ptr [ecx + 0x54], eax }
	__asm { jne L_005df416 }
	__asm { mov dword ptr [ecx + 0x54], 0 }
	__asm { L_005df416: }
	__asm { cmp dword ptr [ecx + 0x64], eax }
	__asm { jne L_005df422 }
	__asm { mov dword ptr [ecx + 0x64], 0 }
	__asm { L_005df422: }
	__asm { cmp dword ptr [ecx + 0x74], eax }
	__asm { jne L_005df42e }
	__asm { mov dword ptr [ecx + 0x74], 0 }
	__asm { L_005df42e: }
	__asm { cmp dword ptr [ecx + 0x84], eax }
	__asm { jne L_005df440 }
	__asm { mov dword ptr [ecx + 0x84], 0 }
	__asm { L_005df440: }
	__asm { cmp dword ptr [ecx + 0x94], eax }
	__asm { jne L_005df452 }
	__asm { mov dword ptr [ecx + 0x94], 0 }
	__asm { L_005df452: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005e0020
extern "C" __declspec(naked) void asm_005e0020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x400 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0xc0] }
	__asm { test edi, edi }
	__asm { je L_005e0068 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x200 }
	__asm { lea esi, [ebp - 0x400] }
	__asm { L_005e0043: }
	__asm { movsx ax, byte ptr [edx] }
	__asm { mov word ptr [esi], ax }
	__asm { lea esi, [esi + 2] }
	__asm { lea edx, [edx + 1] }
	__asm { test ax, ax }
	__asm { je L_005e005c }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { test eax, eax }
	__asm { jne L_005e0043 }
	__asm { L_005e005c: }
	__asm { lea eax, [ebp - 0x400] }
	__asm { push eax }
	__asm { push 0 }
	__asm { call edi }
	__asm { pop esi }
	__asm { L_005e0068: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x005e0080
extern "C" __declspec(naked) void asm_005e0080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x400 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0xc8] }
	__asm { test edi, edi }
	__asm { je L_005e00c8 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x200 }
	__asm { lea esi, [ebp - 0x400] }
	__asm { L_005e00a3: }
	__asm { movsx ax, byte ptr [edx] }
	__asm { mov word ptr [esi], ax }
	__asm { lea esi, [esi + 2] }
	__asm { lea edx, [edx + 1] }
	__asm { test ax, ax }
	__asm { je L_005e00bc }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { test eax, eax }
	__asm { jne L_005e00a3 }
	__asm { L_005e00bc: }
	__asm { lea eax, [ebp - 0x400] }
	__asm { push eax }
	__asm { push 0 }
	__asm { call edi }
	__asm { pop esi }
	__asm { L_005e00c8: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012d97c4[];
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x005e0830
extern "C" __declspec(naked) void asm_005e0830()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edi, [esi + 0x2c] }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [edx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x1d8] }
	__asm { test eax, eax }
	__asm { jns L_005e0875 }
	__asm { mov cl, byte ptr [g_012d97c4] }
	__asm { test cl, cl }
	__asm { je L_005e086f }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x28] }
	__asm { movzx eax, cl }
	__asm { push 0xe19334 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_005e086f: }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_005e0875: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x005e2410
extern "C" __declspec(naked) void asm_005e2410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, 1 }
	__asm { mov esi, 2 }
	__asm { L_005e2423: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { push esi }
	__asm { push 1 }
	__asm { push 0x15 }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { test eax, eax }
	__asm { cmovns edi, esi }
	__asm { inc esi }
	__asm { cmp esi, 0x10 }
	__asm { jbe L_005e2423 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005e3d90
extern "C" __declspec(naked) void asm_005e3d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_005e3dda }
	__asm { cmp dword ptr [esi + 0x38], 0 }
	__asm { je L_005e3dda }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e3dc9 }
	__asm { push 0x74 }
	__asm { push 0xe19d10 }
	__asm { push 0xe19e0c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e3dda }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005e3dc9: }
	__asm { movzx eax, al }
	__asm { push 0xe19e18 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e3dda: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}
