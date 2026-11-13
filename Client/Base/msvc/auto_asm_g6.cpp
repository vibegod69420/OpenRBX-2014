// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012a2b60[];
extern "C" char g_012a2b70[];
extern "C" char g_012a2b74[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0cbf0
extern "C" __declspec(naked) void asm_00e0cbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a2b74], 0x10 }
	__asm { jb L_00e0cc2b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a2b60] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a2b60 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0cc2b: }
	__asm { mov dword ptr [g_012a2b74], 0xf }
	__asm { mov dword ptr [g_012a2b70], 0 }
	__asm { mov byte ptr [g_012a2b60], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a2b48[];
extern "C" char g_012a2b58[];
extern "C" char g_012a2b5c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0cc50
extern "C" __declspec(naked) void asm_00e0cc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a2b5c], 0x10 }
	__asm { jb L_00e0cc8b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a2b48] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a2b48 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0cc8b: }
	__asm { mov dword ptr [g_012a2b5c], 0xf }
	__asm { mov dword ptr [g_012a2b58], 0 }
	__asm { mov byte ptr [g_012a2b48], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a3ad0[];
extern "C" char g_012a3ae0[];
extern "C" char g_012a3ae4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0ccb0
extern "C" __declspec(naked) void asm_00e0ccb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a3ae4], 0x10 }
	__asm { jb L_00e0cceb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a3ad0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a3ad0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0cceb: }
	__asm { mov dword ptr [g_012a3ae4], 0xf }
	__asm { mov dword ptr [g_012a3ae0], 0 }
	__asm { mov byte ptr [g_012a3ad0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a39f8[];
extern "C" char g_012a3a08[];
extern "C" char g_012a3a0c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0cd10
extern "C" __declspec(naked) void asm_00e0cd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a3a0c], 0x10 }
	__asm { jb L_00e0cd4b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a39f8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a39f8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0cd4b: }
	__asm { mov dword ptr [g_012a3a0c], 0xf }
	__asm { mov dword ptr [g_012a3a08], 0 }
	__asm { mov byte ptr [g_012a39f8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a3a10[];
extern "C" char g_012a3a20[];
extern "C" char g_012a3a24[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0cd70
extern "C" __declspec(naked) void asm_00e0cd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a3a24], 0x10 }
	__asm { jb L_00e0cdab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a3a10] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a3a10 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0cdab: }
	__asm { mov dword ptr [g_012a3a24], 0xf }
	__asm { mov dword ptr [g_012a3a20], 0 }
	__asm { mov byte ptr [g_012a3a10], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a39b0[];
extern "C" char g_012a39c0[];
extern "C" char g_012a39c4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0cdd0
extern "C" __declspec(naked) void asm_00e0cdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a39c4], 0x10 }
	__asm { jb L_00e0ce0b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a39b0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a39b0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0ce0b: }
	__asm { mov dword ptr [g_012a39c4], 0xf }
	__asm { mov dword ptr [g_012a39c0], 0 }
	__asm { mov byte ptr [g_012a39b0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a39e0[];
extern "C" char g_012a39f0[];
extern "C" char g_012a39f4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0ce30
extern "C" __declspec(naked) void asm_00e0ce30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a39f4], 0x10 }
	__asm { jb L_00e0ce6b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a39e0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a39e0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0ce6b: }
	__asm { mov dword ptr [g_012a39f4], 0xf }
	__asm { mov dword ptr [g_012a39f0], 0 }
	__asm { mov byte ptr [g_012a39e0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a3a40[];
extern "C" char g_012a3a50[];
extern "C" char g_012a3a54[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0ce90
extern "C" __declspec(naked) void asm_00e0ce90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a3a54], 0x10 }
	__asm { jb L_00e0cecb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a3a40] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a3a40 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0cecb: }
	__asm { mov dword ptr [g_012a3a54], 0xf }
	__asm { mov dword ptr [g_012a3a50], 0 }
	__asm { mov byte ptr [g_012a3a40], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a3a28[];
extern "C" char g_012a3a38[];
extern "C" char g_012a3a3c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0cef0
extern "C" __declspec(naked) void asm_00e0cef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a3a3c], 0x10 }
	__asm { jb L_00e0cf2b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a3a28] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a3a28 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0cf2b: }
	__asm { mov dword ptr [g_012a3a3c], 0xf }
	__asm { mov dword ptr [g_012a3a38], 0 }
	__asm { mov byte ptr [g_012a3a28], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a39c8[];
extern "C" char g_012a39d8[];
extern "C" char g_012a39dc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0cf50
extern "C" __declspec(naked) void asm_00e0cf50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a39dc], 0x10 }
	__asm { jb L_00e0cf8b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a39c8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a39c8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0cf8b: }
	__asm { mov dword ptr [g_012a39dc], 0xf }
	__asm { mov dword ptr [g_012a39d8], 0 }
	__asm { mov byte ptr [g_012a39c8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a3a70[];
extern "C" char g_012a3a80[];
extern "C" char g_012a3a84[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0cfb0
extern "C" __declspec(naked) void asm_00e0cfb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a3a84], 0x10 }
	__asm { jb L_00e0cfeb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a3a70] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a3a70 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0cfeb: }
	__asm { mov dword ptr [g_012a3a84], 0xf }
	__asm { mov dword ptr [g_012a3a80], 0 }
	__asm { mov byte ptr [g_012a3a70], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a3a58[];
extern "C" char g_012a3a68[];
extern "C" char g_012a3a6c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d010
extern "C" __declspec(naked) void asm_00e0d010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a3a6c], 0x10 }
	__asm { jb L_00e0d04b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a3a58] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a3a58 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d04b: }
	__asm { mov dword ptr [g_012a3a6c], 0xf }
	__asm { mov dword ptr [g_012a3a68], 0 }
	__asm { mov byte ptr [g_012a3a58], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a3aa0[];
extern "C" char g_012a3ab0[];
extern "C" char g_012a3ab4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d070
extern "C" __declspec(naked) void asm_00e0d070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a3ab4], 0x10 }
	__asm { jb L_00e0d0ab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a3aa0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a3aa0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d0ab: }
	__asm { mov dword ptr [g_012a3ab4], 0xf }
	__asm { mov dword ptr [g_012a3ab0], 0 }
	__asm { mov byte ptr [g_012a3aa0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a3ab8[];
extern "C" char g_012a3ac8[];
extern "C" char g_012a3acc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d0d0
extern "C" __declspec(naked) void asm_00e0d0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a3acc], 0x10 }
	__asm { jb L_00e0d10b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a3ab8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a3ab8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d10b: }
	__asm { mov dword ptr [g_012a3acc], 0xf }
	__asm { mov dword ptr [g_012a3ac8], 0 }
	__asm { mov byte ptr [g_012a3ab8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a3a88[];
extern "C" char g_012a3a98[];
extern "C" char g_012a3a9c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d130
extern "C" __declspec(naked) void asm_00e0d130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a3a9c], 0x10 }
	__asm { jb L_00e0d16b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a3a88] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a3a88 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d16b: }
	__asm { mov dword ptr [g_012a3a9c], 0xf }
	__asm { mov dword ptr [g_012a3a98], 0 }
	__asm { mov byte ptr [g_012a3a88], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a5590[];
extern "C" char g_012a55a0[];
extern "C" char g_012a55a4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d190
extern "C" __declspec(naked) void asm_00e0d190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a55a4], 0x10 }
	__asm { jb L_00e0d1cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a5590] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a5590 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d1cb: }
	__asm { mov dword ptr [g_012a55a4], 0xf }
	__asm { mov dword ptr [g_012a55a0], 0 }
	__asm { mov byte ptr [g_012a5590], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a55a8[];
extern "C" char g_012a55b8[];
extern "C" char g_012a55bc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d1f0
extern "C" __declspec(naked) void asm_00e0d1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a55bc], 0x10 }
	__asm { jb L_00e0d22b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a55a8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a55a8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d22b: }
	__asm { mov dword ptr [g_012a55bc], 0xf }
	__asm { mov dword ptr [g_012a55b8], 0 }
	__asm { mov byte ptr [g_012a55a8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a5808[];
extern "C" char g_012a5818[];
extern "C" char g_012a581c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d250
extern "C" __declspec(naked) void asm_00e0d250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a581c], 0x10 }
	__asm { jb L_00e0d28b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a5808] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a5808 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d28b: }
	__asm { mov dword ptr [g_012a581c], 0xf }
	__asm { mov dword ptr [g_012a5818], 0 }
	__asm { mov byte ptr [g_012a5808], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a5820[];
extern "C" char g_012a5830[];
extern "C" char g_012a5834[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d2b0
extern "C" __declspec(naked) void asm_00e0d2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a5834], 0x10 }
	__asm { jb L_00e0d2eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a5820] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a5820 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d2eb: }
	__asm { mov dword ptr [g_012a5834], 0xf }
	__asm { mov dword ptr [g_012a5830], 0 }
	__asm { mov byte ptr [g_012a5820], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a5a74[];
extern "C" char g_012a5a84[];
extern "C" char g_012a5a88[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d380
extern "C" __declspec(naked) void asm_00e0d380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a5a88], 0x10 }
	__asm { jb L_00e0d3bb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a5a74] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a5a74 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d3bb: }
	__asm { mov dword ptr [g_012a5a88], 0xf }
	__asm { mov dword ptr [g_012a5a84], 0 }
	__asm { mov byte ptr [g_012a5a74], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a5a2c[];
extern "C" char g_012a5a3c[];
extern "C" char g_012a5a40[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d3e0
extern "C" __declspec(naked) void asm_00e0d3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a5a40], 0x10 }
	__asm { jb L_00e0d41b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a5a2c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a5a2c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d41b: }
	__asm { mov dword ptr [g_012a5a40], 0xf }
	__asm { mov dword ptr [g_012a5a3c], 0 }
	__asm { mov byte ptr [g_012a5a2c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a5a44[];
extern "C" char g_012a5a54[];
extern "C" char g_012a5a58[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d440
extern "C" __declspec(naked) void asm_00e0d440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a5a58], 0x10 }
	__asm { jb L_00e0d47b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a5a44] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a5a44 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d47b: }
	__asm { mov dword ptr [g_012a5a58], 0xf }
	__asm { mov dword ptr [g_012a5a54], 0 }
	__asm { mov byte ptr [g_012a5a44], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a59cc[];
extern "C" char g_012a59dc[];
extern "C" char g_012a59e0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d4a0
extern "C" __declspec(naked) void asm_00e0d4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a59e0], 0x10 }
	__asm { jb L_00e0d4db }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a59cc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a59cc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d4db: }
	__asm { mov dword ptr [g_012a59e0], 0xf }
	__asm { mov dword ptr [g_012a59dc], 0 }
	__asm { mov byte ptr [g_012a59cc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a59fc[];
extern "C" char g_012a5a0c[];
extern "C" char g_012a5a10[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d500
extern "C" __declspec(naked) void asm_00e0d500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a5a10], 0x10 }
	__asm { jb L_00e0d53b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a59fc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a59fc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d53b: }
	__asm { mov dword ptr [g_012a5a10], 0xf }
	__asm { mov dword ptr [g_012a5a0c], 0 }
	__asm { mov byte ptr [g_012a59fc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a5aa4[];
extern "C" char g_012a5ab4[];
extern "C" char g_012a5ab8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d560
extern "C" __declspec(naked) void asm_00e0d560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a5ab8], 0x10 }
	__asm { jb L_00e0d59b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a5aa4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a5aa4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d59b: }
	__asm { mov dword ptr [g_012a5ab8], 0xf }
	__asm { mov dword ptr [g_012a5ab4], 0 }
	__asm { mov byte ptr [g_012a5aa4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a5a8c[];
extern "C" char g_012a5a9c[];
extern "C" char g_012a5aa0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d5c0
extern "C" __declspec(naked) void asm_00e0d5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a5aa0], 0x10 }
	__asm { jb L_00e0d5fb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a5a8c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a5a8c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d5fb: }
	__asm { mov dword ptr [g_012a5aa0], 0xf }
	__asm { mov dword ptr [g_012a5a9c], 0 }
	__asm { mov byte ptr [g_012a5a8c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a5a5c[];
extern "C" char g_012a5a6c[];
extern "C" char g_012a5a70[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d620
extern "C" __declspec(naked) void asm_00e0d620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a5a70], 0x10 }
	__asm { jb L_00e0d65b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a5a5c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a5a5c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d65b: }
	__asm { mov dword ptr [g_012a5a70], 0xf }
	__asm { mov dword ptr [g_012a5a6c], 0 }
	__asm { mov byte ptr [g_012a5a5c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a58d8[];
extern "C" char g_012a58e8[];
extern "C" char g_012a58ec[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d680
extern "C" __declspec(naked) void asm_00e0d680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a58ec], 0x10 }
	__asm { jb L_00e0d6bb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a58d8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a58d8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d6bb: }
	__asm { mov dword ptr [g_012a58ec], 0xf }
	__asm { mov dword ptr [g_012a58e8], 0 }
	__asm { mov byte ptr [g_012a58d8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a5a14[];
extern "C" char g_012a5a24[];
extern "C" char g_012a5a28[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d6e0
extern "C" __declspec(naked) void asm_00e0d6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a5a28], 0x10 }
	__asm { jb L_00e0d71b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a5a14] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a5a14 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d71b: }
	__asm { mov dword ptr [g_012a5a28], 0xf }
	__asm { mov dword ptr [g_012a5a24], 0 }
	__asm { mov byte ptr [g_012a5a14], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a59e4[];
extern "C" char g_012a59f4[];
extern "C" char g_012a59f8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0d740
extern "C" __declspec(naked) void asm_00e0d740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a59f8], 0x10 }
	__asm { jb L_00e0d77b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a59e4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a59e4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0d77b: }
	__asm { mov dword ptr [g_012a59f8], 0xf }
	__asm { mov dword ptr [g_012a59f4], 0 }
	__asm { mov byte ptr [g_012a59e4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012aa4c8[];
extern "C" char g_012aa4d8[];
extern "C" char g_012aa4dc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0de80
extern "C" __declspec(naked) void asm_00e0de80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012aa4dc], 0x10 }
	__asm { jb L_00e0debb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012aa4c8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12aa4c8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0debb: }
	__asm { mov dword ptr [g_012aa4dc], 0xf }
	__asm { mov dword ptr [g_012aa4d8], 0 }
	__asm { mov byte ptr [g_012aa4c8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01313f3c[];
extern "C" char g_01313f40[];
extern "C" char g_01313f44[];
extern "C" void fn_00403a30();
extern "C" void fn_00412d20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0dee0
extern "C" __declspec(naked) void asm_00e0dee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01313f3c] }
	__asm { test eax, eax }
	__asm { je L_00e0df32 }
	__asm { push dword ptr [g_01313f40] }
	__asm { mov ecx, 0x1313f3c }
	__asm { push eax }
	__asm { call fn_00412d20 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push dword ptr [g_01313f3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01313f3c], 0 }
	__asm { mov dword ptr [g_01313f40], 0 }
	__asm { mov dword ptr [g_01313f44], 0 }
	__asm { L_00e0df32: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ac1ac[];
extern "C" char g_012ac1bc[];
extern "C" char g_012ac1c0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e260
extern "C" __declspec(naked) void asm_00e0e260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012ac1c0], 0x10 }
	__asm { jb L_00e0e29b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012ac1ac] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12ac1ac }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0e29b: }
	__asm { mov dword ptr [g_012ac1c0], 0xf }
	__asm { mov dword ptr [g_012ac1bc], 0 }
	__asm { mov byte ptr [g_012ac1ac], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ac17c[];
extern "C" char g_012ac18c[];
extern "C" char g_012ac190[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e2c0
extern "C" __declspec(naked) void asm_00e0e2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012ac190], 0x10 }
	__asm { jb L_00e0e2fb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012ac17c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12ac17c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0e2fb: }
	__asm { mov dword ptr [g_012ac190], 0xf }
	__asm { mov dword ptr [g_012ac18c], 0 }
	__asm { mov byte ptr [g_012ac17c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ac194[];
extern "C" char g_012ac1a4[];
extern "C" char g_012ac1a8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e320
extern "C" __declspec(naked) void asm_00e0e320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012ac1a8], 0x10 }
	__asm { jb L_00e0e35b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012ac194] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12ac194 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0e35b: }
	__asm { mov dword ptr [g_012ac1a8], 0xf }
	__asm { mov dword ptr [g_012ac1a4], 0 }
	__asm { mov byte ptr [g_012ac194], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ac1dc[];
extern "C" char g_012ac1ec[];
extern "C" char g_012ac1f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e380
extern "C" __declspec(naked) void asm_00e0e380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012ac1f0], 0x10 }
	__asm { jb L_00e0e3bb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012ac1dc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12ac1dc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0e3bb: }
	__asm { mov dword ptr [g_012ac1f0], 0xf }
	__asm { mov dword ptr [g_012ac1ec], 0 }
	__asm { mov byte ptr [g_012ac1dc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ac1c4[];
extern "C" char g_012ac1d4[];
extern "C" char g_012ac1d8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e3e0
extern "C" __declspec(naked) void asm_00e0e3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012ac1d8], 0x10 }
	__asm { jb L_00e0e41b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012ac1c4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12ac1c4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0e41b: }
	__asm { mov dword ptr [g_012ac1d8], 0xf }
	__asm { mov dword ptr [g_012ac1d4], 0 }
	__asm { mov byte ptr [g_012ac1c4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ac5bc[];
extern "C" char g_012ac5cc[];
extern "C" char g_012ac5d0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e4b0
extern "C" __declspec(naked) void asm_00e0e4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012ac5d0], 0x10 }
	__asm { jb L_00e0e4eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012ac5bc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12ac5bc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0e4eb: }
	__asm { mov dword ptr [g_012ac5d0], 0xf }
	__asm { mov dword ptr [g_012ac5cc], 0 }
	__asm { mov byte ptr [g_012ac5bc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ac5d4[];
extern "C" char g_012ac5e4[];
extern "C" char g_012ac5e8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e510
extern "C" __declspec(naked) void asm_00e0e510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012ac5e8], 0x10 }
	__asm { jb L_00e0e54b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012ac5d4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12ac5d4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0e54b: }
	__asm { mov dword ptr [g_012ac5e8], 0xf }
	__asm { mov dword ptr [g_012ac5e4], 0 }
	__asm { mov byte ptr [g_012ac5d4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ac5ec[];
extern "C" char g_012ac5fc[];
extern "C" char g_012ac600[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e570
extern "C" __declspec(naked) void asm_00e0e570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012ac600], 0x10 }
	__asm { jb L_00e0e5ab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012ac5ec] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12ac5ec }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0e5ab: }
	__asm { mov dword ptr [g_012ac600], 0xf }
	__asm { mov dword ptr [g_012ac5fc], 0 }
	__asm { mov byte ptr [g_012ac5ec], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ad27c[];
extern "C" char g_012ad28c[];
extern "C" char g_012ad290[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e660
extern "C" __declspec(naked) void asm_00e0e660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012ad290], 0x10 }
	__asm { jb L_00e0e69b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012ad27c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12ad27c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0e69b: }
	__asm { mov dword ptr [g_012ad290], 0xf }
	__asm { mov dword ptr [g_012ad28c], 0 }
	__asm { mov byte ptr [g_012ad27c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ad264[];
extern "C" char g_012ad274[];
extern "C" char g_012ad278[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e6c0
extern "C" __declspec(naked) void asm_00e0e6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012ad278], 0x10 }
	__asm { jb L_00e0e6fb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012ad264] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12ad264 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0e6fb: }
	__asm { mov dword ptr [g_012ad278], 0xf }
	__asm { mov dword ptr [g_012ad274], 0 }
	__asm { mov byte ptr [g_012ad264], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ad294[];
extern "C" char g_012ad2a4[];
extern "C" char g_012ad2a8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e720
extern "C" __declspec(naked) void asm_00e0e720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012ad2a8], 0x10 }
	__asm { jb L_00e0e75b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012ad294] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12ad294 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0e75b: }
	__asm { mov dword ptr [g_012ad2a8], 0xf }
	__asm { mov dword ptr [g_012ad2a4], 0 }
	__asm { mov byte ptr [g_012ad294], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ad234[];
extern "C" char g_012ad244[];
extern "C" char g_012ad248[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e780
extern "C" __declspec(naked) void asm_00e0e780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012ad248], 0x10 }
	__asm { jb L_00e0e7bb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012ad234] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12ad234 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0e7bb: }
	__asm { mov dword ptr [g_012ad248], 0xf }
	__asm { mov dword ptr [g_012ad244], 0 }
	__asm { mov byte ptr [g_012ad234], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ad2ac[];
extern "C" char g_012ad2bc[];
extern "C" char g_012ad2c0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e7e0
extern "C" __declspec(naked) void asm_00e0e7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012ad2c0], 0x10 }
	__asm { jb L_00e0e81b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012ad2ac] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12ad2ac }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0e81b: }
	__asm { mov dword ptr [g_012ad2c0], 0xf }
	__asm { mov dword ptr [g_012ad2bc], 0 }
	__asm { mov byte ptr [g_012ad2ac], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ad24c[];
extern "C" char g_012ad25c[];
extern "C" char g_012ad260[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0e840
extern "C" __declspec(naked) void asm_00e0e840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012ad260], 0x10 }
	__asm { jb L_00e0e87b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012ad24c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12ad24c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0e87b: }
	__asm { mov dword ptr [g_012ad260], 0xf }
	__asm { mov dword ptr [g_012ad25c], 0 }
	__asm { mov byte ptr [g_012ad24c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012af3b0[];
extern "C" char g_012af3c0[];
extern "C" char g_012af3c4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0ed30
extern "C" __declspec(naked) void asm_00e0ed30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012af3c4], 0x10 }
	__asm { jb L_00e0ed6b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012af3b0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12af3b0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0ed6b: }
	__asm { mov dword ptr [g_012af3c4], 0xf }
	__asm { mov dword ptr [g_012af3c0], 0 }
	__asm { mov byte ptr [g_012af3b0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012afe68[];
extern "C" char g_012afe78[];
extern "C" char g_012afe7c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0ee30
extern "C" __declspec(naked) void asm_00e0ee30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012afe7c], 0x10 }
	__asm { jb L_00e0ee6b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012afe68] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12afe68 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0ee6b: }
	__asm { mov dword ptr [g_012afe7c], 0xf }
	__asm { mov dword ptr [g_012afe78], 0 }
	__asm { mov byte ptr [g_012afe68], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012afe50[];
extern "C" char g_012afe60[];
extern "C" char g_012afe64[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0ee90
extern "C" __declspec(naked) void asm_00e0ee90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012afe64], 0x10 }
	__asm { jb L_00e0eecb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012afe50] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12afe50 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0eecb: }
	__asm { mov dword ptr [g_012afe64], 0xf }
	__asm { mov dword ptr [g_012afe60], 0 }
	__asm { mov byte ptr [g_012afe50], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012afe80[];
extern "C" char g_012afe90[];
extern "C" char g_012afe94[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0eef0
extern "C" __declspec(naked) void asm_00e0eef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012afe94], 0x10 }
	__asm { jb L_00e0ef2b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012afe80] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12afe80 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0ef2b: }
	__asm { mov dword ptr [g_012afe94], 0xf }
	__asm { mov dword ptr [g_012afe90], 0 }
	__asm { mov byte ptr [g_012afe80], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012afe98[];
extern "C" char g_012afea8[];
extern "C" char g_012afeac[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0ef50
extern "C" __declspec(naked) void asm_00e0ef50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012afeac], 0x10 }
	__asm { jb L_00e0ef8b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012afe98] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12afe98 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0ef8b: }
	__asm { mov dword ptr [g_012afeac], 0xf }
	__asm { mov dword ptr [g_012afea8], 0 }
	__asm { mov byte ptr [g_012afe98], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b09cc[];
extern "C" char g_012b09dc[];
extern "C" char g_012b09e0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0efb0
extern "C" __declspec(naked) void asm_00e0efb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012b09e0], 0x10 }
	__asm { jb L_00e0efeb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012b09cc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12b09cc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0efeb: }
	__asm { mov dword ptr [g_012b09e0], 0xf }
	__asm { mov dword ptr [g_012b09dc], 0 }
	__asm { mov byte ptr [g_012b09cc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b102c[];
extern "C" char g_012b103c[];
extern "C" char g_012b1040[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0f010
extern "C" __declspec(naked) void asm_00e0f010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012b1040], 0x10 }
	__asm { jb L_00e0f04b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012b102c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12b102c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0f04b: }
	__asm { mov dword ptr [g_012b1040], 0xf }
	__asm { mov dword ptr [g_012b103c], 0 }
	__asm { mov byte ptr [g_012b102c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b1014[];
extern "C" char g_012b1024[];
extern "C" char g_012b1028[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0f070
extern "C" __declspec(naked) void asm_00e0f070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012b1028], 0x10 }
	__asm { jb L_00e0f0ab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012b1014] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12b1014 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0f0ab: }
	__asm { mov dword ptr [g_012b1028], 0xf }
	__asm { mov dword ptr [g_012b1024], 0 }
	__asm { mov byte ptr [g_012b1014], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b105c[];
extern "C" char g_012b106c[];
extern "C" char g_012b1070[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0f0d0
extern "C" __declspec(naked) void asm_00e0f0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012b1070], 0x10 }
	__asm { jb L_00e0f10b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012b105c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12b105c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0f10b: }
	__asm { mov dword ptr [g_012b1070], 0xf }
	__asm { mov dword ptr [g_012b106c], 0 }
	__asm { mov byte ptr [g_012b105c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b1044[];
extern "C" char g_012b1054[];
extern "C" char g_012b1058[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0f130
extern "C" __declspec(naked) void asm_00e0f130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012b1058], 0x10 }
	__asm { jb L_00e0f16b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012b1044] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12b1044 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0f16b: }
	__asm { mov dword ptr [g_012b1058], 0xf }
	__asm { mov dword ptr [g_012b1054], 0 }
	__asm { mov byte ptr [g_012b1044], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b1a68[];
extern "C" char g_012b1a78[];
extern "C" char g_012b1a7c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0f190
extern "C" __declspec(naked) void asm_00e0f190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012b1a7c], 0x10 }
	__asm { jb L_00e0f1cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012b1a68] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12b1a68 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0f1cb: }
	__asm { mov dword ptr [g_012b1a7c], 0xf }
	__asm { mov dword ptr [g_012b1a78], 0 }
	__asm { mov byte ptr [g_012b1a68], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b1df8[];
extern "C" char g_012b1e08[];
extern "C" char g_012b1e0c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0f1f0
extern "C" __declspec(naked) void asm_00e0f1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012b1e0c], 0x10 }
	__asm { jb L_00e0f22b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012b1df8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12b1df8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0f22b: }
	__asm { mov dword ptr [g_012b1e0c], 0xf }
	__asm { mov dword ptr [g_012b1e08], 0 }
	__asm { mov byte ptr [g_012b1df8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b1e10[];
extern "C" char g_012b1e20[];
extern "C" char g_012b1e24[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0f250
extern "C" __declspec(naked) void asm_00e0f250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012b1e24], 0x10 }
	__asm { jb L_00e0f28b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012b1e10] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12b1e10 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0f28b: }
	__asm { mov dword ptr [g_012b1e24], 0xf }
	__asm { mov dword ptr [g_012b1e20], 0 }
	__asm { mov byte ptr [g_012b1e10], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012b1dc8[];
extern "C" char g_012b1dd8[];
extern "C" char g_012b1ddc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0f2b0
extern "C" __declspec(naked) void asm_00e0f2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012b1ddc], 0x10 }
	__asm { jb L_00e0f2eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012b1dc8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12b1dc8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0f2eb: }
	__asm { mov dword ptr [g_012b1ddc], 0xf }
	__asm { mov dword ptr [g_012b1dd8], 0 }
	__asm { mov byte ptr [g_012b1dc8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
