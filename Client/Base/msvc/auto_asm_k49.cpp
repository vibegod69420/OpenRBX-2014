// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012f9878[];
extern "C" char g_012f9898[];
extern "C" char g_012f98a8[];
extern "C" char g_012f98ac[];
extern "C" char g_012f98b0[];
extern "C" char g_012f98b4[];
extern "C" char g_012f98b8[];
extern "C" char g_012f98bc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deb490
extern "C" __declspec(naked) void asm_00deb490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2a77c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [g_012f98bc] }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { test ecx, ecx }
	__asm { je L_00deb4c1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00deb4c1: }
	__asm { push esi }
	__asm { push dword ptr [g_012f98b8] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012f98b4] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012f98b0] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012f98ac] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [g_012f98a8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, 0x12f9898 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012f9898] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012f9878], 0xe33a28 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbc00[];
extern "C" char g_012fbc20[];
extern "C" char g_012fbc30[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ded320
extern "C" __declspec(naked) void asm_00ded320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012fbc30] }
	__asm { test edi, edi }
	__asm { je L_00ded374 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00ded35a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ded35a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ded374: }
	__asm { mov ecx, 0x12fbc20 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fbc20] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fbc00], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbbc8[];
extern "C" char g_012fbbe8[];
extern "C" char g_012fbbf8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ded3d0
extern "C" __declspec(naked) void asm_00ded3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012fbbf8] }
	__asm { test edi, edi }
	__asm { je L_00ded424 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00ded40a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ded40a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ded424: }
	__asm { mov ecx, 0x12fbbe8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fbbe8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fbbc8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbb58[];
extern "C" char g_012fbb78[];
extern "C" char g_012fbb88[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ded480
extern "C" __declspec(naked) void asm_00ded480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012fbb88] }
	__asm { test edi, edi }
	__asm { je L_00ded4d4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00ded4ba }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ded4ba: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ded4d4: }
	__asm { mov ecx, 0x12fbb78 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fbb78] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fbb58], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbb90[];
extern "C" char g_012fbbb0[];
extern "C" char g_012fbbc0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ded530
extern "C" __declspec(naked) void asm_00ded530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012fbbc0] }
	__asm { test edi, edi }
	__asm { je L_00ded584 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00ded56a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ded56a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ded584: }
	__asm { mov ecx, 0x12fbbb0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fbbb0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fbb90], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc720[];
extern "C" char g_012fc740[];
extern "C" char g_012fc750[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee970
extern "C" __declspec(naked) void asm_00dee970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012fc750] }
	__asm { test edi, edi }
	__asm { je L_00dee9c4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dee9aa }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dee9aa: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dee9c4: }
	__asm { mov ecx, 0x12fc740 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fc740] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fc720], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fd07c[];
extern "C" char g_012fd084[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_0048eee0();
extern "C" void fn_008d5620();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00defe40
extern "C" __declspec(naked) void asm_00defe40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012fd084] }
	__asm { sub esp, 8 }
	__asm { mov ecx, 0x12fd084 }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008d5620 }
	__asm { mov esi, dword ptr [g_012fd084] }
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
	__asm { mov eax, dword ptr [g_012fd07c] }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12fd07c }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_0048eee0 }
	__asm { mov esi, dword ptr [g_012fd07c] }
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

extern "C" char g_012fd778[];
extern "C" char g_012fd798[];
extern "C" char g_012fd7a8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df0cc0
extern "C" __declspec(naked) void asm_00df0cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012fd7a8] }
	__asm { test edi, edi }
	__asm { je L_00df0d14 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df0cfa }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df0cfa: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df0d14: }
	__asm { mov ecx, 0x12fd798 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fd798] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fd778], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fd6d0[];
extern "C" char g_012fd6f0[];
extern "C" char g_012fd700[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df0d70
extern "C" __declspec(naked) void asm_00df0d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012fd700] }
	__asm { test edi, edi }
	__asm { je L_00df0dc4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df0daa }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df0daa: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df0dc4: }
	__asm { mov ecx, 0x12fd6f0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fd6f0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fd6d0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fd698[];
extern "C" char g_012fd6b8[];
extern "C" char g_012fd6c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df0e20
extern "C" __declspec(naked) void asm_00df0e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012fd6c8] }
	__asm { test edi, edi }
	__asm { je L_00df0e74 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df0e5a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df0e5a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df0e74: }
	__asm { mov ecx, 0x12fd6b8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fd6b8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fd698], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fe550[];
