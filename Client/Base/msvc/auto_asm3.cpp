// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00620800();
extern "C" void fn_006987a0();
// FUNCTION: ROBLOXSTUDIO 0x006985c0
extern "C" __declspec(naked) void asm_006985c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_006987a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_00620800 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0069b5a0
extern "C" __declspec(naked) void asm_0069b5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { shr eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a0f50();
extern "C" void fn_006a1280();
// FUNCTION: ROBLOXSTUDIO 0x006a03c0
extern "C" __declspec(naked) void asm_006a03c0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_006a0f50 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_006a1280 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi + 0x80], eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006a7b70();
// FUNCTION: ROBLOXSTUDIO 0x006a7b50
extern "C" __declspec(naked) void asm_006a7b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_006a7b70 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006a9d90
extern "C" __declspec(naked) void asm_006a9d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ebp + 8], 1 }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006ab790();
// FUNCTION: ROBLOXSTUDIO 0x006aaaa0
extern "C" __declspec(naked) void asm_006aaaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006ab790 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x006ad490
extern "C" __declspec(naked) void asm_006ad490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x17c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x180], eax }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e12b20[];
extern "C" char g_00e12bb4[];
// FUNCTION: ROBLOXSTUDIO 0x006af25c
extern "C" __declspec(naked) void asm_006af25c()
{
	__asm { jmp dword ptr [g_00e12b20] }
	__asm { jmp dword ptr [g_00e12bb4] }
}

extern "C" char g_00e11f84[];
extern "C" char g_00e11f88[];
extern "C" char g_00e11f8c[];
extern "C" char g_00e11f90[];
extern "C" char g_00e11f94[];
// FUNCTION: ROBLOXSTUDIO 0x006af7ba
extern "C" __declspec(naked) void asm_006af7ba()
{
	__asm { jmp dword ptr [g_00e11f94] }
	__asm { jmp dword ptr [g_00e11f90] }
	__asm { jmp dword ptr [g_00e11f8c] }
	__asm { jmp dword ptr [g_00e11f88] }
	__asm { jmp dword ptr [g_00e11f84] }
}

extern "C" char g_00e100d4[];
// FUNCTION: ROBLOXSTUDIO 0x006b0950
extern "C" __declspec(naked) void asm_006b0950()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { add eax, 0x14 }
	__asm { mov dword ptr [esp + 4], eax }
	__asm { jmp dword ptr [g_00e100d4] }
}

extern "C" char g_00e100d4[];
// FUNCTION: ROBLOXSTUDIO 0x006b0a90
extern "C" __declspec(naked) void asm_006b0a90()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { add eax, 0x10 }
	__asm { mov dword ptr [esp + 4], eax }
	__asm { jmp dword ptr [g_00e100d4] }
}

// FUNCTION: ROBLOXSTUDIO 0x006b0d10
extern "C" __declspec(naked) void asm_006b0d10()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { call edx }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b0e40
extern "C" __declspec(naked) void asm_006b0e40()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { add eax, 0xc }
	__asm { mov dword ptr [esp + 4], eax }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { jmp edx }
}

// FUNCTION: ROBLOXSTUDIO 0x006b0e60
extern "C" __declspec(naked) void asm_006b0e60()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { add eax, 0xc }
	__asm { mov dword ptr [esp + 4], eax }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { jmp edx }
}

extern "C" void fn_006b2c50();
// FUNCTION: ROBLOXSTUDIO 0x006b1120
extern "C" __declspec(naked) void asm_006b1120()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { push eax }
	__asm { add ecx, 0x34 }
	__asm { call fn_006b2c50 }
	__asm { xor ecx, ecx }
	__asm { test eax, eax }
	__asm { setge cl }
	__asm { dec ecx }
	__asm { and eax, ecx }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b1440
extern "C" __declspec(naked) void asm_006b1440()
{
	__asm { mov eax, 0x80004001 }
	__asm { ret 0x20 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b14a0
extern "C" __declspec(naked) void asm_006b14a0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x38] }
	__asm { lea edx, [ecx + 0x98] }
	__asm { push edx }
	__asm { mov edx, dword ptr [ecx + 0x9c] }
	__asm { push edx }
	__asm { call eax }
	__asm { ret 4 }
}

extern "C" char g_00e132c8[];
// FUNCTION: ROBLOXSTUDIO 0x006b1570
extern "C" __declspec(naked) void asm_006b1570()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { push eax }
	__asm { push 0xe43468 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0xe433b8 }
	__asm { call dword ptr [g_00e132c8] }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b2750
