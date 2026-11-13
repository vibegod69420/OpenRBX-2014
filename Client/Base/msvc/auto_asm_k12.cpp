// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0067eee0
extern "C" __declspec(naked) void asm_0067eee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12b21 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf139e8 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe18168 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0067ef43 }
	__asm { add esi, 0xc }
	__asm { jmp L_0067ef45 }
	__asm { L_0067ef43: }
	__asm { xor esi, esi }
	__asm { L_0067ef45: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0067ef5b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0067ef5b: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe3b890 }
	__asm { mov dword ptr [ebp - 0x30], 0xe3b89c }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x10f8fd4 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe3b8a4 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_005eb3a0();
extern "C" void fn_006576e0();
extern "C" void fn_00cf6a60();
// FUNCTION: ROBLOXSTUDIO 0x006801f0
extern "C" __declspec(naked) void asm_006801f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, 0x3008 }
	__asm { call fn_00cf6a60 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { xor edx, edx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { sub eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { sar eax, 4 }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { test eax, eax }
	__asm { je L_006802b1 }
	__asm { push esi }
	__asm { xor ecx, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { L_00680223: }
	__asm { mov esi, dword ptr [ebx] }
	__asm { add esi, ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { cmp edx, ecx }
	__asm { je L_0068023c }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { call fn_006576e0 }
	__asm { inc dword ptr [edi + 0x10] }
	__asm { L_0068023c: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00680263 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0x100 }
	__asm { lea edx, [ebp - 0x3008] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { lea eax, [ebp - 0x3008] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x24] }
	__asm { L_00680263: }
	__asm { push dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_005eb3a0 }
	__asm { inc dword ptr [edi] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { sub ecx, dword ptr [eax + 0x14] }
	__asm { mov eax, 0xaaaaaaab }
	__asm { add dword ptr [edi + 8], ecx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mul dword ptr [ecx + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { shr edx, 1 }
	__asm { add dword ptr [edi + 4], edx }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { sub eax, dword ptr [ebx] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { inc edx }
	__asm { add ecx, 0x10 }
	__asm { sar eax, 4 }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { cmp edx, eax }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { jb L_00680223 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_006802b1: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012fc99e[];
extern "C" void fn_004b2270();
extern "C" void fn_0068aeb0();
extern "C" void fn_006b8a90();
// FUNCTION: ROBLOXSTUDIO 0x006812d0
extern "C" __declspec(naked) void asm_006812d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12d8c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { movzx eax, byte ptr [esi + 0x88] }
	__asm { lea ebx, [esi + 0x88] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { add eax, ebx }
	__asm { je L_00681319 }
	__asm { inc eax }
	__asm { jmp L_0068131b }
	__asm { L_00681319: }
	__asm { xor eax, eax }
	__asm { L_0068131b: }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { shr eax, 3 }
	__asm { add eax, dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004b2270 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_0068137e }
	__asm { mov al, byte ptr [g_012fc99e] }
	__asm { test al, al }
	__asm { je L_00681359 }
	__asm { push dword ptr [ebp + 8] }
	__asm { movzx eax, al }
	__asm { push 0xe3d1cc }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00681359: }
	__asm { lea eax, [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00681365 }
	__asm { add eax, -4 }
	__asm { jmp L_00681367 }
	__asm { L_00681365: }
	__asm { xor eax, eax }
	__asm { L_00681367: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { test eax, eax }
	__asm { je L_00681373 }
	__asm { add eax, -4 }
	__asm { jmp L_00681375 }
	__asm { L_00681373: }
	__asm { xor eax, eax }
	__asm { L_00681375: }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_0068aeb0 }
	__asm { L_0068137e: }
	__asm { push edi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" void fn_00410ef0();
extern "C" void fn_005e8db0();
extern "C" void fn_0068adf0();
// FUNCTION: ROBLOXSTUDIO 0x006813a0
extern "C" __declspec(naked) void asm_006813a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12d9e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea esi, [ebx + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0068adf0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x178] }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { lea ecx, [ebx + 0x178] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_005e8db0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x88] }
	__asm { call fn_0068adf0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x58] }
	__asm { call fn_0068adf0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x70] }
	__asm { call fn_0068adf0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xd0] }
	__asm { call fn_0068adf0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xb8] }
	__asm { call fn_0068adf0 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_0121036b[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00689070();
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006815e0
extern "C" __declspec(naked) void asm_006815e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd12dd4 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00681651 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x88] }
	__asm { cmp eax, 0xa }
	__asm { je L_00681651 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0068163c }
	__asm { push 0xee }
	__asm { push 0xe3ccc0 }
	__asm { push 0xe3cd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00681651 }
	__asm { L_0068163c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3ce18 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00681651: }
	__asm { mov al, byte ptr [g_0121036b] }
	__asm { test al, al }
	__asm { je L_0068166e }
	__asm { push dword ptr [ebp + 8] }
	__asm { movzx eax, al }
	__asm { push 0xe3ceb4 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0068166e: }
	__asm { lea esi, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x124] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00689070 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b9a6a0();
// FUNCTION: ROBLOXSTUDIO 0x006865c0
extern "C" __declspec(naked) void asm_006865c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0xc4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { je L_00686676 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ebx, [ecx + 0x184] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00410ef0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b9a6a0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test cl, cl }
	__asm { je L_00686667 }
	__asm { cmp dword ptr [ebp - 4], 1 }
	__asm { je L_00686667 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00686656 }
	__asm { push 0x510 }
	__asm { push 0xe3ccc0 }
	__asm { push 0xe3d790 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00686667 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00686656: }
	__asm { movzx eax, cl }
	__asm { push 0xe3d808 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00686667: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00686676: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_006866b7 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006866a6 }
	__asm { push 0x515 }
	__asm { push 0xe3ccc0 }
	__asm { push 0xe3d870 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006866b7 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006866a6: }
	__asm { movzx eax, al }
	__asm { push 0xe3d8c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006866b7: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004833f0();
extern "C" void fn_0068a630();
extern "C" void fn_007cd560();
extern "C" void fn_009d9c50();
// FUNCTION: ROBLOXSTUDIO 0x00686740
extern "C" __declspec(naked) void asm_00686740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test byte ptr [eax + 0xe8], 2 }
	__asm { mov edi, dword ptr [eax + 0x38] }
	__asm { je L_0068675f }
	__asm { push edi }
	__asm { call fn_009d9c50 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0068675f: }
	__asm { push ebx }
	__asm { push esi }
	__asm { test edi, edi }
	__asm { je L_006867a8 }
	__asm { lea ebx, [edi + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_006867a8 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0068a630 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { jne L_00686798 }
	__asm { test ebx, ebx }
	__asm { je L_006867a8 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_004833f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_006867a8 }
	__asm { L_00686798: }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_009d9c50 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006867a8: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00b7f950();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00686da0
extern "C" __declspec(naked) void asm_00686da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd132e1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_00b7f950 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea edx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edx, edx }
	__asm { je L_00686e19 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea edi, [edx + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push -1 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea ebx, [ecx + 4] }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { L_00686e19: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00686f30();
extern "C" void fn_0068a1e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00687160
extern "C" __declspec(naked) void asm_00687160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd132f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { jne L_006871cc }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov bl, byte ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_006871a4: }
	__asm { mov esi, eax }
	__asm { test bl, bl }
	__asm { je L_006871b2 }
	__asm { cmp dword ptr [eax + 0x10], edx }
	__asm { setae cl }
	__asm { jmp L_006871b8 }
	__asm { L_006871b2: }
	__asm { cmp edx, dword ptr [eax + 0x10] }
	__asm { setb cl }
	__asm { L_006871b8: }
	__asm { mov byte ptr [ebp - 0x14], cl }
	__asm { test cl, cl }
	__asm { je L_006871c3 }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_006871c6 }
	__asm { L_006871c3: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { L_006871c6: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_006871a4 }
	__asm { L_006871cc: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00686f30 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_0068a1e0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_00686cc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00687620
extern "C" __declspec(naked) void asm_00687620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, 0x92492493 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sub ecx, edi }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov ebx, edx }
	__asm { shr ebx, 0x1f }
	__asm { add ebx, edx }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov esi, eax }
	__asm { sar esi, 1 }
	__asm { test esi, esi }
	__asm { jle L_006876cf }
	__asm { lea eax, [esi*8] }
	__asm { sub eax, esi }
	__asm { lea edi, [edi + eax*4] }
	__asm { L_00687672: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { sub edi, 0x1c }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { dec esi }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00686cc0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006876cb }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006876cb: }
	__asm { test esi, esi }
	__asm { jg L_00687672 }
	__asm { L_006876cf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006876e0();
// FUNCTION: ROBLOXSTUDIO 0x00687820
extern "C" __declspec(naked) void asm_00687820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0x28 }
	__asm { jle L_006878c0 }
	__asm { inc eax }
	__asm { cdq }
	__asm { and edx, 7 }
	__asm { add eax, edx }
	__asm { sar eax, 3 }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea edx, [eax*8] }
	__asm { sub edx, eax }
	__asm { lea ebx, [eax*8] }
	__asm { shl edx, 3 }
	__asm { sub ebx, eax }
	__asm { shl ebx, 2 }
	__asm { lea eax, [edx + edi] }
	__asm { push eax }
	__asm { lea ecx, [ebx + edi] }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { call fn_006876e0 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebx + edi] }
	__asm { push eax }
	__asm { mov eax, edi }
	__asm { sub eax, ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_006876e0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, esi }
	__asm { push eax }
	__asm { sub eax, dword ptr [ebp - 4] }
	__asm { sub esi, ebx }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_006876e0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_006876e0 }
	__asm { add esp, 0x40 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006878c0: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_006876e0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00686cc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00687bd0
extern "C" __declspec(naked) void asm_00687bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea esi, [edi - 0x1c] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp esi, ebx }
	__asm { je L_00687c33 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00687c33: }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { sub edi, ebx }
	__asm { sub edi, 0x1c }
	__asm { mov eax, 0x92492493 }
	__asm { imul edi }
	__asm { add edx, edi }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push 0 }
	__asm { push ebx }
	__asm { call fn_00686cc0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_00687c75 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00687c75: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00624a40();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00688cd0
extern "C" __declspec(naked) void asm_00688cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13351 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00688d01: }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { je L_00688d6c }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00688d37 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { L_00688d37: }
	__asm { add esi, 0x1c }
	__asm { add edi, 0x1c }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { jmp L_00688d01 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00688d63 }
	__asm { L_00688d53: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { call fn_00624a40 }
	__asm { add esi, 0x1c }
	__asm { cmp esi, edi }
	__asm { jne L_00688d53 }
	__asm { L_00688d63: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00688d6c: }
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

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x00688e70
extern "C" __declspec(naked) void asm_00688e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00688ebb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00688ebb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00688f02 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe3d9dc }
	__asm { mov dword ptr [esi + 8], 0xe3d9ec }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xe3d9f4 }
	__asm { mov dword ptr [esi + 8], 0xe3da04 }
	__asm { jmp L_00688f04 }
	__asm { L_00688f02: }
	__asm { xor esi, esi }
	__asm { L_00688f04: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00688f21 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00688f21: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10598[];
extern "C" void fn_0045fe60();
extern "C" void fn_0068b480();
extern "C" void fn_0068ba60();
// FUNCTION: ROBLOXSTUDIO 0x00688f40
extern "C" __declspec(naked) void asm_00688f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4ba48 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { cmp eax, 1 }
	__asm { jne L_00688f70 }
	__asm { call fn_0068b480 }
	__asm { jmp L_00688f79 }
	__asm { L_00688f70: }
	__asm { push eax }
	__asm { call fn_0068ba60 }
	__asm { add esp, 4 }
	__asm { L_00688f79: }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_00688fac }
	__asm { push 1 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0xc], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x18], 0xe1815c }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0045fe60 }
	__asm { L_00688fac: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea edx, [ecx + eax*4] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { cmp ecx, edx }
	__asm { je L_00688fd5 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00688fc0: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00688fcb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00688fcb: }
	__asm { add dword ptr [esi + 8], 4 }
	__asm { cmp dword ptr [esi + 8], edx }
	__asm { jne L_00688fc0 }
	__asm { pop edi }
	__asm { L_00688fd5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00641540();
extern "C" void fn_00687e10();
// FUNCTION: ROBLOXSTUDIO 0x00688ff0
extern "C" __declspec(naked) void asm_00688ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { sub edx, dword ptr [esi] }
	__asm { push edi }
	__asm { imul edx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { sar edx, 1 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_0068901b }
	__asm { push 1 }
	__asm { call fn_00641540 }
	__asm { L_0068901b: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { test edx, edx }
	__asm { je L_00689035 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { L_00689035: }
	__asm { add dword ptr [esi + 4], 0xc }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea edi, [edi + edi*2] }
	__asm { shl edi, 2 }
	__asm { lea ecx, [eax - 0xc] }
	__asm { add edx, edi }
	__asm { cmp edx, ecx }
	__asm { je L_00689060 }
	__asm { cmp ecx, eax }
	__asm { je L_00689060 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { call fn_00687e10 }
	__asm { add esp, 0x14 }
	__asm { L_00689060: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00689440
extern "C" __declspec(naked) void asm_00689440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13388 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [edi], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov dword ptr [edi + 0x18], 0xf }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi + 4], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edi + 0x1c], ecx }
	__asm { jb L_006894dc }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006894dc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00689690
extern "C" __declspec(naked) void asm_00689690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp edi, esi }
	__asm { je L_006896ef }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_006896ef: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { cmp esi, eax }
	__asm { je L_00689708 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_00689708: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { pop esi }
	__asm { jb L_00689721 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00689721: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00688cd0();
extern "C" void fn_0068a170();
extern "C" void fn_00975020();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00689990
extern "C" __declspec(naked) void asm_00689990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13400 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x92492493 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { sub esi, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call fn_0068a170 }
	__asm { test al, al }
	__asm { je L_00689a0f }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx + 4] }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00688cd0 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { L_00689a0f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00975020 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0068a9a0();
extern "C" void fn_0068ac00();
extern "C" void fn_00698510();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00689a40
extern "C" __declspec(naked) void asm_00689a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd133e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp dword ptr [ebx + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00689a84 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { test eax, eax }
	__asm { je L_00689a84 }
	__asm { add eax, -0xc }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { jmp L_00689a8b }
	__asm { L_00689a84: }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_00689a8b: }
	__asm { lea esi, [ebp - 0x10] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_00689ab9 }
	__asm { push edi }
	__asm { L_00689a95: }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { test edi, edi }
	__asm { je L_00689aac }
	__asm { mov ecx, edi }
	__asm { call fn_00698510 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00689aac: }
	__asm { mov esi, dword ptr [esi + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00689ab8 }
	__asm { add esi, -0xc }
	__asm { jne L_00689a95 }
	__asm { L_00689ab8: }
	__asm { pop edi }
	__asm { L_00689ab9: }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00689af2 }
	__asm { cmp dword ptr [ebx + 8], 0 }
	__asm { je L_00689add }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0068a9a0 }
	__asm { L_00689add: }
	__asm { mov ecx, ebx }
	__asm { call fn_0068ac00 }
	__asm { mov dword ptr [ebx + 0x14], 0 }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { L_00689af2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00ce31f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0068a220
extern "C" __declspec(naked) void asm_0068a220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13450 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test ebx, ebx }
	__asm { je L_0068a276 }
	__asm { cmp ebx, 0x1fffffff }
	__asm { ja L_0068a270 }
	__asm { lea eax, [ebx*8] }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_0068a276 }
	__asm { L_0068a270: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0068a276: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00ce31f0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_0068a2b5 }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068a2b5: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + ebx*8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_0068a220();
