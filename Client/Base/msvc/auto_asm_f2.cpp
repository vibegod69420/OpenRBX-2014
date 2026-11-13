// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00783650();
// FUNCTION: ROBLOXSTUDIO 0x0077ebb0
extern "C" __declspec(naked) void asm_0077ebb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00783650 }
	__asm { mov dword ptr [esi + 0x40], 0xe18224 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { mov dword ptr [esi + 0x50], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe4f85c }
	__asm { mov dword ptr [esi + 0x40], 0xe4f868 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0077ccd0();
extern "C" void fn_0077d110();
extern "C" void fn_00784200();
// FUNCTION: ROBLOXSTUDIO 0x0077f2d0
extern "C" __declspec(naked) void asm_0077f2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bc31 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_0077ccd0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0077d110 }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00784200 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0077e8c0();
extern "C" void fn_0077e9b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00781340
extern "C" __declspec(naked) void asm_00781340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bd3b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x84 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x90] }
	__asm { push eax }
	__asm { call fn_0077e9b0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0077e8c0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push 0x1106a34 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0077e970();
extern "C" void fn_0077e9d0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00781390
extern "C" __declspec(naked) void asm_00781390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bd1b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xb4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xc0] }
	__asm { push eax }
	__asm { call fn_0077e9d0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0077e970 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push 0x1106938 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0077e990();
extern "C" void fn_0077ea60();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007813e0
extern "C" __declspec(naked) void asm_007813e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bd98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_0077ea60 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0077e990 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push 0x1106b0c }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0077e8c0();
extern "C" void fn_0077eb00();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00781430
extern "C" __declspec(naked) void asm_00781430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bd3b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x84 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x90] }
	__asm { push eax }
	__asm { call fn_0077eb00 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0077e8c0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push 0x1106a34 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0077eb00();
extern "C" void fn_00781340();
// FUNCTION: ROBLOXSTUDIO 0x00781480
extern "C" __declspec(naked) void asm_00781480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bd58 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_0077eb00 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 0x30], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0x34], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax + 0x38], ecx }
	__asm { call fn_00781340 }
}

extern "C" void fn_0077ebb0();
extern "C" void fn_00781390();
// FUNCTION: ROBLOXSTUDIO 0x007814d0
extern "C" __declspec(naked) void asm_007814d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bd78 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { call fn_0077ebb0 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 0x48], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0x4c], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax + 0x50], ecx }
	__asm { call fn_00781390 }
}

extern "C" void fn_0077ec00();
extern "C" void fn_007813e0();
// FUNCTION: ROBLOXSTUDIO 0x00781520
extern "C" __declspec(naked) void asm_00781520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bd98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_0077ec00 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0x1c], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax + 0x20], ecx }
	__asm { call fn_007813e0 }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102d8[];
extern "C" char g_00e10318[];
extern "C" void fn_00424610();
extern "C" void fn_00426140();
// FUNCTION: ROBLOXSTUDIO 0x00786f42
extern "C" __declspec(naked) void asm_00786f42()
{
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
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007830f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00787b40
extern "C" __declspec(naked) void asm_00787b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39109 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { add ecx, -0x44 }
	__asm { mov dword ptr [ebp - 0x1c], 0xe4f8fc }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_007830f0 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x58], 0xe4f8dc }
	__asm { mov dword ptr [ebp - 0x30], 0xe4f8e8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1106a34 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe4f8f0 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00799690();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00796510
extern "C" __declspec(naked) void asm_00796510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d8e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x40 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_00799690 }
}

extern "C" void fn_0079d900();
// FUNCTION: ROBLOXSTUDIO 0x0079ea20
extern "C" __declspec(naked) void asm_0079ea20()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0079d900 }
	__asm { mov dword ptr [esi], 0xe527c4 }
	__asm { mov dword ptr [esi + 4], 0xe5283c }
	__asm { mov dword ptr [esi + 0x18], 0xe52844 }
	__asm { mov dword ptr [esi + 0x1c], 0xe52850 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x80], 0xf }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov byte ptr [esi + 0x6c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0043fa00();
extern "C" void fn_006bc950();
// FUNCTION: ROBLOXSTUDIO 0x0079edb0
extern "C" __declspec(naked) void asm_0079edb0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0043fa00 }
	__asm { push 0x131b1b0 }
	__asm { call fn_006bc950 }
	__asm { mov dword ptr [esi + 4], 0xe52388 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x44], 0xf }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007af370();
extern "C" void fn_007aff70();
extern "C" void fn_007b39c0();
// FUNCTION: ROBLOXSTUDIO 0x007b1ac0
extern "C" __declspec(naked) void asm_007b1ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_007af370 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_007b39c0 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_007aff70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007ad400();
// FUNCTION: ROBLOXSTUDIO 0x007b1fd0
extern "C" __declspec(naked) void asm_007b1fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov edx, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [edx + 0x28] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [edx + 0x1c] }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push edx }
	__asm { push dword ptr [eax + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 0x7b2020 }
	__asm { push ecx }
	__asm { push dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { call fn_007ad400 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0041fe80();
extern "C" void fn_00420e50();
// FUNCTION: ROBLOXSTUDIO 0x007b2f80
extern "C" __declspec(naked) void asm_007b2f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { call fn_00420e50 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { push ecx }
	__asm { push eax }
	__asm { add eax, -8 }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x20 }
	__asm { add dword ptr [esi + 4], -8 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410660();
// FUNCTION: ROBLOXSTUDIO 0x007b3c70
extern "C" __declspec(naked) void asm_007b3c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fc38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0xe54e0c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 8 }
	__asm { add ecx, 0x58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410660 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x007b99d0
extern "C" __declspec(naked) void asm_007b99d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebx + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebx + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { add esi, 0x30 }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0x30] }
	__asm { mov dword ptr [ebx + 0x2c], eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebx + 0x54], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebx + 0x58], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0x5c], eax }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00654720();
extern "C" void fn_007bc3b0();
extern "C" void fn_00890a30();
// FUNCTION: ROBLOXSTUDIO 0x007bce40
extern "C" __declspec(naked) void asm_007bce40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20258 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_007bc3b0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00890a30 }
	__asm { test al, al }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { setne bl }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00654720 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00405b90();
extern "C" void fn_008e6570();
// FUNCTION: ROBLOXSTUDIO 0x007d7110
extern "C" __declspec(naked) void asm_007d7110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd219c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00405b90 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e6570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f3450[];
extern "C" void fn_007db920();
extern "C" void fn_00927c20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00814a1b
extern "C" __declspec(naked) void asm_00814a1b()
{
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f3450], eax }
	__asm { mov ecx, 0x12f33c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00927c20 }
	__asm { push 0xde8050 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x12f33c8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007db920 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
// FUNCTION: ROBLOXSTUDIO 0x00826ed0
extern "C" __declspec(naked) void asm_00826ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12008 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_00826b00 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0083af30
extern "C" __declspec(naked) void asm_0083af30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe5d9b4 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov dword ptr [edi + 0x14], 0xe18224 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe61360 }
	__asm { mov dword ptr [edi + 0x14], 0xe6136c }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1051c[];