extern "C" char g_012fe570[];
extern "C" char g_012fe580[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df1ca0
extern "C" __declspec(naked) void asm_00df1ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012fe580] }
	__asm { test edi, edi }
	__asm { je L_00df1cf4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df1cda }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df1cda: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df1cf4: }
	__asm { mov ecx, 0x12fe570 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fe570] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fe550], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fe5b8[];
extern "C" char g_012fe5d8[];
extern "C" char g_012fe5e8[];
extern "C" char g_012fe5ec[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df1d50
extern "C" __declspec(naked) void asm_00df1d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_012fe5ec] }
	__asm { call fn_00cf6522 }
	__asm { mov edi, dword ptr [g_012fe5e8] }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00df1db2 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df1d98 }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df1d98: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df1db2: }
	__asm { mov ecx, 0x12fe5d8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fe5d8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fe5b8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300218[];
extern "C" char g_01300238[];
extern "C" char g_01300248[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df3cd0
extern "C" __declspec(naked) void asm_00df3cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01300248] }
	__asm { test edi, edi }
	__asm { je L_00df3d24 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df3d0a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df3d0a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df3d24: }
	__asm { mov ecx, 0x1300238 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01300238] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01300218], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300250[];
extern "C" char g_01300270[];
extern "C" char g_01300280[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df3d80
extern "C" __declspec(naked) void asm_00df3d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd36daa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01300280] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00df3dc7 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00df3dbe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00df3dbe: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df3dc7: }
	__asm { mov ecx, 0x1300270 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01300270] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01300250], 0xe33a28 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300288[];
extern "C" char g_013002a8[];
extern "C" char g_013002b8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df3e90
extern "C" __declspec(naked) void asm_00df3e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013002b8] }
	__asm { test edi, edi }
	__asm { je L_00df3ee4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df3eca }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df3eca: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df3ee4: }
	__asm { mov ecx, 0x13002a8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013002a8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01300288], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300678[];
extern "C" char g_01300698[];
extern "C" char g_013006a8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df4440
extern "C" __declspec(naked) void asm_00df4440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013006a8] }
	__asm { test edi, edi }
	__asm { je L_00df4494 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df447a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df447a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df4494: }
	__asm { mov ecx, 0x1300698 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01300698] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01300678], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300888[];
extern "C" char g_013008a8[];
extern "C" char g_013008b8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df44f0
extern "C" __declspec(naked) void asm_00df44f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013008b8] }
	__asm { test edi, edi }
	__asm { je L_00df4544 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df452a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df452a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df4544: }
	__asm { mov ecx, 0x13008a8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013008a8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01300888], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013008c0[];
extern "C" char g_013008e0[];
extern "C" char g_013008f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df45a0
extern "C" __declspec(naked) void asm_00df45a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013008f0] }
	__asm { test edi, edi }
	__asm { je L_00df45f4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df45da }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df45da: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df45f4: }
	__asm { mov ecx, 0x13008e0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013008e0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013008c0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013006e8[];
extern "C" char g_01300708[];
extern "C" char g_01300718[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df46b0
extern "C" __declspec(naked) void asm_00df46b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01300718] }
	__asm { test edi, edi }
	__asm { je L_00df4704 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df46ea }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df46ea: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df4704: }
	__asm { mov ecx, 0x1300708 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01300708] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013006e8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303c60[];
extern "C" char g_01303c80[];
extern "C" char g_01303c90[];
extern "C" char g_01303c94[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df79c0
extern "C" __declspec(naked) void asm_00df79c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_01303c94] }
	__asm { call fn_00cf6522 }
	__asm { mov edi, dword ptr [g_01303c90] }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00df7a22 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df7a08 }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df7a08: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df7a22: }
	__asm { mov ecx, 0x1303c80 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303c80] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01303c60], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303c28[];
extern "C" char g_01303c48[];
extern "C" char g_01303c58[];
extern "C" char g_01303c5c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7a80
extern "C" __declspec(naked) void asm_00df7a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_01303c5c] }
	__asm { call fn_00cf6522 }
	__asm { mov edi, dword ptr [g_01303c58] }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00df7ae2 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df7ac8 }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df7ac8: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df7ae2: }
	__asm { mov ecx, 0x1303c48 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303c48] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01303c28], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303b48[];
extern "C" char g_01303b68[];
extern "C" char g_01303b78[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7ec0
extern "C" __declspec(naked) void asm_00df7ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01303b78] }
	__asm { test edi, edi }
	__asm { je L_00df7f14 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df7efa }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df7efa: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df7f14: }
	__asm { mov ecx, 0x1303b68 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303b68] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01303b48], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303b80[];