// FUNCTION: ROBLOXSTUDIO 0x0068a300
extern "C" __declspec(naked) void asm_0068a300()
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
	__asm { sar eax, 3 }
	__asm { cmp eax, edi }
	__asm { jae L_0068a36d }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x1fffffff }
	__asm { sar esi, 3 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_0068a337 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0068a337: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_0068a35b }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_0068a220 }
	__asm { L_0068a35b: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_0068a220 }
	__asm { L_0068a36d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de29c[];
extern "C" char g_012de2a0[];
extern "C" char g_012de2a4[];
extern "C" char g_012de2a8[];
extern "C" char g_012de2ac[];
extern "C" char g_012de2b0[];
extern "C" char g_012de2b4[];
extern "C" char g_012de2b8[];
extern "C" char g_013067ec[];
extern "C" char g_013067ee[];
extern "C" char g_013067f0[];
extern "C" void fn_006f67e0();
// FUNCTION: ROBLOXSTUDIO 0x0068a4f0
extern "C" __declspec(naked) void asm_0068a4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1346e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012de2b8] }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test al, 1 }
	__asm { jne L_0068a5c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de2b8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006f67e0 }
	__asm { movzx ecx, word ptr [g_013067ec] }
	__asm { mov edx, eax }
	__asm { mov ax, word ptr [g_013067f0] }
	__asm { sub cx, word ptr [edx] }
	__asm { sub ax, word ptr [edx + 4] }
	__asm { mov word ptr [ebp - 0x18], cx }
	__asm { movzx ecx, word ptr [g_013067ee] }
	__asm { sub cx, word ptr [edx + 2] }
	__asm { mov word ptr [ebp - 0x14], ax }
	__asm { mov eax, dword ptr [g_012de2a8] }
	__asm { mov word ptr [ebp - 0x16], cx }
	__asm { test al, 1 }
	__asm { jne L_0068a589 }
	__asm { or eax, 1 }
	__asm { mov ebx, 1 }
	__asm { mov dword ptr [g_012de2a8], eax }
	__asm { mov eax, ebx }
	__asm { mov edx, eax }
	__asm { mov dword ptr [g_012de29c], ebx }
	__asm { mov dword ptr [g_012de2a0], eax }
	__asm { mov dword ptr [g_012de2a4], edx }
	__asm { jmp L_0068a59a }
	__asm { L_0068a589: }
	__asm { mov edx, dword ptr [g_012de2a4] }
	__asm { mov eax, dword ptr [g_012de2a0] }
	__asm { mov ebx, dword ptr [g_012de29c] }
	__asm { L_0068a59a: }
	__asm { movzx ecx, byte ptr [ebp - 0x18] }
	__asm { shl ebx, cl }
	__asm { movzx ecx, byte ptr [ebp - 0x16] }
	__asm { shl eax, cl }
	__asm { movzx ecx, byte ptr [ebp - 0x14] }
	__asm { shl edx, cl }
	__asm { mov dword ptr [g_012de2ac], ebx }
	__asm { mov dword ptr [g_012de2b0], eax }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { mov dword ptr [g_012de2b4], edx }
	__asm { jmp L_0068a5d5 }
	__asm { L_0068a5c2: }
	__asm { mov eax, dword ptr [g_012de2b4] }
	__asm { mov ebx, dword ptr [g_012de2ac] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [g_012de2b0] }
	__asm { L_0068a5d5: }
	__asm { movzx ecx, byte ptr [g_013067ec] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movsx edx, word ptr [eax] }
	__asm { movsx esi, word ptr [eax + 2] }
	__asm { movsx edi, word ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { shl edx, cl }
	__asm { movzx ecx, byte ptr [g_013067ee] }
	__asm { shl esi, cl }
	__asm { movzx ecx, byte ptr [g_013067f0] }
	__asm { shl edi, cl }
	__asm { lea ecx, [ebx + edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add ecx, esi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add ecx, edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" void fn_0045fe60();
extern "C" void fn_0068b540();
// FUNCTION: ROBLOXSTUDIO 0x0068a730
extern "C" __declspec(naked) void asm_0068a730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4bb48 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_0068a7bb }
	__asm { mov word ptr [esi + 8], 0 }
	__asm { call fn_0068b540 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_0068a792 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe1815c }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0045fe60 }
	__asm { L_0068a792: }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov byte ptr [esi + 8], 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0068a7bb: }
	__asm { cmp byte ptr [esi + 9], 0 }
	__asm { je L_0068a7c5 }
	__asm { mov byte ptr [esi + 9], 0 }
	__asm { L_0068a7c5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" void fn_0045fe60();
extern "C" void fn_0068b4e0();
// FUNCTION: ROBLOXSTUDIO 0x0068a7e0
extern "C" __declspec(naked) void asm_0068a7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4bb48 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_0068a877 }
	__asm { mov word ptr [esi + 8], 0 }
	__asm { call fn_0068b4e0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_0068a842 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe1815c }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0045fe60 }
	__asm { L_0068a842: }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [esi + 8], 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0068a877: }
	__asm { cmp byte ptr [esi + 9], 0 }
	__asm { je L_0068a881 }
	__asm { mov byte ptr [esi + 9], 0 }
	__asm { L_0068a881: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00688f40();
extern "C" void fn_00689b10();
extern "C" void fn_0068ac00();
extern "C" void fn_00b34640();
// FUNCTION: ROBLOXSTUDIO 0x0068a890
extern "C" __declspec(naked) void asm_0068a890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea eax, [esi + 3] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { lea eax, [edi + 1] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00688f40 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0068a906 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx + eax*4] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebx + edi*4], eax }
	__asm { call fn_0068ac00 }
	__asm { L_0068a906: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x14], ebx }
	__asm { call fn_00b34640 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00689b10 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0057db00();
extern "C" void fn_0068aad0();
// FUNCTION: ROBLOXSTUDIO 0x0068adf0
extern "C" __declspec(naked) void asm_0068adf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { jne L_0068ae07 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0068ae07: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ebx, eax }
	__asm { shr ebx, 3 }
	__asm { add ebx, eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { xor edx, edx }
	__asm { mov eax, ebx }
	__asm { div esi }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { test edi, edi }
	__asm { je L_0068ae68 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_0068ae68 }
	__asm { L_0068ae38: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx - 4] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_0068ae68 }
	__asm { cmp esi, ebx }
	__asm { jne L_0068ae60 }
	__asm { test ecx, ecx }
	__asm { je L_0068ae57 }
	__asm { lea eax, [ecx - 4] }
	__asm { jmp L_0068ae59 }
	__asm { L_0068ae57: }
	__asm { xor eax, eax }
	__asm { L_0068ae59: }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { cmp edx, dword ptr [eax] }
	__asm { je L_0068ae73 }
	__asm { L_0068ae60: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_0068ae38 }
	__asm { L_0068ae68: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0068ae73: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_0068ae7e }
	__asm { add eax, -4 }
	__asm { jmp L_0068ae80 }
	__asm { L_0068ae7e: }
	__asm { xor eax, eax }
	__asm { L_0068ae80: }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { call fn_0068aad0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { call fn_0057db00 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0068a300();
// FUNCTION: ROBLOXSTUDIO 0x0068bac0
extern "C" __declspec(naked) void asm_0068bac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_0068bb09 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_0068bb09 }
	__asm { sub edi, ecx }
	__asm { sar edi, 3 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_0068baea }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0068a300 }
	__asm { L_0068baea: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { test edx, edx }
	__asm { je L_0068bb28 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx + edi*8] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + edi*8 + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0068bb09: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_0068bb17 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0068a300 }
	__asm { L_0068bb17: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0068bb28 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_0068bb28: }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00665970();
extern "C" void fn_00688d80();
extern "C" void fn_0068a300();
extern "C" void fn_00694a20();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0068bd20
extern "C" __declspec(naked) void asm_0068bd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd134f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, edx }
	__asm { sub ecx, eax }
	__asm { sar ecx, 3 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp ecx, edi }
	__asm { jbe L_0068bd7c }
	__asm { lea eax, [eax + edi*8] }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00694a20 }
	__asm { L_0068bd69: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0068bd7c: }
	__asm { jae L_0068bd69 }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068a300 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, dword ptr [esi] }
	__asm { mov ecx, edi }
	__asm { sar eax, 3 }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00688d80 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, ecx }
	__asm { sub eax, dword ptr [esi] }
	__asm { add esp, 0x14 }
	__asm { sar eax, 3 }
	__asm { sub edi, eax }
	__asm { lea eax, [ecx + edi*8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00665970 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403110();
// FUNCTION: ROBLOXSTUDIO 0x0068bdf0
extern "C" __declspec(naked) void asm_0068bdf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov dword ptr [ebp + 8], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_0068be28 }
	__asm { sub eax, 4 }
	__asm { L_0068be28: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [ebp + 8], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_0068be76 }
	__asm { sub eax, 4 }
	__asm { L_0068be76: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [ebp + 8], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_0068bec4 }
	__asm { sub eax, 4 }
	__asm { L_0068bec4: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [esi + 0x40], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00402f60();
extern "C" void fn_0068d3c0();
extern "C" void fn_0068ee40();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0068d600
extern "C" __declspec(naked) void asm_0068d600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd137e9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_0068d3c0 }
	__asm { mov edi, 4 }
	__asm { cmp dword ptr [ebp - 0x28], edi }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { cmovb edi, dword ptr [ebp - 0x28] }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { mov eax, 4 }
	__asm { cmovae ecx, dword ptr [ebp - 0x38] }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0xe3ed98 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00402f60 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { jne L_0068d6ef }
	__asm { cmp edi, 4 }
	__asm { jb L_0068d6ef }
	__asm { cmp edi, 4 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_0068d6ef }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { lea esi, [ebp - 0x38] }
	__asm { cmovae esi, dword ptr [ebp - 0x38] }
	__asm { add esi, dword ptr [ebp - 0x28] }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { lea edi, [ebp - 0x38] }
	__asm { cmovae edi, dword ptr [ebp - 0x38] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { call fn_0068ee40 }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { jb L_0068d6dc }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068d6dc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0068d6ef: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0068d6f7 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_0068d6f7: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0xe3eda0 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00402f60();
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x0068d720
extern "C" __declspec(naked) void asm_0068d720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { jb L_0068d73d }
	__asm { mov ecx, dword ptr [edi] }
	__asm { jmp L_0068d73f }
	__asm { L_0068d73d: }
	__asm { mov ecx, edi }
	__asm { L_0068d73f: }
	__asm { mov eax, 4 }
	__asm { cmp esi, eax }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { push 0xe19990 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_0068d790 }
	__asm { cmp esi, 4 }
	__asm { jb L_0068d790 }
	__asm { cmp esi, 4 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_0068d790 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { push 0xe3edc4 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], al }
	__asm { call fn_004038a0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0068d790: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0068f1f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068da50
extern "C" __declspec(naked) void asm_0068da50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ab10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_0068f1f0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0068daea }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068daea: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_0068dafb }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068dafb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_0068ed60();
extern "C" void fn_0068f930();
// FUNCTION: ROBLOXSTUDIO 0x0068db10
extern "C" __declspec(naked) void asm_0068db10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { call fn_0068f930 }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0068f930 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0068ed60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0068dba2 }
	__asm { test al, 1 }
	__asm { jne L_0068db9b }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0068db9b }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0068db9b: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_0068dba2: }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0068dbc9 }
	__asm { test al, 1 }
	__asm { jne L_0068dbc9 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0068dbc9 }
	__asm { lea ecx, [ebp + 0x50] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0068dbc9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x84 }
}

// FUNCTION: ROBLOXSTUDIO 0x0068dbe0
extern "C" __declspec(naked) void asm_0068dbe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ax, word ptr [edi] }
	__asm { cmp esi, edx }
	__asm { je L_0068dc03 }
	__asm { L_0068dbf4: }
	__asm { mov cl, byte ptr [esi] }
	__asm { cmp al, cl }
	__asm { jg L_0068dbfe }
	__asm { cmp cl, ah }
	__asm { jle L_0068dc11 }
	__asm { L_0068dbfe: }
	__asm { inc esi }
	__asm { cmp esi, edx }
	__asm { jne L_0068dbf4 }
	__asm { L_0068dc03: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0068dc11: }
	__asm { cmp esi, edx }
	__asm { je L_0068dc03 }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { push ebx }
	__asm { mov eax, esi }
	__asm { jne L_0068dc41 }
	__asm { mov bl, byte ptr [edi] }
	__asm { L_0068dc20: }
	__asm { mov cl, byte ptr [eax] }
	__asm { cmp bl, cl }
	__asm { jg L_0068dc44 }
	__asm { cmp cl, byte ptr [edi + 1] }
	__asm { jg L_0068dc44 }
	__asm { inc eax }
	__asm { cmp eax, edx }
	__asm { jne L_0068dc20 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0068dc41: }
	__asm { lea eax, [esi + 1] }
	__asm { L_0068dc44: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10500[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068dca0
extern "C" __declspec(naked) void asm_0068dca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_0068dcf3 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_0068dcfd }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_0068dcfd }
	__asm { L_0068dcf3: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0068dcfd: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [ebp - 8], 0x10 }
	__asm { jb L_0068dd2b }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068dd2b: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10618[];
