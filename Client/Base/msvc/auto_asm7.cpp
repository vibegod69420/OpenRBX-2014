// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00b0c520
extern "C" __declspec(naked) void asm_00b0c520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0x80] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b0de60
extern "C" __declspec(naked) void asm_00b0de60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [edx + 0x14] }
	__asm { add ecx, dword ptr [edx + 0x18] }
	__asm { lea eax, [edx + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008935b0();
// FUNCTION: ROBLOXSTUDIO 0x00b108b0
extern "C" __declspec(naked) void asm_00b108b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008935b0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b14c70
extern "C" __declspec(naked) void asm_00b14c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x90], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x94], eax }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b17250();
// FUNCTION: ROBLOXSTUDIO 0x00b173a0
extern "C" __declspec(naked) void asm_00b173a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b17250 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b97e0();
// FUNCTION: ROBLOXSTUDIO 0x00b1a2e0
extern "C" __declspec(naked) void asm_00b1a2e0()
{
	__asm { push 0 }
	__asm { add ecx, 0xac }
	__asm { call fn_006b97e0 }
	__asm { ret }
}

extern "C" void fn_00b1bb50();
// FUNCTION: ROBLOXSTUDIO 0x00b1bac0
extern "C" __declspec(naked) void asm_00b1bac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fld qword ptr [eax + 8] }
	__asm { add ecx, -0x64 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00b1bb50 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b1bb50();
// FUNCTION: ROBLOXSTUDIO 0x00b1bb30
extern "C" __declspec(naked) void asm_00b1bb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fld qword ptr [eax + 8] }
	__asm { add ecx, -0x6c }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00b1bb50 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b1c3f0
extern "C" __declspec(naked) void asm_00b1c3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0x290] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b23a40();
// FUNCTION: ROBLOXSTUDIO 0x00b1e040
extern "C" __declspec(naked) void asm_00b1e040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x64] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b23a40 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b205e0();
// FUNCTION: ROBLOXSTUDIO 0x00b20b50
extern "C" __declspec(naked) void asm_00b20b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { add ecx, 0x10 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b205e0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b38c90();
// FUNCTION: ROBLOXSTUDIO 0x00b38eb0
extern "C" __declspec(naked) void asm_00b38eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b38c90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b390f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b39910
extern "C" __declspec(naked) void asm_00b39910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00b390f0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038100[];
// FUNCTION: ROBLOXSTUDIO 0x00b492e0
extern "C" __declspec(naked) void asm_00b492e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [g_01038100] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b4ba50
extern "C" __declspec(naked) void asm_00b4ba50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + eax*4 + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x104] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b4a3a0();
extern "C" void fn_00b50cb0();
// FUNCTION: ROBLOXSTUDIO 0x00b4e320
extern "C" __declspec(naked) void asm_00b4e320()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [esi + 0xd4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x74] }
	__asm { call fn_00b4a3a0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_00b50cb0 }
}

extern "C" char g_0130ebe4[];
// FUNCTION: ROBLOXSTUDIO 0x00b4ec80
extern "C" __declspec(naked) void asm_00b4ec80()
{
	__asm { xor eax, eax }
	__asm { cmp byte ptr [g_0130ebe4], al }
	__asm { sete al }
	__asm { lea eax, [eax*4 + 4] }
	__asm { ret }
}

