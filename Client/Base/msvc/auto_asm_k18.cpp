// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012e4b90[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_0080ea90();
extern "C" void fn_008242f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007e9ea0
extern "C" __declspec(naked) void asm_007e9ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22b76 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe5a39c }
	__asm { mov dword ptr [esi + 4], 0xe5a414 }
	__asm { mov dword ptr [esi + 0x18], 0xe5a41c }
	__asm { mov dword ptr [esi + 0x1c], 0xe5a428 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0080ea90 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4b90] }
	__asm { lea ecx, [esi + 0x64] }
	__asm { push -1 }
	__asm { mov dword ptr [esi], 0xe5a43c }
	__asm { mov dword ptr [esi + 4], 0xe5a4b4 }
	__asm { mov dword ptr [esi + 0x18], 0xe5a4bc }
	__asm { mov dword ptr [esi + 0x1c], 0xe5a4c8 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0x13048a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [esi + 0x7c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x824680 }
	__asm { push 0x12f61f4 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008242f0 }
	__asm { push 5 }
	__asm { push 0x10086b4 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_007e9fa8 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007e9fa8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4ba4[];
extern "C" char g_01304a7c[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_004c8de0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_0080eb10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007e9fd0
extern "C" __declspec(naked) void asm_007e9fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22bab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe5aa04 }
	__asm { mov dword ptr [esi + 4], 0xe5aa7c }
	__asm { mov dword ptr [esi + 0x18], 0xe5aa84 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5aa90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0080eb10 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4ba4] }
	__asm { mov dword ptr [esi], 0xe5aaa4 }
	__asm { mov dword ptr [esi + 4], 0xe5ab1c }
	__asm { mov dword ptr [esi + 0x18], 0xe5ab24 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5ab30 }
	__asm { mov eax, dword ptr [g_01304a7c] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { lea eax, [esi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x4c8e70 }
	__asm { push 0x131c738 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_004c8de0 }
	__asm { push 5 }
	__asm { push 0x10086b4 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_007ea0be }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007ea0be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4b9c[];
extern "C" char g_013049c0[];
extern "C" char g_013049c4[];
extern "C" char g_013049c8[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_006d19a0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_0080ec10();
extern "C" void fn_00824410();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007ea1f0
extern "C" __declspec(naked) void asm_007ea1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22c2e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [edi], 0xe5a774 }
	__asm { mov dword ptr [edi + 4], 0xe5a7ec }
	__asm { mov dword ptr [edi + 0x18], 0xe5a7f4 }
	__asm { mov dword ptr [edi + 0x1c], 0xe5a800 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0080ec10 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { inc dword ptr [g_012e4b9c] }
	__asm { push 0x130499c }
	__asm { lea ecx, [edi + 0x64] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe5a814 }
	__asm { mov dword ptr [edi + 4], 0xe5a88c }
	__asm { mov dword ptr [edi + 0x18], 0xe5a894 }
	__asm { mov dword ptr [edi + 0x1c], 0xe5a8a0 }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [g_013049c0] }
	__asm { mov dword ptr [edi + 0x88], eax }
	__asm { mov eax, dword ptr [g_013049c4] }
	__asm { mov dword ptr [edi + 0x8c], eax }
	__asm { mov eax, dword ptr [g_013049c8] }
	__asm { mov dword ptr [edi + 0x90], eax }
	__asm { lea eax, [edi + 0x94] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x8246a0 }
	__asm { push 0x12f6204 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00824410 }
	__asm { push 5 }
	__asm { push 0x10086b4 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_007ea308 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007ea308: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0123c0e4[];
extern "C" char g_0123c0e8[];
extern "C" char g_0123c0ec[];
extern "C" char g_0123c0f0[];
extern "C" char g_0123c0f4[];
extern "C" char g_0123c0f8[];
extern "C" char g_012e4b98[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_0080ec90();
extern "C" void fn_008244a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007ea320
extern "C" __declspec(naked) void asm_007ea320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22c79 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe5a62c }
	__asm { mov dword ptr [esi + 4], 0xe5a6a4 }
	__asm { mov dword ptr [esi + 0x18], 0xe5a6ac }
	__asm { mov dword ptr [esi + 0x1c], 0xe5a6b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0080ec90 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4b98] }
	__asm { mov dword ptr [esi], 0xe5a6cc }
	__asm { mov dword ptr [esi + 4], 0xe5a744 }
	__asm { mov dword ptr [esi + 0x18], 0xe5a74c }
	__asm { mov dword ptr [esi + 0x1c], 0xe5a758 }
	__asm { mov dword ptr [esi + 0x64], 0xe461dc }
	__asm { mov eax, dword ptr [g_0123c0e4] }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { mov eax, dword ptr [g_0123c0e8] }
	__asm { mov dword ptr [esi + 0x6c], eax }
	__asm { mov eax, dword ptr [g_0123c0ec] }
	__asm { mov dword ptr [esi + 0x70], eax }
	__asm { mov eax, dword ptr [g_0123c0f0] }
	__asm { mov dword ptr [esi + 0x74], eax }
	__asm { mov eax, dword ptr [g_0123c0f4] }
	__asm { mov dword ptr [esi + 0x78], eax }
	__asm { mov eax, dword ptr [g_0123c0f8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x7c], eax }
	__asm { lea eax, [esi + 0x80] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x8246b0 }
	__asm { push 0x12f61fc }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008244a0 }
	__asm { push 5 }
	__asm { push 0x10086b4 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_007ea440 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007ea440: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0123c0d4[];
extern "C" char g_0123c0d8[];
extern "C" char g_0123c0dc[];
extern "C" char g_012e4b94[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_0080ed10();
extern "C" void fn_00824530();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007ea460
extern "C" __declspec(naked) void asm_007ea460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22cbb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe5a4e4 }
	__asm { mov dword ptr [esi + 4], 0xe5a55c }
	__asm { mov dword ptr [esi + 0x18], 0xe5a564 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5a570 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0080ed10 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4b94] }
	__asm { mov dword ptr [esi], 0xe5a584 }
	__asm { mov dword ptr [esi + 4], 0xe5a5fc }
	__asm { mov dword ptr [esi + 0x18], 0xe5a604 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5a610 }
	__asm { mov eax, dword ptr [g_0123c0d4] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { mov eax, dword ptr [g_0123c0d8] }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { mov eax, dword ptr [g_0123c0dc] }
	__asm { mov dword ptr [esi + 0x6c], eax }
	__asm { lea eax, [esi + 0x70] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x8246c0 }
	__asm { push 0x12f61ec }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00824530 }
	__asm { push 5 }
	__asm { push 0x10086b4 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_007ea55e }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007ea55e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ef72cc[];
extern "C" char g_012e4b88[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_0049a240();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_0080ed90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007ea570
extern "C" __declspec(naked) void asm_007ea570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22cfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe5a254 }
	__asm { mov dword ptr [esi + 4], 0xe5a2cc }
	__asm { mov dword ptr [esi + 0x18], 0xe5a2d4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5a2e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0080ed90 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4b88] }
	__asm { mov dword ptr [esi], 0xe5a2f4 }
	__asm { mov dword ptr [esi + 4], 0xe5a36c }
	__asm { mov dword ptr [esi + 0x18], 0xe5a374 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5a380 }
	__asm { mov al, byte ptr [g_00ef72cc] }
	__asm { mov byte ptr [esi + 0x64], al }
	__asm { lea eax, [esi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x49a230 }
	__asm { push 0x131c464 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0049a240 }
	__asm { push 5 }
	__asm { push 0x10086b4 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_007ea65e }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007ea65e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec3798[];
extern "C" char g_012e4e40[];
extern "C" void fn_004115f0();
extern "C" void fn_0043f140();
extern "C" void fn_007af830();
extern "C" void fn_0080fe10();
extern "C" void fn_00b7f8d0();
// FUNCTION: ROBLOXSTUDIO 0x007fa990
extern "C" __declspec(naked) void asm_007fa990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22e06 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push dword ptr [g_00ec3798] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007af830 }
	__asm { mov dword ptr [edi], 0xe58f1c }
	__asm { mov dword ptr [edi + 4], 0xe58f94 }
	__asm { mov dword ptr [edi + 0x18], 0xe58f9c }
	__asm { mov dword ptr [edi + 0x1c], 0xe58fa8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0080fe10 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { inc dword ptr [g_012e4e40] }
	__asm { push 0 }
	__asm { mov dword ptr [edi], 0xe58fbc }
	__asm { mov dword ptr [edi + 4], 0xe59034 }
	__asm { mov dword ptr [edi + 0x18], 0xe5903c }
	__asm { mov dword ptr [edi + 0x1c], 0xe59048 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x64] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { call fn_00b7f8d0 }
	__asm { mov dword ptr [edi + 0x64], eax }
	__asm { lea eax, [edi + 0x70] }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f130 }
	__asm { push 0x131b198 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004115f0 }
	__asm { call fn_0043f140 }
	__asm { lea eax, [edi + 0x74] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f130 }
	__asm { push 0x131b198 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_004115f0 }
	__asm { add esp, 0x10 }
	__asm { call fn_0043f140 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_00437d00();
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x007fad10
extern "C" __declspec(naked) void asm_007fad10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22ea0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 0x70] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00437d00 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_007fad8e }
	__asm { add esi, 5 }
	__asm { je L_007fad5e }
	__asm { add esi, -5 }
	__asm { jmp L_007fad60 }
	__asm { L_007fad5e: }
	__asm { xor esi, esi }
	__asm { L_007fad60: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007fad8d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007fad8d }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_007fad8d: }
	__asm { pop ebx }
	__asm { L_007fad8e: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe5ab4c }
	__asm { mov dword ptr [edi + 4], 0xe5abc4 }
	__asm { mov dword ptr [edi + 0x18], 0xe5abcc }
	__asm { mov dword ptr [edi + 0x1c], 0xe5abd8 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_00437d00();
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x00805cc0
extern "C" __declspec(naked) void asm_00805cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00437d00 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00805d3e }
	__asm { add esi, 5 }
	__asm { je L_00805d0e }
	__asm { add esi, -5 }
	__asm { jmp L_00805d10 }
	__asm { L_00805d0e: }
	__asm { xor esi, esi }
	__asm { L_00805d10: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00805d3d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00805d3d }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00805d3d: }
	__asm { pop ebx }
	__asm { L_00805d3e: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe59fc4 }
	__asm { mov dword ptr [edi + 4], 0xe5a03c }
	__asm { mov dword ptr [edi + 0x18], 0xe5a044 }
	__asm { mov dword ptr [edi + 0x1c], 0xe5a050 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
extern "C" void fn_0081cec0();
// FUNCTION: ROBLOXSTUDIO 0x00805d80
extern "C" __declspec(naked) void asm_00805d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 0x70] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0081cec0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00805dfe }
	__asm { add esi, 5 }
	__asm { je L_00805dce }
	__asm { add esi, -5 }
	__asm { jmp L_00805dd0 }
	__asm { L_00805dce: }
	__asm { xor esi, esi }
	__asm { L_00805dd0: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00805dfd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00805dfd }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00805dfd: }
	__asm { pop ebx }
	__asm { L_00805dfe: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe5a10c }
	__asm { mov dword ptr [edi + 4], 0xe5a184 }
	__asm { mov dword ptr [edi + 0x18], 0xe5a18c }
	__asm { mov dword ptr [edi + 0x1c], 0xe5a198 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
extern "C" void fn_0081d5e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00805e40
extern "C" __declspec(naked) void asm_00805e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f9b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0x7c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0081d5e0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00805ebe }
	__asm { add esi, 5 }
	__asm { je L_00805e8e }
	__asm { add esi, -5 }
	__asm { jmp L_00805e90 }
	__asm { L_00805e8e: }
	__asm { xor esi, esi }
	__asm { L_00805e90: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00805ebd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00805ebd }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00805ebd: }
	__asm { pop ebx }
	__asm { L_00805ebe: }
	__asm { cmp dword ptr [edi + 0x78], 0x10 }
	__asm { jb L_00805ecf }
	__asm { push dword ptr [edi + 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00805ecf: }
	__asm { mov dword ptr [edi + 0x78], 0xf }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov byte ptr [edi + 0x64], 0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe5a39c }
	__asm { mov dword ptr [edi + 4], 0xe5a414 }
	__asm { mov dword ptr [edi + 0x18], 0xe5a41c }
	__asm { mov dword ptr [edi + 0x1c], 0xe5a428 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
extern "C" void fn_0081d970();
// FUNCTION: ROBLOXSTUDIO 0x00805f20
extern "C" __declspec(naked) void asm_00805f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22fc0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0081d970 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00805f9e }
	__asm { add esi, 5 }
	__asm { je L_00805f6e }
	__asm { add esi, -5 }
	__asm { jmp L_00805f70 }
	__asm { L_00805f6e: }
	__asm { xor esi, esi }
	__asm { L_00805f70: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00805f9d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00805f9d }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00805f9d: }
	__asm { pop ebx }
	__asm { L_00805f9e: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe5aa04 }
	__asm { mov dword ptr [edi + 4], 0xe5aa7c }
	__asm { mov dword ptr [edi + 0x18], 0xe5aa84 }
	__asm { mov dword ptr [edi + 0x1c], 0xe5aa90 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
extern "C" void fn_0081dd00();
// FUNCTION: ROBLOXSTUDIO 0x00805fe0
extern "C" __declspec(naked) void asm_00805fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22fe0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 0x70] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0081dd00 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0080605e }
	__asm { add esi, 5 }
	__asm { je L_0080602e }
	__asm { add esi, -5 }
	__asm { jmp L_00806030 }
	__asm { L_0080602e: }
	__asm { xor esi, esi }
	__asm { L_00806030: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0080605d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0080605d }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0080605d: }
	__asm { pop ebx }
	__asm { L_0080605e: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe5a8bc }
	__asm { mov dword ptr [edi + 4], 0xe5a934 }
	__asm { mov dword ptr [edi + 0x18], 0xe5a93c }
	__asm { mov dword ptr [edi + 0x1c], 0xe5a948 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
extern "C" void fn_0081e090();
// FUNCTION: ROBLOXSTUDIO 0x008060a0
extern "C" __declspec(naked) void asm_008060a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23000 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 0x94] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0081e090 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00806121 }
	__asm { add esi, 5 }
	__asm { je L_008060f1 }
	__asm { add esi, -5 }
	__asm { jmp L_008060f3 }
	__asm { L_008060f1: }
	__asm { xor esi, esi }
	__asm { L_008060f3: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00806120 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00806120 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00806120: }
	__asm { pop ebx }
	__asm { L_00806121: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe5a774 }
	__asm { mov dword ptr [edi + 4], 0xe5a7ec }
	__asm { mov dword ptr [edi + 0x18], 0xe5a7f4 }
	__asm { mov dword ptr [edi + 0x1c], 0xe5a800 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
extern "C" void fn_0081e420();
// FUNCTION: ROBLOXSTUDIO 0x00806160
extern "C" __declspec(naked) void asm_00806160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2302b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0x80] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0081e420 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_008061e1 }
	__asm { add esi, 5 }
	__asm { je L_008061b1 }
	__asm { add esi, -5 }
	__asm { jmp L_008061b3 }
	__asm { L_008061b1: }
	__asm { xor esi, esi }
	__asm { L_008061b3: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008061e0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008061e0 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008061e0: }
	__asm { pop ebx }
	__asm { L_008061e1: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 0x64], 0xe461dc }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe5a62c }
	__asm { mov dword ptr [edi + 4], 0xe5a6a4 }
	__asm { mov dword ptr [edi + 0x18], 0xe5a6ac }
	__asm { mov dword ptr [edi + 0x1c], 0xe5a6b8 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
extern "C" void fn_0081e7b0();
// FUNCTION: ROBLOXSTUDIO 0x00806230
extern "C" __declspec(naked) void asm_00806230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23050 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 0x70] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0081e7b0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008062ae }
	__asm { add esi, 5 }
	__asm { je L_0080627e }
	__asm { add esi, -5 }
	__asm { jmp L_00806280 }
	__asm { L_0080627e: }
	__asm { xor esi, esi }
	__asm { L_00806280: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008062ad }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008062ad }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_008062ad: }
	__asm { pop ebx }
	__asm { L_008062ae: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe5a4e4 }
	__asm { mov dword ptr [edi + 4], 0xe5a55c }
	__asm { mov dword ptr [edi + 0x18], 0xe5a564 }
	__asm { mov dword ptr [edi + 0x1c], 0xe5a570 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
extern "C" void fn_0081d250();
// FUNCTION: ROBLOXSTUDIO 0x00806910
extern "C" __declspec(naked) void asm_00806910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd23090 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 0x64] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0081d250 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0080698e }
	__asm { add esi, 5 }
	__asm { je L_0080695e }
	__asm { add esi, -5 }
	__asm { jmp L_00806960 }
	__asm { L_0080695e: }
	__asm { xor esi, esi }
	__asm { L_00806960: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0080698d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0080698d }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0080698d: }
	__asm { pop ebx }
	__asm { L_0080698e: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe595fc }
	__asm { mov dword ptr [edi + 4], 0xe59674 }
	__asm { mov dword ptr [edi + 0x18], 0xe5967c }
	__asm { mov dword ptr [edi + 0x1c], 0xe59688 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10338[];
extern "C" char g_00e1033c[];
extern "C" void fn_007b00e0();
extern "C" void fn_0080e750();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008069d0
extern "C" __declspec(naked) void asm_008069d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd230b3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov eax, dword ptr [edi + 0x78] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00806a21 }
	__asm { test al, 1 }
	__asm { jne L_00806a1a }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [edi + 0x80] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00806a1a }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00806a1a: }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { L_00806a21: }
	__asm { lea ecx, [edi + 0x64] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0080e750 }
	__asm { lea ecx, [edi + 0x64] }
	__asm { call dword ptr [g_00e10338] }
	__asm { push dword ptr [edi + 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x64] }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { call dword ptr [g_00e1033c] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe594b4 }
	__asm { mov dword ptr [edi + 4], 0xe5952c }
	__asm { mov dword ptr [edi + 0x18], 0xe59534 }
	__asm { mov dword ptr [edi + 0x1c], 0xe59540 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e51c8[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7330();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00806a90
extern "C" __declspec(naked) void asm_00806a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe5ab40 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00806b4b }
	__asm { cmp dword ptr [g_012e51c8], 0x29a }
	__asm { je L_00806b00 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00806aeb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00806b00 }
	__asm { L_00806aeb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00806b00: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00806b4b }
	__asm { cmp dword ptr [g_012e51c8], 0x29a }
	__asm { je L_00806b4b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00806b36 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00806b4b }
	__asm { L_00806b36: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00806b4b: }
	__asm { call fn_007e7330 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00806ba2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00806ba2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e51d0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6c50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00806be0
extern "C" __declspec(naked) void asm_00806be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe5ac88 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00806c9b }
	__asm { cmp dword ptr [g_012e51d0], 0x29a }
	__asm { je L_00806c50 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00806c3b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00806c50 }
	__asm { L_00806c3b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00806c50: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00806c9b }
	__asm { cmp dword ptr [g_012e51d0], 0x29a }
	__asm { je L_00806c9b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00806c86 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00806c9b }
	__asm { L_00806c86: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00806c9b: }
	__asm { call fn_007e6c50 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00806cf2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00806cf2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e5180[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e73d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00806d30
extern "C" __declspec(naked) void asm_00806d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59fb8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00806deb }
	__asm { cmp dword ptr [g_012e5180], 0x29a }
	__asm { je L_00806da0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00806d8b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00806da0 }
	__asm { L_00806d8b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00806da0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00806deb }
	__asm { cmp dword ptr [g_012e5180], 0x29a }
	__asm { je L_00806deb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00806dd6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00806deb }
	__asm { L_00806dd6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00806deb: }
	__asm { call fn_007e73d0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00806e42 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00806e42: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e5188[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6cf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00806e80
extern "C" __declspec(naked) void asm_00806e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe5a100 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00806f3b }
	__asm { cmp dword ptr [g_012e5188], 0x29a }
	__asm { je L_00806ef0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00806edb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00806ef0 }
	__asm { L_00806edb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00806ef0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00806f3b }
	__asm { cmp dword ptr [g_012e5188], 0x29a }
	__asm { je L_00806f3b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00806f26 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00806f3b }
	__asm { L_00806f26: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00806f3b: }
	__asm { call fn_007e6cf0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00806f92 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00806f92: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e5198[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e5e90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00806fd0
extern "C" __declspec(naked) void asm_00806fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe5a390 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080708b }
	__asm { cmp dword ptr [g_012e5198], 0x29a }
	__asm { je L_00807040 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080702b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00807040 }
	__asm { L_0080702b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00807040: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080708b }
	__asm { cmp dword ptr [g_012e5198], 0x29a }
	__asm { je L_0080708b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00807076 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080708b }
	__asm { L_00807076: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080708b: }
	__asm { call fn_007e5e90 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_008070e2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008070e2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e51c0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e64d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00807120
extern "C" __declspec(naked) void asm_00807120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe5a9f8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008071db }
	__asm { cmp dword ptr [g_012e51c0], 0x29a }
	__asm { je L_00807190 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080717b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00807190 }
	__asm { L_0080717b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00807190: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008071db }
	__asm { cmp dword ptr [g_012e51c0], 0x29a }
	__asm { je L_008071db }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008071c6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008071db }
	__asm { L_008071c6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008071db: }
	__asm { call fn_007e64d0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00807232 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00807232: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e51b8[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e67f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00807270
extern "C" __declspec(naked) void asm_00807270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe5a8b0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080732b }
	__asm { cmp dword ptr [g_012e51b8], 0x29a }
	__asm { je L_008072e0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008072cb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008072e0 }
	__asm { L_008072cb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008072e0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080732b }
	__asm { cmp dword ptr [g_012e51b8], 0x29a }
	__asm { je L_0080732b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00807316 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080732b }
	__asm { L_00807316: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080732b: }
	__asm { call fn_007e67f0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00807382 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00807382: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e51b0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6570();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008073c0
extern "C" __declspec(naked) void asm_008073c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe5a768 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080747b }
	__asm { cmp dword ptr [g_012e51b0], 0x29a }
	__asm { je L_00807430 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080741b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00807430 }
	__asm { L_0080741b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00807430: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080747b }
	__asm { cmp dword ptr [g_012e51b0], 0x29a }
	__asm { je L_0080747b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00807466 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080747b }
	__asm { L_00807466: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080747b: }
	__asm { call fn_007e6570 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_008074d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008074d2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e51a8[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7a10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00807510
extern "C" __declspec(naked) void asm_00807510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe5a620 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008075cb }
	__asm { cmp dword ptr [g_012e51a8], 0x29a }
	__asm { je L_00807580 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080756b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00807580 }
	__asm { L_0080756b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00807580: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008075cb }
	__asm { cmp dword ptr [g_012e51a8], 0x29a }
	__asm { je L_008075cb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008075b6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008075cb }
	__asm { L_008075b6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008075cb: }
	__asm { call fn_007e7a10 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00807622 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00807622: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e51a0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e84b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00807660
extern "C" __declspec(naked) void asm_00807660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe5a4d8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080771b }
	__asm { cmp dword ptr [g_012e51a0], 0x29a }
	__asm { je L_008076d0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008076bb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008076d0 }
	__asm { L_008076bb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008076d0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080771b }
	__asm { cmp dword ptr [g_012e51a0], 0x29a }
	__asm { je L_0080771b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00807706 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080771b }
	__asm { L_00807706: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080771b: }
	__asm { call fn_007e84b0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00807772 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00807772: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e5190[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6430();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008077b0
extern "C" __declspec(naked) void asm_008077b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe5a248 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080786b }
	__asm { cmp dword ptr [g_012e5190], 0x29a }
	__asm { je L_00807820 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080780b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00807820 }
	__asm { L_0080780b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00807820: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080786b }
	__asm { cmp dword ptr [g_012e5190], 0x29a }
	__asm { je L_0080786b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00807856 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080786b }
	__asm { L_00807856: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080786b: }
	__asm { call fn_007e6430 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_008078c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008078c2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49d8[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e5990();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00807900
extern "C" __declspec(naked) void asm_00807900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59768 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008079bb }
	__asm { cmp dword ptr [g_012e49d8], 0x29a }
	__asm { je L_00807970 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080795b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00807970 }
	__asm { L_0080795b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00807970: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008079bb }
	__asm { cmp dword ptr [g_012e49d8], 0x29a }
	__asm { je L_008079bb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008079a6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008079bb }
	__asm { L_008079a6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008079bb: }
	__asm { call fn_007e5990 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00807a12 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00807a12: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49c0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e5ad0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00807a50
extern "C" __declspec(naked) void asm_00807a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59750 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00807b0b }
	__asm { cmp dword ptr [g_012e49c0], 0x29a }
	__asm { je L_00807ac0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00807aab }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00807ac0 }
	__asm { L_00807aab: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00807ac0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00807b0b }
	__asm { cmp dword ptr [g_012e49c0], 0x29a }
	__asm { je L_00807b0b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00807af6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00807b0b }
	__asm { L_00807af6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00807b0b: }
	__asm { call fn_007e5ad0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00807b62 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00807b62: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4998[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e5b70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00807ba0
extern "C" __declspec(naked) void asm_00807ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59484 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00807c5b }
	__asm { cmp dword ptr [g_012e4998], 0x29a }
	__asm { je L_00807c10 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00807bfb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00807c10 }
	__asm { L_00807bfb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00807c10: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00807c5b }
	__asm { cmp dword ptr [g_012e4998], 0x29a }
	__asm { je L_00807c5b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00807c46 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00807c5b }
	__asm { L_00807c46: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00807c5b: }
	__asm { call fn_007e5b70 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00807cb2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00807cb2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49a0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e5c10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00807cf0
extern "C" __declspec(naked) void asm_00807cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe594a4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00807dab }
	__asm { cmp dword ptr [g_012e49a0], 0x29a }
	__asm { je L_00807d60 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00807d4b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00807d60 }
	__asm { L_00807d4b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00807d60: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00807dab }
	__asm { cmp dword ptr [g_012e49a0], 0x29a }
	__asm { je L_00807dab }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00807d96 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00807dab }
	__asm { L_00807d96: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00807dab: }
	__asm { call fn_007e5c10 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00807e02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00807e02: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4900[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e5cb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00807e40
extern "C" __declspec(naked) void asm_00807e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59138 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00807efb }
	__asm { cmp dword ptr [g_012e4900], 0x29a }
	__asm { je L_00807eb0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00807e9b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00807eb0 }
	__asm { L_00807e9b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00807eb0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00807efb }
	__asm { cmp dword ptr [g_012e4900], 0x29a }
	__asm { je L_00807efb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00807ee6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00807efb }
	__asm { L_00807ee6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00807efb: }
	__asm { call fn_007e5cb0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00807f52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00807f52: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4808[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e5d50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00807f90
extern "C" __declspec(naked) void asm_00807f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe58cb0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080804b }
	__asm { cmp dword ptr [g_012e4808], 0x29a }
	__asm { je L_00808000 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00807feb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00808000 }
	__asm { L_00807feb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00808000: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080804b }
	__asm { cmp dword ptr [g_012e4808], 0x29a }
	__asm { je L_0080804b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808036 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080804b }
	__asm { L_00808036: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080804b: }
	__asm { call fn_007e5d50 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_008080a2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008080a2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4810[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e5df0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008080e0
extern "C" __declspec(naked) void asm_008080e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe58cb8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080819b }
	__asm { cmp dword ptr [g_012e4810], 0x29a }
	__asm { je L_00808150 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080813b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00808150 }
	__asm { L_0080813b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00808150: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080819b }
	__asm { cmp dword ptr [g_012e4810], 0x29a }
	__asm { je L_0080819b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808186 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080819b }
	__asm { L_00808186: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080819b: }
	__asm { call fn_007e5df0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_008081f2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008081f2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4800[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e5a30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00808230
extern "C" __declspec(naked) void asm_00808230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe58ca0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008082eb }
	__asm { cmp dword ptr [g_012e4800], 0x29a }
	__asm { je L_008082a0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080828b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008082a0 }
	__asm { L_0080828b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008082a0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008082eb }
	__asm { cmp dword ptr [g_012e4800], 0x29a }
	__asm { je L_008082eb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008082d6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008082eb }
	__asm { L_008082d6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008082eb: }
	__asm { call fn_007e5a30 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00808342 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00808342: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49b0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e5f30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00808380
extern "C" __declspec(naked) void asm_00808380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe595f0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080843b }
	__asm { cmp dword ptr [g_012e49b0], 0x29a }
	__asm { je L_008083f0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008083db }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008083f0 }
	__asm { L_008083db: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008083f0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080843b }
	__asm { cmp dword ptr [g_012e49b0], 0x29a }
	__asm { je L_0080843b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808426 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080843b }
	__asm { L_00808426: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080843b: }
	__asm { call fn_007e5f30 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00808492 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00808492: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49a8[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e5fd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008084d0
extern "C" __declspec(naked) void asm_008084d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe594ac }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080858b }
	__asm { cmp dword ptr [g_012e49a8], 0x29a }
	__asm { je L_00808540 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080852b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00808540 }
	__asm { L_0080852b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00808540: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080858b }
	__asm { cmp dword ptr [g_012e49a8], 0x29a }
	__asm { je L_0080858b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808576 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080858b }
	__asm { L_00808576: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080858b: }
	__asm { call fn_007e5fd0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_008085e2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008085e2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48e8[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6070();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00808620
extern "C" __declspec(naked) void asm_00808620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59120 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008086db }
	__asm { cmp dword ptr [g_012e48e8], 0x29a }
	__asm { je L_00808690 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080867b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00808690 }
	__asm { L_0080867b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00808690: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008086db }
	__asm { cmp dword ptr [g_012e48e8], 0x29a }
	__asm { je L_008086db }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008086c6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008086db }
	__asm { L_008086c6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008086db: }
	__asm { call fn_007e6070 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00808732 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00808732: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48c8[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6110();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00808770
extern "C" __declspec(naked) void asm_00808770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59100 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080882b }
	__asm { cmp dword ptr [g_012e48c8], 0x29a }
	__asm { je L_008087e0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008087cb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008087e0 }
	__asm { L_008087cb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008087e0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080882b }
	__asm { cmp dword ptr [g_012e48c8], 0x29a }
	__asm { je L_0080882b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808816 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080882b }
	__asm { L_00808816: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080882b: }
	__asm { call fn_007e6110 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00808882 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00808882: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48c0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e61b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008088c0
extern "C" __declspec(naked) void asm_008088c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe590f8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080897b }
	__asm { cmp dword ptr [g_012e48c0], 0x29a }
	__asm { je L_00808930 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080891b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00808930 }
	__asm { L_0080891b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00808930: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080897b }
	__asm { cmp dword ptr [g_012e48c0], 0x29a }
	__asm { je L_0080897b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808966 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080897b }
	__asm { L_00808966: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080897b: }
	__asm { call fn_007e61b0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_008089d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008089d2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48d8[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6250();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00808a10
extern "C" __declspec(naked) void asm_00808a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59110 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00808acb }
	__asm { cmp dword ptr [g_012e48d8], 0x29a }
	__asm { je L_00808a80 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808a6b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00808a80 }
	__asm { L_00808a6b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00808a80: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00808acb }
	__asm { cmp dword ptr [g_012e48d8], 0x29a }
	__asm { je L_00808acb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808ab6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00808acb }
	__asm { L_00808ab6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00808acb: }
	__asm { call fn_007e6250 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00808b22 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00808b22: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48d0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e62f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00808b60
extern "C" __declspec(naked) void asm_00808b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59108 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00808c1b }
	__asm { cmp dword ptr [g_012e48d0], 0x29a }
	__asm { je L_00808bd0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808bbb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00808bd0 }
	__asm { L_00808bbb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00808bd0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00808c1b }
	__asm { cmp dword ptr [g_012e48d0], 0x29a }
	__asm { je L_00808c1b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808c06 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00808c1b }
	__asm { L_00808c06: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00808c1b: }
	__asm { call fn_007e62f0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00808c72 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00808c72: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48e0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6390();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00808cb0
extern "C" __declspec(naked) void asm_00808cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59118 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00808d6b }
	__asm { cmp dword ptr [g_012e48e0], 0x29a }
	__asm { je L_00808d20 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808d0b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00808d20 }
	__asm { L_00808d0b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00808d20: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00808d6b }
	__asm { cmp dword ptr [g_012e48e0], 0x29a }
	__asm { je L_00808d6b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808d56 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00808d6b }
	__asm { L_00808d56: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00808d6b: }
	__asm { call fn_007e6390 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00808dc2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00808dc2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4818[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6610();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00808e00
extern "C" __declspec(naked) void asm_00808e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe58cc0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00808ebb }
	__asm { cmp dword ptr [g_012e4818], 0x29a }
	__asm { je L_00808e70 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808e5b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00808e70 }
	__asm { L_00808e5b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00808e70: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00808ebb }
	__asm { cmp dword ptr [g_012e4818], 0x29a }
	__asm { je L_00808ebb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808ea6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00808ebb }
	__asm { L_00808ea6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00808ebb: }
	__asm { call fn_007e6610 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00808f12 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00808f12: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4820[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e66b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00808f60
extern "C" __declspec(naked) void asm_00808f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe58cc8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080901b }
	__asm { cmp dword ptr [g_012e4820], 0x29a }
	__asm { je L_00808fd0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00808fbb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00808fd0 }
	__asm { L_00808fbb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00808fd0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080901b }
	__asm { cmp dword ptr [g_012e4820], 0x29a }
	__asm { je L_0080901b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809006 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080901b }
	__asm { L_00809006: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080901b: }
	__asm { call fn_007e66b0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00809072 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00809072: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4888[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6890();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008090b0
extern "C" __declspec(naked) void asm_008090b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe590c0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080916b }
	__asm { cmp dword ptr [g_012e4888], 0x29a }
	__asm { je L_00809120 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080910b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809120 }
	__asm { L_0080910b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809120: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080916b }
	__asm { cmp dword ptr [g_012e4888], 0x29a }
	__asm { je L_0080916b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809156 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080916b }
	__asm { L_00809156: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080916b: }
	__asm { call fn_007e6890 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_008091c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008091c2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4830[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00809200
extern "C" __declspec(naked) void asm_00809200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe58f14 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008092bb }
	__asm { cmp dword ptr [g_012e4830], 0x29a }
	__asm { je L_00809270 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080925b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809270 }
	__asm { L_0080925b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809270: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008092bb }
	__asm { cmp dword ptr [g_012e4830], 0x29a }
	__asm { je L_008092bb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008092a6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008092bb }
	__asm { L_008092a6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008092bb: }
	__asm { call fn_007e6930 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00809312 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00809312: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4828[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e69d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00809350
extern "C" __declspec(naked) void asm_00809350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe58cd0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080940b }
	__asm { cmp dword ptr [g_012e4828], 0x29a }
	__asm { je L_008093c0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008093ab }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008093c0 }
	__asm { L_008093ab: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008093c0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080940b }
	__asm { cmp dword ptr [g_012e4828], 0x29a }
	__asm { je L_0080940b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008093f6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080940b }
	__asm { L_008093f6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080940b: }
	__asm { call fn_007e69d0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00809462 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00809462: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4870[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6a70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008094a0
extern "C" __declspec(naked) void asm_008094a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe590a8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080955b }
	__asm { cmp dword ptr [g_012e4870], 0x29a }
	__asm { je L_00809510 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008094fb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809510 }
	__asm { L_008094fb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809510: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080955b }
	__asm { cmp dword ptr [g_012e4870], 0x29a }
	__asm { je L_0080955b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809546 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080955b }
	__asm { L_00809546: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080955b: }
	__asm { call fn_007e6a70 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_008095b2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008095b2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4850[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6b10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008095f0
extern "C" __declspec(naked) void asm_008095f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59070 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008096ab }
	__asm { cmp dword ptr [g_012e4850], 0x29a }
	__asm { je L_00809660 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080964b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809660 }
	__asm { L_0080964b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809660: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008096ab }
	__asm { cmp dword ptr [g_012e4850], 0x29a }
	__asm { je L_008096ab }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809696 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008096ab }
	__asm { L_00809696: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008096ab: }
	__asm { call fn_007e6b10 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00809702 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00809702: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4848[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6bb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00809740
extern "C" __declspec(naked) void asm_00809740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59068 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008097fb }
	__asm { cmp dword ptr [g_012e4848], 0x29a }
	__asm { je L_008097b0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080979b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008097b0 }
	__asm { L_0080979b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008097b0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008097fb }
	__asm { cmp dword ptr [g_012e4848], 0x29a }
	__asm { je L_008097fb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008097e6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008097fb }
	__asm { L_008097e6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008097fb: }
	__asm { call fn_007e6bb0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00809852 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00809852: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48a8[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6d90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00809890
extern "C" __declspec(naked) void asm_00809890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe590e0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080994b }
	__asm { cmp dword ptr [g_012e48a8], 0x29a }
	__asm { je L_00809900 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008098eb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809900 }
	__asm { L_008098eb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809900: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080994b }
	__asm { cmp dword ptr [g_012e48a8], 0x29a }
	__asm { je L_0080994b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809936 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080994b }
	__asm { L_00809936: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080994b: }
	__asm { call fn_007e6d90 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_008099a2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008099a2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48b0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6e30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008099e0
extern "C" __declspec(naked) void asm_008099e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe590e8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00809a9b }
	__asm { cmp dword ptr [g_012e48b0], 0x29a }
	__asm { je L_00809a50 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809a3b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809a50 }
	__asm { L_00809a3b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809a50: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00809a9b }
	__asm { cmp dword ptr [g_012e48b0], 0x29a }
	__asm { je L_00809a9b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809a86 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809a9b }
	__asm { L_00809a86: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809a9b: }
	__asm { call fn_007e6e30 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00809af2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00809af2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4990[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6ed0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00809b30
extern "C" __declspec(naked) void asm_00809b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59474 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00809beb }
	__asm { cmp dword ptr [g_012e4990], 0x29a }
	__asm { je L_00809ba0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809b8b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809ba0 }
	__asm { L_00809b8b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809ba0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00809beb }
	__asm { cmp dword ptr [g_012e4990], 0x29a }
	__asm { je L_00809beb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809bd6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809beb }
	__asm { L_00809bd6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809beb: }
	__asm { call fn_007e6ed0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00809c42 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00809c42: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4868[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e6f70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00809c80
extern "C" __declspec(naked) void asm_00809c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59098 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00809d3b }
	__asm { cmp dword ptr [g_012e4868], 0x29a }
	__asm { je L_00809cf0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809cdb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809cf0 }
	__asm { L_00809cdb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809cf0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00809d3b }
	__asm { cmp dword ptr [g_012e4868], 0x29a }
	__asm { je L_00809d3b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809d26 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809d3b }
	__asm { L_00809d26: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809d3b: }
	__asm { call fn_007e6f70 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00809d92 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00809d92: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49e0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7010();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00809dd0
extern "C" __declspec(naked) void asm_00809dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59770 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00809e8b }
	__asm { cmp dword ptr [g_012e49e0], 0x29a }
	__asm { je L_00809e40 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809e2b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809e40 }
	__asm { L_00809e2b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809e40: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00809e8b }
	__asm { cmp dword ptr [g_012e49e0], 0x29a }
	__asm { je L_00809e8b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809e76 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809e8b }
	__asm { L_00809e76: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809e8b: }
	__asm { call fn_007e7010 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00809ee2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00809ee2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4970[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e70b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00809f20
extern "C" __declspec(naked) void asm_00809f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59444 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00809fdb }
	__asm { cmp dword ptr [g_012e4970], 0x29a }
	__asm { je L_00809f90 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809f7b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809f90 }
	__asm { L_00809f7b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809f90: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00809fdb }
	__asm { cmp dword ptr [g_012e4970], 0x29a }
	__asm { je L_00809fdb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00809fc6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00809fdb }
	__asm { L_00809fc6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00809fdb: }
	__asm { call fn_007e70b0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080a032 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080a032: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48f8[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7150();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080a070
extern "C" __declspec(naked) void asm_0080a070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59130 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080a12b }
	__asm { cmp dword ptr [g_012e48f8], 0x29a }
	__asm { je L_0080a0e0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a0cb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080a0e0 }
	__asm { L_0080a0cb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080a0e0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080a12b }
	__asm { cmp dword ptr [g_012e48f8], 0x29a }
	__asm { je L_0080a12b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a116 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080a12b }
	__asm { L_0080a116: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080a12b: }
	__asm { call fn_007e7150 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080a182 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080a182: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4910[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e71f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080a1c0
extern "C" __declspec(naked) void asm_0080a1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe591e8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080a27b }
	__asm { cmp dword ptr [g_012e4910], 0x29a }
	__asm { je L_0080a230 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a21b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080a230 }
	__asm { L_0080a21b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080a230: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080a27b }
	__asm { cmp dword ptr [g_012e4910], 0x29a }
	__asm { je L_0080a27b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a266 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080a27b }
	__asm { L_0080a266: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080a27b: }
	__asm { call fn_007e71f0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080a2d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080a2d2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4898[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7290();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080a310
extern "C" __declspec(naked) void asm_0080a310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe590d0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080a3cb }
	__asm { cmp dword ptr [g_012e4898], 0x29a }
	__asm { je L_0080a380 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a36b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080a380 }
	__asm { L_0080a36b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080a380: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080a3cb }
	__asm { cmp dword ptr [g_012e4898], 0x29a }
	__asm { je L_0080a3cb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a3b6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080a3cb }
	__asm { L_0080a3b6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080a3cb: }
	__asm { call fn_007e7290 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080a422 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080a422: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4840[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7470();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080a460
extern "C" __declspec(naked) void asm_0080a460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59060 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080a51b }
	__asm { cmp dword ptr [g_012e4840], 0x29a }
	__asm { je L_0080a4d0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a4bb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080a4d0 }
	__asm { L_0080a4bb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080a4d0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080a51b }
	__asm { cmp dword ptr [g_012e4840], 0x29a }
	__asm { je L_0080a51b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a506 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080a51b }
	__asm { L_0080a506: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080a51b: }
	__asm { call fn_007e7470 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080a572 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080a572: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49b8[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7510();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080a5b0
extern "C" __declspec(naked) void asm_0080a5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59748 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080a66b }
	__asm { cmp dword ptr [g_012e49b8], 0x29a }
	__asm { je L_0080a620 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a60b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080a620 }
	__asm { L_0080a60b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080a620: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080a66b }
	__asm { cmp dword ptr [g_012e49b8], 0x29a }
	__asm { je L_0080a66b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a656 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080a66b }
	__asm { L_0080a656: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080a66b: }
	__asm { call fn_007e7510 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080a6c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080a6c2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48b8[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e75b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080a700
extern "C" __declspec(naked) void asm_0080a700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe590f0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080a7bb }
	__asm { cmp dword ptr [g_012e48b8], 0x29a }
	__asm { je L_0080a770 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a75b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080a770 }
	__asm { L_0080a75b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080a770: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080a7bb }
	__asm { cmp dword ptr [g_012e48b8], 0x29a }
	__asm { je L_0080a7bb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a7a6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080a7bb }
	__asm { L_0080a7a6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080a7bb: }
	__asm { call fn_007e75b0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080a812 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080a812: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4960[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7650();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080a850
extern "C" __declspec(naked) void asm_0080a850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59404 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080a90b }
	__asm { cmp dword ptr [g_012e4960], 0x29a }
	__asm { je L_0080a8c0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a8ab }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080a8c0 }
	__asm { L_0080a8ab: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080a8c0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080a90b }
	__asm { cmp dword ptr [g_012e4960], 0x29a }
	__asm { je L_0080a90b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a8f6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080a90b }
	__asm { L_0080a8f6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080a90b: }
	__asm { call fn_007e7650 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080a962 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080a962: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4908[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e76f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080a9a0
extern "C" __declspec(naked) void asm_0080a9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59140 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080aa5b }
	__asm { cmp dword ptr [g_012e4908], 0x29a }
	__asm { je L_0080aa10 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080a9fb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080aa10 }
	__asm { L_0080a9fb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080aa10: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080aa5b }
	__asm { cmp dword ptr [g_012e4908], 0x29a }
	__asm { je L_0080aa5b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080aa46 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080aa5b }
	__asm { L_0080aa46: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080aa5b: }
	__asm { call fn_007e76f0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080aab2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080aab2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4890[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7790();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080aaf0
extern "C" __declspec(naked) void asm_0080aaf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe590c8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080abab }
	__asm { cmp dword ptr [g_012e4890], 0x29a }
	__asm { je L_0080ab60 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080ab4b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080ab60 }
	__asm { L_0080ab4b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080ab60: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080abab }
	__asm { cmp dword ptr [g_012e4890], 0x29a }
	__asm { je L_0080abab }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080ab96 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080abab }
	__asm { L_0080ab96: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080abab: }
	__asm { call fn_007e7790 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080ac02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080ac02: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4880[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7830();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080ac40
extern "C" __declspec(naked) void asm_0080ac40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe590b8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080acfb }
	__asm { cmp dword ptr [g_012e4880], 0x29a }
	__asm { je L_0080acb0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080ac9b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080acb0 }
	__asm { L_0080ac9b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080acb0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080acfb }
	__asm { cmp dword ptr [g_012e4880], 0x29a }
	__asm { je L_0080acfb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080ace6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080acfb }
	__asm { L_0080ace6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080acfb: }
	__asm { call fn_007e7830 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080ad52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080ad52: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4858[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e78d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080ad90
extern "C" __declspec(naked) void asm_0080ad90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59088 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080ae4b }
	__asm { cmp dword ptr [g_012e4858], 0x29a }
	__asm { je L_0080ae00 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080adeb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080ae00 }
	__asm { L_0080adeb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080ae00: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080ae4b }
	__asm { cmp dword ptr [g_012e4858], 0x29a }
	__asm { je L_0080ae4b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080ae36 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080ae4b }
	__asm { L_0080ae36: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080ae4b: }
	__asm { call fn_007e78d0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080aea2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080aea2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49c8[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7970();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080aee0
extern "C" __declspec(naked) void asm_0080aee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59758 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080af9b }
	__asm { cmp dword ptr [g_012e49c8], 0x29a }
	__asm { je L_0080af50 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080af3b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080af50 }
	__asm { L_0080af3b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080af50: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080af9b }
	__asm { cmp dword ptr [g_012e49c8], 0x29a }
	__asm { je L_0080af9b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080af86 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080af9b }
	__asm { L_0080af86: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080af9b: }
	__asm { call fn_007e7970 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080aff2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080aff2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48f0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7ab0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080b030
extern "C" __declspec(naked) void asm_0080b030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59128 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080b0eb }
	__asm { cmp dword ptr [g_012e48f0], 0x29a }
	__asm { je L_0080b0a0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b08b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b0a0 }
	__asm { L_0080b08b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b0a0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080b0eb }
	__asm { cmp dword ptr [g_012e48f0], 0x29a }
	__asm { je L_0080b0eb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b0d6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b0eb }
	__asm { L_0080b0d6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b0eb: }
	__asm { call fn_007e7ab0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080b142 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080b142: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4968[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7b50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080b180
extern "C" __declspec(naked) void asm_0080b180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe5943c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080b23b }
	__asm { cmp dword ptr [g_012e4968], 0x29a }
	__asm { je L_0080b1f0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b1db }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b1f0 }
	__asm { L_0080b1db: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b1f0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080b23b }
	__asm { cmp dword ptr [g_012e4968], 0x29a }
	__asm { je L_0080b23b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b226 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b23b }
	__asm { L_0080b226: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b23b: }
	__asm { call fn_007e7b50 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080b292 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080b292: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49d0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7bf0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080b2d0
extern "C" __declspec(naked) void asm_0080b2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59760 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080b38b }
	__asm { cmp dword ptr [g_012e49d0], 0x29a }
	__asm { je L_0080b340 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b32b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b340 }
	__asm { L_0080b32b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b340: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080b38b }
	__asm { cmp dword ptr [g_012e49d0], 0x29a }
	__asm { je L_0080b38b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b376 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b38b }
	__asm { L_0080b376: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b38b: }
	__asm { call fn_007e7bf0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080b3e2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080b3e2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4920[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080b420
extern "C" __declspec(naked) void asm_0080b420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe593a4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080b4db }
	__asm { cmp dword ptr [g_012e4920], 0x29a }
	__asm { je L_0080b490 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b47b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b490 }
	__asm { L_0080b47b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b490: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080b4db }
	__asm { cmp dword ptr [g_012e4920], 0x29a }
	__asm { je L_0080b4db }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b4c6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b4db }
	__asm { L_0080b4c6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b4db: }
	__asm { call fn_007e7c90 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080b532 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080b532: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4978[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7d30();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080b570
extern "C" __declspec(naked) void asm_0080b570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe5945c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080b62b }
	__asm { cmp dword ptr [g_012e4978], 0x29a }
	__asm { je L_0080b5e0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b5cb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b5e0 }
	__asm { L_0080b5cb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b5e0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080b62b }
	__asm { cmp dword ptr [g_012e4978], 0x29a }
	__asm { je L_0080b62b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b616 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b62b }
	__asm { L_0080b616: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b62b: }
	__asm { call fn_007e7d30 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080b682 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080b682: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4980[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7dd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080b6c0
extern "C" __declspec(naked) void asm_0080b6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59464 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080b77b }
	__asm { cmp dword ptr [g_012e4980], 0x29a }
	__asm { je L_0080b730 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b71b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b730 }
	__asm { L_0080b71b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b730: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080b77b }
	__asm { cmp dword ptr [g_012e4980], 0x29a }
	__asm { je L_0080b77b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b766 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b77b }
	__asm { L_0080b766: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b77b: }
	__asm { call fn_007e7dd0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080b7d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080b7d2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4930[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7e70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080b810
extern "C" __declspec(naked) void asm_0080b810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe593b4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080b8cb }
	__asm { cmp dword ptr [g_012e4930], 0x29a }
	__asm { je L_0080b880 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b86b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b880 }
	__asm { L_0080b86b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b880: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080b8cb }
	__asm { cmp dword ptr [g_012e4930], 0x29a }
	__asm { je L_0080b8cb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b8b6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b8cb }
	__asm { L_0080b8b6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b8cb: }
	__asm { call fn_007e7e70 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080b922 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080b922: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4928[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7f10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080b960
extern "C" __declspec(naked) void asm_0080b960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe593ac }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080ba1b }
	__asm { cmp dword ptr [g_012e4928], 0x29a }
	__asm { je L_0080b9d0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080b9bb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080b9d0 }
	__asm { L_0080b9bb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080b9d0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080ba1b }
	__asm { cmp dword ptr [g_012e4928], 0x29a }
	__asm { je L_0080ba1b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080ba06 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080ba1b }
	__asm { L_0080ba06: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080ba1b: }
	__asm { call fn_007e7f10 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080ba72 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080ba72: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4938[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e7fb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080bab0
extern "C" __declspec(naked) void asm_0080bab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe593bc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080bb6b }
	__asm { cmp dword ptr [g_012e4938], 0x29a }
	__asm { je L_0080bb20 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080bb0b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080bb20 }
	__asm { L_0080bb0b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080bb20: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080bb6b }
	__asm { cmp dword ptr [g_012e4938], 0x29a }
	__asm { je L_0080bb6b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080bb56 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080bb6b }
	__asm { L_0080bb56: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080bb6b: }
	__asm { call fn_007e7fb0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080bbc2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080bbc2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4940[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e8050();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080bc00
extern "C" __declspec(naked) void asm_0080bc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe593c4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080bcbb }
	__asm { cmp dword ptr [g_012e4940], 0x29a }
	__asm { je L_0080bc70 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080bc5b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080bc70 }
	__asm { L_0080bc5b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080bc70: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080bcbb }
	__asm { cmp dword ptr [g_012e4940], 0x29a }
	__asm { je L_0080bcbb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080bca6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080bcbb }
	__asm { L_0080bca6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080bcbb: }
	__asm { call fn_007e8050 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080bd12 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080bd12: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4948[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e80f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080bd50
extern "C" __declspec(naked) void asm_0080bd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe593cc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080be0b }
	__asm { cmp dword ptr [g_012e4948], 0x29a }
	__asm { je L_0080bdc0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080bdab }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080bdc0 }
	__asm { L_0080bdab: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080bdc0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080be0b }
	__asm { cmp dword ptr [g_012e4948], 0x29a }
	__asm { je L_0080be0b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080bdf6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080be0b }
	__asm { L_0080bdf6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080be0b: }
	__asm { call fn_007e80f0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080be62 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080be62: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4878[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e8190();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080bea0
extern "C" __declspec(naked) void asm_0080bea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe590b0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080bf5b }
	__asm { cmp dword ptr [g_012e4878], 0x29a }
	__asm { je L_0080bf10 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080befb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080bf10 }
	__asm { L_0080befb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080bf10: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080bf5b }
	__asm { cmp dword ptr [g_012e4878], 0x29a }
	__asm { je L_0080bf5b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080bf46 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080bf5b }
	__asm { L_0080bf46: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080bf5b: }
	__asm { call fn_007e8190 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080bfb2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080bfb2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4860[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e8230();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080bff0
extern "C" __declspec(naked) void asm_0080bff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59090 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080c0ab }
	__asm { cmp dword ptr [g_012e4860], 0x29a }
	__asm { je L_0080c060 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080c04b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080c060 }
	__asm { L_0080c04b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080c060: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080c0ab }
	__asm { cmp dword ptr [g_012e4860], 0x29a }
	__asm { je L_0080c0ab }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080c096 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080c0ab }
	__asm { L_0080c096: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080c0ab: }
	__asm { call fn_007e8230 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080c102 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080c102: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4988[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e82d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080c140
extern "C" __declspec(naked) void asm_0080c140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe5946c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080c1fb }
	__asm { cmp dword ptr [g_012e4988], 0x29a }
	__asm { je L_0080c1b0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080c19b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080c1b0 }
	__asm { L_0080c19b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080c1b0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080c1fb }
	__asm { cmp dword ptr [g_012e4988], 0x29a }
	__asm { je L_0080c1fb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080c1e6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080c1fb }
	__asm { L_0080c1e6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080c1fb: }
	__asm { call fn_007e82d0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080c252 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080c252: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4950[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e8370();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080c290
extern "C" __declspec(naked) void asm_0080c290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe593d4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080c34b }
	__asm { cmp dword ptr [g_012e4950], 0x29a }
	__asm { je L_0080c300 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080c2eb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080c300 }
	__asm { L_0080c2eb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080c300: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080c34b }
	__asm { cmp dword ptr [g_012e4950], 0x29a }
	__asm { je L_0080c34b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080c336 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080c34b }
	__asm { L_0080c336: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080c34b: }
	__asm { call fn_007e8370 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080c3a2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080c3a2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4958[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e8410();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080c3e0
extern "C" __declspec(naked) void asm_0080c3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe593dc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080c49b }
	__asm { cmp dword ptr [g_012e4958], 0x29a }
	__asm { je L_0080c450 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080c43b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080c450 }
	__asm { L_0080c43b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080c450: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080c49b }
	__asm { cmp dword ptr [g_012e4958], 0x29a }
	__asm { je L_0080c49b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080c486 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080c49b }
	__asm { L_0080c486: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080c49b: }
	__asm { call fn_007e8410 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080c4f2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080c4f2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48a0[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e8550();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080c530
extern "C" __declspec(naked) void asm_0080c530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe590d8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080c5eb }
	__asm { cmp dword ptr [g_012e48a0], 0x29a }
	__asm { je L_0080c5a0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080c58b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080c5a0 }
	__asm { L_0080c58b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080c5a0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080c5eb }
	__asm { cmp dword ptr [g_012e48a0], 0x29a }
	__asm { je L_0080c5eb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080c5d6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080c5eb }
	__asm { L_0080c5d6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080c5eb: }
	__asm { call fn_007e8550 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080c642 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080c642: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4838[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e85f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080c680
extern "C" __declspec(naked) void asm_0080c680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59058 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080c73b }
	__asm { cmp dword ptr [g_012e4838], 0x29a }
	__asm { je L_0080c6f0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080c6db }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080c6f0 }
	__asm { L_0080c6db: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080c6f0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080c73b }
	__asm { cmp dword ptr [g_012e4838], 0x29a }
	__asm { je L_0080c73b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080c726 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080c73b }
	__asm { L_0080c726: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080c73b: }
	__asm { call fn_007e85f0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080c792 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080c792: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4918[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_007e8690();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0080c7d0
extern "C" __declspec(naked) void asm_0080c7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe59394 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080c88b }
	__asm { cmp dword ptr [g_012e4918], 0x29a }
	__asm { je L_0080c840 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080c82b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080c840 }
	__asm { L_0080c82b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080c840: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0080c88b }
	__asm { cmp dword ptr [g_012e4918], 0x29a }
	__asm { je L_0080c88b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0080c876 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0080c88b }
	__asm { L_0080c876: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0080c88b: }
	__asm { call fn_007e8690 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0080c8e2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0080c8e2: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_0043f1d0();
extern "C" void fn_006b9800();
extern "C" void fn_007b00e0();
extern "C" void fn_00814510();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0080c920
extern "C" __declspec(naked) void asm_0080c920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2310e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0x74] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0043f1d0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0080c99d }
	__asm { add esi, 5 }
	__asm { je L_0080c96f }
	__asm { add esi, -5 }
	__asm { jmp L_0080c971 }
	__asm { L_0080c96f: }
	__asm { xor esi, esi }
	__asm { L_0080c971: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0080c99d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0080c99d }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0080c99d: }
	__asm { lea esi, [edi + 0x70] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_0043f1d0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0080c9f0 }
	__asm { add esi, 5 }
	__asm { je L_0080c9c2 }
	__asm { add esi, -5 }
	__asm { jmp L_0080c9c4 }
	__asm { L_0080c9c2: }
	__asm { xor esi, esi }
	__asm { L_0080c9c4: }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0080c9f0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0080c9f0 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0080c9f0: }
	__asm { lea ecx, [edi + 0x64] }
	__asm { call fn_00814510 }
	__asm { push dword ptr [edi + 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xe58f1c }
	__asm { mov dword ptr [edi + 4], 0xe58f94 }
	__asm { mov dword ptr [edi + 0x18], 0xe58f9c }
	__asm { mov dword ptr [edi + 0x1c], 0xe58fa8 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b33fa0();
// FUNCTION: ROBLOXSTUDIO 0x0080cd40
extern "C" __declspec(naked) void asm_0080cd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd231b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { call fn_00b33fa0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp esi, eax }
	__asm { je L_0080cdd1 }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b33fa0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_00b33fa0 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b33fa0 }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0080cdd1 }
	__asm { test al, 1 }
	__asm { jne L_0080cdca }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0080cdca }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0080cdca: }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { L_0080cdd1: }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0080cdf8 }
	__asm { test al, 1 }
	__asm { jne L_0080cdf8 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0080cdf8 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0080cdf8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00814560
extern "C" __declspec(naked) void asm_00814560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_008145fe }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jge L_008145b2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0081459d }
	__asm { push 0x10d }
	__asm { push 0xe51348 }
	__asm { push 0xf1477c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008145b2 }
	__asm { L_0081459d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51558 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008145b2: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008145fe }
	__asm { mov eax, dword ptr [edi + 0x5c] }
	__asm { sub eax, dword ptr [edi + 0x58] }
	__asm { sar eax, 2 }
	__asm { cmp dword ptr [esi], eax }
	__asm { jb L_008145fe }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008145e9 }
	__asm { push 0x10e }
	__asm { push 0xe51348 }
	__asm { push 0xf14504 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008145fe }
	__asm { L_008145e9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe515c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008145fe: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { jns L_0081460c }
	__asm { L_00814604: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0081460c: }
	__asm { mov edx, dword ptr [edi + 0x58] }
	__asm { mov eax, dword ptr [edi + 0x5c] }
	__asm { sub eax, edx }
	__asm { sar eax, 2 }
	__asm { cmp ecx, eax }
	__asm { jae L_00814604 }
	__asm { mov eax, dword ptr [edx + ecx*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00824830
extern "C" __declspec(naked) void asm_00824830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd211e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x12c35e0 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008248d9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_008248d9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008248c4 }
	__asm { push 0x47 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008248d9 }
	__asm { L_008248c4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe521a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008248d9: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00824900
extern "C" __declspec(naked) void asm_00824900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd211e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x12c3428 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008249a9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_008249a9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00824994 }
	__asm { push 0x47 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008249a9 }
	__asm { L_00824994: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe521a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008249a9: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x008249d0
extern "C" __declspec(naked) void asm_008249d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd211e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x12c33a8 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00824a79 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_00824a79 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00824a64 }
	__asm { push 0x47 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00824a79 }
	__asm { L_00824a64: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe521a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00824a79: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00824b40
extern "C" __declspec(naked) void asm_00824b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd211e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x12be320 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00824be9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_00824be9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00824bd4 }
	__asm { push 0x47 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00824be9 }
	__asm { L_00824bd4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe521a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00824be9: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_00e10528[];
extern "C" void fn_004033d0();
extern "C" void fn_007975c0();
extern "C" void fn_007d1580();
extern "C" void fn_00824aa0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00824e40
extern "C" __declspec(naked) void asm_00824e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d6e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { lea esi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { je L_00824f54 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00824e71 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00824e76 }
	__asm { L_00824e71: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00824e76: }
	__asm { cmp ecx, 0x12c33a8 }
	__asm { je L_00824e9a }
	__asm { test eax, eax }
	__asm { je L_00824e86 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00824e8b }
	__asm { L_00824e86: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00824e8b: }
	__asm { push 0x12c33a8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00824ea5 }
	__asm { L_00824e9a: }
	__asm { lea eax, [esi + 4] }
	__asm { test eax, eax }
	__asm { jne L_00824f45 }
	__asm { L_00824ea5: }
	__asm { test esi, esi }
	__asm { je L_00824f54 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00824eb7 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00824ebc }
	__asm { L_00824eb7: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00824ebc: }
	__asm { cmp ecx, 0x12c3428 }
	__asm { je L_00824ee0 }
	__asm { test eax, eax }
	__asm { je L_00824ecc }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00824ed1 }
	__asm { L_00824ecc: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00824ed1: }
	__asm { push 0x12c3428 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00824f54 }
	__asm { L_00824ee0: }
	__asm { lea eax, [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00824f54 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jne L_00824f54 }
	__asm { push 0xc }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00824f13 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { jmp L_00824f15 }
	__asm { L_00824f13: }
	__asm { xor eax, eax }
	__asm { L_00824f15: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_00824aa0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007975c0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { push esi }
	__asm { call fn_007d1580 }
	__asm { add esp, 4 }
	__asm { L_00824f45: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00824f54: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xe5b788 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x24], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10608[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00825300
extern "C" __declspec(naked) void asm_00825300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd251db }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi], ebx }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test ecx, ecx }
	__asm { je L_00825352 }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00825352: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_008253ca }
	__asm { mov ecx, dword ptr [ebx + 0x18] }
	__asm { lea eax, [ebx + 4] }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_00825377 }
	__asm { mov edi, dword ptr [eax] }
	__asm { jmp L_00825379 }
	__asm { L_00825377: }
	__asm { mov edi, eax }
	__asm { L_00825379: }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_00825380 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00825380: }
	__asm { movsx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10608] }
	__asm { movsx ecx, byte ptr [edi] }
	__asm { add esp, 4 }
	__asm { cmp ecx, eax }
	__asm { je L_008253ca }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008253b5 }
	__asm { push 0x89 }
	__asm { push 0xe5b804 }
	__asm { push 0xe5b840 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008253ca }
	__asm { L_008253b5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5b870 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008253ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10500[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008254d0
extern "C" __declspec(naked) void asm_008254d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test ebx, ebx }
	__asm { je L_00825505 }
	__asm { cmp ebx, 0x3fffffff }
	__asm { ja L_008254ff }
	__asm { lea eax, [ebx*4] }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_00825505 }
	__asm { L_008254ff: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00825505: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { and eax, 0xfffffffc }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 2 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_00825535 }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00825535: }
	__asm { lea eax, [esi + ebx*4] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_008254d0();
// FUNCTION: ROBLOXSTUDIO 0x00825550
extern "C" __declspec(naked) void asm_00825550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sar eax, 2 }
	__asm { cmp eax, edi }
	__asm { jae L_008255bd }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x3fffffff }
	__asm { sar esi, 2 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00825587 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00825587: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_008255ab }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_008254d0 }
	__asm { L_008255ab: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_008254d0 }
	__asm { L_008255bd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_008251b0();
// FUNCTION: ROBLOXSTUDIO 0x008255d0
extern "C" __declspec(naked) void asm_008255d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd251f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call fn_008251b0 }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00825633 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00825633: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0082565b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0082565b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_0043edf0();
extern "C" void fn_006b9740();
extern "C" void fn_00797c50();
extern "C" void fn_00825300();
// FUNCTION: ROBLOXSTUDIO 0x00825670
extern "C" __declspec(naked) void asm_00825670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd251f8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { je L_008256ec }
	__asm { mov ecx, esi }
	__asm { call fn_0043edf0 }
	__asm { test al, al }
	__asm { jne L_008256ec }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push edi }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_008256ec }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008256d7 }
	__asm { push 0x9e }
	__asm { push 0xe5b804 }
	__asm { push 0xe5b9ec }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008256ec }
	__asm { L_008256d7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5ba20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008256ec: }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call fn_00825300 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { lea ecx, [ebx + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_0082572f }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0082572f: }
	__asm { inc eax }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_00825758 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00825758: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012f6c70[];
extern "C" char g_012f6d14[];
extern "C" char g_012f6d18[];
extern "C" char g_012f6d1c[];
extern "C" char g_012f6d20[];
extern "C" void fn_00825550();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00825770
extern "C" __declspec(naked) void asm_00825770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012f6d20] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_008257b3 }
	__asm { or eax, 1 }
	__asm { push 0xde8b50 }
	__asm { mov dword ptr [g_012f6d20], eax }
	__asm { mov dword ptr [g_012f6d14], 0 }
	__asm { mov dword ptr [g_012f6d18], 0 }
	__asm { mov dword ptr [g_012f6d1c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008257b3: }
	__asm { mov ecx, dword ptr [g_012f6d18] }
	__asm { lea eax, [ebp - 4] }
	__asm { mov dword ptr [g_012f6c70], 0x12f6d14 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { cmp eax, ecx }
	__asm { jae L_0082581b }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [g_012f6d14] }
	__asm { cmp eax, edx }
	__asm { ja L_0082581b }
	__asm { mov esi, edx }
	__asm { sub esi, eax }
	__asm { sar esi, 2 }
	__asm { cmp ecx, dword ptr [g_012f6d1c] }
	__asm { jne L_008257fe }
	__asm { push 1 }
	__asm { mov ecx, 0x12f6d14 }
	__asm { call fn_00825550 }
	__asm { mov ecx, dword ptr [g_012f6d18] }
	__asm { mov eax, dword ptr [g_012f6d14] }
	__asm { L_008257fe: }
	__asm { test ecx, ecx }
	__asm { je L_00825841 }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [g_012f6d18] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [g_012f6d18], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082581b: }
	__asm { cmp ecx, dword ptr [g_012f6d1c] }
	__asm { jne L_00825835 }
	__asm { push 1 }
	__asm { mov ecx, 0x12f6d14 }
	__asm { call fn_00825550 }
	__asm { mov ecx, dword ptr [g_012f6d18] }
	__asm { L_00825835: }
	__asm { test ecx, ecx }
	__asm { je L_00825841 }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov ecx, dword ptr [g_012f6d18] }
	__asm { L_00825841: }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [g_012f6d18], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131b374[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007c85f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825b50();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00825970
extern "C" __declspec(naked) void asm_00825970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25236 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00825b50 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131b374] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00825a2f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b374], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5bad8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131b248 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc750 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00825a2f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131b248 }
	__asm { call fn_007c85f0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe5bb90 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00825aad }
	__asm { push 0x11f99d8 }
	__asm { mov ecx, 0x11f99d8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00825aad }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00825a98 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00825aad }
	__asm { L_00825a98: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00825aad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_008c00e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00825ac0
extern "C" __declspec(naked) void asm_00825ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25251 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00825af4: }
	__asm { cmp edi, ebx }
	__asm { je L_00825b3d }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00825b0b }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_008c00e0 }
	__asm { L_00825b0b: }
	__asm { add esi, 0x1c }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { add edi, 0x1c }
	__asm { jmp L_00825af4 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00825b34 }
	__asm { L_00825b24: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { add esi, 0x1c }
	__asm { cmp esi, edi }
	__asm { jne L_00825b24 }
	__asm { L_00825b34: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00825b3d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00886380();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00826480
extern "C" __declspec(naked) void asm_00826480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25388 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_008264b0 }
	__asm { add eax, -0x1c }
	__asm { jmp L_008264b2 }
	__asm { L_008264b0: }
	__asm { xor eax, eax }
	__asm { L_008264b2: }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00886380 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { test esi, esi }
	__asm { je L_00826505 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008264eb }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008264eb: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00826505: }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00826516 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00826516: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a392a0();
// FUNCTION: ROBLOXSTUDIO 0x00826530
extern "C" __declspec(naked) void asm_00826530()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x68], 3 }
	__asm { jne L_008265ed }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008265c1 }
	__asm { cmp dword ptr [esi + 0x74], -2 }
	__asm { jne L_0082657f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0082656a }
	__asm { push 0x76 }
	__asm { push 0xe5bc70 }
	__asm { push 0xe5bf08 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082657f }
	__asm { L_0082656a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5bf30 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082657f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008265c1 }
	__asm { cmp dword ptr [esi + 0x70], 0 }
	__asm { jne L_008265c1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008265ac }
	__asm { push 0x77 }
	__asm { push 0xe5bc70 }
	__asm { push 0xe5bfa4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008265c1 }
	__asm { L_008265ac: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5bfc0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008265c1: }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { test eax, eax }
	__asm { je L_008265df }
	__asm { mov ecx, dword ptr [esi + 0x74] }
	__asm { cmp ecx, -2 }
	__asm { je L_008265df }
	__asm { push ecx }
	__asm { push 0xffffd8f0 }
	__asm { push eax }
	__asm { call fn_00a392a0 }
	__asm { add esp, 0xc }
	__asm { L_008265df: }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [esi + 0x74], 0xfffffffe }
	__asm { L_008265ed: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_007c81e0();
// FUNCTION: ROBLOXSTUDIO 0x00826850
extern "C" __declspec(naked) void asm_00826850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd253a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_008268b7 }
	__asm { cmp dword ptr [esi + 0x68], 0 }
	__asm { je L_008268b7 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008268a6 }
	__asm { push 0x3e }
	__asm { push 0xe5bc70 }
	__asm { push 0xe5bcb0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008268b7 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008268a6: }
	__asm { movzx eax, al }
	__asm { push 0xe5bcd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008268b7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x68], 1 }
	__asm { mov edi, eax }
	__asm { test eax, eax }
	__asm { je L_008268d3 }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call fn_006b97e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_008268d3: }
	__asm { mov ecx, dword ptr [esi + 0x6c] }
	__asm { mov dword ptr [esi + 0x6c], edi }
	__asm { test ecx, ecx }
	__asm { je L_008268e9 }
	__asm { push ecx }
	__asm { call fn_007c81e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_008268e9: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008268fd }
	__asm { push eax }
	__asm { call fn_007c81e0 }
	__asm { add esp, 4 }
	__asm { L_008268fd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e105c8[];
extern "C" char g_012f855c[];
extern "C" void fn_00402f60();
extern "C" void fn_00403540();
extern "C" void fn_004115f0();
extern "C" void fn_00826d50();
extern "C" void fn_00a1a260();
// FUNCTION: ROBLOXSTUDIO 0x00826c90
extern "C" __declspec(naked) void asm_00826c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, 0xb }
	__asm { cmp dword ptr [edi + 0x10], esi }
	__asm { cmovb esi, dword ptr [edi + 0x10] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00826cab }
	__asm { mov ecx, dword ptr [edi] }
	__asm { L_00826cab: }
	__asm { mov eax, 0xb }
	__asm { cmp esi, eax }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { push 0x10184cc }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00826d3d }
	__asm { cmp esi, 0xb }
	__asm { jb L_00826d3d }
	__asm { cmp esi, 0xb }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_00826d3d }
	__asm { push 0x827120 }
	__asm { push 0x12f8554 }
	__asm { call fn_004115f0 }
	__asm { mov ecx, dword ptr [g_012f855c] }
	__asm { add esp, 8 }
	__asm { push edi }
	__asm { call fn_00a1a260 }
	__asm { mov esi, eax }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00826d3d }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00826d07 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_00826d09 }
	__asm { L_00826d07: }
	__asm { mov eax, esi }
	__asm { L_00826d09: }
	__asm { movsx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { call dword ptr [g_00e105c8] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00826d2d }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00826d50 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00826d2d: }
	__asm { cmp edi, esi }
	__asm { je L_00826d3d }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_00826d3d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_004037f0();
extern "C" void fn_0040f730();
extern "C" void fn_0040f890();
extern "C" void fn_0042e3d0();
// FUNCTION: ROBLOXSTUDIO 0x00826d50
extern "C" __declspec(naked) void asm_00826d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, dword ptr [esi + 0x10] }
	__asm { add eax, 0x10 }
	__asm { add eax, dword ptr [edi + 0x10] }
	__asm { cmp ebx, eax }
	__asm { ja L_00826d95 }
	__asm { cmp dword ptr [esi + 0x14], eax }
	__asm { je L_00826d95 }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004037f0 }
	__asm { test al, al }
	__asm { je L_00826d95 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], ebx }
	__asm { jb L_00826d8f }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_00826d91 }
	__asm { L_00826d8f: }
	__asm { mov eax, esi }
	__asm { L_00826d91: }
	__asm { mov byte ptr [eax + ebx], 0 }
	__asm { L_00826d95: }
	__asm { cmp esi, edi }
	__asm { je L_00826da5 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00826da5: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00826dbf }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00826db6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_00826db8 }
	__asm { L_00826db6: }
	__asm { mov eax, esi }
	__asm { L_00826db8: }
	__asm { cmp byte ptr [eax + ecx - 1], 0x2f }
	__asm { je L_00826dca }
	__asm { L_00826dbf: }
	__asm { push 0x2f }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0042e3d0 }
	__asm { L_00826dca: }
	__asm { push 0xa }
	__asm { push 0xe5c174 }
	__asm { mov ecx, esi }
	__asm { call fn_0040f730 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { call fn_0040f890 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_0042d740();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00826df0
extern "C" __declspec(naked) void asm_00826df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd253f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { push 0xb }
	__asm { push 0x10184cc }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0042d740 }
	__asm { add esp, 0xc }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007cb440 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { jb L_00826e98 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00826e98: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { jb L_00826ebb }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00826ebb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008275f0();
// FUNCTION: ROBLOXSTUDIO 0x00827570
extern "C" __declspec(naked) void asm_00827570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { push esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_008275f0 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_008275d6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_008275b1 }
	__asm { L_008275a7: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_008275a7 }
	__asm { L_008275b1: }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_008275cc }
	__asm { L_008275c1: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_008275c1 }
	__asm { L_008275cc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008275d6: }
	__asm { mov dword ptr [edx], edx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008274f0();
extern "C" void fn_0082a410();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008275f0
extern "C" __declspec(naked) void asm_008275f0()
{
	__asm { L_008275f0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25440 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { jne L_0082766f }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call fn_008274f0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov al, byte ptr [ecx + 0xc] }
	__asm { mov byte ptr [ebx + 0xc], al }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { push ebx }
	__asm { push dword ptr [ecx] }
	__asm { cmovne edi, ebx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call L_008275f0 }
	__asm { mov dword ptr [ebx], eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push dword ptr [eax + 8] }
	__asm { mov ecx, esi }
	__asm { call L_008275f0 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { L_0082766f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_0082a410 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_004038a0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828070
extern "C" __declspec(naked) void asm_00828070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20396 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov byte ptr [esi + 0x68], 1 }
	__asm { mov dword ptr [esi], 0xe5c624 }
	__asm { mov dword ptr [esi + 4], 0xe5c69c }
	__asm { mov dword ptr [esi + 0x18], 0xe5c6a4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5c6b0 }
	__asm { mov dword ptr [esi + 0x64], 0xe5c6c0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { push 0x11 }
	__asm { push 0x102b914 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0082812d }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082812d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00828340();
// FUNCTION: ROBLOXSTUDIO 0x008281d0
extern "C" __declspec(naked) void asm_008281d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd677c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0082824b }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_00828234 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_0082824b }
	__asm { L_00828234: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0082824b: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00828340 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0082827f }
	__asm { test al, 1 }
	__asm { jne L_0082827f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0082827f }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0082827f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_00c7a910();
// FUNCTION: ROBLOXSTUDIO 0x00828340
extern "C" __declspec(naked) void asm_00828340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd677c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_008283b8 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_008283a1 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_008283b8 }
	__asm { L_008283a1: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008283b8: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c7a910 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008283f2 }
	__asm { test al, 1 }
	__asm { jne L_008283f2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008283f2 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008283f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_004038a0();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00827a60();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828530
extern "C" __declspec(naked) void asm_00828530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25580 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0xc }
	__asm { push 0x1019844 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0082858a }
	__asm { lea eax, [esi + 0x150] }
	__asm { jmp L_0082858c }
	__asm { L_0082858a: }
	__asm { xor eax, eax }
	__asm { L_0082858c: }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov dword ptr [edi], 0xe5c21c }
	__asm { mov dword ptr [edi + 0xc], esi }
	__asm { mov dword ptr [edi + 0x10], esi }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { jb L_008285c3 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008285c3: }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe5c2bc }
	__asm { test esi, esi }
	__asm { je L_00828628 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_008285fb }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_008285fd }
	__asm { call fn_0043ee40 }
	__asm { jmp L_008285fd }
	__asm { L_008285fb: }
	__asm { mov eax, esi }
	__asm { L_008285fd: }
	__asm { test eax, eax }
	__asm { je L_00828628 }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_00828628 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00828628 }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00828628 }
	__asm { call fn_00827a60 }
	__asm { L_00828628: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_007cd560();
extern "C" void fn_00827a60();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008286c0
extern "C" __declspec(naked) void asm_008286c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd25580 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x11 }
	__asm { push 0x1019868 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0082871a }
	__asm { lea eax, [esi + 0x150] }
	__asm { jmp L_0082871c }
	__asm { L_0082871a: }
	__asm { xor eax, eax }
	__asm { L_0082871c: }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_009609c0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov dword ptr [edi], 0xe5c21c }
	__asm { mov dword ptr [edi + 0xc], esi }
	__asm { mov dword ptr [edi + 0x10], esi }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { jb L_00828753 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00828753: }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi], 0xe5c29c }
	__asm { test esi, esi }
	__asm { je L_008287b8 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0082878b }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_0082878d }
	__asm { call fn_0043ee40 }
	__asm { jmp L_0082878d }
	__asm { L_0082878b: }
	__asm { mov eax, esi }
	__asm { L_0082878d: }
	__asm { test eax, eax }
	__asm { je L_008287b8 }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_008287b8 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_008287b8 }
	__asm { lea ecx, [ebx - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_008287b8 }
	__asm { call fn_00827a60 }
	__asm { L_008287b8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00421eb0();
extern "C" void fn_0067af70();
extern "C" void fn_006b9740();
extern "C" void fn_009609c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00828970
extern "C" __declspec(naked) void asm_00828970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009609c0 }
	__asm { mov edi, dword ptr [ebp + 0x24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe5c1dc }
	__asm { test edi, edi }
	__asm { je L_008289bd }
	__asm { mov ecx, edi }
	__asm { call fn_0067af70 }
	__asm { jmp L_008289bf }
	__asm { L_008289bd: }
	__asm { xor eax, eax }
	__asm { L_008289bf: }
	__asm { push ebx }
	__asm { push eax }
	__asm { lea ebx, [esi + 0xc] }
	__asm { push ebx }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], edi }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test cl, cl }
	__asm { je L_00828a2c }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { jne L_00828a2c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00828a1b }
	__asm { push 0x241 }
	__asm { push 0xe5c6c8 }
	__asm { push 0xe5c9e0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00828a2c }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00828a1b: }
	__asm { movzx eax, cl }
	__asm { push 0xe5c9f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00828a2c: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { pop ebx }
	__asm { jb L_00828a3e }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00828a3e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10268[];
extern "C" void fn_009a06c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0082a520
extern "C" __declspec(naked) void asm_0082a520()
{
	__asm { L_0082a520: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd25688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0x11f9cd4 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push esi }
	__asm { xor bl, bl }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, eax }
	__asm { add esp, 0x14 }
	__asm { test ecx, ecx }
	__asm { je L_0082a57c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax + 0xe8] }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082a57c: }
	__asm { push 0 }
	__asm { push 0x12d1e20 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0082a5ed }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_009a06c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp esi, dword ptr [ebp - 0x14] }
	__asm { je L_0082a5ce }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_0082a5b5: }
	__asm { push edi }
	__asm { push dword ptr [esi] }
	__asm { call L_0082a520 }
	__asm { add esi, 4 }
	__asm { add esp, 8 }
	__asm { or bl, al }
	__asm { cmp esi, dword ptr [ebp - 0x14] }
	__asm { jne L_0082a5b5 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { pop edi }
	__asm { L_0082a5ce: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0082a5ed }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082a5ed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_009a06c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0082a600
extern "C" __declspec(naked) void asm_0082a600()
{
	__asm { L_0082a600: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd25688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0x11f9cd4 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push esi }
	__asm { xor bl, bl }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, eax }
	__asm { add esp, 0x14 }
	__asm { test ecx, ecx }
	__asm { je L_0082a65c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax + 0x100] }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082a65c: }
	__asm { push 0 }
	__asm { push 0x12d1e20 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0082a6ca }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_009a06c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp esi, dword ptr [ebp - 0x14] }
	__asm { je L_0082a6ab }
	__asm { L_0082a691: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [esi] }
	__asm { call L_0082a600 }
	__asm { add esi, 4 }
	__asm { add esp, 8 }
	__asm { or bl, al }
	__asm { cmp esi, dword ptr [ebp - 0x14] }
	__asm { jne L_0082a691 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { L_0082a6ab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0082a6ca }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082a6ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_009a06c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x0082a6e0
extern "C" __declspec(naked) void asm_0082a6e0()
{
	__asm { L_0082a6e0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd25688 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0x11f9cd4 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push esi }
	__asm { xor bl, bl }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, eax }
	__asm { add esp, 0x14 }
	__asm { test ecx, ecx }
	__asm { je L_0082a73c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax + 0xf4] }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082a73c: }
	__asm { push 0 }
	__asm { push 0x12d1e20 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_0082a7ad }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_009a06c0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp esi, dword ptr [ebp - 0x14] }
	__asm { je L_0082a78e }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_0082a775: }
	__asm { push edi }
	__asm { push dword ptr [esi] }
	__asm { call L_0082a6e0 }
	__asm { add esi, 4 }
	__asm { add esp, 8 }
	__asm { or bl, al }
	__asm { cmp esi, dword ptr [ebp - 0x14] }
	__asm { jne L_0082a775 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { pop edi }
	__asm { L_0082a78e: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0082a7ad }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082a7ad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc990[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
extern "C" void fn_007be410();
// FUNCTION: ROBLOXSTUDIO 0x0082b270
extern "C" __declspec(naked) void asm_0082b270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc990] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0082b292 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe5cba4 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0082b292: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, 0x128 }
	__asm { push -1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, eax }
	__asm { call fn_007be410 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test cl, cl }
	__asm { je L_0082b2f2 }
	__asm { test esi, esi }
	__asm { jne L_0082b2f2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0082b2e1 }
	__asm { push 0x3be }
	__asm { push 0xe5c6c8 }
	__asm { push 0xe5cb30 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082b2f2 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0082b2e1: }
	__asm { movzx eax, cl }
	__asm { push 0xe5cb40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082b2f2: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc990[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
extern "C" void fn_007be410();
// FUNCTION: ROBLOXSTUDIO 0x0082b300
extern "C" __declspec(naked) void asm_0082b300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc990] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0082b322 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe5cbb8 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0082b322: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, 0x128 }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, eax }
	__asm { call fn_007be410 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test cl, cl }
	__asm { je L_0082b382 }
	__asm { test esi, esi }
	__asm { jne L_0082b382 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0082b371 }
	__asm { push 0x3be }
	__asm { push 0xe5c6c8 }
	__asm { push 0xe5cb30 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082b382 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0082b371: }
	__asm { movzx eax, cl }
	__asm { push 0xe5cb40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082b382: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc990[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
extern "C" void fn_007c01c0();
// FUNCTION: ROBLOXSTUDIO 0x0082b390
extern "C" __declspec(naked) void asm_0082b390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc990] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0082b3b2 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe5cbe0 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0082b3b2: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, 0x128 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_007c01c0 }
	__asm { test al, al }
	__asm { je L_0082b41d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_0082b415 }
	__asm { test esi, esi }
	__asm { jne L_0082b415 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0082b404 }
	__asm { push 0x3be }
	__asm { push 0xe5c6c8 }
	__asm { push 0xe5cb30 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082b415 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0082b404: }
	__asm { movzx eax, al }
	__asm { push 0xe5cb40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082b415: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_0082b41d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc990[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
extern "C" void fn_007c01c0();
// FUNCTION: ROBLOXSTUDIO 0x0082b430
extern "C" __declspec(naked) void asm_0082b430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc990] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0082b452 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe5cbcc }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0082b452: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, 0x128 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push -1 }
	__asm { mov ecx, eax }
	__asm { call fn_007c01c0 }
	__asm { test al, al }
	__asm { je L_0082b4bd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_0082b4b5 }
	__asm { test esi, esi }
	__asm { jne L_0082b4b5 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0082b4a4 }
	__asm { push 0x3be }
	__asm { push 0xe5c6c8 }
	__asm { push 0xe5cb30 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082b4b5 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0082b4a4: }
	__asm { movzx eax, al }
	__asm { push 0xe5cb40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082b4b5: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_0082b4bd: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc990[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
extern "C" void fn_007c0680();
// FUNCTION: ROBLOXSTUDIO 0x0082b9d0
extern "C" __declspec(naked) void asm_0082b9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc990] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0082b9f2 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe5cbf4 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0082b9f2: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, 0x128 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { fld1 }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_007c0680 }
	__asm { test al, al }
	__asm { je L_0082ba61 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_0082ba59 }
	__asm { test esi, esi }
	__asm { jne L_0082ba59 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0082ba48 }
	__asm { push 0x3be }
	__asm { push 0xe5c6c8 }
	__asm { push 0xe5cb30 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082ba59 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0082ba48: }
	__asm { movzx eax, al }
	__asm { push 0xe5cb40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082ba59: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_0082ba61: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038248[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc990[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
extern "C" void fn_007c0680();
// FUNCTION: ROBLOXSTUDIO 0x0082ba70
extern "C" __declspec(naked) void asm_0082ba70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc990] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0082ba92 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe5cc08 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0082ba92: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, 0x128 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { fld dword ptr [g_01038248] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_007c0680 }
	__asm { test al, al }
	__asm { je L_0082bb05 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_0082bafd }
	__asm { test esi, esi }
	__asm { jne L_0082bafd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0082baec }
	__asm { push 0x3be }
	__asm { push 0xe5c6c8 }
	__asm { push 0xe5cb30 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082bafd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0082baec: }
	__asm { movzx eax, al }
	__asm { push 0xe5cb40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082bafd: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_0082bb05: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc990[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
extern "C" void fn_0082aaf0();
extern "C" void fn_008c68b0();
extern "C" void fn_00c2cf50();
extern "C" void fn_00c363b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0082cb10
extern "C" __declspec(naked) void asm_0082cb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc990] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0082cb35 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe5c970 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0082cb35: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c2cf50 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0082cb57 }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c363b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0082cbbc }
	__asm { L_0082cb57: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { pop edi }
	__asm { je L_0082cba4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0082cba4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0082cb8f }
	__asm { push 0x22b }
	__asm { push 0xe5c6c8 }
	__asm { push 0xe5c78c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082cba4 }
	__asm { L_0082cb8f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5c980 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082cba4: }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_0082aaf0 }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call fn_008c68b0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0082cbbc: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe5c604 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc990[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
extern "C" void fn_0082aaf0();
extern "C" void fn_008c68b0();
extern "C" void fn_00c2cf50();
extern "C" void fn_00c363b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0082cd80
extern "C" __declspec(naked) void asm_0082cd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc990] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0082cda5 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe5c898 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0082cda5: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c2cf50 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0082cdc7 }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c363b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0082ce2c }
	__asm { L_0082cdc7: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { pop edi }
	__asm { je L_0082ce14 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0082ce14 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0082cdff }
	__asm { push 0x20b }
	__asm { push 0xe5c6c8 }
	__asm { push 0xe5c78c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082ce14 }
	__asm { L_0082cdff: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5c8a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082ce14: }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_0082aaf0 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_008c68b0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0082ce2c: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe5c604 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc990[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
extern "C" void fn_0082aaf0();
extern "C" void fn_008c68b0();
extern "C" void fn_00c2cf50();
extern "C" void fn_00c363b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0082d5f0
extern "C" __declspec(naked) void asm_0082d5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012fc990] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0082d615 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe5c900 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0082d615: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c2cf50 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0082d637 }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c363b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0082d69c }
	__asm { L_0082d637: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { pop edi }
	__asm { je L_0082d684 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0082d684 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0082d66f }
	__asm { push 0x21a }
	__asm { push 0xe5c6c8 }
	__asm { push 0xe5c78c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082d684 }
	__asm { L_0082d66f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5c910 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082d684: }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_0082aaf0 }
	__asm { push 2 }
	__asm { mov ecx, eax }
	__asm { call fn_008c68b0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0082d69c: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe5c604 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10528[];
extern "C" char g_012e07f0[];
extern "C" void fn_00790e70();
extern "C" void fn_00846f90();
extern "C" void fn_00848ef0();
extern "C" void fn_00897c10();
extern "C" void fn_00c2cf50();
extern "C" void fn_00c363b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0082d810
extern "C" __declspec(naked) void asm_0082d810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd256a8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { call fn_00c2cf50 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0082d879 }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c363b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_0082d879 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp + 8], 0xe5c604 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_0082d879: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push 0 }
	__asm { mov edi, dword ptr [eax + 0xba0] }
	__asm { push edi }
	__asm { call fn_00897c10 }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [g_012e07f0], 0 }
	__asm { je L_0082d8d3 }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_00846f90 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0082d8b8 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0082d8b8: }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00790e70 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00848ef0 }
	__asm { jmp L_0082d8eb }
	__asm { L_0082d8d3: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0082d8e1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0082d8e1: }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00790e70 }
	__asm { add esp, 8 }
	__asm { L_0082d8eb: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_0048b090();
extern "C" void fn_007b3490();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0082df20
extern "C" __declspec(naked) void asm_0082df20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xbc8] }
	__asm { push edi }
	__asm { push 0xb }
	__asm { push 0x101889c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_0082df9d }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0082df9d }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0082df9d }
	__asm { lea esi, [edi - 0x1c] }
	__asm { jmp L_0082df9f }
	__asm { L_0082df9d: }
	__asm { xor esi, esi }
	__asm { L_0082df9f: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0082dfb7 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082dfb7: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { test esi, esi }
	__asm { je L_0082dfef }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x88] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0082dfef }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082dfef: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0048b090();
