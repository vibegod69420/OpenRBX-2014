// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00baa1e0();
// FUNCTION: ROBLOXSTUDIO 0x00b5c7a0
extern "C" __declspec(naked) void asm_00b5c7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52318 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { lea ecx, [edi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00baa1e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xece7d8 }
	__asm { mov dword ptr [edi + 8], 0xece7e8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a09490();
extern "C" void fn_00b651c0();
// FUNCTION: ROBLOXSTUDIO 0x00b600f0
extern "C" __declspec(naked) void asm_00b600f0()
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
	__asm { call fn_00b651c0 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006da0e0();
extern "C" void fn_00b64b90();
// FUNCTION: ROBLOXSTUDIO 0x00b64b50
extern "C" __declspec(naked) void asm_00b64b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_006da0e0 }
	__asm { fld dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x20] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b64b90 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00b68400();
// FUNCTION: ROBLOXSTUDIO 0x00b68370
extern "C" __declspec(naked) void asm_00b68370()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b68400 }
	__asm { mov dword ptr [esi], 0xed0bbc }
	__asm { mov dword ptr [esi + 0xb0], 0xed0ba0 }
	__asm { mov dword ptr [esi + 0xb4], 0 }
	__asm { lea eax, [esi + 0xb0] }
	__asm { mov byte ptr [esi + 0xc8], 1 }
	__asm { mov dword ptr [esi + 0xc4], 0 }
	__asm { mov dword ptr [esi + 0xbc], 0 }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov byte ptr [esi + 0xdc], 1 }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov dword ptr [esi + 0xa0], eax }
	__asm { mov dword ptr [esi + 0xb4], esi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_00a358d0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a38710();
extern "C" void fn_00a38960();
// FUNCTION: ROBLOXSTUDIO 0x00b6e340
extern "C" __declspec(naked) void asm_00b6e340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38960 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a38710 }
	__asm { push 3 }
	__asm { push esi }
	__asm { call fn_00a38710 }
	__asm { push 3 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a358d0 }
	__asm { add esp, 0x2c }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35150();
extern "C" void fn_00a351c0();
extern "C" void fn_00a354f0();
extern "C" void fn_00a35560();
extern "C" void fn_00a38710();
// FUNCTION: ROBLOXSTUDIO 0x00b6e890
extern "C" __declspec(naked) void asm_00b6e890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38710 }
	__asm { add esp, 8 }
	__asm { push 0 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35150 }
	__asm { add esp, 4 }
	__asm { dec eax }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a354f0 }
	__asm { xor ecx, ecx }
	__asm { test eax, eax }
	__asm { sete cl }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00a35560 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a351c0 }
	__asm { push esi }
	__asm { call fn_00a35150 }
	__asm { add esp, 0x24 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35650();
extern "C" void fn_00a35890();
extern "C" void fn_00a360d0();
extern "C" void fn_00a38740();
extern "C" void fn_00a38960();
// FUNCTION: ROBLOXSTUDIO 0x00b6efa0
extern "C" __declspec(naked) void asm_00b6efa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a38740 }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push edi }
	__asm { lea esi, [eax + 1] }
	__asm { call fn_00a38960 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a35650 }
	__asm { push esi }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a35890 }
	__asm { push -1 }
	__asm { push edi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0x30 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { pop edi }
	__asm { and eax, 2 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35580();
extern "C" void fn_00a35650();
extern "C" void fn_00a35d10();
extern "C" void fn_00a387b0();
// FUNCTION: ROBLOXSTUDIO 0x00b6fff0
extern "C" __declspec(naked) void asm_00b6fff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a387b0 }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a387b0 }
	__asm { push 2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a35650 }
	__asm { push 3 }
	__asm { push 0xb708f0 }
	__asm { push esi }
	__asm { call fn_00a35580 }
	__asm { add esp, 0x34 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10704[];
extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
// FUNCTION: ROBLOXSTUDIO 0x00b71a00
extern "C" __declspec(naked) void asm_00b71a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38810 }
	__asm { fstp qword ptr [esp] }
	__asm { call dword ptr [g_00e10704] }
	__asm { fstp qword ptr [ebp - 0x10] }
	__asm { fld qword ptr [ebp - 8] }
	__asm { add esp, 4 }
	__asm { fstp qword ptr [esp] }
	__asm { push esi }
	__asm { call fn_00a356f0 }
	__asm { fld qword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { fstp qword ptr [esp] }
	__asm { push esi }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 2 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10760[];
extern "C" char g_01038130[];
extern "C" void fn_00a356f0();
extern "C" void fn_00a35b70();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00b71e60
extern "C" __declspec(naked) void asm_00b71e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xed1628 }
	__asm { push 0x103066c }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { fld qword ptr [g_01038130] }
	__asm { add esp, 4 }
	__asm { fstp qword ptr [esp] }
	__asm { push esi }
	__asm { call fn_00a356f0 }
	__asm { push 0xed1770 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35b70 }
	__asm { mov eax, dword ptr [g_00e10760] }
	__asm { add esp, 0x10 }
	__asm { fld qword ptr [eax] }
	__asm { fstp qword ptr [esp] }
	__asm { push esi }
	__asm { call fn_00a356f0 }
	__asm { push 0xed1774 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35b70 }
	__asm { add esp, 0x18 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34e50();
extern "C" void fn_00a35690();
extern "C" void fn_00a35710();
extern "C" void fn_00a357b0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a35ce0();
// FUNCTION: ROBLOXSTUDIO 0x00b78360
extern "C" __declspec(naked) void asm_00b78360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a34e50 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a357b0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35bf0 }
	__asm { push 6 }
	__asm { push 0xed11f8 }
	__asm { push esi }
	__asm { call fn_00a35690 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a35710 }
	__asm { push -3 }
	__asm { push esi }
	__asm { call fn_00a35ce0 }
	__asm { add esp, 0x38 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc74[];
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b79b30
extern "C" __declspec(naked) void asm_00b79b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0128dc74] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0128dc74] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { xor edx, edx }
	__asm { cmp ecx, dword ptr [eax] }
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

extern "C" char g_0128dc78[];
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b79b80
extern "C" __declspec(naked) void asm_00b79b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0128dc78] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0128dc78] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { xor edx, edx }
	__asm { cmp ecx, dword ptr [eax] }
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

extern "C" char g_0128dc7c[];
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b79bd0
extern "C" __declspec(naked) void asm_00b79bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0128dc7c] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0128dc7c] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { xor edx, edx }
	__asm { cmp ecx, dword ptr [eax] }
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

extern "C" char g_0128e200[];
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
extern "C" void fn_00b79a40();
// FUNCTION: ROBLOXSTUDIO 0x00b79c20
extern "C" __declspec(naked) void asm_00b79c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0128e200] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0128e200] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, eax }
	__asm { push esi }
	__asm { call fn_00b79a40 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a35560 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012105e0[];
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b79c70
extern "C" __declspec(naked) void asm_00b79c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_012105e0] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_012105e0] }
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

extern "C" char g_012105e4[];
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b79cc0
extern "C" __declspec(naked) void asm_00b79cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_012105e4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_012105e4] }
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

extern "C" char g_012105e8[];
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b79d10
extern "C" __declspec(naked) void asm_00b79d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_012105e8] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_012105e8] }
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

extern "C" char g_0124eac8[];
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b79d60
extern "C" __declspec(naked) void asm_00b79d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eac8] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eac8] }
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

extern "C" char g_0124ead0[];
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b79db0
extern "C" __declspec(naked) void asm_00b79db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124ead0] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124ead0] }
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

extern "C" char g_0124eac4[];
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b79f10
extern "C" __declspec(naked) void asm_00b79f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eac4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eac4] }
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