extern "C" void fn_00b50490();
// FUNCTION: ROBLOXSTUDIO 0x00b505f0
extern "C" __declspec(naked) void asm_00b505f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b50490 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00b534f0
extern "C" __declspec(naked) void asm_00b534f0()
{
	__asm { mov ecx, dword ptr [ecx + 0x24] }
	__asm { mov eax, dword ptr [ecx + 0xa4] }
	__asm { add eax, dword ptr [ecx + 0x94] }
	__asm { add eax, dword ptr [ecx + 0x84] }
	__asm { add eax, dword ptr [ecx + 0x74] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b53520
extern "C" __declspec(naked) void asm_00b53520()
{
	__asm { mov eax, dword ptr [ecx + 0x24] }
	__asm { mov eax, dword ptr [eax + 0xa4] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b53560
extern "C" __declspec(naked) void asm_00b53560()
{
	__asm { mov eax, dword ptr [ecx + 0x24] }
	__asm { mov eax, dword ptr [eax + 0x94] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b535a0
extern "C" __declspec(naked) void asm_00b535a0()
{
	__asm { mov eax, dword ptr [ecx + 0x24] }
	__asm { mov eax, dword ptr [eax + 0x84] }
	__asm { ret }
}

extern "C" void fn_00baa1e0();
// FUNCTION: ROBLOXSTUDIO 0x00b59fd0
extern "C" __declspec(naked) void asm_00b59fd0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00baa1e0 }
	__asm { mov dword ptr [esi], 0xecd80c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00595fa0();
// FUNCTION: ROBLOXSTUDIO 0x00b5a020
extern "C" __declspec(naked) void asm_00b5a020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [eax + 8] }
	__asm { pop ebp }
	__asm { jmp fn_00595fa0 }
}

extern "C" void fn_00af1070();
// FUNCTION: ROBLOXSTUDIO 0x00b5b670
extern "C" __declspec(naked) void asm_00b5b670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00af1070 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b5ab00();
// FUNCTION: ROBLOXSTUDIO 0x00b5bfe0
extern "C" __declspec(naked) void asm_00b5bfe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp - 4] }
	__asm { push 0xb5bef0 }
	__asm { call fn_00b5ab00 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b5ab00();
// FUNCTION: ROBLOXSTUDIO 0x00b5c000
extern "C" __declspec(naked) void asm_00b5c000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { push 0xb5bef0 }
	__asm { call fn_00b5ab00 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b5c020
extern "C" __declspec(naked) void asm_00b5c020()
{
	__asm { mov byte ptr [ecx + 0x74], 1 }
	__asm { ret }
}

extern "C" void fn_00c03680();
// FUNCTION: ROBLOXSTUDIO 0x00b5c0b0
extern "C" __declspec(naked) void asm_00b5c0b0()
{
	__asm { mov ecx, dword ptr [ecx + 0x3c] }
	__asm { jmp fn_00c03680 }
}

extern "C" void fn_00c03730();
// FUNCTION: ROBLOXSTUDIO 0x00b5c470
extern "C" __declspec(naked) void asm_00b5c470()
{
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x3c] }
	__asm { call fn_00c03730 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b60880
extern "C" __declspec(naked) void asm_00b60880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + eax*4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b60890
extern "C" __declspec(naked) void asm_00b60890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [eax + eax*8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea eax, [eax + edx*4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_006d6760();
// FUNCTION: ROBLOXSTUDIO 0x00b61e90
extern "C" __declspec(naked) void asm_00b61e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_006d6760 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a206d0();
// FUNCTION: ROBLOXSTUDIO 0x00b620e0
extern "C" __declspec(naked) void asm_00b620e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edx + eax*4] }
	__asm { call fn_00a206d0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b655f0
extern "C" __declspec(naked) void asm_00b655f0()
{
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { sub eax, dword ptr [ecx] }
	__asm { sar eax, 2 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b6a4a0
extern "C" __declspec(naked) void asm_00b6a4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x28] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b6a4c0
extern "C" __declspec(naked) void asm_00b6a4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b6aa00();
// FUNCTION: ROBLOXSTUDIO 0x00b6be80
extern "C" __declspec(naked) void asm_00b6be80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b6aa00 }
	__asm { test al, al }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a35150();
extern "C" void fn_00a36e40();
// FUNCTION: ROBLOXSTUDIO 0x00b6ebd0
extern "C" __declspec(naked) void asm_00b6ebd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a35150 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a36e40 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00b6fa80
extern "C" __declspec(naked) void asm_00b6fa80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0xed1218 }
	__asm { push 0x1030650 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a39240 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b71570();
// FUNCTION: ROBLOXSTUDIO 0x00b6ffb0
extern "C" __declspec(naked) void asm_00b6ffb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b71570 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b71570();
// FUNCTION: ROBLOXSTUDIO 0x00b6ffd0
extern "C" __declspec(naked) void asm_00b6ffd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b71570 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a38a50();
// FUNCTION: ROBLOXSTUDIO 0x00b70040
extern "C" __declspec(naked) void asm_00b70040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0xed1534 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38a50 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a384b0();
// FUNCTION: ROBLOXSTUDIO 0x00b71710
extern "C" __declspec(naked) void asm_00b71710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00a384b0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e106fc[];
extern "C" void fn_00a38740();
// FUNCTION: ROBLOXSTUDIO 0x00b71e40
extern "C" __declspec(naked) void asm_00b71e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38740 }
	__asm { push eax }
	__asm { call dword ptr [g_00e106fc] }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35560();
// FUNCTION: ROBLOXSTUDIO 0x00b72040
extern "C" __declspec(naked) void asm_00b72040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a35560 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc74[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a200
extern "C" __declspec(naked) void asm_00b7a200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0128dc74] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc78[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a220
extern "C" __declspec(naked) void asm_00b7a220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0128dc78] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc7c[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a240
extern "C" __declspec(naked) void asm_00b7a240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0128dc7c] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead0[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a3e0
extern "C" __declspec(naked) void asm_00b7a3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124ead0] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb28[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a430
extern "C" __declspec(naked) void asm_00b7a430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb28] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac4[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a450
extern "C" __declspec(naked) void asm_00b7a450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eac4] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead8[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a4e0
extern "C" __declspec(naked) void asm_00b7a4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124ead8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eadc[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a500
extern "C" __declspec(naked) void asm_00b7a500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eadc] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35710();
// FUNCTION: ROBLOXSTUDIO 0x00b7c170
extern "C" __declspec(naked) void asm_00b7c170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0xed21fc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a35710 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008481c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7f990
extern "C" __declspec(naked) void asm_00b7f990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_008481c0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b82c10
extern "C" __declspec(naked) void asm_00b82c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35690();
// FUNCTION: ROBLOXSTUDIO 0x00b850a0
extern "C" __declspec(naked) void asm_00b850a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0xd }
	__asm { push 0xe6e574 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35690();
// FUNCTION: ROBLOXSTUDIO 0x00b850c0
extern "C" __declspec(naked) void asm_00b850c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0xf }
	__asm { push 0xe6ed88 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35690();
// FUNCTION: ROBLOXSTUDIO 0x00b850e0
extern "C" __declspec(naked) void asm_00b850e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x14 }
	__asm { push 0xe6ed98 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35690();
// FUNCTION: ROBLOXSTUDIO 0x00b85100
extern "C" __declspec(naked) void asm_00b85100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0xa }
	__asm { push 0x10127ec }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b85210();
// FUNCTION: ROBLOXSTUDIO 0x00b851f0
extern "C" __declspec(naked) void asm_00b851f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fldz }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b85210 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b85870
extern "C" __declspec(naked) void asm_00b85870()
{
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { sub edx, dword ptr [ecx + 4] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b86090
extern "C" __declspec(naked) void asm_00b86090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add edx, dword ptr [ecx + 0xc] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c9b0();
// FUNCTION: ROBLOXSTUDIO 0x00b8e060
extern "C" __declspec(naked) void asm_00b8e060()
{
	__asm { push esi }
	__asm { push 2 }
	__asm { mov esi, ecx }
	__asm { call fn_00b8c9b0 }
	__asm { mov dword ptr [esi], 0xed4ba4 }
	__asm { mov dword ptr [esi + 0x1c], 0xed4bf0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00b92880();
// FUNCTION: ROBLOXSTUDIO 0x00b92410
extern "C" __declspec(naked) void asm_00b92410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b92880 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b92a60
extern "C" __declspec(naked) void asm_00b92a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx], 0xed58c4 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00b92b80
extern "C" __declspec(naked) void asm_00b92b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov dword ptr [ecx], 0xed58d0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00ba0870();
// FUNCTION: ROBLOXSTUDIO 0x00ba09d0
extern "C" __declspec(naked) void asm_00ba09d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 0x64 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ba0870 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00ba0750();
// FUNCTION: ROBLOXSTUDIO 0x00ba0d70
extern "C" __declspec(naked) void asm_00ba0d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xa50130 }
	__asm { call fn_00ba0750 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c620();
extern "C" void fn_00c12200();
// FUNCTION: ROBLOXSTUDIO 0x00ba3de0
extern "C" __declspec(naked) void asm_00ba3de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00c12200 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c620 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b8c530();
extern "C" void fn_00c12200();
// FUNCTION: ROBLOXSTUDIO 0x00ba3e20
extern "C" __declspec(naked) void asm_00ba3e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_00c12200 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b8c530 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130f1dc[];
// FUNCTION: ROBLOXSTUDIO 0x00ba8ed0
extern "C" __declspec(naked) void asm_00ba8ed0()
{
	__asm { mov eax, dword ptr [g_0130f1dc] }
	__asm { inc eax }
	__asm { mov dword ptr [g_0130f1dc], eax }
	__asm { mov dword ptr [ecx + 0xa0], eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00ba9d40
extern "C" __declspec(naked) void asm_00ba9d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { mov byte ptr [ecx + 0x38], al }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01038064[];
// FUNCTION: ROBLOXSTUDIO 0x00bbebf0
extern "C" __declspec(naked) void asm_00bbebf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movzx ecx, byte ptr [ebp + 0xc] }
	__asm { movsx eax, byte ptr [ebp + 8] }
	__asm { inc ecx }
	__asm { imul ecx, eax }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { fild dword ptr [ebp + 0xc] }
	__asm { fmul dword ptr [g_01038064] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bc1c10
extern "C" __declspec(naked) void asm_00bc1c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bc23c0();
// FUNCTION: ROBLOXSTUDIO 0x00bc1c20
extern "C" __declspec(naked) void asm_00bc1c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [edx + eax*4] }
	__asm { pop ebp }
	__asm { jmp fn_00bc23c0 }
}

extern "C" void fn_00a379c0();
// FUNCTION: ROBLOXSTUDIO 0x00bc6450
extern "C" __declspec(naked) void asm_00bc6450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0xee1c94 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a379c0 }
	__asm { add esp, 8 }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bc6ce0
extern "C" __declspec(naked) void asm_00bc6ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { and byte ptr [ecx + 5], 0xfb }
	__asm { mov eax, dword ptr [edx + 0x28] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov dword ptr [edx + 0x28], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc8720();
// FUNCTION: ROBLOXSTUDIO 0x00bc88e0
extern "C" __declspec(naked) void asm_00bc88e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00bc8720 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bd13f0
extern "C" __declspec(naked) void asm_00bd13f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 0xa0], 0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bd2070
extern "C" __declspec(naked) void asm_00bd2070()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x20] }
	__asm { fld dword ptr [esi + 0xe0] }
	__asm { fchs }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00496100();
// FUNCTION: ROBLOXSTUDIO 0x00bd3030
extern "C" __declspec(naked) void asm_00bd3030()
{
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push dword ptr [eax + 0x100] }
	__asm { call fn_00496100 }
	__asm { add esp, 4 }
	__asm { ret }
}

extern "C" char g_0130f760[];
extern "C" void fn_00bd31f0();
// FUNCTION: ROBLOXSTUDIO 0x00bd3170
extern "C" __declspec(naked) void asm_00bd3170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dword ptr [g_0130f760], 0 }
	__asm { call fn_00bd31f0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f754[];
extern "C" void fn_00bd3260();
// FUNCTION: ROBLOXSTUDIO 0x00bd3190
extern "C" __declspec(naked) void asm_00bd3190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dword ptr [g_0130f754], 0 }
	__asm { call fn_00bd3260 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f748[];
extern "C" void fn_00bd32d0();
// FUNCTION: ROBLOXSTUDIO 0x00bd31b0
extern "C" __declspec(naked) void asm_00bd31b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dword ptr [g_0130f748], 0 }
	__asm { call fn_00bd32d0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307a34[];
extern "C" void fn_00bd3340();
// FUNCTION: ROBLOXSTUDIO 0x00bd31d0
extern "C" __declspec(naked) void asm_00bd31d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dword ptr [g_01307a34], 0 }
	__asm { call fn_00bd3340 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bd33b0
extern "C" __declspec(naked) void asm_00bd33b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax + 0x1e0] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00496100();
// FUNCTION: ROBLOXSTUDIO 0x00bd52d0
extern "C" __declspec(naked) void asm_00bd52d0()
{
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push dword ptr [eax + 0x100] }
	__asm { call fn_00496100 }
	__asm { add esp, 4 }
	__asm { ret }
}