// FUNCTION: ROBLOXSTUDIO 0x0068dfa0
extern "C" __declspec(naked) void asm_0068dfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push edi }
	__asm { xor eax, eax }
	__asm { mov ebx, ecx }
	__asm { xor edi, edi }
	__asm { L_0068dfb8: }
	__asm { mov dl, byte ptr [esi] }
	__asm { movsx ecx, dl }
	__asm { shl eax, 4 }
	__asm { add eax, ecx }
	__asm { inc esi }
	__asm { lea ecx, [edx - 0x30] }
	__asm { cmp cl, 9 }
	__asm { ja L_0068dfd0 }
	__asm { sub eax, 0x30 }
	__asm { jmp L_0068dfe8 }
	__asm { L_0068dfd0: }
	__asm { lea ecx, [edx - 0x41] }
	__asm { cmp cl, 5 }
	__asm { ja L_0068dfdd }
	__asm { sub eax, 0x37 }
	__asm { jmp L_0068dfe8 }
	__asm { L_0068dfdd: }
	__asm { sub dl, 0x61 }
	__asm { cmp dl, 5 }
	__asm { ja L_0068e002 }
	__asm { sub eax, 0x57 }
	__asm { L_0068dfe8: }
	__asm { inc edi }
	__asm { cmp edi, 4 }
	__asm { jl L_0068dfb8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], esi }
	__asm { pop esi }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0068e002: }
	__asm { sub esi, dword ptr [ebp - 4] }
	__asm { push 1 }
	__asm { lea eax, [ebx + 0x18] }
	__asm { dec esi }
	__asm { push eax }
	__asm { mov dword ptr [ebx + 0x58], 0xe3f340 }
	__asm { mov dword ptr [ebx + 0x5c], esi }
	__asm { call dword ptr [g_00e10618] }
}

extern "C" void fn_00403160();
extern "C" void fn_0068dd40();
extern "C" void fn_0068f7f0();
extern "C" void fn_0068fa70();
// FUNCTION: ROBLOXSTUDIO 0x0068e710
extern "C" __declspec(naked) void asm_0068e710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd13838 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x60 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00403160 }
	__asm { test esi, esi }
	__asm { je L_0068e73e }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { L_0068e73e: }
	__asm { push 0x100 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { call fn_0068f7f0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0068dd40 }
	__asm { test al, al }
	__asm { je L_0068e7a6 }
	__asm { add dword ptr [esi + 0x1c], -0x10 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { jmp L_0068e7b8 }
	__asm { L_0068e7a6: }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { L_0068e7b8: }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { call fn_0068fa70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004037f0();
extern "C" void fn_0042e3d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0068eca0
extern "C" __declspec(naked) void asm_0068eca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13850 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { sub ecx, eax }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp edi, ecx }
	__asm { ja L_0068ecfe }
	__asm { cmp dword ptr [esi + 0x14], ecx }
	__asm { je L_0068ecfe }
	__asm { push 1 }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_004037f0 }
	__asm { test al, al }
	__asm { je L_0068ecfb }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { jb L_0068ecf5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0068ecf7 }
	__asm { L_0068ecf5: }
	__asm { mov eax, esi }
	__asm { L_0068ecf7: }
	__asm { mov byte ptr [eax + edi], 0 }
	__asm { L_0068ecfb: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_0068ecfe: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_0068ed05: }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { je L_0068ed4d }
	__asm { movzx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0042e3d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_0068ed05 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0068ed33 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068ed33: }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0068ed4d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00412d40();
extern "C" void fn_0068f450();
extern "C" void fn_0068f930();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0068ed60
extern "C" __declspec(naked) void asm_0068ed60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13878 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0068f930 }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0068f930 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0068f450 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0068edf4 }
	__asm { test al, 1 }
	__asm { jne L_0068eded }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0068eded }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0068eded: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_0068edf4: }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0068ee1b }
	__asm { test al, 1 }
	__asm { jne L_0068ee1b }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0068ee1b }
	__asm { lea ecx, [ebp + 0x50] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0068ee1b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x80 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00412d40 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_00833c40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068f1f0
extern "C" __declspec(naked) void asm_0068f1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ab10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, 0xe3f0ac }
	__asm { mov ecx, esi }
	__asm { call fn_00833c40 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_0068f299 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068f299: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { jb L_0068f2b3 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068f2b3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00403540();
extern "C" void fn_0068f9b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068f2d0
extern "C" __declspec(naked) void asm_0068f2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd138e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { call fn_0068f9b0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_0068f35f }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068f35f: }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { jb L_0068f3af }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068f3af: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 0x30], 0xf }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov byte ptr [ebp - 0x44], 0 }
	__asm { jb L_0068f3d2 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068f3d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0068efd0();
extern "C" void fn_0068f930();
// FUNCTION: ROBLOXSTUDIO 0x0068f450
extern "C" __declspec(naked) void asm_0068f450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { sub edx, dword ptr [edi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 2 }
	__asm { sub esp, 0x40 }
	__asm { mov esi, edx }
	__asm { lea eax, [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ecx, esp }
	__asm { shr esi, 0x1f }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { add esi, edx }
	__asm { call fn_0068f930 }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0068f930 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0068efd0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [esi + esi*2] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [eax + ecx*8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0068f4f8 }
	__asm { test al, 1 }
	__asm { jne L_0068f4f1 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0068f4f1 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0068f4f1: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_0068f4f8: }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0068f51f }
	__asm { test al, 1 }
	__asm { jne L_0068f51f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0068f51f }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0068f51f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x88 }
}

// FUNCTION: ROBLOXSTUDIO 0x0068f930
extern "C" __declspec(naked) void asm_0068f930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_0068f987 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_0068f973 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { jmp L_0068f987 }
	__asm { L_0068f973: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0068f987: }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov al, byte ptr [edi + 0x30] }
	__asm { mov byte ptr [esi + 0x30], al }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0068fdb0
extern "C" __declspec(naked) void asm_0068fdb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { cmp ebx, 0x7f }
	__asm { ja L_0068fdc6 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { inc eax }
	__asm { mov byte ptr [eax - 1], bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0068fdc6: }
	__asm { mov ecx, ebx }
	__asm { shr ecx, 6 }
	__asm { cmp ebx, 0x7ff }
	__asm { ja L_0068fdea }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { and bl, 0x3f }
	__asm { or cl, 0xc0 }
	__asm { or bl, 0x80 }
	__asm { mov byte ptr [eax], cl }
	__asm { mov byte ptr [eax + 1], bl }
	__asm { add eax, 2 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0068fdea: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { and cl, 0x3f }
	__asm { or cl, 0x80 }
	__asm { mov eax, ebx }
	__asm { cmp ebx, 0xffff }
	__asm { ja L_0068fe16 }
	__asm { shr eax, 0xc }
	__asm { or al, 0xe0 }
	__asm { and bl, 0x3f }
	__asm { mov byte ptr [edx], al }
	__asm { or bl, 0x80 }
	__asm { mov byte ptr [edx + 1], cl }
	__asm { mov byte ptr [edx + 2], bl }
	__asm { lea eax, [edx + 3] }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0068fe16: }
	__asm { shr eax, 0x12 }
	__asm { or al, 0xf0 }
	__asm { mov byte ptr [edx], al }
	__asm { mov eax, ebx }
	__asm { shr eax, 0xc }
	__asm { and al, 0x3f }
	__asm { or al, 0x80 }
	__asm { and bl, 0x3f }
	__asm { mov byte ptr [edx + 1], al }
	__asm { or bl, 0x80 }
	__asm { mov byte ptr [edx + 2], cl }
	__asm { mov byte ptr [edx + 3], bl }
	__asm { lea eax, [edx + 4] }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x0068fe40
extern "C" __declspec(naked) void asm_0068fe40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { shl eax, 4 }
	__asm { sub dword ptr [ecx + 0x1c], eax }
	__asm { mov edx, dword ptr [ecx + 0x1c] }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [edi - 4], 4 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { lea ebx, [eax + 3] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { and ebx, 0xfffffffc }
	__asm { add eax, ebx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jbe L_0068fea6 }
	__asm { cmp dword ptr [edx + 4], ebx }
	__asm { push esi }
	__asm { mov esi, ebx }
	__asm { cmova esi, dword ptr [edx + 4] }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [edx], eax }
	__asm { pop esi }
	__asm { L_0068fea6: }
	__asm { mov ecx, dword ptr [edx] }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { lea edx, [ecx + 0xc] }
	__asm { add edx, eax }
	__asm { add eax, ebx }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { push edx }
	__asm { mov dword ptr [edi - 0x10], edx }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi - 8], eax }
	__asm { mov dword ptr [edi - 0xc], eax }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x0068fee0
extern "C" __declspec(naked) void asm_0068fee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { shl eax, 5 }
	__asm { sub dword ptr [ecx + 0x1c], eax }
	__asm { mov edx, dword ptr [ecx + 0x1c] }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [edi - 4], 3 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { lea ebx, [eax + 3] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { and ebx, 0xfffffffc }
	__asm { add eax, ebx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jbe L_0068ff46 }
	__asm { cmp dword ptr [edx + 4], ebx }
	__asm { push esi }
	__asm { mov esi, ebx }
	__asm { cmova esi, dword ptr [edx + 4] }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [edx], eax }
	__asm { pop esi }
	__asm { L_0068ff46: }
	__asm { mov ecx, dword ptr [edx] }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { lea edx, [ecx + 0xc] }
	__asm { add edx, eax }
	__asm { add eax, ebx }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { push edx }
	__asm { mov dword ptr [edi - 0x10], edx }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi - 8], eax }
	__asm { mov dword ptr [edi - 0xc], eax }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00690120();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x006901e0
extern "C" __declspec(naked) void asm_006901e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { jne L_00690242 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { add ebx, 3 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { and ebx, 0xfffffffc }
	__asm { add eax, ebx }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jbe L_0069022b }
	__asm { cmp dword ptr [edi + 4], ebx }
	__asm { mov esi, ebx }
	__asm { cmova esi, dword ptr [edi + 4] }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov dword ptr [edi], ecx }
	__asm { L_0069022b: }
	__asm { mov edx, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { pop esi }
	__asm { lea ecx, [eax + 0xc] }
	__asm { add eax, ebx }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { lea eax, [ecx + edx] }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00690242: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { cmp ebx, edx }
	__asm { jae L_00690270 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { sub eax, ebx }
	__asm { add eax, 0xc }
	__asm { add eax, ecx }
	__asm { cmp esi, eax }
	__asm { jne L_00690279 }
	__asm { mov eax, edx }
	__asm { sub eax, ebx }
	__asm { add eax, 3 }
	__asm { and eax, 0xfffffffc }
	__asm { add eax, dword ptr [ecx + 4] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { ja L_00690279 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00690270: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00690279: }
	__asm { push edx }
	__asm { mov ecx, edi }
	__asm { call fn_00690120 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_006901e0();
// FUNCTION: ROBLOXSTUDIO 0x00690380
extern "C" __declspec(naked) void asm_00690380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp eax, dword ptr [edi + 0x20] }
	__asm { jb L_006903c2 }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov edx, dword ptr [edi + 0x24] }
	__asm { sub ebx, ecx }
	__asm { lea esi, [edx + edx] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { cmp esi, eax }
	__asm { cmovb esi, eax }
	__asm { push esi }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { call fn_006901e0 }
	__asm { lea ecx, [eax + ebx] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { add eax, esi }
	__asm { mov dword ptr [edi + 0x24], esi }
	__asm { mov dword ptr [edi + 0x1c], ecx }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { L_006903c2: }
	__asm { mov edx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [edx + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { test edx, edx }
	__asm { je L_00690414 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { and ecx, 0x80000000 }
	__asm { xor eax, eax }
	__asm { or eax, ecx }
	__asm { mov dword ptr [edx + 0xc], 0x2206 }
	__asm { mov dword ptr [edx], esi }
	__asm { mov dword ptr [edx + 4], edi }
	__asm { jne L_006903f6 }
	__asm { mov dword ptr [edx + 0xc], 0x3206 }
	__asm { L_006903f6: }
	__asm { xor eax, eax }
	__asm { or eax, edi }
	__asm { jne L_00690403 }
	__asm { or dword ptr [edx + 0xc], 0x800 }
	__asm { L_00690403: }
	__asm { and esi, 0x80000000 }
	__asm { or esi, edi }
	__asm { jne L_00690414 }
	__asm { or dword ptr [edx + 0xc], 0x400 }
	__asm { L_00690414: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x006904a0
extern "C" __declspec(naked) void asm_006904a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebx + 0x24], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_006904fd }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_006904f0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_006904f0: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_00690508 }
	__asm { L_006904fd: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00690508: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_0069051e }
	__asm { add ecx, -0x20 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0069051e: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00690610
extern "C" __declspec(naked) void asm_00690610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { je L_00690625 }
	__asm { cmp byte ptr [ebx + 0x30], 0 }
	__asm { jne L_00690625 }
	__asm { xor cl, cl }
	__asm { jmp L_00690627 }
	__asm { L_00690625: }
	__asm { mov cl, 1 }
	__asm { L_00690627: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [edx], 0 }
	__asm { je L_00690639 }
	__asm { cmp byte ptr [edx + 0x30], 0 }
	__asm { jne L_00690639 }
	__asm { xor ch, ch }
	__asm { jmp L_0069063b }
	__asm { L_00690639: }
	__asm { mov ch, 1 }
	__asm { L_0069063b: }
	__asm { test cl, cl }
	__asm { jne L_00690692 }
	__asm { test ch, ch }
	__asm { jne L_00690692 }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { mov ecx, dword ptr [ebx + 0x24] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx + 0x24] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0x20] }
	__asm { mov edx, ecx }
	__asm { sub esi, eax }
	__asm { sub edx, edi }
	__asm { cmp edx, esi }
	__asm { jne L_00690689 }
	__asm { cmp edi, ecx }
	__asm { je L_0069066d }
	__asm { sub eax, edi }
	__asm { L_00690661: }
	__asm { mov dl, byte ptr [edi] }
	__asm { cmp dl, byte ptr [eax + edi] }
	__asm { jne L_00690689 }
	__asm { inc edi }
	__asm { cmp edi, ecx }
	__asm { jne L_00690661 }
	__asm { L_0069066d: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { cmp eax, dword ptr [ecx + 0x28] }
	__asm { jne L_00690689 }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { cmp eax, dword ptr [ecx + 0x2c] }
	__asm { jne L_00690689 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00690689: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00690692: }
	__asm { xor eax, eax }
	__asm { cmp cl, ch }
	__asm { sete al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403110();
extern "C" void fn_006939a0();
extern "C" void fn_00693c80();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00693190
extern "C" __declspec(naked) void asm_00693190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13c5e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_006931ed }
	__asm { sub eax, 4 }
	__asm { L_006931ed: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { push 0xc4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_0069323b }
	__asm { push 8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006939a0 }
	__asm { jmp L_0069323d }
	__asm { L_0069323b: }
	__asm { xor edi, edi }
	__asm { L_0069323d: }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], edi }
	__asm { test ebx, ebx }
	__asm { je L_00693259 }
	__asm { mov ecx, ebx }
	__asm { call fn_00693c80 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00693259: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de4b8[];
extern "C" void fn_00696010();
// FUNCTION: ROBLOXSTUDIO 0x00693540
extern "C" __declspec(naked) void asm_00693540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { je L_00693569 }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { test eax, eax }
	__asm { je L_00693569 }
	__asm { add eax, -4 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_00693570 }
	__asm { L_00693569: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00693570: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { lea esi, [ebp - 4] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_0069359a }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { nop }
	__asm { L_00693580: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { push edi }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { test esi, esi }
	__asm { je L_00693597 }
	__asm { add esi, -4 }
	__asm { jne L_00693580 }
	__asm { L_00693597: }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { L_0069359a: }
	__asm { mov edx, dword ptr [g_012de4b8] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { inc edx }
	__asm { mov dword ptr [g_012de4b8], edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x28], 0xe3f870 }
	__asm { mov dword ptr [ebp - 0x20], ebx }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { call fn_00696010 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00695f20();
extern "C" void fn_00b5cbf0();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x006939a0
extern "C" __declspec(naked) void asm_006939a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13ce0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x665970 }
	__asm { push 0x478c90 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 4 }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { push 0xc }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { call fn_00cf676b }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { call fn_00b5cbf0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x90], 0x30 }
	__asm { mov dword ptr [esi + 0x94], 0x20 }
	__asm { mov dword ptr [esi + 0x98], 0x20 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0xa4], 0 }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { mov dword ptr [esi + 0xac], 0 }
	__asm { mov dword ptr [esi + 0xb0], 0x20 }
	__asm { mov dword ptr [esi + 0xb4], 0x20 }
	__asm { mov dword ptr [esi + 0xb8], 0x20 }
	__asm { mov dword ptr [esi + 0xbc], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00695f20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de4e0[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x00693bb0
extern "C" __declspec(naked) void asm_00693bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47d08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { mov word ptr [esi], di }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { cmp byte ptr [g_012de4e0], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00693c31 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 0x10], 0x12de4dc }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 0x10], 0x695bc0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_012de4e0], 1 }
	__asm { L_00693c31: }
	__asm { mov ecx, 0xffff }
	__asm { movzx eax, cx }
	__asm { mov word ptr [esi], di }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 4], 0xffffffff }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { shl eax, 0x10 }
	__asm { or ecx, eax }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov dword ptr [esi + 0x1c], ecx }
	__asm { mov dword ptr [esi + 0x20], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00694040
extern "C" __declspec(naked) void asm_00694040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47ce8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_006940f4 }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { je L_006940af }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0069409a }
	__asm { push 0x117 }
	__asm { push 0xe3f7a0 }
	__asm { push 0xe3f88c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006940af }
	__asm { L_0069409a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3f8a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006940af: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006940f4 }
	__asm { cmp dword ptr [esi + 0x2c], 0 }
	__asm { je L_006940f4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006940df }
	__asm { push 0x118 }
	__asm { push 0xe3f7a0 }
	__asm { push 0xe3f91c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006940f4 }
	__asm { L_006940df: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3f930 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006940f4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0xfffffffe }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov word ptr [esi], ax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00693bb0();