extern "C" void fn_007b3490();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0082e010
extern "C" __declspec(naked) void asm_0082e010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xbc8] }
	__asm { push edi }
	__asm { push 0xc }
	__asm { push 0x101887c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_0082e08d }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0082e08d }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0082e08d }
	__asm { lea esi, [edi - 0x1c] }
	__asm { jmp L_0082e08f }
	__asm { L_0082e08d: }
	__asm { xor esi, esi }
	__asm { L_0082e08f: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0082e0a7 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082e0a7: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { test esi, esi }
	__asm { je L_0082e0df }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x88] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0082e0df }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082e0df: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0048b090();
extern "C" void fn_007b3490();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0082e280
extern "C" __declspec(naked) void asm_0082e280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xbc8] }
	__asm { push edi }
	__asm { push 0xb }
	__asm { push 0x1018864 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_0082e2fd }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0082e2fd }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0082e2fd }
	__asm { lea esi, [edi - 0x1c] }
	__asm { jmp L_0082e2ff }
	__asm { L_0082e2fd: }
	__asm { xor esi, esi }
	__asm { L_0082e2ff: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0082e317 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082e317: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { test esi, esi }
	__asm { je L_0082e34f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x88] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0082e34f }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082e34f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0048b090();
extern "C" void fn_007b3490();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0082e410
extern "C" __declspec(naked) void asm_0082e410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xbc8] }
	__asm { push edi }
	__asm { push 9 }
	__asm { push 0xe5c844 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_0082e48d }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0082e48d }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0082e48d }
	__asm { lea esi, [edi - 0x1c] }
	__asm { jmp L_0082e48f }
	__asm { L_0082e48d: }
	__asm { xor esi, esi }
	__asm { L_0082e48f: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0082e4a7 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082e4a7: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { test esi, esi }
	__asm { je L_0082e4df }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x88] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0082e4df }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082e4df: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0048b090();
