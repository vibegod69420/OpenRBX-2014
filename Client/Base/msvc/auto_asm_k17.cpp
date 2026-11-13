// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0040c260();
extern "C" void fn_00906f60();
// FUNCTION: ROBLOXSTUDIO 0x007b6690
extern "C" __declspec(naked) void asm_007b6690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46288 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00906f60 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edi, eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], 0x7b3f50 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_007b66ea }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, 0xe560d4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { jmp L_007b66f1 }
	__asm { L_007b66ea: }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { L_007b66f1: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007b672f }
	__asm { test al, 1 }
	__asm { jne L_007b672f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007b672f }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007b672f: }
	__asm { test esi, esi }
	__asm { je L_007b6744 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test eax, eax }
	__asm { jne L_007b673f }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { jmp L_007b6741 }
	__asm { L_007b673f: }
	__asm { mov dword ptr [eax], esi }
	__asm { L_007b6741: }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { L_007b6744: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e560cc[];
extern "C" void fn_007b6ce0();
// FUNCTION: ROBLOXSTUDIO 0x007b6d60
extern "C" __declspec(naked) void asm_007b6d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd27058 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [g_00e560cc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { test eax, eax }
	__asm { je L_007b6d9a }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007b6d9a: }
	__asm { mov eax, 0x403c60 }
	__asm { test eax, eax }
	__asm { je L_007b6db7 }
	__asm { mov eax, 0xe560cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [ebp - 0x24], 0x403c60 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { jmp L_007b6dbe }
	__asm { L_007b6db7: }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { L_007b6dbe: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b6ce0 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_007b6e01 }
	__asm { test al, 1 }
	__asm { jne L_007b6e01 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007b6e01 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007b6e01: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00794c40();
extern "C" void fn_007cd690();
// FUNCTION: ROBLOXSTUDIO 0x007b6e20
extern "C" __declspec(naked) void asm_007b6e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [eax + 0x1c] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov esi, dword ptr [eax + 0x10] }
	__asm { cmp esi, dword ptr [eax + 0x14] }
	__asm { je L_007b6ecb }
	__asm { push ebx }
	__asm { mov edi, edi }
	__asm { L_007b6e40: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ebx, dword ptr [esi] }
	__asm { je L_007b6e91 }
	__asm { test edi, edi }
	__asm { je L_007b6e91 }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_007b6e91 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007b6e7c }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b6e91 }
	__asm { L_007b6e7c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b6e91: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { push 0 }
	__asm { cmovne eax, edi }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00794c40 }
	__asm { test eax, eax }
	__asm { je L_007b6ebb }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_007b6eb6 }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { jmp L_007b6eb8 }
	__asm { L_007b6eb6: }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007b6eb8: }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { L_007b6ebb: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { add esi, 4 }
	__asm { cmp esi, dword ptr [eax + 0x14] }
	__asm { jne L_007b6e40 }
	__asm { pop ebx }
	__asm { L_007b6ecb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e0d24[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007b8af0();
extern "C" void fn_007b9910();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b7250
extern "C" __declspec(naked) void asm_007b7250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ff06 }
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
	__asm { call fn_007b8af0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e0d24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_007b730f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0d24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xf13260 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x19 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0bf8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1b30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_007b730f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e0bf8 }
	__asm { call fn_007b9910 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe5653c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007b738d }
	__asm { push 0x11ecedc }
	__asm { mov ecx, 0x11ecedc }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007b738d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007b7378 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b738d }
	__asm { L_007b7378: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b738d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e0d24[];
extern "C" void fn_0040bb80();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007b8b50();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b73a0
extern "C" __declspec(naked) void asm_007b73a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ff36 }
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
	__asm { call fn_007b8b50 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e0d24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_007b745f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0d24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xf13260 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x19 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0bf8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1b30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_007b745f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e0bf8 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe56598 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007b74dd }
	__asm { push 0x11ecedc }
	__asm { mov ecx, 0x11ecedc }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007b74dd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007b74c8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b74dd }
	__asm { L_007b74c8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b74dd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

// FUNCTION: ROBLOXSTUDIO 0x007b76c0
extern "C" __declspec(naked) void asm_007b76c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c2f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe390d4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe56f10 }
	__asm { mov dword ptr [esi + 8], 0xe56f20 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007b776a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_007b7756 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007b7756: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007b776a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007b7e10
extern "C" __declspec(naked) void asm_007b7e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ff91 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { nop }
	__asm { L_007b7e40: }
	__asm { test esi, esi }
	__asm { je L_007b7e9d }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_007b7e87 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { lea eax, [ebx + 0x30] }
	__asm { lea ecx, [edi + 0x30] }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebx + 0x54] }
	__asm { mov dword ptr [edi + 0x54], eax }
	__asm { mov eax, dword ptr [ebx + 0x58] }
	__asm { mov dword ptr [edi + 0x58], eax }
	__asm { mov eax, dword ptr [ebx + 0x5c] }
	__asm { mov dword ptr [edi + 0x5c], eax }
	__asm { L_007b7e87: }
	__asm { dec esi }
	__asm { add edi, 0x60 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { jmp L_007b7e40 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_007b7e9d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
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
extern "C" void fn_0052c1b0();
extern "C" void fn_007b76c0();
// FUNCTION: ROBLOXSTUDIO 0x007b81d0
extern "C" __declspec(naked) void asm_007b81d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_007b821b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_007b821b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_007b8244 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_007b76c0 }
	__asm { mov dword ptr [esi], 0xe56f28 }
	__asm { mov dword ptr [esi + 8], 0xe56f38 }
	__asm { jmp L_007b8246 }
	__asm { L_007b8244: }
	__asm { xor esi, esi }
	__asm { L_007b8246: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0052c1b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_007b826a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_007b826a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" void fn_0040c5b0();
extern "C" void fn_006b98f0();
extern "C" void fn_007b7a60();
extern "C" void fn_007b7f60();
extern "C" void fn_007bb4f0();
extern "C" void fn_007e8a40();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007b8400
extern "C" __declspec(naked) void asm_007b8400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10524] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_007b844e }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007b8422 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007b8427 }
	__asm { L_007b8422: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007b8427: }
	__asm { cmp ecx, 0x11ece50 }
	__asm { je L_007b8447 }
	__asm { test eax, eax }
	__asm { je L_007b8437 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007b843c }
	__asm { L_007b8437: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007b843c: }
	__asm { push 0x11ece50 }
	__asm { call ebx }
	__asm { test al, al }
	__asm { je L_007b844e }
	__asm { L_007b8447: }
	__asm { lea eax, [esi + 4] }
	__asm { test eax, eax }
	__asm { jne L_007b84af }
	__asm { L_007b844e: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_007b8466 }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call ebx }
	__asm { test al, al }
	__asm { je L_007b84b6 }
	__asm { L_007b8466: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0040c5b0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_007bb4f0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 8], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_007b8490 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007b8490: }
	__asm { test bl, bl }
	__asm { je L_007b84b6 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007b7a60 }
	__asm { call fn_007e8a40 }
	__asm { push esi }
	__asm { mov dword ptr [edi], eax }
	__asm { call fn_007b7f60 }
	__asm { add esp, 4 }
	__asm { L_007b84af: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b84b6: }
	__asm { call fn_007e8a40 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { add ecx, 4 }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_007b84c9 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_007b84c9: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_007b84d9 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_007b84d9: }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xf13664 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0044df70();
extern "C" void fn_006b98f0();
extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_007d2b00();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007b8720
extern "C" __declspec(naked) void asm_007b8720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ffcb }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x80 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 1 }
	__asm { jb L_007b87f2 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_006da0e0 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x8c], eax }
	__asm { mov dword ptr [ebp - 0x88], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x8c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_007b87d2 }
	__asm { lea ecx, [ebp - 0x8c] }
	__asm { call fn_007d2b00 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0044df70 }
	__asm { mov ecx, dword ptr [ebp - 0x88] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_007b87c1 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x84] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_007b87c1: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b87d2: }
	__asm { mov eax, dword ptr [ebp - 0x88] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007b87f2 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x84] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007b87f2: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { test edi, edi }
	__asm { je L_007b882b }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b882b: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0044df70();
extern "C" void fn_006b98f0();
extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_007d2b00();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007b8850
extern "C" __declspec(naked) void asm_007b8850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ffcb }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x80 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 2 }
	__asm { jb L_007b8922 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_006da0e0 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x8c], eax }
	__asm { mov dword ptr [ebp - 0x88], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x8c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_007b8902 }
	__asm { lea ecx, [ebp - 0x8c] }
	__asm { call fn_007d2b00 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0044df70 }
	__asm { mov ecx, dword ptr [ebp - 0x88] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_007b88f1 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x84] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_007b88f1: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b8902: }
	__asm { mov eax, dword ptr [ebp - 0x88] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007b8922 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x84] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007b8922: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { test edi, edi }
	__asm { je L_007b895b }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b895b: }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007b8400();
extern "C" void fn_007b8c10();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007b8980
extern "C" __declspec(naked) void asm_007b8980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 1 }
	__asm { jb L_007b8a4b }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007b8c10 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_007b89d3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b89d3: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_007b8a31 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007b8400 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_007b8a20 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_007b8a20: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b8a31: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007b8a4b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007b8a4b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007b8a65 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b8a65: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007b9800();
extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x007b8cb0
extern "C" __declspec(naked) void asm_007b8cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_007b9800 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe566e8 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5390 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007b8d5e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007b8d5e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007b9800();
extern "C" void fn_007cb250();
extern "C" void fn_007d5470();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x007b8d80
extern "C" __declspec(naked) void asm_007b8d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_007b9800 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe56650 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5470 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007b8e2e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007b8e2e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007b9800();
extern "C" void fn_007bb570();
extern "C" void fn_00825140();
// FUNCTION: ROBLOXSTUDIO 0x007b8e50
extern "C" __declspec(naked) void asm_007b8e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20019 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_007b9800 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe56720 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { sub esp, 0x44 }
	__asm { mov dword ptr [ebp + 0x10], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007bb570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012e34b4[];
extern "C" char g_012e34b8[];
extern "C" char g_012e34bc[];
extern "C" char g_012e34c0[];
extern "C" void fn_007b9800();
extern "C" void fn_007cb250();
extern "C" void fn_007e8a40();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007b8f30
extern "C" __declspec(naked) void asm_007b8f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_007b9800 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xe566a0 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007b8f91 }
	__asm { mov dword ptr [eax], esi }
	__asm { jmp L_007b8f93 }
	__asm { L_007b8f91: }
	__asm { xor eax, eax }
	__asm { L_007b8f93: }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007e8a40 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [g_012e34c0] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp - 0x4c], esi }
	__asm { test al, 1 }
	__asm { jne L_007b8fe8 }
	__asm { or eax, 1 }
	__asm { push 0xde4690 }
	__asm { mov dword ptr [g_012e34c0], eax }
	__asm { mov dword ptr [g_012e34b4], 0x11ece50 }
	__asm { mov dword ptr [g_012e34bc], 0x40d810 }
	__asm { mov dword ptr [g_012e34b8], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007b8fe8: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0x12e34b4 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007e8a40 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007b9037 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007b9037: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_007b9800();
extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x007b9050
extern "C" __declspec(naked) void asm_007b9050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_007b9800 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe56708 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5390 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007b90fe }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007b90fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007b9800();
extern "C" void fn_007cb250();
extern "C" void fn_007d5470();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x007b9120
extern "C" __declspec(naked) void asm_007b9120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6973b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_007b9800 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe566c8 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5470 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007b91ce }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007b91ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x007b92b0
extern "C" __declspec(naked) void asm_007b92b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11ece28 }
	__asm { mov edi, ecx }
	__asm { push 0xe56834 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe56820 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
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
	__asm { push 0xe56840 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe56848 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x007b93e0
extern "C" __declspec(naked) void asm_007b93e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11ece50 }
	__asm { mov edi, ecx }
	__asm { push 0xe56870 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe5685c }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
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
	__asm { push 0xe56840 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe56880 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x007b9510
extern "C" __declspec(naked) void asm_007b9510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11ece00 }
	__asm { mov edi, ecx }
	__asm { push 0xe5652c }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe567d4 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
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
	__asm { push 0xe567e8 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0x1007a2c }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe567f0 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe567f8 }
	__asm { push 3 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe56800 }
	__asm { push 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe56808 }
	__asm { push 5 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe56810 }
	__asm { push 6 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007b9750();
extern "C" void fn_007cb250();
extern "C" void fn_007d5d30();
extern "C" void fn_008251b0();
// FUNCTION: ROBLOXSTUDIO 0x007b9680
extern "C" __declspec(naked) void asm_007b9680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007b9750 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe56790 }
	__asm { call fn_007d5d30 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_007b9712 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_007b9712: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_007b9735 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007b9735: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e0d24[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007b9800
extern "C" __declspec(naked) void asm_007b9800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20066 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e0d24] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_007b987a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0d24], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xf13260 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x19 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0bf8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1b30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_007b987a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e0bf8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe56644 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_007b98f2 }
	__asm { push 0x11ecedc }
	__asm { mov ecx, 0x11ecedc }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007b98f2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007b98dd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b98f2 }
	__asm { L_007b98dd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b98f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00793ca0();
extern "C" void fn_0088bd20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007b9910
extern "C" __declspec(naked) void asm_007b9910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29d6b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088bd20 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xe56490 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_007b99a7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_007b9996 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_007b9996: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_007b99a7 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_007b99a7: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10260[];
extern "C" void fn_007bab10();
// FUNCTION: ROBLOXSTUDIO 0x007bac00
extern "C" __declspec(naked) void asm_007bac00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_007bac9b }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul esi }
	__asm { sar edx, 4 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x2aaaaaa }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_007bac51 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_007bac51: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ebx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x2aaaaaa }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_007bac88 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_007bab10 }
	__asm { L_007bac88: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_007bab10 }
	__asm { L_007bac9b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5470();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_0088bd20();
// FUNCTION: ROBLOXSTUDIO 0x007bb570
extern "C" __declspec(naked) void asm_007bb570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4f1cb }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_0088bd20 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_0088bd20 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5470 }
	__asm { lea ecx, [ebp + 0x9c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x98] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007bb611 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007bb611: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007bb628 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007bb628: }
	__asm { mov eax, dword ptr [ebp + 0xa0] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007bb648 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xa4] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007bb648: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xd8 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_007b8610();