extern "C" void fn_00694190();
// FUNCTION: ROBLOXSTUDIO 0x00694850
extern "C" __declspec(naked) void asm_00694850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13d1b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov ebx, ecx }
	__asm { call fn_00694190 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00694891 }
	__asm { mov ecx, eax }
	__asm { call fn_00693bb0 }
	__asm { mov edi, eax }
	__asm { jmp L_00694893 }
	__asm { L_00694891: }
	__asm { xor edi, edi }
	__asm { L_00694893: }
	__asm { inc dword ptr [ebx + 0x24] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov word ptr [edi], dx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea eax, [edx + 4] }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea ecx, [ebx + eax*4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + esi*8 + 4] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax + esi*8 + 4], edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a08c70();
// FUNCTION: ROBLOXSTUDIO 0x00694a90
extern "C" __declspec(naked) void asm_00694a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { je L_00694ae2 }
	__asm { cmp dword ptr [edi + 0x30], -1 }
	__asm { jge L_00694ae2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00694aca }
	__asm { push 0x37 }
	__asm { push 0xe3f6b0 }
	__asm { push 0xe3f704 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00694adf }
	__asm { L_00694aca: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3f720 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00694adf: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { L_00694ae2: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ebx, dword ptr [edi + 0x30] }
	__asm { je L_00694b3f }
	__asm { lea eax, [ebx + ebx*2] }
	__asm { mov edx, dword ptr [ecx + eax*4 + 0x34] }
	__asm { sub edx, dword ptr [ecx + eax*4 + 0x30] }
	__asm { mov eax, 0x10000 }
	__asm { mov ecx, ebx }
	__asm { sar eax, cl }
	__asm { sar edx, 3 }
	__asm { cmp eax, edx }
	__asm { je L_00694b3f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00694b2a }
	__asm { push 0xe9 }
	__asm { push 0xe3f9a0 }
	__asm { push 0xe400fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00694b3f }
	__asm { L_00694b2a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe40138 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00694b3f: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00a08c70 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { lea ecx, [ebx + ebx*2] }
	__asm { add esp, 8 }
	__asm { mov eax, dword ptr [eax + ecx*4 + 0x30] }
	__asm { mov eax, dword ptr [eax + edx*8] }
	__asm { test eax, eax }
	__asm { jne L_00694b68 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00694b68: }
	__asm { cmp dword ptr [eax + 0x14], edi }
	__asm { jne L_00694b84 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { cmp ecx, dword ptr [esi] }
	__asm { jne L_00694b84 }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { cmp ecx, dword ptr [esi + 4] }
	__asm { jne L_00694b84 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { je L_00694b8b }
	__asm { L_00694b84: }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { test eax, eax }
	__asm { jne L_00694b68 }
	__asm { L_00694b8b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00694ba0
extern "C" __declspec(naked) void asm_00694ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { je L_00694c2b }
	__asm { cmp word ptr [esi], -1 }
	__asm { jge L_00694bef }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00694bda }
	__asm { push 0x2b }
	__asm { push 0xe3f7a0 }
	__asm { push 0xe3f7f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00694bef }
	__asm { L_00694bda: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3f800 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00694bef: }
	__asm { cmp word ptr [esi], 0 }
	__asm { je L_00694c2b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00694c16 }
	__asm { push 0x111 }
	__asm { push 0xe3f9a0 }
	__asm { push 0xe40014 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00694c2b }
	__asm { L_00694c16: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe40030 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00694c2b: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [eax + 0x30] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [eax + ecx*8] }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { mov ebx, dword ptr [esi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00694c5a }
	__asm { L_00694c44: }
	__asm { cmp dword ptr [eax + 8], edx }
	__asm { jne L_00694c53 }
	__asm { cmp dword ptr [eax + 0xc], edi }
	__asm { jne L_00694c53 }
	__asm { cmp dword ptr [eax + 0x10], ebx }
	__asm { je L_00694c65 }
	__asm { L_00694c53: }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { test eax, eax }
	__asm { jne L_00694c44 }
	__asm { L_00694c5a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00694c65: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00695010
extern "C" __declspec(naked) void asm_00695010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { je L_0069509b }
	__asm { cmp dword ptr [edi + 0x30], -1 }
	__asm { jge L_0069505d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00695048 }
	__asm { push 0x37 }
	__asm { push 0xe3f6b0 }
	__asm { push 0xe3f704 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0069505d }
	__asm { L_00695048: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe3f720 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0069505d: }
	__asm { movsx eax, word ptr [esi] }
	__asm { cmp eax, dword ptr [edi + 0x30] }
	__asm { je L_0069509b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00695086 }
	__asm { push 0xcb }
	__asm { push 0xe3f9a0 }
	__asm { push 0xe401d4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0069509b }
	__asm { L_00695086: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe40200 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0069509b: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00693b00();
extern "C" void fn_00694120();
extern "C" void fn_00694850();
extern "C" void fn_00694c70();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006951e0
extern "C" __declspec(naked) void asm_006951e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13d3b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x20 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { call fn_00694120 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00695233 }
	__asm { push ebx }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00693b00 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { jmp L_00695235 }
	__asm { L_00695233: }
	__asm { xor esi, esi }
	__asm { L_00695235: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { jne L_00695245 }
	__asm { mov dword ptr [esi + 0x1c], edi }
	__asm { jmp L_006952b6 }
	__asm { L_00695245: }
	__asm { push ebx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push edi }
	__asm { call fn_00694c70 }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { test eax, eax }
	__asm { jne L_00695267 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_00694850 }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { L_00695267: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { inc dword ptr [eax + 0x28] }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_006952b6 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { movsx eax, word ptr [eax] }
	__asm { cmp edi, eax }
	__asm { je L_006952b6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006952a5 }
	__asm { push 0x71 }
	__asm { push 0xe3f9a0 }
	__asm { push 0xe3fd48 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006952b6 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_006952a5: }
	__asm { movzx eax, cl }
	__asm { push 0xe3fd70 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006952b6: }
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

extern "C" void fn_00619bb0();
extern "C" void fn_00694df0();
extern "C" void fn_006955e0();
// FUNCTION: ROBLOXSTUDIO 0x006952d0
extern "C" __declspec(naked) void asm_006952d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push ebx }
	__asm { call fn_006955e0 }
	__asm { mov eax, dword ptr [edi + 0x78] }
	__asm { cmp eax, dword ptr [edi + 0x7c] }
	__asm { je L_00695363 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_00619bb0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_00619bb0 }
	__asm { lea ecx, [ebx + 0x18] }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { call fn_00694df0 }
	__asm { mov ecx, dword ptr [edi + 0x78] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebx + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { sub eax, ecx }
	__asm { sar eax, 2 }
	__asm { xor esi, esi }
	__asm { test eax, eax }
	__asm { je L_00695362 }
	__asm { L_00695346: }
	__asm { mov ecx, dword ptr [ecx + esi*4] }
	__asm { lea edx, [ebp - 0x3c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ecx, dword ptr [edi + 0x78] }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { sub eax, ecx }
	__asm { inc esi }
	__asm { sar eax, 2 }
	__asm { cmp esi, eax }
	__asm { jb L_00695346 }
	__asm { L_00695362: }
	__asm { pop esi }
	__asm { L_00695363: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00665970();
extern "C" void fn_0068a300();
extern "C" void fn_00694a20();
extern "C" void fn_00c74ab0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00695e50
extern "C" __declspec(naked) void asm_00695e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13d50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, edx }
	__asm { sub ecx, eax }
	__asm { sar ecx, 3 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp ecx, edi }
	__asm { jbe L_00695eac }
	__asm { lea eax, [eax + edi*8] }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00694a20 }
	__asm { L_00695e99: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00695eac: }
	__asm { jae L_00695e99 }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0068a300 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, dword ptr [esi] }
	__asm { mov ecx, edi }
	__asm { sar eax, 3 }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c74ab0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, ecx }
	__asm { sub eax, dword ptr [esi] }
	__asm { add esp, 0x14 }
	__asm { sar eax, 3 }
	__asm { sub edi, eax }
	__asm { lea eax, [ecx + edi*8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00665970 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00695f60
extern "C" __declspec(naked) void asm_00695f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add edx, 0xc }
	__asm { add ecx, 0xc }
	__asm { push ebx }
	__asm { lea eax, [edx + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea esi, [ecx + 4] }
	__asm { lea edi, [edx + 4] }
	__asm { cmovl edx, ecx }
	__asm { lea ebx, [ecx + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { cmovl edi, esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [ebx] }
	__asm { lea edi, [esi + 8] }
	__asm { cmovl ecx, ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { lea ebx, [eax + 8] }
	__asm { lea edx, [eax + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmovl eax, esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmovl edx, ecx }
	__asm { cmp eax, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [edx] }
	__asm { cmovl ebx, edi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 0x14], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0060f370();
extern "C" void fn_0060f3d0();
extern "C" void fn_00697f10();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006972c0
extern "C" __declspec(naked) void asm_006972c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd13e3f }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00697326 }
	__asm { cmp dword ptr [edi + 0x38], 0 }
	__asm { jne L_00697326 }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00697315 }
	__asm { push 0xae }
	__asm { push 0xe40a40 }
	__asm { push 0xe40b0c }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00697326 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00697315: }
	__asm { movzx eax, al }
	__asm { push 0xe40cc0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00697326: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xe40d2c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0060f370 }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov edx, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { push 0xe40c88 }
	__asm { push 0xe40cac }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00697f10 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f3d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006866c0();
extern "C" void fn_008a2fb0();
// FUNCTION: ROBLOXSTUDIO 0x00698710
extern "C" __declspec(naked) void asm_00698710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [ebx + 0x14] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { lea edi, [ebx + 0x10] }
	__asm { cmp eax, edx }
	__asm { je L_00698755 }
	__asm { L_00698728: }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00698735 }
	__asm { add eax, 4 }
	__asm { cmp eax, edx }
	__asm { jne L_00698728 }
	__asm { jmp L_00698755 }
	__asm { L_00698735: }
	__asm { cmp eax, edx }
	__asm { je L_00698755 }
	__asm { lea ecx, [eax + 4] }
	__asm { cmp ecx, edx }
	__asm { je L_00698755 }
	__asm { L_00698740: }
	__asm { mov edi, dword ptr [ecx] }
	__asm { cmp edi, esi }
	__asm { je L_0069874b }
	__asm { mov dword ptr [eax], edi }
	__asm { add eax, 4 }
	__asm { L_0069874b: }
	__asm { add ecx, 4 }
	__asm { cmp ecx, edx }
	__asm { jne L_00698740 }
	__asm { lea edi, [ebx + 0x10] }
	__asm { L_00698755: }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_008a2fb0 }
	__asm { cmp dword ptr [ebx + 0x1c], esi }
	__asm { jne L_0069876e }
	__asm { mov dword ptr [ebx + 0x1c], 0 }
	__asm { L_0069876e: }
	__asm { test esi, esi }
	__asm { je L_0069877a }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_0069877a: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jne L_0069878f }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { call fn_006866c0 }
	__asm { L_0069878f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0060f3f0();
extern "C" void fn_0069b530();
extern "C" void fn_0069da80();
extern "C" void fn_0069df40();
extern "C" void fn_006c54a0();
extern "C" void fn_00c679a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006989e0
extern "C" __declspec(naked) void asm_006989e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd140f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_0060f3f0 }
	__asm { mov dword ptr [edi], 0xe40dc8 }
	__asm { mov dword ptr [edi + 0x28], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { call fn_00c679a0 }
	__asm { mov dword ptr [edi + 0x3c], eax }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { lea eax, [edi + 0x88] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_006c54a0 }
	__asm { push dword ptr [ebx + 0x1c4] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_0069b530 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0x2c], ecx }
	__asm { mov dword ptr [edi + 0x30], edx }
	__asm { push 0x24 }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { test eax, eax }
	__asm { je L_00698b0e }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { call fn_0069da80 }
	__asm { jmp L_00698b10 }
	__asm { L_00698b0e: }
	__asm { xor eax, eax }
	__asm { L_00698b10: }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { test esi, esi }
	__asm { je L_00698b2e }
	__asm { mov ecx, esi }
	__asm { call fn_0069df40 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00698b2e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x0069b980
extern "C" __declspec(naked) void asm_0069b980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_0069ba01 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { lea edi, [ebx + 0x3c] }
	__asm { add esi, 0x3c }
	__asm { L_0069b997: }
	__asm { lea eax, [esi - 0x3c] }
	__asm { cmp ebx, eax }
	__asm { je L_0069b9ad }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi - 0x3c] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00403540 }
	__asm { L_0069b9ad: }
	__asm { mov eax, dword ptr [esi - 0x24] }
	__asm { mov dword ptr [edi - 0x24], eax }
	__asm { lea ecx, [esi - 0x20] }
	__asm { lea eax, [edi - 0x20] }
	__asm { cmp eax, ecx }
	__asm { je L_0069b9cd }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [edi - 0x20] }
	__asm { call fn_00403540 }
	__asm { L_0069b9cd: }
	__asm { fld dword ptr [esi - 4] }
	__asm { mov eax, dword ptr [esi - 8] }
	__asm { fstp dword ptr [edi - 4] }
	__asm { mov dword ptr [edi - 8], eax }
	__asm { fld dword ptr [esi] }
	__asm { add esi, 0x48 }
	__asm { fstp dword ptr [edi] }
	__asm { add ebx, 0x48 }
	__asm { fld dword ptr [esi - 0x44] }
	__asm { add edi, 0x48 }
	__asm { fstp dword ptr [edi - 0x44] }
	__asm { mov ecx, dword ptr [esi - 0x40] }
	__asm { mov dword ptr [edi - 0x40], ecx }
	__asm { lea ecx, [esi - 0x3c] }
	__asm { cmp ecx, dword ptr [ebp + 0xc] }
	__asm { jne L_0069b997 }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0069ba01: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0069d690();
extern "C" void fn_0069de90();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0069d2c0
extern "C" __declspec(naked) void asm_0069d2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd143b1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_0069d2f1: }
	__asm { test edi, edi }
	__asm { je L_0069d337 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0069d307 }
	__asm { mov ecx, esi }
	__asm { call fn_0069d690 }
	__asm { L_0069d307: }
	__asm { dec edi }
	__asm { add esi, 0x54 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { jmp L_0069d2f1 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp esi, edi }
	__asm { je L_0069d32e }
	__asm { mov edi, edi }
	__asm { L_0069d320: }
	__asm { mov ecx, esi }
	__asm { call fn_0069de90 }
	__asm { add esi, 0x54 }
	__asm { cmp esi, edi }
	__asm { jne L_0069d320 }
	__asm { L_0069d32e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0069d337: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_007cb440();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0069d690
extern "C" __declspec(naked) void asm_0069d690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14418 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x34], 0xf }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov byte ptr [ebp - 0x48], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { mov dword ptr [edi + 0x30], 0xf }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov byte ptr [edi + 0x1c], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov dword ptr [edi + 0x38], 0x3f800000 }
	__asm { mov dword ptr [edi + 0x3c], 0x3f800000 }
	__asm { mov dword ptr [edi + 0x40], 0x3f800000 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { jb L_0069d77b }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0069d77b: }
	__asm { cmp dword ptr [ebp - 0x34], 0x10 }
	__asm { jb L_0069d78c }
	__asm { push dword ptr [ebp - 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0069d78c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_0069ba10();
extern "C" void fn_0069d350();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0069e660
extern "C" __declspec(naked) void asm_0069e660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14520 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_0069e6b4 }
	__asm { cmp edi, 0x30c30c3 }
	__asm { ja L_0069e6ae }
	__asm { mov eax, edi }
	__asm { imul eax, eax, 0x54 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_0069e6b4 }
	__asm { L_0069e6ae: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0069e6b4: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_0069d350 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x30c30c31 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0069e712 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_0069ba10 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_0069e712: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { imul edi, edi, 0x54 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { imul eax, eax, 0x54 }
	__asm { add edi, esi }
	__asm { mov dword ptr [ebx + 8], edi }
	__asm { mov dword ptr [ebx], esi }
	__asm { pop edi }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_0069e660();
// FUNCTION: ROBLOXSTUDIO 0x0069e760
extern "C" __declspec(naked) void asm_0069e760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x30c30c31 }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_0069e7fb }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x30c30c31 }
	__asm { imul esi }
	__asm { sar edx, 4 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x30c30c3 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_0069e7b1 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0069e7b1: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x30c30c31 }
	__asm { imul ebx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x30c30c3 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_0069e7e8 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_0069e660 }
	__asm { L_0069e7e8: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_0069e660 }
	__asm { L_0069e7fb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0069ba10();
extern "C" void fn_0069c670();
// FUNCTION: ROBLOXSTUDIO 0x0069ece0
extern "C" __declspec(naked) void asm_0069ece0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_0069ed24 }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { jne L_0069ed24 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_0069ba10 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0069ed24: }
	__asm { cmp eax, edx }
	__asm { je L_0069ed5e }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_0069c670 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_0069ba10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x20 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0069ed5e: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_00623750();
// FUNCTION: ROBLOXSTUDIO 0x0069ed70
extern "C" __declspec(naked) void asm_0069ed70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_0069edb4 }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { jne L_0069edb4 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_0041fe80 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0069edb4: }
	__asm { cmp eax, edx }
	__asm { je L_0069edee }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_00623750 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_0041fe80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x20 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0069edee: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0069d2c0();
extern "C" void fn_0069dcb0();
extern "C" void fn_0069e760();
extern "C" void fn_0069ece0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0069f530
extern "C" __declspec(naked) void asm_0069f530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd145c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov edx, edi }
	__asm { sub edx, dword ptr [ebx] }
	__asm { mov eax, 0x30c30c31 }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp ecx, esi }
	__asm { jbe L_0069f59a }
	__asm { imul esi, esi, 0x54 }
	__asm { add esi, dword ptr [ebx] }
	__asm { push edi }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0069ece0 }
	__asm { L_0069f587: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0069f59a: }
	__asm { jae L_0069f587 }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0069e760 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x30c30c31 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov ecx, esi }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0069d2c0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x30c30c31 }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { sub esi, eax }
	__asm { imul esi, esi, 0x54 }
	__asm { add esp, 0x14 }
	__asm { add dword ptr [ebx + 4], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_0069dcb0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0069f3b0();
// FUNCTION: ROBLOXSTUDIO 0x0069f630
extern "C" __declspec(naked) void asm_0069f630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov eax, 0x30c30c31 }
	__asm { mov edx, dword ptr [ebx + 0x10] }
	__asm { sub edx, dword ptr [ebx + 0xc] }
	__asm { push edi }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { xor edi, edi }
	__asm { shr eax, 0x1f }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { add eax, edx }
	__asm { je L_0069f6b8 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push esi }
	__asm { mov edi, edi }
	__asm { L_0069f660: }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { add esi, ecx }
	__asm { cmp dword ptr [esi + 0x48], 0 }
	__asm { jne L_0069f67e }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_0069f3b0 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { test eax, eax }
	__asm { je L_0069f68c }
	__asm { L_0069f67e: }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { test eax, eax }
	__asm { je L_0069f68b }
	__asm { cmp dword ptr [eax + 8], 1 }
	__asm { je L_0069f68c }
	__asm { L_0069f68b: }
	__asm { inc edi }
	__asm { L_0069f68c: }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { add ecx, 0x54 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { sub ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, 0x30c30c31 }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { inc esi }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { cmp esi, eax }
	__asm { jb L_0069f660 }
	__asm { pop esi }
	__asm { L_0069f6b8: }
	__asm { mov dword ptr [ebx + 0x1c], edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006a0f50();
extern "C" void fn_006a1280();
// FUNCTION: ROBLOXSTUDIO 0x006a0310
extern "C" __declspec(naked) void asm_006a0310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { cmp esi, dword ptr [edi + 0x80] }
	__asm { lea ebx, [edi + 0x80] }
	__asm { cmovb eax, ebx }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { lea edx, [ebp - 8] }
	__asm { add ecx, 8 }
	__asm { cmp ecx, esi }
	__asm { lea eax, [ebp - 4] }
	__asm { cmovae eax, edx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, edi }
	__asm { call fn_006a0f50 }
	__asm { mov ecx, dword ptr [edi + 0x74] }
	__asm { add ecx, dword ptr [edi + 0x6c] }
	__asm { mov edx, dword ptr [edi + 0xa0] }
	__asm { cmp ecx, edx }
	__asm { jbe L_006a037a }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_006a1280 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx], eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a037a: }
	__asm { mov eax, edx }
	__asm { shr eax, 2 }
	__asm { sub edx, ecx }
	__asm { cmp eax, 0x4000000 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov ecx, 0xe41544 }
	__asm { lea esi, [ebp - 8] }
	__asm { cmovbe ecx, esi }
	__asm { lea eax, [ebp - 4] }
	__asm { cmp dword ptr [ecx], edx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { cmovb eax, ecx }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { push eax }
	__asm { call fn_006a1280 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx], eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006a4180();
extern "C" void fn_006a6650();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006a09c0
extern "C" __declspec(naked) void asm_006a09c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_006a0a15 }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { test eax, eax }
	__asm { je L_006a09e2 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp eax, 1 }
	__asm { je L_006a0a15 }
	__asm { L_006a09e2: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006a0a00 }
	__asm { push 0x62 }
	__asm { push 0xe415c8 }
	__asm { push 0xe41614 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a0a15 }
	__asm { L_006a0a00: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe41628 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a0a15: }
	__asm { mov esi, dword ptr [edi + 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push dword ptr [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_006a4180 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_006a6650 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006a1460
extern "C" __declspec(naked) void asm_006a1460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_006a14bd }
	__asm { cmp byte ptr [esi + 0x30], 0 }
	__asm { jne L_006a1485 }
	__asm { cmp dword ptr [esi + 0x34], 0 }
	__asm { jne L_006a1485 }
	__asm { cmp dword ptr [esi + 0x38], 0 }
	__asm { je L_006a14bd }
	__asm { L_006a1485: }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006a14ac }
	__asm { push 0x1b5 }
	__asm { push 0xe415c8 }
	__asm { push 0xe41e78 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a14bd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006a14ac: }
	__asm { movzx eax, al }
	__asm { push 0xe41eb8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a14bd: }
	__asm { mov byte ptr [esi + 0x30], 1 }
	__asm { cmp dword ptr [edi + 0x78], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { je L_006a1523 }
	__asm { test al, al }
	__asm { je L_006a150e }
	__asm { cmp dword ptr [edi + 0x7c], 0 }
	__asm { jne L_006a150e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006a14fd }
	__asm { push 0x1bb }
	__asm { push 0xe415c8 }
	__asm { push 0xe41f54 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a150e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006a14fd: }
	__asm { movzx eax, al }
	__asm { push 0xe41f68 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a150e: }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { mov dword ptr [eax + 0x38], esi }
	__asm { mov dword ptr [edi + 0x7c], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006a1523: }
	__asm { test al, al }
	__asm { je L_006a1565 }
	__asm { cmp dword ptr [edi + 0x7c], 0 }
	__asm { je L_006a1565 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006a1554 }
	__asm { push 0x1c3 }
	__asm { push 0xe415c8 }
	__asm { push 0xe41fd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a1565 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006a1554: }
	__asm { movzx eax, al }
	__asm { push 0xe41fe0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a1565: }
	__asm { mov dword ptr [edi + 0x78], esi }
	__asm { mov dword ptr [edi + 0x7c], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006a1580
extern "C" __declspec(naked) void asm_006a1580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_006a15cf }
	__asm { cmp byte ptr [esi + 0x30], 0 }
	__asm { jne L_006a15cf }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006a15ba }
	__asm { push 0x1cc }
	__asm { push 0xe415c8 }
	__asm { push 0xe4204c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a15cf }
	__asm { L_006a15ba: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe42060 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a15cf: }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { test ecx, ecx }
	__asm { je L_006a15de }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [ecx + 0x38], eax }
	__asm { jmp L_006a1628 }
	__asm { L_006a15de: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006a1622 }
	__asm { cmp dword ptr [edi + 0x78], esi }
	__asm { je L_006a1622 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006a160d }
	__asm { push 0x1d2 }
	__asm { push 0xe415c8 }
	__asm { push 0xe420cc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a1622 }
	__asm { L_006a160d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe420e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a1622: }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [edi + 0x78], eax }
	__asm { L_006a1628: }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_006a1637 }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [ecx + 0x34], eax }
	__asm { jmp L_006a1683 }
	__asm { L_006a1637: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_006a167d }
	__asm { cmp dword ptr [edi + 0x7c], esi }
	__asm { je L_006a167d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006a166c }
	__asm { push 0x1da }
	__asm { push 0xe415c8 }
	__asm { push 0xe42158 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a167d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006a166c: }
	__asm { movzx eax, al }
	__asm { push 0xe42170 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a167d: }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [edi + 0x7c], eax }
	__asm { L_006a1683: }
	__asm { pop edi }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e102d4[];