extern "C" char g_0128e204[];
extern "C" void fn_006b9bc0();
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a1b0
extern "C" __declspec(naked) void asm_00b7a1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0128e204] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0128e204] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, eax }
	__asm { push esi }
	__asm { call fn_006b9bc0 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a35560 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34e50();
extern "C" void fn_00a35670();
extern "C" void fn_00a358d0();
// FUNCTION: ROBLOXSTUDIO 0x00b81780
extern "C" __declspec(naked) void asm_00b81780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xb81410 }
	__asm { push esi }
	__asm { call fn_00a35670 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a34e50 }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a358d0 }
	__asm { push 0xb81c20 }
	__asm { push esi }
	__asm { call fn_00a35670 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00a34e50 }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a358d0 }
	__asm { add esp, 0x38 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00467270();
extern "C" void fn_008d1cc0();
// FUNCTION: ROBLOXSTUDIO 0x00b86030
extern "C" __declspec(naked) void asm_00b86030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b118 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_008d1cc0 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00467270 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
// FUNCTION: ROBLOXSTUDIO 0x00b86af0
extern "C" __declspec(naked) void asm_00b86af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x38 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { lea ecx, [edx + 0x24234428] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { lea ecx, [edx - 0x7a143589] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { lea ecx, [edx + 0x61c8864f] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [eax + 0xc], edx }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { mov dword ptr [eax + 0x18], 0 }
	__asm { mov dword ptr [eax + 0x1c], 0 }
	__asm { mov dword ptr [eax + 0x30], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b8cc20
extern "C" __declspec(naked) void asm_00b8cc20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0xb8], eax }
	__asm { mov dword ptr [ecx + 0x94], 0 }
	__asm { mov dword ptr [ecx + 0x98], 0 }
	__asm { mov dword ptr [ecx + 0x9c], 0 }
	__asm { mov dword ptr [ecx + 0xbc], 0 }
	__asm { mov dword ptr [ecx + 0xa0], 0 }
	__asm { mov dword ptr [ecx + 0xa4], 0 }
	__asm { mov dword ptr [ecx + 0xc0], 0 }
	__asm { mov dword ptr [ecx + 0xa8], 0 }
	__asm { mov dword ptr [ecx + 0xac], 0 }
	__asm { mov dword ptr [ecx + 0xc4], 0 }
	__asm { mov dword ptr [ecx + 0xb0], 0 }
	__asm { mov dword ptr [ecx + 0xb4], 0 }
	__asm { mov dword ptr [ecx + 0xc8], 0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c9b0();
// FUNCTION: ROBLOXSTUDIO 0x00b8d050
extern "C" __declspec(naked) void asm_00b8d050()
{
	__asm { push esi }
	__asm { push 4 }
	__asm { mov esi, ecx }
	__asm { call fn_00b8c9b0 }
	__asm { mov dword ptr [esi], 0xed4a34 }
	__asm { mov dword ptr [esi + 0x1c], 0xed4a80 }
	__asm { mov dword ptr [esi + 0xcc], 0 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { mov dword ptr [esi + 0xdc], 0 }
	__asm { mov dword ptr [esi + 0xe0], 0 }
	__asm { mov dword ptr [esi + 0xe4], 0 }
	__asm { mov dword ptr [esi + 0xe8], 0 }
	__asm { mov dword ptr [esi + 0xec], 0 }
	__asm { mov dword ptr [esi + 0xf0], 0 }
	__asm { mov dword ptr [esi + 0xf4], 0 }
	__asm { mov dword ptr [esi + 0xf8], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b8d1f0
extern "C" __declspec(naked) void asm_00b8d1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { fld dword ptr [eax + 0x18] }
	__asm { fstp dword ptr [ecx + 0x18] }
	__asm { fld dword ptr [eax + 0x1c] }
	__asm { fstp dword ptr [ecx + 0x1c] }
	__asm { fld dword ptr [eax + 0x20] }
	__asm { fstp dword ptr [ecx + 0x20] }
	__asm { fld dword ptr [eax + 0x24] }
	__asm { fstp dword ptr [ecx + 0x24] }
	__asm { fld dword ptr [eax + 0x28] }
	__asm { fstp dword ptr [ecx + 0x28] }
	__asm { fld dword ptr [eax + 0x2c] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 0x2c] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00929e70();
// FUNCTION: ROBLOXSTUDIO 0x00b91800
extern "C" __declspec(naked) void asm_00b91800()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00929e70 }
	__asm { mov dword ptr [esi], 0xed5584 }
	__asm { mov dword ptr [esi + 4], 0xed562c }
	__asm { mov dword ptr [esi + 0x18], 0xed5634 }
	__asm { mov dword ptr [esi + 0x1c], 0xed5640 }
	__asm { mov dword ptr [esi + 0x64], 0xed5650 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x70], 0x42c80000 }
	__asm { mov dword ptr [esi + 0x74], 0x41c00000 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00923e00();
extern "C" void fn_00b92500();
extern "C" void fn_00b92880();
// FUNCTION: ROBLOXSTUDIO 0x00b923d0
extern "C" __declspec(naked) void asm_00b923d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [edi + 0x48] }
	__asm { mov byte ptr [edi + 0x54], 0 }
	__asm { call fn_00923e00 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b92500 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b92880 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ba0700
extern "C" __declspec(naked) void asm_00ba0700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { movsx edx, word ptr [esi + 2] }
	__asm { movsx eax, word ptr [esi] }
	__asm { mov edi, ecx }
	__asm { and edx, 0xff }
	__asm { and eax, 0xffff }
	__asm { shl edx, 0x10 }
	__asm { or edx, eax }
	__asm { mov dword ptr [edi + 0x94], edx }
	__asm { movsx ecx, word ptr [esi + 2] }
	__asm { movsx eax, word ptr [esi + 4] }
	__asm { and ecx, 0xff00 }
	__asm { shl ecx, 8 }
	__asm { and eax, 0xffff }
	__asm { or ecx, eax }
	__asm { mov dword ptr [edi + 0x98], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00410ef0();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b8c620();
extern "C" void fn_00ba4800();
// FUNCTION: ROBLOXSTUDIO 0x00ba4320
extern "C" __declspec(naked) void asm_00ba4320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { call fn_00ba4800 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c620 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bc6400();
extern "C" void fn_00bc6fc0();
// FUNCTION: ROBLOXSTUDIO 0x00bc6720
extern "C" __declspec(naked) void asm_00bc6720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov eax, ebx }
	__asm { push edi }
	__asm { shl eax, 4 }
	__asm { add eax, 0x18 }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6400 }
	__asm { mov edi, eax }
	__asm { push 6 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6fc0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x1c }
	__asm { mov byte ptr [edi + 7], bl }
	__asm { mov byte ptr [edi + 6], 1 }
	__asm { mov dword ptr [edi + 0xc], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc8800();
extern "C" void fn_00bccc70();
extern "C" void fn_00bcdd90();
extern "C" void fn_00c184d0();
extern "C" void fn_00c18e80();
// FUNCTION: ROBLOXSTUDIO 0x00bcde80
extern "C" __declspec(naked) void asm_00bcde80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00bc8800 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bcdd90 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bccc70 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00c18e80 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00c184d0 }
	__asm { add esp, 0x30 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048b580();
extern "C" void fn_0048b5a0();
extern "C" void fn_0048b5d0();
extern "C" void fn_00bd0a90();
// FUNCTION: ROBLOXSTUDIO 0x00bd2720
extern "C" __declspec(naked) void asm_00bd2720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5db08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { call fn_00bd0a90 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0048b580 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add ecx, 8 }
	__asm { call fn_0048b5d0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0048b5a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048b580();
extern "C" void fn_0048b5a0();
extern "C" void fn_0048b5d0();
extern "C" void fn_00bd0b00();
// FUNCTION: ROBLOXSTUDIO 0x00bd2790
extern "C" __declspec(naked) void asm_00bd2790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5db08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { call fn_00bd0b00 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0048b580 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add ecx, 8 }
	__asm { call fn_0048b5d0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0048b5a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048b580();
extern "C" void fn_0048b5a0();
extern "C" void fn_0048b5d0();
extern "C" void fn_00bd0b70();
// FUNCTION: ROBLOXSTUDIO 0x00bd2800
extern "C" __declspec(naked) void asm_00bd2800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5db08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { call fn_00bd0b70 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0048b580 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add ecx, 8 }
	__asm { call fn_0048b5d0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0048b5a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048b070();
extern "C" void fn_0048b580();
extern "C" void fn_0048b5a0();
extern "C" void fn_00bd0a90();
// FUNCTION: ROBLOXSTUDIO 0x00bd2b90
extern "C" __declspec(naked) void asm_00bd2b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5db08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { call fn_00bd0a90 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0048b580 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add ecx, 8 }
	__asm { call fn_0048b070 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0048b5a0 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048b070();
extern "C" void fn_0048b580();
extern "C" void fn_0048b5a0();
extern "C" void fn_00bd0b00();
// FUNCTION: ROBLOXSTUDIO 0x00bd2c00
extern "C" __declspec(naked) void asm_00bd2c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5db08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { call fn_00bd0b00 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0048b580 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add ecx, 8 }
	__asm { call fn_0048b070 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0048b5a0 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048b070();
extern "C" void fn_0048b580();
extern "C" void fn_0048b5a0();
extern "C" void fn_00bd0b70();
// FUNCTION: ROBLOXSTUDIO 0x00bd2c70
extern "C" __declspec(naked) void asm_00bd2c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5db08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { call fn_00bd0b70 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0048b580 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add ecx, 8 }
	__asm { call fn_0048b070 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0048b5a0 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048aba0();
extern "C" void fn_0048b580();
extern "C" void fn_0048b5a0();
extern "C" void fn_00bd0a90();
// FUNCTION: ROBLOXSTUDIO 0x00bd31f0
extern "C" __declspec(naked) void asm_00bd31f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5dbb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { call fn_00bd0a90 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0048b580 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add ecx, 8 }
	__asm { call fn_0048aba0 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0048b5a0 }
	__asm { mov al, byte ptr [ebp - 0xd] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048aba0();
extern "C" void fn_0048b580();
extern "C" void fn_0048b5a0();
extern "C" void fn_00bd0b00();
// FUNCTION: ROBLOXSTUDIO 0x00bd3260
extern "C" __declspec(naked) void asm_00bd3260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5dbb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { call fn_00bd0b00 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0048b580 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add ecx, 8 }
	__asm { call fn_0048aba0 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0048b5a0 }
	__asm { mov al, byte ptr [ebp - 0xd] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048aba0();
extern "C" void fn_0048b580();
extern "C" void fn_0048b5a0();
extern "C" void fn_00bd0b70();
// FUNCTION: ROBLOXSTUDIO 0x00bd32d0
extern "C" __declspec(naked) void asm_00bd32d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5dbb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { call fn_00bd0b70 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0048b580 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add ecx, 8 }
	__asm { call fn_0048aba0 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0048b5a0 }
	__asm { mov al, byte ptr [ebp - 0xd] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048aba0();
extern "C" void fn_0048b580();
extern "C" void fn_0048b5a0();
extern "C" void fn_00a4f320();
// FUNCTION: ROBLOXSTUDIO 0x00bd3340
extern "C" __declspec(naked) void asm_00bd3340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5dbb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { call fn_00a4f320 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0048b580 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add ecx, 8 }
	__asm { call fn_0048aba0 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0048b5a0 }
	__asm { mov al, byte ptr [ebp - 0xd] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048aba0();
extern "C" void fn_0048b580();
extern "C" void fn_0048b5a0();
extern "C" void fn_00a4f2b0();
// FUNCTION: ROBLOXSTUDIO 0x00bd5350
extern "C" __declspec(naked) void asm_00bd5350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5dbb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { call fn_00a4f2b0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0048b580 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add ecx, 8 }
	__asm { call fn_0048aba0 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0048b5a0 }
	__asm { mov al, byte ptr [ebp - 0xd] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006deb40();
// FUNCTION: ROBLOXSTUDIO 0x00befc50
extern "C" __declspec(naked) void asm_00befc50()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0xffffffff }
	__asm { call fn_006deb40 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { call fn_006deb40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { call fn_006deb40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x20], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006deb40();
// FUNCTION: ROBLOXSTUDIO 0x00bf3ae0
extern "C" __declspec(naked) void asm_00bf3ae0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 6 }
	__asm { mov dword ptr [esi + 8], 0xffffffff }
	__asm { call fn_006deb40 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0xc], edx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { call fn_006deb40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x1c], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e464ec[];
extern "C" char g_00ecaea4[];
extern "C" void fn_00c137f0();
// FUNCTION: ROBLOXSTUDIO 0x00c148d0
extern "C" __declspec(naked) void asm_00c148d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [g_00e464ec] }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { mov esi, ecx }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [g_00ecaea4] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c137f0 }
	__asm { mov dword ptr [esi], 0xeec700 }
	__asm { mov dword ptr [esi + 4], 0xeec73c }
	__asm { mov dword ptr [esi + 0xc], 0x3d4ccccd }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00bb5b90();
extern "C" void fn_00bba660();
// FUNCTION: ROBLOXSTUDIO 0x00c16700
extern "C" __declspec(naked) void asm_00c16700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61578 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00bb5b90 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeecd90 }
	__asm { mov dword ptr [esi + 4], 0xeecdcc }
	__asm { call fn_00bba660 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00bb5b90();
extern "C" void fn_00bba660();
// FUNCTION: ROBLOXSTUDIO 0x00c16760
extern "C" __declspec(naked) void asm_00c16760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61578 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00bb5b90 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeecd48 }
	__asm { mov dword ptr [esi + 4], 0xeecd84 }
	__asm { call fn_00bba660 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005aa650();
extern "C" void fn_006dce00();
extern "C" void fn_00898ee0();
// FUNCTION: ROBLOXSTUDIO 0x00c1b910
extern "C" __declspec(naked) void asm_00c1b910()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x94] }
	__asm { mov ecx, esi }
	__asm { call fn_00898ee0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xa4] }
	__asm { call fn_006dce00 }
	__asm { mov ecx, dword ptr [edi + 0x114] }
	__asm { push eax }
	__asm { call fn_005aa650 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00bb5b90();
// FUNCTION: ROBLOXSTUDIO 0x00c1d5d0
extern "C" __declspec(naked) void asm_00c1d5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bb5b90 }
	__asm { mov dword ptr [esi], 0xeee0e4 }
	__asm { mov dword ptr [esi + 4], 0xeee120 }
	__asm { mov dword ptr [esi + 0xb8], 0x450ca000 }
	__asm { mov dword ptr [esi + 0xbc], 0x42480000 }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov dword ptr [esi + 0xc4], 0 }
	__asm { mov dword ptr [esi + 0xc8], 0 }
	__asm { mov dword ptr [esi + 0xcc], 0xffffffff }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c36df0
extern "C" __declspec(naked) void asm_00c36df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { lea eax, [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c45f80
extern "C" __declspec(naked) void asm_00c45f80()
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

extern "C" void fn_00403540();
extern "C" void fn_00c49620();
// FUNCTION: ROBLOXSTUDIO 0x00c4f610
extern "C" __declspec(naked) void asm_00c4f610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx] }
	__asm { push edi }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov edi, ecx }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push edi }
	__asm { mov ecx, 0x13112b0 }
	__asm { call fn_00c49620 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c59d40
extern "C" __declspec(naked) void asm_00c59d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65a09 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov cl, byte ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [eax], cl }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c5d9d0();
// FUNCTION: ROBLOXSTUDIO 0x00c5e170
extern "C" __declspec(naked) void asm_00c5e170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { movzx eax, word ptr [edx] }
	__asm { sar ax, 5 }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { movzx eax, word ptr [edx + 2] }
	__asm { mov dx, word ptr [edx + 4] }
	__asm { sar ax, 4 }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { sar dx, 5 }
	__asm { push eax }
	__asm { mov word ptr [ebp - 4], dx }
	__asm { call fn_00c5d9d0 }
	__asm { mov byte ptr [eax + 8], 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012a3838[];
extern "C" char g_012a383c[];
extern "C" char g_012a3840[];
extern "C" void fn_00c5db10();
// FUNCTION: ROBLOXSTUDIO 0x00c5e1c0
extern "C" __declspec(naked) void asm_00c5e1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movsx edx, word ptr [eax] }
	__asm { movsx esi, word ptr [eax + 2] }
	__asm { movsx eax, word ptr [eax + 4] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [g_012a3838] }
	__asm { sar edx, cl }
	__asm { mov ecx, dword ptr [g_012a383c] }
	__asm { sar esi, cl }
	__asm { mov ecx, dword ptr [g_012a3840] }
	__asm { sar eax, cl }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00c5db10 }
	__asm { pop edi }
	__asm { mov byte ptr [eax + 0xc], 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1312c[];
extern "C" char g_00e13138[];
extern "C" void fn_00c68ab0();
// FUNCTION: ROBLOXSTUDIO 0x00c68850
extern "C" __declspec(naked) void asm_00c68850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov eax, 2 }
	__asm { mov word ptr [esi], ax }
	__asm { call fn_00c68ab0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e13138] }
	__asm { mov word ptr [esi + 2], ax }
	__asm { push eax }
	__asm { call dword ptr [g_00e1312c] }
	__asm { mov word ptr [esi + 0x10], ax }
	__asm { mov eax, 0xffff }
	__asm { mov word ptr [esi + 0x12], ax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, 2 }
	__asm { mov word ptr [ecx], ax }
	__asm { mov dword ptr [ecx + 0x10], 0xffff0000 }
	__asm { mov eax, ecx }
	__asm { ret }
}

extern "C" void fn_00c6d460();
extern "C" void fn_00c6d640();
// FUNCTION: ROBLOXSTUDIO 0x00c6def0
extern "C" __declspec(naked) void asm_00c6def0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c6d640 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c6d460 }
	__asm { mov ax, word ptr [ebp + 0xc] }
	__asm { mov word ptr [esi + 4], ax }
	__asm { add esi, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c6d640 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c6d460 }
	__asm { mov cx, word ptr [ebp + 0xc] }
	__asm { add esp, 0x20 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov word ptr [esi + 4], cx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b00f0();
extern "C" void fn_00c700c0();
// FUNCTION: ROBLOXSTUDIO 0x00c6f480
extern "C" __declspec(naked) void asm_00c6f480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd675f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_008b00f0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c700c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00c6f9e0
extern "C" __declspec(naked) void asm_00c6f9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67c09 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [esi], 0xef5c28 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c703b0();
// FUNCTION: ROBLOXSTUDIO 0x00c70260
extern "C" __declspec(naked) void asm_00c70260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { fld dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push edi }
	__asm { call fn_00c703b0 }
	__asm { fld dword ptr [esi + 4] }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [esp] }
	__asm { push edi }
	__asm { call fn_00c703b0 }
	__asm { fld dword ptr [esi + 8] }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [esp] }
	__asm { push edi }
	__asm { call fn_00c703b0 }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0044d3f0();
extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x00c74b20
extern "C" __declspec(naked) void asm_00c74b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0044d3f0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi + 0x30], ecx }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [edi + 0x34], ecx }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [edi + 0x38], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c75270
extern "C" __declspec(naked) void asm_00c75270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67560 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007d0280();
extern "C" void fn_007d5a20();
extern "C" void fn_00c6def0();
// FUNCTION: ROBLOXSTUDIO 0x00c765a0
extern "C" __declspec(naked) void asm_00c765a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { xor eax, eax }
	__asm { mov word ptr [ebp - 0xc], ax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00c6def0 }
	__asm { add esp, 8 }
	__asm { call fn_007d5a20 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_007d0280 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d0510();
extern "C" void fn_007d5be0();
extern "C" void fn_00c6db00();
// FUNCTION: ROBLOXSTUDIO 0x00c766b0
extern "C" __declspec(naked) void asm_00c766b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6db00 }
	__asm { add esp, 8 }
	__asm { call fn_007d5be0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_007d0510 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009c4620();
extern "C" void fn_00c700c0();
// FUNCTION: ROBLOXSTUDIO 0x00c796c0
extern "C" __declspec(naked) void asm_00c796c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd675f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_009c4620 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c700c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1031c[];
// FUNCTION: ROBLOXSTUDIO 0x00c7a690
extern "C" __declspec(naked) void asm_00c7a690()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi], 0xef9c5c }
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