extern "C" char g_01303ba0[];
extern "C" char g_01303bb0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7f70
extern "C" __declspec(naked) void asm_00df7f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01303bb0] }
	__asm { test edi, edi }
	__asm { je L_00df7fc4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df7faa }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df7faa: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df7fc4: }
	__asm { mov ecx, 0x1303ba0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303ba0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01303b80], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303988[];
extern "C" char g_013039a8[];
extern "C" char g_013039b8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8020
extern "C" __declspec(naked) void asm_00df8020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013039b8] }
	__asm { test edi, edi }
	__asm { je L_00df8074 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df805a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df805a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8074: }
	__asm { mov ecx, 0x13039a8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013039a8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01303988], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303a30[];
extern "C" char g_01303a50[];
extern "C" char g_01303a60[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df80d0
extern "C" __declspec(naked) void asm_00df80d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01303a60] }
	__asm { test edi, edi }
	__asm { je L_00df8124 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df810a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df810a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8124: }
	__asm { mov ecx, 0x1303a50 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303a50] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01303a30], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303b10[];
extern "C" char g_01303b30[];
extern "C" char g_01303b40[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8180
extern "C" __declspec(naked) void asm_00df8180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01303b40] }
	__asm { test edi, edi }
	__asm { je L_00df81d4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df81ba }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df81ba: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df81d4: }
	__asm { mov ecx, 0x1303b30 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303b30] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01303b10], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303ad8[];
extern "C" char g_01303af8[];
extern "C" char g_01303b08[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8230
extern "C" __declspec(naked) void asm_00df8230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01303b08] }
	__asm { test edi, edi }
	__asm { je L_00df8284 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df826a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df826a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8284: }
	__asm { mov ecx, 0x1303af8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303af8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01303ad8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303aa0[];
extern "C" char g_01303ac0[];
extern "C" char g_01303ad0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df82e0
extern "C" __declspec(naked) void asm_00df82e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01303ad0] }
	__asm { test edi, edi }
	__asm { je L_00df8334 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df831a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df831a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8334: }
	__asm { mov ecx, 0x1303ac0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303ac0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01303aa0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013039c0[];
extern "C" char g_013039e0[];
extern "C" char g_013039f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8400
extern "C" __declspec(naked) void asm_00df8400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013039f0] }
	__asm { test edi, edi }
	__asm { je L_00df8454 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df843a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df843a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8454: }
	__asm { mov ecx, 0x13039e0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013039e0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013039c0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303f88[];
extern "C" char g_01303fa8[];
extern "C" char g_01303fb8[];
extern "C" char g_01303fbc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8650
extern "C" __declspec(naked) void asm_00df8650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01303fbc] }
	__asm { test edi, edi }
	__asm { je L_00df86a4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df868a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df868a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df86a4: }
	__asm { push dword ptr [g_01303fb8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1303fa8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303fa8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01303f88], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303f50[];
extern "C" char g_01303f70[];
extern "C" char g_01303f80[];
extern "C" char g_01303f84[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df87f0
extern "C" __declspec(naked) void asm_00df87f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01303f84] }
	__asm { test edi, edi }
	__asm { je L_00df8844 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df882a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df882a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8844: }
	__asm { push dword ptr [g_01303f80] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1303f70 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303f70] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01303f50], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304340[];
extern "C" char g_01304360[];
extern "C" char g_01304370[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8a90
extern "C" __declspec(naked) void asm_00df8a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01304370] }
	__asm { test edi, edi }
	__asm { je L_00df8ae4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df8aca }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8aca: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8ae4: }
	__asm { mov ecx, 0x1304360 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304360] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01304340], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304298[];
extern "C" char g_013042b8[];
extern "C" char g_013042c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8b40
extern "C" __declspec(naked) void asm_00df8b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013042c8] }
	__asm { test edi, edi }
	__asm { je L_00df8b94 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df8b7a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8b7a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8b94: }
	__asm { mov ecx, 0x13042b8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013042b8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01304298], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013042d0[];
extern "C" char g_013042f0[];
extern "C" char g_01304300[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8bf0
extern "C" __declspec(naked) void asm_00df8bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01304300] }
	__asm { test edi, edi }
	__asm { je L_00df8c44 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df8c2a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8c2a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8c44: }
	__asm { mov ecx, 0x13042f0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013042f0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013042d0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304458[];
extern "C" char g_01304478[];
extern "C" char g_01304488[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8d10
extern "C" __declspec(naked) void asm_00df8d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01304488] }
	__asm { test edi, edi }
	__asm { je L_00df8d64 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df8d4a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8d4a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8d64: }
	__asm { mov ecx, 0x1304478 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304478] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01304458], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304378[];