extern "C" char g_00e102e0[];
extern "C" char g_00e10318[];
extern "C" char g_00e1031c[];
extern "C" char g_00e1037c[];
extern "C" void fn_00426140();
extern "C" void fn_00426760();
extern "C" void fn_006a1e10();
// FUNCTION: ROBLOXSTUDIO 0x006a1ca0
extern "C" __declspec(naked) void asm_006a1ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14887 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xac }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 0xb8], 0x10065ec }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xa8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xb8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e1037c] }
	__asm { mov eax, dword ptr [ebp - 0xb8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xb8], 0xe1b728 }
	__asm { mov eax, dword ptr [ebp - 0xb8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x60] }
	__asm { mov dword ptr [ebp + ecx - 0xbc], eax }
	__asm { lea eax, [ebp - 0xa8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [ebp - 0xa8], 0xe1827c }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { jb L_006a1d5b }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_006a1d5b: }
	__asm { push 2 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { call fn_00426760 }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp - 0xb8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006a1e10 }
	__asm { mov eax, dword ptr [ebp - 0xb8] }
	__asm { add esp, 0x18 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + eax - 0xb8], 0xe1b728 }
	__asm { mov eax, dword ptr [ebp - 0xb8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x60] }
	__asm { mov dword ptr [ebp + ecx - 0xbc], eax }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { mov dword ptr [ebp - 0xa8], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebp - 0xa0] }
	__asm { call dword ptr [g_00e102e0] }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a32d0();
