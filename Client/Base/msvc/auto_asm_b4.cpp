// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00849560
extern "C" __declspec(naked) void asm_00849560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27eb9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" void fn_00832f20();
// FUNCTION: ROBLOXSTUDIO 0x0084a9e0
extern "C" __declspec(naked) void asm_0084a9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00832f20 }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00857950
extern "C" __declspec(naked) void asm_00857950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { movzx eax, byte ptr [edx + 0x30] }
	__asm { lea ecx, [edx + 8] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x20] }
	__asm { mov eax, dword ptr [edx] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0085ac00
extern "C" __declspec(naked) void asm_0085ac00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00859020();
extern "C" void fn_00b3ab10();
// FUNCTION: ROBLOXSTUDIO 0x0085fca0
extern "C" __declspec(naked) void asm_0085fca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0xba0] }
	__asm { lea ecx, [esi + 0xe1c] }
	__asm { call fn_00b3ab10 }
	__asm { mov ecx, esi }
	__asm { call fn_00859020 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00860130
extern "C" __declspec(naked) void asm_00860130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b51c70();
extern "C" void fn_00b51ec0();
// FUNCTION: ROBLOXSTUDIO 0x00860440
extern "C" __declspec(naked) void asm_00860440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b51ec0 }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { mov ecx, esi }
	__asm { call fn_00b51c70 }
	__asm { fadd dword ptr [ebp - 4] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00872310
extern "C" __declspec(naked) void asm_00872310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x260] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0x264] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [ecx + 0x268] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00872380
extern "C" __declspec(naked) void asm_00872380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x26c] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0x270] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [ecx + 0x274] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00863530();
// FUNCTION: ROBLOXSTUDIO 0x008738b0
extern "C" __declspec(naked) void asm_008738b0()
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
	__asm { add ecx, 8 }
	__asm { call fn_00863530 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00873a00
extern "C" __declspec(naked) void asm_00873a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00875760
extern "C" __declspec(naked) void asm_00875760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0086d8d0();
// FUNCTION: ROBLOXSTUDIO 0x0087b6a0
extern "C" __declspec(naked) void asm_0087b6a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0086d8d0 }
	__asm { push 0x12fa7b8 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { push 0x12fa7e4 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0086d8d0();
// FUNCTION: ROBLOXSTUDIO 0x0087dca0
extern "C" __declspec(naked) void asm_0087dca0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0086d8d0 }
	__asm { push 0x12faa70 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { push 0x12faa9c }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0086d8d0();
// FUNCTION: ROBLOXSTUDIO 0x00880920
extern "C" __declspec(naked) void asm_00880920()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0086d8d0 }
	__asm { push 0x12fadf4 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { push 0x12fae20 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00875480();
extern "C" void fn_00882aa0();
// FUNCTION: ROBLOXSTUDIO 0x00881de0
extern "C" __declspec(naked) void asm_00881de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00875480 }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00882aa0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0088b180();
// FUNCTION: ROBLOXSTUDIO 0x0088b320
extern "C" __declspec(naked) void asm_0088b320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { call fn_0088b180 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099d320();
// FUNCTION: ROBLOXSTUDIO 0x00892d80
extern "C" __declspec(naked) void asm_00892d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0xe0] }
	__asm { call fn_0099d320 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099d320();
// FUNCTION: ROBLOXSTUDIO 0x00892e20
extern "C" __declspec(naked) void asm_00892e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { call fn_0099d320 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf68ec();
// FUNCTION: ROBLOXSTUDIO 0x008938e0
extern "C" __declspec(naked) void asm_008938e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { fld dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { fstp dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fistp dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10704[];
// FUNCTION: ROBLOXSTUDIO 0x00899740
extern "C" __declspec(naked) void asm_00899740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call dword ptr [g_00e10704] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { fld qword ptr [ebp - 8] }
	__asm { add esp, 0xc }
	__asm { fstp dword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cfd30();
extern "C" void fn_007d5780();
// FUNCTION: ROBLOXSTUDIO 0x0089cd00
extern "C" __declspec(naked) void asm_0089cd00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007d5780 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007cfd30 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008a40a0();
// FUNCTION: ROBLOXSTUDIO 0x008a3940
extern "C" __declspec(naked) void asm_008a3940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x140] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008a40a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008ae040();
// FUNCTION: ROBLOXSTUDIO 0x008adcb0
extern "C" __declspec(naked) void asm_008adcb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ecx + 0x90] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0x80] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008ae040 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008ae040();
// FUNCTION: ROBLOXSTUDIO 0x008adce0
extern "C" __declspec(naked) void asm_008adce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ecx + 0x98] }
	__asm { push eax }
	__asm { lea eax, [ecx + 0x88] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008ae040 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x008bb880
extern "C" __declspec(naked) void asm_008bb880()
{
	__asm { mov eax, dword ptr [ecx + 0x78] }
	__asm { mov ecx, 1 }
	__asm { test eax, eax }
	__asm { cmove eax, ecx }
	__asm { ret }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008c1820
extern "C" __declspec(naked) void asm_008c1820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0xe6f03c }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012fce30[];
// FUNCTION: ROBLOXSTUDIO 0x008c5810
extern "C" __declspec(naked) void asm_008c5810()
{
	__asm { cmp byte ptr [g_012fce30], 0 }
	__asm { mov eax, 1 }
	__asm { mov ecx, 0x400 }
	__asm { cmovne eax, ecx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008c5c70
extern "C" __declspec(naked) void asm_008c5c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008cacf0();
// FUNCTION: ROBLOXSTUDIO 0x008cc130
extern "C" __declspec(naked) void asm_008cc130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008cacf0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c46a0();
// FUNCTION: ROBLOXSTUDIO 0x008d6aa0
extern "C" __declspec(naked) void asm_008d6aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fild dword ptr [ecx + 0x210] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a35710();
extern "C" void fn_00a35b70();
// FUNCTION: ROBLOXSTUDIO 0x008dfac0
extern "C" __declspec(naked) void asm_008dfac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0xe6fc88 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a35710 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 0xe6fca0 }
	__asm { dec eax }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a35b70 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c46c0();
// FUNCTION: ROBLOXSTUDIO 0x008e3ca0
extern "C" __declspec(naked) void asm_008e3ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fild dword ptr [ecx + 0x210] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008e9ad0();
// FUNCTION: ROBLOXSTUDIO 0x008e9990
extern "C" __declspec(naked) void asm_008e9990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008e9ad0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov byte ptr [eax], cl }
	__asm { mov cl, byte ptr [ebp - 2] }
	__asm { mov byte ptr [eax + 1], ch }
	__asm { mov byte ptr [eax + 2], cl }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008ebb40();
// FUNCTION: ROBLOXSTUDIO 0x008f1080
extern "C" __declspec(naked) void asm_008f1080()
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
	__asm { call fn_008ebb40 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008f7210();
// FUNCTION: ROBLOXSTUDIO 0x008f71e0
extern "C" __declspec(naked) void asm_008f71e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x8c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008f7210 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008f7f00();
// FUNCTION: ROBLOXSTUDIO 0x008f7ed0
extern "C" __declspec(naked) void asm_008f7ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x8c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008f7f00 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a46650();
extern "C" void fn_00b8bcf0();
// FUNCTION: ROBLOXSTUDIO 0x008f8f90
extern "C" __declspec(naked) void asm_008f8f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x80] }
	__asm { call fn_00b8bcf0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edi + 0x64] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a46650 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006b8410();
// FUNCTION: ROBLOXSTUDIO 0x008faa00
extern "C" __declspec(naked) void asm_008faa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006b8410 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00903c60();
// FUNCTION: ROBLOXSTUDIO 0x00903cf0
extern "C" __declspec(naked) void asm_00903cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [esi], 0xe76414 }
	__asm { call fn_00903c60 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8fdd0();
// FUNCTION: ROBLOXSTUDIO 0x009136e0
extern "C" __declspec(naked) void asm_009136e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx - 4] }
	__asm { fld dword ptr [edx + 0x1c] }
	__asm { sub esp, 8 }
	__asm { lea eax, [edx + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [edx + 0x18] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00b8fdd0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00af1480();
// FUNCTION: ROBLOXSTUDIO 0x00914ee0
extern "C" __declspec(naked) void asm_00914ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [esi + 0x8c] }
	__asm { call fn_00af1480 }
	__asm { push 0x12fec20 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00af1480();
// FUNCTION: ROBLOXSTUDIO 0x00914f10
extern "C" __declspec(naked) void asm_00914f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { mov ecx, dword ptr [esi + 0x8c] }
	__asm { call fn_00af1480 }
	__asm { push 0x12fec4c }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00915420();
// FUNCTION: ROBLOXSTUDIO 0x009153c0
extern "C" __declspec(naked) void asm_009153c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { call fn_00915420 }
	__asm { push 0x12feb38 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00915420();
// FUNCTION: ROBLOXSTUDIO 0x009153f0
extern "C" __declspec(naked) void asm_009153f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { call fn_00915420 }
	__asm { push 0x12feb68 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00916be0
extern "C" __declspec(naked) void asm_00916be0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x20] }
	__asm { mov edx, dword ptr [edi + 0x18] }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov eax, dword ptr [edx + eax] }
	__asm { add eax, dword ptr [edi + 0x14] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x00924610
extern "C" __declspec(naked) void asm_00924610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0x1e8] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx + 0x1ec] }
	__asm { mov ecx, dword ptr [ecx + 0x1f0] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00921620();
// FUNCTION: ROBLOXSTUDIO 0x009249f0
extern "C" __declspec(naked) void asm_009249f0()
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
	__asm { call fn_00921620 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