extern "C" __declspec(naked) void asm_006b2750()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b2770
extern "C" __declspec(naked) void asm_006b2770()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x10], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 0x14], edx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov dword ptr [ecx + 0x18], edx }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b2790
extern "C" __declspec(naked) void asm_006b2790()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov dword ptr [ecx + 0x24], eax }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b27a0
extern "C" __declspec(naked) void asm_006b27a0()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x2c], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 0x30], edx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov dword ptr [ecx + 0x34], edx }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx + 0x38], eax }
	__asm { ret 4 }
}

extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x006b2820
extern "C" __declspec(naked) void asm_006b2820()
{
	__asm { push esi }
	__asm { push 0x48 }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf6804 }
	__asm { mov eax, 1 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10188[];
// FUNCTION: ROBLOXSTUDIO 0x006b3900
extern "C" __declspec(naked) void asm_006b3900()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push -1 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10188] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006b3f20
extern "C" __declspec(naked) void asm_006b3f20()
{
	__asm { mov eax, ecx }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [eax + 0xc], 0xa }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { mov dword ptr [eax + 0x14], ecx }
	__asm { ret 4 }
}

extern "C" char g_00e135c8[];
extern "C" char g_00e135cc[];
// FUNCTION: ROBLOXSTUDIO 0x006b43f8
extern "C" __declspec(naked) void asm_006b43f8()
{
	__asm { jmp dword ptr [g_00e135c8] }
	__asm { jmp dword ptr [g_00e135cc] }
}

// FUNCTION: ROBLOXSTUDIO 0x006b5cd0
extern "C" __declspec(naked) void asm_006b5cd0()
{
	__asm { xor eax, eax }
	__asm { ret 0x10 }
}

extern "C" char g_012de648[];
// FUNCTION: ROBLOXSTUDIO 0x006b9580
extern "C" __declspec(naked) void asm_006b9580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [g_012de648], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de694[];
// FUNCTION: ROBLOXSTUDIO 0x006b9720
extern "C" __declspec(naked) void asm_006b9720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [g_012de694], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de698[];
// FUNCTION: ROBLOXSTUDIO 0x006b9730
extern "C" __declspec(naked) void asm_006b9730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [g_012de698], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e100e8[];
// FUNCTION: ROBLOXSTUDIO 0x006bc900
extern "C" __declspec(naked) void asm_006bc900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e100e8] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10140[];
// FUNCTION: ROBLOXSTUDIO 0x006bc920
extern "C" __declspec(naked) void asm_006bc920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10140] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1012c[];
// FUNCTION: ROBLOXSTUDIO 0x006bc930
extern "C" __declspec(naked) void asm_006bc930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e1012c] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e100d4[];
// FUNCTION: ROBLOXSTUDIO 0x006bc950
extern "C" __declspec(naked) void asm_006bc950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e100d4] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10188[];
// FUNCTION: ROBLOXSTUDIO 0x006bca60
extern "C" __declspec(naked) void asm_006bca60()
{
	__asm { push -1 }
	__asm { push dword ptr [ecx] }
	__asm { call dword ptr [g_00e10188] }
	__asm { ret }
}

