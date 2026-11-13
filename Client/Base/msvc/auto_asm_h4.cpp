// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012fbfc0[];
extern "C" char g_012fbfe0[];
extern "C" char g_012fbff4[];
extern "C" char g_012fbff8[];
extern "C" char g_012fbffc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ded920
extern "C" __declspec(naked) void asm_00ded920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012fbffc] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbff8] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbff4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { mov ecx, 0x12fbfe0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fbfe0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fbfc0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbf80[];
extern "C" char g_012fbfa0[];
extern "C" char g_012fbfb4[];
extern "C" char g_012fbfb8[];
extern "C" char g_012fbfbc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ded9a0
extern "C" __declspec(naked) void asm_00ded9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012fbfbc] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbfb8] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbfb4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { mov ecx, 0x12fbfa0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fbfa0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fbf80], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbda8[];
extern "C" char g_012fbdc8[];
extern "C" char g_012fbddc[];
extern "C" char g_012fbde0[];
extern "C" char g_012fbde4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dedb50
extern "C" __declspec(naked) void asm_00dedb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012fbde4] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbde0] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbddc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { mov ecx, 0x12fbdc8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fbdc8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fbda8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbde8[];
extern "C" char g_012fbe08[];
extern "C" char g_012fbe1c[];
extern "C" char g_012fbe20[];
extern "C" char g_012fbe24[];
extern "C" char g_012fbe28[];
extern "C" char g_012fbe2c[];
extern "C" char g_012fbe30[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dedc60
extern "C" __declspec(naked) void asm_00dedc60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012fbe30] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbe2c] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbe28] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbe24] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbe20] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbe1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, 0x12fbe08 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fbe08] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fbde8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbe38[];
extern "C" char g_012fbe58[];
extern "C" char g_012fbe6c[];
extern "C" char g_012fbe70[];
extern "C" char g_012fbe74[];
extern "C" char g_012fbe78[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dedd00
extern "C" __declspec(naked) void asm_00dedd00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012fbe78] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbe74] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbe70] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbe6c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, 0x12fbe58 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fbe58] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fbe38], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbec0[];
extern "C" char g_012fbee0[];
extern "C" char g_012fbef4[];
extern "C" char g_012fbef8[];
extern "C" char g_012fbefc[];
extern "C" char g_012fbf00[];
extern "C" char g_012fbf04[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dedd90
extern "C" __declspec(naked) void asm_00dedd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012fbf04] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbf00] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbefc] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbef8] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fbef4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, 0x12fbee0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fbee0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fbec0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fe160[];
extern "C" char g_012fe180[];
extern "C" char g_012fe190[];
extern "C" char g_012fe194[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df11b0
extern "C" __declspec(naked) void asm_00df11b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_012fe194] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012fe190] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x12fe180 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fe180] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fe160], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fe540[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df1c20
extern "C" __declspec(naked) void asm_00df1c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012fe540] }
	__asm { sub esp, 8 }
	__asm { mov ecx, 0x12fe540 }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov esi, dword ptr [g_012fe540] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303d68[];