extern "C" void fn_007b8720();
extern "C" void fn_007b8850();
// FUNCTION: ROBLOXSTUDIO 0x007bbf10
extern "C" __declspec(naked) void asm_007bbf10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd334c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x6c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x38] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007b8610 }
	__asm { fstp dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_007bbf54 }
	__asm { add eax, -0x1c }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jmp L_007bbf5b }
	__asm { L_007bbf54: }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { L_007bbf5b: }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_007b8850 }
	__asm { push 0 }
	__asm { lea ecx, [ebx + 0x30] }
	__asm { push ecx }
	__asm { mov edi, eax }
	__asm { lea eax, [ebp - 0x78] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_007b8720 }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { sub esp, 0x14 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { fstp dword ptr [esp + 0x30] }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { mov ebx, dword ptr [ebx + 0x2c] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sub esp, 0x30 }
	__asm { mov esi, esp }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { lea ecx, [ecx + ebx] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_007bac00();
// FUNCTION: ROBLOXSTUDIO 0x007be9d0
extern "C" __declspec(naked) void asm_007be9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp esi, ecx }
	__asm { jae L_007bea39 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { cmp eax, esi }
	__asm { ja L_007bea39 }
	__asm { sub esi, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul esi }
	__asm { sar edx, 4 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { cmp ecx, dword ptr [ebx + 8] }
	__asm { jne L_007bea1f }
	__asm { push 1 }
	__asm { mov ecx, ebx }
	__asm { call fn_007bac00 }
	__asm { L_007bea1f: }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { lea esi, [esi + esi*2] }
	__asm { shl esi, 5 }
	__asm { add esi, dword ptr [ebx] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_007bea57 }
	__asm { L_007bea39: }
	__asm { cmp ecx, dword ptr [ebx + 8] }
	__asm { jne L_007bea47 }
	__asm { push 1 }
	__asm { mov ecx, ebx }
	__asm { call fn_007bac00 }
	__asm { L_007bea47: }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { L_007bea57: }
	__asm { test edi, edi }
	__asm { je L_007bea93 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { add esi, 0x30 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x54], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x58], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x5c], eax }
	__asm { L_007bea93: }
	__asm { add dword ptr [ebx + 4], 0x60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_007b7c10();
extern "C" void fn_007be480();
extern "C" void fn_007beb60();
extern "C" void fn_007bec90();
// FUNCTION: ROBLOXSTUDIO 0x007bfd40
extern "C" __declspec(naked) void asm_007bfd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x120 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { cmp dword ptr [ebx + 0x1a4], 0 }
	__asm { je L_007bfd7f }
	__asm { mov eax, dword ptr [ebx + 0x1a0] }
	__asm { cmp eax, 4 }
	__asm { je L_007bfe58 }
	__asm { cmp eax, 1 }
	__asm { je L_007bfe58 }
	__asm { cmp eax, 3 }
	__asm { je L_007bfe58 }
	__asm { cmp eax, 5 }
	__asm { je L_007bfe58 }
	__asm { L_007bfd7f: }
	__asm { push esi }
	__asm { push edi }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0xc0] }
	__asm { push eax }
	__asm { call fn_007be480 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x3c], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x38], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { add esi, 0x30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { lea ecx, [ebp - 0x120] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_006da0e0 }
	__asm { lea ecx, [ebp - 0xf0] }
	__asm { mov edi, eax }
	__asm { call fn_006da0e0 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x9c], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x98], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x90] }
	__asm { mov dword ptr [ebp - 0x94], eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [ebp - 0x6c], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [ebp - 0x64], eax }
	__asm { lea eax, [ebp - 0xc0] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { call fn_007b7c10 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007bfe58 }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_007beb60 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_007bec90 }
	__asm { L_007bfe58: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_007b7c10();
extern "C" void fn_007be480();
extern "C" void fn_007beb60();
extern "C" void fn_007bec90();
// FUNCTION: ROBLOXSTUDIO 0x007bfe60
extern "C" __declspec(naked) void asm_007bfe60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x120 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { cmp dword ptr [ebx + 0x1a4], 0 }
	__asm { je L_007bfe9f }
	__asm { mov eax, dword ptr [ebx + 0x1a0] }
	__asm { cmp eax, 4 }
	__asm { je L_007bff78 }
	__asm { cmp eax, 1 }
	__asm { je L_007bff78 }
	__asm { cmp eax, 3 }
	__asm { je L_007bff78 }
	__asm { cmp eax, 5 }
	__asm { je L_007bff78 }
	__asm { L_007bfe9f: }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xc0] }
	__asm { push eax }
	__asm { call fn_007be480 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x3c], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x38], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { add esi, 0x30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { lea ecx, [ebp - 0x120] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_006da0e0 }
	__asm { lea ecx, [ebp - 0xf0] }
	__asm { mov edi, eax }
	__asm { call fn_006da0e0 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x9c], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x98], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x90] }
	__asm { mov dword ptr [ebp - 0x94], eax }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [ebp - 0x6c], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [ebp - 0x64], eax }
	__asm { lea eax, [ebp - 0xc0] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { call fn_007b7c10 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007bff78 }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_007beb60 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_007bec90 }
	__asm { L_007bff78: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c10f0();
// FUNCTION: ROBLOXSTUDIO 0x007c0d70
extern "C" __declspec(naked) void asm_007c0d70()
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
	__asm { call fn_007c10f0 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_007c0dd6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_007c0db1 }
	__asm { L_007c0da7: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_007c0da7 }
	__asm { L_007c0db1: }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_007c0dcc }
	__asm { L_007c0dc1: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_007c0dc1 }
	__asm { L_007c0dcc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007c0dd6: }
	__asm { mov dword ptr [edx], edx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0048bdb0();
extern "C" void fn_0053f400();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007c10f0
extern "C" __declspec(naked) void asm_007c10f0()
{
	__asm { L_007c10f0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd202e0 }
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
	__asm { jne L_007c116f }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call fn_0053f400 }
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
	__asm { call L_007c10f0 }
	__asm { mov dword ptr [ebx], eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push dword ptr [eax + 8] }
	__asm { mov ecx, esi }
	__asm { call L_007c10f0 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { L_007c116f: }
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
	__asm { call fn_0048bdb0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c0c90();
extern "C" void fn_007c2150();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007c1e30
extern "C" __declspec(naked) void asm_007c1e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x60 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007c1e7e }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_007c2150 }
	__asm { mov esi, eax }
	__asm { jmp L_007c1e80 }
	__asm { L_007c1e7e: }
	__asm { xor esi, esi }
	__asm { L_007c1e80: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007c0c90 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007c1eb1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007c1eb1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_007c1eb1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c2080
extern "C" __declspec(naked) void asm_007c2080()
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
	__asm { mov dword ptr [esi], 0xe57234 }
	__asm { mov dword ptr [esi + 4], 0xe572ac }
	__asm { mov dword ptr [esi + 0x18], 0xe572b4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe572c0 }
	__asm { mov dword ptr [esi + 0x64], 0xe572d0 }
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
	__asm { jb L_007c213d }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c213d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc98e[];
extern "C" void fn_00409860();
extern "C" void fn_006b8a90();
extern "C" void fn_009332f0();
// FUNCTION: ROBLOXSTUDIO 0x007c2150
extern "C" __declspec(naked) void asm_007c2150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd203ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_009332f0 }
	__asm { mov dword ptr [edi], 0xe57084 }
	__asm { mov dword ptr [edi + 4], 0xe570e0 }
	__asm { mov dword ptr [edi + 0x1c], 0xe57114 }
	__asm { mov dword ptr [edi + 0x40], esi }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [edi + 0x4e], eax }
	__asm { mov dword ptr [edi + 0x52], eax }
	__asm { lea ecx, [edi + 0x58] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x58], eax }
	__asm { mov dword ptr [edi + 0x5c], eax }
	__asm { call fn_00409860 }
	__asm { mov dword ptr [edi + 0x58], eax }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test al, al }
	__asm { je L_007c21e1 }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xe5741c }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_007c21e1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004222c0();
extern "C" void fn_0052e690();
extern "C" void fn_007cd560();
extern "C" void fn_00933ef0();
// FUNCTION: ROBLOXSTUDIO 0x007c2780
extern "C" __declspec(naked) void asm_007c2780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push dword ptr [ecx + 0x2c] }
	__asm { push eax }
	__asm { call fn_00933ef0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0xc], 0 }
	__asm { je L_007c2807 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 0x3c }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { je L_007c2807 }
	__asm { call fn_004222c0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { lea ecx, [ecx + 0x3c] }
	__asm { call fn_004222c0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { cmp esi, edi }
	__asm { je L_007c2807 }
	__asm { nop }
	__asm { L_007c27d0: }
	__asm { mov ebx, dword ptr [esi] }
	__asm { test ebx, ebx }
	__asm { je L_007c2800 }
	__asm { add ebx, 0x1c }
	__asm { je L_007c2800 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_0052e690 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_007c2800 }
	__asm { add ebx, -0x1c }
	__asm { je L_007c2800 }
	__asm { mov eax, dword ptr [ebx + 0x7c] }
	__asm { cmp eax, dword ptr [ebp - 8] }
	__asm { je L_007c2812 }
	__asm { L_007c2800: }
	__asm { add esi, 8 }
	__asm { cmp esi, edi }
	__asm { jne L_007c27d0 }
	__asm { L_007c2807: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007c2812: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_011edc13[];
extern "C" char g_012e3580[];
extern "C" void fn_007c2fa0();
// FUNCTION: ROBLOXSTUDIO 0x007c2f00
extern "C" __declspec(naked) void asm_007c2f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov eax, dword ptr [eax + 0x84] }
	__asm { cmp eax, 0x67 }
	__asm { je L_007c2f40 }
	__asm { cmp eax, 0x6a }
	__asm { jne L_007c2f8d }
	__asm { cmp byte ptr [g_011edc13], 0 }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { sete byte ptr [g_011edc13] }
	__asm { call fn_007c2fa0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007c2f40: }
	__asm { mov eax, dword ptr [g_012e3580] }
	__asm { sub eax, 0 }
	__asm { je L_007c2f83 }
	__asm { dec eax }
	__asm { je L_007c2f67 }
	__asm { dec eax }
	__asm { jne L_007c2f8d }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [g_012e3580], eax }
	__asm { call fn_007c2fa0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007c2f67: }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [g_012e3580], 2 }
	__asm { call fn_007c2fa0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007c2f83: }
	__asm { mov dword ptr [g_012e3580], 1 }
	__asm { L_007c2f8d: }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007c2fa0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_004c92a0();
