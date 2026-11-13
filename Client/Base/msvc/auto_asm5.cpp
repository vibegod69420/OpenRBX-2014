// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_0124eb30[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x008d8cb0
extern "C" __declspec(naked) void asm_008d8cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb30] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb2c[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x008d8cd0
extern "C" __declspec(naked) void asm_008d8cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb20[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x008d8cf0
extern "C" __declspec(naked) void asm_008d8cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb20] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb14[];
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x008d8d10
extern "C" __declspec(naked) void asm_008d8d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008dd010();
// FUNCTION: ROBLOXSTUDIO 0x008dd200
extern "C" __declspec(naked) void asm_008dd200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_008dd010 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012fd420[];
// FUNCTION: ROBLOXSTUDIO 0x008eef30
extern "C" __declspec(naked) void asm_008eef30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [g_012fd420], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00774920();
// FUNCTION: ROBLOXSTUDIO 0x008f1c80
extern "C" __declspec(naked) void asm_008f1c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0xe738d4 }
	__asm { push 0xf13380 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008f1f40
extern "C" __declspec(naked) void asm_008f1f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104c4[];
// FUNCTION: ROBLOXSTUDIO 0x008f3660
extern "C" __declspec(naked) void asm_008f3660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add ecx, 4 }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e104c4] }
}

extern "C" void fn_006c5ae0();
// FUNCTION: ROBLOXSTUDIO 0x008f9460
extern "C" __declspec(naked) void asm_008f9460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c5ae0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008fa4e0();
// FUNCTION: ROBLOXSTUDIO 0x008fa5e0
extern "C" __declspec(naked) void asm_008fa5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_008fa4e0 }
}

// FUNCTION: ROBLOXSTUDIO 0x008fa600
extern "C" __declspec(naked) void asm_008fa600()
{
	__asm { mov eax, dword ptr [ecx + 0x40] }
	__asm { push dword ptr [ecx + 0x44] }
	__asm { cdq }
	__asm { push edx }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 0x3c] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { ret }
}