extern "C" char g_01304398[];
extern "C" char g_013043a8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8dc0
extern "C" __declspec(naked) void asm_00df8dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013043a8] }
	__asm { test edi, edi }
	__asm { je L_00df8e14 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df8dfa }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8dfa: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8e14: }
	__asm { mov ecx, 0x1304398 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304398] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01304378], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01304308[];
extern "C" char g_01304328[];
extern "C" char g_01304338[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df8e70
extern "C" __declspec(naked) void asm_00df8e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01304338] }
	__asm { test edi, edi }
	__asm { je L_00df8ec4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00df8eaa }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8eaa: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df8ec4: }
	__asm { mov ecx, 0x1304328 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01304328] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01304308], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013059c0[];
extern "C" char g_013059e0[];
extern "C" char g_013059f4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa7b0
extern "C" __declspec(naked) void asm_00dfa7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013059f4] }
	__asm { test edi, edi }
	__asm { je L_00dfa804 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfa7ea }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfa7ea: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfa804: }
	__asm { mov ecx, 0x13059e0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013059e0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013059c0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305a30[];
extern "C" char g_01305a50[];
extern "C" char g_01305a64[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa9a0
extern "C" __declspec(naked) void asm_00dfa9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01305a64] }
	__asm { test edi, edi }
	__asm { je L_00dfa9f4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfa9da }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfa9da: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfa9f4: }
	__asm { mov ecx, 0x1305a50 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305a50] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01305a30], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013059f8[];
extern "C" char g_01305a18[];
extern "C" char g_01305a2c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfaad0
extern "C" __declspec(naked) void asm_00dfaad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01305a2c] }
	__asm { test edi, edi }
	__asm { je L_00dfab24 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfab0a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfab0a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfab24: }
	__asm { mov ecx, 0x1305a18 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305a18] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013059f8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307ec8[];
extern "C" char g_01307ee8[];
extern "C" char g_01307ef8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd2e0
extern "C" __declspec(naked) void asm_00dfd2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01307ef8] }
	__asm { test edi, edi }
	__asm { je L_00dfd334 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfd31a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfd31a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfd334: }
	__asm { mov ecx, 0x1307ee8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01307ee8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01307ec8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307f38[];
extern "C" char g_01307f58[];
extern "C" char g_01307f68[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd390
extern "C" __declspec(naked) void asm_00dfd390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01307f68] }
	__asm { test edi, edi }
	__asm { je L_00dfd3e4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfd3ca }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfd3ca: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfd3e4: }
	__asm { mov ecx, 0x1307f58 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01307f58] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01307f38], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307f00[];
extern "C" char g_01307f20[];
extern "C" char g_01307f30[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd4b0
extern "C" __declspec(naked) void asm_00dfd4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01307f30] }
	__asm { test edi, edi }
	__asm { je L_00dfd504 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfd4ea }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfd4ea: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfd504: }
	__asm { mov ecx, 0x1307f20 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01307f20] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01307f00], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01307f70[];
extern "C" char g_01307f90[];
extern "C" char g_01307fa0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd560
extern "C" __declspec(naked) void asm_00dfd560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01307fa0] }
	__asm { test edi, edi }
	__asm { je L_00dfd5b4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfd59a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfd59a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfd5b4: }
	__asm { mov ecx, 0x1307f90 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01307f90] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01307f70], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308198[];
extern "C" char g_013081b8[];
extern "C" char g_013081c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfd9d0
extern "C" __declspec(naked) void asm_00dfd9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013081c8] }
	__asm { test edi, edi }
	__asm { je L_00dfda24 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfda0a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfda0a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfda24: }
	__asm { mov ecx, 0x13081b8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013081b8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01308198], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308530[];
extern "C" char g_01308550[];
extern "C" char g_01308560[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe000
extern "C" __declspec(naked) void asm_00dfe000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01308560] }
	__asm { test edi, edi }
	__asm { je L_00dfe054 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfe03a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfe03a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfe054: }
	__asm { mov ecx, 0x1308550 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308550] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01308530], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308568[];
extern "C" char g_01308588[];
extern "C" char g_01308598[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe0b0
extern "C" __declspec(naked) void asm_00dfe0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01308598] }
	__asm { test edi, edi }
	__asm { je L_00dfe104 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfe0ea }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfe0ea: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfe104: }
	__asm { mov ecx, 0x1308588 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308588] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01308568], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013085a0[];