extern "C" void fn_00a0a3e0();
// FUNCTION: ROBLOXSTUDIO 0x00c7aef0
extern "C" __declspec(naked) void asm_00c7aef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0x4000 }
	__asm { call fn_00a0a3e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b5cbf0();
extern "C" void fn_00ccfd60();
// FUNCTION: ROBLOXSTUDIO 0x00c7b010
extern "C" __declspec(naked) void asm_00c7b010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67858 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b5cbf0 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ccfd60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c7bf10();
// FUNCTION: ROBLOXSTUDIO 0x00c7c090
extern "C" __declspec(naked) void asm_00c7c090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 4 }
	__asm { push esi }
	__asm { push 0xef7230 }
	__asm { mov edi, ecx }
	__asm { call fn_00c7bf10 }
	__asm { mov dword ptr [edi], 0xef7214 }
	__asm { mov eax, dword ptr [esi + 0x21c0] }
	__asm { fld dword ptr [eax + 0x104] }
	__asm { fstp dword ptr [edi + 0x210] }
	__asm { mov eax, dword ptr [esi + 0x21c0] }
	__asm { mov eax, dword ptr [eax + 0xd8] }
	__asm { mov dword ptr [edi + 0x214], eax }
	__asm { mov dword ptr [edi + 0x218], 0 }
	__asm { mov byte ptr [edi + 0x8c], 1 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1052c[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00c7c200
extern "C" __declspec(naked) void asm_00c7c200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd67c09 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e1052c] }
	__asm { push -1 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [esi], 0xef66c4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b69050();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00c7c2e0
extern "C" __declspec(naked) void asm_00c7c2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x4028a0 }
	__asm { mov esi, ecx }
	__asm { push 0x80 }
	__asm { push 0x18 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b69050 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b69050();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00c7c320
extern "C" __declspec(naked) void asm_00c7c320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x4028a0 }
	__asm { mov esi, ecx }
	__asm { push 0x80 }
	__asm { push 0x1c }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b69050 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c86100();