extern "C" void fn_006bc920();
extern "C" void fn_006c0e30();
// FUNCTION: ROBLOXSTUDIO 0x006c0200
extern "C" __declspec(naked) void asm_006c0200()
{
	__asm { push esi }
	__asm { lea esi, [ecx + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_006c0e30 }
	__asm { lea eax, [esi + 0x804] }
	__asm { push eax }
	__asm { call fn_006bc920 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_006bc950();
extern "C" void fn_006c0e30();
// FUNCTION: ROBLOXSTUDIO 0x006c0220
extern "C" __declspec(naked) void asm_006c0220()
{
	__asm { push esi }
	__asm { lea esi, [ecx + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_006c0e30 }
	__asm { lea eax, [esi + 0x804] }
	__asm { push eax }
	__asm { call fn_006bc950 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006c46a0
extern "C" __declspec(naked) void asm_006c46a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { fld qword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fmul qword ptr [ebp + 0x10] }
	__asm { mov byte ptr [eax + 8], 0 }
	__asm { fstp qword ptr [eax] }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x006c5500
extern "C" __declspec(naked) void asm_006c5500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { fld qword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { fsub qword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fstp qword ptr [eax] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c54a0();
// FUNCTION: ROBLOXSTUDIO 0x006c58f0
extern "C" __declspec(naked) void asm_006c58f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c54a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c54a0();
// FUNCTION: ROBLOXSTUDIO 0x006c5910
extern "C" __declspec(naked) void asm_006c5910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_006c54a0 }
	__asm { fld qword ptr [ebp - 8] }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1058c[];
extern "C" char g_012df607[];
// FUNCTION: ROBLOXSTUDIO 0x006c6140
extern "C" __declspec(naked) void asm_006c6140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x7f }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12df588 }
	__asm { call dword ptr [g_00e1058c] }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [g_012df607], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1058c[];
extern "C" char g_012df70b[];
// FUNCTION: ROBLOXSTUDIO 0x006c6160
extern "C" __declspec(naked) void asm_006c6160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x7f }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12df68c }
	__asm { call dword ptr [g_00e1058c] }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [g_012df70b], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006cfe50
extern "C" __declspec(naked) void asm_006cfe50()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006d9150
extern "C" __declspec(naked) void asm_006d9150()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { push esi }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call dword ptr [eax + 0x28] }
	__asm { fld dword ptr [esi] }
	__asm { fabs }
	__asm { fstp dword ptr [esi] }
	__asm { pop esi }
	__asm { ret 0xc }
}

extern "C" void fn_006e1ff0();
// FUNCTION: ROBLOXSTUDIO 0x006da410
extern "C" __declspec(naked) void asm_006da410()
{
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { call fn_006e1ff0 }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { ret 4 }
}

extern "C" void fn_006dcf30();
// FUNCTION: ROBLOXSTUDIO 0x006dd040
extern "C" __declspec(naked) void asm_006dd040()
{
	__asm { push ecx }
	__asm { push dword ptr [esp + 0x10] }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { call fn_006dcf30 }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { pop ecx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006dd670
extern "C" __declspec(naked) void asm_006dd670()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { ret 4 }
}

extern "C" char g_00e10440[];
// FUNCTION: ROBLOXSTUDIO 0x006e0dc0
extern "C" __declspec(naked) void asm_006e0dc0()
{
	__asm { mov eax, dword ptr [g_00e10440] }
	__asm { fld qword ptr [eax] }
	__asm { ret }
}

extern "C" char g_00e10444[];
// FUNCTION: ROBLOXSTUDIO 0x006e0dd0
extern "C" __declspec(naked) void asm_006e0dd0()
{
	__asm { mov eax, dword ptr [g_00e10444] }
	__asm { fld qword ptr [eax] }
	__asm { ret }
}

extern "C" char g_00e1043c[];
// FUNCTION: ROBLOXSTUDIO 0x006e0de0
extern "C" __declspec(naked) void asm_006e0de0()
{
	__asm { mov eax, dword ptr [g_00e1043c] }
	__asm { fld dword ptr [eax] }
	__asm { ret }
}

extern "C" char g_00e10448[];
// FUNCTION: ROBLOXSTUDIO 0x006e0df0
extern "C" __declspec(naked) void asm_006e0df0()
{
	__asm { mov eax, dword ptr [g_00e10448] }
	__asm { fld dword ptr [eax] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006e2920
extern "C" __declspec(naked) void asm_006e2920()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { shl eax, 4 }
	__asm { add eax, ecx }
	__asm { ret 4 }
}

extern "C" void fn_006f1730();
// FUNCTION: ROBLOXSTUDIO 0x006e8580
extern "C" __declspec(naked) void asm_006e8580()
{
	__asm { push dword ptr [esp + 4] }
	__asm { call fn_006f1730 }
	__asm { add esp, 4 }
	__asm { ret 4 }
}

extern "C" void fn_0070b590();
extern "C" void fn_0070c560();
// FUNCTION: ROBLOXSTUDIO 0x006f58e0
extern "C" __declspec(naked) void asm_006f58e0()
{
	__asm { push ecx }
	__asm { push dword ptr [esp + 8] }
	__asm { mov dword ptr [esp + 4], 0 }
	__asm { call fn_0070b590 }
	__asm { mov ecx, eax }
	__asm { call fn_0070c560 }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_006f1040();
// FUNCTION: ROBLOXSTUDIO 0x006f7c50
extern "C" __declspec(naked) void asm_006f7c50()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi + 0x2c], esi }
	__asm { call fn_006f1040 }
	__asm { cmp esi, dword ptr [eax + 0x48] }
	__asm { setne al }
	__asm { mov byte ptr [edi + 0x28], al }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0070f5b0
extern "C" __declspec(naked) void asm_0070f5b0()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0070f5d0
extern "C" __declspec(naked) void asm_0070f5d0()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0071b120
extern "C" __declspec(naked) void asm_0071b120()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { ret 4 }
}

extern "C" void fn_00cfbcf0();
// FUNCTION: ROBLOXSTUDIO 0x00727830
extern "C" __declspec(naked) void asm_00727830()
{
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cfbcf0 }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov dword ptr [ecx + 0x110], eax }
	__asm { ret }
}