// FUNCTION: ROBLOXSTUDIO 0x0083afa0
extern "C" __declspec(naked) void asm_0083afa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1051c] }
	__asm { mov dword ptr [edi], 0xe5d3b8 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov dword ptr [edi + 0x14], 0xe18224 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe61554 }
	__asm { mov dword ptr [edi + 0x14], 0xe61560 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0083b010
extern "C" __declspec(naked) void asm_0083b010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe5d9f8 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov dword ptr [edi + 0x14], 0xe18224 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe614e4 }
	__asm { mov dword ptr [edi + 0x14], 0xe614f0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0083b080
extern "C" __declspec(naked) void asm_0083b080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe5da54 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov dword ptr [edi + 0x14], 0xe18224 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe618a4 }
	__asm { mov dword ptr [edi + 0x14], 0xe618b0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0083aeb0();
extern "C" void fn_0083af30();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00841f70
extern "C" __declspec(naked) void asm_00841f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27078 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_0083af30 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0083aeb0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push 0x1119ad0 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0083aed0();
extern "C" void fn_0083afa0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00841fd0
extern "C" __declspec(naked) void asm_00841fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27098 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_0083afa0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0083aed0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push 0x1119bf4 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0083aef0();
extern "C" void fn_0083b010();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00842020
extern "C" __declspec(naked) void asm_00842020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd270b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_0083b010 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0083aef0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push 0x1119b70 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0083af10();
extern "C" void fn_0083b080();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00842070
extern "C" __declspec(naked) void asm_00842070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd270d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_0083b080 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0083af10 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push 0x1119c78 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x008456e0
extern "C" __declspec(naked) void asm_008456e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0xffffffff }
	__asm { mov dword ptr [ecx + 0x18], 0xf }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov byte ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 0x30], 0xf }
	__asm { mov dword ptr [ecx + 0x2c], 0 }
	__asm { mov byte ptr [ecx + 0x1c], 0 }
	__asm { mov byte ptr [ecx + 0x58], 0 }
	__asm { mov byte ptr [ecx + 0x48], al }
	__asm { mov dword ptr [ecx + 0x38], 0 }
	__asm { mov dword ptr [ecx + 0x3c], 0 }
	__asm { mov dword ptr [ecx + 0x40], 6 }
	__asm { mov dword ptr [ecx + 0x44], 0 }
	__asm { mov dword ptr [ecx + 0x4c], 0x201 }
	__asm { mov dword ptr [ecx + 0x54], 0 }
	__asm { mov dword ptr [ecx + 0x50], 0 }
	__asm { mov dword ptr [ecx + 0x60], 0xffffffff }
	__asm { mov dword ptr [ecx + 0x64], 0x7fffffff }
	__asm { mov dword ptr [ecx + 0x68], 0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10318[];
extern "C" void fn_0084edb0();
// FUNCTION: ROBLOXSTUDIO 0x00847a40
extern "C" __declspec(naked) void asm_00847a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27f69 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe60b44 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0084edb0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10318] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00891b30();
// FUNCTION: ROBLOXSTUDIO 0x0084bfa0
extern "C" __declspec(naked) void asm_0084bfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { add ecx, 0xffffff60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00891b30 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add eax, 0x1c }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00870ec0
extern "C" __declspec(naked) void asm_00870ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { lea edx, [ebp - 4] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { xor eax, eax }
	__asm { cmp ecx, dword ptr [ebp - 4] }
	__asm { pop esi }
	__asm { sete al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00872a60();
extern "C" void fn_008add10();
// FUNCTION: ROBLOXSTUDIO 0x00872c50
extern "C" __declspec(naked) void asm_00872c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00872a60 }
	__asm { fld dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esi + 0x280] }
	__asm { mov ecx, esi }
	__asm { fld dword ptr [eax + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esi + 0x284] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0x288] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [esi + 0x28c] }
	__asm { call fn_008add10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a9cd50();
// FUNCTION: ROBLOXSTUDIO 0x00875570
extern "C" __declspec(naked) void asm_00875570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x124] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x144] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x164] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x184] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x1a4] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x1d4] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x1f4] }
	__asm { call fn_00a9cd50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00887bb0();
extern "C" void fn_00888e30();
// FUNCTION: ROBLOXSTUDIO 0x00888de0
extern "C" __declspec(naked) void asm_00888de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x128] }
	__asm { lea ecx, [edi + 0x128] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [eax + 0xcc] }
	__asm { push 2 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 0xd0] }
	__asm { mov eax, dword ptr [eax + 0xd4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00888e30 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00887bb0 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x008908f0
extern "C" __declspec(naked) void asm_008908f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34941 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" void fn_00b49710();
// FUNCTION: ROBLOXSTUDIO 0x00891220
extern "C" __declspec(naked) void asm_00891220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea edx, [ebp - 8] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_00b49710 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008a17c0();
// FUNCTION: ROBLOXSTUDIO 0x008a1770
extern "C" __declspec(naked) void asm_008a1770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ax, word ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { mov eax, dword ptr [ebp + 0xe] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 6], eax }
	__asm { mov ax, word ptr [ebp + 0x12] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov word ptr [ebp - 2], ax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, esi }
	__asm { call fn_008a17c0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_0103808c[];
extern "C" void fn_00cf6840();
extern "C" void fn_00cf68ec();
// FUNCTION: ROBLOXSTUDIO 0x008a4950
extern "C" __declspec(naked) void asm_008a4950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { fmul dword ptr [g_0103808c] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { call fn_00cf6840 }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { fmul dword ptr [g_0103808c] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov word ptr [esi], ax }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { call fn_00cf6840 }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { fmul dword ptr [g_0103808c] }
	__asm { mov word ptr [esi + 2], ax }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { add esp, 8 }
	__asm { call fn_00cf6840 }
	__asm { mov word ptr [esi + 4], ax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_0103808c[];
extern "C" void fn_00cf6840();
extern "C" void fn_00cf68ec();
// FUNCTION: ROBLOXSTUDIO 0x008a4fc0
extern "C" __declspec(naked) void asm_008a4fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { fld dword ptr [edi] }
	__asm { fmul dword ptr [g_0103808c] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { call fn_00cf6840 }
	__asm { fld dword ptr [edi + 4] }
	__asm { fmul dword ptr [g_0103808c] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov word ptr [esi], ax }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { call fn_00cf6840 }
	__asm { fld dword ptr [edi + 8] }
	__asm { fmul dword ptr [g_0103808c] }
	__asm { mov word ptr [esi + 2], ax }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { add esp, 8 }
	__asm { call fn_00cf6840 }
	__asm { mov word ptr [esi + 4], ax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008a8750
extern "C" __declspec(naked) void asm_008a8750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0xc], 0xc7fa0000 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [ebp - 8], 0xc7fa0000 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], 0xc7fa0000 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov dword ptr [ebp - 0x18], 0x47fa0200 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov dword ptr [ebp - 0x14], 0x47fa0200 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x10], 0x47fa0200 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [edx + 0x14], ecx }
	__asm { mov eax, edx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008ad3f0();
// FUNCTION: ROBLOXSTUDIO 0x008ad500
extern "C" __declspec(naked) void asm_008ad500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_008ad3f0 }
	__asm { mov dword ptr [esi + 0x64], 0xe6ca58 }
	__asm { mov dword ptr [esi + 0x6c], 0xffffffff }
	__asm { mov dword ptr [esi + 0x70], 0xffffffff }
	__asm { mov dword ptr [esi + 0x74], 0xffffffff }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi], 0xe6cb04 }
	__asm { mov dword ptr [esi + 4], 0xe6cb8c }
	__asm { mov dword ptr [esi + 0x18], 0xe6cb94 }
	__asm { mov dword ptr [esi + 0x1c], 0xe6cba0 }
	__asm { mov dword ptr [esi + 0x64], 0xe6cbb0 }
	__asm { mov dword ptr [esi + 0x68], 0xe6cbb8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fcdc8[];
extern "C" void fn_0049a1e0();
extern "C" void fn_008c1880();
// FUNCTION: ROBLOXSTUDIO 0x008c1a00
extern "C" __declspec(naked) void asm_008c1a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46528 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x12fcdc8 }
	__asm { mov esi, ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0x12fcdc8 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c1880 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [g_012fcdc8], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008c4410
extern "C" __declspec(naked) void asm_008c4410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34941 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" void fn_007c92a0();
extern "C" void fn_008c9160();
// FUNCTION: ROBLOXSTUDIO 0x008d3840
extern "C" __declspec(naked) void asm_008d3840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x108] }
	__asm { lea ecx, [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 8], 0x826280 }
	__asm { call fn_008c9160 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0xc }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, esi }
	__asm { call fn_007c92a0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008cc7c0();
extern "C" void fn_00b860b0();
// FUNCTION: ROBLOXSTUDIO 0x008d42e0
extern "C" __declspec(naked) void asm_008d42e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008cc7c0 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00b860b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc977[];
extern "C" void fn_006b8a9c();
extern "C" void fn_008d8420();
extern "C" void fn_00a37ab0();
// FUNCTION: ROBLOXSTUDIO 0x008d9da0
extern "C" __declspec(naked) void asm_008d9da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push 0xe6fe04 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a37ab0 }
	__asm { add esp, 0xc }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { mov ecx, 0x12fd07c }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push dword ptr [esi + 8] }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_008d8420 }
	__asm { push 0 }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_012fc977] }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_004115f0();