extern "C" void fn_007cd560();
extern "C" void fn_00934180();
// FUNCTION: ROBLOXSTUDIO 0x007c37e0
extern "C" __declspec(naked) void asm_007c37e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push 0x13000f4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { call fn_00934180 }
	__asm { mov edx, dword ptr [ebx + 0x2c] }
	__asm { mov dword ptr [ebx + 0x44], eax }
	__asm { test edx, edx }
	__asm { je L_007c386c }
	__asm { mov eax, dword ptr [edx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_007c3812 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_007c3814 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_007c3814 }
	__asm { L_007c3812: }
	__asm { mov eax, edx }
	__asm { L_007c3814: }
	__asm { test eax, eax }
	__asm { je L_007c386c }
	__asm { push edi }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_007c386b }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007c386b }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_007c386b }
	__asm { call fn_004c92a0 }
	__asm { test eax, eax }
	__asm { je L_007c386b }
	__asm { cmp byte ptr [eax + 0x258], 0 }
	__asm { jne L_007c3863 }
	__asm { cmp byte ptr [eax + 0x257], 0 }
	__asm { jne L_007c3863 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { mov byte ptr [ebx + 0x40], al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007c3863: }
	__asm { mov eax, 1 }
	__asm { mov byte ptr [ebx + 0x40], al }
	__asm { L_007c386b: }
	__asm { pop edi }
	__asm { L_007c386c: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0048bdb0();
extern "C" void fn_007c0d70();
extern "C" void fn_007c14b0();
extern "C" void fn_007c16e0();
extern "C" void fn_007c2560();
// FUNCTION: ROBLOXSTUDIO 0x007c3e70
extern "C" __declspec(naked) void asm_007c3e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 0x40] }
	__asm { mov ecx, edi }
	__asm { call fn_007c2560 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov edx, dword ptr [edx] }
	__asm { lea ebx, [esi + 0x58] }
	__asm { lea eax, [ebp - 4] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { push esi }
	__asm { push dword ptr [esi] }
	__asm { push edx }
	__asm { push dword ptr [edx] }
	__asm { push eax }
	__asm { call fn_007c14b0 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, edi }
	__asm { call fn_007c2560 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { push edx }
	__asm { push dword ptr [edx] }
	__asm { lea eax, [ebp + 8] }
	__asm { push ecx }
	__asm { push dword ptr [ecx] }
	__asm { push eax }
	__asm { call fn_007c16e0 }
	__asm { add esp, 0x18 }
	__asm { cmp ebx, esi }
	__asm { je L_007c3ef5 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0048bdb0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push esi }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { call fn_007c0d70 }
	__asm { L_007c3ef5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0048bdb0();
extern "C" void fn_007c0d70();
extern "C" void fn_007c1910();
extern "C" void fn_007c2560();
// FUNCTION: ROBLOXSTUDIO 0x007c3f00
extern "C" __declspec(naked) void asm_007c3f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 0x40] }
	__asm { mov ecx, edi }
	__asm { call fn_007c2560 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov edx, dword ptr [edx] }
	__asm { lea ebx, [esi + 0x58] }
	__asm { lea eax, [ebp - 4] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { push esi }
	__asm { push dword ptr [esi] }
	__asm { push edx }
	__asm { push dword ptr [edx] }
	__asm { push eax }
	__asm { call fn_007c1910 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, edi }
	__asm { call fn_007c2560 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { push edx }
	__asm { push dword ptr [edx] }
	__asm { lea eax, [ebp + 8] }
	__asm { push ecx }
	__asm { push dword ptr [ecx] }
	__asm { push eax }
	__asm { call fn_007c1910 }
	__asm { add esp, 0x18 }
	__asm { cmp ebx, esi }
	__asm { je L_007c3f85 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0048bdb0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push esi }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { call fn_007c0d70 }
	__asm { L_007c3f85: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b0630();
extern "C" void fn_007c5810();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007c3f90
extern "C" __declspec(naked) void asm_007c3f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd204a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x2c }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007c3ff0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe57c9c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov byte ptr [eax + 0x10], 0 }
	__asm { jmp L_007c3ff2 }
	__asm { L_007c3ff0: }
	__asm { xor eax, eax }
	__asm { L_007c3ff2: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_007c402b }
	__asm { mov ecx, dword ptr [ebp + 0x24] }
	__asm { test ecx, ecx }
	__asm { je L_007c402b }
	__asm { cmp dword ptr [ebp + 0x18], 0 }
	__asm { je L_007c4022 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_004b0630 }
	__asm { mov ecx, dword ptr [ebp + 0x24] }
	__asm { L_007c4022: }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c402b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c5810 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012e3a54[];
extern "C" char g_012e4b10[];
extern "C" void fn_00403540();
extern "C" void fn_007c4460();
extern "C" void fn_007c5ba0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c4180
extern "C" __declspec(naked) void asm_007c4180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd204fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_007c4460 }
	__asm { mov eax, dword ptr [g_012e3a54] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_007c4225 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3a54], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5749c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007c5ba0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e3928 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde4710 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007c4225: }
	__asm { mov dword ptr [esi + 0x28], 0x12e3928 }
	__asm { inc dword ptr [g_012e4b10] }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_007c4243 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c4243: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012e3924[];
extern "C" char g_012e4b14[];
extern "C" void fn_00403540();
extern "C" void fn_007c4520();
extern "C" void fn_007c5ba0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c4260
extern "C" __declspec(naked) void asm_007c4260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2052e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_007c4520 }
	__asm { mov eax, dword ptr [g_012e3924] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_007c4305 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3924], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe574ac }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007c5ba0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e37f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde4720 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007c4305: }
	__asm { mov dword ptr [esi + 0x28], 0x12e37f8 }
	__asm { inc dword ptr [g_012e4b14] }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_007c4323 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c4323: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_006b47b0();
extern "C" void fn_006b5ab0();
// FUNCTION: ROBLOXSTUDIO 0x007c45e0
extern "C" __declspec(naked) void asm_007c45e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15dd8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x14], 7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov word ptr [esi], ax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_006b5ab0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ebx, eax }
	__asm { mov edi, dword ptr [ecx + 0x10] }
	__asm { test edi, edi }
	__asm { je L_007c464b }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { cmp edx, 0x10 }
	__asm { jb L_007c4634 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp L_007c4636 }
	__asm { L_007c4634: }
	__asm { mov eax, ecx }
	__asm { L_007c4636: }
	__asm { cmp edx, 0x10 }
	__asm { jb L_007c463d }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_007c463d: }
	__asm { push ebx }
	__asm { push esi }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_006b47b0 }
	__asm { add esp, 0x10 }
	__asm { L_007c464b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403160();
extern "C" void fn_004b0630();
extern "C" void fn_007c3f90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c4660
extern "C" __declspec(naked) void asm_007c4660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd20568 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub esp, 0x1c }
	__asm { mov eax, esp }
	__asm { mov dword ptr [edi], esi }
	__asm { push esi }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { call fn_007c3f90 }
	__asm { push esi }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { add esp, 0xc }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_007c46db }
	__asm { mov ecx, dword ptr [ebp + 0x24] }
	__asm { test ecx, ecx }
	__asm { je L_007c46db }
	__asm { cmp dword ptr [ebp + 0x18], 0 }
	__asm { je L_007c46d2 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_004b0630 }
	__asm { mov ecx, dword ptr [ebp + 0x24] }
	__asm { L_007c46d2: }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c46db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_012e3694[];
extern "C" char g_012e3698[];
extern "C" char g_012e3a70[];
extern "C" char g_012e3a74[];
extern "C" char g_012e3a78[];
extern "C" char g_012e3a7c[];
extern "C" char g_012e3a80[];
extern "C" char g_012e3a84[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x007c46f0
extern "C" __declspec(naked) void asm_007c46f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2082e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e3a84] }
	__asm { test al, 1 }
	__asm { jne L_007c4732 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3a84], eax }
	__asm { push 0xe57490 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3a80], eax }
	__asm { L_007c4732: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2084e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e3a7c] }
	__asm { test al, 1 }
	__asm { jne L_007c4782 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3a7c], eax }
	__asm { push 0xe5748c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3a78], eax }
	__asm { L_007c4782: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2058e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e3698] }
	__asm { test al, 1 }
	__asm { jne L_007c47d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3698], eax }
	__asm { push 0xe69704 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3694], eax }
	__asm { L_007c47d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2080e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e3a74] }
	__asm { test al, 1 }
	__asm { jne L_007c4822 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3a74], eax }
	__asm { push 0xe57494 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3a70], eax }
	__asm { L_007c4822: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c4fe0();
extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x007c4d80
extern "C" __declspec(naked) void asm_007c4d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a7ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_007c4fe0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe57b48 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d5550 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007c4e2e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007c4e2e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007c4fe0();
extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x007c4e50
extern "C" __declspec(naked) void asm_007c4e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a7ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_007c4fe0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe57b80 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007c4efe }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007c4efe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e3a54[];
extern "C" void fn_006b9740();
extern "C" void fn_007c5ba0();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c4fe0
extern "C" __declspec(naked) void asm_007c4fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd205d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e3a54] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_007c505a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3a54], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5749c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007c5ba0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e3928 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde4710 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_007c505a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e3928 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe57b3c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_007c50d2 }
	__asm { push 0x11edf54 }
	__asm { mov ecx, 0x11edf54 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007c50d2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007c50bd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007c50d2 }
	__asm { L_007c50bd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007c50d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e3924[];
extern "C" void fn_006b9740();
extern "C" void fn_007c5ba0();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c50f0
extern "C" __declspec(naked) void asm_007c50f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd205f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e3924] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_007c516a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3924], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe574ac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_007c5ba0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e37f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde4720 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_007c516a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e37f8 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe57c28 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_007c51e2 }
	__asm { push 0x11edf80 }
	__asm { mov ecx, 0x11edf80 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007c51e2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007c51cd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007c51e2 }
	__asm { L_007c51cd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007c51e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_004038a0();
extern "C" void fn_0041ace0();
extern "C" void fn_007b5bb0();
extern "C" void fn_007c4340();
extern "C" void fn_007c6300();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c5200
extern "C" __declspec(naked) void asm_007c5200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2061e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { sub esp, 0x18 }
	__asm { mov esi, ecx }
	__asm { push esp }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007c6300 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { call fn_007c4340 }
	__asm { mov dword ptr [esi], 0xe57a74 }
	__asm { mov dword ptr [esi + 4], 0xe57aec }
	__asm { mov dword ptr [esi + 0x18], 0xe57af4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe57b00 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0xa4], 0 }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { push 0xf }
	__asm { push 0xe57bf8 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jb L_007c52b3 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c52b3: }
	__asm { mov ecx, esi }
	__asm { call fn_0041ace0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_007b5bb0();
extern "C" void fn_007c43d0();
extern "C" void fn_007c6420();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c52d0
extern "C" __declspec(naked) void asm_007c52d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2061e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { sub esp, 0x18 }
	__asm { mov esi, ecx }
	__asm { push esp }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007c6420 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { call fn_007c43d0 }
	__asm { mov dword ptr [esi], 0xe57894 }
	__asm { mov dword ptr [esi + 4], 0xe5790c }
	__asm { mov dword ptr [esi + 0x18], 0xe57914 }
	__asm { mov dword ptr [esi + 0x1c], 0xe57920 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0xa4], 0 }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { push 0x13 }
	__asm { push 0xe57c3c }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_007c537f }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c537f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_004038a0();
extern "C" void fn_006b98c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
extern "C" void fn_00d02cc4();
// FUNCTION: ROBLOXSTUDIO 0x007c60d0
extern "C" __declspec(naked) void asm_007c60d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd208c1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { lea edx, [ebp + 0xc] }
	__asm { cmovae edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { jne L_007c613b }
	__asm { xor ecx, ecx }
	__asm { jmp L_007c614b }
	__asm { L_007c613b: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_007c6141: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_007c6141 }
	__asm { sub ecx, edi }
	__asm { pop edi }
	__asm { L_007c614b: }
	__asm { push ebx }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00d02cc4 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jb L_007c617e }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c617e: }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { je L_007c61a7 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_007c6194 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c6194: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
	__asm { L_007c61a7: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { cmovae eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push 0xe57c50 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { jb L_007c61d0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_007c61d0: }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x20], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_005dde10();
extern "C" void fn_006b47b0();
extern "C" void fn_006b5ab0();
extern "C" void fn_007c73d0();
extern "C" void fn_008be480();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c6300
extern "C" __declspec(naked) void asm_007c6300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_008be480 }
	__asm { add esp, 0x10 }
	__asm { mov esi, eax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 7 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x28], ax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006b5ab0 }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { mov edi, eax }
	__asm { test edx, edx }
	__asm { je L_007c638b }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_007c6371 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_007c6373 }
	__asm { L_007c6371: }
	__asm { mov eax, esi }
	__asm { L_007c6373: }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_007c637a }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_007c637a: }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_006b47b0 }
	__asm { add esp, 0x10 }
	__asm { L_007c638b: }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { jb L_007c63a0 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c63a0: }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_005dde10 }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { setne bl }
	__asm { cmp dword ptr [ebp - 0x44], 0x10 }
	__asm { jb L_007c63d7 }
	__asm { push dword ptr [ebp - 0x58] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c63d7: }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { je L_007c63ef }
	__asm { call fn_006b5ab0 }
	__asm { push eax }
	__asm { push 0xe57be0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_007c73d0 }
	__asm { L_007c63ef: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_005dde10 }
	__asm { cmp dword ptr [ebp - 0x14], 8 }
	__asm { jb L_007c640c }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c640c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005dde10();
extern "C" void fn_006b47b0();
extern "C" void fn_006b5ab0();
extern "C" void fn_007c73d0();
extern "C" void fn_008be480();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c6420
extern "C" __declspec(naked) void asm_007c6420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 1 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_008be480 }
	__asm { add esp, 0x10 }
	__asm { mov esi, eax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 7 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x28], ax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006b5ab0 }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { mov edi, eax }
	__asm { test edx, edx }
	__asm { je L_007c64ab }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_007c6491 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_007c6493 }
	__asm { L_007c6491: }
	__asm { mov eax, esi }
	__asm { L_007c6493: }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_007c649a }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_007c649a: }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_006b47b0 }
	__asm { add esp, 0x10 }
	__asm { L_007c64ab: }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { jb L_007c64c0 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c64c0: }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_005dde10 }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { setne bl }
	__asm { cmp dword ptr [ebp - 0x44], 0x10 }
	__asm { jb L_007c64f7 }
	__asm { push dword ptr [ebp - 0x58] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c64f7: }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { je L_007c650f }
	__asm { call fn_006b5ab0 }
	__asm { push eax }
	__asm { push 0xe57c08 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_007c73d0 }
	__asm { L_007c650f: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_005dde10 }
	__asm { cmp dword ptr [ebp - 0x14], 8 }
	__asm { jb L_007c652c }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c652c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" void fn_00403540();