extern "C" void fn_006a4980();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a27d0
extern "C" __declspec(naked) void asm_006a27d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x50 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006a4980 }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov al, byte ptr [ebp + 0x54] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0x48], al }
	__asm { call fn_006a32d0 }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006a2843 }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a2843: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_006a27d0();
extern "C" void fn_006a4980();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a2880
extern "C" __declspec(naked) void asm_006a2880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x50 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006a4980 }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov al, byte ptr [ebp + 0x54] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0x48], al }
	__asm { call fn_006a27d0 }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006a28ef }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a28ef: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_006a3670();
extern "C" void fn_006a5160();
extern "C" void fn_006a5bd0();
// FUNCTION: ROBLOXSTUDIO 0x006a2a90
extern "C" __declspec(naked) void asm_006a2a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14aa0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x48], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006a5160 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 0x48] }
	__asm { sub esp, 0x38 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006a5160 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_006a3670 }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006a5bd0 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006a5bd0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_006a3730();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x006a2b40
extern "C" __declspec(naked) void asm_006a2b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00b25b30 }
	__asm { mov ecx, esi }
	__asm { call fn_006a3730 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_006a2bbb }
	__asm { test al, 1 }
	__asm { jne L_006a2bb4 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006a2bb4 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006a2bb4: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_006a2bbb: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006a2be2 }
	__asm { test al, 1 }
	__asm { jne L_006a2be2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006a2be2 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006a2be2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

// FUNCTION: ROBLOXSTUDIO 0x006a2e60
extern "C" __declspec(naked) void asm_006a2e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov esi, dword ptr [ecx] }
	__asm { test esi, esi }
	__asm { je L_006a2eb7 }
	__asm { mov dword ptr [edx], esi }
	__asm { test byte ptr [edx], 1 }
	__asm { je L_006a2ea3 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_006a2eb7 }
	__asm { L_006a2ea3: }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea eax, [ecx + 8] }
	__asm { and esi, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006a2eb7: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [ecx] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [edx] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0x2c }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_006a4980();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006a2f70
extern "C" __declspec(naked) void asm_006a2f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd149f3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { push 0x50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_006a2fcf }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [edi], ecx }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006a4980 }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [edi + 0x44], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [edi + 0x48], eax }
	__asm { mov al, byte ptr [ebp + 0x54] }
	__asm { mov byte ptr [edi + 0x4c], al }
	__asm { pop esi }
	__asm { jmp L_006a2fd1 }
	__asm { L_006a2fcf: }
	__asm { xor edi, edi }
	__asm { L_006a2fd1: }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { jb L_006a2fef }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a2fef: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" void fn_0040c260();
extern "C" void fn_006a2f70();
extern "C" void fn_006a4980();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a3160
extern "C" __declspec(naked) void asm_006a3160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_006a31d3 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x58] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006a4980 }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov al, byte ptr [ebp + 0x54] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0x48], al }
	__asm { call fn_006a2f70 }
	__asm { mov bl, 1 }
	__asm { jmp L_006a31d5 }
	__asm { L_006a31d3: }
	__asm { xor bl, bl }
	__asm { L_006a31d5: }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006a31ed }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a31ed: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x58 }
}

extern "C" void fn_006a3160();
extern "C" void fn_006a4980();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a3220
extern "C" __declspec(naked) void asm_006a3220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x58] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006a4980 }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov al, byte ptr [ebp + 0x54] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [esi + 0x48], al }
	__asm { call fn_006a3160 }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006a329a }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a329a: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_006a3220();
extern "C" void fn_006a4980();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a32d0
extern "C" __declspec(naked) void asm_006a32d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14988 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x50 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006a4980 }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov al, byte ptr [ebp + 0x54] }
	__asm { mov byte ptr [esi + 0x48], al }
	__asm { mov esi, 0xe4229c }
	__asm { mov ecx, esi }
	__asm { call fn_006a3220 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006a334f }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a334f: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x44], 0xf }
	__asm { mov dword ptr [ebp + 0x40], 0 }
	__asm { mov byte ptr [ebp + 0x30], 0 }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_0040c260();
extern "C" void fn_006a30e0();
extern "C" void fn_006a5160();
extern "C" void fn_006a5bd0();
// FUNCTION: ROBLOXSTUDIO 0x006a35d0
extern "C" __declspec(naked) void asm_006a35d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14a78 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_006a363d }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x40] }
	__asm { sub esp, 0x38 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006a5160 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_006a30e0 }
	__asm { mov bl, 1 }
	__asm { jmp L_006a363f }
	__asm { L_006a363d: }
	__asm { xor bl, bl }
	__asm { L_006a363f: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006a5bd0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_006a35d0();
extern "C" void fn_006a5160();
extern "C" void fn_006a5bd0();
// FUNCTION: ROBLOXSTUDIO 0x006a3670
extern "C" __declspec(naked) void asm_006a3670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14aa0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x48], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_006a5160 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 0x48] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x38 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006a5160 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov esi, 0xe422a4 }
	__asm { mov ecx, esi }
	__asm { call fn_006a35d0 }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006a5bd0 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006a5bd0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_00aec810();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x006a3730
extern "C" __declspec(naked) void asm_006a3730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00b25b30 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b25b30 }
	__asm { mov esi, 0xe422ac }
	__asm { mov ecx, esi }
	__asm { call fn_00aec810 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006a37ba }
	__asm { test cl, 1 }
	__asm { jne L_006a37b3 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_006a37b3 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006a37b3: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_006a37ba: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006a37ea }
	__asm { test al, 1 }
	__asm { jne L_006a37ea }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006a37ea }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006a37ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_006a4360();
extern "C" void fn_00af9300();
// FUNCTION: ROBLOXSTUDIO 0x006a3d40
extern "C" __declspec(naked) void asm_006a3d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14bd9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_006a3dbf }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_006a3da8 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_006a3dbf }
	__asm { L_006a3da8: }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x24] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006a3dbf: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_006a4360 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00af9300 }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_006a3e14 }
	__asm { test al, 1 }
	__asm { jne L_006a3e0d }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006a3e0d }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006a3e0d: }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { L_006a3e14: }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_006a3e38 }
	__asm { test al, 1 }
	__asm { jne L_006a3e38 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006a3e38 }
	__asm { lea ecx, [ebp + 0x24] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006a3e38: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_006a3e90();
extern "C" void fn_006a64b0();
// FUNCTION: ROBLOXSTUDIO 0x006a3f30
extern "C" __declspec(naked) void asm_006a3f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_006a64b0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006a3f9a }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_006a3f9a: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { movzx eax, byte ptr [eax] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call fn_006a3e90 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [edi + 9], 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
extern "C" void fn_006a2760();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a40e0
extern "C" __declspec(naked) void asm_006a40e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0xf }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { jae L_006a4126 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_006a4131 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push esi }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_006a4131 }
	__asm { L_006a4126: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_006a4131: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { call fn_006a2760 }
	__asm { cmp dword ptr [ebp - 0xc], 0x10 }
	__asm { jb L_006a4172 }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a4172: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1026c[];
extern "C" char g_00e102d4[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10354[];
extern "C" char g_00e1037c[];
extern "C" char g_0131ab88[];
extern "C" void fn_006a70e0();
// FUNCTION: ROBLOXSTUDIO 0x006a4260
extern "C" __declspec(naked) void asm_006a4260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14c7d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_006a42ab }
	__asm { lea ecx, [edi + 0x70] }
	__asm { mov dword ptr [edi], 0x1012b64 }
	__asm { call dword ptr [g_00e102d4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_006a42ab: }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea esi, [edi + 0x10] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e1037c] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0x14], esi }
	__asm { mov dword ptr [edi + eax], 0xe3ed74 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x70] }
	__asm { mov dword ptr [ecx + edi - 4], eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi], 0xe3addc }
	__asm { mov byte ptr [esi + 0x4c], 0 }
	__asm { mov byte ptr [esi + 0x45], 0 }
	__asm { call dword ptr [g_00e10354] }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov eax, dword ptr [g_0131ab88] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { or eax, 1 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006a70e0 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { jne L_006a4343 }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 2 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, edi }
	__asm { call dword ptr [g_00e1026c] }
	__asm { L_006a4343: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_006a4e20();
// FUNCTION: ROBLOXSTUDIO 0x006a4360
extern "C" __declspec(naked) void asm_006a4360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e578 }
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
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_006a43d8 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_006a43c1 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_006a43d8 }
	__asm { L_006a43c1: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006a43d8: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006a4e20 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006a440f }
	__asm { test al, 1 }
	__asm { jne L_006a440f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006a440f }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006a440f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

// FUNCTION: ROBLOXSTUDIO 0x006a4e20
extern "C" __declspec(naked) void asm_006a4e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1e578 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006a4e93 }
	__asm { mov dword ptr [esi], ecx }
	__asm { test cl, 1 }
	__asm { je L_006a4e7c }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { jmp L_006a4e93 }
	__asm { L_006a4e7c: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { add esp, 0xc }
	__asm { L_006a4e93: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_006a4eb8 }
	__asm { test cl, 1 }
	__asm { jne L_006a4eb8 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_006a4eb8 }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006a4eb8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_0053f180();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006a6230
extern "C" __declspec(naked) void asm_006a6230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14eb0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test ebx, ebx }
	__asm { je L_006a6286 }
	__asm { cmp ebx, 0x1fffffff }
	__asm { ja L_006a6280 }
	__asm { lea eax, [ebx*8] }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_006a6286 }
	__asm { L_006a6280: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006a6286: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_0053f180 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { test ecx, ecx }
	__asm { je L_006a62d6 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_006a62d6: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + ebx*8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_006a6230();
// FUNCTION: ROBLOXSTUDIO 0x006a6320
extern "C" __declspec(naked) void asm_006a6320()
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
	__asm { sar eax, 3 }
	__asm { cmp eax, edi }
	__asm { jae L_006a638d }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x1fffffff }
	__asm { sar esi, 3 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_006a6357 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006a6357: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_006a637b }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_006a6230 }
	__asm { L_006a637b: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_006a6230 }
	__asm { L_006a638d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006a5cb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a6570
extern "C" __declspec(naked) void asm_006a6570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12008 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { xor ebx, ebx }
	__asm { L_006a6594: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_006a659f }
	__asm { add esi, -0x58 }
	__asm { jmp L_006a65a1 }
	__asm { L_006a659f: }
	__asm { xor esi, esi }
	__asm { L_006a65a1: }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [edi], eax }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006a5cb0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006a65cf }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a65cf: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ebx }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_006a6594 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_00a843a0();
// FUNCTION: ROBLOXSTUDIO 0x006a6650
extern "C" __declspec(naked) void asm_006a6650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_006a6694 }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { jne L_006a6694 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_0041fe80 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006a6694: }
	__asm { cmp eax, edx }
	__asm { je L_006a66ce }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_00a843a0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_0041fe80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x20 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006a66ce: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_006a5cb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a66e0
extern "C" __declspec(naked) void asm_006a66e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12008 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor edx, edx }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { div dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { add esi, 0x58 }
	__asm { mov ebx, edx }
	__asm { mov edi, dword ptr [eax + ebx*4] }
	__asm { L_006a6715: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, esi }
	__asm { je L_006a6720 }
	__asm { mov edi, eax }
	__asm { jmp L_006a6715 }
	__asm { nop }
	__asm { L_006a6720: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_006a672b }
	__asm { add esi, -0x58 }
	__asm { jmp L_006a672d }
	__asm { L_006a672b: }
	__asm { xor esi, esi }
	__asm { L_006a672d: }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [edi], eax }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006a5cb0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006a675b }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a675b: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [ecx + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov edx, ebx }
	__asm { test eax, eax }
	__asm { je L_006a6795 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ecx + 4] }
	__asm { cmp ebx, edx }
	__asm { je L_006a67a4 }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [eax + edx*4], edi }
	__asm { L_006a6795: }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { cmp dword ptr [eax + ebx*4], edi }
	__asm { jne L_006a67a4 }
	__asm { mov dword ptr [eax + ebx*4], 0 }
	__asm { L_006a67a4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ebx, edx }
	__asm { test eax, eax }
	__asm { je L_006a67b2 }
	__asm { add eax, 0x58 }
	__asm { jmp L_006a67b4 }
	__asm { L_006a67b2: }
	__asm { xor eax, eax }
	__asm { L_006a67b4: }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_006a6720 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10354[];
extern "C" char g_00e10368[];
extern "C" char g_00e10378[];
extern "C" char g_00e103f8[];
extern "C" char g_0131ab88[];
extern "C" void fn_0042df00();
// FUNCTION: ROBLOXSTUDIO 0x006a70e0
extern "C" __declspec(naked) void asm_006a70e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd14ec8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x50], 0 }
	__asm { jne L_006a71cd }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e103f8] }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { test edi, edi }
	__asm { je L_006a71cd }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x4c], 1 }
	__asm { mov byte ptr [esi + 0x45], 0 }
	__asm { call dword ptr [g_00e10354] }
	__asm { lea ecx, [edi + 8] }
	__asm { lea eax, [edi + 4] }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov dword ptr [esi + 0x1c], edi }
	__asm { mov dword ptr [esi + 0x20], edi }
	__asm { mov dword ptr [esi + 0x50], edi }
	__asm { mov eax, dword ptr [g_0131ab88] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { call dword ptr [g_00e10378] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0042df00 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10368] }
	__asm { test al, al }
	__asm { je L_006a718f }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { jmp L_006a719a }
	__asm { L_006a718f: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x40], edi }
	__asm { call dword ptr [g_00e10354] }
	__asm { L_006a719a: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_006a71b9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_006a71b9 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_006a71b9: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006a71cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10338[];
extern "C" void fn_006a58e0();
extern "C" void fn_006a60b0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006a72b0
extern "C" __declspec(naked) void asm_006a72b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10338] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { ja L_006a72e6 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006a60b0 }
	__asm { L_006a72e6: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { dec ecx }
	__asm { and dword ptr [esi + 0xc], ecx }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edi, [ecx*4] }
	__asm { cmp dword ptr [edi + eax], 0 }
	__asm { jne L_006a7322 }
	__asm { push 0x38 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_006a731c }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006a731c: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + eax], ecx }
	__asm { L_006a7322: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edi + eax] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { pop edi }
	__asm { test ecx, ecx }
	__asm { je L_006a7342 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006a58e0 }
	__asm { L_006a7342: }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0057dce0();
