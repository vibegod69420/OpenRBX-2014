// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00c048d0();
// FUNCTION: ROBLOXSTUDIO 0x00baa1e0
extern "C" __declspec(naked) void asm_00baa1e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00c048d0 }
	__asm { mov dword ptr [esi], 0xeddf9c }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00c135b0();
// FUNCTION: ROBLOXSTUDIO 0x00bb5b60
extern "C" __declspec(naked) void asm_00bb5b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c135b0 }
	__asm { mov dword ptr [esi], 0xedf7a0 }
	__asm { mov dword ptr [esi + 4], 0xedf7dc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00bc6fc0
extern "C" __declspec(naked) void asm_00bc6fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { movzx eax, byte ptr [ecx + 0x14] }
	__asm { and al, 3 }
	__asm { mov dword ptr [ecx + 0x1c], edx }
	__asm { mov byte ptr [edx + 5], al }
	__asm { mov al, byte ptr [ebp + 0x10] }
	__asm { mov byte ptr [edx + 4], al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc8040();
// FUNCTION: ROBLOXSTUDIO 0x00bc8790
extern "C" __declspec(naked) void asm_00bc8790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc8040 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bca5b0
extern "C" __declspec(naked) void asm_00bca5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048b5e0();
extern "C" void fn_00bd2720();
// FUNCTION: ROBLOXSTUDIO 0x00bd1a20
extern "C" __declspec(naked) void asm_00bd1a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00bd2720 }
	__asm { add esp, 4 }
	__asm { push 0x148 }
	__asm { push 0x130f760 }
	__asm { call fn_0048b5e0 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048b5e0();
extern "C" void fn_00bd2790();
// FUNCTION: ROBLOXSTUDIO 0x00bd1a50
extern "C" __declspec(naked) void asm_00bd1a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00bd2790 }
	__asm { add esp, 4 }
	__asm { push 0x170 }
	__asm { push 0x130f754 }
	__asm { call fn_0048b5e0 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048b5e0();
extern "C" void fn_00bd2800();
// FUNCTION: ROBLOXSTUDIO 0x00bd1a80
extern "C" __declspec(naked) void asm_00bd1a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00bd2800 }
	__asm { add esp, 4 }
	__asm { push 0x130 }
	__asm { push 0x130f748 }
	__asm { call fn_0048b5e0 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bd2900
extern "C" __declspec(naked) void asm_00bd2900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5db33 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1b8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

// FUNCTION: ROBLOXSTUDIO 0x00bd4b70
extern "C" __declspec(naked) void asm_00bd4b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5db33 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1b8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" void fn_00bdec10();
// FUNCTION: ROBLOXSTUDIO 0x00bea270
extern "C" __declspec(naked) void asm_00bea270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 8 }
	__asm { call fn_00bdec10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bdecd0();
// FUNCTION: ROBLOXSTUDIO 0x00bea2a0
extern "C" __declspec(naked) void asm_00bea2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 8 }
	__asm { call fn_00bdecd0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f72f0();
// FUNCTION: ROBLOXSTUDIO 0x00bf8390
extern "C" __declspec(naked) void asm_00bf8390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0xee7df8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008f72f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10094[];
// FUNCTION: ROBLOXSTUDIO 0x00c02d30
extern "C" __declspec(naked) void asm_00c02d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x40], 0x40 }
	__asm { call dword ptr [g_00e10094] }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov edx, dword ptr [ebp - 0x2c] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10094[];
// FUNCTION: ROBLOXSTUDIO 0x00c02d60
extern "C" __declspec(naked) void asm_00c02d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x40], 0x40 }
	__asm { call dword ptr [g_00e10094] }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov edx, dword ptr [ebp - 0x34] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10154[];