extern "C" void fn_0048b440();
extern "C" void fn_0048b5f0();
extern "C" void fn_0048c0b0();
extern "C" void fn_0048cba0();
extern "C" void fn_0048f020();
extern "C" void fn_007b6d60();
extern "C" void fn_007c4c20();
extern "C" void fn_00903d20();
extern "C" void fn_00905770();
extern "C" void fn_00906f60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c69f0
extern "C" __declspec(naked) void asm_007c69f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd209c3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xdc }
	__asm { push edi }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [ebp - 0xd], 0 }
	__asm { call fn_007c4c20 }
	__asm { cmp byte ptr [edi + 0xa0], 0 }
	__asm { jne L_007c6b2c }
	__asm { cmp byte ptr [ebp - 0xd], 0 }
	__asm { jne L_007c6b2c }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x88] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_007c6b1b }
	__asm { push esi }
	__asm { call fn_00906f60 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x40], esi }
	__asm { push 2 }
	__asm { push 3 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007b6d60 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { push 1 }
	__asm { push 0x40 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { cmovae eax, dword ptr [ebp - 0x28] }
	__asm { push 0x22 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xe8] }
	__asm { call fn_0048cba0 }
	__asm { lea eax, [ebp - 0xe8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00903d20 }
	__asm { mov dword ptr [ebp - 0x38], 0xe57b10 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00905770 }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0048c0b0 }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x88] }
	__asm { call fn_0048f020 }
	__asm { lea ecx, [ebp - 0x88] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_007c6b1a }
	__asm { mov ecx, esi }
	__asm { call fn_0048b440 }
	__asm { push esi }
	__asm { call fn_0048b5f0 }
	__asm { add esp, 4 }
	__asm { L_007c6b1a: }
	__asm { pop esi }
	__asm { L_007c6b1b: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_007c6b2c }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c6b2c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a71c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007c7f00();
extern "C" void fn_007c8530();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c6c40
extern "C" __declspec(naked) void asm_007c6c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd209f6 }
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
	__asm { call fn_007c7f00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131a71c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_007c6cff }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a71c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe57cbc }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131a5f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_007c6cff: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131a5f0 }
	__asm { call fn_007c8530 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe57db4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007c6d7d }
	__asm { push 0x12d2018 }
	__asm { mov ecx, 0x12d2018 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007c6d7d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007c6d68 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007c6d7d }
	__asm { L_007c6d68: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007c6d7d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a71c[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007c7f60();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c6d90
extern "C" __declspec(naked) void asm_007c6d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20a26 }
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
	__asm { call fn_007c7f60 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131a71c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_007c6e4f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a71c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe57cbc }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131a5f0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_007c6e4f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131a5f0 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe57df0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007c6ecd }
	__asm { push 0x12d2018 }
	__asm { mov ecx, 0x12d2018 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007c6ecd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007c6eb8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007c6ecd }
	__asm { L_007c6eb8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007c6ecd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a84c[];
extern "C" void fn_0041eb40();
extern "C" void fn_006b9740();
extern "C" void fn_007c7fc0();
extern "C" void fn_007c85f0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c6ee0
extern "C" __declspec(naked) void asm_007c6ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20a56 }
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
	__asm { call fn_007c7fc0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131a84c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_007c6f9f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a84c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x101e404 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041eb40 }
	__asm { push eax }
	__asm { mov ecx, 0x131a720 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_007c6f9f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131a720 }
	__asm { call fn_007c85f0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe57fc4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007c701d }
	__asm { push 0x11e5790 }
	__asm { mov ecx, 0x11e5790 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007c701d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007c7008 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007c701d }
	__asm { L_007c7008: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007c701d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012e3f28[];
extern "C" char g_012e3f2c[];
extern "C" char g_012e3f30[];
extern "C" char g_012e3f34[];
extern "C" void fn_00403540();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c7180
extern "C" __declspec(naked) void asm_007c7180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e3f34] }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007c71dc }
	__asm { or eax, 1 }
	__asm { push 0xde4cb0 }
	__asm { mov dword ptr [g_012e3f34], eax }
	__asm { mov dword ptr [g_012e3f28], 0x11ef0a4 }
	__asm { mov dword ptr [g_012e3f30], 0x98cf00 }
	__asm { mov dword ptr [g_012e3f2c], 0x8846b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007c71dc: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp ecx, 0x12e3f28 }
	__asm { jne L_007c7204 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { lea esi, [edi + 4] }
	__asm { cmp esi, ebx }
	__asm { je L_007c71fc }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_007c71fc: }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { jmp L_007c725a }
	__asm { L_007c7204: }
	__asm { test ecx, ecx }
	__asm { je L_007c721a }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_007c721a: }
	__asm { lea ebx, [edi + 4] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_007c7254 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { L_007c7254: }
	__asm { mov dword ptr [edi], 0x12e3f28 }
	__asm { L_007c725a: }
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

extern "C" char g_012e3f38[];
extern "C" char g_012e3f3c[];
extern "C" char g_012e3f40[];
extern "C" char g_012e3f44[];
extern "C" void fn_00886380();
extern "C" void fn_00886510();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c7270
extern "C" __declspec(naked) void asm_007c7270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e3f44] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007c72ca }
	__asm { or eax, 1 }
	__asm { push 0xde4cc0 }
	__asm { mov dword ptr [g_012e3f44], eax }
	__asm { mov dword ptr [g_012e3f38], 0x11ef0c0 }
	__asm { mov dword ptr [g_012e3f40], 0x7c94e0 }
	__asm { mov dword ptr [g_012e3f3c], 0x7c9620 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007c72ca: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12e3f38 }
	__asm { jne L_007c72f2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00886510 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007c72f2: }
	__asm { test ecx, ecx }
	__asm { je L_007c7308 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007c7308: }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007c7324 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00886380 }
	__asm { L_007c7324: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x12e3f38 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_006b47b0();
extern "C" void fn_006b6610();
extern "C" void fn_006b6660();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c73d0
extern "C" __declspec(naked) void asm_007c73d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp byte ptr [esi], 0 }
	__asm { mov edi, ecx }
	__asm { je L_007c749f }
	__asm { push ebx }
	__asm { call fn_006b6610 }
	__asm { cmp byte ptr [esi], 0 }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { jne L_007c741e }
	__asm { xor ecx, ecx }
	__asm { jmp L_007c742c }
	__asm { L_007c741e: }
	__asm { mov ecx, esi }
	__asm { lea edx, [ecx + 1] }
	__asm { L_007c7423: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_007c7423 }
	__asm { sub ecx, edx }
	__asm { L_007c742c: }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_004038a0 }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_007c7468 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { lea esi, [ebp - 0x24] }
	__asm { cmovae esi, dword ptr [ebp - 0x24] }
	__asm { lea edx, [ebp - 0x24] }
	__asm { cmovae edx, dword ptr [ebp - 0x24] }
	__asm { push edi }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_006b47b0 }
	__asm { add esp, 0x10 }
	__asm { L_007c7468: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_007c7480 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c7480: }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { test ebx, ebx }
	__asm { je L_007c749e }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_006b6660 }
	__asm { L_007c749e: }
	__asm { pop ebx }
	__asm { L_007c749f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_007c8740();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c74c0
extern "C" __declspec(naked) void asm_007c74c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d9d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_007c8740 }
	__asm { mov edi, eax }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push -1 }
	__asm { mov dword ptr [ebx], ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebx + 0x18], 0xf }
	__asm { mov dword ptr [ebx + 0x14], 0 }
	__asm { push edi }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebx + 4], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebx + 0x1c], eax }
	__asm { jb L_007c7563 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c7563: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { jb L_007c7586 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c7586: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3f18[];
extern "C" char g_012e3f1c[];
extern "C" char g_012e3f20[];
extern "C" char g_012e3f24[];
extern "C" char g_012e3f50[];
extern "C" char g_012e3f54[];
extern "C" void fn_007cb250();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x007c75a0
extern "C" __declspec(naked) void asm_007c75a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd20e7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e3f1c] }
	__asm { test al, 1 }
	__asm { jne L_007c75e2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3f1c], eax }
	__asm { push 0xe57cb0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3f18], eax }
	__asm { L_007c75e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd20afe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e3f24] }
	__asm { test al, 1 }
	__asm { jne L_007c7632 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3f24], eax }
	__asm { push 0xe6f65c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3f20], eax }
	__asm { L_007c7632: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd20a9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e3f54] }
	__asm { test al, 1 }
	__asm { jne L_007c767a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3f54], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012e3f50], eax }
	__asm { L_007c767a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_00403540();
extern "C" void fn_007c7340();
extern "C" void fn_007d29b0();
// FUNCTION: ROBLOXSTUDIO 0x007c7ce0
extern "C" __declspec(naked) void asm_007c7ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d3d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11ef0a4 }
	__asm { je L_007c7dbc }
	__asm { push eax }
	__asm { mov ecx, 0x11ef0a4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007c7dbc }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007c7d4d }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_007c7d4d: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_007d29b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov esi, eax }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007c7df0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007c7dbc: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_007c7340 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { L_007c7df0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" void fn_00885f10();
extern "C" void fn_00885fa0();
extern "C" void fn_00886380();
// FUNCTION: ROBLOXSTUDIO 0x007c7e10
extern "C" __declspec(naked) void asm_007c7e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20b61 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11ef0c0 }
	__asm { je L_007c7ec9 }
	__asm { push eax }
	__asm { mov ecx, 0x11ef0c0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007c7ec9 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007c7e78 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_007c7e78: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00885fa0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00886380 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007c7eb6 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_007c7eb6: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007c7ec9: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_00885f10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { call fn_00886380 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004030b0();
extern "C" void fn_00403a30();
extern "C" void fn_007ca480();
extern "C" void fn_007ca7b0();
extern "C" void fn_00886380();
// FUNCTION: ROBLOXSTUDIO 0x007c8020
extern "C" __declspec(naked) void asm_007c8020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd20b81 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test edi, edi }
	__asm { je L_007c8049 }
	__asm { lea eax, [edi - 0xc] }
	__asm { jmp L_007c804b }
	__asm { L_007c8049: }
	__asm { xor eax, eax }
	__asm { L_007c804b: }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { inc eax }
	__asm { push eax }
	__asm { call fn_007ca7b0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00403a30 }
	__asm { push eax }
	__asm { call fn_004030b0 }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, edi }
	__asm { mov ebx, edx }
	__asm { lea eax, [eax + ebx*4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007ca480 }
	__asm { test al, al }
	__asm { jne L_007c80c1 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { test eax, eax }
	__asm { je L_007c80ac }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add eax, -0x24 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_007c80ac: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_007c80c1: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_007c80ef }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00886380 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { lea eax, [esi + 0x24] }
	__asm { jmp L_007c80f1 }
	__asm { L_007c80ef: }
	__asm { xor eax, eax }
	__asm { L_007c80f1: }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], eax }
	__asm { cmp dword ptr [edi + 0x1c], ebx }
	__asm { jbe L_007c8102 }
	__asm { mov dword ptr [edi + 0x1c], ebx }
	__asm { L_007c8102: }
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
extern "C" void fn_007c8020();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007c8120
extern "C" __declspec(naked) void asm_007c8120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20b90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x28 }
	__asm { mov ebx, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_007c815c }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_007c815c: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007c8020 }
	__asm { mov edi, eax }
	__asm { cmp edi, esi }
	__asm { jne L_007c8197 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { inc dword ptr [ebx + 0x2c] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_007c8197: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a84c[];
extern "C" void fn_0041eb40();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007c8420
extern "C" __declspec(naked) void asm_007c8420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20bf6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0131a84c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_007c849a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a84c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x101e404 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041eb40 }
	__asm { push eax }
	__asm { mov ecx, 0x131a720 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3a0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_007c849a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x131a720 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe58000 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_007c8512 }
	__asm { push 0x11e5790 }
	__asm { mov ecx, 0x11e5790 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_007c8512 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007c84fd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007c8512 }
	__asm { L_007c84fd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007c8512: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00793ca0();
extern "C" void fn_007d58d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c8530
extern "C" __declspec(naked) void asm_007c8530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29d6b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d58d0 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xe57d78 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_007c85c7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_007c85b6 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_007c85b6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_007c85c7 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_007c85c7: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00793ca0();
extern "C" void fn_00886230();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c85f0
extern "C" __declspec(naked) void asm_007c85f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29d6b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00886230 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xe57f88 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_007c8687 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_007c8676 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_007c8676: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_007c8687 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_007c8687: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c8740
extern "C" __declspec(naked) void asm_007c8740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd32150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { jb L_007c87c8 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c87c8: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_007c87d9 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c87d9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_004115f0();
extern "C" void fn_0043f5a0();
extern "C" void fn_007aa110();
extern "C" void fn_007c70c0();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x007c87f0
extern "C" __declspec(naked) void asm_007c87f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20c55 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0xe57cbc }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007c70c0 }
	__asm { lea esi, [edi + 0x64] }
	__asm { mov dword ptr [edi], 0xe57e2c }
	__asm { mov dword ptr [edi + 4], 0xe57eb4 }
	__asm { mov dword ptr [edi + 0x18], 0xe57ebc }
	__asm { mov dword ptr [edi + 0x1c], 0xe57ec8 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { mov dword ptr [edi + 0x88], 0 }
	__asm { mov byte ptr [edi + 0x8c], 0 }
	__asm { mov word ptr [edi + 0x8e], 0x100 }
	__asm { mov dword ptr [edi + 0x90], 0 }
	__asm { lea eax, [edi + 0x94] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x7aa230 }
	__asm { push 0x12e1890 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_004115f0 }
	__asm { call fn_007aa110 }
	__asm { lea eax, [edi + 0x98] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_004115f0 }
	__asm { add esp, 0x10 }
	__asm { call fn_0043f5a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c68[];
extern "C" void fn_007af680();
extern "C" void fn_007c93f0();
extern "C" void fn_008b19b0();
// FUNCTION: ROBLOXSTUDIO 0x007c89b0
extern "C" __declspec(naked) void asm_007c89b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20ca6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [edi], 0xe5822c }
	__asm { mov dword ptr [edi + 4], 0xe582a4 }
	__asm { mov dword ptr [edi + 0x18], 0xe582ac }
	__asm { mov dword ptr [edi + 0x1c], 0xe582b8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007c93f0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { inc dword ptr [g_012e4c68] }
	__asm { mov byte ptr [edi + 0x64], 1 }
	__asm { mov dword ptr [edi], 0xe582cc }
	__asm { mov dword ptr [edi + 4], 0xe58344 }
	__asm { mov dword ptr [edi + 0x18], 0xe5834c }
	__asm { mov dword ptr [edi + 0x1c], 0xe58358 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { lea ecx, [edi + 0x6c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x6c], eax }
	__asm { lea ecx, [edi + 0x74] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x74], eax }
	__asm { mov byte ptr [edi + 0x7c], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
extern "C" void fn_007b00e0();
extern "C" void fn_007c9b10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c8ea0
extern "C" __declspec(naked) void asm_007c8ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20d50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov eax, dword ptr [edi + 0x74] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x74] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007c9b10 }
	__asm { push dword ptr [edi + 0x74] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [edi + 0x6c] }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x6c] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_007c9b10 }
	__asm { push dword ptr [edi + 0x6c] }
	__asm { call fn_00cf6522 }
	__asm { lea esi, [edi + 0x68] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007c8f2a }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_007c8f2a: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00405b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c9590