// FUNCTION: ROBLOXSTUDIO 0x008f54d0
extern "C" __declspec(naked) void asm_008f54d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x8f80a0 }
	__asm { push 0x12fd7e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0x1215930 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00906010();
extern "C" void fn_00906130();
extern "C" void fn_00906a60();
// FUNCTION: ROBLOXSTUDIO 0x00906a00
extern "C" __declspec(naked) void asm_00906a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33758 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_00906010 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00906a60 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00906130 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00916d10
extern "C" __declspec(naked) void asm_00916d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34941 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x009234d0
extern "C" __declspec(naked) void asm_009234d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd508b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xe7e3a8 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00923b00
extern "C" __declspec(naked) void asm_00923b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34941 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" void fn_00922020();
extern "C" void fn_00b0bbd0();
// FUNCTION: ROBLOXSTUDIO 0x00923da0
extern "C" __declspec(naked) void asm_00923da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00922020 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00b0bbd0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00928230();
// FUNCTION: ROBLOXSTUDIO 0x00928040
extern "C" __declspec(naked) void asm_00928040()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00928230 }
	__asm { mov dword ptr [esi], 0xe7fb14 }
	__asm { mov dword ptr [esi + 4], 0xe7fbb0 }
	__asm { mov dword ptr [esi + 0x18], 0xe7fbb8 }
	__asm { mov dword ptr [esi + 0x1c], 0xe7fbc4 }
	__asm { mov dword ptr [esi + 0x64], 0xe7fbd4 }
	__asm { mov dword ptr [esi + 0x94], 1 }
	__asm { mov dword ptr [esi + 0x90], 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x009302d0
extern "C" __declspec(naked) void asm_009302d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { call dword ptr [eax + 0x74] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x70] }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00933d80();
extern "C" void fn_00934090();
// FUNCTION: ROBLOXSTUDIO 0x00933e60
extern "C" __declspec(naked) void asm_00933e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd219c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push eax }
	__asm { call fn_00934090 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00933d80 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004115f0();
extern "C" void fn_00934b30();
// FUNCTION: ROBLOXSTUDIO 0x00934d40
extern "C" __declspec(naked) void asm_00934d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd366d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00934b30 }
	__asm { push 0xc53ed0 }
	__asm { push 0x1300114 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe81d28 }
	__asm { call fn_004115f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_008f2170();
// FUNCTION: ROBLOXSTUDIO 0x00938620
extern "C" __declspec(naked) void asm_00938620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e259 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_008f2170 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009396b0();
// FUNCTION: ROBLOXSTUDIO 0x00939b10
extern "C" __declspec(naked) void asm_00939b10()
{
	__asm { push esi }
	__asm { push 0xe82250 }
	__asm { mov esi, ecx }
	__asm { call fn_009396b0 }
	__asm { mov dword ptr [esi], 0xe827bc }
	__asm { mov dword ptr [esi + 4], 0xe82834 }
	__asm { mov dword ptr [esi + 0x18], 0xe8283c }
	__asm { mov dword ptr [esi + 0x1c], 0xe82848 }
	__asm { mov dword ptr [esi + 0x64], 0xe82858 }
	__asm { mov dword ptr [esi + 0x7c], 0x41800000 }
	__asm { mov dword ptr [esi + 0x80], 0x42b40000 }
	__asm { mov dword ptr [esi + 0x84], 5 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00b65cd0();
// FUNCTION: ROBLOXSTUDIO 0x00939b60
extern "C" __declspec(naked) void asm_00939b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x64] }
	__asm { mov dword ptr [esi], 0xe82454 }
	__asm { mov dword ptr [esi + 4], 0xe824cc }
	__asm { mov dword ptr [esi + 0x18], 0xe824d4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe824e0 }
	__asm { mov dword ptr [ecx], 0xe824f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b65cd0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00941e40();
extern "C" void fn_00be8210();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00940c80
extern "C" __declspec(naked) void asm_00940c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [ecx + 4] }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00941e40 }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00be8210 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00941e40();
extern "C" void fn_00be8210();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00940f60
extern "C" __declspec(naked) void asm_00940f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00941e40 }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00be8210 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00941e40();
extern "C" void fn_00be8210();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00941480
extern "C" __declspec(naked) void asm_00941480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0x1c] }
	__asm { call fn_00941e40 }
	__asm { push dword ptr [ebx + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00be8210 }
	__asm { push dword ptr [ebx + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094b330
extern "C" __declspec(naked) void asm_0094b330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov dword ptr [edi + 0x14], 0xe18224 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe8477c }
	__asm { mov dword ptr [edi + 0x14], 0xe84788 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094b3a0
extern "C" __declspec(naked) void asm_0094b3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov dword ptr [edi + 0x14], 0xe18224 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe846e8 }
	__asm { mov dword ptr [edi + 0x14], 0xe846f4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0094b410
extern "C" __declspec(naked) void asm_0094b410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe8455c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov dword ptr [edi + 0x14], 0xe18224 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe84744 }
	__asm { mov dword ptr [edi + 0x14], 0xe84750 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094afd0();
extern "C" void fn_0094b330();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0094bf00
extern "C" __declspec(naked) void asm_0094bf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38448 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_0094b330 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094afd0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push 0x112f7d8 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0094aff0();
extern "C" void fn_0094b3a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0094bf50
extern "C" __declspec(naked) void asm_0094bf50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_0094b3a0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094aff0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push 0x112f648 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0094b010();
extern "C" void fn_0094b410();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0094bfa0
extern "C" __declspec(naked) void asm_0094bfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd38488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_0094b410 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094b010 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push 0x112f750 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00956c10
extern "C" __declspec(naked) void asm_00956c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39109 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { add ecx, -0x14 }
	__asm { mov dword ptr [ebp - 0x1c], 0xe84adc }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x28], 0xe84ac4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x112fec0 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe84ad0 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x009696c0
extern "C" __declspec(naked) void asm_009696c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { shr edi, 3 }
	__asm { add edi, dword ptr [esi] }
	__asm { shr edx, 3 }
	__asm { mov ecx, edi }
	__asm { shl ecx, 6 }
	__asm { add ecx, dword ptr [esi + 8] }
	__asm { mov eax, edi }
	__asm { shr eax, 2 }
	__asm { add eax, 0x9e3779b9 }
	__asm { add ecx, edx }
	__asm { add eax, ecx }
	__asm { xor edi, eax }
	__asm { mov ecx, edi }
	__asm { mov eax, edi }
	__asm { shr eax, 2 }
	__asm { shl ecx, 6 }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, 0x9e3779b9 }
	__asm { add eax, ecx }
	__asm { xor eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00890c90();
extern "C" void fn_00a25280();
extern "C" void fn_00a252a0();
extern "C" void fn_00a255c0();
extern "C" void fn_00a255e0();
// FUNCTION: ROBLOXSTUDIO 0x0097f8b0
extern "C" __declspec(naked) void asm_0097f8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_00890c90 }
	__asm { push 6 }
	__asm { mov ecx, esi }
	__asm { call fn_00a255e0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00a255c0 }
	__asm { fldz }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00a25280 }
	__asm { fldz }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00a252a0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xec] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e88938[];
