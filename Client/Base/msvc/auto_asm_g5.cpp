// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012114f8[];
extern "C" char g_01211508[];
extern "C" char g_0121150c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00defff0
extern "C" __declspec(naked) void asm_00defff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0121150c], 0x10 }
	__asm { jb L_00df002b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012114f8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12114f8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df002b: }
	__asm { mov dword ptr [g_0121150c], 0xf }
	__asm { mov dword ptr [g_01211508], 0 }
	__asm { mov byte ptr [g_012114f8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01211480[];
extern "C" char g_01211490[];
extern "C" char g_01211494[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df0050
extern "C" __declspec(naked) void asm_00df0050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01211494], 0x10 }
	__asm { jb L_00df008b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01211480] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1211480 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df008b: }
	__asm { mov dword ptr [g_01211494], 0xf }
	__asm { mov dword ptr [g_01211490], 0 }
	__asm { mov byte ptr [g_01211480], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01211528[];
extern "C" char g_01211538[];
extern "C" char g_0121153c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df00b0
extern "C" __declspec(naked) void asm_00df00b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0121153c], 0x10 }
	__asm { jb L_00df00eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01211528] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1211528 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df00eb: }
	__asm { mov dword ptr [g_0121153c], 0xf }
	__asm { mov dword ptr [g_01211538], 0 }
	__asm { mov byte ptr [g_01211528], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01211498[];
extern "C" char g_012114a8[];
extern "C" char g_012114ac[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df0110
extern "C" __declspec(naked) void asm_00df0110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012114ac], 0x10 }
	__asm { jb L_00df014b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01211498] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1211498 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df014b: }
	__asm { mov dword ptr [g_012114ac], 0xf }
	__asm { mov dword ptr [g_012114a8], 0 }
	__asm { mov byte ptr [g_01211498], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012114c8[];
extern "C" char g_012114d8[];
extern "C" char g_012114dc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df0170
extern "C" __declspec(naked) void asm_00df0170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012114dc], 0x10 }
	__asm { jb L_00df01ab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012114c8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12114c8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df01ab: }
	__asm { mov dword ptr [g_012114dc], 0xf }
	__asm { mov dword ptr [g_012114d8], 0 }
	__asm { mov byte ptr [g_012114c8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012114b0[];
extern "C" char g_012114c0[];
extern "C" char g_012114c4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df01d0
extern "C" __declspec(naked) void asm_00df01d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012114c4], 0x10 }
	__asm { jb L_00df020b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012114b0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12114b0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df020b: }
	__asm { mov dword ptr [g_012114c4], 0xf }
	__asm { mov dword ptr [g_012114c0], 0 }
	__asm { mov byte ptr [g_012114b0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012114e0[];
extern "C" char g_012114f0[];
extern "C" char g_012114f4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df0230
extern "C" __declspec(naked) void asm_00df0230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012114f4], 0x10 }
	__asm { jb L_00df026b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012114e0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12114e0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df026b: }
	__asm { mov dword ptr [g_012114f4], 0xf }
	__asm { mov dword ptr [g_012114f0], 0 }
	__asm { mov byte ptr [g_012114e0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01211558[];
extern "C" char g_01211568[];
extern "C" char g_0121156c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df0290
extern "C" __declspec(naked) void asm_00df0290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0121156c], 0x10 }
	__asm { jb L_00df02cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01211558] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1211558 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df02cb: }
	__asm { mov dword ptr [g_0121156c], 0xf }
	__asm { mov dword ptr [g_01211568], 0 }
	__asm { mov byte ptr [g_01211558], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012143e0[];
extern "C" char g_012143f0[];
extern "C" char g_012143f4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df0680
extern "C" __declspec(naked) void asm_00df0680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012143f4], 0x10 }
	__asm { jb L_00df06bb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012143e0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12143e0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df06bb: }
	__asm { mov dword ptr [g_012143f4], 0xf }
	__asm { mov dword ptr [g_012143f0], 0 }
	__asm { mov byte ptr [g_012143e0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012143c8[];
extern "C" char g_012143d8[];
extern "C" char g_012143dc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df06e0
extern "C" __declspec(naked) void asm_00df06e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012143dc], 0x10 }
	__asm { jb L_00df071b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012143c8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12143c8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df071b: }
	__asm { mov dword ptr [g_012143dc], 0xf }
	__asm { mov dword ptr [g_012143d8], 0 }
	__asm { mov byte ptr [g_012143c8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012143f8[];
extern "C" char g_01214408[];
extern "C" char g_0121440c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df0740
extern "C" __declspec(naked) void asm_00df0740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0121440c], 0x10 }
	__asm { jb L_00df077b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012143f8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12143f8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df077b: }
	__asm { mov dword ptr [g_0121440c], 0xf }
	__asm { mov dword ptr [g_01214408], 0 }
	__asm { mov byte ptr [g_012143f8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01214410[];
extern "C" char g_01214420[];
extern "C" char g_01214424[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df07a0
extern "C" __declspec(naked) void asm_00df07a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01214424], 0x10 }
	__asm { jb L_00df07db }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01214410] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1214410 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df07db: }
	__asm { mov dword ptr [g_01214424], 0xf }
	__asm { mov dword ptr [g_01214420], 0 }
	__asm { mov byte ptr [g_01214410], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01215930[];
extern "C" char g_01215940[];
extern "C" char g_01215944[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df0b00
extern "C" __declspec(naked) void asm_00df0b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01215944], 0x10 }
	__asm { jb L_00df0b3b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01215930] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1215930 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df0b3b: }
	__asm { mov dword ptr [g_01215944], 0xf }
	__asm { mov dword ptr [g_01215940], 0 }
	__asm { mov byte ptr [g_01215930], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01215960[];
extern "C" char g_01215970[];
extern "C" char g_01215974[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df0b60
extern "C" __declspec(naked) void asm_00df0b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01215974], 0x10 }
	__asm { jb L_00df0b9b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01215960] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1215960 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df0b9b: }
	__asm { mov dword ptr [g_01215974], 0xf }
	__asm { mov dword ptr [g_01215970], 0 }
	__asm { mov byte ptr [g_01215960], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01215948[];
extern "C" char g_01215958[];
extern "C" char g_0121595c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df0bc0
extern "C" __declspec(naked) void asm_00df0bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0121595c], 0x10 }
	__asm { jb L_00df0bfb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01215948] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1215948 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df0bfb: }
	__asm { mov dword ptr [g_0121595c], 0xf }
	__asm { mov dword ptr [g_01215958], 0 }
	__asm { mov byte ptr [g_01215948], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fd7e8[];
extern "C" char g_012fd7f8[];
extern "C" char g_012fd7fc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df0fb0
extern "C" __declspec(naked) void asm_00df0fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fd7fc], 0x10 }
	__asm { jb L_00df0feb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fd7e8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fd7e8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df0feb: }
	__asm { mov dword ptr [g_012fd7fc], 0xf }
	__asm { mov dword ptr [g_012fd7f8], 0 }
	__asm { mov byte ptr [g_012fd7e8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012169d0[];
extern "C" char g_012169e0[];
extern "C" char g_012169e4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df10b0
extern "C" __declspec(naked) void asm_00df10b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012169e4], 0x10 }
	__asm { jb L_00df10eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012169d0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12169d0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df10eb: }
	__asm { mov dword ptr [g_012169e4], 0xf }
	__asm { mov dword ptr [g_012169e0], 0 }
	__asm { mov byte ptr [g_012169d0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01218980[];
extern "C" char g_01218990[];
extern "C" char g_01218994[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df1e70
extern "C" __declspec(naked) void asm_00df1e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01218994], 0x10 }
	__asm { jb L_00df1eab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01218980] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1218980 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df1eab: }
	__asm { mov dword ptr [g_01218994], 0xf }
	__asm { mov dword ptr [g_01218990], 0 }
	__asm { mov byte ptr [g_01218980], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01218998[];
extern "C" char g_012189a8[];
extern "C" char g_012189ac[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df1ed0
extern "C" __declspec(naked) void asm_00df1ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012189ac], 0x10 }
	__asm { jb L_00df1f0b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01218998] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1218998 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df1f0b: }
	__asm { mov dword ptr [g_012189ac], 0xf }
	__asm { mov dword ptr [g_012189a8], 0 }
	__asm { mov byte ptr [g_01218998], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012189b0[];
extern "C" char g_012189c0[];
extern "C" char g_012189c4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df1f30
extern "C" __declspec(naked) void asm_00df1f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012189c4], 0x10 }
	__asm { jb L_00df1f6b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012189b0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12189b0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df1f6b: }
	__asm { mov dword ptr [g_012189c4], 0xf }
	__asm { mov dword ptr [g_012189c0], 0 }
	__asm { mov byte ptr [g_012189b0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121d154[];
extern "C" char g_0121d164[];
extern "C" char g_0121d168[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df26c0
extern "C" __declspec(naked) void asm_00df26c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0121d168], 0x10 }
	__asm { jb L_00df26fb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0121d154] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x121d154 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df26fb: }
	__asm { mov dword ptr [g_0121d168], 0xf }
	__asm { mov dword ptr [g_0121d164], 0 }
	__asm { mov byte ptr [g_0121d154], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121d13c[];
extern "C" char g_0121d14c[];
extern "C" char g_0121d150[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df2720
extern "C" __declspec(naked) void asm_00df2720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0121d150], 0x10 }
	__asm { jb L_00df275b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0121d13c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x121d13c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df275b: }
	__asm { mov dword ptr [g_0121d150], 0xf }
	__asm { mov dword ptr [g_0121d14c], 0 }
	__asm { mov byte ptr [g_0121d13c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121fed8[];
extern "C" char g_0121fee8[];
extern "C" char g_0121feec[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df2ea0
extern "C" __declspec(naked) void asm_00df2ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0121feec], 0x10 }
	__asm { jb L_00df2edb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0121fed8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x121fed8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df2edb: }
	__asm { mov dword ptr [g_0121feec], 0xf }
	__asm { mov dword ptr [g_0121fee8], 0 }
	__asm { mov byte ptr [g_0121fed8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121fef0[];
extern "C" char g_0121ff00[];
extern "C" char g_0121ff04[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df2f00
extern "C" __declspec(naked) void asm_00df2f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0121ff04], 0x10 }
	__asm { jb L_00df2f3b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0121fef0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x121fef0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df2f3b: }
	__asm { mov dword ptr [g_0121ff04], 0xf }
	__asm { mov dword ptr [g_0121ff00], 0 }
	__asm { mov byte ptr [g_0121fef0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01222b30[];
extern "C" char g_01222b40[];
extern "C" char g_01222b44[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df3710
extern "C" __declspec(naked) void asm_00df3710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01222b44], 0x10 }
	__asm { jb L_00df374b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01222b30] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1222b30 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df374b: }
	__asm { mov dword ptr [g_01222b44], 0xf }
	__asm { mov dword ptr [g_01222b40], 0 }
	__asm { mov byte ptr [g_01222b30], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012246cc[];
extern "C" char g_012246dc[];
extern "C" char g_012246e0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df3c10
extern "C" __declspec(naked) void asm_00df3c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012246e0], 0x10 }
	__asm { jb L_00df3c4b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012246cc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12246cc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df3c4b: }
	__asm { mov dword ptr [g_012246e0], 0xf }
	__asm { mov dword ptr [g_012246dc], 0 }
	__asm { mov byte ptr [g_012246cc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012246b4[];
extern "C" char g_012246c4[];
extern "C" char g_012246c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df3c70
extern "C" __declspec(naked) void asm_00df3c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012246c8], 0x10 }
	__asm { jb L_00df3cab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012246b4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12246b4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df3cab: }
	__asm { mov dword ptr [g_012246c8], 0xf }
	__asm { mov dword ptr [g_012246c4], 0 }
	__asm { mov byte ptr [g_012246b4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01225f3c[];
extern "C" char g_01225f4c[];
extern "C" char g_01225f50[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df41e0
extern "C" __declspec(naked) void asm_00df41e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01225f50], 0x10 }
	__asm { jb L_00df421b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01225f3c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1225f3c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df421b: }
	__asm { mov dword ptr [g_01225f50], 0xf }
	__asm { mov dword ptr [g_01225f4c], 0 }
	__asm { mov byte ptr [g_01225f3c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01225f24[];
extern "C" char g_01225f34[];
extern "C" char g_01225f38[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df4240
extern "C" __declspec(naked) void asm_00df4240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01225f38], 0x10 }
	__asm { jb L_00df427b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01225f24] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1225f24 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df427b: }
	__asm { mov dword ptr [g_01225f38], 0xf }
	__asm { mov dword ptr [g_01225f34], 0 }
	__asm { mov byte ptr [g_01225f24], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012271ac[];
extern "C" char g_012271bc[];
extern "C" char g_012271c0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df48f0
extern "C" __declspec(naked) void asm_00df48f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012271c0], 0x10 }
	__asm { jb L_00df492b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012271ac] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12271ac }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df492b: }
	__asm { mov dword ptr [g_012271c0], 0xf }
	__asm { mov dword ptr [g_012271bc], 0 }
	__asm { mov byte ptr [g_012271ac], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0122cb2c[];
extern "C" char g_0122cb3c[];
extern "C" char g_0122cb40[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df54f0
extern "C" __declspec(naked) void asm_00df54f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0122cb40], 0x10 }
	__asm { jb L_00df552b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0122cb2c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x122cb2c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df552b: }
	__asm { mov dword ptr [g_0122cb40], 0xf }
	__asm { mov dword ptr [g_0122cb3c], 0 }
	__asm { mov byte ptr [g_0122cb2c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0122cb44[];
extern "C" char g_0122cb54[];
extern "C" char g_0122cb58[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df5550
extern "C" __declspec(naked) void asm_00df5550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0122cb58], 0x10 }
	__asm { jb L_00df558b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0122cb44] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x122cb44 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df558b: }
	__asm { mov dword ptr [g_0122cb58], 0xf }
	__asm { mov dword ptr [g_0122cb54], 0 }
	__asm { mov byte ptr [g_0122cb44], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0122cb5c[];
extern "C" char g_0122cb6c[];
extern "C" char g_0122cb70[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df55b0
extern "C" __declspec(naked) void asm_00df55b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0122cb70], 0x10 }
	__asm { jb L_00df55eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0122cb5c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x122cb5c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df55eb: }
	__asm { mov dword ptr [g_0122cb70], 0xf }
	__asm { mov dword ptr [g_0122cb6c], 0 }
	__asm { mov byte ptr [g_0122cb5c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301df8[];
extern "C" char g_01301e08[];
extern "C" char g_01301e0c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df5f80
extern "C" __declspec(naked) void asm_00df5f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01301e0c], 0x10 }
	__asm { jb L_00df5fbb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01301df8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1301df8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df5fbb: }
	__asm { mov dword ptr [g_01301e0c], 0xf }
	__asm { mov dword ptr [g_01301e08], 0 }
	__asm { mov byte ptr [g_01301df8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301ddc[];
extern "C" char g_01301dec[];
extern "C" char g_01301df0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df5ff0
extern "C" __declspec(naked) void asm_00df5ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01301df0], 0x10 }
	__asm { jb L_00df602b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01301ddc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1301ddc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df602b: }
	__asm { mov dword ptr [g_01301df0], 0xf }
	__asm { mov dword ptr [g_01301dec], 0 }
	__asm { mov byte ptr [g_01301ddc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301d84[];
extern "C" char g_01301d94[];
extern "C" char g_01301d98[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6050
extern "C" __declspec(naked) void asm_00df6050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01301d98], 0x10 }
	__asm { jb L_00df608b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01301d84] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1301d84 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df608b: }
	__asm { mov dword ptr [g_01301d98], 0xf }
	__asm { mov dword ptr [g_01301d94], 0 }
	__asm { mov byte ptr [g_01301d84], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301da4[];
extern "C" char g_01301db4[];
extern "C" char g_01301db8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df60b0
extern "C" __declspec(naked) void asm_00df60b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01301db8], 0x10 }
	__asm { jb L_00df60eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01301da4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1301da4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df60eb: }
	__asm { mov dword ptr [g_01301db8], 0xf }
	__asm { mov dword ptr [g_01301db4], 0 }
	__asm { mov byte ptr [g_01301da4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01301e14[];
extern "C" char g_01301e24[];
extern "C" char g_01301e28[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6110
extern "C" __declspec(naked) void asm_00df6110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01301e28], 0x10 }
	__asm { jb L_00df614b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01301e14] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1301e14 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df614b: }
	__asm { mov dword ptr [g_01301e28], 0xf }
	__asm { mov dword ptr [g_01301e24], 0 }
	__asm { mov byte ptr [g_01301e14], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012322c4[];
extern "C" char g_012322d4[];
extern "C" char g_012322d8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df61f0
extern "C" __declspec(naked) void asm_00df61f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012322d8], 0x10 }
	__asm { jb L_00df622b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012322c4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12322c4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df622b: }
	__asm { mov dword ptr [g_012322d8], 0xf }
	__asm { mov dword ptr [g_012322d4], 0 }
	__asm { mov byte ptr [g_012322c4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012322dc[];
extern "C" char g_012322ec[];
extern "C" char g_012322f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6250
extern "C" __declspec(naked) void asm_00df6250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012322f0], 0x10 }
	__asm { jb L_00df628b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012322dc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12322dc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df628b: }
	__asm { mov dword ptr [g_012322f0], 0xf }
	__asm { mov dword ptr [g_012322ec], 0 }
	__asm { mov byte ptr [g_012322dc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01232360[];
extern "C" char g_01232370[];
extern "C" char g_01232374[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6440
extern "C" __declspec(naked) void asm_00df6440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01232374], 0x10 }
	__asm { jb L_00df647b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01232360] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1232360 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df647b: }
	__asm { mov dword ptr [g_01232374], 0xf }
	__asm { mov dword ptr [g_01232370], 0 }
	__asm { mov byte ptr [g_01232360], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01232348[];
extern "C" char g_01232358[];
extern "C" char g_0123235c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df64a0
extern "C" __declspec(naked) void asm_00df64a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0123235c], 0x10 }
	__asm { jb L_00df64db }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01232348] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1232348 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df64db: }
	__asm { mov dword ptr [g_0123235c], 0xf }
	__asm { mov dword ptr [g_01232358], 0 }
	__asm { mov byte ptr [g_01232348], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01232390[];
extern "C" char g_012323a0[];
extern "C" char g_012323a4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6500
extern "C" __declspec(naked) void asm_00df6500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012323a4], 0x10 }
	__asm { jb L_00df653b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01232390] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1232390 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df653b: }
	__asm { mov dword ptr [g_012323a4], 0xf }
	__asm { mov dword ptr [g_012323a0], 0 }
	__asm { mov byte ptr [g_01232390], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012323c0[];
extern "C" char g_012323d0[];
extern "C" char g_012323d4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df6560
extern "C" __declspec(naked) void asm_00df6560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012323d4], 0x10 }
	__asm { jb L_00df659b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012323c0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12323c0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df659b: }
	__asm { mov dword ptr [g_012323d4], 0xf }
	__asm { mov dword ptr [g_012323d0], 0 }
	__asm { mov byte ptr [g_012323c0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012323a8[];
extern "C" char g_012323b8[];
extern "C" char g_012323bc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df65c0
extern "C" __declspec(naked) void asm_00df65c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012323bc], 0x10 }
	__asm { jb L_00df65fb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012323a8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12323a8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df65fb: }
	__asm { mov dword ptr [g_012323bc], 0xf }
	__asm { mov dword ptr [g_012323b8], 0 }
	__asm { mov byte ptr [g_012323a8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0123464c[];
extern "C" char g_0123465c[];
extern "C" char g_01234660[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7270
extern "C" __declspec(naked) void asm_00df7270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01234660], 0x10 }
	__asm { jb L_00df72ab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0123464c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x123464c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df72ab: }
	__asm { mov dword ptr [g_01234660], 0xf }
	__asm { mov dword ptr [g_0123465c], 0 }
	__asm { mov byte ptr [g_0123464c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01234664[];
extern "C" char g_01234674[];
extern "C" char g_01234678[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df72d0
extern "C" __declspec(naked) void asm_00df72d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01234678], 0x10 }
	__asm { jb L_00df730b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01234664] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1234664 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df730b: }
	__asm { mov dword ptr [g_01234678], 0xf }
	__asm { mov dword ptr [g_01234674], 0 }
	__asm { mov byte ptr [g_01234664], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0123467c[];
extern "C" char g_0123468c[];
extern "C" char g_01234690[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7330
extern "C" __declspec(naked) void asm_00df7330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01234690], 0x10 }
	__asm { jb L_00df736b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0123467c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x123467c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df736b: }
	__asm { mov dword ptr [g_01234690], 0xf }
	__asm { mov dword ptr [g_0123468c], 0 }
	__asm { mov byte ptr [g_0123467c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01234694[];
extern "C" char g_012346a4[];
extern "C" char g_012346a8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7390
extern "C" __declspec(naked) void asm_00df7390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012346a8], 0x10 }
	__asm { jb L_00df73cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01234694] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1234694 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df73cb: }
	__asm { mov dword ptr [g_012346a8], 0xf }
	__asm { mov dword ptr [g_012346a4], 0 }
	__asm { mov byte ptr [g_01234694], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012346c4[];
extern "C" char g_012346d4[];
extern "C" char g_012346d8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df73f0
extern "C" __declspec(naked) void asm_00df73f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012346d8], 0x10 }
	__asm { jb L_00df742b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012346c4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12346c4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df742b: }
	__asm { mov dword ptr [g_012346d8], 0xf }
	__asm { mov dword ptr [g_012346d4], 0 }
	__asm { mov byte ptr [g_012346c4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012346ac[];
extern "C" char g_012346bc[];
extern "C" char g_012346c0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7450
extern "C" __declspec(naked) void asm_00df7450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012346c0], 0x10 }
	__asm { jb L_00df748b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012346ac] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12346ac }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df748b: }
	__asm { mov dword ptr [g_012346c0], 0xf }
	__asm { mov dword ptr [g_012346bc], 0 }
	__asm { mov byte ptr [g_012346ac], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01234634[];
extern "C" char g_01234644[];
extern "C" char g_01234648[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df74b0
extern "C" __declspec(naked) void asm_00df74b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01234648], 0x10 }
	__asm { jb L_00df74eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01234634] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1234634 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df74eb: }
	__asm { mov dword ptr [g_01234648], 0xf }
	__asm { mov dword ptr [g_01234644], 0 }
	__asm { mov byte ptr [g_01234634], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012346dc[];
extern "C" char g_012346ec[];
extern "C" char g_012346f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7510
extern "C" __declspec(naked) void asm_00df7510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012346f0], 0x10 }
	__asm { jb L_00df754b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012346dc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12346dc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df754b: }
	__asm { mov dword ptr [g_012346f0], 0xf }
	__asm { mov dword ptr [g_012346ec], 0 }
	__asm { mov byte ptr [g_012346dc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0123fbd8[];
extern "C" char g_0123fbe8[];
extern "C" char g_0123fbec[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9c40
extern "C" __declspec(naked) void asm_00df9c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0123fbec], 0x10 }
	__asm { jb L_00df9c7b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0123fbd8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x123fbd8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df9c7b: }
	__asm { mov dword ptr [g_0123fbec], 0xf }
	__asm { mov dword ptr [g_0123fbe8], 0 }
	__asm { mov byte ptr [g_0123fbd8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0123fbc0[];
extern "C" char g_0123fbd0[];
extern "C" char g_0123fbd4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9ca0
extern "C" __declspec(naked) void asm_00df9ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0123fbd4], 0x10 }
	__asm { jb L_00df9cdb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0123fbc0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x123fbc0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df9cdb: }
	__asm { mov dword ptr [g_0123fbd4], 0xf }
	__asm { mov dword ptr [g_0123fbd0], 0 }
	__asm { mov byte ptr [g_0123fbc0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0123fbf0[];
extern "C" char g_0123fc00[];
extern "C" char g_0123fc04[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9d00
extern "C" __declspec(naked) void asm_00df9d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0123fc04], 0x10 }
	__asm { jb L_00df9d3b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0123fbf0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x123fbf0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df9d3b: }
	__asm { mov dword ptr [g_0123fc04], 0xf }
	__asm { mov dword ptr [g_0123fc00], 0 }
	__asm { mov byte ptr [g_0123fbf0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0123fc08[];
extern "C" char g_0123fc18[];
extern "C" char g_0123fc1c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9d60
extern "C" __declspec(naked) void asm_00df9d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0123fc1c], 0x10 }
	__asm { jb L_00df9d9b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0123fc08] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x123fc08 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df9d9b: }
	__asm { mov dword ptr [g_0123fc1c], 0xf }
	__asm { mov dword ptr [g_0123fc18], 0 }
	__asm { mov byte ptr [g_0123fc08], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0123fc20[];
extern "C" char g_0123fc30[];
extern "C" char g_0123fc34[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9dc0
extern "C" __declspec(naked) void asm_00df9dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0123fc34], 0x10 }
	__asm { jb L_00df9dfb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0123fc20] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x123fc20 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00df9dfb: }
	__asm { mov dword ptr [g_0123fc34], 0xf }
	__asm { mov dword ptr [g_0123fc30], 0 }
	__asm { mov byte ptr [g_0123fc20], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305c84[];
extern "C" char g_01305c94[];
extern "C" char g_01305c98[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfa090
extern "C" __declspec(naked) void asm_00dfa090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01305c98], 0x10 }
	__asm { jb L_00dfa0cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01305c84] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1305c84 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dfa0cb: }
	__asm { mov dword ptr [g_01305c98], 0xf }
	__asm { mov dword ptr [g_01305c94], 0 }
	__asm { mov byte ptr [g_01305c84], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01242e6c[];
extern "C" char g_01242e7c[];
extern "C" char g_01242e80[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfb350
extern "C" __declspec(naked) void asm_00dfb350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01242e80], 0x10 }
	__asm { jb L_00dfb38b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01242e6c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1242e6c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dfb38b: }
	__asm { mov dword ptr [g_01242e80], 0xf }
	__asm { mov dword ptr [g_01242e7c], 0 }
	__asm { mov byte ptr [g_01242e6c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01242e84[];
extern "C" char g_01242e94[];
extern "C" char g_01242e98[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfb3b0
extern "C" __declspec(naked) void asm_00dfb3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01242e98], 0x10 }
	__asm { jb L_00dfb3eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01242e84] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1242e84 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dfb3eb: }
	__asm { mov dword ptr [g_01242e98], 0xf }
	__asm { mov dword ptr [g_01242e94], 0 }
	__asm { mov byte ptr [g_01242e84], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124bca8[];
extern "C" char g_0124bcb8[];
extern "C" char g_0124bcbc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc6d0
extern "C" __declspec(naked) void asm_00dfc6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0124bcbc], 0x10 }
	__asm { jb L_00dfc70b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0124bca8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x124bca8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dfc70b: }
	__asm { mov dword ptr [g_0124bcbc], 0xf }
	__asm { mov dword ptr [g_0124bcb8], 0 }
	__asm { mov byte ptr [g_0124bca8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124bfdc[];
extern "C" char g_0124bfec[];
extern "C" char g_0124bff0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc730
extern "C" __declspec(naked) void asm_00dfc730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0124bff0], 0x10 }
	__asm { jb L_00dfc76b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0124bfdc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x124bfdc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dfc76b: }
	__asm { mov dword ptr [g_0124bff0], 0xf }
	__asm { mov dword ptr [g_0124bfec], 0 }
	__asm { mov byte ptr [g_0124bfdc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124bff4[];
extern "C" char g_0124c004[];
extern "C" char g_0124c008[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfc790
extern "C" __declspec(naked) void asm_00dfc790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0124c008], 0x10 }
	__asm { jb L_00dfc7cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0124bff4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x124bff4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dfc7cb: }
	__asm { mov dword ptr [g_0124c008], 0xf }
	__asm { mov dword ptr [g_0124c004], 0 }
	__asm { mov byte ptr [g_0124bff4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124d19c[];
extern "C" char g_0124d1ac[];
extern "C" char g_0124d1b0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfcbf0
extern "C" __declspec(naked) void asm_00dfcbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0124d1b0], 0x10 }
	__asm { jb L_00dfcc2b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0124d19c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x124d19c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dfcc2b: }
	__asm { mov dword ptr [g_0124d1b0], 0xf }
	__asm { mov dword ptr [g_0124d1ac], 0 }
	__asm { mov byte ptr [g_0124d19c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124e8d0[];
extern "C" char g_0124e8e0[];
extern "C" char g_0124e8e4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfcc50
extern "C" __declspec(naked) void asm_00dfcc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0124e8e4], 0x10 }
	__asm { jb L_00dfcc8b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0124e8d0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x124e8d0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dfcc8b: }
	__asm { mov dword ptr [g_0124e8e4], 0xf }
	__asm { mov dword ptr [g_0124e8e0], 0 }
	__asm { mov byte ptr [g_0124e8d0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eafc[];
extern "C" char g_0124eb0c[];
extern "C" char g_0124eb10[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfccb0
extern "C" __declspec(naked) void asm_00dfccb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0124eb10], 0x10 }
	__asm { jb L_00dfcceb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0124eafc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x124eafc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dfcceb: }
	__asm { mov dword ptr [g_0124eb10], 0xf }
	__asm { mov dword ptr [g_0124eb0c], 0 }
	__asm { mov byte ptr [g_0124eafc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124f19c[];
extern "C" char g_0124f1ac[];
extern "C" char g_0124f1b0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfcd80
extern "C" __declspec(naked) void asm_00dfcd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0124f1b0], 0x10 }
	__asm { jb L_00dfcdbb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0124f19c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x124f19c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dfcdbb: }
	__asm { mov dword ptr [g_0124f1b0], 0xf }
	__asm { mov dword ptr [g_0124f1ac], 0 }
	__asm { mov byte ptr [g_0124f19c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124f23c[];
extern "C" char g_0124f24c[];
extern "C" char g_0124f250[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfcec0
extern "C" __declspec(naked) void asm_00dfcec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0124f250], 0x10 }
	__asm { jb L_00dfcefb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0124f23c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x124f23c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dfcefb: }
	__asm { mov dword ptr [g_0124f250], 0xf }
	__asm { mov dword ptr [g_0124f24c], 0 }
	__asm { mov byte ptr [g_0124f23c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01253900[];
extern "C" char g_01253910[];
extern "C" char g_01253914[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe2d0
extern "C" __declspec(naked) void asm_00dfe2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01253914], 0x10 }
	__asm { jb L_00dfe30b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01253900] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1253900 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dfe30b: }
	__asm { mov dword ptr [g_01253914], 0xf }
	__asm { mov dword ptr [g_01253910], 0 }
	__asm { mov byte ptr [g_01253900], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012538e8[];
extern "C" char g_012538f8[];
extern "C" char g_012538fc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe330
extern "C" __declspec(naked) void asm_00dfe330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012538fc], 0x10 }
	__asm { jb L_00dfe36b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012538e8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12538e8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dfe36b: }
	__asm { mov dword ptr [g_012538fc], 0xf }
	__asm { mov dword ptr [g_012538f8], 0 }
	__asm { mov byte ptr [g_012538e8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012538d0[];
extern "C" char g_012538e0[];
extern "C" char g_012538e4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfe390
extern "C" __declspec(naked) void asm_00dfe390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012538e4], 0x10 }
	__asm { jb L_00dfe3cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012538d0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12538d0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dfe3cb: }
	__asm { mov dword ptr [g_012538e4], 0xf }
	__asm { mov dword ptr [g_012538e0], 0 }
	__asm { mov byte ptr [g_012538d0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125a8b4[];
extern "C" char g_0125a8c4[];
extern "C" char g_0125a8c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dff480
extern "C" __declspec(naked) void asm_00dff480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125a8c8], 0x10 }
	__asm { jb L_00dff4bb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125a8b4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125a8b4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dff4bb: }
	__asm { mov dword ptr [g_0125a8c8], 0xf }
	__asm { mov dword ptr [g_0125a8c4], 0 }
	__asm { mov byte ptr [g_0125a8b4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125a8cc[];
extern "C" char g_0125a8dc[];
extern "C" char g_0125a8e0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dff4e0
extern "C" __declspec(naked) void asm_00dff4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125a8e0], 0x10 }
	__asm { jb L_00dff51b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125a8cc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125a8cc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dff51b: }
	__asm { mov dword ptr [g_0125a8e0], 0xf }
	__asm { mov dword ptr [g_0125a8dc], 0 }
	__asm { mov byte ptr [g_0125a8cc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125a8fc[];
extern "C" char g_0125a90c[];
extern "C" char g_0125a910[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dff540
extern "C" __declspec(naked) void asm_00dff540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125a910], 0x10 }
	__asm { jb L_00dff57b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125a8fc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125a8fc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dff57b: }
	__asm { mov dword ptr [g_0125a910], 0xf }
	__asm { mov dword ptr [g_0125a90c], 0 }
	__asm { mov byte ptr [g_0125a8fc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125a89c[];
extern "C" char g_0125a8ac[];
extern "C" char g_0125a8b0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dff5a0
extern "C" __declspec(naked) void asm_00dff5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125a8b0], 0x10 }
	__asm { jb L_00dff5db }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125a89c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125a89c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dff5db: }
	__asm { mov dword ptr [g_0125a8b0], 0xf }
	__asm { mov dword ptr [g_0125a8ac], 0 }
	__asm { mov byte ptr [g_0125a89c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125a95c[];
extern "C" char g_0125a96c[];
extern "C" char g_0125a970[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dff600
extern "C" __declspec(naked) void asm_00dff600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125a970], 0x10 }
	__asm { jb L_00dff63b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125a95c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125a95c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dff63b: }
	__asm { mov dword ptr [g_0125a970], 0xf }
	__asm { mov dword ptr [g_0125a96c], 0 }
	__asm { mov byte ptr [g_0125a95c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125a974[];
extern "C" char g_0125a984[];
extern "C" char g_0125a988[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dff660
extern "C" __declspec(naked) void asm_00dff660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125a988], 0x10 }
	__asm { jb L_00dff69b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125a974] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125a974 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dff69b: }
	__asm { mov dword ptr [g_0125a988], 0xf }
	__asm { mov dword ptr [g_0125a984], 0 }
	__asm { mov byte ptr [g_0125a974], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125a8e4[];
extern "C" char g_0125a8f4[];
extern "C" char g_0125a8f8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dff6c0
extern "C" __declspec(naked) void asm_00dff6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125a8f8], 0x10 }
	__asm { jb L_00dff6fb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125a8e4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125a8e4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dff6fb: }
	__asm { mov dword ptr [g_0125a8f8], 0xf }
	__asm { mov dword ptr [g_0125a8f4], 0 }
	__asm { mov byte ptr [g_0125a8e4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125a914[];
extern "C" char g_0125a924[];
extern "C" char g_0125a928[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dff720
extern "C" __declspec(naked) void asm_00dff720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125a928], 0x10 }
	__asm { jb L_00dff75b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125a914] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125a914 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dff75b: }
	__asm { mov dword ptr [g_0125a928], 0xf }
	__asm { mov dword ptr [g_0125a924], 0 }
	__asm { mov byte ptr [g_0125a914], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125a944[];
extern "C" char g_0125a954[];
extern "C" char g_0125a958[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dff780
extern "C" __declspec(naked) void asm_00dff780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125a958], 0x10 }
	__asm { jb L_00dff7bb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125a944] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125a944 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dff7bb: }
	__asm { mov dword ptr [g_0125a958], 0xf }
	__asm { mov dword ptr [g_0125a954], 0 }
	__asm { mov byte ptr [g_0125a944], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125a92c[];
extern "C" char g_0125a93c[];
extern "C" char g_0125a940[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dff7e0
extern "C" __declspec(naked) void asm_00dff7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125a940], 0x10 }
	__asm { jb L_00dff81b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125a92c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125a92c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dff81b: }
	__asm { mov dword ptr [g_0125a940], 0xf }
	__asm { mov dword ptr [g_0125a93c], 0 }
	__asm { mov byte ptr [g_0125a92c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125a884[];
extern "C" char g_0125a894[];
extern "C" char g_0125a898[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dff840
extern "C" __declspec(naked) void asm_00dff840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125a898], 0x10 }
	__asm { jb L_00dff87b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125a884] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125a884 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dff87b: }
	__asm { mov dword ptr [g_0125a898], 0xf }
	__asm { mov dword ptr [g_0125a894], 0 }
	__asm { mov byte ptr [g_0125a884], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125b56c[];
extern "C" char g_0125b57c[];
extern "C" char g_0125b580[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dffa80
extern "C" __declspec(naked) void asm_00dffa80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125b580], 0x10 }
	__asm { jb L_00dffabb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125b56c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125b56c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dffabb: }
	__asm { mov dword ptr [g_0125b580], 0xf }
	__asm { mov dword ptr [g_0125b57c], 0 }
	__asm { mov byte ptr [g_0125b56c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125b554[];
extern "C" char g_0125b564[];
extern "C" char g_0125b568[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dffae0
extern "C" __declspec(naked) void asm_00dffae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125b568], 0x10 }
	__asm { jb L_00dffb1b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125b554] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125b554 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dffb1b: }
	__asm { mov dword ptr [g_0125b568], 0xf }
	__asm { mov dword ptr [g_0125b564], 0 }
	__asm { mov byte ptr [g_0125b554], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125b50c[];
extern "C" char g_0125b51c[];
extern "C" char g_0125b520[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dffb40
extern "C" __declspec(naked) void asm_00dffb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125b520], 0x10 }
	__asm { jb L_00dffb7b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125b50c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125b50c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dffb7b: }
	__asm { mov dword ptr [g_0125b520], 0xf }
	__asm { mov dword ptr [g_0125b51c], 0 }
	__asm { mov byte ptr [g_0125b50c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125b584[];
extern "C" char g_0125b594[];
extern "C" char g_0125b598[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dffba0
extern "C" __declspec(naked) void asm_00dffba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125b598], 0x10 }
	__asm { jb L_00dffbdb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125b584] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125b584 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dffbdb: }
	__asm { mov dword ptr [g_0125b598], 0xf }
	__asm { mov dword ptr [g_0125b594], 0 }
	__asm { mov byte ptr [g_0125b584], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125b59c[];
extern "C" char g_0125b5ac[];
extern "C" char g_0125b5b0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dffc00
extern "C" __declspec(naked) void asm_00dffc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125b5b0], 0x10 }
	__asm { jb L_00dffc3b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125b59c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125b59c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dffc3b: }
	__asm { mov dword ptr [g_0125b5b0], 0xf }
	__asm { mov dword ptr [g_0125b5ac], 0 }
	__asm { mov byte ptr [g_0125b59c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125b4f4[];
extern "C" char g_0125b504[];
extern "C" char g_0125b508[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dffc60
extern "C" __declspec(naked) void asm_00dffc60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125b508], 0x10 }
	__asm { jb L_00dffc9b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125b4f4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125b4f4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dffc9b: }
	__asm { mov dword ptr [g_0125b508], 0xf }
	__asm { mov dword ptr [g_0125b504], 0 }
	__asm { mov byte ptr [g_0125b4f4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125b53c[];
extern "C" char g_0125b54c[];
extern "C" char g_0125b550[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dffcc0
extern "C" __declspec(naked) void asm_00dffcc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125b550], 0x10 }
	__asm { jb L_00dffcfb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125b53c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125b53c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dffcfb: }
	__asm { mov dword ptr [g_0125b550], 0xf }
	__asm { mov dword ptr [g_0125b54c], 0 }
	__asm { mov byte ptr [g_0125b53c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125b524[];
extern "C" char g_0125b534[];
extern "C" char g_0125b538[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dffd20
extern "C" __declspec(naked) void asm_00dffd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125b538], 0x10 }
	__asm { jb L_00dffd5b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125b524] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125b524 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dffd5b: }
	__asm { mov dword ptr [g_0125b538], 0xf }
	__asm { mov dword ptr [g_0125b534], 0 }
	__asm { mov byte ptr [g_0125b524], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0125b5b4[];
extern "C" char g_0125b5c4[];
extern "C" char g_0125b5c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dffd80
extern "C" __declspec(naked) void asm_00dffd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0125b5c8], 0x10 }
	__asm { jb L_00dffdbb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0125b5b4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x125b5b4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dffdbb: }
	__asm { mov dword ptr [g_0125b5c8], 0xf }
	__asm { mov dword ptr [g_0125b5c4], 0 }
	__asm { mov byte ptr [g_0125b5b4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01267338[];
extern "C" char g_01267348[];
extern "C" char g_0126734c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e01630
extern "C" __declspec(naked) void asm_00e01630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0126734c], 0x10 }
	__asm { jb L_00e0166b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01267338] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1267338 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0166b: }
	__asm { mov dword ptr [g_0126734c], 0xf }
	__asm { mov dword ptr [g_01267348], 0 }
	__asm { mov byte ptr [g_01267338], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01267368[];
extern "C" char g_01267378[];
extern "C" char g_0126737c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e01690
extern "C" __declspec(naked) void asm_00e01690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0126737c], 0x10 }
	__asm { jb L_00e016cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01267368] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1267368 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e016cb: }
	__asm { mov dword ptr [g_0126737c], 0xf }
	__asm { mov dword ptr [g_01267378], 0 }
	__asm { mov byte ptr [g_01267368], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01267350[];
extern "C" char g_01267360[];
extern "C" char g_01267364[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e016f0
extern "C" __declspec(naked) void asm_00e016f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01267364], 0x10 }
	__asm { jb L_00e0172b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01267350] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1267350 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0172b: }
	__asm { mov dword ptr [g_01267364], 0xf }
	__asm { mov dword ptr [g_01267360], 0 }
	__asm { mov byte ptr [g_01267350], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012724c0[];
extern "C" char g_012724d0[];
extern "C" char g_012724d4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e021c0
extern "C" __declspec(naked) void asm_00e021c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012724d4], 0x10 }
	__asm { jb L_00e021fb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012724c0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12724c0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e021fb: }
	__asm { mov dword ptr [g_012724d4], 0xf }
	__asm { mov dword ptr [g_012724d0], 0 }
	__asm { mov byte ptr [g_012724c0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012724a8[];
extern "C" char g_012724b8[];
extern "C" char g_012724bc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e02220
extern "C" __declspec(naked) void asm_00e02220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012724bc], 0x10 }
	__asm { jb L_00e0225b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012724a8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12724a8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0225b: }
	__asm { mov dword ptr [g_012724bc], 0xf }
	__asm { mov dword ptr [g_012724b8], 0 }
	__asm { mov byte ptr [g_012724a8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01272490[];
extern "C" char g_012724a0[];
extern "C" char g_012724a4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e02280
extern "C" __declspec(naked) void asm_00e02280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012724a4], 0x10 }
	__asm { jb L_00e022bb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01272490] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1272490 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e022bb: }
	__asm { mov dword ptr [g_012724a4], 0xf }
	__asm { mov dword ptr [g_012724a0], 0 }
	__asm { mov byte ptr [g_01272490], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012743c8[];
extern "C" char g_012743d8[];
extern "C" char g_012743dc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e02840
extern "C" __declspec(naked) void asm_00e02840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012743dc], 0x10 }
	__asm { jb L_00e0287b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012743c8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12743c8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0287b: }
	__asm { mov dword ptr [g_012743dc], 0xf }
	__asm { mov dword ptr [g_012743d8], 0 }
	__asm { mov byte ptr [g_012743c8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012743e0[];
extern "C" char g_012743f0[];
extern "C" char g_012743f4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e028a0
extern "C" __declspec(naked) void asm_00e028a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012743f4], 0x10 }
	__asm { jb L_00e028db }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012743e0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12743e0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e028db: }
	__asm { mov dword ptr [g_012743f4], 0xf }
	__asm { mov dword ptr [g_012743f0], 0 }
	__asm { mov byte ptr [g_012743e0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012745b0[];
extern "C" char g_012745c0[];
extern "C" char g_012745c4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e02900
extern "C" __declspec(naked) void asm_00e02900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012745c4], 0x10 }
	__asm { jb L_00e0293b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012745b0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12745b0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0293b: }
	__asm { mov dword ptr [g_012745c4], 0xf }
	__asm { mov dword ptr [g_012745c0], 0 }
	__asm { mov byte ptr [g_012745b0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012745c8[];
extern "C" char g_012745d8[];
extern "C" char g_012745dc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e02960
extern "C" __declspec(naked) void asm_00e02960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012745dc], 0x10 }
	__asm { jb L_00e0299b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012745c8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12745c8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0299b: }
	__asm { mov dword ptr [g_012745dc], 0xf }
	__asm { mov dword ptr [g_012745d8], 0 }
	__asm { mov byte ptr [g_012745c8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01275ee4[];
extern "C" char g_01275ef4[];
extern "C" char g_01275ef8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e02d40
extern "C" __declspec(naked) void asm_00e02d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01275ef8], 0x10 }
	__asm { jb L_00e02d7b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01275ee4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1275ee4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e02d7b: }
	__asm { mov dword ptr [g_01275ef8], 0xf }
	__asm { mov dword ptr [g_01275ef4], 0 }
	__asm { mov byte ptr [g_01275ee4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01275efc[];
extern "C" char g_01275f0c[];
extern "C" char g_01275f10[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e02da0
extern "C" __declspec(naked) void asm_00e02da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01275f10], 0x10 }
	__asm { jb L_00e02ddb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01275efc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1275efc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e02ddb: }
	__asm { mov dword ptr [g_01275f10], 0xf }
	__asm { mov dword ptr [g_01275f0c], 0 }
	__asm { mov byte ptr [g_01275efc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01277c20[];
extern "C" char g_01277c30[];
extern "C" char g_01277c34[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e02ff0
extern "C" __declspec(naked) void asm_00e02ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01277c34], 0x10 }
	__asm { jb L_00e0302b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01277c20] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1277c20 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0302b: }
	__asm { mov dword ptr [g_01277c34], 0xf }
	__asm { mov dword ptr [g_01277c30], 0 }
	__asm { mov byte ptr [g_01277c20], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01277c38[];
extern "C" char g_01277c48[];
extern "C" char g_01277c4c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e03050
extern "C" __declspec(naked) void asm_00e03050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01277c4c], 0x10 }
	__asm { jb L_00e0308b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01277c38] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1277c38 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0308b: }
	__asm { mov dword ptr [g_01277c4c], 0xf }
	__asm { mov dword ptr [g_01277c48], 0 }
	__asm { mov byte ptr [g_01277c38], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01277c08[];
extern "C" char g_01277c18[];
extern "C" char g_01277c1c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e030b0
extern "C" __declspec(naked) void asm_00e030b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01277c1c], 0x10 }
	__asm { jb L_00e030eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01277c08] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1277c08 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e030eb: }
	__asm { mov dword ptr [g_01277c1c], 0xf }
	__asm { mov dword ptr [g_01277c18], 0 }
	__asm { mov byte ptr [g_01277c08], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01277bd8[];
extern "C" char g_01277be8[];
extern "C" char g_01277bec[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e03110
extern "C" __declspec(naked) void asm_00e03110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01277bec], 0x10 }
	__asm { jb L_00e0314b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01277bd8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1277bd8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0314b: }
	__asm { mov dword ptr [g_01277bec], 0xf }
	__asm { mov dword ptr [g_01277be8], 0 }
	__asm { mov byte ptr [g_01277bd8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01277bf0[];
extern "C" char g_01277c00[];
extern "C" char g_01277c04[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e03170
extern "C" __declspec(naked) void asm_00e03170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01277c04], 0x10 }
	__asm { jb L_00e031ab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01277bf0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1277bf0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e031ab: }
	__asm { mov dword ptr [g_01277c04], 0xf }
	__asm { mov dword ptr [g_01277c00], 0 }
	__asm { mov byte ptr [g_01277bf0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0127822c[];
extern "C" char g_0127823c[];
extern "C" char g_01278240[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e03320
extern "C" __declspec(naked) void asm_00e03320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01278240], 0x10 }
	__asm { jb L_00e0335b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0127822c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x127822c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0335b: }
	__asm { mov dword ptr [g_01278240], 0xf }
	__asm { mov dword ptr [g_0127823c], 0 }
	__asm { mov byte ptr [g_0127822c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0127a880[];
extern "C" char g_0127a890[];
extern "C" char g_0127a894[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e04660
extern "C" __declspec(naked) void asm_00e04660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0127a894], 0x10 }
	__asm { jb L_00e0469b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0127a880] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x127a880 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0469b: }
	__asm { mov dword ptr [g_0127a894], 0xf }
	__asm { mov dword ptr [g_0127a890], 0 }
	__asm { mov byte ptr [g_0127a880], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0127a898[];
extern "C" char g_0127a8a8[];
extern "C" char g_0127a8ac[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e046c0
extern "C" __declspec(naked) void asm_00e046c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0127a8ac], 0x10 }
	__asm { jb L_00e046fb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0127a898] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x127a898 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e046fb: }
	__asm { mov dword ptr [g_0127a8ac], 0xf }
	__asm { mov dword ptr [g_0127a8a8], 0 }
	__asm { mov byte ptr [g_0127a898], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0127a8b0[];
extern "C" char g_0127a8c0[];
extern "C" char g_0127a8c4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e04720
extern "C" __declspec(naked) void asm_00e04720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0127a8c4], 0x10 }
	__asm { jb L_00e0475b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0127a8b0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x127a8b0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0475b: }
	__asm { mov dword ptr [g_0127a8c4], 0xf }
	__asm { mov dword ptr [g_0127a8c0], 0 }
	__asm { mov byte ptr [g_0127a8b0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0127a8c8[];
extern "C" char g_0127a8d8[];
extern "C" char g_0127a8dc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e04780
extern "C" __declspec(naked) void asm_00e04780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0127a8dc], 0x10 }
	__asm { jb L_00e047bb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0127a8c8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x127a8c8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e047bb: }
	__asm { mov dword ptr [g_0127a8dc], 0xf }
	__asm { mov dword ptr [g_0127a8d8], 0 }
	__asm { mov byte ptr [g_0127a8c8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012818b4[];
extern "C" char g_012818c4[];
extern "C" char g_012818c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e062d0
extern "C" __declspec(naked) void asm_00e062d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012818c8], 0x10 }
	__asm { jb L_00e0630b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012818b4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12818b4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0630b: }
	__asm { mov dword ptr [g_012818c8], 0xf }
	__asm { mov dword ptr [g_012818c4], 0 }
	__asm { mov byte ptr [g_012818b4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01283608[];
extern "C" char g_01283618[];
extern "C" char g_0128361c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e06570
extern "C" __declspec(naked) void asm_00e06570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0128361c], 0x10 }
	__asm { jb L_00e065ab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01283608] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1283608 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e065ab: }
	__asm { mov dword ptr [g_0128361c], 0xf }
	__asm { mov dword ptr [g_01283618], 0 }
	__asm { mov byte ptr [g_01283608], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01283620[];
extern "C" char g_01283630[];
extern "C" char g_01283634[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e065d0
extern "C" __declspec(naked) void asm_00e065d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01283634], 0x10 }
	__asm { jb L_00e0660b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01283620] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1283620 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0660b: }
	__asm { mov dword ptr [g_01283634], 0xf }
	__asm { mov dword ptr [g_01283630], 0 }
	__asm { mov byte ptr [g_01283620], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128be48[];
extern "C" char g_0128be58[];
extern "C" char g_0128be5c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07250
extern "C" __declspec(naked) void asm_00e07250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0128be5c], 0x10 }
	__asm { jb L_00e0728b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0128be48] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x128be48 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0728b: }
	__asm { mov dword ptr [g_0128be5c], 0xf }
	__asm { mov dword ptr [g_0128be58], 0 }
	__asm { mov byte ptr [g_0128be48], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128c2c0[];
extern "C" char g_0128c2d0[];
extern "C" char g_0128c2d4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07420
extern "C" __declspec(naked) void asm_00e07420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0128c2d4], 0x10 }
	__asm { jb L_00e0745b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0128c2c0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x128c2c0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0745b: }
	__asm { mov dword ptr [g_0128c2d4], 0xf }
	__asm { mov dword ptr [g_0128c2d0], 0 }
	__asm { mov byte ptr [g_0128c2c0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128c69c[];
extern "C" char g_0128c6ac[];
extern "C" char g_0128c6b0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07480
extern "C" __declspec(naked) void asm_00e07480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0128c6b0], 0x10 }
	__asm { jb L_00e074bb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0128c69c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x128c69c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e074bb: }
	__asm { mov dword ptr [g_0128c6b0], 0xf }
	__asm { mov dword ptr [g_0128c6ac], 0 }
	__asm { mov byte ptr [g_0128c69c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128c6b4[];
extern "C" char g_0128c6c4[];
extern "C" char g_0128c6c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e074e0
extern "C" __declspec(naked) void asm_00e074e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0128c6c8], 0x10 }
	__asm { jb L_00e0751b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0128c6b4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x128c6b4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0751b: }
	__asm { mov dword ptr [g_0128c6c8], 0xf }
	__asm { mov dword ptr [g_0128c6c4], 0 }
	__asm { mov byte ptr [g_0128c6b4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128c90c[];
extern "C" char g_0128c91c[];
extern "C" char g_0128c920[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07540
extern "C" __declspec(naked) void asm_00e07540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0128c920], 0x10 }
	__asm { jb L_00e0757b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0128c90c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x128c90c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0757b: }
	__asm { mov dword ptr [g_0128c920], 0xf }
	__asm { mov dword ptr [g_0128c91c], 0 }
	__asm { mov byte ptr [g_0128c90c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128c8f4[];
extern "C" char g_0128c904[];
extern "C" char g_0128c908[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e075a0
extern "C" __declspec(naked) void asm_00e075a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0128c908], 0x10 }
	__asm { jb L_00e075db }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0128c8f4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x128c8f4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e075db: }
	__asm { mov dword ptr [g_0128c908], 0xf }
	__asm { mov dword ptr [g_0128c904], 0 }
	__asm { mov byte ptr [g_0128c8f4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128c8c4[];
extern "C" char g_0128c8d4[];
extern "C" char g_0128c8d8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07600
extern "C" __declspec(naked) void asm_00e07600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0128c8d8], 0x10 }
	__asm { jb L_00e0763b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0128c8c4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x128c8c4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0763b: }
	__asm { mov dword ptr [g_0128c8d8], 0xf }
	__asm { mov dword ptr [g_0128c8d4], 0 }
	__asm { mov byte ptr [g_0128c8c4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128c8dc[];
extern "C" char g_0128c8ec[];
extern "C" char g_0128c8f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07660
extern "C" __declspec(naked) void asm_00e07660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0128c8f0], 0x10 }
	__asm { jb L_00e0769b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0128c8dc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x128c8dc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0769b: }
	__asm { mov dword ptr [g_0128c8f0], 0xf }
	__asm { mov dword ptr [g_0128c8ec], 0 }
	__asm { mov byte ptr [g_0128c8dc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128c924[];
extern "C" char g_0128c934[];
extern "C" char g_0128c938[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e076c0
extern "C" __declspec(naked) void asm_00e076c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0128c938], 0x10 }
	__asm { jb L_00e076fb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0128c924] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x128c924 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e076fb: }
	__asm { mov dword ptr [g_0128c938], 0xf }
	__asm { mov dword ptr [g_0128c934], 0 }
	__asm { mov byte ptr [g_0128c924], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128c940[];
extern "C" char g_0128c950[];
extern "C" char g_0128c954[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07720
extern "C" __declspec(naked) void asm_00e07720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0128c954], 0x10 }
	__asm { jb L_00e0775b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0128c940] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x128c940 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0775b: }
	__asm { mov dword ptr [g_0128c954], 0xf }
	__asm { mov dword ptr [g_0128c950], 0 }
	__asm { mov byte ptr [g_0128c940], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128caf4[];
extern "C" char g_0128cb04[];
extern "C" char g_0128cb08[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e07780
extern "C" __declspec(naked) void asm_00e07780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0128cb08], 0x10 }
	__asm { jb L_00e077bb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0128caf4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x128caf4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e077bb: }
	__asm { mov dword ptr [g_0128cb08], 0xf }
	__asm { mov dword ptr [g_0128cb04], 0 }
	__asm { mov byte ptr [g_0128caf4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128cadc[];
extern "C" char g_0128caec[];
extern "C" char g_0128caf0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e077e0
extern "C" __declspec(naked) void asm_00e077e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0128caf0], 0x10 }
	__asm { jb L_00e0781b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0128cadc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x128cadc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0781b: }
	__asm { mov dword ptr [g_0128caf0], 0xf }
	__asm { mov dword ptr [g_0128caec], 0 }
	__asm { mov byte ptr [g_0128cadc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01291c24[];
extern "C" char g_01291c34[];
extern "C" char g_01291c38[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e080a0
extern "C" __declspec(naked) void asm_00e080a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01291c38], 0x10 }
	__asm { jb L_00e080db }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01291c24] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1291c24 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e080db: }
	__asm { mov dword ptr [g_01291c38], 0xf }
	__asm { mov dword ptr [g_01291c34], 0 }
	__asm { mov byte ptr [g_01291c24], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01291c3c[];
extern "C" char g_01291c4c[];
extern "C" char g_01291c50[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e08100
extern "C" __declspec(naked) void asm_00e08100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01291c50], 0x10 }
	__asm { jb L_00e0813b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01291c3c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1291c3c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0813b: }
	__asm { mov dword ptr [g_01291c50], 0xf }
	__asm { mov dword ptr [g_01291c4c], 0 }
	__asm { mov byte ptr [g_01291c3c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01291f7c[];
extern "C" char g_01291f8c[];
extern "C" char g_01291f90[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e08160
extern "C" __declspec(naked) void asm_00e08160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01291f90], 0x10 }
	__asm { jb L_00e0819b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01291f7c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1291f7c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0819b: }
	__asm { mov dword ptr [g_01291f90], 0xf }
	__asm { mov dword ptr [g_01291f8c], 0 }
	__asm { mov byte ptr [g_01291f7c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01292960[];
extern "C" char g_01292970[];
extern "C" char g_01292974[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e082c0
extern "C" __declspec(naked) void asm_00e082c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01292974], 0x10 }
	__asm { jb L_00e082fb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01292960] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1292960 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e082fb: }
	__asm { mov dword ptr [g_01292974], 0xf }
	__asm { mov dword ptr [g_01292970], 0 }
	__asm { mov byte ptr [g_01292960], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01292990[];
extern "C" char g_012929a0[];
extern "C" char g_012929a4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e08320
extern "C" __declspec(naked) void asm_00e08320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012929a4], 0x10 }
	__asm { jb L_00e0835b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01292990] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1292990 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0835b: }
	__asm { mov dword ptr [g_012929a4], 0xf }
	__asm { mov dword ptr [g_012929a0], 0 }
	__asm { mov byte ptr [g_01292990], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01292978[];
extern "C" char g_01292988[];
extern "C" char g_0129298c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e08380
extern "C" __declspec(naked) void asm_00e08380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0129298c], 0x10 }
	__asm { jb L_00e083bb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01292978] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1292978 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e083bb: }
	__asm { mov dword ptr [g_0129298c], 0xf }
	__asm { mov dword ptr [g_01292988], 0 }
	__asm { mov byte ptr [g_01292978], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012929a8[];
extern "C" char g_012929b8[];
extern "C" char g_012929bc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e083e0
extern "C" __declspec(naked) void asm_00e083e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012929bc], 0x10 }
	__asm { jb L_00e0841b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012929a8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12929a8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0841b: }
	__asm { mov dword ptr [g_012929bc], 0xf }
	__asm { mov dword ptr [g_012929b8], 0 }
	__asm { mov byte ptr [g_012929a8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012929c0[];
extern "C" char g_012929d0[];
extern "C" char g_012929d4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e08440
extern "C" __declspec(naked) void asm_00e08440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012929d4], 0x10 }
	__asm { jb L_00e0847b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012929c0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12929c0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0847b: }
	__asm { mov dword ptr [g_012929d4], 0xf }
	__asm { mov dword ptr [g_012929d0], 0 }
	__asm { mov byte ptr [g_012929c0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012929d8[];
extern "C" char g_012929e8[];
extern "C" char g_012929ec[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e084a0
extern "C" __declspec(naked) void asm_00e084a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012929ec], 0x10 }
	__asm { jb L_00e084db }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012929d8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12929d8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e084db: }
	__asm { mov dword ptr [g_012929ec], 0xf }
	__asm { mov dword ptr [g_012929e8], 0 }
	__asm { mov byte ptr [g_012929d8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0129568c[];
extern "C" char g_0129569c[];
extern "C" char g_012956a0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e089e0
extern "C" __declspec(naked) void asm_00e089e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012956a0], 0x10 }
	__asm { jb L_00e08a1b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0129568c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x129568c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e08a1b: }
	__asm { mov dword ptr [g_012956a0], 0xf }
	__asm { mov dword ptr [g_0129569c], 0 }
	__asm { mov byte ptr [g_0129568c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012956bc[];
extern "C" char g_012956cc[];
extern "C" char g_012956d0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e08a40
extern "C" __declspec(naked) void asm_00e08a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012956d0], 0x10 }
	__asm { jb L_00e08a7b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012956bc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12956bc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e08a7b: }
	__asm { mov dword ptr [g_012956d0], 0xf }
	__asm { mov dword ptr [g_012956cc], 0 }
	__asm { mov byte ptr [g_012956bc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012956a4[];
extern "C" char g_012956b4[];
extern "C" char g_012956b8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e08aa0
extern "C" __declspec(naked) void asm_00e08aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012956b8], 0x10 }
	__asm { jb L_00e08adb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012956a4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12956a4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e08adb: }
	__asm { mov dword ptr [g_012956b8], 0xf }
	__asm { mov dword ptr [g_012956b4], 0 }
	__asm { mov byte ptr [g_012956a4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0129592c[];
extern "C" char g_0129593c[];
extern "C" char g_01295940[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e08b00
extern "C" __declspec(naked) void asm_00e08b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01295940], 0x10 }
	__asm { jb L_00e08b3b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0129592c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x129592c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e08b3b: }
	__asm { mov dword ptr [g_01295940], 0xf }
	__asm { mov dword ptr [g_0129593c], 0 }
	__asm { mov byte ptr [g_0129592c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01295914[];
extern "C" char g_01295924[];
extern "C" char g_01295928[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e08b60
extern "C" __declspec(naked) void asm_00e08b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01295928], 0x10 }
	__asm { jb L_00e08b9b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01295914] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1295914 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e08b9b: }
	__asm { mov dword ptr [g_01295928], 0xf }
	__asm { mov dword ptr [g_01295924], 0 }
	__asm { mov byte ptr [g_01295914], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01295974[];
extern "C" char g_01295984[];
extern "C" char g_01295988[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e08bc0
extern "C" __declspec(naked) void asm_00e08bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01295988], 0x10 }
	__asm { jb L_00e08bfb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01295974] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1295974 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e08bfb: }
	__asm { mov dword ptr [g_01295988], 0xf }
	__asm { mov dword ptr [g_01295984], 0 }
	__asm { mov byte ptr [g_01295974], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0129595c[];
extern "C" char g_0129596c[];
extern "C" char g_01295970[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e08c20
extern "C" __declspec(naked) void asm_00e08c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01295970], 0x10 }
	__asm { jb L_00e08c5b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0129595c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x129595c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e08c5b: }
	__asm { mov dword ptr [g_01295970], 0xf }
	__asm { mov dword ptr [g_0129596c], 0 }
	__asm { mov byte ptr [g_0129595c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0129a128[];
extern "C" char g_0129a138[];
extern "C" char g_0129a13c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e09f80
extern "C" __declspec(naked) void asm_00e09f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0129a13c], 0x10 }
	__asm { jb L_00e09fbb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0129a128] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x129a128 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e09fbb: }
	__asm { mov dword ptr [g_0129a13c], 0xf }
	__asm { mov dword ptr [g_0129a138], 0 }
	__asm { mov byte ptr [g_0129a128], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0129a140[];
extern "C" char g_0129a150[];
extern "C" char g_0129a154[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e09ff0
extern "C" __declspec(naked) void asm_00e09ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0129a154], 0x10 }
	__asm { jb L_00e0a02b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0129a140] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x129a140 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0a02b: }
	__asm { mov dword ptr [g_0129a154], 0xf }
	__asm { mov dword ptr [g_0129a150], 0 }
	__asm { mov byte ptr [g_0129a140], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0129a170[];
extern "C" char g_0129a180[];
extern "C" char g_0129a184[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0a050
extern "C" __declspec(naked) void asm_00e0a050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0129a184], 0x10 }
	__asm { jb L_00e0a08b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0129a170] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x129a170 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0a08b: }
	__asm { mov dword ptr [g_0129a184], 0xf }
	__asm { mov dword ptr [g_0129a180], 0 }
	__asm { mov byte ptr [g_0129a170], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0129a158[];
extern "C" char g_0129a168[];
extern "C" char g_0129a16c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0a0b0
extern "C" __declspec(naked) void asm_00e0a0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0129a16c], 0x10 }
	__asm { jb L_00e0a0eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0129a158] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x129a158 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0a0eb: }
	__asm { mov dword ptr [g_0129a16c], 0xf }
	__asm { mov dword ptr [g_0129a168], 0 }
	__asm { mov byte ptr [g_0129a158], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012a11c0[];
extern "C" char g_012a11d0[];
extern "C" char g_012a11d4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0c510
extern "C" __declspec(naked) void asm_00e0c510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012a11d4], 0x10 }
	__asm { jb L_00e0c54b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012a11c0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12a11c0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00e0c54b: }
	__asm { mov dword ptr [g_012a11d4], 0xf }
	__asm { mov dword ptr [g_012a11d0], 0 }
	__asm { mov byte ptr [g_012a11c0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
