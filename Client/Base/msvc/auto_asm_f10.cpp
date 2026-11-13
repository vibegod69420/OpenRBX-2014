// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_01301a8c[];
extern "C" char g_01301aac[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df59d0
extern "C" __declspec(naked) void asm_00df59d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1301aac }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01301aac] }
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
	__asm { mov dword ptr [g_01301a8c], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301ab8[];
extern "C" char g_01301ad8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df5a30
extern "C" __declspec(naked) void asm_00df5a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1301ad8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01301ad8] }
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
	__asm { mov dword ptr [g_01301ab8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013019dc[];
extern "C" char g_013019fc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df5a90
extern "C" __declspec(naked) void asm_00df5a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13019fc }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013019fc] }
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
	__asm { mov dword ptr [g_013019dc], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013019b0[];
extern "C" char g_013019d0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df5af0
extern "C" __declspec(naked) void asm_00df5af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13019d0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013019d0] }
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
	__asm { mov dword ptr [g_013019b0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301984[];
extern "C" char g_013019a4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df5b50
extern "C" __declspec(naked) void asm_00df5b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13019a4 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013019a4] }
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
	__asm { mov dword ptr [g_01301984], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301850[];
extern "C" char g_01301870[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df5bb0
extern "C" __declspec(naked) void asm_00df5bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1301870 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01301870] }
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
	__asm { mov dword ptr [g_01301850], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301758[];
extern "C" char g_01301778[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df5c10
extern "C" __declspec(naked) void asm_00df5c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1301778 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01301778] }
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
	__asm { mov dword ptr [g_01301758], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301728[];
extern "C" char g_01301748[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df5c70
extern "C" __declspec(naked) void asm_00df5c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1301748 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01301748] }
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
	__asm { mov dword ptr [g_01301728], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301788[];
extern "C" char g_013017a8[];
extern "C" char g_013017b8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df5cd0
extern "C" __declspec(naked) void asm_00df5cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_013017b8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x13017a8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013017a8] }
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
	__asm { mov dword ptr [g_01301788], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013021b8[];
extern "C" char g_013021d8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df68a0
extern "C" __declspec(naked) void asm_00df68a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13021d8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013021d8] }
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
	__asm { mov dword ptr [g_013021b8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01302158[];
extern "C" char g_01302178[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6900
extern "C" __declspec(naked) void asm_00df6900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1302178 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01302178] }
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
	__asm { mov dword ptr [g_01302158], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01302188[];
extern "C" char g_013021a8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6960
extern "C" __declspec(naked) void asm_00df6960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13021a8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013021a8] }
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
	__asm { mov dword ptr [g_01302188], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01302218[];
extern "C" char g_01302238[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df69c0
extern "C" __declspec(naked) void asm_00df69c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1302238 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01302238] }
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
	__asm { mov dword ptr [g_01302218], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01302248[];
extern "C" char g_01302268[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6a20
extern "C" __declspec(naked) void asm_00df6a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1302268 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01302268] }
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
	__asm { mov dword ptr [g_01302248], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303578[];
extern "C" char g_01303598[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6b50
extern "C" __declspec(naked) void asm_00df6b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1303598 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303598] }
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
	__asm { mov dword ptr [g_01303578], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013035b0[];
extern "C" char g_013035d0[];
extern "C" char g_013035e4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6bb0
extern "C" __declspec(naked) void asm_00df6bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_013035e4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x13035d0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013035d0] }
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
	__asm { mov dword ptr [g_013035b0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303380[];
extern "C" char g_013033a0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6ca0
extern "C" __declspec(naked) void asm_00df6ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13033a0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013033a0] }
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
	__asm { mov dword ptr [g_01303380], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013033b8[];
extern "C" char g_013033d8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6d80
extern "C" __declspec(naked) void asm_00df6d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13033d8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013033d8] }
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
	__asm { mov dword ptr [g_013033b8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303508[];
extern "C" char g_01303528[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6de0
extern "C" __declspec(naked) void asm_00df6de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1303528 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303528] }
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
	__asm { mov dword ptr [g_01303508], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013034d0[];
extern "C" char g_013034f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6e40
extern "C" __declspec(naked) void asm_00df6e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13034f0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013034f0] }
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
	__asm { mov dword ptr [g_013034d0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303428[];
extern "C" char g_01303448[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6ea0
extern "C" __declspec(naked) void asm_00df6ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1303448 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303448] }
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
	__asm { mov dword ptr [g_01303428], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303498[];
extern "C" char g_013034b8[];
extern "C" char g_013034cc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6f00
extern "C" __declspec(naked) void asm_00df6f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_013034cc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x13034b8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013034b8] }
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
	__asm { mov dword ptr [g_01303498], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013035e8[];
extern "C" char g_01303608[];
extern "C" char g_0130361c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6f70
extern "C" __declspec(naked) void asm_00df6f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0130361c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1303608 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303608] }
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
	__asm { mov dword ptr [g_013035e8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303658[];
extern "C" char g_01303678[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6fe0
extern "C" __declspec(naked) void asm_00df6fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1303678 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303678] }
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
	__asm { mov dword ptr [g_01303658], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303620[];
extern "C" char g_01303640[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7040
extern "C" __declspec(naked) void asm_00df7040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1303640 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303640] }
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
	__asm { mov dword ptr [g_01303620], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303918[];
extern "C" char g_01303938[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7570
extern "C" __declspec(naked) void asm_00df7570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1303938 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303938] }
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
	__asm { mov dword ptr [g_01303918], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013038e0[];
extern "C" char g_01303900[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df75d0
extern "C" __declspec(naked) void asm_00df75d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1303900 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303900] }
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
	__asm { mov dword ptr [g_013038e0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303838[];
extern "C" char g_01303858[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7630
extern "C" __declspec(naked) void asm_00df7630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1303858 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303858] }
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
	__asm { mov dword ptr [g_01303838], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303870[];
extern "C" char g_01303890[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7690
extern "C" __declspec(naked) void asm_00df7690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1303890 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303890] }
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
	__asm { mov dword ptr [g_01303870], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013038a8[];
extern "C" char g_013038c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df76f0
extern "C" __declspec(naked) void asm_00df76f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13038c8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013038c8] }
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
	__asm { mov dword ptr [g_013038a8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303950[];
extern "C" char g_01303970[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7750
extern "C" __declspec(naked) void asm_00df7750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1303970 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303970] }
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
	__asm { mov dword ptr [g_01303950], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303bb8[];
extern "C" char g_01303bd8[];
extern "C" char g_01303be8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df77b0
extern "C" __declspec(naked) void asm_00df77b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01303be8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1303bd8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303bd8] }
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
	__asm { mov dword ptr [g_01303bb8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303bf0[];
extern "C" char g_01303c10[];
extern "C" char g_01303c20[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7820
extern "C" __declspec(naked) void asm_00df7820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01303c20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1303c10 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303c10] }
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
	__asm { mov dword ptr [g_01303bf0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303da0[];
extern "C" char g_01303dc0[];
extern "C" char g_01303dd0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7890
extern "C" __declspec(naked) void asm_00df7890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01303dd0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1303dc0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303dc0] }
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
	__asm { mov dword ptr [g_01303da0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303d00[];
extern "C" char g_01303d20[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7900
extern "C" __declspec(naked) void asm_00df7900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1303d20 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303d20] }
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
	__asm { mov dword ptr [g_01303d00], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303c98[];
extern "C" char g_01303cb8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7960
extern "C" __declspec(naked) void asm_00df7960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1303cb8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303cb8] }
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
	__asm { mov dword ptr [g_01303c98], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303d30[];
extern "C" char g_01303d50[];
extern "C" char g_01303d60[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7b40
extern "C" __declspec(naked) void asm_00df7b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01303d60] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1303d50 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303d50] }
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
	__asm { mov dword ptr [g_01303d30], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303cc8[];
extern "C" char g_01303ce8[];
extern "C" char g_01303cf8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7bb0
extern "C" __declspec(naked) void asm_00df7bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01303cf8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1303ce8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303ce8] }
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
	__asm { mov dword ptr [g_01303cc8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303dd8[];
extern "C" char g_01303df8[];
extern "C" char g_01303e08[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7cf0
extern "C" __declspec(naked) void asm_00df7cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01303e08] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1303df8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303df8] }
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
	__asm { mov dword ptr [g_01303dd8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303e10[];
extern "C" char g_01303e30[];
extern "C" char g_01303e40[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7d60
extern "C" __declspec(naked) void asm_00df7d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01303e40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1303e30 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303e30] }
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
	__asm { mov dword ptr [g_01303e10], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303e48[];
extern "C" char g_01303e68[];
extern "C" char g_01303e78[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7dd0
extern "C" __declspec(naked) void asm_00df7dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01303e78] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1303e68 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303e68] }
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
	__asm { mov dword ptr [g_01303e48], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013039f8[];
extern "C" char g_01303a18[];
extern "C" char g_01303a28[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8390
extern "C" __declspec(naked) void asm_00df8390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01303a28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1303a18 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303a18] }
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
	__asm { mov dword ptr [g_013039f8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303ff8[];
extern "C" char g_01304018[];
extern "C" char g_01304028[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8570
extern "C" __declspec(naked) void asm_00df8570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01304028] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1304018 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304018] }
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
	__asm { mov dword ptr [g_01303ff8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303fc0[];
extern "C" char g_01303fe0[];
extern "C" char g_01303ff0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df85e0
extern "C" __declspec(naked) void asm_00df85e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01303ff0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1303fe0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303fe0] }
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
	__asm { mov dword ptr [g_01303fc0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304068[];
extern "C" char g_01304088[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8790
extern "C" __declspec(naked) void asm_00df8790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304088 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304088] }
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
	__asm { mov dword ptr [g_01304068], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304204[];
extern "C" char g_01304224[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df88b0
extern "C" __declspec(naked) void asm_00df88b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304224 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304224] }
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
	__asm { mov dword ptr [g_01304204], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304260[];
extern "C" char g_01304280[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8910
extern "C" __declspec(naked) void asm_00df8910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304280 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304280] }
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
	__asm { mov dword ptr [g_01304260], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304230[];
extern "C" char g_01304250[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8970
extern "C" __declspec(naked) void asm_00df8970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304250 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304250] }
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
	__asm { mov dword ptr [g_01304230], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013043e8[];
extern "C" char g_01304408[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df89d0
extern "C" __declspec(naked) void asm_00df89d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304408 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304408] }
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
	__asm { mov dword ptr [g_013043e8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304420[];
extern "C" char g_01304440[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8a30
extern "C" __declspec(naked) void asm_00df8a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304440 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304440] }
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
	__asm { mov dword ptr [g_01304420], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013043b0[];
extern "C" char g_013043d0[];
extern "C" char g_013043e0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8ca0
extern "C" __declspec(naked) void asm_00df8ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_013043e0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x13043d0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013043d0] }
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
	__asm { mov dword ptr [g_013043b0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304bb4[];
extern "C" char g_01304bd4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df91e0
extern "C" __declspec(naked) void asm_00df91e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304bd4 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304bd4] }
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
	__asm { mov dword ptr [g_01304bb4], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304cbc[];
extern "C" char g_01304cdc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9240
extern "C" __declspec(naked) void asm_00df9240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304cdc }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304cdc] }
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
	__asm { mov dword ptr [g_01304cbc], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013047cc[];
extern "C" char g_013047ec[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df92a0
extern "C" __declspec(naked) void asm_00df92a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13047ec }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013047ec] }
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
	__asm { mov dword ptr [g_013047cc], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130487c[];
extern "C" char g_0130489c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9300
extern "C" __declspec(naked) void asm_00df9300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x130489c }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130489c] }
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
	__asm { mov dword ptr [g_0130487c], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304aac[];
extern "C" char g_01304acc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9360
extern "C" __declspec(naked) void asm_00df9360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304acc }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304acc] }
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
	__asm { mov dword ptr [g_01304aac], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304a50[];
extern "C" char g_01304a70[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df93c0
extern "C" __declspec(naked) void asm_00df93c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304a70 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304a70] }
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
	__asm { mov dword ptr [g_01304a50], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013049f8[];
extern "C" char g_01304a18[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9420
extern "C" __declspec(naked) void asm_00df9420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304a18 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304a18] }
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
	__asm { mov dword ptr [g_013049f8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304970[];
extern "C" char g_01304990[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9480
extern "C" __declspec(naked) void asm_00df9480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304990 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304990] }
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
	__asm { mov dword ptr [g_01304970], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304918[];
extern "C" char g_01304938[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df94e0
extern "C" __declspec(naked) void asm_00df94e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304938 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304938] }
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
	__asm { mov dword ptr [g_01304918], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304824[];
extern "C" char g_01304844[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9540
extern "C" __declspec(naked) void asm_00df9540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304844 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304844] }
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
	__asm { mov dword ptr [g_01304824], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304504[];
extern "C" char g_01304524[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df96c0
extern "C" __declspec(naked) void asm_00df96c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304524 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304524] }
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
	__asm { mov dword ptr [g_01304504], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304690[];
extern "C" char g_013046b0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9720
extern "C" __declspec(naked) void asm_00df9720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13046b0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013046b0] }
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
	__asm { mov dword ptr [g_01304690], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304638[];
extern "C" char g_01304658[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9780
extern "C" __declspec(naked) void asm_00df9780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304658 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304658] }
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
	__asm { mov dword ptr [g_01304638], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304664[];
extern "C" char g_01304684[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df97e0
extern "C" __declspec(naked) void asm_00df97e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304684 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304684] }
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
	__asm { mov dword ptr [g_01304664], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013046e8[];
extern "C" char g_01304708[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9840
extern "C" __declspec(naked) void asm_00df9840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304708 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304708] }
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
	__asm { mov dword ptr [g_013046e8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304530[];
extern "C" char g_01304550[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df98a0
extern "C" __declspec(naked) void asm_00df98a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304550 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304550] }
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
	__asm { mov dword ptr [g_01304530], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013046bc[];
extern "C" char g_013046dc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9900
extern "C" __declspec(naked) void asm_00df9900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13046dc }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013046dc] }
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
	__asm { mov dword ptr [g_013046bc], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013044d8[];
extern "C" char g_013044f8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9960
extern "C" __declspec(naked) void asm_00df9960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13044f8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013044f8] }
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
	__asm { mov dword ptr [g_013044d8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130460c[];
extern "C" char g_0130462c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df99c0
extern "C" __declspec(naked) void asm_00df99c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x130462c }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130462c] }
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
	__asm { mov dword ptr [g_0130460c], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013045b4[];
extern "C" char g_013045d4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9a20
extern "C" __declspec(naked) void asm_00df9a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13045d4 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013045d4] }
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
	__asm { mov dword ptr [g_013045b4], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304770[];
extern "C" char g_01304790[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9a80
extern "C" __declspec(naked) void asm_00df9a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304790 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304790] }
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
	__asm { mov dword ptr [g_01304770], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013045e0[];
extern "C" char g_01304600[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9ae0
extern "C" __declspec(naked) void asm_00df9ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1304600 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304600] }
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
	__asm { mov dword ptr [g_013045e0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305558[];
extern "C" char g_01305578[];
extern "C" char g_0130558c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9e20
extern "C" __declspec(naked) void asm_00df9e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0130558c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1305578 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305578] }
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
	__asm { mov dword ptr [g_01305558], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305bd0[];
extern "C" char g_01305bf0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa030
extern "C" __declspec(naked) void asm_00dfa030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305bf0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305bf0] }
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
	__asm { mov dword ptr [g_01305bd0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305668[];
extern "C" char g_01305688[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa0f0
extern "C" __declspec(naked) void asm_00dfa0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305688 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305688] }
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
	__asm { mov dword ptr [g_01305668], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305b70[];
extern "C" char g_01305b90[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa150
extern "C" __declspec(naked) void asm_00dfa150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305b90 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305b90] }
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
	__asm { mov dword ptr [g_01305b70], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305ba0[];
extern "C" char g_01305bc0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa1b0
extern "C" __declspec(naked) void asm_00dfa1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305bc0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305bc0] }
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
	__asm { mov dword ptr [g_01305ba0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305608[];
extern "C" char g_01305628[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa210
extern "C" __declspec(naked) void asm_00dfa210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305628 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305628] }
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
	__asm { mov dword ptr [g_01305608], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305758[];
extern "C" char g_01305778[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa270
extern "C" __declspec(naked) void asm_00dfa270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305778 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305778] }
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
	__asm { mov dword ptr [g_01305758], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013056c8[];
extern "C" char g_013056e8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa2d0
extern "C" __declspec(naked) void asm_00dfa2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13056e8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013056e8] }
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
	__asm { mov dword ptr [g_013056c8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013056f8[];
extern "C" char g_01305718[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa330
extern "C" __declspec(naked) void asm_00dfa330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305718 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305718] }
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
	__asm { mov dword ptr [g_013056f8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013058e8[];
extern "C" char g_01305908[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa390
extern "C" __declspec(naked) void asm_00dfa390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305908 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305908] }
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
	__asm { mov dword ptr [g_013058e8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305698[];
extern "C" char g_013056b8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa3f0
extern "C" __declspec(naked) void asm_00dfa3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13056b8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013056b8] }
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
	__asm { mov dword ptr [g_01305698], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013057e8[];
extern "C" char g_01305808[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa450
extern "C" __declspec(naked) void asm_00dfa450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305808 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305808] }
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
	__asm { mov dword ptr [g_013057e8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305788[];
extern "C" char g_013057a8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa4b0
extern "C" __declspec(naked) void asm_00dfa4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13057a8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013057a8] }
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
	__asm { mov dword ptr [g_01305788], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305638[];
extern "C" char g_01305658[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa510
extern "C" __declspec(naked) void asm_00dfa510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305658 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305658] }
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
	__asm { mov dword ptr [g_01305638], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013057b8[];
extern "C" char g_013057d8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa570
extern "C" __declspec(naked) void asm_00dfa570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13057d8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013057d8] }
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
	__asm { mov dword ptr [g_013057b8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305848[];
extern "C" char g_01305868[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa5d0
extern "C" __declspec(naked) void asm_00dfa5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305868 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305868] }
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
	__asm { mov dword ptr [g_01305848], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305b10[];
extern "C" char g_01305b30[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa630
extern "C" __declspec(naked) void asm_00dfa630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305b30 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305b30] }
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
	__asm { mov dword ptr [g_01305b10], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305b40[];
extern "C" char g_01305b60[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa690
extern "C" __declspec(naked) void asm_00dfa690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305b60 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305b60] }
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
	__asm { mov dword ptr [g_01305b40], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305728[];
extern "C" char g_01305748[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa6f0
extern "C" __declspec(naked) void asm_00dfa6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305748 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305748] }
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
	__asm { mov dword ptr [g_01305728], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305818[];
extern "C" char g_01305838[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa750
extern "C" __declspec(naked) void asm_00dfa750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305838 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305838] }
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
	__asm { mov dword ptr [g_01305818], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305918[];
extern "C" char g_01305938[];
extern "C" char g_0130594c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa860
extern "C" __declspec(naked) void asm_00dfa860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_0130594c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1305938 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305938] }
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
	__asm { mov dword ptr [g_01305918], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013058b0[];
extern "C" char g_013058d0[];
extern "C" char g_013058e4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa8d0
extern "C" __declspec(naked) void asm_00dfa8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_013058e4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x13058d0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013058d0] }
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
	__asm { mov dword ptr [g_013058b0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305878[];
extern "C" char g_01305898[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa940
extern "C" __declspec(naked) void asm_00dfa940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305898 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305898] }
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
	__asm { mov dword ptr [g_01305878], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305950[];
extern "C" char g_01305970[];
extern "C" char g_01305984[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfab80
extern "C" __declspec(naked) void asm_00dfab80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01305984] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1305970 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305970] }
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
	__asm { mov dword ptr [g_01305950], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305590[];
extern "C" char g_013055b0[];
extern "C" char g_013055c4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfabf0
extern "C" __declspec(naked) void asm_00dfabf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_013055c4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x13055b0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013055b0] }
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
	__asm { mov dword ptr [g_01305590], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305520[];
extern "C" char g_01305540[];
extern "C" char g_01305554[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfac60
extern "C" __declspec(naked) void asm_00dfac60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01305554] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1305540 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305540] }
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
	__asm { mov dword ptr [g_01305520], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305ad8[];
extern "C" char g_01305af8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfada0
extern "C" __declspec(naked) void asm_00dfada0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305af8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305af8] }
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
	__asm { mov dword ptr [g_01305ad8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305e68[];
extern "C" char g_01305e88[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfb410
extern "C" __declspec(naked) void asm_00dfb410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305e88 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305e88] }
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
	__asm { mov dword ptr [g_01305e68], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305e30[];
extern "C" char g_01305e50[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfb470
extern "C" __declspec(naked) void asm_00dfb470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305e50 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305e50] }
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
	__asm { mov dword ptr [g_01305e30], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306068[];
extern "C" char g_01306088[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfb4d0
extern "C" __declspec(naked) void asm_00dfb4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1306088 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306088] }
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
	__asm { mov dword ptr [g_01306068], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306028[];
extern "C" char g_01306048[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfb530
extern "C" __declspec(naked) void asm_00dfb530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1306048 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306048] }
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
	__asm { mov dword ptr [g_01306028], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305ed8[];
extern "C" char g_01305ef8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfb590
extern "C" __declspec(naked) void asm_00dfb590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305ef8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305ef8] }
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
	__asm { mov dword ptr [g_01305ed8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305f48[];
extern "C" char g_01305f68[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfb5f0
extern "C" __declspec(naked) void asm_00dfb5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305f68 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305f68] }
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
	__asm { mov dword ptr [g_01305f48], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305ea0[];
extern "C" char g_01305ec0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfb650
extern "C" __declspec(naked) void asm_00dfb650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305ec0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305ec0] }
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
	__asm { mov dword ptr [g_01305ea0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305f10[];
extern "C" char g_01305f30[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfb6b0
extern "C" __declspec(naked) void asm_00dfb6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1305f30 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305f30] }
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
	__asm { mov dword ptr [g_01305f10], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306d88[];
extern "C" char g_01306da8[];
extern "C" char g_01306db8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc120
extern "C" __declspec(naked) void asm_00dfc120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01306db8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1306da8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306da8] }
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
	__asm { mov dword ptr [g_01306d88], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306f78[];
extern "C" char g_01306f98[];
extern "C" char g_01306fa8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc190
extern "C" __declspec(naked) void asm_00dfc190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01306fa8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1306f98 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306f98] }
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
	__asm { mov dword ptr [g_01306f78], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306d50[];
extern "C" char g_01306d70[];
extern "C" char g_01306d80[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc200
extern "C" __declspec(naked) void asm_00dfc200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01306d80] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1306d70 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306d70] }
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
	__asm { mov dword ptr [g_01306d50], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306f48[];
extern "C" char g_01306f68[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc270
extern "C" __declspec(naked) void asm_00dfc270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1306f68 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306f68] }
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
	__asm { mov dword ptr [g_01306f48], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306e58[];
extern "C" char g_01306e78[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc2d0
extern "C" __declspec(naked) void asm_00dfc2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1306e78 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306e78] }
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
	__asm { mov dword ptr [g_01306e58], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306e28[];
extern "C" char g_01306e48[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc330
extern "C" __declspec(naked) void asm_00dfc330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1306e48 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306e48] }
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
	__asm { mov dword ptr [g_01306e28], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306e88[];
extern "C" char g_01306ea8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc390
extern "C" __declspec(naked) void asm_00dfc390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1306ea8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306ea8] }
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
	__asm { mov dword ptr [g_01306e88], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306ee8[];
extern "C" char g_01306f08[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc3f0
extern "C" __declspec(naked) void asm_00dfc3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1306f08 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306f08] }
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
	__asm { mov dword ptr [g_01306ee8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306eb8[];
extern "C" char g_01306ed8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc450
extern "C" __declspec(naked) void asm_00dfc450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1306ed8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306ed8] }
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
	__asm { mov dword ptr [g_01306eb8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306f18[];
extern "C" char g_01306f38[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc4b0
extern "C" __declspec(naked) void asm_00dfc4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1306f38 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306f38] }
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
	__asm { mov dword ptr [g_01306f18], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306dc0[];
extern "C" char g_01306de0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc510
extern "C" __declspec(naked) void asm_00dfc510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1306de0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306de0] }
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
	__asm { mov dword ptr [g_01306dc0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306fb0[];
extern "C" char g_01306fd0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc570
extern "C" __declspec(naked) void asm_00dfc570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1306fd0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306fd0] }
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
	__asm { mov dword ptr [g_01306fb0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01306d20[];
extern "C" char g_01306d40[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc5d0
extern "C" __declspec(naked) void asm_00dfc5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1306d40 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01306d40] }
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
	__asm { mov dword ptr [g_01306d20], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307fa8[];
extern "C" char g_01307fc8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd120
extern "C" __declspec(naked) void asm_00dfd120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1307fc8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01307fc8] }
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
	__asm { mov dword ptr [g_01307fa8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307de8[];
extern "C" char g_01307e08[];
extern "C" char g_01307e18[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd200
extern "C" __declspec(naked) void asm_00dfd200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01307e18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1307e08 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01307e08] }
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
	__asm { mov dword ptr [g_01307de8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307e20[];
extern "C" char g_01307e40[];
extern "C" char g_01307e50[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd270
extern "C" __declspec(naked) void asm_00dfd270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01307e50] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1307e40 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01307e40] }
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
	__asm { mov dword ptr [g_01307e20], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307e58[];
extern "C" char g_01307e78[];
extern "C" char g_01307e88[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd440
extern "C" __declspec(naked) void asm_00dfd440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01307e88] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1307e78 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01307e78] }
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
	__asm { mov dword ptr [g_01307e58], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307e90[];
extern "C" char g_01307eb0[];
extern "C" char g_01307ec0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd610
extern "C" __declspec(naked) void asm_00dfd610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01307ec0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1307eb0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01307eb0] }
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
	__asm { mov dword ptr [g_01307e90], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013080bc[];
extern "C" char g_013080dc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd790
extern "C" __declspec(naked) void asm_00dfd790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13080dc }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013080dc] }
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
	__asm { mov dword ptr [g_013080bc], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308084[];
extern "C" char g_013080a4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd7f0
extern "C" __declspec(naked) void asm_00dfd7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13080a4 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013080a4] }
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
	__asm { mov dword ptr [g_01308084], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013080f4[];
extern "C" char g_01308114[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd850
extern "C" __declspec(naked) void asm_00dfd850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1308114 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308114] }
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
	__asm { mov dword ptr [g_013080f4], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130812c[];
extern "C" char g_0130814c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd8b0
extern "C" __declspec(naked) void asm_00dfd8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x130814c }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130814c] }
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
	__asm { mov dword ptr [g_0130812c], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013081d0[];
extern "C" char g_013081f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd910
extern "C" __declspec(naked) void asm_00dfd910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13081f0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013081f0] }
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
	__asm { mov dword ptr [g_013081d0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013081fc[];
extern "C" char g_0130821c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd970
extern "C" __declspec(naked) void asm_00dfd970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x130821c }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130821c] }
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
	__asm { mov dword ptr [g_013081fc], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013082c0[];
extern "C" char g_013082e0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfda80
extern "C" __declspec(naked) void asm_00dfda80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13082e0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013082e0] }
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
	__asm { mov dword ptr [g_013082c0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013082ec[];
extern "C" char g_0130830c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfdae0
extern "C" __declspec(naked) void asm_00dfdae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x130830c }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130830c] }
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
	__asm { mov dword ptr [g_013082ec], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308264[];
extern "C" char g_01308284[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfdb40
extern "C" __declspec(naked) void asm_00dfdb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1308284 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308284] }
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
	__asm { mov dword ptr [g_01308264], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308500[];
extern "C" char g_01308520[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfde20
extern "C" __declspec(naked) void asm_00dfde20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1308520 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308520] }
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
	__asm { mov dword ptr [g_01308500], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013084a0[];
extern "C" char g_013084c0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe210
extern "C" __declspec(naked) void asm_00dfe210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13084c0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013084c0] }
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
	__asm { mov dword ptr [g_013084a0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013084d0[];
extern "C" char g_013084f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe270
extern "C" __declspec(naked) void asm_00dfe270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13084f0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013084f0] }
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
	__asm { mov dword ptr [g_013084d0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013086a8[];
extern "C" char g_013086c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe3f0
extern "C" __declspec(naked) void asm_00dfe3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13086c8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013086c8] }
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
	__asm { mov dword ptr [g_013086a8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130870c[];
extern "C" char g_0130872c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe450
extern "C" __declspec(naked) void asm_00dfe450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x130872c }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130872c] }
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
	__asm { mov dword ptr [g_0130870c], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013086d4[];
extern "C" char g_013086f4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe4b0
extern "C" __declspec(naked) void asm_00dfe4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x13086f4 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013086f4] }
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
	__asm { mov dword ptr [g_013086d4], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308744[];
extern "C" char g_01308764[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe510
extern "C" __declspec(naked) void asm_00dfe510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1308764 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308764] }
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
	__asm { mov dword ptr [g_01308744], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308610[];
extern "C" char g_01308630[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe570
extern "C" __declspec(naked) void asm_00dfe570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1308630 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308630] }
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
	__asm { mov dword ptr [g_01308610], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308640[];
extern "C" char g_01308660[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe5d0
extern "C" __declspec(naked) void asm_00dfe5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1308660 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308660] }
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
	__asm { mov dword ptr [g_01308640], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309428[];
extern "C" char g_01309448[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfef20
extern "C" __declspec(naked) void asm_00dfef20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1309448 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01309448] }
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
	__asm { mov dword ptr [g_01309428], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309318[];
extern "C" char g_01309338[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dff130
extern "C" __declspec(naked) void asm_00dff130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1309338 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01309338] }
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
	__asm { mov dword ptr [g_01309318], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309758[];
extern "C" char g_01309778[];
extern "C" char g_01309788[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dffde0
extern "C" __declspec(naked) void asm_00dffde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [g_01309788] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1309778 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01309778] }
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
	__asm { mov dword ptr [g_01309758], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309f90[];
extern "C" char g_01309fb0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e00220
extern "C" __declspec(naked) void asm_00e00220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1309fb0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01309fb0] }
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
	__asm { mov dword ptr [g_01309f90], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130a1b8[];
extern "C" char g_0130a1d8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e007c0
extern "C" __declspec(naked) void asm_00e007c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x130a1d8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130a1d8] }
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
	__asm { mov dword ptr [g_0130a1b8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309fc0[];
extern "C" char g_01309fe0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e00820
extern "C" __declspec(naked) void asm_00e00820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x1309fe0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01309fe0] }
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
	__asm { mov dword ptr [g_01309fc0], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