extern "C" char g_01038080[];
extern "C" void fn_00890c90();
extern "C" void fn_00a25280();
extern "C" void fn_00a252a0();
extern "C" void fn_00a255c0();
extern "C" void fn_00a255e0();
// FUNCTION: ROBLOXSTUDIO 0x0097f9a0
extern "C" __declspec(naked) void asm_0097f9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_00890c90 }
	__asm { push 7 }
	__asm { mov ecx, esi }
	__asm { call fn_00a255e0 }
	__asm { push 0xc }
	__asm { mov ecx, esi }
	__asm { call fn_00a255c0 }
	__asm { fld dword ptr [g_00e88938] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00a25280 }
	__asm { fld dword ptr [g_01038080] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00a252a0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xec] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e88938[];
extern "C" char g_01038080[];
extern "C" void fn_00890c90();
extern "C" void fn_00a25280();
extern "C" void fn_00a252a0();
extern "C" void fn_00a255c0();
extern "C" void fn_00a255e0();
// FUNCTION: ROBLOXSTUDIO 0x0097fa00
extern "C" __declspec(naked) void asm_0097fa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_00890c90 }
	__asm { push 7 }
	__asm { mov ecx, esi }
	__asm { call fn_00a255e0 }
	__asm { push 0xd }
	__asm { mov ecx, esi }
	__asm { call fn_00a255c0 }
	__asm { fld dword ptr [g_00e88938] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00a25280 }
	__asm { fld dword ptr [g_01038080] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00a252a0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xec] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b15430();
// FUNCTION: ROBLOXSTUDIO 0x009a06c0
extern "C" __declspec(naked) void asm_009a06c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b839 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [ebp - 0x18], 0x9a0730 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00b15430 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009a3c60();
// FUNCTION: ROBLOXSTUDIO 0x009a3d00
extern "C" __declspec(naked) void asm_009a3d00()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_009a3c60 }
	__asm { mov dword ptr [esi + 0x68], 0xffffffff }
	__asm { mov dword ptr [esi + 0x6c], 0xffffffff }
	__asm { mov dword ptr [esi + 0x70], 0xffffffff }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi], 0xe92acc }
	__asm { mov dword ptr [esi + 4], 0xe92b44 }
	__asm { mov dword ptr [esi + 0x18], 0xe92b4c }
	__asm { mov dword ptr [esi + 0x1c], 0xe92b58 }
	__asm { mov dword ptr [esi + 0x64], 0xe92b68 }
	__asm { mov dword ptr [esi + 0x7c], 5 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_007c7340();
// FUNCTION: ROBLOXSTUDIO 0x009a5590
extern "C" __declspec(naked) void asm_009a5590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007c7340 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009b3cf0();
// FUNCTION: ROBLOXSTUDIO 0x009b4620
extern "C" __declspec(naked) void asm_009b4620()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_009b3cf0 }
	__asm { mov dword ptr [esi], 0xe93b6c }
	__asm { mov dword ptr [esi + 4], 0xe93be4 }
	__asm { mov dword ptr [esi + 0x18], 0xe93bec }
	__asm { mov dword ptr [esi + 0x1c], 0xe93bf8 }
	__asm { mov dword ptr [esi + 0x64], 0xe93c08 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov dword ptr [esi + 0x94], 0x3d75c28f }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_009b3db0();
