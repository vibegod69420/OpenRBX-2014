// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00ac2490
extern "C" __declspec(naked) void asm_00ac2490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
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

// FUNCTION: ROBLOXSTUDIO 0x00af1250
extern "C" __declspec(naked) void asm_00af1250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [edx] }
	__asm { mov ecx, dword ptr [edi + 0x100] }
	__asm { mov esi, dword ptr [ecx] }
	__asm { call dword ptr [esi + 0x44] }
	__asm { mov eax, dword ptr [edi + eax*4 + 0x120] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00af5870();
// FUNCTION: ROBLOXSTUDIO 0x00afb9a0
extern "C" __declspec(naked) void asm_00afb9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 8] }
	__asm { add ecx, 0x10 }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 8 }
	__asm { call fn_00af5870 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b11680
extern "C" __declspec(naked) void asm_00b11680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd54df9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" void fn_00b18f50();
// FUNCTION: ROBLOXSTUDIO 0x00b1a2b0
extern "C" __declspec(naked) void asm_00b1a2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { add ecx, 0x90 }
	__asm { call fn_00b18f50 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b1ac10();
// FUNCTION: ROBLOXSTUDIO 0x00b1acd0
extern "C" __declspec(naked) void asm_00b1acd0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b1ac10 }
	__asm { mov dword ptr [esi], 0xec5754 }
	__asm { mov dword ptr [esi + 4], 0xec5804 }
	__asm { mov dword ptr [esi + 0x18], 0xec580c }
	__asm { mov dword ptr [esi + 0x1c], 0xec5818 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b20b20
extern "C" __declspec(naked) void asm_00b20b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { mov eax, ecx }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { add ecx, dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b20660();
// FUNCTION: ROBLOXSTUDIO 0x00b20ba0
extern "C" __declspec(naked) void asm_00b20ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { sub esp, 0xc }
	__asm { add ecx, 0x10 }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b20660 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e39be4[];
extern "C" void fn_00b5e910();
// FUNCTION: ROBLOXSTUDIO 0x00b59570
extern "C" __declspec(naked) void asm_00b59570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x44] }
	__asm { call eax }
	__asm { fmul dword ptr [g_00e39be4] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b5e910 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b59cb0
extern "C" __declspec(naked) void asm_00b59cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b61bb0();
// FUNCTION: ROBLOXSTUDIO 0x00b61b80
extern "C" __declspec(naked) void asm_00b61b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 4] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b61bb0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_006dea00();
// FUNCTION: ROBLOXSTUDIO 0x00b61e50
extern "C" __declspec(naked) void asm_00b61e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_006dea00 }
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

// FUNCTION: ROBLOXSTUDIO 0x00b68aa0
extern "C" __declspec(naked) void asm_00b68aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { fld dword ptr [ebp + 0x1c] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [eax + 0x58] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b68ad0
extern "C" __declspec(naked) void asm_00b68ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { fld dword ptr [ebp + 0x1c] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [eax + 0x54] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b68b00
extern "C" __declspec(naked) void asm_00b68b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { fld dword ptr [ebp + 0x1c] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [eax + 0x50] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b6a470
extern "C" __declspec(naked) void asm_00b6a470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 0x24] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b6c690
extern "C" __declspec(naked) void asm_00b6c690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a34ef0();
extern "C" void fn_00a35650();
// FUNCTION: ROBLOXSTUDIO 0x00b6e380
extern "C" __declspec(naked) void asm_00b6e380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push 3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a34ef0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a35650 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a39240();
extern "C" void fn_00b6ecf0();
// FUNCTION: ROBLOXSTUDIO 0x00b6f170
extern "C" __declspec(naked) void asm_00b6f170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b6ecf0 }
	__asm { push 0xed0ef0 }
	__asm { push 0x1030660 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a39240 }
	__asm { add esp, 0x10 }
	__asm { mov eax, 2 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a39240();
extern "C" void fn_00b70830();
// FUNCTION: ROBLOXSTUDIO 0x00b70a80
extern "C" __declspec(naked) void asm_00b70a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0xed1330 }
	__asm { push 0x1004ea0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a39240 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b70830 }
	__asm { add esp, 0x10 }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
// FUNCTION: ROBLOXSTUDIO 0x00b71730
extern "C" __declspec(naked) void asm_00b71730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { fabs }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ed1788[];
extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
// FUNCTION: ROBLOXSTUDIO 0x00b71b70
extern "C" __declspec(naked) void asm_00b71b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { fmul qword ptr [g_00ed1788] }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ed1780[];
extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
// FUNCTION: ROBLOXSTUDIO 0x00b71ba0
extern "C" __declspec(naked) void asm_00b71ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { fmul qword ptr [g_00ed1780] }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b77560();
// FUNCTION: ROBLOXSTUDIO 0x00b77530
extern "C" __declspec(naked) void asm_00b77530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b77560 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead4[];
extern "C" void fn_00a389c0();
extern "C" void fn_00cda1a0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a400
extern "C" __declspec(naked) void asm_00b7a400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124ead4] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { mov ecx, eax }
	__asm { call fn_00cda1a0 }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb1c[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a4b0
extern "C" __declspec(naked) void asm_00b7a4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb1c] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov ecx, eax }
	__asm { push 0 }
	__asm { call dword ptr [edx] }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc74[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b7c170();
// FUNCTION: ROBLOXSTUDIO 0x00b7a550
extern "C" __declspec(naked) void asm_00b7a550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0128dc74] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b7c170 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc78[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b7c190();
// FUNCTION: ROBLOXSTUDIO 0x00b7a580
extern "C" __declspec(naked) void asm_00b7a580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0128dc78] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b7c190 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc7c[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b7c1c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a5b0
extern "C" __declspec(naked) void asm_00b7a5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0128dc7c] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b7c1c0 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128e200[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b84780();
// FUNCTION: ROBLOXSTUDIO 0x00b7a5e0
extern "C" __declspec(naked) void asm_00b7a5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0128e200] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b84780 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012105e0[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b850a0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a610
extern "C" __declspec(naked) void asm_00b7a610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_012105e0] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b850a0 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012105e4[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b850c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a640
extern "C" __declspec(naked) void asm_00b7a640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_012105e4] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b850c0 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012105e8[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b850e0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a670
extern "C" __declspec(naked) void asm_00b7a670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_012105e8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b850e0 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128d3b4[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b78f30();
// FUNCTION: ROBLOXSTUDIO 0x00b7a6a0
extern "C" __declspec(naked) void asm_00b7a6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0128d3b4] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b78f30 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128e204[];
extern "C" void fn_00a389c0();
extern "C" void fn_00b85100();
// FUNCTION: ROBLOXSTUDIO 0x00b7ae60
extern "C" __declspec(naked) void asm_00b7ae60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0128e204] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00b85100 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008dfc50();
extern "C" void fn_00a35b70();
// FUNCTION: ROBLOXSTUDIO 0x00b7be30
extern "C" __declspec(naked) void asm_00b7be30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x130ef42 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008dfc50 }
	__asm { push 0x1032e7c }
	__asm { push 0xffffd8ee }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a35b70 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b7c0e0