extern "C" char g_013085c0[];
extern "C" char g_013085d0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe160
extern "C" __declspec(naked) void asm_00dfe160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013085d0] }
	__asm { test edi, edi }
	__asm { je L_00dfe1b4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfe19a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfe19a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfe1b4: }
	__asm { mov ecx, 0x13085c0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013085c0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013085a0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308670[];
extern "C" char g_01308690[];
extern "C" char g_013086a0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe630
extern "C" __declspec(naked) void asm_00dfe630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013086a0] }
	__asm { test edi, edi }
	__asm { je L_00dfe684 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfe66a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfe66a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfe684: }
	__asm { mov ecx, 0x1308690 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308690] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01308670], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308ec0[];
extern "C" char g_01308ee0[];
extern "C" char g_01308ef0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfeb50
extern "C" __declspec(naked) void asm_00dfeb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01308ef0] }
	__asm { test edi, edi }
	__asm { je L_00dfeba4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfeb8a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfeb8a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfeba4: }
	__asm { mov ecx, 0x1308ee0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308ee0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01308ec0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308e88[];
extern "C" char g_01308ea8[];
extern "C" char g_01308eb8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfecd0
extern "C" __declspec(naked) void asm_00dfecd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01308eb8] }
	__asm { test edi, edi }
	__asm { je L_00dfed24 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfed0a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfed0a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfed24: }
	__asm { mov ecx, 0x1308ea8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308ea8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01308e88], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01308e50[];
extern "C" char g_01308e70[];
extern "C" char g_01308e80[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfee70
extern "C" __declspec(naked) void asm_00dfee70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01308e80] }
	__asm { test edi, edi }
	__asm { je L_00dfeec4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dfeeaa }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfeeaa: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfeec4: }
	__asm { mov ecx, 0x1308e70 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01308e70] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01308e50], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01309348[];
extern "C" char g_01309368[];
extern "C" char g_01309378[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dff000
extern "C" __declspec(naked) void asm_00dff000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01309378] }
	__asm { test edi, edi }
	__asm { je L_00dff054 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dff03a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dff03a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dff054: }
	__asm { mov ecx, 0x1309368 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01309368] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01309348], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013093b8[];
extern "C" char g_013093d8[];
extern "C" char g_013093e8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dff190
extern "C" __declspec(naked) void asm_00dff190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013093e8] }
	__asm { test edi, edi }
	__asm { je L_00dff1e4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00dff1ca }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dff1ca: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dff1e4: }
	__asm { mov ecx, 0x13093d8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013093d8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013093b8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c2e8[];
extern "C" char g_0130c308[];
extern "C" char g_0130c318[];
extern "C" char g_0130c320[];
extern "C" char g_0130c340[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e02750
extern "C" __declspec(naked) void asm_00e02750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd50c3a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [g_0130c318] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00e02780 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00e02780: }
	__asm { push esi }
	__asm { mov ecx, 0x130c308 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130c308] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130c2e8], 0xe33a28 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, 0x130c340 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130c340] }
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
	__asm { mov dword ptr [g_0130c320], 0xe33a28 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c8e8[];
extern "C" char g_0130c908[];
extern "C" char g_0130c918[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e03380
extern "C" __declspec(naked) void asm_00e03380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130c918] }
	__asm { test edi, edi }
	__asm { je L_00e033d4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e033ba }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e033ba: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e033d4: }
	__asm { mov ecx, 0x130c908 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130c908] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130c8e8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c8b0[];
extern "C" char g_0130c8d0[];
extern "C" char g_0130c8e0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e03430
extern "C" __declspec(naked) void asm_00e03430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130c8e0] }
	__asm { test edi, edi }
	__asm { je L_00e03484 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0346a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0346a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e03484: }
	__asm { mov ecx, 0x130c8d0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130c8d0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130c8b0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c958[];
extern "C" char g_0130c978[];
extern "C" char g_0130c988[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e034e0
extern "C" __declspec(naked) void asm_00e034e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130c988] }
	__asm { test edi, edi }
	__asm { je L_00e03534 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0351a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0351a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e03534: }
	__asm { mov ecx, 0x130c978 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130c978] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130c958], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c990[];
extern "C" char g_0130c9b0[];
extern "C" char g_0130c9c0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e03590
extern "C" __declspec(naked) void asm_00e03590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130c9c0] }
	__asm { test edi, edi }
	__asm { je L_00e035e4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e035ca }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e035ca: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e035e4: }
	__asm { mov ecx, 0x130c9b0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130c9b0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130c990], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c920[];
