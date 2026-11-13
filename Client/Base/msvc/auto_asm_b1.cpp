// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e11078[];
// FUNCTION: ROBLOXSTUDIO 0x00403ae0
extern "C" __declspec(naked) void asm_00403ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x88] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11078] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x00403b50
extern "C" __declspec(naked) void asm_00403b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00405b90
extern "C" __declspec(naked) void asm_00405b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00408320();
extern "C" void fn_0040d8c0();
// FUNCTION: ROBLOXSTUDIO 0x004062a0
extern "C" __declspec(naked) void asm_004062a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + 4] }
	__asm { call fn_0040d8c0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_0040d950();
// FUNCTION: ROBLOXSTUDIO 0x00406850
extern "C" __declspec(naked) void asm_00406850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + 4] }
	__asm { call fn_0040d950 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_0040d9e0();
// FUNCTION: ROBLOXSTUDIO 0x00406d50
extern "C" __declspec(naked) void asm_00406d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + 4] }
	__asm { call fn_0040d9e0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_0040da70();
// FUNCTION: ROBLOXSTUDIO 0x00407260
extern "C" __declspec(naked) void asm_00407260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + 4] }
	__asm { call fn_0040da70 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_0040db00();
// FUNCTION: ROBLOXSTUDIO 0x00407760
extern "C" __declspec(naked) void asm_00407760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + 4] }
	__asm { call fn_0040db00 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004123f0();
// FUNCTION: ROBLOXSTUDIO 0x00407880
extern "C" __declspec(naked) void asm_00407880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [edi] }
	__asm { call fn_004123f0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [esi + 0x44] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00408320();
// FUNCTION: ROBLOXSTUDIO 0x00407900
extern "C" __declspec(naked) void asm_00407900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408470();
// FUNCTION: ROBLOXSTUDIO 0x004079b0
extern "C" __declspec(naked) void asm_004079b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { push eax }
	__asm { call fn_00408470 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0040f980
extern "C" __declspec(naked) void asm_0040f980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push dword ptr [ecx] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00410880();
// FUNCTION: ROBLOXSTUDIO 0x00410950
extern "C" __declspec(naked) void asm_00410950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00410880 }
	__asm { fstp dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004123f0();
// FUNCTION: ROBLOXSTUDIO 0x00410ad0
extern "C" __declspec(naked) void asm_00410ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_004123f0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410c40();
// FUNCTION: ROBLOXSTUDIO 0x00410d00
extern "C" __declspec(naked) void asm_00410d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00410c40 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp + 0xf] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00412ce0();
// FUNCTION: ROBLOXSTUDIO 0x00412d20
extern "C" __declspec(naked) void asm_00412d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00412ce0 }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x00413670
extern "C" __declspec(naked) void asm_00413670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { mov ecx, 0x12bfdf8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0041fe80();
// FUNCTION: ROBLOXSTUDIO 0x00419f70
extern "C" __declspec(naked) void asm_00419f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0041fe80 }
	__asm { add esp, 0x10 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0041f970();
// FUNCTION: ROBLOXSTUDIO 0x0041af70
extern "C" __declspec(naked) void asm_0041af70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0041f970 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004246a0();
// FUNCTION: ROBLOXSTUDIO 0x00424450
extern "C" __declspec(naked) void asm_00424450()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_004246a0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x0042f470
extern "C" __declspec(naked) void asm_0042f470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { mov ecx, 0x12bfe18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043d7c0();
extern "C" void fn_007d5550();
// FUNCTION: ROBLOXSTUDIO 0x0043b420
extern "C" __declspec(naked) void asm_0043b420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0043d7c0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043e160();
// FUNCTION: ROBLOXSTUDIO 0x0043b580
extern "C" __declspec(naked) void asm_0043b580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0043e160 }
	__asm { add esp, 0x14 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x0043fba0
extern "C" __declspec(naked) void asm_0043fba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { mov ecx, 0x12bfe68 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x0043fbd0
extern "C" __declspec(naked) void asm_0043fbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { mov ecx, 0xf1a6ec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0044cd00();
extern "C" void fn_007d5710();
// FUNCTION: ROBLOXSTUDIO 0x0044a760
extern "C" __declspec(naked) void asm_0044a760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007d5710 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0044cd00 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044ce60();
extern "C" void fn_007d5be0();
// FUNCTION: ROBLOXSTUDIO 0x0044aa70
extern "C" __declspec(naked) void asm_0044aa70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007d5be0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0044ce60 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044ced0();
extern "C" void fn_0088bd20();
// FUNCTION: ROBLOXSTUDIO 0x0044abe0
extern "C" __declspec(naked) void asm_0044abe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0088bd20 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0044ced0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044d000();
extern "C" void fn_007d5860();
// FUNCTION: ROBLOXSTUDIO 0x0044ad10
extern "C" __declspec(naked) void asm_0044ad10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007d5860 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0044d000 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10eec[];
// FUNCTION: ROBLOXSTUDIO 0x0044ccd0
extern "C" __declspec(naked) void asm_0044ccd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 1 }
	__asm { push edx }
	__asm { push 0x80 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10eec] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004583d0
extern "C" __declspec(naked) void asm_004583d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { add ecx, 0x14 }
	__asm { inc edx }
	__asm { cmp dword ptr [ecx], edx }
	__asm { lea eax, [ebp - 4] }
	__asm { cmovl eax, ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101f8[];
extern "C" char g_00e101fc[];
// FUNCTION: ROBLOXSTUDIO 0x0045f610
extern "C" __declspec(naked) void asm_0045f610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { push esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e101f8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101f8[];
extern "C" char g_00e101fc[];
// FUNCTION: ROBLOXSTUDIO 0x0045f640
extern "C" __declspec(naked) void asm_0045f640()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { push esi }
	__asm { push 0 }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e101f8] }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10598[];
// FUNCTION: ROBLOXSTUDIO 0x0045feb0
extern "C" __declspec(naked) void asm_0045feb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [esi], 0xe1815c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00465ec0
extern "C" __declspec(naked) void asm_00465ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ecx + 4] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0x24] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0046f370
extern "C" __declspec(naked) void asm_0046f370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd78894 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { xor bl, bl }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" char g_00e110fc[];
// FUNCTION: ROBLOXSTUDIO 0x00476cb0
extern "C" __declspec(naked) void asm_00476cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xf12f2d }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x00478cb0
extern "C" __declspec(naked) void asm_00478cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push 0x101174c }
	__asm { push esi }
	__asm { mov ecx, 0x12c0948 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
// FUNCTION: ROBLOXSTUDIO 0x004794a0
extern "C" __declspec(naked) void asm_004794a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0xf12f2d }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004812d0
extern "C" __declspec(naked) void asm_004812d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0048c210();
// FUNCTION: ROBLOXSTUDIO 0x0048c290
extern "C" __declspec(naked) void asm_0048c290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 8 }
	__asm { lea eax, [ecx + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { add ecx, 0xc }
	__asm { call fn_0048c210 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0048e3f0();
extern "C" void fn_007d5550();
// FUNCTION: ROBLOXSTUDIO 0x0048e4e0
extern "C" __declspec(naked) void asm_0048e4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007d5550 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0048e3f0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0048eb50();
// FUNCTION: ROBLOXSTUDIO 0x0048ebe0
extern "C" __declspec(naked) void asm_0048ebe0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0048eb50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00408320();
extern "C" void fn_00495220();
// FUNCTION: ROBLOXSTUDIO 0x004913c0
extern "C" __declspec(naked) void asm_004913c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + 4] }
	__asm { call fn_00495220 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_004952b0();
// FUNCTION: ROBLOXSTUDIO 0x004919a0
extern "C" __declspec(naked) void asm_004919a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + 4] }
	__asm { call fn_004952b0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_00495340();
// FUNCTION: ROBLOXSTUDIO 0x00491ea0
extern "C" __declspec(naked) void asm_00491ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + 4] }
	__asm { call fn_00495340 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_004953d0();
// FUNCTION: ROBLOXSTUDIO 0x004923a0
extern "C" __declspec(naked) void asm_004923a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + 4] }
	__asm { call fn_004953d0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_00495460();
// FUNCTION: ROBLOXSTUDIO 0x004928a0
extern "C" __declspec(naked) void asm_004928a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + 4] }
	__asm { call fn_00495460 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_004954f0();
// FUNCTION: ROBLOXSTUDIO 0x00492da0
extern "C" __declspec(naked) void asm_00492da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + 4] }
	__asm { call fn_004954f0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00499c40
extern "C" __declspec(naked) void asm_00499c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { add ecx, dword ptr [edx + 8] }
	__asm { lea eax, [edx + 0x3c] }
	__asm { push eax }
	__asm { lea eax, [edx + 0x24] }
	__asm { push eax }
	__asm { lea eax, [edx + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x0049ff40
extern "C" __declspec(naked) void asm_0049ff40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push 0x1015598 }
	__asm { push esi }
	__asm { mov ecx, 0x12c09c8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104fc[];
extern "C" void fn_00cf6840();
// FUNCTION: ROBLOXSTUDIO 0x004a2a70
extern "C" __declspec(naked) void asm_004a2a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xffffffc0 }
	__asm { fld qword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call dword ptr [g_00e104fc] }
	__asm { add esp, 8 }
	__asm { call fn_00cf6840 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x004a4c00
extern "C" __declspec(naked) void asm_004a4c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push 0x1015f04 }
	__asm { push esi }
	__asm { mov ecx, 0x12bff18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b1190();
// FUNCTION: ROBLOXSTUDIO 0x004ae560
extern "C" __declspec(naked) void asm_004ae560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b1190 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b1470();
// FUNCTION: ROBLOXSTUDIO 0x004ae7e0
extern "C" __declspec(naked) void asm_004ae7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b1470 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b1530();
// FUNCTION: ROBLOXSTUDIO 0x004ae840
extern "C" __declspec(naked) void asm_004ae840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b1530 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0040c5b0();
// FUNCTION: ROBLOXSTUDIO 0x004b1820
extern "C" __declspec(naked) void asm_004b1820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c5b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x004b38b0
extern "C" __declspec(naked) void asm_004b38b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e11038[];
// FUNCTION: ROBLOXSTUDIO 0x004b66c0
extern "C" __declspec(naked) void asm_004b66c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push edx }
	__asm { push esi }
	__asm { mov ecx, 0x12bff28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11038] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
// FUNCTION: ROBLOXSTUDIO 0x004b66f0
extern "C" __declspec(naked) void asm_004b66f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x94] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
// FUNCTION: ROBLOXSTUDIO 0x004b6720
extern "C" __declspec(naked) void asm_004b6720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x1017b5c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e110fc[];
// FUNCTION: ROBLOXSTUDIO 0x004b6750
extern "C" __declspec(naked) void asm_004b6750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x1019c80 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