extern "C" void fn_00728fb0();
// FUNCTION: ROBLOXSTUDIO 0x00728f90
extern "C" __declspec(naked) void asm_00728f90()
{
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { lea eax, [ecx + 8] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push ecx }
	__asm { call fn_00728fb0 }
	__asm { add esp, 0x10 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0072a2a0
extern "C" __declspec(naked) void asm_0072a2a0()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { ret }
}

extern "C" void fn_0072a890();
// FUNCTION: ROBLOXSTUDIO 0x0072a870
extern "C" __declspec(naked) void asm_0072a870()
{
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { lea eax, [ecx + 8] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { push ecx }
	__asm { call fn_0072a890 }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_0072e7c0();
// FUNCTION: ROBLOXSTUDIO 0x0072e7a0
extern "C" __declspec(naked) void asm_0072e7a0()
{
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call fn_0072e7c0 }
	__asm { add esp, 0x1c }
	__asm { ret }
}

extern "C" void fn_007300b0();
// FUNCTION: ROBLOXSTUDIO 0x00730090
extern "C" __declspec(naked) void asm_00730090()
{
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call fn_007300b0 }
	__asm { add esp, 0x1c }
	__asm { ret }
}

extern "C" void fn_0072a260();
// FUNCTION: ROBLOXSTUDIO 0x0073a300
extern "C" __declspec(naked) void asm_0073a300()
{
	__asm { add dword ptr [esp + 4], 4 }
	__asm { jmp fn_0072a260 }
}

// FUNCTION: ROBLOXSTUDIO 0x0073a420
extern "C" __declspec(naked) void asm_0073a420()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { push 0x82 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [eax + 0x80], 0 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0073a440
extern "C" __declspec(naked) void asm_0073a440()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { push 0x112 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [eax + 0x111], 0 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0073d6c0
extern "C" __declspec(naked) void asm_0073d6c0()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { dec eax }
	__asm { add eax, dword ptr [esp + 8] }
	__asm { cdq }
	__asm { idiv dword ptr [esp + 8] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0073d6d0
extern "C" __declspec(naked) void asm_0073d6d0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { dec esi }
	__asm { add esi, dword ptr [esp + 0xc] }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { idiv dword ptr [esp + 0xc] }
	__asm { sub esi, edx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00745390
extern "C" __declspec(naked) void asm_00745390()
{
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007453a0
extern "C" __declspec(naked) void asm_007453a0()
{
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [eax + 0x14], 0x33 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_0067e360();
// FUNCTION: ROBLOXSTUDIO 0x0076e8b0
extern "C" __declspec(naked) void asm_0076e8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push -1 }
	__asm { push eax }
	__asm { add ecx, 0xcc }
	__asm { call fn_0067e360 }
	__asm { fld qword ptr [eax + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0076f0d0
extern "C" __declspec(naked) void asm_0076f0d0()
{
	__asm { mov edx, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [ecx + 0x148] }
	__asm { shl edx, 6 }
	__asm { fld dword ptr [edx + eax + 0x20] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0076f0f0
extern "C" __declspec(naked) void asm_0076f0f0()
{
	__asm { mov edx, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [ecx + 0x148] }
	__asm { shl edx, 6 }
	__asm { mov eax, dword ptr [edx + eax + 0x28] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0076f110
extern "C" __declspec(naked) void asm_0076f110()
{
	__asm { mov edx, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [ecx + 0x148] }
	__asm { shl edx, 6 }
	__asm { mov al, byte ptr [edx + eax + 0x24] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0076f480
extern "C" __declspec(naked) void asm_0076f480()
{
	__asm { mov edx, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [ecx + 0x148] }
	__asm { shl edx, 6 }
	__asm { mov eax, dword ptr [edx + eax + 0x14] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0076f630
extern "C" __declspec(naked) void asm_0076f630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0076fae0
extern "C" __declspec(naked) void asm_0076fae0()
{
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { call eax }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0076faf0
extern "C" __declspec(naked) void asm_0076faf0()
{
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { xor eax, eax }
	__asm { cmp edx, dword ptr [ecx + 0x10] }
	__asm { setne al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007701e0
extern "C" __declspec(naked) void asm_007701e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x20] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [eax + 4] }
}

// FUNCTION: ROBLOXSTUDIO 0x007760a0
extern "C" __declspec(naked) void asm_007760a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0710[];
// FUNCTION: ROBLOXSTUDIO 0x0077b120
extern "C" __declspec(naked) void asm_0077b120()
{
	__asm { mov eax, dword ptr [g_012e0710] }
	__asm { ret }
}

extern "C" char g_012e070c[];
// FUNCTION: ROBLOXSTUDIO 0x0077b130
extern "C" __declspec(naked) void asm_0077b130()
{
	__asm { mov eax, dword ptr [g_012e070c] }
	__asm { ret }
}

extern "C" void fn_00781820();
// FUNCTION: ROBLOXSTUDIO 0x0077d480
extern "C" __declspec(naked) void asm_0077d480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00781820 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0077d4f0
extern "C" __declspec(naked) void asm_0077d4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movzx ecx, byte ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [eax], cl }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { movzx ecx, byte ptr [ecx] }
	__asm { mov byte ptr [eax + 1], cl }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0077d570
extern "C" __declspec(naked) void asm_0077d570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov cl, byte ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [eax], cl }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax + 1], ecx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0077d590
extern "C" __declspec(naked) void asm_0077d590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov cx, word ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov word ptr [eax], cx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov cl, byte ptr [ecx] }
	__asm { mov byte ptr [eax + 2], cl }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0077d650
extern "C" __declspec(naked) void asm_0077d650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov cl, byte ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [eax], cl }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007818b0();
// FUNCTION: ROBLOXSTUDIO 0x0077d670
extern "C" __declspec(naked) void asm_0077d670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007818b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0077d690
extern "C" __declspec(naked) void asm_0077d690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov cl, byte ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [eax], cl }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0077d6a0
extern "C" __declspec(naked) void asm_0077d6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov cx, word ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov word ptr [eax], cx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0077d740
extern "C" __declspec(naked) void asm_0077d740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0077d7e0
extern "C" __declspec(naked) void asm_0077d7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0077d800
extern "C" __declspec(naked) void asm_0077d800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0077d860
extern "C" __declspec(naked) void asm_0077d860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0077fd10();
// FUNCTION: ROBLOXSTUDIO 0x0077e780
extern "C" __declspec(naked) void asm_0077e780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0077fd10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00781ad0();
// FUNCTION: ROBLOXSTUDIO 0x0077e970
extern "C" __declspec(naked) void asm_0077e970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00781ad0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00781db0();
// FUNCTION: ROBLOXSTUDIO 0x0077e990
extern "C" __declspec(naked) void asm_0077e990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00781db0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007830f0();
// FUNCTION: ROBLOXSTUDIO 0x0077e9b0
extern "C" __declspec(naked) void asm_0077e9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007830f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00780d80
extern "C" __declspec(naked) void asm_00780d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov cl, byte ptr [ebp + 0xc] }
	__asm { mov byte ptr [eax], cl }
	__asm { mov cl, byte ptr [ebp + 0x10] }
	__asm { mov byte ptr [eax + 1], cl }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00783650();
// FUNCTION: ROBLOXSTUDIO 0x007837e0
extern "C" __declspec(naked) void asm_007837e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00783650 }
	__asm { mov dword ptr [esi], 0xe4f014 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00783800
extern "C" __declspec(naked) void asm_00783800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe4f020 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007848c0();
// FUNCTION: ROBLOXSTUDIO 0x00784590
extern "C" __declspec(naked) void asm_00784590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007848c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077f540();
// FUNCTION: ROBLOXSTUDIO 0x00786b30
extern "C" __declspec(naked) void asm_00786b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0077f540 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077f590();
// FUNCTION: ROBLOXSTUDIO 0x00786b50
extern "C" __declspec(naked) void asm_00786b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0077f590 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00780810();
// FUNCTION: ROBLOXSTUDIO 0x00786b70
extern "C" __declspec(naked) void asm_00786b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00780810 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}