extern "C" void fn_006a7b70();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006a7490
extern "C" __declspec(naked) void asm_006a7490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14ee8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_006a74e1 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov byte ptr [eax + 0x14], 0 }
	__asm { jmp L_006a74e3 }
	__asm { L_006a74e1: }
	__asm { xor eax, eax }
	__asm { L_006a74e3: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006a7b70 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_006a7539 }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push edi }
	__asm { call fn_0057dce0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 0x30] }
	__asm { mov eax, dword ptr [eax + 0x34] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006a7539: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0061e5c0();
extern "C" void fn_00665970();
extern "C" void fn_006a9de0();
extern "C" void fn_006a9e60();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006aa3a0
extern "C" __declspec(naked) void asm_006aa3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15020 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, eax }
	__asm { sub ecx, edx }
	__asm { sar ecx, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp ecx, esi }
	__asm { jbe L_006aa413 }
	__asm { shl esi, 4 }
	__asm { add esi, edx }
	__asm { cmp esi, edx }
	__asm { jne L_006aa402 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [edi] }
	__asm { L_006aa3ec: }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { L_006aa3ef: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006aa402: }
	__asm { cmp esi, eax }
	__asm { je L_006aa3ef }
	__asm { push esi }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_006a9de0 }
	__asm { add esp, 0xc }
	__asm { jmp L_006aa3ec }
	__asm { L_006aa413: }
	__asm { jae L_006aa3ef }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0061e5c0 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov ecx, esi }
	__asm { sar eax, 4 }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006a9e60 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { sar eax, 4 }
	__asm { sub esi, eax }
	__asm { add esp, 0x14 }
	__asm { shl esi, 4 }
	__asm { add dword ptr [edi + 4], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00665970 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0043ee70();
extern "C" void fn_0068c020();
extern "C" void fn_008f54d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006ad5d0
extern "C" __declspec(naked) void asm_006ad5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd155ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea edx, [ebp - 0x54] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x1c] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008f54d0 }
	__asm { push 0xe42a9c }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043ee70 }
	__asm { add esp, 0x10 }
	__asm { mov ecx, dword ptr [edi + 0x1a8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0068c020 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_006ad649 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad649: }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { jb L_006ad66c }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad66c: }
	__asm { cmp dword ptr [ebp - 0x40], 0x10 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { jb L_006ad68f }
	__asm { push dword ptr [ebp - 0x54] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad68f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0042c130();
extern "C" void fn_006b3df0();
extern "C" void fn_006b3e50();
// FUNCTION: ROBLOXSTUDIO 0x006b0290
extern "C" __declspec(naked) void asm_006b0290()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push 0xe43458 }
	__asm { push esi }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_006b02d2 }
	__asm { L_006b02a7: }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { test eax, eax }
	__asm { je L_006b02c1 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { add eax, 0xc }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_006b3df0 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b02c1: }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { xor eax, eax }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_006b3df0 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b02d2: }
	__asm { push 0xe43448 }
	__asm { push esi }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_006b030f }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { test eax, eax }
	__asm { je L_006b02fe }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { add eax, 0xc }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_006b3df0 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b02fe: }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { xor eax, eax }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_006b3df0 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b030f: }
	__asm { push 0xf0d620 }
	__asm { push esi }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_006b02a7 }
	__asm { push 0xe43488 }
	__asm { push esi }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_006b034d }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { test eax, eax }
	__asm { je L_006b02fe }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { add eax, 0x10 }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_006b3df0 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b034d: }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { call fn_006b3e50 }
	__asm { pop esi }
	__asm { ret 0xc }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x006b04c0
extern "C" __declspec(naked) void asm_006b04c0()
{
	__asm { push -1 }
	__asm { push 0xd159b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov ebx, dword ptr [esp + 0x24] }
	__asm { test ebx, ebx }
	__asm { jne L_006b0505 }
	__asm { mov eax, 0x80004003 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 8 }
	__asm { L_006b0505: }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x28], edi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { je L_006b0530 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push eax }
	__asm { call edx }
	__asm { L_006b0530: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebx], eax }
	__asm { call dword ptr [g_00e101b0] }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 8 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x006b0560
extern "C" __declspec(naked) void asm_006b0560()
{
	__asm { push -1 }
	__asm { push 0xd15b48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, dword ptr [esp + 0x28] }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x18], edi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { xor ebp, ebp }
	__asm { mov dword ptr [esp + 0x20], ebp }
	__asm { cmp dword ptr [esi + 8], ebp }
	__asm { je L_006b05eb }
	__asm { mov eax, dword ptr [esi - 0xc] }
	__asm { mov edx, dword ptr [eax + 0x18] }
	__asm { add esi, -0xc }
	__asm { mov ecx, esi }
	__asm { call edx }
	__asm { mov ebx, eax }
	__asm { xor edi, edi }
	__asm { test ebx, ebx }
	__asm { jle L_006b05e3 }
	__asm { L_006b05b7: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + 0x1c] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call edx }
	__asm { test eax, eax }
	__asm { je L_006b05e3 }
	__asm { cmp dword ptr [eax + 0x18], 0 }
	__asm { je L_006b05de }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { call eax }
	__asm { test eax, eax }
	__asm { jge L_006b05de }
	__asm { test ebp, ebp }
	__asm { jl L_006b05de }
	__asm { mov ebp, eax }
	__asm { L_006b05de: }
	__asm { inc edi }
	__asm { cmp edi, ebx }
	__asm { jl L_006b05b7 }
	__asm { L_006b05e3: }
	__asm { mov esi, dword ptr [esp + 0x28] }
	__asm { mov edi, dword ptr [esp + 0x14] }
	__asm { L_006b05eb: }
	__asm { push edi }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, ebp }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret 4 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x006b0620
extern "C" __declspec(naked) void asm_006b0620()
{
	__asm { push -1 }
	__asm { push 0xd15b48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov ebx, dword ptr [esp + 0x28] }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { call dword ptr [g_00e101ac] }
	__asm { xor edi, edi }
	__asm { mov dword ptr [esp + 0x20], edi }
	__asm { cmp dword ptr [ebx + 8], edi }
	__asm { jne L_006b06a1 }
	__asm { mov eax, dword ptr [ebx - 0xc] }
	__asm { mov edx, dword ptr [eax + 0x18] }
	__asm { lea esi, [ebx - 0xc] }
	__asm { mov ecx, esi }
	__asm { call edx }
	__asm { mov ebp, eax }
	__asm { test ebp, ebp }
	__asm { jle L_006b06a1 }
	__asm { L_006b0675: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + 0x1c] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call edx }
	__asm { test eax, eax }
	__asm { je L_006b06a1 }
	__asm { cmp dword ptr [eax + 0x18], 0 }
	__asm { je L_006b069c }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { call eax }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { jl L_006b06cb }
	__asm { mov ebx, dword ptr [esp + 0x28] }
	__asm { L_006b069c: }
	__asm { inc edi }
	__asm { cmp edi, ebp }
	__asm { jl L_006b0675 }
	__asm { L_006b06a1: }
	__asm { mov edx, dword ptr [esp + 0x14] }
	__asm { push edx }
	__asm { mov dword ptr [ebx + 8], 1 }
	__asm { call dword ptr [g_00e101b0] }
	__asm { xor eax, eax }
	__asm { L_006b06b5: }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret 4 }
	__asm { L_006b06cb: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { push ecx }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, ebx }
	__asm { jmp L_006b06b5 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x006b06e0
extern "C" __declspec(naked) void asm_006b06e0()
{
	__asm { push -1 }
	__asm { push 0xd15808 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, dword ptr [esp + 0x28] }
	__asm { mov esi, dword ptr [edi + 0x2c] }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x2c], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [esp + 0x2c] }
	__asm { mov ecx, dword ptr [esp + 0x30] }
	__asm { xor ebp, ebp }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { mov dword ptr [esp + 0x20], ebp }
	__asm { cmp dword ptr [edi + 8], ebp }
	__asm { jne L_006b0749 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { push edi }
	__asm { call eax }
	__asm { mov ebx, eax }
	__asm { cmp ebx, ebp }
	__asm { jge L_006b0749 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, ebx }
	__asm { jmp L_006b07b0 }
	__asm { L_006b0749: }
	__asm { cmp dword ptr [edi + 8], 2 }
	__asm { je L_006b07a0 }
	__asm { mov edx, dword ptr [edi - 0xc] }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { lea ebx, [edi - 0xc] }
	__asm { mov ecx, ebx }
	__asm { call eax }
	__asm { mov esi, eax }
	__asm { mov dword ptr [esp + 0x14], esi }
	__asm { test esi, esi }
	__asm { jle L_006b079c }
	__asm { L_006b0766: }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { push ebp }
	__asm { mov ecx, ebx }
	__asm { call eax }
	__asm { test eax, eax }
	__asm { je L_006b079c }
	__asm { cmp dword ptr [eax + 0x18], 0 }
	__asm { je L_006b0797 }
	__asm { mov ecx, dword ptr [esp + 0x30] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edx + 0x1c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esp + 0x30] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call edx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { jl L_006b07c6 }
	__asm { mov esi, dword ptr [esp + 0x14] }
	__asm { L_006b0797: }
	__asm { inc ebp }
	__asm { cmp ebp, esi }
	__asm { jl L_006b0766 }
	__asm { L_006b079c: }
	__asm { mov esi, dword ptr [esp + 0x28] }
	__asm { L_006b07a0: }
	__asm { push esi }
	__asm { mov dword ptr [edi + 8], 2 }
	__asm { call dword ptr [g_00e101b0] }
	__asm { xor eax, eax }
	__asm { L_006b07b0: }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret 0xc }
	__asm { L_006b07c6: }
	__asm { mov eax, dword ptr [esp + 0x28] }
	__asm { push eax }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, esi }
	__asm { jmp L_006b07b0 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_006b29d0();
extern "C" void fn_006b2a10();
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x006b0c50
extern "C" __declspec(naked) void asm_006b0c50()
{
	__asm { push -1 }
	__asm { push 0xd15898 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 0x4c }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { mov dword ptr [esp + 0x48], eax }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x58] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, dword ptr [esp + 0x6c] }
	__asm { mov esi, dword ptr [esp + 0x68] }
	__asm { test edi, edi }
	__asm { jne L_006b0c90 }
	__asm { xor eax, eax }
	__asm { jmp L_006b0ce9 }
	__asm { L_006b0c90: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { call edx }
	__asm { cmp eax, dword ptr [esi + 0xc] }
	__asm { je L_006b0ca6 }
	__asm { mov eax, 0x80040203 }
	__asm { jmp L_006b0ce9 }
	__asm { L_006b0ca6: }
	__asm { add dword ptr [esi + 4], edi }
	__asm { lea ecx, [esp + 0xc] }
	__asm { call fn_006b2a10 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x34] }
	__asm { lea edx, [esp + 0xc] }
	__asm { push edx }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { dec edx }
	__asm { push edx }
	__asm { mov dword ptr [esp + 0x68], 0 }
	__asm { call eax }
	__asm { mov esi, eax }
	__asm { neg esi }
	__asm { sbb esi, esi }
	__asm { lea ecx, [esp + 0xc] }
	__asm { neg esi }
	__asm { mov dword ptr [esp + 0x60], 0xffffffff }
	__asm { call fn_006b29d0 }
	__asm { mov eax, esi }
	__asm { L_006b0ce9: }
	__asm { mov ecx, dword ptr [esp + 0x58] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [esp + 0x48] }
	__asm { xor ecx, esp }
	__asm { call fn_00cf6d5f }
	__asm { add esp, 0x58 }
	__asm { ret 8 }
}

extern "C" void fn_0042c130();
extern "C" void fn_006b3df0();
extern "C" void fn_006b3e50();
// FUNCTION: ROBLOXSTUDIO 0x006b0da0
extern "C" __declspec(naked) void asm_006b0da0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push 0xe43418 }
	__asm { push esi }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_006b0de2 }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { test eax, eax }
	__asm { je L_006b0dd1 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { add eax, 0xc }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_006b3df0 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b0dd1: }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { xor eax, eax }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_006b3df0 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b0de2: }
	__asm { push 0xe434a8 }
	__asm { push esi }
	__asm { call fn_0042c130 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_006b0e1f }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { test eax, eax }
	__asm { je L_006b0e0e }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { add eax, 0x10 }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_006b3df0 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b0e0e: }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { xor eax, eax }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_006b3df0 }
	__asm { pop esi }
	__asm { ret 0xc }
	__asm { L_006b0e1f: }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { call fn_006b3e50 }
	__asm { pop esi }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x006b0e80
extern "C" __declspec(naked) void asm_006b0e80()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + 0x28] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call edx }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { test edi, edi }
	__asm { jge L_006b0ea8 }
	__asm { mov edx, dword ptr [eax + 0x2c] }
	__asm { call edx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006b0ea8: }
	__asm { mov edx, dword ptr [eax + 0x20] }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x18] }
	__asm { push ebp }
	__asm { call edx }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jne L_006b0f01 }
	__asm { mov dword ptr [esi + 0x18], ebx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { call ecx }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [edx + 0x24] }
	__asm { push ebp }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jl L_006b0f18 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { push ebp }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call edx }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jl L_006b0f18 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax + 0x30] }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call edx }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jge L_006b0f39 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { push ebx }
	__asm { call ecx }
	__asm { jmp L_006b0f18 }
	__asm { L_006b0f01: }
	__asm { jge L_006b0f13 }
	__asm { cmp edi, 0x80004005 }
	__asm { je L_006b0f13 }
	__asm { cmp edi, 0x80070057 }
	__asm { jne L_006b0f18 }
	__asm { L_006b0f13: }
	__asm { mov edi, 0x8004022a }
	__asm { L_006b0f18: }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [edx + 0x2c] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { test eax, eax }
	__asm { je L_006b0f37 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call edx }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_006b0f37: }
	__asm { mov eax, edi }
	__asm { L_006b0f39: }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
}