extern "C" char g_01303d88[];
extern "C" char g_01303d98[];
extern "C" char g_01303d9c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7e40
extern "C" __declspec(naked) void asm_00df7e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01303d9c] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_01303d98] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x1303d88 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303d88] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01303d68], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307db0[];
extern "C" char g_01307dd0[];
extern "C" char g_01307de0[];
extern "C" char g_01307de4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd180
extern "C" __declspec(naked) void asm_00dfd180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01307de4] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_01307de0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x1307dd0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01307dd0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01307db0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307d78[];
extern "C" char g_01307d98[];
extern "C" char g_01307da8[];
extern "C" char g_01307dac[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd680
extern "C" __declspec(naked) void asm_00dfd680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01307dac] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_01307da8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x1307d98 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01307d98] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01307d78], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c458[];
extern "C" char g_0130c478[];
extern "C" char g_0130c488[];
extern "C" char g_0130c48c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e02a20
extern "C" __declspec(naked) void asm_00e02a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0130c48c] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130c488] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x130c478 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130c478] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130c458], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ce58[];
extern "C" char g_0130ce78[];
extern "C" char g_0130ce88[];
extern "C" char g_0130ce8c[];
extern "C" char g_0130ce90[];
extern "C" char g_0130ce94[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e04230
extern "C" __declspec(naked) void asm_00e04230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0130ce94] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130ce90] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130ce8c] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130ce88] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, 0x130ce78 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130ce78] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130ce58], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d280[];
extern "C" char g_0130d2a0[];
extern "C" char g_0130d2b0[];
extern "C" char g_0130d2b4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e04960
extern "C" __declspec(naked) void asm_00e04960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0130d2b4] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130d2b0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x130d2a0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130d2a0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130d280], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d1d0[];
extern "C" char g_0130d1f0[];
extern "C" char g_0130d200[];
extern "C" char g_0130d204[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e04b20
extern "C" __declspec(naked) void asm_00e04b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0130d204] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130d200] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x130d1f0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130d1f0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130d1d0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130dc60[];
extern "C" char g_0130dc80[];
extern "C" char g_0130dc90[];
extern "C" char g_0130dc94[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e05770
extern "C" __declspec(naked) void asm_00e05770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0130dc94] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130dc90] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x130dc80 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130dc80] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130dc60], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e148[];
extern "C" char g_0130e168[];
extern "C" char g_0130e178[];
extern "C" char g_0130e17c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e060a0
extern "C" __declspec(naked) void asm_00e060a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0130e17c] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130e178] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x130e168 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130e168] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e148], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e0d0[];
extern "C" char g_0130e0f0[];
extern "C" char g_0130e100[];
extern "C" char g_0130e104[];
extern "C" char g_0130e108[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e06120
extern "C" __declspec(naked) void asm_00e06120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0130e108] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130e104] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130e100] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { mov ecx, 0x130e0f0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130e0f0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e0d0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e4f0[];
extern "C" char g_0130e510[];
extern "C" char g_0130e520[];
extern "C" char g_0130e524[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e06630
extern "C" __declspec(naked) void asm_00e06630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0130e524] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130e520] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x130e510 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130e510] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e4f0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e4b8[];
extern "C" char g_0130e4d8[];
extern "C" char g_0130e4e8[];
extern "C" char g_0130e4ec[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e06760
extern "C" __declspec(naked) void asm_00e06760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0130e4ec] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130e4e8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x130e4d8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130e4d8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e4b8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130eb00[];
extern "C" char g_0130eb20[];
extern "C" char g_0130eb30[];
extern "C" char g_0130eb34[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07320
extern "C" __declspec(naked) void asm_00e07320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0130eb34] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_0130eb30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x130eb20 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130eb20] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130eb00], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130eea8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00b69050();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07960
extern "C" __declspec(naked) void asm_00e07960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130eea8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, 0x130eea8 }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_00b69050 }
	__asm { mov esi, dword ptr [g_0130eea8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130eeb8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00b69050();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e079e0
extern "C" __declspec(naked) void asm_00e079e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130eeb8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, 0x130eeb8 }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_00b69050 }
	__asm { mov esi, dword ptr [g_0130eeb8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f178[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07ae0
extern "C" __declspec(naked) void asm_00e07ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130f178] }
	__asm { sub esp, 8 }
	__asm { mov ecx, 0x130f178 }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov esi, dword ptr [g_0130f178] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f2ac[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07c90
extern "C" __declspec(naked) void asm_00e07c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130f2ac] }
	__asm { sub esp, 8 }
	__asm { mov ecx, 0x130f2ac }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov esi, dword ptr [g_0130f2ac] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f29c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07d10
extern "C" __declspec(naked) void asm_00e07d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130f29c] }
	__asm { sub esp, 8 }
	__asm { mov ecx, 0x130f29c }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov esi, dword ptr [g_0130f29c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f2d0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07d90
extern "C" __declspec(naked) void asm_00e07d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130f2d0] }
	__asm { sub esp, 8 }
	__asm { mov ecx, 0x130f2d0 }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov esi, dword ptr [g_0130f2d0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f2f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07e10
extern "C" __declspec(naked) void asm_00e07e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130f2f0] }
	__asm { sub esp, 8 }
	__asm { mov ecx, 0x130f2f0 }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov esi, dword ptr [g_0130f2f0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f310[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07e90
extern "C" __declspec(naked) void asm_00e07e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130f310] }
	__asm { sub esp, 8 }
	__asm { mov ecx, 0x130f310 }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov esi, dword ptr [g_0130f310] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f394[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07fa0
extern "C" __declspec(naked) void asm_00e07fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130f394] }
	__asm { sub esp, 8 }
	__asm { mov ecx, 0x130f394 }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov esi, dword ptr [g_0130f394] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f384[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e08020
extern "C" __declspec(naked) void asm_00e08020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130f384] }
	__asm { sub esp, 8 }
	__asm { mov ecx, 0x130f384 }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov esi, dword ptr [g_0130f384] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013112f0[];
extern "C" char g_01311310[];
extern "C" char g_01311320[];
extern "C" char g_01311324[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0bd50
extern "C" __declspec(naked) void asm_00e0bd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01311324] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_01311320] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x1311310 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01311310] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013112f0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013140e0[];
extern "C" char g_01314100[];
extern "C" char g_01314110[];
extern "C" char g_01314114[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e1e0
extern "C" __declspec(naked) void asm_00e0e1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01314114] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_01314110] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { mov ecx, 0x1314100 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01314100] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013140e0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