extern "C" char g_0130c940[];
extern "C" char g_0130c950[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e03640
extern "C" __declspec(naked) void asm_00e03640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130c950] }
	__asm { test edi, edi }
	__asm { je L_00e03694 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0367a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0367a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e03694: }
	__asm { mov ecx, 0x130c940 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130c940] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130c920], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ca00[];
extern "C" char g_0130ca20[];
extern "C" char g_0130ca30[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e036f0
extern "C" __declspec(naked) void asm_00e036f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130ca30] }
	__asm { test edi, edi }
	__asm { je L_00e03744 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0372a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0372a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e03744: }
	__asm { mov ecx, 0x130ca20 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130ca20] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130ca00], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c9c8[];
extern "C" char g_0130c9e8[];
extern "C" char g_0130c9f8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e037a0
extern "C" __declspec(naked) void asm_00e037a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130c9f8] }
	__asm { test edi, edi }
	__asm { je L_00e037f4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e037da }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e037da: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e037f4: }
	__asm { mov ecx, 0x130c9e8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130c9e8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130c9c8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130caa8[];
extern "C" char g_0130cac8[];
extern "C" char g_0130cad8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e03a60
extern "C" __declspec(naked) void asm_00e03a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130cad8] }
	__asm { test edi, edi }
	__asm { je L_00e03ab4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e03a9a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e03a9a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e03ab4: }
	__asm { mov ecx, 0x130cac8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130cac8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130caa8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ca38[];
extern "C" char g_0130ca58[];
extern "C" char g_0130ca68[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e03b10
extern "C" __declspec(naked) void asm_00e03b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130ca68] }
	__asm { test edi, edi }
	__asm { je L_00e03b64 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e03b4a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e03b4a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e03b64: }
	__asm { mov ecx, 0x130ca58 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130ca58] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130ca38], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ccf0[];
extern "C" char g_0130cd10[];
extern "C" char g_0130cd20[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e04050
extern "C" __declspec(naked) void asm_00e04050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130cd20] }
	__asm { test edi, edi }
	__asm { je L_00e040a4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0408a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0408a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e040a4: }
	__asm { mov ecx, 0x130cd10 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130cd10] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130ccf0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130cf20[];
extern "C" char g_0130cf40[];
extern "C" char g_0130cf50[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e04390
extern "C" __declspec(naked) void asm_00e04390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130cf50] }
	__asm { test edi, edi }
	__asm { je L_00e043e4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e043ca }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e043ca: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e043e4: }
	__asm { mov ecx, 0x130cf40 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130cf40] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130cf20], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130d160[];
extern "C" char g_0130d180[];
extern "C" char g_0130d190[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e047e0
extern "C" __declspec(naked) void asm_00e047e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130d190] }
	__asm { test edi, edi }
	__asm { je L_00e04834 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0481a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0481a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e04834: }
	__asm { mov ecx, 0x130d180 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130d180] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130d160], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130dbe8[];
extern "C" char g_0130dc08[];
extern "C" char g_0130dc18[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e05600
extern "C" __declspec(naked) void asm_00e05600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130dc18] }
	__asm { test edi, edi }
	__asm { je L_00e05654 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0563a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0563a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e05654: }
	__asm { mov ecx, 0x130dc08 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130dc08] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130dbe8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130dc28[];
extern "C" char g_0130dc48[];
extern "C" char g_0130dc58[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e057f0
extern "C" __declspec(naked) void asm_00e057f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130dc58] }
	__asm { test edi, edi }
	__asm { je L_00e05844 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0582a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0582a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e05844: }
	__asm { mov ecx, 0x130dc48 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130dc48] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130dc28], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e028[];
extern "C" char g_0130e048[];
extern "C" char g_0130e058[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e05e90
extern "C" __declspec(naked) void asm_00e05e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130e058] }
	__asm { test edi, edi }
	__asm { je L_00e05ee4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e05eca }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e05eca: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e05ee4: }
	__asm { mov ecx, 0x130e048 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130e048] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e028], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e480[];
extern "C" char g_0130e4a0[];
extern "C" char g_0130e4b0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e066b0
extern "C" __declspec(naked) void asm_00e066b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130e4b0] }
	__asm { test edi, edi }
	__asm { je L_00e06704 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e066ea }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e066ea: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e06704: }
	__asm { mov ecx, 0x130e4a0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130e4a0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e480], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e538[];