extern "C" void fn_006c5e90();
// FUNCTION: ROBLOXSTUDIO 0x008ff850
extern "C" __declspec(naked) void asm_008ff850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006c5e90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0093d9a0();
// FUNCTION: ROBLOXSTUDIO 0x00900050
extern "C" __declspec(naked) void asm_00900050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0093d9a0 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009004e0
extern "C" __declspec(naked) void asm_009004e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009056c0();
// FUNCTION: ROBLOXSTUDIO 0x00905770
extern "C" __declspec(naked) void asm_00905770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009056c0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00424480();
extern "C" void fn_008bc090();
// FUNCTION: ROBLOXSTUDIO 0x009086f0
extern "C" __declspec(naked) void asm_009086f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00424480 }
	__asm { mov ecx, eax }
	__asm { call fn_008bc090 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x0091a580
extern "C" __declspec(naked) void asm_0091a580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_008bbcc0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d8750();
// FUNCTION: ROBLOXSTUDIO 0x0091a7f0
extern "C" __declspec(naked) void asm_0091a7f0()
{
	__asm { push ecx }
	__asm { call fn_009d8750 }
	__asm { add esp, 4 }
	__asm { ret }
}

extern "C" void fn_00897cc0();
extern "C" void fn_0099e840();
// FUNCTION: ROBLOXSTUDIO 0x0091b970
extern "C" __declspec(naked) void asm_0091b970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00897cc0 }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { push 3 }
	__asm { call fn_0099e840 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d1e60();
// FUNCTION: ROBLOXSTUDIO 0x00924640
extern "C" __declspec(naked) void asm_00924640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0x1c4 }
	__asm { call fn_006d1e60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00924910
extern "C" __declspec(naked) void asm_00924910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0x70] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0x74] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x0092b690
extern "C" __declspec(naked) void asm_0092b690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x94] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0048e0f0();
// FUNCTION: ROBLOXSTUDIO 0x0092b790
extern "C" __declspec(naked) void asm_0092b790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { call fn_0048e0f0 }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0092b7b0
extern "C" __declspec(naked) void asm_0092b7b0()
{
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx], eax }
	__asm { sete al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0092caf0
extern "C" __declspec(naked) void asm_0092caf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0092f2e0
extern "C" __declspec(naked) void asm_0092f2e0()
{
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { add ecx, dword ptr [eax + 0x14] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00930600
extern "C" __declspec(naked) void asm_00930600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { fld dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007e4cb0();
// FUNCTION: ROBLOXSTUDIO 0x00935530
extern "C" __declspec(naked) void asm_00935530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007e4cb0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00935da0
extern "C" __declspec(naked) void asm_00935da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { add ecx, dword ptr [edx + 8] }
	__asm { lea eax, [edx + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0093bac0
extern "C" __declspec(naked) void asm_0093bac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx + 0xe0] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 0xe4] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0093d410();
// FUNCTION: ROBLOXSTUDIO 0x0093d360
extern "C" __declspec(naked) void asm_0093d360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_0093d410 }
	__asm { mov dword ptr [esi], 0xe82ef0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f040();
// FUNCTION: ROBLOXSTUDIO 0x00941460
extern "C" __declspec(naked) void asm_00941460()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0x84] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { call dword ptr [eax + 0x78] }
	__asm { lea ecx, [esi + 0x9c] }
	__asm { pop esi }
	__asm { jmp fn_0043f040 }
}

extern "C" void fn_009468b0();
// FUNCTION: ROBLOXSTUDIO 0x009452b0
extern "C" __declspec(naked) void asm_009452b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009468b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00956fd0();
// FUNCTION: ROBLOXSTUDIO 0x009498e0
extern "C" __declspec(naked) void asm_009498e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00956fd0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094c190();
// FUNCTION: ROBLOXSTUDIO 0x0094afd0
extern "C" __declspec(naked) void asm_0094afd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094c190 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094c470();
// FUNCTION: ROBLOXSTUDIO 0x0094aff0
extern "C" __declspec(naked) void asm_0094aff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094c470 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094c750();
// FUNCTION: ROBLOXSTUDIO 0x0094b010
extern "C" __declspec(naked) void asm_0094b010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094c750 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094cb10();
// FUNCTION: ROBLOXSTUDIO 0x0094b030
extern "C" __declspec(naked) void asm_0094b030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094cb10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094cde0();
// FUNCTION: ROBLOXSTUDIO 0x0094b050
extern "C" __declspec(naked) void asm_0094b050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094cde0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094d0c0();
// FUNCTION: ROBLOXSTUDIO 0x0094b070
extern "C" __declspec(naked) void asm_0094b070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094d0c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094d390();
// FUNCTION: ROBLOXSTUDIO 0x0094b090
extern "C" __declspec(naked) void asm_0094b090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094d390 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094d670();
// FUNCTION: ROBLOXSTUDIO 0x0094b0b0
extern "C" __declspec(naked) void asm_0094b0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094d670 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094d950();
// FUNCTION: ROBLOXSTUDIO 0x0094b0d0
extern "C" __declspec(naked) void asm_0094b0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094d950 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094dc30();
// FUNCTION: ROBLOXSTUDIO 0x0094b0f0
extern "C" __declspec(naked) void asm_0094b0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094dc30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094df10();
// FUNCTION: ROBLOXSTUDIO 0x0094b110
extern "C" __declspec(naked) void asm_0094b110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094df10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094e1f0();
// FUNCTION: ROBLOXSTUDIO 0x0094b130
extern "C" __declspec(naked) void asm_0094b130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094e1f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094e4d0();
// FUNCTION: ROBLOXSTUDIO 0x0094b150
extern "C" __declspec(naked) void asm_0094b150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094e4d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094e7b0();
// FUNCTION: ROBLOXSTUDIO 0x0094b170
extern "C" __declspec(naked) void asm_0094b170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094e7b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094ea90();
// FUNCTION: ROBLOXSTUDIO 0x0094b190
extern "C" __declspec(naked) void asm_0094b190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094ea90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094ed70();
// FUNCTION: ROBLOXSTUDIO 0x0094b1b0
extern "C" __declspec(naked) void asm_0094b1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094ed70 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094f050();
// FUNCTION: ROBLOXSTUDIO 0x0094b1d0
extern "C" __declspec(naked) void asm_0094b1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094f050 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094f430();
// FUNCTION: ROBLOXSTUDIO 0x0094b310
extern "C" __declspec(naked) void asm_0094b310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094f430 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00951400
extern "C" __declspec(naked) void asm_00951400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844a4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00951540
extern "C" __declspec(naked) void asm_00951540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844b0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00951560
extern "C" __declspec(naked) void asm_00951560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844bc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00951740
extern "C" __declspec(naked) void asm_00951740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844d4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00951890
extern "C" __declspec(naked) void asm_00951890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe844c8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00955530
extern "C" __declspec(naked) void asm_00955530()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e104c0[];
// FUNCTION: ROBLOXSTUDIO 0x00955550
extern "C" __declspec(naked) void asm_00955550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xe00 }
	__asm { push 0x800 }
	__asm { call dword ptr [g_00e104c0] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0094bff0();
// FUNCTION: ROBLOXSTUDIO 0x00955960
extern "C" __declspec(naked) void asm_00955960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0094bff0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00960730();
// FUNCTION: ROBLOXSTUDIO 0x00960980
extern "C" __declspec(naked) void asm_00960980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00960730 }
}