extern "C" void fn_006b0e80();
extern "C" void fn_006b2880();
extern "C" void fn_006b2ab0();
// FUNCTION: ROBLOXSTUDIO 0x006b0f40
extern "C" __declspec(naked) void asm_006b0f40()
{
	__asm { sub esp, 8 }
	__asm { push ebp }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x1c] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0xc], ecx }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { push edi }
	__asm { call ecx }
	__asm { xor ebp, ebp }
	__asm { cmp eax, ebp }
	__asm { jl L_006b102a }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov edx, dword ptr [edx + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x28] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x34], ebp }
	__asm { mov dword ptr [esp + 0x20], ebp }
	__asm { xor ebx, ebx }
	__asm { call edx }
	__asm { test eax, eax }
	__asm { jne L_006b1015 }
	__asm { L_006b0f87: }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { cmp ecx, ebp }
	__asm { je L_006b0fda }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { cmp eax, ebp }
	__asm { je L_006b0fa1 }
	__asm { push eax }
	__asm { call fn_006b2880 }
	__asm { test eax, eax }
	__asm { je L_006b0fda }
	__asm { L_006b0fa1: }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { call fn_006b0e80 }
	__asm { mov esi, eax }
	__asm { cmp esi, ebp }
	__asm { jge L_006b0fdf }
	__asm { cmp ebx, ebp }
	__asm { jl L_006b0fdf }
	__asm { cmp esi, 0x80004005 }
	__asm { je L_006b0fdf }
	__asm { cmp esi, 0x80070057 }
	__asm { je L_006b0fdf }
	__asm { cmp esi, 0x8004022a }
	__asm { je L_006b0fdf }
	__asm { mov ebx, esi }
	__asm { jmp L_006b0fdf }
	__asm { L_006b0fda: }
	__asm { mov esi, 0x80040207 }
	__asm { L_006b0fdf: }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { cmp eax, ebp }
	__asm { je L_006b0ff1 }
	__asm { push eax }
	__asm { call fn_006b2ab0 }
	__asm { mov dword ptr [esp + 0x24], ebp }
	__asm { L_006b0ff1: }
	__asm { cmp esi, ebp }
	__asm { je L_006b1026 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov edx, dword ptr [edx + 0xc] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x28] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { push edi }
	__asm { call edx }
	__asm { test eax, eax }
	__asm { je L_006b0f87 }
	__asm { cmp ebx, ebp }
	__asm { jne L_006b101a }
	__asm { L_006b1015: }
	__asm { mov ebx, 0x80040207 }
	__asm { L_006b101a: }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { add esp, 8 }
	__asm { ret 0xc }
	__asm { L_006b1026: }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { L_006b102a: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { add esp, 8 }
	__asm { ret 0xc }
}

extern "C" void fn_006b0e80();
extern "C" void fn_006b0f40();
extern "C" void fn_006b2840();
// FUNCTION: ROBLOXSTUDIO 0x006b1040
extern "C" __declspec(naked) void asm_006b1040()
{
	__asm { sub esp, 8 }
	__asm { push ebp }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x18] }
	__asm { xor ebp, ebp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 0xc], ebp }
	__asm { cmp esi, ebp }
	__asm { je L_006b1077 }
	__asm { mov ecx, esi }
	__asm { call fn_006b2840 }
	__asm { test eax, eax }
	__asm { jne L_006b1077 }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_006b0e80 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { add esp, 8 }
	__asm { ret 8 }
	__asm { L_006b1077: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [esp + 0x14], 0x80040207 }
	__asm { jmp L_006b108a }
	__asm { L_006b1086: }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { L_006b108a: }
	__asm { movzx ecx, byte ptr [edi + 0x26] }
	__asm { cmp ebp, ecx }
	__asm { jne L_006b10a1 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edx + 0x30] }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call ecx }
	__asm { jmp L_006b10b2 }
	__asm { L_006b10a1: }
	__asm { mov edx, dword ptr [edi + 0xc] }
	__asm { mov edx, dword ptr [edx + 0x30] }
	__asm { lea eax, [edi + 0xc] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call edx }
	__asm { L_006b10b2: }
	__asm { test eax, eax }
	__asm { jl L_006b10f2 }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_006b0f40 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call edx }
	__asm { test esi, esi }
	__asm { jge L_006b1106 }
	__asm { cmp esi, 0x80004005 }
	__asm { je L_006b10f2 }
	__asm { cmp esi, 0x80070057 }
	__asm { je L_006b10f2 }
	__asm { cmp esi, 0x8004022a }
	__asm { je L_006b10f2 }
	__asm { mov dword ptr [esp + 0x14], esi }
	__asm { L_006b10f2: }
	__asm { inc ebp }
	__asm { cmp ebp, 2 }
	__asm { jl L_006b1086 }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { add esp, 8 }
	__asm { ret 8 }
	__asm { L_006b1106: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { add esp, 8 }
	__asm { ret 8 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012b55c0[];
extern "C" void fn_006b2820();
extern "C" void fn_006b2960();
// FUNCTION: ROBLOXSTUDIO 0x006b12f0
extern "C" __declspec(naked) void asm_006b12f0()
{
	__asm { push -1 }
	__asm { push 0xd159b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov ebx, dword ptr [esp + 0x24] }
	__asm { test ebx, ebx }
	__asm { jne L_006b1335 }
	__asm { mov eax, 0x80004003 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 8 }
	__asm { L_006b1335: }
	__asm { mov edi, dword ptr [esp + 0x20] }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x28], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { je L_006b137d }
	__asm { add edi, 0x28 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_006b2960 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 8 }
	__asm { L_006b137d: }
	__asm { mov ecx, ebx }
	__asm { call fn_006b2820 }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, 0x80040209 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b19d0
extern "C" __declspec(naked) void asm_006b19d0()
{
	__asm { mov edx, dword ptr [esp + 8] }
	__asm { xor eax, eax }
	__asm { test edx, edx }
	__asm { je L_006b19e2 }
	__asm { cmp edx, 0x7fffffff }
	__asm { jbe L_006b19e7 }
	__asm { L_006b19e2: }
	__asm { mov eax, 0x80070057 }
	__asm { L_006b19e7: }
	__asm { test eax, eax }
	__asm { jl L_006b1a49 }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor eax, eax }
	__asm { push edi }
	__asm { mov esi, edx }
	__asm { test edx, edx }
	__asm { je L_006b1a39 }
	__asm { mov edi, dword ptr [esp + 0x18] }
	__asm { mov ebx, 0x7ffffffe }
	__asm { sub ebx, edx }
	__asm { sub edi, ecx }
	__asm { L_006b1a07: }
	__asm { lea edx, [ebx + esi] }
	__asm { test edx, edx }
	__asm { je L_006b1a35 }
	__asm { movzx edx, word ptr [edi + ecx] }
	__asm { test dx, dx }
	__asm { je L_006b1a35 }
	__asm { mov word ptr [ecx], dx }
	__asm { add ecx, 2 }
	__asm { sub esi, 1 }
	__asm { jne L_006b1a07 }
	__asm { pop edi }
	__asm { sub ecx, 2 }
	__asm { xor edx, edx }
	__asm { pop esi }
	__asm { mov eax, 0x8007007a }
	__asm { mov word ptr [ecx], dx }
	__asm { pop ebx }
	__asm { ret 0xc }
	__asm { L_006b1a35: }
	__asm { test esi, esi }
	__asm { jne L_006b1a41 }
	__asm { L_006b1a39: }
	__asm { sub ecx, 2 }
	__asm { mov eax, 0x8007007a }
	__asm { L_006b1a41: }
	__asm { pop edi }
	__asm { xor edx, edx }
	__asm { pop esi }
	__asm { mov word ptr [ecx], dx }
	__asm { pop ebx }
	__asm { L_006b1a49: }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x006b1a50
extern "C" __declspec(naked) void asm_006b1a50()
{
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { test edi, edi }
	__asm { jne L_006b1a62 }
	__asm { mov eax, 0x80004003 }
	__asm { pop edi }
	__asm { ret 8 }
	__asm { L_006b1a62: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0xc] }
	__asm { mov edx, dword ptr [ebx + 0x30] }
	__asm { test edx, edx }
	__asm { je L_006b1ab0 }
	__asm { push esi }
	__asm { mov esi, 0x80 }
	__asm { mov eax, edi }
	__asm { L_006b1a76: }
	__asm { lea ecx, [esi + 0x7fffff7e] }
	__asm { test ecx, ecx }
	__asm { je L_006b1aa1 }
	__asm { movzx ecx, word ptr [edx] }
	__asm { test cx, cx }
	__asm { je L_006b1aa1 }
	__asm { mov word ptr [eax], cx }
	__asm { add eax, 2 }
	__asm { add edx, 2 }
	__asm { sub esi, 1 }
	__asm { jne L_006b1a76 }
	__asm { sub eax, 2 }
	__asm { xor edx, edx }
	__asm { mov word ptr [eax], dx }
	__asm { pop esi }
	__asm { jmp L_006b1ab5 }
	__asm { L_006b1aa1: }
	__asm { test esi, esi }
	__asm { jne L_006b1aa8 }
	__asm { sub eax, 2 }
	__asm { L_006b1aa8: }
	__asm { xor edx, edx }
	__asm { mov word ptr [eax], dx }
	__asm { pop esi }
	__asm { jmp L_006b1ab5 }
	__asm { L_006b1ab0: }
	__asm { xor eax, eax }
	__asm { mov word ptr [edi], ax }
	__asm { L_006b1ab5: }
	__asm { mov ecx, dword ptr [ebx + 0x34] }
	__asm { mov dword ptr [edi + 0x100], ecx }
	__asm { cmp dword ptr [ebx + 0x34], 0 }
	__asm { je L_006b1acf }
	__asm { mov eax, dword ptr [ebx + 0x34] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { L_006b1acf: }
	__asm { pop ebx }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { ret 8 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_006b3f20();
extern "C" void fn_006b4010();
// FUNCTION: ROBLOXSTUDIO 0x006b1d20
extern "C" __declspec(naked) void asm_006b1d20()
{
	__asm { push -1 }
	__asm { push 0xd1592b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0xc], esi }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { lea edi, [esi + 0x18] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi], 0xe42ef8 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 0x14], 1 }
	__asm { call fn_006b3f20 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { call edx }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { test eax, eax }
	__asm { jne L_006b1db2 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { call edx }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [eax + 0x18] }
	__asm { call edx }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { jmp L_006b1dcf }
	__asm { L_006b1db2: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { add eax, 0x18 }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_006b4010 }
	__asm { L_006b1dcf: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret 8 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_006b1d20();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006b1e10
extern "C" __declspec(naked) void asm_006b1e10()
{
	__asm { push -1 }
	__asm { push 0xd1595b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov ebx, dword ptr [esp + 0x24] }
	__asm { xor edi, edi }
	__asm { cmp ebx, edi }
	__asm { jne L_006b1e57 }
	__asm { mov eax, 0x80004003 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 8 }
	__asm { L_006b1e57: }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { call edx }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { je L_006b1e73 }
	__asm { mov dword ptr [ebx], edi }
	__asm { mov edi, 0x80040203 }
	__asm { jmp L_006b1ea4 }
	__asm { L_006b1e73: }
	__asm { push 0x30 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { mov dword ptr [esp + 0x18], edi }
	__asm { cmp eax, edi }
	__asm { je L_006b1e97 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_006b1d20 }
	__asm { jmp L_006b1e99 }
	__asm { L_006b1e97: }
	__asm { xor eax, eax }
	__asm { L_006b1e99: }
	__asm { mov dword ptr [ebx], eax }
	__asm { cmp eax, edi }
	__asm { jne L_006b1ea4 }
	__asm { mov edi, 0x8007000e }
	__asm { L_006b1ea4: }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 8 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_006b1fb0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006b2040
extern "C" __declspec(naked) void asm_006b2040()
{
	__asm { push -1 }
	__asm { push 0xd1595b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov ebx, dword ptr [esp + 0x24] }
	__asm { xor edi, edi }
	__asm { cmp ebx, edi }
	__asm { jne L_006b2087 }
	__asm { mov eax, 0x80004003 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 8 }
	__asm { L_006b2087: }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { call edx }
	__asm { cmp eax, dword ptr [esi + 0xc] }
	__asm { je L_006b20a3 }
	__asm { mov dword ptr [ebx], edi }
	__asm { mov edi, 0x80040203 }
	__asm { jmp L_006b20d4 }
	__asm { L_006b20a3: }
	__asm { push 0x14 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { mov dword ptr [esp + 0x18], edi }
	__asm { cmp eax, edi }
	__asm { je L_006b20c7 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_006b1fb0 }
	__asm { jmp L_006b20c9 }
	__asm { L_006b20c7: }
	__asm { xor eax, eax }
	__asm { L_006b20c9: }
	__asm { mov dword ptr [ebx], eax }
	__asm { cmp eax, edi }
	__asm { jne L_006b20d4 }
	__asm { mov edi, 0x8007000e }
	__asm { L_006b20d4: }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 8 }
}

extern "C" char g_012b55c0[];
extern "C" void fn_006b19d0();
extern "C" void fn_006b2a10();
extern "C" void fn_006b3e20();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006b20f0
extern "C" __declspec(naked) void asm_006b20f0()
{
	__asm { push -1 }
	__asm { push 0xd15993 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0x14], esi }
	__asm { mov eax, dword ptr [esp + 0x28] }
	__asm { xor ebx, ebx }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_006b3e20 }
	__asm { mov ecx, dword ptr [esp + 0x3c] }
	__asm { mov edx, dword ptr [esp + 0x30] }
	__asm { mov eax, dword ptr [esp + 0x2c] }
	__asm { mov dword ptr [esi + 0x1c], ecx }
	__asm { lea ecx, [esi + 0x34] }
	__asm { mov dword ptr [esp + 0x20], ebx }
	__asm { mov dword ptr [esi + 0x14], ebx }
	__asm { mov dword ptr [esi + 0x18], ebx }
	__asm { mov dword ptr [esi + 0x20], edx }
	__asm { mov byte ptr [esi + 0x24], bl }
	__asm { mov byte ptr [esi + 0x25], bl }
	__asm { mov byte ptr [esi + 0x26], bl }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov dword ptr [esi + 0x2c], ebx }
	__asm { mov dword ptr [esi + 0x30], 1 }
	__asm { call fn_006b2a10 }
	__asm { fld1 }
	__asm { mov ebp, dword ptr [esp + 0x38] }
	__asm { mov dword ptr [esi + 0x80], ebx }
	__asm { mov dword ptr [esi + 0x84], ebx }
	__asm { mov dword ptr [esi + 0x88], 0xffffffff }
	__asm { mov dword ptr [esi + 0x8c], 0x7fffffff }
	__asm { fstp qword ptr [esi + 0x90] }
	__asm { mov byte ptr [esp + 0x20], 1 }
	__asm { cmp ebp, ebx }
	__asm { je L_006b21e7 }
	__asm { mov ecx, 0x7fffffff }
	__asm { mov eax, ebp }
	__asm { mov edi, edi }
	__asm { L_006b21a0: }
	__asm { cmp word ptr [eax], bx }
	__asm { je L_006b21af }
	__asm { add eax, 2 }
	__asm { sub ecx, 1 }
	__asm { jne L_006b21a0 }
	__asm { jmp L_006b21e7 }
	__asm { L_006b21af: }
	__asm { cmp ecx, ebx }
	__asm { je L_006b21e7 }
	__asm { mov eax, 0x7fffffff }
	__asm { sub eax, ecx }
	__asm { lea edi, [eax + 1] }
	__asm { xor ecx, ecx }
	__asm { mov eax, edi }
	__asm { mov edx, 2 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { cmp eax, ebx }
	__asm { je L_006b21e7 }
	__asm { push ebp }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_006b19d0 }
	__asm { L_006b21e7: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret 0x18 }
}