extern "C" __declspec(naked) void asm_007c9590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ba38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_007c95fe }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_007c95e4 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c95e4: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c95fe: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { pop esi }
	__asm { jb L_007c9610 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c9610: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { test esi, esi }
	__asm { je L_007c9659 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_007c963f }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c963f: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c9659: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_007c9669 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c9669: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00405b90();
extern "C" void fn_00886570();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c9a10
extern "C" __declspec(naked) void asm_007c9a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20e60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00405b90 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00886570 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov bl, al }
	__asm { test esi, esi }
	__asm { je L_007c9a92 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_007c9a78 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c9a78: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c9a92: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_007c9aa3 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c9aa3: }
	__asm { mov esi, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { test esi, esi }
	__asm { je L_007c9ae6 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_007c9acc }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c9acc: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c9ae6: }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { jb L_007c9af7 }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c9af7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e3b2c[];
extern "C" void fn_00402fd0();
extern "C" void fn_007c9220();
extern "C" void fn_00c2cf50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c9d30
extern "C" __declspec(naked) void asm_007c9d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00c2cf50 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007c9dbf }
	__asm { mov eax, dword ptr [esi + 0x9c] }
	__asm { lea ecx, [esi + 0x9c] }
	__asm { cmp eax, dword ptr [g_012e3b2c] }
	__asm { je L_007c9dbf }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_007c9220 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [esi + 0xa4] }
	__asm { jb L_007c9d92 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_007c9d92: }
	__asm { push ebx }
	__asm { push edx }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { setne bl }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_007c9db5 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c9db5: }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { mov eax, 0x12fb09c }
	__asm { jne L_007c9dc5 }
	__asm { L_007c9dbf: }
	__asm { mov eax, dword ptr [esi + 0x9c] }
	__asm { L_007c9dc5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011ef024[];
extern "C" char g_011ef034[];
extern "C" char g_011ef038[];
extern "C" void fn_006b47b0();
extern "C" void fn_006b5ab0();
extern "C" void fn_006b8290();
extern "C" void fn_007c73d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c9ff0
extern "C" __declspec(naked) void asm_007c9ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd20ea0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { cmp dword ptr [g_011ef034], 0 }
	__asm { jne L_007ca024 }
	__asm { xor al, al }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007ca024: }
	__asm { xor eax, eax }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x18], 7 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov word ptr [ebp - 0x2c], ax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_006b5ab0 }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [g_011ef034] }
	__asm { test eax, eax }
	__asm { je L_007ca07d }
	__asm { cmp dword ptr [g_011ef038], 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, 0x11ef024 }
	__asm { mov esi, edi }
	__asm { cmovae esi, dword ptr [g_011ef024] }
	__asm { cmovae edi, dword ptr [g_011ef024] }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_006b47b0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_007ca07d: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006b5ab0 }
	__asm { push eax }
	__asm { push 0xe585bc }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_007c73d0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_006b8290 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test ecx, ecx }
	__asm { je L_007ca0be }
	__asm { cmp ecx, 1 }
	__asm { je L_007ca0be }
	__asm { mov bl, 1 }
	__asm { jmp L_007ca0c0 }
	__asm { L_007ca0be: }
	__asm { xor bl, bl }
	__asm { L_007ca0c0: }
	__asm { cmp dword ptr [ebp - 0x18], 8 }
	__asm { jb L_007ca0d1 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007ca0d1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b98c0();
extern "C" void fn_00774920();
extern "C" void fn_008523c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007ca860
extern "C" __declspec(naked) void asm_007ca860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0xe585e4 }
	__asm { push 0xf13380 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_007ca8b2 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007ca8b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { or esi, 0xffffffff }
	__asm { call fn_008523c0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007ca8f4 }
	__asm { mov esi, dword ptr [eax + 0xdfc] }
	__asm { L_007ca8f4: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0x1012c70 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { pop esi }
	__asm { jb L_007ca916 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_007ca916: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0xe585d0 }
	__asm { push 0xf13380 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_007ca93e }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007ca93e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0044e490();
extern "C" void fn_007b4f50();
extern "C" void fn_007c9470();
extern "C" void fn_008e0460();
extern "C" void fn_008e2cc0();
// FUNCTION: ROBLOXSTUDIO 0x007cab90
extern "C" __declspec(naked) void asm_007cab90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push ebx }
	__asm { lea edi, [esi + 0x64] }
	__asm { push edi }
	__asm { call fn_0044e490 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007cac0e }
	__asm { cmp edi, ebx }
	__asm { je L_007cabbc }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_007cabbc: }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x8e], 0 }
	__asm { call fn_007c9470 }
	__asm { mov ecx, dword ptr [esi + 0x80] }
	__asm { mov edi, eax }
	__asm { cmp ecx, edi }
	__asm { je L_007cac02 }
	__asm { test ecx, ecx }
	__asm { je L_007cabf0 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { call fn_008e0460 }
	__asm { L_007cabf0: }
	__asm { mov dword ptr [esi + 0x80], edi }
	__asm { test edi, edi }
	__asm { je L_007cac02 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_008e2cc0 }
	__asm { L_007cac02: }
	__asm { push 0x12e3ad4 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_007cac0e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004038a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cb6d0();
// FUNCTION: ROBLOXSTUDIO 0x007caf60
extern "C" __declspec(naked) void asm_007caf60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd607bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test al, al }
	__asm { je L_007cafcc }
	__asm { test bl, 3 }
	__asm { je L_007cafcc }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007cafbb }
	__asm { push 0x130 }
	__asm { push 0x10042f8 }
	__asm { push 0x1004338 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cafcc }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007cafbb: }
	__asm { movzx eax, al }
	__asm { push 0x1004360 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cafcc: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebx + 0x18], 0xf }
	__asm { mov dword ptr [ebx + 0x14], 0 }
	__asm { mov byte ptr [ebx + 4], 0 }
	__asm { cmp byte ptr [esi], 0 }
	__asm { jne L_007cafec }
	__asm { xor ecx, ecx }
	__asm { jmp L_007caffc }
	__asm { L_007cafec: }
	__asm { mov ecx, esi }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_007caff2: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_007caff2 }
	__asm { sub ecx, edi }
	__asm { pop edi }
	__asm { L_007caffc: }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_004038a0 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb6d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008f6780();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007cb030