// FUNCTION: ROBLOXSTUDIO 0x009b4670
extern "C" __declspec(naked) void asm_009b4670()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_009b3db0 }
	__asm { mov dword ptr [esi], 0xe93cbc }
	__asm { mov dword ptr [esi + 4], 0xe93d34 }
	__asm { mov dword ptr [esi + 0x18], 0xe93d3c }
	__asm { mov dword ptr [esi + 0x1c], 0xe93d48 }
	__asm { mov dword ptr [esi + 0x64], 0xe93d58 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0044d510();
// FUNCTION: ROBLOXSTUDIO 0x009c4150
extern "C" __declspec(naked) void asm_009c4150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044d510 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov ecx, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov ecx, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi], 0xe461dc }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_009c6c00();
// FUNCTION: ROBLOXSTUDIO 0x009c7550
extern "C" __declspec(naked) void asm_009c7550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { sub esp, 0x30 }
	__asm { mov esi, esp }
	__asm { lea eax, [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { call fn_009c6c00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_009c6ca0();
// FUNCTION: ROBLOXSTUDIO 0x009c7590
extern "C" __declspec(naked) void asm_009c7590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40388 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { sub esp, 0x1c }
	__asm { mov edx, esp }
	__asm { add ecx, 0x10 }
	__asm { mov dword ptr [edx], 0xe461dc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { call fn_009c6ca0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00405b90();
// FUNCTION: ROBLOXSTUDIO 0x009c8290
extern "C" __declspec(naked) void asm_009c8290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd675f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007cff40();
extern "C" void fn_007d60a0();
// FUNCTION: ROBLOXSTUDIO 0x009c9030
extern "C" __declspec(naked) void asm_009c9030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd675f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x28] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d60a0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007cff40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_009c70d0();
// FUNCTION: ROBLOXSTUDIO 0x009ca970
extern "C" __declspec(naked) void asm_009ca970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { sub esp, 0x30 }
	__asm { mov esi, esp }
	__asm { lea edi, [ebx + 0x64] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { lea ecx, [ebx + 0x94] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { call fn_009c70d0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044ad50();
// FUNCTION: ROBLOXSTUDIO 0x009cb680
extern "C" __declspec(naked) void asm_009cb680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd675f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_0044ad50 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009d5e40
extern "C" __declspec(naked) void asm_009d5e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34941 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_006d6760();
// FUNCTION: ROBLOXSTUDIO 0x009d8e80
extern "C" __declspec(naked) void asm_009d8e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0x3f000000 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006d6760 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009e3860();
extern "C" void fn_009eff90();
// FUNCTION: ROBLOXSTUDIO 0x009e3800
extern "C" __declspec(naked) void asm_009e3800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41b69 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009e3860 }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_009eff90 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009e39a0();
extern "C" void fn_009eff90();
// FUNCTION: ROBLOXSTUDIO 0x009e3940
extern "C" __declspec(naked) void asm_009e3940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41b69 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009e39a0 }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_009eff90 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006d1e60();
extern "C" void fn_00a106a0();
// FUNCTION: ROBLOXSTUDIO 0x009f3110
extern "C" __declspec(naked) void asm_009f3110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push edi }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_006d1e60 }
	__asm { push eax }
	__asm { call fn_00a106a0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov edi, eax }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_006d1e60 }
	__asm { push eax }
	__asm { call fn_00a106a0 }
	__asm { lea ecx, [edi + edi*2] }
	__asm { add esp, 4 }
	__asm { lea eax, [eax + ecx*2] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009f6c50();
// FUNCTION: ROBLOXSTUDIO 0x009f6c00
extern "C" __declspec(naked) void asm_009f6c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_009f6c50 }
	__asm { movsx eax, word ptr [ebp - 8] }
	__asm { movsx ecx, word ptr [ebp - 6] }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea ecx, [ecx + ecx*2] }
	__asm { fld dword ptr [esi + eax*4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [esi + ecx*4 + 4] }
	__asm { movsx ecx, word ptr [ebp - 4] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { lea ecx, [ecx + ecx*2] }
	__asm { fld dword ptr [esi + ecx*4 + 8] }
	__asm { pop esi }
	__asm { fstp dword ptr [eax + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009fa5b0();
// FUNCTION: ROBLOXSTUDIO 0x009fa670
extern "C" __declspec(naked) void asm_009fa670()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_009fa5b0 }
	__asm { mov dword ptr [esi], 0xe9a4cc }
	__asm { mov dword ptr [esi + 4], 0xe9a544 }
	__asm { mov dword ptr [esi + 0x18], 0xe9a54c }
	__asm { mov dword ptr [esi + 0x1c], 0xe9a558 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x009fc660
extern "C" __declspec(naked) void asm_009fc660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { lea esi, [ecx + 0x84] }
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

extern "C" void fn_00a09490();
extern "C" void fn_00a0a250();
// FUNCTION: ROBLOXSTUDIO 0x00a08e00
extern "C" __declspec(naked) void asm_00a08e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 8] }
	__asm { movzx ecx, byte ptr [esi] }
	__asm { push eax }
	__asm { shr ecx, 6 }
	__asm { mov eax, ecx }
	__asm { shl eax, 4 }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [eax*2 + 0x13067f8] }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00a09490 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a0a250 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00b65cd0();
// FUNCTION: ROBLOXSTUDIO 0x00a0afa0
extern "C" __declspec(naked) void asm_00a0afa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43a38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x64] }
	__asm { mov dword ptr [esi], 0xe9d054 }
	__asm { mov dword ptr [esi + 4], 0xe9d0cc }
	__asm { mov dword ptr [esi + 0x18], 0xe9d0d4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9d0e0 }
	__asm { mov dword ptr [ecx], 0xe9d0f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b65cd0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe9cf14 }
	__asm { mov dword ptr [esi + 4], 0xe9cf8c }
	__asm { mov dword ptr [esi + 0x18], 0xe9cf94 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9cfa0 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00b65cd0();
// FUNCTION: ROBLOXSTUDIO 0x00a0b970
extern "C" __declspec(naked) void asm_00a0b970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43ad8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x64] }
	__asm { mov dword ptr [esi], 0xe9d384 }
	__asm { mov dword ptr [esi + 4], 0xe9d3fc }
	__asm { mov dword ptr [esi + 0x18], 0xe9d404 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9d410 }
	__asm { mov dword ptr [ecx], 0xe9d420 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b65cd0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe9d20c }
	__asm { mov dword ptr [esi + 4], 0xe9d284 }
	__asm { mov dword ptr [esi + 0x18], 0xe9d28c }
	__asm { mov dword ptr [esi + 0x1c], 0xe9d298 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00b65cd0();
// FUNCTION: ROBLOXSTUDIO 0x00a0c330
extern "C" __declspec(naked) void asm_00a0c330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd43b98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x64] }
	__asm { mov dword ptr [esi], 0xe9d5bc }
	__asm { mov dword ptr [esi + 4], 0xe9d634 }
	__asm { mov dword ptr [esi + 0x18], 0xe9d63c }
	__asm { mov dword ptr [esi + 0x1c], 0xe9d648 }
	__asm { mov dword ptr [ecx], 0xe9d658 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b65cd0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], 0xe9d47c }
	__asm { mov dword ptr [esi + 4], 0xe9d4f4 }
	__asm { mov dword ptr [esi + 0x18], 0xe9d4fc }
	__asm { mov dword ptr [esi + 0x1c], 0xe9d508 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00a10530();
// FUNCTION: ROBLOXSTUDIO 0x00a10620
extern "C" __declspec(naked) void asm_00a10620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a10530 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0xac] }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009f6d30();
// FUNCTION: ROBLOXSTUDIO 0x00a1d080
extern "C" __declspec(naked) void asm_00a1d080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea ecx, [edi + 0x24] }
	__asm { push ecx }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { lea edx, [edi + 0x18] }
	__asm { lea esi, [edi + 0xc] }
	__asm { push edx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { push esi }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_009f6d30 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a27b30
extern "C" __declspec(naked) void asm_00a27b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe844fc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov dword ptr [edi + 0x14], 0xe18224 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0xffffffff }
	__asm { mov dword ptr [edi], 0xea6478 }
	__asm { mov dword ptr [edi + 0x14], 0xea6484 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a27bc0
extern "C" __declspec(naked) void asm_00a27bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi + 0xc], 0xe18224 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esi], 0xea6440 }
	__asm { mov dword ptr [esi + 0xc], 0xea644c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a27ad0();
extern "C" void fn_00a27b30();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a29c40
extern "C" __declspec(naked) void asm_00a29c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46bc8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x5c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_00a27b30 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a27ad0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push 0x11432a0 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a27af0();
extern "C" void fn_00a27ba0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a29c90
extern "C" __declspec(naked) void asm_00a29c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46be8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x6c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00a27ba0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x78] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a27af0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x78] }
	__asm { push 0x114330c }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00a27b10();