extern "C" void fn_00960830();
// FUNCTION: ROBLOXSTUDIO 0x009609a0
extern "C" __declspec(naked) void asm_009609a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00960830 }
}

extern "C" void fn_00c2cf50();
// FUNCTION: ROBLOXSTUDIO 0x00966340
extern "C" __declspec(naked) void asm_00966340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c2cf50 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009688b0
extern "C" __declspec(naked) void asm_009688b0()
{
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax + 8] }
}

extern "C" void fn_00962030();
// FUNCTION: ROBLOXSTUDIO 0x00969fe0
extern "C" __declspec(naked) void asm_00969fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00962030 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c363b0();
// FUNCTION: ROBLOXSTUDIO 0x0096c1b0
extern "C" __declspec(naked) void asm_0096c1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c363b0 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0097efa0
extern "C" __declspec(naked) void asm_0097efa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00983f40
extern "C" __declspec(naked) void asm_00983f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x40] }
	__asm { call eax }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { sete cl }
	__asm { mov al, cl }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01301e68[];
// FUNCTION: ROBLOXSTUDIO 0x00985280
extern "C" __declspec(naked) void asm_00985280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [g_01301e68], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00991c40();
// FUNCTION: ROBLOXSTUDIO 0x00991d40
extern "C" __declspec(naked) void asm_00991d40()
{
	__asm { push ecx }
	__asm { call fn_00991c40 }
	__asm { ret }
}

extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x00995670
extern "C" __declspec(naked) void asm_00995670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0088fab0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b5c000();
// FUNCTION: ROBLOXSTUDIO 0x00995690
extern "C" __declspec(naked) void asm_00995690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { jmp fn_00b5c000 }
}

extern "C" void fn_00995b20();
// FUNCTION: ROBLOXSTUDIO 0x00995cd0
extern "C" __declspec(naked) void asm_00995cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00995b20 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00995f10();
// FUNCTION: ROBLOXSTUDIO 0x009962d0
extern "C" __declspec(naked) void asm_009962d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00995f10 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00997710
extern "C" __declspec(naked) void asm_00997710()
{
	__asm { mov eax, dword ptr [ecx + 0xb4] }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { mov eax, dword ptr [eax + 0x64] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00997720
extern "C" __declspec(naked) void asm_00997720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0xbc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x14] }
}