extern "C" __declspec(naked) void asm_007cb030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 8], 0 }
	__asm { je L_007cb053 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { test eax, eax }
	__asm { je L_007cb053 }
	__asm { add eax, -0x1c }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_007cb05a }
	__asm { L_007cb053: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_007cb05a: }
	__asm { lea esi, [ebp - 4] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_007cb0a4 }
	__asm { push edi }
	__asm { L_007cb064: }
	__asm { mov edi, dword ptr [esi + 0x18] }
	__asm { test edi, edi }
	__asm { je L_007cb097 }
	__asm { cmp dword ptr [edi + 0x18], 0x10 }
	__asm { jb L_007cb07c }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007cb07c: }
	__asm { mov dword ptr [edi + 0x18], 0xf }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi + 4], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007cb097: }
	__asm { mov esi, dword ptr [esi + 0x1c] }
	__asm { test esi, esi }
	__asm { je L_007cb0a3 }
	__asm { add esi, -0x1c }
	__asm { jne L_007cb064 }
	__asm { L_007cb0a3: }
	__asm { pop edi }
	__asm { L_007cb0a4: }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_007cb0da }
	__asm { cmp dword ptr [ebx + 8], 0 }
	__asm { je L_007cb0c1 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008f6780 }
	__asm { L_007cb0c1: }
	__asm { push dword ptr [ebx + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebx + 0x14], 0 }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { L_007cb0da: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e3f64[];
extern "C" char g_012e3f68[];
extern "C" char g_012e3f6c[];
extern "C" void fn_004030b0();
extern "C" void fn_004115f0();
extern "C" void fn_007cb640();
extern "C" void fn_0095a840();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf76d2();
extern "C" void fn_00cf76d8();
// FUNCTION: ROBLOXSTUDIO 0x007cb550
extern "C" __declspec(naked) void asm_007cb550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd20fc8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push 0x7cb460 }
	__asm { push 0x12e3f58 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e3f6c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007cb5a5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e3f6c], eax }
	__asm { push 0xde4cd0 }
	__asm { mov dword ptr [g_012e3f68], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007cb5a5: }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0x12e3f68 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { call fn_00cf76d2 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb640 }
	__asm { mov esi, eax }
	__asm { movzx ecx, byte ptr [esi] }
	__asm { inc ecx }
	__asm { add ecx, esi }
	__asm { je L_007cb5d5 }
	__asm { inc ecx }
	__asm { jmp L_007cb5d7 }
	__asm { L_007cb5d5: }
	__asm { xor ecx, ecx }
	__asm { L_007cb5d7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_004030b0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_0095a840 }
	__asm { call fn_007cb640 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { test eax, eax }
	__asm { je L_007cb602 }
	__asm { mov esi, dword ptr [eax + 0x18] }
	__asm { jmp L_007cb61a }
	__asm { L_007cb602: }
	__asm { push 0x7cb420 }
	__asm { push 0x12e3f8c }
	__asm { call fn_004115f0 }
	__asm { mov esi, dword ptr [g_012e3f64] }
	__asm { add esp, 8 }
	__asm { L_007cb61a: }
	__asm { cmp dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_007cb62f }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call fn_00cf76d8 }
	__asm { L_007cb62f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cc3a0();
extern "C" void fn_007cc4c0();
// FUNCTION: ROBLOXSTUDIO 0x007cc300
extern "C" __declspec(naked) void asm_007cc300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { cmp dword ptr [eax + 0x18], 0x10 }
	__asm { mov esi, dword ptr [eax + 0x14] }
	__asm { lea ecx, [eax + 4] }
	__asm { push edi }
	__asm { jb L_007cc31a }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_007cc31a: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { add esi, ecx }
	__asm { cmp ecx, esi }
	__asm { jae L_007cc33b }
	__asm { L_007cc323: }
	__asm { mov al, byte ptr [ecx] }
	__asm { xor al, byte ptr [ebx] }
	__asm { shr dword ptr [ebx], 8 }
	__asm { movzx eax, al }
	__asm { inc ecx }
	__asm { mov eax, dword ptr [eax*4 + 0x12e4028] }
	__asm { xor dword ptr [ebx], eax }
	__asm { cmp ecx, esi }
	__asm { jb L_007cc323 }
	__asm { L_007cc33b: }
	__asm { mov al, byte ptr [edx + 0x128] }
	__asm { mov cl, byte ptr [ebx] }
	__asm { shr dword ptr [ebx], 8 }
	__asm { and al, 3 }
	__asm { xor cl, al }
	__asm { movzx eax, cl }
	__asm { mov eax, dword ptr [eax*4 + 0x12e4028] }
	__asm { xor dword ptr [ebx], eax }
	__asm { mov esi, dword ptr [edx + 0x10] }
	__asm { mov edi, dword ptr [edx + 0x14] }
	__asm { cmp esi, edi }
	__asm { je L_007cc375 }
	__asm { L_007cc360: }
	__asm { push ebx }
	__asm { push dword ptr [esi] }
	__asm { call fn_007cc4c0 }
	__asm { add esi, 4 }
	__asm { add esp, 8 }
	__asm { cmp esi, edi }
	__asm { jne L_007cc360 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_007cc375: }
	__asm { mov esi, dword ptr [edx + 0x44] }
	__asm { mov edi, dword ptr [edx + 0x48] }
	__asm { cmp esi, edi }
	__asm { je L_007cc392 }
	__asm { nop }
	__asm { L_007cc380: }
	__asm { push ebx }
	__asm { push dword ptr [esi] }
	__asm { call fn_007cc3a0 }
	__asm { add esi, 4 }
	__asm { add esp, 8 }
	__asm { cmp esi, edi }
	__asm { jne L_007cc380 }
	__asm { L_007cc392: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { not eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0044e270();
// FUNCTION: ROBLOXSTUDIO 0x007cc4c0
extern "C" __declspec(naked) void asm_007cc4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { cmp dword ptr [eax + 0x18], 0x10 }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { lea ecx, [eax + 4] }
	__asm { jb L_007cc4d9 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_007cc4d9: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { add edx, ecx }
	__asm { cmp ecx, edx }
	__asm { jae L_007cc4fa }
	__asm { L_007cc4e2: }
	__asm { mov al, byte ptr [ecx] }
	__asm { xor al, byte ptr [esi] }
	__asm { shr dword ptr [esi], 8 }
	__asm { movzx eax, al }
	__asm { inc ecx }
	__asm { mov eax, dword ptr [eax*4 + 0x12e4028] }
	__asm { xor dword ptr [esi], eax }
	__asm { cmp ecx, edx }
	__asm { jb L_007cc4e2 }
	__asm { L_007cc4fa: }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { cmp dword ptr [eax + 0x18], 0x10 }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { lea ecx, [eax + 4] }
	__asm { jb L_007cc50e }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_007cc50e: }
	__asm { add edx, ecx }
	__asm { cmp ecx, edx }
	__asm { jae L_007cc52c }
	__asm { L_007cc514: }
	__asm { mov al, byte ptr [ecx] }
	__asm { xor al, byte ptr [esi] }
	__asm { shr dword ptr [esi], 8 }
	__asm { movzx eax, al }
	__asm { inc ecx }
	__asm { mov eax, dword ptr [eax*4 + 0x12e4028] }
	__asm { xor dword ptr [esi], eax }
	__asm { cmp ecx, edx }
	__asm { jb L_007cc514 }
	__asm { L_007cc52c: }
	__asm { mov ecx, edi }
	__asm { call fn_0044e270 }
	__asm { mov cl, byte ptr [esi] }
	__asm { shr dword ptr [esi], 8 }
	__asm { xor cl, al }
	__asm { movzx eax, cl }
	__asm { mov edx, dword ptr [eax*4 + 0x12e4028] }
	__asm { xor edx, dword ptr [esi] }
	__asm { mov dword ptr [esi], edx }
	__asm { cmp byte ptr [edi + 0x24], 0 }
	__asm { je L_007cc56b }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov cl, dl }
	__asm { mov al, byte ptr [eax + 0x2c] }
	__asm { xor cl, al }
	__asm { movzx eax, cl }
	__asm { shr edx, 8 }
	__asm { mov dword ptr [esi], edx }
	__asm { mov eax, dword ptr [eax*4 + 0x12e4028] }
	__asm { xor eax, edx }
	__asm { mov dword ptr [esi], eax }
	__asm { L_007cc56b: }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { not eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x007ce720
extern "C" __declspec(naked) void asm_007ce720()
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
	__asm { mov dword ptr [esi + 0x10], 0x12be4a4 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0x100 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007ce7c9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007ce7c9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007ce7b4 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007ce7c9 }
	__asm { L_007ce7b4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007ce7c9: }
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
// FUNCTION: ROBLOXSTUDIO 0x007ce7f0
extern "C" __declspec(naked) void asm_007ce7f0()
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
	__asm { mov dword ptr [esi + 0x10], 0x11efd14 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0x100 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007ce899 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007ce899 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007ce884 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007ce899 }
	__asm { L_007ce884: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007ce899: }
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
// FUNCTION: ROBLOXSTUDIO 0x007ce8c0
extern "C" __declspec(naked) void asm_007ce8c0()
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
	__asm { mov dword ptr [esi + 0x10], 0x12bdfc0 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0x101 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007ce969 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007ce969 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007ce954 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007ce969 }
	__asm { L_007ce954: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007ce969: }
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
// FUNCTION: ROBLOXSTUDIO 0x007ce990
extern "C" __declspec(naked) void asm_007ce990()
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
	__asm { mov dword ptr [esi + 0x10], 0x12c6c78 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0x101 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cea39 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cea39 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cea24 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cea39 }
	__asm { L_007cea24: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cea39: }
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

extern "C" void fn_00426f50();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007cea60
extern "C" __declspec(naked) void asm_007cea60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd211c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x20 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007ceac0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe58c50 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov byte ptr [eax + 0x10], 0 }
	__asm { jmp L_007ceac2 }
	__asm { L_007ceac0: }
	__asm { xor eax, eax }
	__asm { L_007ceac2: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_007cead9 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00426f50 }
	__asm { L_007cead9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_007ceb00 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00426f50 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { L_007ceb00: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x007ceb10
extern "C" __declspec(naked) void asm_007ceb10()
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
	__asm { mov dword ptr [esi + 0x10], 0x12be0b8 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cebb9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cebb9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007ceba4 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cebb9 }
	__asm { L_007ceba4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cebb9: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cebe0
extern "C" __declspec(naked) void asm_007cebe0()
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
	__asm { mov dword ptr [esi + 0x10], 0x12c32cc }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cec89 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cec89 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cec74 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cec89 }
	__asm { L_007cec74: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cec89: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cecb0
extern "C" __declspec(naked) void asm_007cecb0()
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
	__asm { mov dword ptr [esi + 0x10], 0x12c3310 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007ced59 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007ced59 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007ced44 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007ced59 }
	__asm { L_007ced44: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007ced59: }
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
// FUNCTION: ROBLOXSTUDIO 0x007ced80
extern "C" __declspec(naked) void asm_007ced80()
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
	__asm { mov dword ptr [esi + 0x10], 0x11e66c8 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cee29 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cee29 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cee14 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cee29 }
	__asm { L_007cee14: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cee29: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cee50
extern "C" __declspec(naked) void asm_007cee50()
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
	__asm { mov dword ptr [esi + 0x10], 0x12c37f4 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007ceef9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007ceef9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007ceee4 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007ceef9 }
	__asm { L_007ceee4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007ceef9: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cef20
extern "C" __declspec(naked) void asm_007cef20()
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
	__asm { mov dword ptr [esi + 0x10], 0x11efd48 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cefc9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cefc9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cefb4 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cefc9 }
	__asm { L_007cefb4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cefc9: }
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
// FUNCTION: ROBLOXSTUDIO 0x007ceff0
extern "C" __declspec(naked) void asm_007ceff0()
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
	__asm { mov dword ptr [esi + 0x10], 0x11efd80 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cf099 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cf099 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cf084 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cf099 }
	__asm { L_007cf084: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cf099: }
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
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x007cf0c0
extern "C" __declspec(naked) void asm_007cf0c0()
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
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x12c38a0 }
	__asm { call fn_007cb250 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cf163 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cf163 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cf14e }
	__asm { push 0x52 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cf163 }
	__asm { L_007cf14e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe58be8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cf163: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x007cf180
extern "C" __declspec(naked) void asm_007cf180()
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
	__asm { mov dword ptr [esi + 0x10], 0x12bdba8 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cf229 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cf229 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cf214 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cf229 }
	__asm { L_007cf214: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cf229: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cf250
extern "C" __declspec(naked) void asm_007cf250()
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
	__asm { mov dword ptr [esi + 0x10], 0x11ef0a4 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cf2f9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cf2f9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cf2e4 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cf2f9 }
	__asm { L_007cf2e4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cf2f9: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cf320
extern "C" __declspec(naked) void asm_007cf320()
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
	__asm { mov dword ptr [esi + 0x10], 0x12c6c60 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cf3c9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cf3c9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cf3b4 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cf3c9 }
	__asm { L_007cf3b4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cf3c9: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cf3f0
extern "C" __declspec(naked) void asm_007cf3f0()
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
	__asm { mov dword ptr [esi + 0x10], 0x12c3884 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cf499 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cf499 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cf484 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cf499 }
	__asm { L_007cf484: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cf499: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cf4c0
extern "C" __declspec(naked) void asm_007cf4c0()
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
	__asm { mov dword ptr [esi + 0x10], 0x11efd60 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cf569 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cf569 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cf554 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cf569 }
	__asm { L_007cf554: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cf569: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cf590
extern "C" __declspec(naked) void asm_007cf590()
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
	__asm { mov dword ptr [esi + 0x10], 0x12c372c }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cf639 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cf639 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cf624 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cf639 }
	__asm { L_007cf624: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cf639: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cf660
extern "C" __declspec(naked) void asm_007cf660()
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
	__asm { mov dword ptr [esi + 0x10], 0x12c3744 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cf709 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cf709 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cf6f4 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cf709 }
	__asm { L_007cf6f4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cf709: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cf730
extern "C" __declspec(naked) void asm_007cf730()
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
	__asm { mov dword ptr [esi + 0x10], 0x12c37d8 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cf7d9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cf7d9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cf7c4 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cf7d9 }
	__asm { L_007cf7c4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cf7d9: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cf800
extern "C" __declspec(naked) void asm_007cf800()
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
	__asm { mov dword ptr [esi + 0x10], 0x12c37b8 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cf8a9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cf8a9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cf894 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cf8a9 }
	__asm { L_007cf894: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cf8a9: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cf8d0
extern "C" __declspec(naked) void asm_007cf8d0()
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
	__asm { mov dword ptr [esi + 0x10], 0x12c38e4 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cf979 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cf979 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cf964 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cf979 }
	__asm { L_007cf964: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cf979: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cf9a0
extern "C" __declspec(naked) void asm_007cf9a0()
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
	__asm { mov dword ptr [esi + 0x10], 0x12c3798 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cfa49 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cfa49 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cfa34 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cfa49 }
	__asm { L_007cfa34: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cfa49: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cfa70
extern "C" __declspec(naked) void asm_007cfa70()
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
	__asm { mov dword ptr [esi + 0x10], 0x11efd20 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cfb19 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cfb19 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cfb04 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cfb19 }
	__asm { L_007cfb04: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cfb19: }
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
// FUNCTION: ROBLOXSTUDIO 0x007cfb40
extern "C" __declspec(naked) void asm_007cfb40()
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
	__asm { mov dword ptr [esi + 0x10], 0x12bdfcc }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0x100 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007cfbe9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007cfbe9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007cfbd4 }
	__asm { push 0x47 }
	__asm { push 0xf13ed0 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007cfbe9 }
	__asm { L_007cfbd4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007cfbe9: }
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

extern "C" char g_012e47e8[];
extern "C" char g_012e47ec[];
extern "C" char g_012e47f0[];
extern "C" char g_012e47f4[];
extern "C" void fn_00403540();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007cfd30
extern "C" __declspec(naked) void asm_007cfd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e47f4] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007cfd8a }
	__asm { or eax, 1 }
	__asm { push 0xde4fa0 }
	__asm { mov dword ptr [g_012e47f4], eax }
	__asm { mov dword ptr [g_012e47e8], 0x11efd80 }
	__asm { mov dword ptr [g_012e47f0], 0x7d6a60 }
	__asm { mov dword ptr [g_012e47ec], 0x8846b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007cfd8a: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12e47e8 }
	__asm { jne L_007cfdbb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { cmp ecx, eax }
	__asm { je L_007cfe08 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007cfdbb: }
	__asm { test ecx, ecx }
	__asm { je L_007cfdd1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007cfdd1: }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007cfe02 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { L_007cfe02: }
	__asm { mov dword ptr [esi], 0x12e47e8 }
	__asm { L_007cfe08: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e47c8[];
extern "C" char g_012e47cc[];
extern "C" char g_012e47d0[];
extern "C" char g_012e47d4[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007cff40
extern "C" __declspec(naked) void asm_007cff40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012e47d4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007cff82 }
	__asm { or eax, 1 }
	__asm { push 0xde4fb0 }
	__asm { mov dword ptr [g_012e47d4], eax }
	__asm { mov dword ptr [g_012e47c8], 0x12c3884 }
	__asm { mov dword ptr [g_012e47d0], 0x7d6ac0 }
	__asm { mov dword ptr [g_012e47cc], 0x7d6e40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007cff82: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12e47c8 }
	__asm { jne L_007cffba }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 8] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [esi + 0x10] }
	__asm { fld dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [esi + 0x14] }
	__asm { fld dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [esi + 0x18] }
	__asm { fld dword ptr [eax + 0x18] }
	__asm { mov eax, esi }
	__asm { fstp dword ptr [esi + 0x1c] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007cffba: }
	__asm { test ecx, ecx }
	__asm { je L_007cffd0 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007cffd0: }
	__asm { lea edx, [esi + 4] }
	__asm { test edx, edx }
	__asm { je L_007d0004 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], 0xe461dc }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
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
	__asm { L_007d0004: }
	__asm { mov dword ptr [esi], 0x12e47c8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4788[];
extern "C" char g_012e478c[];
extern "C" char g_012e4790[];
extern "C" char g_012e4794[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d0130
extern "C" __declspec(naked) void asm_007d0130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012e4794] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007d0172 }
	__asm { or eax, 1 }
	__asm { push 0xde4fd0 }
	__asm { mov dword ptr [g_012e4794], eax }
	__asm { mov dword ptr [g_012e4788], 0x12c375c }
	__asm { mov dword ptr [g_012e4790], 0x44da30 }
	__asm { mov dword ptr [g_012e478c], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d0172: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12e4788 }
	__asm { jne L_007d0197 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d0197: }
	__asm { test ecx, ecx }
	__asm { je L_007d01ad }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007d01ad: }
	__asm { lea edx, [esi + 4] }
	__asm { test edx, edx }
	__asm { je L_007d01c7 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { L_007d01c7: }
	__asm { mov dword ptr [esi], 0x12e4788 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131b420[];
extern "C" char g_0131b424[];
extern "C" char g_0131b428[];
extern "C" char g_0131b42c[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d0280
extern "C" __declspec(naked) void asm_007d0280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131b42c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007d02c2 }
	__asm { or eax, 1 }
	__asm { push 0xddca80 }
	__asm { mov dword ptr [g_0131b42c], eax }
	__asm { mov dword ptr [g_0131b420], 0x12c372c }
	__asm { mov dword ptr [g_0131b428], 0x478740 }
	__asm { mov dword ptr [g_0131b424], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d02c2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131b420 }
	__asm { jne L_007d02f1 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { movzx eax, word ptr [ecx + 0xc] }
	__asm { mov word ptr [esi + 0x10], ax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d02f1: }
	__asm { test ecx, ecx }
	__asm { je L_007d0307 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007d0307: }
	__asm { lea edx, [esi + 4] }
	__asm { test edx, edx }
	__asm { je L_007d0327 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_007d0327: }
	__asm { mov dword ptr [esi], 0x131b420 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131b1d4[];
extern "C" char g_0131b1d8[];
extern "C" char g_0131b1dc[];
extern "C" char g_0131b1e0[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x007d0510
extern "C" __declspec(naked) void asm_007d0510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131b1d4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_007d0552 }
	__asm { or eax, 1 }
	__asm { push 0xddc710 }
	__asm { mov dword ptr [g_0131b1d4], eax }
	__asm { mov dword ptr [g_0131b1d8], 0x12c38e4 }
	__asm { mov dword ptr [g_0131b1e0], 0x44da30 }
	__asm { mov dword ptr [g_0131b1dc], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_007d0552: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131b1d8 }
	__asm { jne L_007d0577 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 8] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, esi }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d0577: }
	__asm { test ecx, ecx }
	__asm { je L_007d058d }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_007d058d: }
	__asm { lea edx, [esi + 4] }
	__asm { test edx, edx }
	__asm { je L_007d05a7 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { L_007d05a7: }
	__asm { mov dword ptr [esi], 0x131b1d8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x007d1670
extern "C" __declspec(naked) void asm_007d1670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd479b8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007d169a }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d169f }
	__asm { L_007d169a: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d169f: }
	__asm { cmp ecx, 0x12c38c0 }
	__asm { je L_007d16e8 }
	__asm { test eax, eax }
	__asm { je L_007d16af }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d16b4 }
	__asm { L_007d16af: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d16b4: }
	__asm { push 0x12c38c0 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_007d16e8 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_007d16e8: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esi, 4 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_0040c5b0();
extern "C" void fn_006b98f0();
extern "C" void fn_007d0660();
extern "C" void fn_007d11c0();
extern "C" void fn_007d6cd0();
extern "C" void fn_007e9290();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007d4d00
extern "C" __declspec(naked) void asm_007d4d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10524] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_007d4d4e }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007d4d22 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d4d27 }
	__asm { L_007d4d22: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d4d27: }
	__asm { cmp ecx, 0x11efcf8 }
	__asm { je L_007d4d47 }
	__asm { test eax, eax }
	__asm { je L_007d4d37 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d4d3c }
	__asm { L_007d4d37: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d4d3c: }
	__asm { push 0x11efcf8 }
	__asm { call ebx }
	__asm { test al, al }
	__asm { je L_007d4d4e }
	__asm { L_007d4d47: }
	__asm { lea eax, [esi + 4] }
	__asm { test eax, eax }
	__asm { jne L_007d4daf }
	__asm { L_007d4d4e: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be0b8 }
	__asm { je L_007d4d66 }
	__asm { push eax }
	__asm { mov ecx, 0x12be0b8 }
	__asm { call ebx }
	__asm { test al, al }
	__asm { je L_007d4db6 }
	__asm { L_007d4d66: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0040c5b0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_007d6cd0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 8], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_007d4d90 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007d4d90: }
	__asm { test bl, bl }
	__asm { je L_007d4db6 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007d0660 }
	__asm { call fn_007e9290 }
	__asm { push esi }
	__asm { mov dword ptr [edi], eax }
	__asm { call fn_007d11c0 }
	__asm { add esp, 4 }
	__asm { L_007d4daf: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007d4db6: }
	__asm { call fn_007e9290 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { add ecx, 4 }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_007d4dc9 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_007d4dc9: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_007d4dd9 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_007d4dd9: }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xf13664 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012e0d94[];
extern "C" char g_012e0d98[];
extern "C" char g_012e0d9c[];
extern "C" void fn_00792cc0();
extern "C" void fn_00792ed0();
extern "C" void fn_00793430();
// FUNCTION: ROBLOXSTUDIO 0x007d6610
extern "C" __declspec(naked) void asm_007d6610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d6687 }
	__asm { push dword ptr [g_012e0d94] }
	__asm { mov ecx, esi }
	__asm { call fn_00792cc0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { je L_007d6687 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [g_012e0d98] }
	__asm { mov ecx, esi }
	__asm { call fn_00792cc0 }
	__asm { push dword ptr [g_012e0d9c] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call fn_00792cc0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { add ecx, 0x10 }
	__asm { mov ebx, eax }
	__asm { call fn_00792ed0 }
	__asm { lea ecx, [esi + 4] }
	__asm { push ecx }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00792ed0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { call fn_00792ed0 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007d6687: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0d94[];
extern "C" char g_012e0d98[];
extern "C" char g_012e0d9c[];
extern "C" void fn_00792cc0();
extern "C" void fn_00792e10();
extern "C" void fn_00793430();
// FUNCTION: ROBLOXSTUDIO 0x007d6690
extern "C" __declspec(naked) void asm_007d6690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d6707 }
	__asm { push dword ptr [g_012e0d94] }
	__asm { mov ecx, esi }
	__asm { call fn_00792cc0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { je L_007d6707 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [g_012e0d98] }
	__asm { mov ecx, esi }
	__asm { call fn_00792cc0 }
	__asm { push dword ptr [g_012e0d9c] }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call fn_00792cc0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { add ecx, 0x10 }
	__asm { mov ebx, eax }
	__asm { call fn_00792e10 }
	__asm { lea ecx, [esi + 2] }
	__asm { push ecx }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00792e10 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { call fn_00792e10 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007d6707: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0dc4[];
extern "C" char g_012e0dc8[];
extern "C" char g_012e0dcc[];
extern "C" void fn_006cfe70();
extern "C" void fn_00792cc0();
extern "C" void fn_00792e70();
extern "C" void fn_00792ed0();
extern "C" void fn_00793430();
// FUNCTION: ROBLOXSTUDIO 0x007d7770
extern "C" __declspec(naked) void asm_007d7770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d783d }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { call fn_00792e70 }
	__asm { test al, al }
	__asm { je L_007d77d8 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x10 }
	__asm { mov byte ptr [ebp + 0xd], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [ebp + 0xe], al }
	__asm { lea eax, [ebp + 0xd] }
	__asm { mov byte ptr [ebp + 0xf], cl }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_006cfe70 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_007d77d8: }
	__asm { push edi }
	__asm { push dword ptr [g_012e0dc4] }
	__asm { mov ecx, ebx }
	__asm { call fn_00792cc0 }
	__asm { push dword ptr [g_012e0dc8] }
	__asm { mov ecx, ebx }
	__asm { mov esi, eax }
	__asm { call fn_00792cc0 }
	__asm { push dword ptr [g_012e0dcc] }
	__asm { mov ecx, ebx }
	__asm { mov edi, eax }
	__asm { call fn_00792cc0 }
	__asm { mov ebx, eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792ed0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00792ed0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { call fn_00792ed0 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { lea edx, [ebp - 0x14] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop edi }
	__asm { L_007d783d: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012e0e0c[];
extern "C" char g_012e0e10[];
extern "C" void fn_006dea00();
extern "C" void fn_00792cc0();
extern "C" void fn_00793430();
extern "C" void fn_007d6610();
// FUNCTION: ROBLOXSTUDIO 0x007d7940
extern "C" __declspec(naked) void asm_007d7940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd675f8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d79fc }
	__asm { push esi }
	__asm { push dword ptr [g_012e0e0c] }
	__asm { mov ecx, edi }
	__asm { call fn_00792cc0 }
	__asm { push dword ptr [g_012e0e10] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call fn_00792cc0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x28], 0xe461dc }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d6610 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007d79fc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_007d6610 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007d79fc }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { lea edx, [ebp - 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_007d79fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012e0e14[];
extern "C" char g_012e0e18[];
extern "C" void fn_00792cc0();
extern "C" void fn_00793430();
extern "C" void fn_007d6690();
// FUNCTION: ROBLOXSTUDIO 0x007d7a10
extern "C" __declspec(naked) void asm_007d7a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d7aa5 }
	__asm { push esi }
	__asm { push dword ptr [g_012e0e14] }
	__asm { mov ecx, edi }
	__asm { call fn_00792cc0 }
	__asm { push dword ptr [g_012e0e18] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call fn_00792cc0 }
	__asm { mov edi, eax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov word ptr [ebp - 0xc], ax }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_007d6690 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007d7aa5 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_007d6690 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007d7aa5 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { movzx eax, word ptr [ebp - 4] }
	__asm { mov word ptr [ebp - 0x18], ax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x16], eax }
	__asm { movzx eax, word ptr [ebp - 0xc] }
	__asm { lea edx, [ebp - 0x1c] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov word ptr [ebp - 0x12], ax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_007d7aa5: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012e0d94[];
extern "C" char g_012e0d98[];
extern "C" char g_012e0d9c[];
extern "C" void fn_00792cc0();
extern "C" void fn_00792e10();
extern "C" void fn_00793430();
// FUNCTION: ROBLOXSTUDIO 0x007d7d20
extern "C" __declspec(naked) void asm_007d7d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, ebx }
	__asm { call fn_00793430 }
	__asm { test al, al }
	__asm { jne L_007d7db7 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_012e0d94] }
	__asm { mov ecx, ebx }
	__asm { call fn_00792cc0 }
	__asm { push dword ptr [g_012e0d98] }
	__asm { mov ecx, ebx }
	__asm { mov esi, eax }
	__asm { call fn_00792cc0 }
	__asm { push dword ptr [g_012e0d9c] }
	__asm { mov ecx, ebx }
	__asm { mov edi, eax }
	__asm { call fn_00792cc0 }
	__asm { mov ebx, eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792e10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00792e10 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { call fn_00792e10 }
	__asm { movzx eax, word ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov word ptr [ebp - 0x12], ax }
	__asm { movzx eax, word ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { mov word ptr [ebp - 0x10], ax }
	__asm { movzx eax, word ptr [ebp - 8] }
	__asm { lea edx, [ebp - 0x12] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov word ptr [ebp - 0xe], ax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_007d7db7: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_006dea00();
extern "C" void fn_008e6ed0();
// FUNCTION: ROBLOXSTUDIO 0x007d7fb0
extern "C" __declspec(naked) void asm_007d7fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd675f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x28], 0xe461dc }
	__asm { call fn_006dea00 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x20], edx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008e6ed0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_007d803d }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { lea edx, [ebp - 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007d803d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e0e08[];
extern "C" void fn_00792b60();
extern "C" void fn_00793ee0();
extern "C" void fn_00794230();
// FUNCTION: ROBLOXSTUDIO 0x007d83a0
extern "C" __declspec(naked) void asm_007d83a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21a3b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012e0e08] }
	__asm { push edi }
	__asm { push 0x28 }
	__asm { mov ebx, ecx }
	__asm { call fn_00794230 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007d83ea }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00793ee0 }
	__asm { mov edi, eax }
	__asm { jmp L_007d83ec }
	__asm { L_007d83ea: }
	__asm { xor edi, edi }
	__asm { L_007d83ec: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_007d8402 }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { jmp L_007d8404 }
	__asm { L_007d8402: }
	__asm { mov dword ptr [ecx], edi }
	__asm { L_007d8404: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00792b60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x18], esi }
	__asm { mov dword ptr [edi + 0x14], 5 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00405b90();
extern "C" void fn_00412da0();
extern "C" void fn_007d2d40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007d8440
extern "C" __declspec(naked) void asm_007d8440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cec0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00405b90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { cmovae eax, dword ptr [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007d2d40 }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ecx + 0x10] }
	__asm { call fn_00412da0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_007d84e2 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007d84e2: }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { jb L_007d8505 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007d8505: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e0e04[];
extern "C" void fn_00792b60();
extern "C" void fn_00793ee0();
extern "C" void fn_00794230();
// FUNCTION: ROBLOXSTUDIO 0x007d85c0
extern "C" __declspec(naked) void asm_007d85c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21a3b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012e0e04] }
	__asm { push edi }
	__asm { push 0x28 }
	__asm { mov ebx, ecx }
	__asm { call fn_00794230 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007d860a }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00793ee0 }
	__asm { mov edi, eax }
	__asm { jmp L_007d860c }
	__asm { L_007d860a: }
	__asm { xor edi, edi }
	__asm { L_007d860c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_007d8622 }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { jmp L_007d8624 }
	__asm { L_007d8622: }
	__asm { mov dword ptr [ecx], edi }
	__asm { L_007d8624: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00792b60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x18], esi }
	__asm { mov dword ptr [edi + 0x14], 5 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e0e0c[];
extern "C" char g_012e0e10[];
extern "C" void fn_00405b90();
extern "C" void fn_00793ee0();
extern "C" void fn_00794230();
extern "C" void fn_007d6710();
// FUNCTION: ROBLOXSTUDIO 0x007d8660
extern "C" __declspec(naked) void asm_007d8660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21a6e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012e0e0c] }
	__asm { push edi }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { call fn_00794230 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007d86ab }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00793ee0 }
	__asm { mov edi, eax }
	__asm { jmp L_007d86ad }
	__asm { L_007d86ab: }
	__asm { xor edi, edi }
	__asm { L_007d86ad: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { jne L_007d86c3 }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { jmp L_007d86c5 }
	__asm { L_007d86c3: }
	__asm { mov dword ptr [eax], edi }
	__asm { L_007d86c5: }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { mov ebx, dword ptr [g_012e0e10] }
	__asm { push 0x28 }
	__asm { call fn_00794230 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007d86f2 }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { call fn_00793ee0 }
	__asm { mov ebx, eax }
	__asm { jmp L_007d86f4 }
	__asm { L_007d86f2: }
	__asm { xor ebx, ebx }
	__asm { L_007d86f4: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { jne L_007d8707 }
	__asm { mov dword ptr [esi + 4], ebx }
	__asm { jmp L_007d8709 }
	__asm { L_007d8707: }
	__asm { mov dword ptr [eax], ebx }
	__asm { L_007d8709: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { call fn_00405b90 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_007d6710 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_007d6710 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e0e14[];
extern "C" char g_012e0e18[];
extern "C" void fn_00793ee0();
extern "C" void fn_00794230();
extern "C" void fn_007d6880();
// FUNCTION: ROBLOXSTUDIO 0x007d8750
extern "C" __declspec(naked) void asm_007d8750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21a96 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012e0e14] }
	__asm { push edi }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { call fn_00794230 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007d879b }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00793ee0 }
	__asm { mov edi, eax }
	__asm { jmp L_007d879d }
	__asm { L_007d879b: }
	__asm { xor edi, edi }
	__asm { L_007d879d: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { jne L_007d87b3 }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { jmp L_007d87b5 }
	__asm { L_007d87b3: }
	__asm { mov dword ptr [eax], edi }
	__asm { L_007d87b5: }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { mov ebx, dword ptr [g_012e0e18] }
	__asm { push 0x28 }
	__asm { call fn_00794230 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007d87e2 }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { call fn_00793ee0 }
	__asm { mov ebx, eax }
	__asm { jmp L_007d87e4 }
	__asm { L_007d87e2: }
	__asm { xor ebx, ebx }
	__asm { L_007d87e4: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { jne L_007d87f7 }
	__asm { mov dword ptr [esi + 4], ebx }
	__asm { jmp L_007d87f9 }
	__asm { L_007d87f7: }
	__asm { mov dword ptr [eax], ebx }
	__asm { L_007d87f9: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { lea edx, [ebp - 0x20] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_007d6880 }
	__asm { lea eax, [ebp - 0x1a] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_007d6880 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e0d94[];
extern "C" char g_012e0d98[];
extern "C" void fn_00792b60();
extern "C" void fn_00793ee0();
extern "C" void fn_00794230();
// FUNCTION: ROBLOXSTUDIO 0x007d8b90
extern "C" __declspec(naked) void asm_007d8b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21af6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012e0d94] }
	__asm { push edi }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { call fn_00794230 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007d8bdb }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00793ee0 }
	__asm { mov ebx, eax }
	__asm { jmp L_007d8bdd }
	__asm { L_007d8bdb: }
	__asm { xor ebx, ebx }
	__asm { L_007d8bdd: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { jne L_007d8bf3 }
	__asm { mov dword ptr [esi + 4], ebx }
	__asm { jmp L_007d8bf5 }
	__asm { L_007d8bf3: }
	__asm { mov dword ptr [eax], ebx }
	__asm { L_007d8bf5: }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { mov edi, dword ptr [g_012e0d98] }
	__asm { push 0x28 }
	__asm { call fn_00794230 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007d8c20 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00793ee0 }
	__asm { jmp L_007d8c22 }
	__asm { L_007d8c20: }
	__asm { xor eax, eax }
	__asm { L_007d8c22: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { jne L_007d8c38 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { jmp L_007d8c3a }
	__asm { L_007d8c38: }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007d8c3a: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { movsx edi, word ptr [ebp - 0x10] }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { call fn_00792b60 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx + 0x18], edi }
	__asm { mov dword ptr [ebx + 0x14], 5 }
	__asm { movsx edi, word ptr [ebp - 0xe] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792b60 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x14], 5 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" void fn_007de7e0();
extern "C" void fn_0080e7d0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007de820
extern "C" __declspec(naked) void asm_007de820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd21fc0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_007de853: }
	__asm { cmp eax, dword ptr [ebp + 0x10] }
	__asm { je L_007de8c4 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_007de7e0 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, 0xffffffe }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_007de886 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_007de886: }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jmp L_007de853 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_007de8bb }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { L_007de8a7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0080e7d0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jne L_007de8a7 }
	__asm { L_007de8bb: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_007de8c4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00822bc0();
// FUNCTION: ROBLOXSTUDIO 0x007e2a80
extern "C" __declspec(naked) void asm_007e2a80()
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
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_007e2acb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_007e2acb: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_007e2b1e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe5add8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe5ade0 }
	__asm { mov dword ptr [esi + 8], 0xe5adf0 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe5adf8 }
	__asm { mov dword ptr [esi + 8], 0xe5ae08 }
	__asm { jmp L_007e2b20 }
	__asm { L_007e2b1e: }
	__asm { xor esi, esi }
	__asm { L_007e2b20: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00822bc0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_007e2b3d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_007e2b3d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007d9f40();
extern "C" void fn_007de8e0();
extern "C" void fn_00a8b430();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e3ec0
extern "C" __declspec(naked) void asm_007e3ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x118 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e3f10 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_00a8b430 }
	__asm { mov esi, eax }
	__asm { jmp L_007e3f12 }
	__asm { L_007e3f10: }
	__asm { xor esi, esi }
	__asm { L_007e3f12: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007d9f40 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e3f43 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e3f43 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e3f43: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007da330();
extern "C" void fn_007de8e0();
extern "C" void fn_00a8fd20();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e4310
extern "C" __declspec(naked) void asm_007e4310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x148 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e4360 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_00a8fd20 }
	__asm { mov esi, eax }
	__asm { jmp L_007e4362 }
	__asm { L_007e4360: }
	__asm { xor esi, esi }
	__asm { L_007e4362: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da330 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e4393 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4393 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4393: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4b1c[];
extern "C" void fn_007da690();
extern "C" void fn_007de8e0();
extern "C" void fn_00810e10();
extern "C" void fn_00aa1ed0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e46c0
extern "C" __declspec(naked) void asm_007e46c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd224fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_007e4764 }
	__asm { mov ecx, esi }
	__asm { call fn_00aa1ed0 }
	__asm { mov dword ptr [esi], 0xe591f4 }
	__asm { mov dword ptr [esi + 4], 0xe5926c }
	__asm { mov dword ptr [esi + 0x18], 0xe59274 }
	__asm { mov dword ptr [esi + 0x1c], 0xe59280 }
	__asm { mov dword ptr [esi + 0x64], 0xe59290 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00810e10 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4b1c] }
	__asm { mov dword ptr [esi], 0xe592c4 }
	__asm { mov dword ptr [esi + 4], 0xe5933c }
	__asm { mov dword ptr [esi + 0x18], 0xe59344 }
	__asm { mov dword ptr [esi + 0x1c], 0xe59350 }
	__asm { mov dword ptr [esi + 0x64], 0xe59360 }
	__asm { jmp L_007e4766 }
	__asm { L_007e4764: }
	__asm { xor esi, esi }
	__asm { L_007e4766: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007da690 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_007e4797 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e4797 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e4797: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007db0b0();
extern "C" void fn_007de8e0();
extern "C" void fn_00aa5460();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e5240
extern "C" __declspec(naked) void asm_007e5240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x2a0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e5290 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_00aa5460 }
	__asm { mov esi, eax }
	__asm { jmp L_007e5292 }
	__asm { L_007e5290: }
	__asm { xor esi, esi }
	__asm { L_007e5292: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007db0b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e52c3 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e52c3 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e52c3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007db140();
extern "C" void fn_007de8e0();
extern "C" void fn_00aac090();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e52e0
extern "C" __declspec(naked) void asm_007e52e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x140 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e5330 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_00aac090 }
	__asm { mov esi, eax }
	__asm { jmp L_007e5332 }
	__asm { L_007e5330: }
	__asm { xor esi, esi }
	__asm { L_007e5332: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007db140 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e5363 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e5363 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e5363: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007db6e0();
extern "C" void fn_007de8e0();
extern "C" void fn_00aa2950();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007e58f0
extern "C" __declspec(naked) void asm_007e58f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x120 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007e5940 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_00aa2950 }
	__asm { mov esi, eax }
	__asm { jmp L_007e5942 }
	__asm { L_007e5940: }
	__asm { xor esi, esi }
	__asm { L_007e5942: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_007db6e0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007e5973 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_007e5973 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_007e5973: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94dcc[];
extern "C" char g_00e94dd0[];
extern "C" char g_012e4ba8[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_00439d80();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_0080e890();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007e9a70
extern "C" __declspec(naked) void asm_007e9a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22a6b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe5ab4c }
	__asm { mov dword ptr [esi + 4], 0xe5abc4 }
	__asm { mov dword ptr [esi + 0x18], 0xe5abcc }
	__asm { mov dword ptr [esi + 0x1c], 0xe5abd8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0080e890 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4ba8] }
	__asm { mov dword ptr [esi], 0xe5abec }
	__asm { mov dword ptr [esi + 4], 0xe5ac64 }
	__asm { mov dword ptr [esi + 0x18], 0xe5ac6c }
	__asm { mov dword ptr [esi + 0x1c], 0xe5ac78 }
	__asm { mov eax, dword ptr [g_00e94dcc] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { mov eax, dword ptr [g_00e94dcc] }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { mov eax, dword ptr [g_00e94dd0] }
	__asm { mov dword ptr [esi + 0x6c], eax }
	__asm { lea eax, [esi + 0x70] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x439e10 }
	__asm { push 0x131b180 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00439d80 }
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
	__asm { jb L_007e9b6e }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007e9b6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94d78[];
extern "C" char g_00e94d80[];
extern "C" char g_012e4bac[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_0080e910();
extern "C" void fn_008241d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007e9b80
extern "C" __declspec(naked) void asm_007e9b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22aae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe5ac94 }
	__asm { mov dword ptr [esi + 4], 0xe5ad0c }
	__asm { mov dword ptr [esi + 0x18], 0xe5ad14 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5ad20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0080e910 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4bac] }
	__asm { mov dword ptr [esi], 0xe5ad34 }
	__asm { mov dword ptr [esi + 4], 0xe5adac }
	__asm { mov dword ptr [esi + 0x18], 0xe5adb4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5adc0 }
	__asm { fld qword ptr [g_00e94d78] }
	__asm { fstp qword ptr [esi + 0x68] }
	__asm { lea eax, [esi + 0x80] }
	__asm { fld qword ptr [g_00e94d78] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { fstp qword ptr [esi + 0x70] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { fld qword ptr [g_00e94d80] }
	__asm { fstp qword ptr [esi + 0x78] }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x824660 }
	__asm { push 0x12f61e4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008241d0 }
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
	__asm { jb L_007e9c84 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007e9c84: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94dcc[];
extern "C" char g_012e4b80[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_00439d80();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_0080e990();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007e9ca0
extern "C" __declspec(naked) void asm_007e9ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22aeb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe59fc4 }
	__asm { mov dword ptr [esi + 4], 0xe5a03c }
	__asm { mov dword ptr [esi + 0x18], 0xe5a044 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5a050 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0080e990 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4b80] }
	__asm { mov dword ptr [esi], 0xe5a064 }
	__asm { mov dword ptr [esi + 4], 0xe5a0dc }
	__asm { mov dword ptr [esi + 0x18], 0xe5a0e4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5a0f0 }
	__asm { mov eax, dword ptr [g_00e94dcc] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { lea eax, [esi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x439e10 }
	__asm { push 0x131b180 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00439d80 }
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
	__asm { jb L_007e9d8e }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007e9d8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e94d78[];
extern "C" char g_012e4b84[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_0080ea10();
extern "C" void fn_008241d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007e9da0
extern "C" __declspec(naked) void asm_007e9da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22b2b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe5a10c }
	__asm { mov dword ptr [esi + 4], 0xe5a184 }
	__asm { mov dword ptr [esi + 0x18], 0xe5a18c }
	__asm { mov dword ptr [esi + 0x1c], 0xe5a198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0080ea10 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4b84] }
	__asm { mov dword ptr [esi], 0xe5a1ac }
	__asm { mov dword ptr [esi + 4], 0xe5a224 }
	__asm { mov dword ptr [esi + 0x18], 0xe5a22c }
	__asm { mov dword ptr [esi + 0x1c], 0xe5a238 }
	__asm { fld qword ptr [g_00e94d78] }
	__asm { lea eax, [esi + 0x70] }
	__asm { fstp qword ptr [esi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x824660 }
	__asm { push 0x12f61e4 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008241d0 }
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
	__asm { jb L_007e9e8f }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007e9e8f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