extern "C" char g_0130e558[];
extern "C" char g_0130e568[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e06990
extern "C" __declspec(naked) void asm_00e06990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130e568] }
	__asm { test edi, edi }
	__asm { je L_00e069e4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e069ca }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e069ca: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e069e4: }
	__asm { mov ecx, 0x130e558 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130e558] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e538], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e788[];
extern "C" char g_0130e7a8[];
extern "C" char g_0130e7b8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e06cb0
extern "C" __declspec(naked) void asm_00e06cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130e7b8] }
	__asm { test edi, edi }
	__asm { je L_00e06d04 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e06cea }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e06cea: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e06d04: }
	__asm { mov ecx, 0x130e7a8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130e7a8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e788], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e828[];
extern "C" char g_0130e848[];
extern "C" char g_0130e858[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e06eb0
extern "C" __declspec(naked) void asm_00e06eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130e858] }
	__asm { test edi, edi }
	__asm { je L_00e06f04 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e06eea }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e06eea: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e06f04: }
	__asm { mov ecx, 0x130e848 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130e848] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e828], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e7c0[];
extern "C" char g_0130e7e0[];
extern "C" char g_0130e7f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e06fc0
extern "C" __declspec(naked) void asm_00e06fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130e7f0] }
	__asm { test edi, edi }
	__asm { je L_00e07014 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e06ffa }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e06ffa: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e07014: }
	__asm { mov ecx, 0x130e7e0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130e7e0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e7c0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f8c0[];
extern "C" char g_0130f8e0[];
extern "C" char g_0130f8f0[];
extern "C" char g_0130f8f4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e08650
extern "C" __declspec(naked) void asm_00e08650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0130f8f4] }
	__asm { call fn_00cf6522 }
	__asm { mov edi, dword ptr [g_0130f8f0] }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00e086b2 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e08698 }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e08698: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e086b2: }
	__asm { mov ecx, 0x130f8e0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130f8e0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f8c0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310600[];
extern "C" char g_01310620[];
extern "C" char g_01310630[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e092f0
extern "C" __declspec(naked) void asm_00e092f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01310630] }
	__asm { test edi, edi }
	__asm { je L_00e09344 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0932a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0932a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09344: }
	__asm { mov ecx, 0x1310620 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01310620] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01310600], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310398[];
extern "C" char g_013103b8[];
extern "C" char g_013103c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e09470
extern "C" __declspec(naked) void asm_00e09470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013103c8] }
	__asm { test edi, edi }
	__asm { je L_00e094c4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e094aa }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e094aa: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e094c4: }
	__asm { mov ecx, 0x13103b8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013103b8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01310398], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310700[];
extern "C" char g_01310720[];
extern "C" char g_01310730[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e09790
extern "C" __declspec(naked) void asm_00e09790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01310730] }
	__asm { test edi, edi }
	__asm { je L_00e097e4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e097ca }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e097ca: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e097e4: }
	__asm { mov ecx, 0x1310720 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01310720] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01310700], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013103d0[];
extern "C" char g_013103f0[];
extern "C" char g_01310400[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e09840
extern "C" __declspec(naked) void asm_00e09840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01310400] }
	__asm { test edi, edi }
	__asm { je L_00e09894 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0987a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0987a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09894: }
	__asm { mov ecx, 0x13103f0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013103f0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013103d0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013105c8[];
extern "C" char g_013105e8[];
extern "C" char g_013105f8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e098f0
extern "C" __declspec(naked) void asm_00e098f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013105f8] }
	__asm { test edi, edi }
	__asm { je L_00e09944 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0992a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0992a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09944: }
	__asm { mov ecx, 0x13105e8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013105e8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013105c8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310150[];
extern "C" char g_01310170[];
extern "C" char g_01310180[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e09a10
extern "C" __declspec(naked) void asm_00e09a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01310180] }
	__asm { test edi, edi }
	__asm { je L_00e09a64 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e09a4a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09a4a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09a64: }
	__asm { mov ecx, 0x1310170 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01310170] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01310150], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310320[];
extern "C" char g_01310340[];
extern "C" char g_01310350[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e09ac0
extern "C" __declspec(naked) void asm_00e09ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01310350] }
	__asm { test edi, edi }
	__asm { je L_00e09b14 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e09afa }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09afa: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09b14: }
	__asm { mov ecx, 0x1310340 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01310340] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01310320], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310498[];
extern "C" char g_013104b8[];
extern "C" char g_013104c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e09b70
extern "C" __declspec(naked) void asm_00e09b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013104c8] }
	__asm { test edi, edi }
	__asm { je L_00e09bc4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e09baa }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09baa: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09bc4: }
	__asm { mov ecx, 0x13104b8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013104b8] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01310498], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310038[];