extern "C" void fn_00a27bc0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00a29ce0
extern "C" __declspec(naked) void asm_00a29ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46c08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_00a27bc0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a27b10 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push 0x114323c }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a2b1c0
extern "C" __declspec(naked) void asm_00a2b1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe844fc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xea5ac0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov dword ptr [edi + 0x1c], 0xe18224 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0xffffffff }
	__asm { mov dword ptr [edi], 0xea64e0 }
	__asm { mov dword ptr [edi + 0x1c], 0xea64ec }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1031c[];
// FUNCTION: ROBLOXSTUDIO 0x00a2b5a0
extern "C" __declspec(naked) void asm_00a2b5a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi], 0xea60f4 }
	__asm { mov byte ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0xa0], 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e1031c[];
// FUNCTION: ROBLOXSTUDIO 0x00a2b610
extern "C" __declspec(naked) void asm_00a2b610()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi], 0xea622c }
	__asm { mov byte ptr [esi + 0xc8], 0 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { mov dword ptr [esi + 0xe0], 0 }
	__asm { mov dword ptr [esi + 0xe4], 0 }
	__asm { mov dword ptr [esi + 0xe8], 0 }
	__asm { mov dword ptr [esi + 0xec], 0 }
	__asm { mov dword ptr [esi + 0xf0], 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00953940();
// FUNCTION: ROBLOXSTUDIO 0x00a2b9b0
extern "C" __declspec(naked) void asm_00a2b9b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00953940 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0x10], 0x1000 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0x80 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 4 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00a2ba10();
// FUNCTION: ROBLOXSTUDIO 0x00a2bb10
extern "C" __declspec(naked) void asm_00a2bb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0xea5ac8 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 8], 1 }
	__asm { mov dword ptr [ebp - 4], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xea5ac0 }
	__asm { mov dword ptr [esi + 0x14], 1 }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00f10db8[];
extern "C" void fn_00a2ba10();
// FUNCTION: ROBLOXSTUDIO 0x00a2bb60
extern "C" __declspec(naked) void asm_00a2bb60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0xea5ac8 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 8], 1 }
	__asm { mov dword ptr [ebp - 4], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [esi], 0xea5ac0 }
	__asm { mov eax, dword ptr [g_00f10db8] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00af9ed0();
extern "C" void fn_00d02750();
// FUNCTION: ROBLOXSTUDIO 0x00a2c8f0
extern "C" __declspec(naked) void asm_00a2c8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47138 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0 }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00d02750 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00af9ed0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00a315a0
extern "C" __declspec(naked) void asm_00a315a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x20] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sub edx, esi }
	__asm { push edx }
	__asm { add ecx, 4 }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a348d0
extern "C" __declspec(naked) void asm_00a348d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ecx + 0x20], 0 }
	__asm { mov dword ptr [ecx + 0x2c], 0 }
	__asm { mov dword ptr [ecx + 0x70], 0 }
	__asm { mov dword ptr [ecx + 0x44], 0 }
	__asm { mov dword ptr [ecx + 0x36], 0x1000000 }
	__asm { mov dword ptr [ecx + 0x3c], 0 }
	__asm { mov dword ptr [ecx + 0x40], 0 }
	__asm { mov dword ptr [ecx + 0x68], 0 }
	__asm { mov dword ptr [ecx + 0x30], 0 }
	__asm { mov word ptr [ecx + 0x34], ax }
	__asm { mov byte ptr [ecx + 6], al }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov dword ptr [ecx + 0x74], eax }
	__asm { mov dword ptr [ecx + 0x50], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a45610();
// FUNCTION: ROBLOXSTUDIO 0x00a377a0
extern "C" __declspec(naked) void asm_00a377a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x3c }
	__asm { lea eax, [esi + 0x24] }
	__asm { push 0xea6f8c }
	__asm { push eax }
	__asm { mov dword ptr [esi + 8], 0xf12f2d }
	__asm { mov dword ptr [esi + 4], 0xf12f2d }
	__asm { mov dword ptr [esi + 0xc], 0xea6f84 }
	__asm { mov dword ptr [esi + 0x14], 0xffffffff }
	__asm { mov dword ptr [esi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [esi + 0x20], 0xffffffff }
	__asm { mov dword ptr [esi + 0x10], 0xea6f8c }
	__asm { call fn_00a45610 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1067c[];
extern "C" char g_00e10734[];
extern "C" void fn_00a35620();
extern "C" void fn_00a359d0();
extern "C" void fn_00a35e70();
// FUNCTION: ROBLOXSTUDIO 0x00a38260
extern "C" __declspec(naked) void asm_00a38260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [g_00e10734] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, eax }
	__asm { push edi }
	__asm { call fn_00a35e70 }
	__asm { push esi }
	__asm { inc eax }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0xea7144 }
	__asm { push edi }
	__asm { call fn_00a35620 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { call fn_00a359d0 }
	__asm { add esp, 0x2c }
	__asm { mov eax, 6 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb24[];
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3cc00
extern "C" __declspec(naked) void asm_00a3cc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb24] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb24] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { xor edx, edx }
	__asm { cmp ecx, dword ptr [esi] }
	__asm { sete dl }
	__asm { push edx }
	__asm { push edi }
	__asm { call fn_00a35560 }
	__asm { add esp, 0x20 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_00a3b140();
// FUNCTION: ROBLOXSTUDIO 0x00a40c00
extern "C" __declspec(naked) void asm_00a40c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { sub esp, 0x30 }
	__asm { mov edi, esp }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00a3b140 }
	__asm { add esp, 0x34 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_00a3b140();
// FUNCTION: ROBLOXSTUDIO 0x00a41f50
extern "C" __declspec(naked) void asm_00a41f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { sub esp, 0x30 }
	__asm { mov edi, esp }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00a3b140 }
	__asm { add esp, 0x34 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a3b210();
// FUNCTION: ROBLOXSTUDIO 0x00a42000
extern "C" __declspec(naked) void asm_00a42000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { mov dword ptr [esi], 0xe461dc }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { push dword ptr [ecx] }
	__asm { call fn_00a3b210 }
	__asm { add esp, 0x20 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00663af0();
// FUNCTION: ROBLOXSTUDIO 0x00a51050
extern "C" __declspec(naked) void asm_00a51050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add ecx, 0x4c }
	__asm { movzx eax, word ptr [edx] }
	__asm { sar ax, 5 }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movzx eax, word ptr [edx + 2] }
	__asm { mov dx, word ptr [edx + 4] }
	__asm { sar ax, 4 }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ebp - 6] }
	__asm { mov dword ptr [ebp - 6], eax }
	__asm { lea eax, [ebp - 6] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 6] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { sar dx, 5 }
	__asm { push eax }
	__asm { mov word ptr [ebp - 2], dx }
	__asm { call fn_00663af0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a514d0
extern "C" __declspec(naked) void asm_00a514d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0xeaa350 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ecx], 0xeaa3d0 }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov word ptr [ecx + 0x20], ax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00a75a10();
extern "C" void fn_00a764e0();
extern "C" void fn_00a7ad00();
// FUNCTION: ROBLOXSTUDIO 0x00a7a1d0
extern "C" __declspec(naked) void asm_00a7a1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4ae9b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x164 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x170] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00a75a10 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a7ad00 }
	__asm { lea ecx, [ebp - 0x170] }
	__asm { call fn_00a764e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00d08530();
// FUNCTION: ROBLOXSTUDIO 0x00a9ae00
extern "C" __declspec(naked) void asm_00a9ae00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00d08530 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a9cd50();
// FUNCTION: ROBLOXSTUDIO 0x00aa1190
extern "C" __declspec(naked) void asm_00aa1190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { lea ecx, [edi + 0xd0] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0xf0] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x110] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x130] }
	__asm { call fn_00a9cd50 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x150] }
	__asm { call fn_00a9cd50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aa1db0();
// FUNCTION: ROBLOXSTUDIO 0x00aa1ed0
extern "C" __declspec(naked) void asm_00aa1ed0()
{
	__asm { push esi }
	__asm { push 0xe4f090 }
	__asm { mov esi, ecx }
	__asm { call fn_00aa1db0 }
	__asm { mov dword ptr [esi + 0x68], 0xffffffff }
	__asm { mov dword ptr [esi + 0x6c], 0xffffffff }
	__asm { mov dword ptr [esi + 0x70], 0xffffffff }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi], 0xeb61fc }
	__asm { mov dword ptr [esi + 4], 0xeb6274 }
	__asm { mov dword ptr [esi + 0x18], 0xeb627c }
	__asm { mov dword ptr [esi + 0x1c], 0xeb6288 }
	__asm { mov dword ptr [esi + 0x64], 0xeb6298 }
	__asm { mov dword ptr [esi + 0x90], 0xf }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov byte ptr [esi + 0x7c], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x00aa5410