extern "C" void fn_00d0df6a();
// FUNCTION: ROBLOXSTUDIO 0x00c02d90
extern "C" __declspec(naked) void asm_00c02d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x28 }
	__asm { push 0x28 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10154] }
	__asm { push eax }
	__asm { call fn_00d0df6a }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { xor edx, edx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b8c360();
extern "C" void fn_00ba3dc0();
// FUNCTION: ROBLOXSTUDIO 0x00c03cc0
extern "C" __declspec(naked) void asm_00c03cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c360 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { call fn_00ba3dc0 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c620();
extern "C" void fn_00ba3de0();
// FUNCTION: ROBLOXSTUDIO 0x00c03ce0
extern "C" __declspec(naked) void asm_00c03ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { call fn_00ba3de0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007c37d0();
// FUNCTION: ROBLOXSTUDIO 0x00c0c6b0
extern "C" __declspec(naked) void asm_00c0c6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_007c37d0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099d9a0();
extern "C" void fn_00c03a40();
// FUNCTION: ROBLOXSTUDIO 0x00c11110
extern "C" __declspec(naked) void asm_00c11110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_0099d9a0 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c03a40 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c360();
extern "C" void fn_00c1d590();
// FUNCTION: ROBLOXSTUDIO 0x00c11150
extern "C" __declspec(naked) void asm_00c11150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c360 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { call fn_00c1d590 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c620();
extern "C" void fn_00c1d5b0();
// FUNCTION: ROBLOXSTUDIO 0x00c11170
extern "C" __declspec(naked) void asm_00c11170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { call fn_00c1d5b0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c620();
// FUNCTION: ROBLOXSTUDIO 0x00c13220
extern "C" __declspec(naked) void asm_00c13220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c135b0();
// FUNCTION: ROBLOXSTUDIO 0x00c14920
extern "C" __declspec(naked) void asm_00c14920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c135b0 }
	__asm { mov dword ptr [esi], 0xeec670 }
	__asm { mov dword ptr [esi + 4], 0xeec6ac }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c135b0();
// FUNCTION: ROBLOXSTUDIO 0x00c14950
extern "C" __declspec(naked) void asm_00c14950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c135b0 }
	__asm { mov dword ptr [esi], 0xeec6b8 }
	__asm { mov dword ptr [esi + 4], 0xeec6f4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00bb5b90();
// FUNCTION: ROBLOXSTUDIO 0x00c14ea0
extern "C" __declspec(naked) void asm_00c14ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bb5b90 }
	__asm { mov dword ptr [esi], 0xeec89c }
	__asm { mov dword ptr [esi + 4], 0xeec8d8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c1deb0();
// FUNCTION: ROBLOXSTUDIO 0x00c15360
extern "C" __declspec(naked) void asm_00c15360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c1deb0 }
	__asm { mov dword ptr [esi], 0xeec9a4 }
	__asm { mov dword ptr [esi + 4], 0xeec9e0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c18030();
// FUNCTION: ROBLOXSTUDIO 0x00c18100
extern "C" __declspec(naked) void asm_00c18100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { shl eax, 8 }
	__asm { or eax, dword ptr [ebp + 0x10] }
	__asm { shl eax, 6 }
	__asm { or eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00c18030 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c17660();
// FUNCTION: ROBLOXSTUDIO 0x00c187f0
extern "C" __declspec(naked) void asm_00c187f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { fld qword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { fstp qword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], 3 }
	__asm { call fn_00c17660 }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c18130();
// FUNCTION: ROBLOXSTUDIO 0x00c18860
extern "C" __declspec(naked) void asm_00c18860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { lea eax, [ecx + 0x20] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00c18130 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c17660();
// FUNCTION: ROBLOXSTUDIO 0x00c18f70
extern "C" __declspec(naked) void asm_00c18f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], 4 }
	__asm { call fn_00c17660 }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b8c360();
extern "C" void fn_00ba2e60();
// FUNCTION: ROBLOXSTUDIO 0x00c1d590
extern "C" __declspec(naked) void asm_00c1d590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c360 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { call fn_00ba2e60 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c620();
extern "C" void fn_00ba2ed0();
// FUNCTION: ROBLOXSTUDIO 0x00c1d5b0
extern "C" __declspec(naked) void asm_00c1d5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { call fn_00ba2ed0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c203a0();
// FUNCTION: ROBLOXSTUDIO 0x00c31b80
extern "C" __declspec(naked) void asm_00c31b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 8 }
	__asm { call fn_00c203a0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10770[];
extern "C" void fn_00c376f0();
// FUNCTION: ROBLOXSTUDIO 0x00c37180
extern "C" __declspec(naked) void asm_00c37180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c376f0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push 1 }
	__asm { call dword ptr [g_00e10770] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c3af90();
// FUNCTION: ROBLOXSTUDIO 0x00c4b2b0
extern "C" __declspec(naked) void asm_00c4b2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 5], 0 }
	__asm { push dword ptr [ebp - 5] }
	__asm { add ecx, 8 }
	__asm { call fn_00c3af90 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c3ae40();
// FUNCTION: ROBLOXSTUDIO 0x00c4b2e0
extern "C" __declspec(naked) void asm_00c4b2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { call fn_00c3ae40 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300d77[];
// FUNCTION: ROBLOXSTUDIO 0x00c577e0
extern "C" __declspec(naked) void asm_00c577e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dl, byte ptr [g_01300d77] }
	__asm { movzx ecx, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ebp + 8], dl }
	__asm { push ebx }
	__asm { movzx ebx, dl }
	__asm { cmovne ebx, ecx }
	__asm { mov byte ptr [g_01300d77], bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01300d76[];
// FUNCTION: ROBLOXSTUDIO 0x00c57810
extern "C" __declspec(naked) void asm_00c57810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dl, byte ptr [g_01300d76] }
	__asm { movzx ecx, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [ebp + 8], dl }
	__asm { push ebx }
	__asm { movzx ebx, dl }
	__asm { cmovne ebx, ecx }
	__asm { mov byte ptr [g_01300d76], bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099c7f0();
extern "C" void fn_00c5b830();
// FUNCTION: ROBLOXSTUDIO 0x00c5abc0
extern "C" __declspec(naked) void asm_00c5abc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [eax + 0xe0] }
	__asm { call fn_0099c7f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c5b830 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c63d90
extern "C" __declspec(naked) void asm_00c63d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edx + 0x24] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { push dword ptr [edx + 0x20] }
	__asm { lea eax, [edx + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c46a0();
// FUNCTION: ROBLOXSTUDIO 0x00c67a80
extern "C" __declspec(naked) void asm_00c67a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ecx + 0x210] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012a5610[];
extern "C" char g_012a5614[];
extern "C" char g_012a5618[];
// FUNCTION: ROBLOXSTUDIO 0x00c687d0
extern "C" __declspec(naked) void asm_00c687d0()
{
	__asm { mov eax, 0xffff }
	__asm { mov word ptr [ecx + 8], ax }
	__asm { mov eax, dword ptr [g_012a5610] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [g_012a5614] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov ax, word ptr [g_012a5618] }
	__asm { mov word ptr [ecx + 8], ax }
	__asm { mov eax, ecx }
	__asm { ret }
}

extern "C" char g_01038160[];
extern "C" void fn_006c46a0();
// FUNCTION: ROBLOXSTUDIO 0x00c6b180
extern "C" __declspec(naked) void asm_00c6b180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [g_01038160] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01038160[];
extern "C" void fn_006c46c0();
// FUNCTION: ROBLOXSTUDIO 0x00c6b790
extern "C" __declspec(naked) void asm_00c6b790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [g_01038160] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008afe00();
extern "C" void fn_00c6e3a0();
// FUNCTION: ROBLOXSTUDIO 0x00c6f3b0
extern "C" __declspec(naked) void asm_00c6f3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008afe00 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c6e3a0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b0070();
extern "C" void fn_00c6e3a0();
// FUNCTION: ROBLOXSTUDIO 0x00c6f460
extern "C" __declspec(naked) void asm_00c6f460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008b0070 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c6e3a0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b01f0();
extern "C" void fn_00c70160();
// FUNCTION: ROBLOXSTUDIO 0x00c6f510
extern "C" __declspec(naked) void asm_00c6f510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008b01f0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c70160 }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008e9ec0();
extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00c6fe20
extern "C" __declspec(naked) void asm_00c6fe20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_008e9ec0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push 6 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004956d0();
extern "C" void fn_00c68a90();
// FUNCTION: ROBLOXSTUDIO 0x00c72ac0
extern "C" __declspec(naked) void asm_00c72ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00c68a90 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movzx edi, ax }
	__asm { call fn_004956d0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov word ptr [ecx + 4], di }
	__asm { mov eax, ecx }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c74ae0();
// FUNCTION: ROBLOXSTUDIO 0x00c750f0
extern "C" __declspec(naked) void asm_00c750f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c74ae0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044d480();
// FUNCTION: ROBLOXSTUDIO 0x00c75140
extern "C" __declspec(naked) void asm_00c75140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { call fn_0044d480 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008aff00();
extern "C" void fn_00c6fe50();
// FUNCTION: ROBLOXSTUDIO 0x00c79320
extern "C" __declspec(naked) void asm_00c79320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_008aff00 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6fe50 }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b0000();
extern "C" void fn_00c6fea0();
// FUNCTION: ROBLOXSTUDIO 0x00c79350
extern "C" __declspec(naked) void asm_00c79350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x30 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_008b0000 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6fea0 }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b0270();
extern "C" void fn_00c70200();
// FUNCTION: ROBLOXSTUDIO 0x00c79380
extern "C" __declspec(naked) void asm_00c79380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008b0270 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c70200 }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b02f0();
extern "C" void fn_00c70230();
// FUNCTION: ROBLOXSTUDIO 0x00c793b0
extern "C" __declspec(naked) void asm_00c793b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008b02f0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c70230 }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b0370();
extern "C" void fn_00c70260();
// FUNCTION: ROBLOXSTUDIO 0x00c793d0
extern "C" __declspec(naked) void asm_00c793d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_008b0370 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c70260 }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b03f0();
extern "C" void fn_00c702a0();
// FUNCTION: ROBLOXSTUDIO 0x00c79400
extern "C" __declspec(naked) void asm_00c79400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 6] }
	__asm { push eax }
	__asm { call fn_008b03f0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c702a0 }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004107f0();