extern "C" void fn_00b534f0();
// FUNCTION: ROBLOXSTUDIO 0x00997770
extern "C" __declspec(naked) void asm_00997770()
{
	__asm { mov ecx, dword ptr [ecx + 0xbc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, eax }
	__asm { jmp fn_00b534f0 }
}

// FUNCTION: ROBLOXSTUDIO 0x00997790
extern "C" __declspec(naked) void asm_00997790()
{
	__asm { mov eax, dword ptr [ecx + 0xb4] }
	__asm { mov eax, dword ptr [eax + 0x24] }
	__asm { mov eax, dword ptr [eax + 0x60] }
	__asm { ret }
}

extern "C" void fn_00b53580();
// FUNCTION: ROBLOXSTUDIO 0x009977a0
extern "C" __declspec(naked) void asm_009977a0()
{
	__asm { mov ecx, dword ptr [ecx + 0xbc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, eax }
	__asm { jmp fn_00b53580 }
}

extern "C" void fn_00b4ec80();
// FUNCTION: ROBLOXSTUDIO 0x00997830
extern "C" __declspec(naked) void asm_00997830()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00b4ec80 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { cdq }
	__asm { pop edi }
	__asm { idiv esi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009978c0
extern "C" __declspec(naked) void asm_009978c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xbc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { inc dword ptr [esi + 0x78] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00894570();
extern "C" void fn_00a5d310();
// FUNCTION: ROBLOXSTUDIO 0x0099a700
extern "C" __declspec(naked) void asm_0099a700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_00a5d310 }
	__asm { call fn_00894570 }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b5bd60();
// FUNCTION: ROBLOXSTUDIO 0x0099c7f0
extern "C" __declspec(naked) void asm_0099c7f0()
{
	__asm { push ecx }
	__asm { call fn_00b5bd60 }
	__asm { add esp, 4 }
	__asm { ret }
}

extern "C" void fn_00b5a020();
// FUNCTION: ROBLOXSTUDIO 0x0099c800
extern "C" __declspec(naked) void asm_0099c800()
{
	__asm { push ecx }
	__asm { call fn_00b5a020 }
	__asm { add esp, 4 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0099ce00
extern "C" __declspec(naked) void asm_0099ce00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x100] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x18] }
}

extern "C" void fn_00b5c9c0();
// FUNCTION: ROBLOXSTUDIO 0x0099d070
extern "C" __declspec(naked) void asm_0099d070()
{
	__asm { push ecx }
	__asm { call fn_00b5c9c0 }
	__asm { add esp, 4 }
	__asm { ret }
}

extern "C" void fn_00bad0f0();
// FUNCTION: ROBLOXSTUDIO 0x0099d080
extern "C" __declspec(naked) void asm_0099d080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bad0f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_006d66e0();
// FUNCTION: ROBLOXSTUDIO 0x0099d0a0
extern "C" __declspec(naked) void asm_0099d0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_006d66e0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00bb2710();
// FUNCTION: ROBLOXSTUDIO 0x0099d0c0
extern "C" __declspec(naked) void asm_0099d0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bb2710 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0099d0e0();
// FUNCTION: ROBLOXSTUDIO 0x0099d1b0
extern "C" __declspec(naked) void asm_0099d1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { add ecx, 0x94 }
	__asm { call fn_0099d0e0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099d0e0();
// FUNCTION: ROBLOXSTUDIO 0x0099d230
extern "C" __declspec(naked) void asm_0099d230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { add ecx, 0xb8 }
	__asm { call fn_0099d0e0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0099d2b0
extern "C" __declspec(naked) void asm_0099d2b0()
{
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov ecx, dword ptr [eax + 0x1c] }
	__asm { sub ecx, dword ptr [eax + 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0099d2d0
extern "C" __declspec(naked) void asm_0099d2d0()
{
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov ecx, dword ptr [eax + 0x1c] }
	__asm { sub ecx, dword ptr [eax + 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0099d320
extern "C" __declspec(naked) void asm_0099d320()
{
	__asm { mov eax, dword ptr [ecx + 0x100] }
	__asm { add eax, 4 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0099d780
extern "C" __declspec(naked) void asm_0099d780()
{
	__asm { xor al, al }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x0099dde0
extern "C" __declspec(naked) void asm_0099dde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x108] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0x10] }
}

extern "C" void fn_0099b0c0();
// FUNCTION: ROBLOXSTUDIO 0x0099ddf0
extern "C" __declspec(naked) void asm_0099ddf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0099b0c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0099b0c0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0099afb0();
// FUNCTION: ROBLOXSTUDIO 0x0099de10
extern "C" __declspec(naked) void asm_0099de10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0099afb0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0099afb0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0099e2a0();
// FUNCTION: ROBLOXSTUDIO 0x0099e060
extern "C" __declspec(naked) void asm_0099e060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movzx eax, byte ptr [ecx + 0x110] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0099e2a0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0099e2a0();
// FUNCTION: ROBLOXSTUDIO 0x0099e200
extern "C" __declspec(naked) void asm_0099e200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movzx eax, byte ptr [ecx + 0x111] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0099e2a0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0099e770
extern "C" __declspec(naked) void asm_0099e770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0099eb50
extern "C" __declspec(naked) void asm_0099eb50()
{
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { sub edx, dword ptr [ecx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { ret }
}

extern "C" void fn_007c4b50();
// FUNCTION: ROBLOXSTUDIO 0x0099fe10
extern "C" __declspec(naked) void asm_0099fe10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0x99fd30 }
	__asm { call fn_007c4b50 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c4b50();
// FUNCTION: ROBLOXSTUDIO 0x009a11a0
extern "C" __declspec(naked) void asm_009a11a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0x9a10c0 }
	__asm { call fn_007c4b50 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4970();
extern "C" void fn_009a18f0();
// FUNCTION: ROBLOXSTUDIO 0x009a12c0
extern "C" __declspec(naked) void asm_009a12c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_009a18f0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007b4970 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009b7ca0
extern "C" __declspec(naked) void asm_009b7ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { dec dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax*4 + 0x1239c5c] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x009cd060
extern "C" __declspec(naked) void asm_009cd060()
{
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 0x84], 0x113 }
	__asm { sete al }
	__asm { ret }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ecx + 0x90], al }
	__asm { setne al }
	__asm { ret }
}

extern "C" void fn_009cf400();
// FUNCTION: ROBLOXSTUDIO 0x009d03f0
extern "C" __declspec(naked) void asm_009d03f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009cf400 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009d83a0();
extern "C" void fn_00c2feb0();
// FUNCTION: ROBLOXSTUDIO 0x009d8460
extern "C" __declspec(naked) void asm_009d8460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c2feb0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_009d83a0 }
}