extern "C" __declspec(naked) void asm_00aa5410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [edi + 0x3c], eax }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [edi + 0x44], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00aad3c0();
// FUNCTION: ROBLOXSTUDIO 0x00aad4f0
extern "C" __declspec(naked) void asm_00aad4f0()
{
	__asm { push esi }
	__asm { push 0xeb8fbc }
	__asm { mov esi, ecx }
	__asm { call fn_00aad3c0 }
	__asm { mov dword ptr [esi], 0xeb90bc }
	__asm { mov dword ptr [esi + 4], 0xeb9144 }
	__asm { mov dword ptr [esi + 0x18], 0xeb914c }
	__asm { mov dword ptr [esi + 0x1c], 0xeb9158 }
	__asm { mov dword ptr [esi + 0x64], 0xeb9168 }
	__asm { mov dword ptr [esi + 0x68], 0xeb9170 }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00ac7570();
// FUNCTION: ROBLOXSTUDIO 0x00ac7910
extern "C" __declspec(naked) void asm_00ac7910()
{
	__asm { push esi }
	__asm { push 0xebb1c8 }
	__asm { mov esi, ecx }
	__asm { call fn_00ac7570 }
	__asm { mov dword ptr [esi], 0xebb4e4 }
	__asm { mov dword ptr [esi + 4], 0xebb580 }
	__asm { mov dword ptr [esi + 0x18], 0xebb588 }
	__asm { mov dword ptr [esi + 0x1c], 0xebb594 }
	__asm { mov dword ptr [esi + 0x64], 0xebb5a4 }
	__asm { mov dword ptr [esi + 0x68], 0xebb5ac }
	__asm { mov dword ptr [esi + 0xdc], 0xebb5e0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00ac91d0();
// FUNCTION: ROBLOXSTUDIO 0x00ac9500
extern "C" __declspec(naked) void asm_00ac9500()
{
	__asm { push esi }
	__asm { push 0xebb6d8 }
	__asm { mov esi, ecx }
	__asm { call fn_00ac91d0 }
	__asm { mov dword ptr [esi], 0xebb8fc }
	__asm { mov dword ptr [esi + 4], 0xebb988 }
	__asm { mov dword ptr [esi + 0x18], 0xebb990 }
	__asm { mov dword ptr [esi + 0x1c], 0xebb99c }
	__asm { mov dword ptr [esi + 0x64], 0xebb9ac }
	__asm { mov dword ptr [esi + 0x68], 0xebb9b4 }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00d08530();
// FUNCTION: ROBLOXSTUDIO 0x00aca9f0
extern "C" __declspec(naked) void asm_00aca9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xebbcf4 }
	__asm { mov dword ptr [esi + 4], 0xebbd7c }
	__asm { mov dword ptr [esi + 0x18], 0xebbd84 }
	__asm { mov dword ptr [esi + 0x1c], 0xebbd90 }
	__asm { mov dword ptr [esi + 0x64], 0xebbda0 }
	__asm { mov dword ptr [ecx], 0xebbda8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00d08530 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00d08530();
// FUNCTION: ROBLOXSTUDIO 0x00acbdf0
extern "C" __declspec(naked) void asm_00acbdf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xebc05c }
	__asm { mov dword ptr [esi + 4], 0xebc0e4 }
	__asm { mov dword ptr [esi + 0x18], 0xebc0ec }
	__asm { mov dword ptr [esi + 0x1c], 0xebc0f8 }
	__asm { mov dword ptr [esi + 0x64], 0xebc108 }
	__asm { mov dword ptr [ecx], 0xebc110 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00d08530 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00acc8e0
extern "C" __declspec(naked) void asm_00acc8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { lea esi, [ecx + 0x9c] }
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

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00ae4340
extern "C" __declspec(naked) void asm_00ae4340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { lea esi, [ecx + 0x350] }
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

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00ae4d90
extern "C" __declspec(naked) void asm_00ae4d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { lea esi, [ecx + 0x318] }
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

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00b0b200
extern "C" __declspec(naked) void asm_00b0b200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 0xa8] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add esi, 0x94 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
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

extern "C" void fn_00b0c200();
// FUNCTION: ROBLOXSTUDIO 0x00b0c440
extern "C" __declspec(naked) void asm_00b0c440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00b0c200 }
	__asm { mov dword ptr [esi], 0xec29fc }
	__asm { mov dword ptr [esi + 4], 0xec2a84 }
	__asm { mov dword ptr [esi + 0x18], 0xec2a8c }
	__asm { mov dword ptr [esi + 0x1c], 0xec2a98 }
	__asm { mov dword ptr [esi + 0x64], 0xec2aa8 }
	__asm { mov dword ptr [esi + 0x68], 0xec2ab0 }
	__asm { mov dword ptr [esi + 0x80], 0x17 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov byte ptr [esi + 0x88], 1 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b0c980();
// FUNCTION: ROBLOXSTUDIO 0x00b0cc80
extern "C" __declspec(naked) void asm_00b0cc80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00b0c980 }
	__asm { mov dword ptr [esi], 0xec2eb4 }
	__asm { mov dword ptr [esi + 4], 0xec2f3c }
	__asm { mov dword ptr [esi + 0x18], 0xec2f44 }
	__asm { mov dword ptr [esi + 0x1c], 0xec2f50 }
	__asm { mov dword ptr [esi + 0x64], 0xec2f60 }
	__asm { mov dword ptr [esi + 0x68], 0xec2f68 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b0ca50();
// FUNCTION: ROBLOXSTUDIO 0x00b0cce0
extern "C" __declspec(naked) void asm_00b0cce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00b0ca50 }
	__asm { mov dword ptr [esi], 0xec2ce4 }
	__asm { mov dword ptr [esi + 4], 0xec2d6c }
	__asm { mov dword ptr [esi + 0x18], 0xec2d74 }
	__asm { mov dword ptr [esi + 0x1c], 0xec2d80 }
	__asm { mov dword ptr [esi + 0x64], 0xec2d90 }
	__asm { mov dword ptr [esi + 0x68], 0xec2d98 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b106a0();
// FUNCTION: ROBLOXSTUDIO 0x00b10650
extern "C" __declspec(naked) void asm_00b10650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00b106a0 }
	__asm { mov dword ptr [edi], 0xe666d8 }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { fld dword ptr [esi + 0x3c] }
	__asm { fstp dword ptr [edi + 0x3c] }
	__asm { fld dword ptr [esi + 0x40] }
	__asm { fstp dword ptr [edi + 0x40] }
	__asm { fld dword ptr [esi + 0x44] }
	__asm { fstp dword ptr [edi + 0x44] }
	__asm { mov al, byte ptr [esi + 0x48] }
	__asm { mov byte ptr [edi + 0x48], al }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { mov dword ptr [edi + 0x4c], eax }
	__asm { mov dword ptr [edi], 0xe68b50 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b10500();
extern "C" void fn_00b105c0();
// FUNCTION: ROBLOXSTUDIO 0x00b10750
extern "C" __declspec(naked) void asm_00b10750()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00b10500 }
	__asm { mov dword ptr [edi], 0xec3b9c }
	__asm { mov dword ptr [edi + 4], 0xec3c14 }
	__asm { mov dword ptr [edi + 0x18], 0xec3c1c }
	__asm { mov dword ptr [edi + 0x1c], 0xec3c28 }
	__asm { lea ecx, [edi + 0x64] }
	__asm { mov byte ptr [edi + 0xa4], 1 }
	__asm { call fn_00b105c0 }
	__asm { mov dword ptr [edi], 0xec3c54 }
	__asm { mov dword ptr [edi + 4], 0xec3ccc }
	__asm { mov dword ptr [edi + 0x18], 0xec3cd4 }
	__asm { mov dword ptr [edi + 0x1c], 0xec3ce0 }
	__asm { mov dword ptr [edi + 0x64], 0xec3cf0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00b150b0();
extern "C" void fn_00b5cbf0();
// FUNCTION: ROBLOXSTUDIO 0x00b15500
extern "C" __declspec(naked) void asm_00b15500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0xe8cf24 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b150b0 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { lea ecx, [esi + 0x6c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xec4374 }
	__asm { mov dword ptr [esi + 4], 0xec43ec }
	__asm { mov dword ptr [esi + 0x18], 0xec43f4 }
	__asm { mov dword ptr [esi + 0x1c], 0xec4400 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { call fn_00b5cbf0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b15fa0();
// FUNCTION: ROBLOXSTUDIO 0x00b160c0
extern "C" __declspec(naked) void asm_00b160c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00b15fa0 }
	__asm { mov dword ptr [esi], 0xec4634 }
	__asm { mov dword ptr [esi + 4], 0xec46c8 }
	__asm { mov dword ptr [esi + 0x18], 0xec46d0 }
	__asm { mov dword ptr [esi + 0x1c], 0xec46dc }
	__asm { mov dword ptr [esi + 0x64], 0xec46ec }
	__asm { mov dword ptr [esi + 0x68], 0xec46f4 }
	__asm { mov dword ptr [esi + 0x94], 6 }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov byte ptr [esi + 0xa0], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b1b300();
// FUNCTION: ROBLOXSTUDIO 0x00b1b4d0
extern "C" __declspec(naked) void asm_00b1b4d0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b1b300 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { mov dword ptr [esi], 0xec59a4 }
	__asm { mov dword ptr [esi + 4], 0xec5a1c }
	__asm { mov dword ptr [esi + 0x18], 0xec5a24 }
	__asm { mov dword ptr [esi + 0x1c], 0xec5a30 }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x94], 0xf }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov byte ptr [esi + 0x80], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006dea00();
// FUNCTION: ROBLOXSTUDIO 0x00b49a90
extern "C" __declspec(naked) void asm_00b49a90()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { call fn_006dea00 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 0x10] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x14] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { fstp dword ptr [esi + 0x18] }
	__asm { fld dword ptr [esi + 0x10] }
	__asm { fstp dword ptr [esi] }
	__asm { fld dword ptr [esi + 0x14] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { fld dword ptr [esi + 0x18] }
	__asm { fstp dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006dea00();
// FUNCTION: ROBLOXSTUDIO 0x00b51e70
extern "C" __declspec(naked) void asm_00b51e70()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov word ptr [esi + 0x118], 0x101 }
	__asm { call fn_006dea00 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 0x11c] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x120] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0x124] }
	__asm { call fn_006dea00 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 0x128] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x12c] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0x130] }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00a1f9c0();
extern "C" void fn_00b58300();
extern "C" void fn_00b5b160();
extern "C" void fn_00b5cbf0();
// FUNCTION: ROBLOXSTUDIO 0x00b578f0
extern "C" __declspec(naked) void asm_00b578f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59308 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00b5cbf0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b58300 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a1f9c0 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b5b160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