extern "C" void fn_00c703b0();
// FUNCTION: ROBLOXSTUDIO 0x00c79430
extern "C" __declspec(naked) void asm_00c79430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_004107f0 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c703b0 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00478ac0();
extern "C" void fn_00c70440();
// FUNCTION: ROBLOXSTUDIO 0x00c79460
extern "C" __declspec(naked) void asm_00c79460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_00478ac0 }
	__asm { fld qword ptr [eax] }
	__asm { push ecx }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c70440 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d0950();
extern "C" void fn_00c70010();
// FUNCTION: ROBLOXSTUDIO 0x00c794f0
extern "C" __declspec(naked) void asm_00c794f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_007d0950 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c70010 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0044dd60();
extern "C" void fn_00c6fe20();
// FUNCTION: ROBLOXSTUDIO 0x00c79580
extern "C" __declspec(naked) void asm_00c79580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_0044dd60 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6fe20 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007899f0();
extern "C" void fn_00c6fea0();
// FUNCTION: ROBLOXSTUDIO 0x00c79660
extern "C" __declspec(naked) void asm_00c79660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x30 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_007899f0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6fea0 }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00478b50();
extern "C" void fn_00c70010();
// FUNCTION: ROBLOXSTUDIO 0x00c79690
extern "C" __declspec(naked) void asm_00c79690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_00478b50 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c70010 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0044d2d0();
extern "C" void fn_00c70230();
// FUNCTION: ROBLOXSTUDIO 0x00c797c0
extern "C" __declspec(naked) void asm_00c797c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_0044d2d0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c70230 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e3ad60[];
extern "C" void fn_006c46a0();
// FUNCTION: ROBLOXSTUDIO 0x00c84da0
extern "C" __declspec(naked) void asm_00c84da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [g_00e3ad60] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}