extern "C" char g_01307a38[];
extern "C" void fn_00bd5350();
// FUNCTION: ROBLOXSTUDIO 0x00bd5330
extern "C" __declspec(naked) void asm_00bd5330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dword ptr [g_01307a38], 0 }
	__asm { call fn_00bd5350 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0099cc10();
// FUNCTION: ROBLOXSTUDIO 0x00bd96d0
extern "C" __declspec(naked) void asm_00bd96d0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { call fn_0099cc10 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { call fn_0099cc10 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00bea2d0
extern "C" __declspec(naked) void asm_00bea2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add ecx, dword ptr [eax + 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bf2790();
// FUNCTION: ROBLOXSTUDIO 0x00bf2770
extern "C" __declspec(naked) void asm_00bf2770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0x3fc90fdb }
	__asm { call fn_00bf2790 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bf65d0();
// FUNCTION: ROBLOXSTUDIO 0x00bf65b0
extern "C" __declspec(naked) void asm_00bf65b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0x3fc90fdb }
	__asm { call fn_00bf65d0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010381bc[];
// FUNCTION: ROBLOXSTUDIO 0x00c03e40
extern "C" __declspec(naked) void asm_00c03e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fmul dword ptr [g_010381bc] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b5cbf0();
// FUNCTION: ROBLOXSTUDIO 0x00c048d0
extern "C" __declspec(naked) void asm_00c048d0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0xffffffff }
	__asm { call fn_00b5cbf0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0045ada0();
// FUNCTION: ROBLOXSTUDIO 0x00c057b0
extern "C" __declspec(naked) void asm_00c057b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0045ada0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0099dfa0();
extern "C" void fn_00c03aa0();
// FUNCTION: ROBLOXSTUDIO 0x00c11130
extern "C" __declspec(naked) void asm_00c11130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c03aa0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0099dfa0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b5cbf0();
// FUNCTION: ROBLOXSTUDIO 0x00c11270
extern "C" __declspec(naked) void asm_00c11270()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], 0xeeadb4 }
	__asm { call fn_00b5cbf0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00c11fa0();
// FUNCTION: ROBLOXSTUDIO 0x00c120d0
extern "C" __declspec(naked) void asm_00c120d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xc120f0 }
	__asm { call fn_00c11fa0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c11fa0();
// FUNCTION: ROBLOXSTUDIO 0x00c12200
extern "C" __declspec(naked) void asm_00c12200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xc12170 }
	__asm { call fn_00c11fa0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c17640
extern "C" __declspec(naked) void asm_00c17640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0x61754c1b }
	__asm { mov dword ptr [eax + 4], 0x4010051 }
	__asm { mov dword ptr [eax + 8], 0x80404 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c184d0
extern "C" __declspec(naked) void asm_00c184d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + edx*4 - 4], eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c184f0
extern "C" __declspec(naked) void asm_00c184f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c18280();
// FUNCTION: ROBLOXSTUDIO 0x00c18650
extern "C" __declspec(naked) void asm_00c18650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c18280 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov dword ptr [ecx], 9 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b50cb0();
extern "C" void fn_00c1b700();
// FUNCTION: ROBLOXSTUDIO 0x00c1b9e0
extern "C" __declspec(naked) void asm_00c1b9e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov ecx, esi }
	__asm { call fn_00c1b700 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_00b50cb0 }
}

extern "C" void fn_00b50cb0();
// FUNCTION: ROBLOXSTUDIO 0x00c1ba00
extern "C" __declspec(naked) void asm_00c1ba00()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x28] }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_00b50cb0 }
}

extern "C" void fn_00a54750();
// FUNCTION: ROBLOXSTUDIO 0x00c24910
extern "C" __declspec(naked) void asm_00c24910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a54750 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c2c8d0
extern "C" __declspec(naked) void asm_00c2c8d0()
{
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { push dword ptr [eax + 0x1c] }
	__asm { add ecx, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c2f660
extern "C" __declspec(naked) void asm_00c2f660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 4 }
}