extern "C" __declspec(naked) void asm_00b7c0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xed222c }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b7c110
extern "C" __declspec(naked) void asm_00b7c110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xed2314 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b7c140
extern "C" __declspec(naked) void asm_00b7c140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xed232c }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00b82f90
extern "C" __declspec(naked) void asm_00b82f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_0128e204[];
extern "C" void fn_006b9e50();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b84270
extern "C" __declspec(naked) void asm_00b84270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0128e204] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { mov ecx, eax }
	__asm { call fn_006b9e50 }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b84ec0
extern "C" __declspec(naked) void asm_00b84ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_00b86a40();
// FUNCTION: ROBLOXSTUDIO 0x00b86b40
extern "C" __declspec(naked) void asm_00b86b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b86a40 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b871a0();
// FUNCTION: ROBLOXSTUDIO 0x00b8a470
extern "C" __declspec(naked) void asm_00b8a470()
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
	__asm { call fn_00b871a0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d1e60();
extern "C" void fn_00af1170();
// FUNCTION: ROBLOXSTUDIO 0x00b8eaa0
extern "C" __declspec(naked) void asm_00b8eaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push 2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00af1170 }
	__asm { mov ecx, eax }
	__asm { call fn_006d1e60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b91de0
extern "C" __declspec(naked) void asm_00b91de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b92500();
extern "C" void fn_00b92870();
// FUNCTION: ROBLOXSTUDIO 0x00b923a0
extern "C" __declspec(naked) void asm_00b923a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { movzx eax, byte ptr [edi + 0x54] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b92500 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00b92870 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b92830
extern "C" __declspec(naked) void asm_00b92830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x40] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0x90] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d1420();
// FUNCTION: ROBLOXSTUDIO 0x00b97670
extern "C" __declspec(naked) void asm_00b97670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_006d1420 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d12a0();
// FUNCTION: ROBLOXSTUDIO 0x00b976a0
extern "C" __declspec(naked) void asm_00b976a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_006d12a0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c2b0();
extern "C" void fn_00c10600();
// FUNCTION: ROBLOXSTUDIO 0x00ba1840
extern "C" __declspec(naked) void asm_00ba1840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c2b0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { call fn_00c10600 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c530();
extern "C" void fn_00c107e0();
// FUNCTION: ROBLOXSTUDIO 0x00ba1860
extern "C" __declspec(naked) void asm_00ba1860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { call fn_00c107e0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c530 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c360();
extern "C" void fn_00c120d0();
// FUNCTION: ROBLOXSTUDIO 0x00ba3dc0
extern "C" __declspec(naked) void asm_00ba3dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c360 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00c120d0 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c2b0();
extern "C" void fn_00c120d0();
// FUNCTION: ROBLOXSTUDIO 0x00ba3e00
extern "C" __declspec(naked) void asm_00ba3e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c2b0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00c120d0 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c360();
extern "C" void fn_00ba47e0();
// FUNCTION: ROBLOXSTUDIO 0x00ba4300
extern "C" __declspec(naked) void asm_00ba4300()
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
	__asm { call fn_00ba47e0 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c360();
extern "C" void fn_00c12890();
// FUNCTION: ROBLOXSTUDIO 0x00ba47e0
extern "C" __declspec(naked) void asm_00ba47e0()
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
	__asm { call fn_00c12890 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c620();
extern "C" void fn_00c128d0();
// FUNCTION: ROBLOXSTUDIO 0x00ba4800
extern "C" __declspec(naked) void asm_00ba4800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { call fn_00c128d0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}