extern "C" void fn_00c90a10();
// FUNCTION: ROBLOXSTUDIO 0x00c89b90
extern "C" __declspec(naked) void asm_00c89b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd695c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00c90a10 }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call fn_00c86100 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c86100();
extern "C" void fn_00c90a10();
// FUNCTION: ROBLOXSTUDIO 0x00c89e50
extern "C" __declspec(naked) void asm_00c89e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd695c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00c90a10 }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call fn_00c86100 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6cf00();
extern "C" void fn_00c90010();
extern "C" void fn_00cb4530();
// FUNCTION: ROBLOXSTUDIO 0x00c90870
extern "C" __declspec(naked) void asm_00c90870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { push dword ptr [edi] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x2014] }
	__asm { call fn_00cb4530 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { push dword ptr [ebx + 0x201c] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, ebx }
	__asm { push edi }
	__asm { push dword ptr [edi] }
	__asm { call fn_00c90010 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c86100();
extern "C" void fn_00c90a10();
// FUNCTION: ROBLOXSTUDIO 0x00c91510
extern "C" __declspec(naked) void asm_00c91510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd695c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00c90a10 }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call fn_00c86100 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c86100();
extern "C" void fn_00c90a10();
// FUNCTION: ROBLOXSTUDIO 0x00c91de0
extern "C" __declspec(naked) void asm_00c91de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd695c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00c90a10 }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x18] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call fn_00c86100 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c93a30();
extern "C" void fn_00c93cf0();
// FUNCTION: ROBLOXSTUDIO 0x00c93af0
extern "C" __declspec(naked) void asm_00c93af0()
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
	__asm { call fn_00c93a30 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { lea eax, [esi + 0x68] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xef9e4c }
	__asm { mov dword ptr [esi + 4], 0xef9ec4 }
	__asm { mov dword ptr [esi + 0x18], 0xef9ecc }
	__asm { mov dword ptr [esi + 0x1c], 0xef9ed8 }
	__asm { call fn_00c93cf0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c99b10();
// FUNCTION: ROBLOXSTUDIO 0x00c9c520
extern "C" __declspec(naked) void asm_00c9c520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { call fn_00c99b10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x20 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cb0700();
// FUNCTION: ROBLOXSTUDIO 0x00caf140
extern "C" __declspec(naked) void asm_00caf140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16a8b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [esi], edx }
	__asm { mov dword ptr [eax], 0 }
	__asm { push eax }
	__asm { push edx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cb0700 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cc02e0();
// FUNCTION: ROBLOXSTUDIO 0x00cbb0e0
extern "C" __declspec(naked) void asm_00cbb0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6be2b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { push 0x42 }
	__asm { push 0xeff248 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cc02e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cbf940();
// FUNCTION: ROBLOXSTUDIO 0x00cbf6d0
extern "C" __declspec(naked) void asm_00cbf6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 0x5a }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push 0xeff1f8 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { call fn_00cbf940 }
	__asm { add dword ptr [ebx], edi }
	__asm { adc dword ptr [ebx + 4], esi }
	__asm { add dword ptr [ebx + 8], edi }
	__asm { pop edi }
	__asm { adc dword ptr [ebx + 0xc], esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e36268[];
// FUNCTION: ROBLOXSTUDIO 0x00cc8170
extern "C" __declspec(naked) void asm_00cc8170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6c7b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { fld qword ptr [g_00e36268] }
	__asm { fstp qword ptr [ecx + 8] }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { fldz }
	__asm { mov byte ptr [ecx + 0x28], 1 }
	__asm { fst qword ptr [ecx + 0x18] }
	__asm { fstp qword ptr [ecx + 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c85480();
// FUNCTION: ROBLOXSTUDIO 0x00cc9410
extern "C" __declspec(naked) void asm_00cc9410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6c8ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov eax, dword ptr [ecx + 0x21c0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax + 0xd8] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { call fn_00c85480 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ccd6a0
extern "C" __declspec(naked) void asm_00ccd6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub eax, dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { cdq }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, dword ptr [ebp + 0x1c] }
	__asm { xor esi, edx }
	__asm { sub esi, edx }
	__asm { cdq }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub eax, dword ptr [ebp + 0x14] }
	__asm { xor ecx, edx }
	__asm { sub ecx, edx }
	__asm { cdq }
	__asm { xor eax, edx }
	__asm { sub eax, edx }
	__asm { cmp esi, eax }
	__asm { cmovg eax, esi }
	__asm { cmp ecx, eax }
	__asm { cmovg eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012afe34[];
extern "C" char g_012afe38[];
extern "C" char g_012afe3c[];
extern "C" void fn_00a08bf0();
// FUNCTION: ROBLOXSTUDIO 0x00cce070
extern "C" __declspec(naked) void asm_00cce070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00a08bf0 }
	__asm { mov ecx, dword ptr [g_012afe34] }
	__asm { mov edi, dword ptr [ebp - 0xc] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { sar edi, cl }
	__asm { mov ecx, dword ptr [g_012afe38] }
	__asm { sar esi, cl }
	__asm { mov ecx, dword ptr [g_012afe3c] }
	__asm { add esp, 8 }
	__asm { sar edx, cl }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c54a0();
extern "C" void fn_00cd7090();
// FUNCTION: ROBLOXSTUDIO 0x00cdfc40
extern "C" __declspec(naked) void asm_00cdfc40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6d8d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00cd7090 }
	__asm { mov dword ptr [esi], 0xf037a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0xa0], 0 }
	__asm { lea eax, [esi + 0xa8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006c54a0 }
	__asm { fldz }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { fstp qword ptr [esi + 0xb0] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf5470();
extern "C" void fn_00cf54d0();
// FUNCTION: ROBLOXSTUDIO 0x00cf3200
extern "C" __declspec(naked) void asm_00cf3200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { push 0x10 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi + 0x258], 1 }
	__asm { call fn_00cf54d0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [edi + 0x120] }
	__asm { push 0x10 }
	__asm { push 1 }
	__asm { push eax }
	__asm { call fn_00cf54d0 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x240] }
	__asm { push 1 }
	__asm { push eax }
	__asm { call fn_00cf5470 }
	__asm { add esp, 0x2c }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf67ec();
extern "C" void fn_00d01e90();
extern "C" void fn_00d01eb0();
// FUNCTION: ROBLOXSTUDIO 0x00d01ed0
extern "C" __declspec(naked) void asm_00d01ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e7c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x64 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_00d01eb0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x70] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00d01e90 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x70] }
	__asm { push 0x1178f70 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00d022b0
extern "C" __declspec(naked) void asm_00d022b0()
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
	__asm { mov dword ptr [edi], 0xf10de4 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [edi + 0x18], 0xe18224 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov dword ptr [edi + 0x28], 0xffffffff }
	__asm { mov dword ptr [edi], 0xf10df0 }
	__asm { mov dword ptr [edi + 0x18], 0xf10dfc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00d0bd80
extern "C" __declspec(naked) void asm_00d0bd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { mov byte ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov dword ptr [ecx], 0xf1210c }
	__asm { mov byte ptr [ecx + 0x24], 0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00d0c050
extern "C" __declspec(naked) void asm_00d0c050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { mov byte ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov dword ptr [ecx], 0xf12184 }
	__asm { mov byte ptr [ecx + 0x24], 0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0040ad90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d98950
extern "C" __declspec(naked) void asm_00d98950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x405630 }
	__asm { push 0 }
	__asm { push 0x403ae0 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { call fn_0040ad90 }
	__asm { push 0xddbdf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040afa0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d98a80
extern "C" __declspec(naked) void asm_00d98a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x405150 }
	__asm { push 0 }
	__asm { push 0x403ac0 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { call fn_0040afa0 }
	__asm { push 0xddbe70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040b180();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d98ad0
extern "C" __declspec(naked) void asm_00d98ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x405210 }
	__asm { push 0 }
	__asm { push 0x405200 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push ecx }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xf13268 }
	__asm { mov ecx, 0x131961c }
	__asm { call fn_0040b180 }
	__asm { push 0xddbe50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040b180();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d98b30
extern "C" __declspec(naked) void asm_00d98b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x405240 }
	__asm { push 0 }
	__asm { push 0x405230 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push ecx }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xf13278 }
	__asm { mov ecx, 0x1319648 }
	__asm { call fn_0040b180 }
	__asm { push 0xddbe30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040b180();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d98b90
extern "C" __declspec(naked) void asm_00d98b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x405270 }
	__asm { push 0 }
	__asm { push 0x405260 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push ecx }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xf1328c }
	__asm { mov ecx, 0x1319674 }
	__asm { call fn_0040b180 }
	__asm { push 0xddbe90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040aea0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d98bf0
extern "C" __declspec(naked) void asm_00d98bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x4052a0 }
	__asm { push 0 }
	__asm { push 0x405290 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xf132a8 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xf132b0 }
	__asm { mov ecx, 0x13196a0 }
	__asm { call fn_0040aea0 }
	__asm { push 0xddbeb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040b280();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d98cf0
extern "C" __declspec(naked) void asm_00d98cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x4052f0 }
	__asm { push 0 }
	__asm { push 0x403b20 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { call fn_0040b280 }
	__asm { push 0xddbf30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040aea0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d98d40
extern "C" __declspec(naked) void asm_00d98d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x405360 }
	__asm { push 0 }
	__asm { push 0x405350 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0xf132fc }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0xf1330c }
	__asm { mov ecx, 0x1319758 }
	__asm { call fn_0040aea0 }
	__asm { push 0xddbf10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493910();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a530
extern "C" __declspec(naked) void asm_00d9a530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x490a50 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { call fn_00493910 }
	__asm { push 0xddd190 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493ae0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a580
extern "C" __declspec(naked) void asm_00d9a580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x490a80 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { call fn_00493ae0 }
	__asm { push 0xddd170 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493cb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a5d0
extern "C" __declspec(naked) void asm_00d9a5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x490ae0 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { call fn_00493cb0 }
	__asm { push 0xddd150 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00494430();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a780
extern "C" __declspec(naked) void asm_00d9a780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x490ab0 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { call fn_00494430 }
	__asm { push 0xddd1d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493e80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a7d0
extern "C" __declspec(naked) void asm_00d9a7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x490b40 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x495670 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push 0x1013458 }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x10134b8 }
	__asm { mov ecx, 0x1319c48 }
	__asm { call fn_00493e80 }
	__asm { push 0xddd1b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00494600();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a830
extern "C" __declspec(naked) void asm_00d9a830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0x68 }
	__asm { push 0x4955ca }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { call fn_00494600 }
	__asm { push 0xddd250 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00493e80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a880
extern "C" __declspec(naked) void asm_00d9a880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push 0 }
	__asm { push 0x490b70 }
	__asm { sub esp, 0x10 }
	__asm { mov eax, esp }
	__asm { push 0x495650 }
	__asm { push 0x1013458 }
	__asm { push 0x10134dc }
	__asm { mov ecx, 0x1319ca0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x14 }
	__asm { call fn_00493e80 }
	__asm { push 0xddd230 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00494710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a8d0
extern "C" __declspec(naked) void asm_00d9a8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x490bd0 }
	__asm { push 0 }
	__asm { push 0x490bc0 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push ecx }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x10134e8 }
	__asm { mov ecx, 0x1319ccc }
	__asm { call fn_00494710 }
	__asm { push 0xddd290 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00494710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a930
extern "C" __declspec(naked) void asm_00d9a930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x490bf0 }
	__asm { push 0 }
	__asm { push 0x490be0 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push ecx }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x1013504 }
	__asm { mov ecx, 0x1319cf8 }
	__asm { call fn_00494710 }
	__asm { push 0xddd270 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00494710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a990
extern "C" __declspec(naked) void asm_00d9a990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x490c10 }
	__asm { push 0 }
	__asm { push 0x490c00 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push ecx }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x101351c }
	__asm { mov ecx, 0x1319d24 }
	__asm { call fn_00494710 }
	__asm { push 0xddd2b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00494810();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9a9f0
extern "C" __declspec(naked) void asm_00d9a9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x490a20 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { call fn_00494810 }
	__asm { push 0xddd330 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01319db0[];
extern "C" char g_01319dcc[];
extern "C" char g_01319dd8[];
extern "C" char g_01319ddc[];
extern "C" void fn_00493540();
extern "C" void fn_007d5390();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9aa40
extern "C" __declspec(naked) void asm_00d9aa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd7b81a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { mov byte ptr [esp + 4], 0 }
	__asm { push dword ptr [esp + 4] }
	__asm { sub esp, 8 }
	__asm { call fn_00493540 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov dword ptr [g_01319db0], 0x10139ac }
	__asm { mov dword ptr [g_01319dd8], 0x495630 }
	__asm { mov dword ptr [g_01319ddc], 0x68 }
	__asm { call fn_007d5390 }
	__asm { push 0xddd2d0 }
	__asm { mov dword ptr [g_01319dcc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004949e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9aac0
extern "C" __declspec(naked) void asm_00d9aac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x490ba0 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x495620 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push ecx }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x1013550 }
	__asm { mov ecx, 0x1319d84 }
	__asm { call fn_004949e0 }
	__asm { push 0xddd370 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004949e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00d9ab20
extern "C" __declspec(naked) void asm_00d9ab20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x10 }
	__asm { push 0 }
	__asm { push 0x490bb0 }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { push 0x495610 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { push ecx }
	__asm { mov dword ptr [ecx + 8], 0x1f }
	__asm { push 0x1013564 }
	__asm { mov ecx, 0x1319de0 }
	__asm { call fn_004949e0 }
	__asm { push 0xddd350 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0938[];
extern "C" char g_012e0954[];
extern "C" char g_012e0960[];
extern "C" char g_012e0964[];
extern "C" void fn_0078ac30();
extern "C" void fn_007d55c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da1370
extern "C" __declspec(naked) void asm_00da1370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ce8a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e0938 }
	__asm { push 1 }
	__asm { push 0xe502d8 }
	__asm { call fn_0078ac30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e0938], 0xe502c4 }
	__asm { mov dword ptr [g_012e0960], 0x78d680 }
	__asm { mov dword ptr [g_012e0964], 0 }
	__asm { call fn_007d55c0 }
	__asm { push 0xde1b60 }
	__asm { mov dword ptr [g_012e0954], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0908[];
extern "C" char g_012e0924[];
extern "C" char g_012e0930[];
extern "C" char g_012e0934[];
extern "C" void fn_0078ac30();
extern "C" void fn_007d55c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da13f0
extern "C" __declspec(naked) void asm_00da13f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ceaa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e0908 }
	__asm { push 1 }
	__asm { push 0xe502cc }
	__asm { call fn_0078ac30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e0908], 0xe502c4 }
	__asm { mov dword ptr [g_012e0930], 0x78d880 }
	__asm { mov dword ptr [g_012e0934], 0 }
	__asm { call fn_007d55c0 }
	__asm { push 0xde1bc0 }
	__asm { mov dword ptr [g_012e0924], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e08a8[];
extern "C" char g_012e08c4[];
extern "C" char g_012e08d0[];
extern "C" char g_012e08d4[];
extern "C" void fn_0078ac30();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da1470
extern "C" __declspec(naked) void asm_00da1470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ceca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e08a8 }
	__asm { push 1 }
	__asm { push 0x1018400 }
	__asm { call fn_0078ac30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e08a8], 0xe502a8 }
	__asm { mov dword ptr [g_012e08d0], 0x78ff70 }
	__asm { mov dword ptr [g_012e08d4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde1c20 }
	__asm { mov dword ptr [g_012e08c4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0878[];
extern "C" char g_012e0894[];
extern "C" char g_012e08a0[];
extern "C" char g_012e08a4[];
extern "C" void fn_0078ac30();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da14f0
extern "C" __declspec(naked) void asm_00da14f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ceea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e0878 }
	__asm { push 1 }
	__asm { push 0xe502b0 }
	__asm { call fn_0078ac30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e0878], 0xe502a8 }
	__asm { mov dword ptr [g_012e08a0], 0x791060 }
	__asm { mov dword ptr [g_012e08a4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde1c80 }
	__asm { mov dword ptr [g_012e0894], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e08d8[];
extern "C" char g_012e08f4[];
extern "C" char g_012e0900[];
extern "C" char g_012e0904[];
extern "C" void fn_0078ac30();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da15f0
extern "C" __declspec(naked) void asm_00da15f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1cf0a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e08d8 }
	__asm { push 1 }
	__asm { push 0xf13244 }
	__asm { call fn_0078ac30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e08d8], 0xe502a8 }
	__asm { mov dword ptr [g_012e0900], 0x7919f0 }
	__asm { mov dword ptr [g_012e0904], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde1e00 }
	__asm { mov dword ptr [g_012e08f4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e16d8[];
extern "C" char g_012e16f4[];
extern "C" char g_012e1700[];
extern "C" char g_012e1704[];
extern "C" void fn_0079df60();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da22d0
extern "C" __declspec(naked) void asm_00da22d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e62a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e16d8 }
	__asm { push 0 }
	__asm { push 0xe53194 }
	__asm { call fn_0079df60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e16d8], 0xe5318c }
	__asm { mov dword ptr [g_012e1700], 0x7a1e60 }
	__asm { mov dword ptr [g_012e1704], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde2770 }
	__asm { mov dword ptr [g_012e16f4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0f20[];
extern "C" char g_012e0f3c[];
extern "C" char g_012e0f48[];
extern "C" char g_012e0f4c[];
extern "C" void fn_0079de50();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2350
extern "C" __declspec(naked) void asm_00da2350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e64a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e0f20 }
	__asm { push 3 }
	__asm { push 0xe52cf8 }
	__asm { call fn_0079de50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e0f20], 0xe52cf0 }
	__asm { mov dword ptr [g_012e0f48], 0x7a2ff0 }
	__asm { mov dword ptr [g_012e0f4c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde27d0 }
	__asm { mov dword ptr [g_012e0f3c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1128[];
extern "C" char g_012e1144[];
extern "C" char g_012e1150[];
extern "C" char g_012e1154[];
extern "C" void fn_0079e070();
extern "C" void fn_007d5630();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da23d0
extern "C" __declspec(naked) void asm_00da23d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e66a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1128 }
	__asm { push 0 }
	__asm { push 0xe52e1c }
	__asm { call fn_0079e070 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1128], 0xe52e14 }
	__asm { mov dword ptr [g_012e1150], 0x7a3b90 }
	__asm { mov dword ptr [g_012e1154], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xde2830 }
	__asm { mov dword ptr [g_012e1144], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1068[];
extern "C" char g_012e1084[];
extern "C" char g_012e1090[];
extern "C" char g_012e1094[];
extern "C" void fn_0079de50();
extern "C" void fn_007d5630();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2450
extern "C" __declspec(naked) void asm_00da2450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e68a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1068 }
	__asm { push 0 }
	__asm { push 0xe52d90 }
	__asm { call fn_0079de50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1068], 0xe52d88 }
	__asm { mov dword ptr [g_012e1090], 0x7a3e10 }
	__asm { mov dword ptr [g_012e1094], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xde2890 }
	__asm { mov dword ptr [g_012e1084], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1358[];
extern "C" char g_012e1374[];
extern "C" char g_012e1380[];
extern "C" char g_012e1384[];
extern "C" void fn_0079e070();
extern "C" void fn_00824f80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da24d0
extern "C" __declspec(naked) void asm_00da24d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e6aa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1358 }
	__asm { push 0 }
	__asm { push 0xe52ee0 }
	__asm { call fn_0079e070 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1358], 0xe52ed8 }
	__asm { mov dword ptr [g_012e1380], 0x7a3fb0 }
	__asm { mov dword ptr [g_012e1384], 0 }
	__asm { call fn_00824f80 }
	__asm { push 0xde28f0 }
	__asm { mov dword ptr [g_012e1374], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e12b8[];
extern "C" char g_012e12d4[];
extern "C" char g_012e12e0[];
extern "C" char g_012e12e4[];
extern "C" void fn_0079e070();
extern "C" void fn_00825060();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2590
extern "C" __declspec(naked) void asm_00da2590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e6ca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e12b8 }
	__asm { push 0 }
	__asm { push 0xe52e98 }
	__asm { call fn_0079e070 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e12b8], 0xe52e90 }
	__asm { mov dword ptr [g_012e12e0], 0x7a4a60 }
	__asm { mov dword ptr [g_012e12e4], 0 }
	__asm { call fn_00825060 }
	__asm { push 0xde29c0 }
	__asm { mov dword ptr [g_012e12d4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1190[];
extern "C" char g_012e11ac[];
extern "C" char g_012e11b8[];
extern "C" char g_012e11bc[];
extern "C" void fn_0079e070();
extern "C" void fn_007d5630();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2690
extern "C" __declspec(naked) void asm_00da2690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e6ea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1190 }
	__asm { push 0 }
	__asm { push 0xe52e50 }
	__asm { call fn_0079e070 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1190], 0xe52e14 }
	__asm { mov dword ptr [g_012e11b8], 0x7a5330 }
	__asm { mov dword ptr [g_012e11bc], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xde2b60 }
	__asm { mov dword ptr [g_012e11ac], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0fa8[];
extern "C" char g_012e0fc4[];
extern "C" char g_012e0fd0[];
extern "C" char g_012e0fd4[];
extern "C" void fn_0079de50();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2710
extern "C" __declspec(naked) void asm_00da2710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e70a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e0fa8 }
	__asm { push 0 }
	__asm { push 0xe52d60 }
	__asm { call fn_0079de50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e0fa8], 0xe52cf0 }
	__asm { mov dword ptr [g_012e0fd0], 0x7a9b70 }
	__asm { mov dword ptr [g_012e0fd4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde2bc0 }
	__asm { mov dword ptr [g_012e0fc4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e11f8[];
extern "C" char g_012e1214[];
extern "C" char g_012e1220[];
extern "C" char g_012e1224[];
extern "C" void fn_0079e070();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2790
extern "C" __declspec(naked) void asm_00da2790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e72a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e11f8 }
	__asm { push 0 }
	__asm { push 0xe52d60 }
	__asm { call fn_0079e070 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e11f8], 0xe52e84 }
	__asm { mov dword ptr [g_012e1220], 0x7a9e10 }
	__asm { mov dword ptr [g_012e1224], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde2c20 }
	__asm { mov dword ptr [g_012e1214], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079d710();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2850
extern "C" __declspec(naked) void asm_00da2850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1408 }
	__asm { push 0 }
	__asm { push 0x1024d64 }
	__asm { push 0x1016eb0 }
	__asm { push 0xe52f1c }
	__asm { push 0 }
	__asm { push 0x7aa950 }
	__asm { call fn_0079d710 }
	__asm { push 0xde2cf0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079d7c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da28a0
extern "C" __declspec(naked) void asm_00da28a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1388 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe52eb0 }
	__asm { push 0x1024d64 }
	__asm { push 0x1016eb0 }
	__asm { push 0xe52ef8 }
	__asm { push 0 }
	__asm { push 0x7aab10 }
	__asm { call fn_0079d7c0 }
	__asm { push 0xde2d00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0079d7c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da28f0
extern "C" __declspec(naked) void asm_00da28f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e13c8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe52eb0 }
	__asm { push 0x1024d64 }
	__asm { push 0x1016eb0 }
	__asm { push 0xe52f04 }
	__asm { push 0 }
	__asm { push 0x7ab8c0 }
	__asm { call fn_0079d7c0 }
	__asm { push 0xde2d10 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1008[];
extern "C" char g_012e1024[];
extern "C" char g_012e1030[];
extern "C" char g_012e1034[];
extern "C" void fn_0079de50();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2940
extern "C" __declspec(naked) void asm_00da2940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e74a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1008 }
	__asm { push 0 }
	__asm { push 0xe52d74 }
	__asm { call fn_0079de50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1008], 0xe52cf0 }
	__asm { mov dword ptr [g_012e1030], 0x7abca0 }
	__asm { mov dword ptr [g_012e1034], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde2d20 }
	__asm { mov dword ptr [g_012e1024], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1258[];
extern "C" char g_012e1274[];
extern "C" char g_012e1280[];
extern "C" char g_012e1284[];
extern "C" void fn_0079e070();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da29c0
extern "C" __declspec(naked) void asm_00da29c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e76a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1258 }
	__asm { push 0 }
	__asm { push 0xe52d74 }
	__asm { call fn_0079e070 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1258], 0xe52e84 }
	__asm { mov dword ptr [g_012e1280], 0x7abd40 }
	__asm { mov dword ptr [g_012e1284], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde2d80 }
	__asm { mov dword ptr [g_012e1274], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1038[];
extern "C" char g_012e1054[];
extern "C" char g_012e1060[];
extern "C" char g_012e1064[];
extern "C" void fn_0079de50();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2a40
extern "C" __declspec(naked) void asm_00da2a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e78a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1038 }
	__asm { push 0 }
	__asm { push 0xe52d7c }
	__asm { call fn_0079de50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1038], 0xe52cf0 }
	__asm { mov dword ptr [g_012e1060], 0x7abdf0 }
	__asm { mov dword ptr [g_012e1064], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde2de0 }
	__asm { mov dword ptr [g_012e1054], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1288[];
extern "C" char g_012e12a4[];
extern "C" char g_012e12b0[];
extern "C" char g_012e12b4[];
extern "C" void fn_0079e070();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2ac0
extern "C" __declspec(naked) void asm_00da2ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e7aa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1288 }
	__asm { push 0 }
	__asm { push 0xe52d7c }
	__asm { call fn_0079e070 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1288], 0xe52e84 }
	__asm { mov dword ptr [g_012e12b0], 0x7abe90 }
	__asm { mov dword ptr [g_012e12b4], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde2e40 }
	__asm { mov dword ptr [g_012e12a4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0fd8[];
extern "C" char g_012e0ff4[];
extern "C" char g_012e1000[];
extern "C" char g_012e1004[];
extern "C" void fn_0079de50();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da2b40
extern "C" __declspec(naked) void asm_00da2b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e7ca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e0fd8 }
	__asm { push 0 }
	__asm { push 0xe52d68 }
	__asm { call fn_0079de50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e0fd8], 0xe52cf0 }
	__asm { mov dword ptr [g_012e1000], 0x7abf50 }
	__asm { mov dword ptr [g_012e1004], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde2ea0 }
	__asm { mov dword ptr [g_012e0ff4], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00794940();
extern "C" void fn_007ae920();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da31e0
extern "C" __declspec(naked) void asm_00da31e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x15 }
	__asm { push 0x12e1c70 }
	__asm { push eax }
	__asm { call fn_00794940 }
	__asm { add esp, 0xc }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x12e1ca8 }
	__asm { push dword ptr [eax] }
	__asm { push 0 }
	__asm { push 0xe55288 }
	__asm { push 0xe552a4 }
	__asm { push 0 }
	__asm { push 0x7b3ec0 }
	__asm { call fn_007ae920 }
	__asm { push 0xde3320 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007ae730();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da33b0
extern "C" __declspec(naked) void asm_00da33b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e19f0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe551bc }
	__asm { push 0x1016eb0 }
	__asm { push 0xe551c8 }
	__asm { push 0 }
	__asm { push 0x68b030 }
	__asm { call fn_007ae730 }
	__asm { push 0xde3700 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007ae730();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3400
extern "C" __declspec(naked) void asm_00da3400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x12e1a28 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xe551bc }
	__asm { push 0x1016eb0 }
	__asm { push 0xe551d8 }
	__asm { push 0 }
	__asm { push 0x68b030 }
	__asm { call fn_007ae730 }
	__asm { push 0xde37c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1b50[];
extern "C" char g_012e1b6c[];
extern "C" char g_012e1b78[];
extern "C" char g_012e1b7c[];
extern "C" void fn_007aef60();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3450
extern "C" __declspec(naked) void asm_00da3450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f8ba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1b50 }
	__asm { push 0 }
	__asm { push 0xe55224 }
	__asm { call fn_007aef60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1b50], 0xe55208 }
	__asm { mov dword ptr [g_012e1b78], 0x53f649 }
	__asm { mov dword ptr [g_012e1b7c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde3880 }
	__asm { mov dword ptr [g_012e1b6c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1c40[];
extern "C" char g_012e1c5c[];
extern "C" char g_012e1c68[];
extern "C" char g_012e1c6c[];
extern "C" void fn_007aef60();
extern "C" void fn_007d5550();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da34d0
extern "C" __declspec(naked) void asm_00da34d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f8da }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1c40 }
	__asm { push 0 }
	__asm { push 0xe55270 }
	__asm { call fn_007aef60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1c40], 0xe55268 }
	__asm { mov dword ptr [g_012e1c68], 0x7b3b00 }
	__asm { mov dword ptr [g_012e1c6c], 0 }
	__asm { call fn_007d5550 }
	__asm { push 0xde38e0 }
	__asm { mov dword ptr [g_012e1c5c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1ac0[];
extern "C" char g_012e1adc[];
extern "C" char g_012e1ae8[];
extern "C" char g_012e1aec[];
extern "C" void fn_007aef60();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3590
extern "C" __declspec(naked) void asm_00da3590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f8fa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1ac0 }
	__asm { push 0 }
	__asm { push 0x102305c }
	__asm { call fn_007aef60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1ac0], 0xe55208 }
	__asm { mov dword ptr [g_012e1ae8], 0x7b5450 }
	__asm { mov dword ptr [g_012e1aec], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde39b0 }
	__asm { mov dword ptr [g_012e1adc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1b20[];
extern "C" char g_012e1b3c[];
extern "C" char g_012e1b48[];
extern "C" char g_012e1b4c[];
extern "C" void fn_007aef60();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3610
extern "C" __declspec(naked) void asm_00da3610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f91a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1b20 }
	__asm { push 0 }
	__asm { push 0xe55210 }
	__asm { call fn_007aef60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1b20], 0xe55208 }
	__asm { mov dword ptr [g_012e1b48], 0x7b5500 }
	__asm { mov dword ptr [g_012e1b4c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde3a10 }
	__asm { mov dword ptr [g_012e1b3c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1af0[];
extern "C" char g_012e1b0c[];
extern "C" char g_012e1b18[];
extern "C" char g_012e1b1c[];
extern "C" void fn_007aef60();
extern "C" void fn_00825140();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3690
extern "C" __declspec(naked) void asm_00da3690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f93a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1af0 }
	__asm { push 0 }
	__asm { push 0x1030798 }
	__asm { call fn_007aef60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1af0], 0xe55208 }
	__asm { mov dword ptr [g_012e1b18], 0x7b5450 }
	__asm { mov dword ptr [g_012e1b1c], 0 }
	__asm { call fn_00825140 }
	__asm { push 0xde3a70 }
	__asm { mov dword ptr [g_012e1b0c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1c10[];
extern "C" char g_012e1c2c[];
extern "C" char g_012e1c38[];
extern "C" char g_012e1c3c[];
extern "C" void fn_007aef60();
extern "C" void fn_007d5630();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3750
extern "C" __declspec(naked) void asm_00da3750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f95a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1c10 }
	__asm { push 0 }
	__asm { push 0xe55258 }
	__asm { call fn_007aef60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1c10], 0xe55238 }
	__asm { mov dword ptr [g_012e1c38], 0x7b39a0 }
	__asm { mov dword ptr [g_012e1c3c], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xde3b80 }
	__asm { mov dword ptr [g_012e1c2c], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1be0[];
extern "C" char g_012e1bfc[];
extern "C" char g_012e1c08[];
extern "C" char g_012e1c0c[];
extern "C" void fn_007aef60();
extern "C" void fn_007d5630();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da37d0
extern "C" __declspec(naked) void asm_00da37d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f97a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1be0 }
	__asm { push 0 }
	__asm { push 0xe5524c }
	__asm { call fn_007aef60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1be0], 0xe55238 }
	__asm { mov dword ptr [g_012e1c08], 0x7b39a0 }
	__asm { mov dword ptr [g_012e1c0c], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xde3be0 }
	__asm { mov dword ptr [g_012e1bfc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1bb0[];
extern "C" char g_012e1bcc[];
extern "C" char g_012e1bd8[];
extern "C" char g_012e1bdc[];
extern "C" void fn_007aef60();
extern "C" void fn_007d5630();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00da3850
extern "C" __declspec(naked) void asm_00da3850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f99a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x12e1bb0 }
	__asm { push 0 }
	__asm { push 0xe55240 }
	__asm { call fn_007aef60 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_012e1bb0], 0xe55238 }
	__asm { mov dword ptr [g_012e1bd8], 0x7b39a0 }
	__asm { mov dword ptr [g_012e1bdc], 0 }
	__asm { call fn_007d5630 }
	__asm { push 0xde3c40 }
	__asm { mov dword ptr [g_012e1bcc], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