extern "C" void fn_007b3490();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0082e500
extern "C" __declspec(naked) void asm_0082e500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xbc8] }
	__asm { push edi }
	__asm { push 0xc }
	__asm { push 0x10188a8 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_0082e57d }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0082e57d }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0082e57d }
	__asm { lea esi, [edi - 0x1c] }
	__asm { jmp L_0082e57f }
	__asm { L_0082e57d: }
	__asm { xor esi, esi }
	__asm { L_0082e57f: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0082e597 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082e597: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { test esi, esi }
	__asm { je L_0082e5cf }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x88] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0082e5cf }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0082e5cf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_008276f0();
// FUNCTION: ROBLOXSTUDIO 0x0082e610
extern "C" __declspec(naked) void asm_0082e610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { je L_0082e65b }
	__asm { cmp dword ptr [ebx + 0x68], 0 }
	__asm { jne L_0082e65b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0082e646 }
	__asm { push 0x48 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082e65b }
	__asm { L_0082e646: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1004a10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082e65b: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov eax, dword ptr [ebx + 0x68] }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { je L_0082e6a1 }
	__asm { test eax, eax }
	__asm { jne L_0082e6a1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0082e68c }
	__asm { push 0x48 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082e6a1 }
	__asm { L_0082e68c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1004a10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082e6a1: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov eax, dword ptr [ebx + 0x68] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { je L_0082e6e7 }
	__asm { test eax, eax }
	__asm { jne L_0082e6e7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0082e6d2 }
	__asm { push 0x48 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0082e6e7 }
	__asm { L_0082e6d2: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1004a10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0082e6e7: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebx + 0x68] }
	__asm { push 0x82f0a0 }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { call fn_008276f0 }
	__asm { add esp, 0x10 }
	__asm { xor ecx, ecx }
	__asm { cmp eax, edi }
	__asm { pop edi }
	__asm { setne cl }
	__asm { pop esi }
	__asm { mov al, cl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0048b090();
extern "C" void fn_007b3490();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0082e9e0
extern "C" __declspec(naked) void asm_0082e9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xbc8] }
	__asm { push edi }
	__asm { push 0xb }
	__asm { push 0x101889c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_0082ea5e }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_0082ea5e }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0082ea5e }
	__asm { add edi, -0x1c }
	__asm { jmp L_0082ea60 }
	__asm { L_0082ea5e: }
	__asm { xor edi, edi }
	__asm { L_0082ea60: }
	__asm { test edi, edi }
	__asm { setne bl }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_0082ea76 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0082ea76: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