extern "C" char g_01310058[];
extern "C" char g_01310068[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e09c20
extern "C" __declspec(naked) void asm_00e09c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01310068] }
	__asm { test edi, edi }
	__asm { je L_00e09c74 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e09c5a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09c5a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09c74: }
	__asm { mov ecx, 0x1310058 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01310058] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01310038], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013100e0[];
extern "C" char g_01310100[];
extern "C" char g_01310110[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e09cd0
extern "C" __declspec(naked) void asm_00e09cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01310110] }
	__asm { test edi, edi }
	__asm { je L_00e09d24 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e09d0a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09d0a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09d24: }
	__asm { mov ecx, 0x1310100 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01310100] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013100e0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013117c0[];
extern "C" char g_013117e0[];
extern "C" char g_013117f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0a180
extern "C" __declspec(naked) void asm_00e0a180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013117f0] }
	__asm { test edi, edi }
	__asm { je L_00e0a1d4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0a1ba }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0a1ba: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0a1d4: }
	__asm { mov ecx, 0x13117e0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013117e0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013117c0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311c80[];
extern "C" char g_01311ca0[];
extern "C" char g_01311cb0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0a230
extern "C" __declspec(naked) void asm_00e0a230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01311cb0] }
	__asm { test edi, edi }
	__asm { je L_00e0a284 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0a26a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0a26a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0a284: }
	__asm { mov ecx, 0x1311ca0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01311ca0] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01311c80], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013113e8[];
extern "C" char g_01311408[];
extern "C" char g_01311418[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0a2e0
extern "C" __declspec(naked) void asm_00e0a2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01311418] }
	__asm { test edi, edi }
	__asm { je L_00e0a334 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0a31a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0a31a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0a334: }
	__asm { mov ecx, 0x1311408 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01311408] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013113e8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311058[];
extern "C" char g_01311078[];
extern "C" char g_01311088[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0a390
extern "C" __declspec(naked) void asm_00e0a390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01311088] }
	__asm { test edi, edi }
	__asm { je L_00e0a3e4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0a3ca }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0a3ca: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0a3e4: }
	__asm { mov ecx, 0x1311078 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01311078] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01311058], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311718[];
extern "C" char g_01311738[];
extern "C" char g_01311748[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0b3e0
extern "C" __declspec(naked) void asm_00e0b3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01311748] }
	__asm { test edi, edi }
	__asm { je L_00e0b434 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0b41a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0b41a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0b434: }
	__asm { mov ecx, 0x1311738 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01311738] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01311718], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013110f0[];
extern "C" char g_01311110[];
extern "C" char g_01311120[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0b4f0
extern "C" __declspec(naked) void asm_00e0b4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01311120] }
	__asm { test edi, edi }
	__asm { je L_00e0b544 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0b52a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0b52a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0b544: }
	__asm { mov ecx, 0x1311110 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01311110] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013110f0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310e10[];
extern "C" char g_01310e30[];
extern "C" char g_01310e40[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0b5a0
extern "C" __declspec(naked) void asm_00e0b5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01310e40] }
	__asm { test edi, edi }
	__asm { je L_00e0b5f4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0b5da }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0b5da: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0b5f4: }
	__asm { mov ecx, 0x1310e30 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01310e30] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01310e10], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311750[];
extern "C" char g_01311770[];
extern "C" char g_01311780[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0b650
extern "C" __declspec(naked) void asm_00e0b650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01311780] }
	__asm { test edi, edi }
	__asm { je L_00e0b6a4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0b68a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0b68a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0b6a4: }
	__asm { mov ecx, 0x1311770 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01311770] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01311750], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311b68[];
extern "C" char g_01311b88[];
extern "C" char g_01311b98[];
extern "C" char g_01311b9c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0b8a0
extern "C" __declspec(naked) void asm_00e0b8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_01311b9c] }
	__asm { call fn_00cf6522 }
	__asm { mov edi, dword ptr [g_01311b98] }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00e0b902 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0b8e8 }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0b8e8: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0b902: }
	__asm { mov ecx, 0x1311b88 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01311b88] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01311b68], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311610[];
extern "C" char g_01311630[];
extern "C" char g_01311640[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0bb00
extern "C" __declspec(naked) void asm_00e0bb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01311640] }
	__asm { test edi, edi }
	__asm { je L_00e0bb54 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00e0bb3a }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0bb3a: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0bb54: }
	__asm { mov ecx, 0x1311630 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01311630] }
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
	__asm { lea ecx, [ebp - 2] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01311610], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
