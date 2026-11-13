// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ed80();
extern "C" void fn_006b9740();
extern "C" void fn_00886230();
// FUNCTION: ROBLOXSTUDIO 0x00b74590
extern "C" __declspec(naked) void asm_00b74590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b745e9 }
	__asm { call fn_00886230 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { jne L_00b745e9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b745d4 }
	__asm { push 0x156 }
	__asm { push 0xe4fb58 }
	__asm { push 0xe5cefc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b745e9 }
	__asm { L_00b745d4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe5cf78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b745e9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { push dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_006b97e0();
// FUNCTION: ROBLOXSTUDIO 0x00b74760
extern "C" __declspec(naked) void asm_00b74760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd59f18 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { lea ebx, [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov dword ptr [ebx], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00b7479d }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b7479d: }
	__asm { lea ecx, [ebx + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b97e0();
extern "C" void fn_008bff30();
extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
extern "C" void fn_00b74ce0();
// FUNCTION: ROBLOXSTUDIO 0x00b74d90
extern "C" __declspec(naked) void asm_00b74d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a078 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_008bff30 }
	__asm { mov ecx, esi }
	__asm { call fn_00b74ce0 }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { test eax, eax }
	__asm { je L_00b74dee }
	__asm { lea ecx, [eax + 4] }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b74dee: }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008c04d0 }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b74e14 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b74e14: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_008c04d0();
extern "C" void fn_008ccfc0();
// FUNCTION: ROBLOXSTUDIO 0x00b750d0
extern "C" __declspec(naked) void asm_00b750d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a0e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b75109 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b75109: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_006b97e0();
// FUNCTION: ROBLOXSTUDIO 0x00b776a0
extern "C" __declspec(naked) void asm_00b776a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12008 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 8], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00b77702 }
	__asm { add ecx, 4 }
	__asm { push 0 }
	__asm { call fn_006b97e0 }
	__asm { L_00b77702: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x1c }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b72e40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b77720
extern "C" __declspec(naked) void asm_00b77720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49f08 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b72e40 }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00b7775c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7775c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b73030();
// FUNCTION: ROBLOXSTUDIO 0x00b77770
extern "C" __declspec(naked) void asm_00b77770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59cd8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00b777bc }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { L_00b777bc: }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 8] }
	__asm { push eax }
	__asm { call fn_00b73030 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00b777e5 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00b777e5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc80[];
extern "C" void fn_00402fd0();
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b79f60
extern "C" __declspec(naked) void asm_00b79f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0128dc80] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0128dc80] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00b79f94 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_00b79f94: }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [eax + 0x10] }
	__asm { mov ecx, eax }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { inc eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a35560 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eadc[];
extern "C" void fn_00a35560();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00b7a120
extern "C" __declspec(naked) void asm_00b7a120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eadc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eadc] }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { mov edx, eax }
	__asm { add esp, 0x18 }
	__asm { mov cx, word ptr [edx] }
	__asm { cmp cx, word ptr [esi] }
	__asm { jne L_00b7a18c }
	__asm { mov cx, word ptr [edx + 2] }
	__asm { cmp cx, word ptr [esi + 2] }
	__asm { jne L_00b7a18c }
	__asm { mov cx, word ptr [edx + 4] }
	__asm { cmp cx, word ptr [esi + 4] }
	__asm { jne L_00b7a18c }
	__asm { mov ax, word ptr [edx + 6] }
	__asm { cmp ax, word ptr [esi + 6] }
	__asm { jne L_00b7a18c }
	__asm { mov ax, word ptr [edx + 8] }
	__asm { cmp ax, word ptr [esi + 8] }
	__asm { jne L_00b7a18c }
	__asm { mov ax, word ptr [edx + 0xa] }
	__asm { cmp ax, word ptr [esi + 0xa] }
	__asm { jne L_00b7a18c }
	__asm { mov eax, 1 }
	__asm { jmp L_00b7a18e }
	__asm { L_00b7a18c: }
	__asm { xor eax, eax }
	__asm { L_00b7a18e: }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a35560 }
	__asm { add esp, 8 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac8[];
extern "C" void fn_00a35690();
extern "C" void fn_00a389c0();
extern "C" void fn_00a56060();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7a6d0
extern "C" __declspec(naked) void asm_00b7a6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [g_0124eac8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00a56060 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x20 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7a737 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7a737: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead0[];
extern "C" void fn_008e6230();
extern "C" void fn_00a35690();
extern "C" void fn_00a389c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7a750
extern "C" __declspec(naked) void asm_00b7a750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [g_0124ead0] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008e6230 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x20 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7a7b7 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7a7b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead4[];
extern "C" void fn_008e6270();
extern "C" void fn_00a35690();
extern "C" void fn_00a389c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7a7d0
extern "C" __declspec(naked) void asm_00b7a7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [g_0124ead4] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008e6270 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x20 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7a837 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7a837: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb28[];
extern "C" void fn_008e6410();
extern "C" void fn_00a35690();
extern "C" void fn_00a389c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7a850
extern "C" __declspec(naked) void asm_00b7a850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [g_0124eb28] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008e6410 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x20 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7a8b7 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7a8b7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008e64a0();
extern "C" void fn_00a35690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7a8d0
extern "C" __declspec(naked) void asm_00b7a8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008e64a0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7a929 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7a929: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac4[];
extern "C" void fn_009004f0();
extern "C" void fn_00a35690();
extern "C" void fn_00a389c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7a940
extern "C" __declspec(naked) void asm_00b7a940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [g_0124eac4] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_009004f0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x20 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7a9a7 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7a9a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0128dc80[];
extern "C" void fn_00402a10();
extern "C" void fn_00a35690();
extern "C" void fn_00a389c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7a9c0
extern "C" __declspec(naked) void asm_00b7a9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [g_0128dc80] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00402a10 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x20 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7aa27 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7aa27: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb1c[];
extern "C" void fn_008e6570();
extern "C" void fn_00a35690();
extern "C" void fn_00a389c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7aa40
extern "C" __declspec(naked) void asm_00b7aa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [g_0124eb1c] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008e6570 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x20 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7aaa7 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7aaa7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead8[];
extern "C" void fn_008e66f0();
extern "C" void fn_00a35690();
extern "C" void fn_00a389c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7aac0
extern "C" __declspec(naked) void asm_00b7aac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [g_0124ead8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008e66f0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x20 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7ab27 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7ab27: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eadc[];
extern "C" void fn_008e6790();
extern "C" void fn_00a35690();
extern "C" void fn_00a389c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7ab40
extern "C" __declspec(naked) void asm_00b7ab40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [g_0124eadc] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a389c0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008e6790 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x20 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7aba7 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7aba7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008eacc0();
extern "C" void fn_00a35690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7abc0
extern "C" __declspec(naked) void asm_00b7abc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008eacc0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7ac19 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7ac19: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008eae40();
extern "C" void fn_00a35690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7ac30
extern "C" __declspec(naked) void asm_00b7ac30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008eae40 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7ac89 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7ac89: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008e6830();
extern "C" void fn_00a35690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7aca0
extern "C" __declspec(naked) void asm_00b7aca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008e6830 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7acf9 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7acf9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008e68d0();
extern "C" void fn_00a35690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7ad10
extern "C" __declspec(naked) void asm_00b7ad10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008e68d0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7ad69 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7ad69: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008e6980();
extern "C" void fn_00a35690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7ad80
extern "C" __declspec(naked) void asm_00b7ad80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008e6980 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7add9 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7add9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008e6a70();
extern "C" void fn_00a35690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7adf0
extern "C" __declspec(naked) void asm_00b7adf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008e6a70 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35690 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7ae49 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7ae49: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b98c0();
extern "C" void fn_00a35710();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7c1c0
extern "C" __declspec(naked) void asm_00b7c1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [eax] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { add ecx, 4 }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_00b7c1ee }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00b7c1ee: }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00b7c1ff }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00b7c1ff: }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xed2348 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a35710 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b7c23e }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7c23e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b7e7b0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b7ca50
extern "C" __declspec(naked) void asm_00b7ca50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a630 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b7caa8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed2c00 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b7caaa }
	__asm { L_00b7caa8: }
	__asm { xor eax, eax }
	__asm { L_00b7caaa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b7e7b0 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_00b7f890();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b7cbd0
extern "C" __declspec(naked) void asm_00b7cbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a671 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b7f890 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b7cc36 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { L_00b7cc36: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_004225e0();
extern "C" void fn_00b89440();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b7cc60
extern "C" __declspec(naked) void asm_00b7cc60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a691 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b89440 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b7ccb1 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_004225e0 }
	__asm { L_00b7ccb1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00b7c340();
extern "C" void fn_00b7f910();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b7cd20
extern "C" __declspec(naked) void asm_00b7cd20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a6b1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_00b7f910 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b7cd73 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b7c340 }
	__asm { L_00b7cd73: }
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

extern "C" void fn_00b7c430();
extern "C" void fn_00b7f950();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b7cda0
extern "C" __declspec(naked) void asm_00b7cda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a6d1 }
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
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b7cdf3 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b7c430 }
	__asm { L_00b7cdf3: }
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

extern "C" void fn_004ae050();
extern "C" void fn_00b89440();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b7ce20
extern "C" __declspec(naked) void asm_00b7ce20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a6f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b89440 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b7ce77 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { call fn_004ae050 }
	__asm { L_00b7ce77: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_00b7cf80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7e800
extern "C" __declspec(naked) void asm_00b7e800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a7f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00b7cf80 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp + 0x30], 0x10 }
	__asm { jb L_00b7e87a }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b7e87a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b7fa00
extern "C" __declspec(naked) void asm_00b7fa00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00b7fa50 }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_00b7fa44 }
	__asm { test al, 1 }
	__asm { jne L_00b7fa3d }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b7fa3d }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b7fa3d: }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00b7fa44: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { dec dword ptr [edi + 4] }
	__asm { L_00b7fa50: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004226b0();
extern "C" void fn_008c0570();
// FUNCTION: ROBLOXSTUDIO 0x00b83740
extern "C" __declspec(naked) void asm_00b83740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd355a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c0570 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b83788 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00b83788: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004226b0();
extern "C" void fn_006bc920();
extern "C" void fn_008c0570();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b83e70
extern "C" __declspec(naked) void asm_00b83e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5af1b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 4] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008c0570 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00b83ec1 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00b83ec1: }
	__asm { push 0x130ef60 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006bc920 }
	__asm { push 0x130ef58 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006bc920 }
	__asm { add esp, 8 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00b83ef2 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b83ef2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b83f10
extern "C" __declspec(naked) void asm_00b83f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5efb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00b83f4a }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { lea ecx, [esi + 0x14] }
	__asm { push 0 }
	__asm { call dword ptr [eax] }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { L_00b83f4a: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe18248 }
	__asm { je L_00b83f5f }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b83f5f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_0040f890();
extern "C" void fn_00a35690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b84780
extern "C" __declspec(naked) void asm_00b84780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push 7 }
	__asm { push 0xed3410 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040f890 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00b84806 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b84806: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b859a0
extern "C" __declspec(naked) void asm_00b859a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b0c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b859f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed3738 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b859fa }
	__asm { L_00b859f8: }
	__asm { xor eax, eax }
	__asm { L_00b859fa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b85ad0
extern "C" __declspec(naked) void asm_00b85ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b0d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b85b28 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed3750 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b85b2a }
	__asm { L_00b85b28: }
	__asm { xor eax, eax }
	__asm { L_00b85b2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00626a40();
extern "C" void fn_00b85890();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b85b60
extern "C" __declspec(naked) void asm_00b85b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b0f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_00626a40 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00b85bb3 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b85890 }
	__asm { L_00b85bb3: }
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

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00b861e0
extern "C" __declspec(naked) void asm_00b861e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00b86228 }
	__asm { cmp eax, 1 }
	__asm { je L_00b86228 }
	__asm { cmp eax, 2 }
	__asm { je L_00b86248 }
	__asm { cmp eax, 3 }
	__asm { jne L_00b86217 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x128e6a8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b86217: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x128e6a8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b86228: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00b86248 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { L_00b86248: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0042d3d0();
extern "C" void fn_00b86090();
extern "C" void fn_00b86440();
extern "C" void fn_00b86790();
extern "C" void fn_00bbe560();
// FUNCTION: ROBLOXSTUDIO 0x00b86250
extern "C" __declspec(naked) void asm_00b86250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x18], 0 }
	__asm { je L_00b86296 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00b86090 }
	__asm { mov ecx, eax }
	__asm { call fn_00bbe560 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00b86282 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00b86282: }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [edx + 8] }
	__asm { push dword ptr [eax + ecx*4] }
	__asm { mov ecx, edi }
	__asm { call fn_00b86790 }
	__asm { L_00b86296: }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00b86440 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0042d3d0 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00513a40();
extern "C" void fn_006bc920();
extern "C" void fn_006c0e30();
// FUNCTION: ROBLOXSTUDIO 0x00b86790
extern "C" __declspec(naked) void asm_00b86790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00b867cc }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_00b867b5 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00b867b5: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { js L_00b867cc }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { jmp L_00b867d1 }
	__asm { L_00b867cc: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_00b867d1: }
	__asm { lea eax, [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { je L_00b867f3 }
	__asm { mov esi, dword ptr [eax + 0x28] }
	__asm { mov ecx, esi }
	__asm { call fn_006c0e30 }
	__asm { lea eax, [esi + 0x804] }
	__asm { push eax }
	__asm { call fn_006bc920 }
	__asm { add esp, 4 }
	__asm { L_00b867f3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00410ec0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b86e20
extern "C" __declspec(naked) void asm_00b86e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b180 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b86e78 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed3a7c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b86e7a }
	__asm { L_00b86e78: }
	__asm { xor eax, eax }
	__asm { L_00b86e7a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00410ec0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0042d820();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b87110
extern "C" __declspec(naked) void asm_00b87110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b1b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b87168 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed3aa4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b8716a }
	__asm { L_00b87168: }
	__asm { xor eax, eax }
	__asm { L_00b8716a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0042d820 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e3ca58[];
extern "C" void fn_004038a0();
extern "C" void fn_006c54a0();
// FUNCTION: ROBLOXSTUDIO 0x00b88a90
extern "C" __declspec(naked) void asm_00b88a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_00b88ace }
	__asm { xor ecx, ecx }
	__asm { jmp L_00b88ade }
	__asm { L_00b88ace: }
	__asm { mov ecx, edx }
	__asm { push edi }
	__asm { lea edi, [ecx + 1] }
	__asm { L_00b88ad4: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00b88ad4 }
	__asm { sub ecx, edi }
	__asm { pop edi }
	__asm { L_00b88ade: }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006c54a0 }
	__asm { fld qword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { fadd qword ptr [g_00e3ca58] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { fstp qword ptr [esi + 0x18] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b893d0
extern "C" __declspec(naked) void asm_00b893d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test eax, eax }
	__asm { jne L_00b893f8 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b893f8: }
	__asm { cmp eax, 0x6666666 }
	__asm { jbe L_00b8940a }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00b8940a: }
	__asm { push edi }
	__asm { lea edi, [eax + eax*4] }
	__asm { shl edi, 3 }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b89430 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b89430: }
	__asm { call dword ptr [g_00e1025c] }
}

extern "C" void fn_00b88fa0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b8a3a0
extern "C" __declspec(naked) void asm_00b8a3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00b8a3e4 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00b88fa0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [edi + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b8a3e4: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004956d0();
extern "C" void fn_00a1b650();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b8be30
extern "C" __declspec(naked) void asm_00b8be30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x9c] }
	__asm { test ecx, ecx }
	__asm { je L_00b8be60 }
	__asm { call fn_004956d0 }
	__asm { cmp eax, dword ptr [ebp + 8] }
	__asm { je L_00b8bea7 }
	__asm { L_00b8be60: }
	__asm { push 0x30 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b8be88 }
	__asm { push 0 }
	__asm { push 3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_00a1b650 }
	__asm { jmp L_00b8be8a }
	__asm { L_00b8be88: }
	__asm { xor eax, eax }
	__asm { L_00b8be8a: }
	__asm { mov ecx, dword ptr [esi + 0x9c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 0x9c], eax }
	__asm { test ecx, ecx }
	__asm { je L_00b8bea7 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00b8bea7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c620();
// FUNCTION: ROBLOXSTUDIO 0x00b8c490
extern "C" __declspec(naked) void asm_00b8c490()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00b8c522 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00b8c4d9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c4c4 }
	__asm { push 0x18 }
	__asm { push 0xed3ab8 }
	__asm { push 0xe78b60 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c4d9 }
	__asm { L_00b8c4c4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed3b70 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c4d9: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8c522 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { cmp eax, 0xf }
	__asm { je L_00b8c522 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c50d }
	__asm { push 0x19 }
	__asm { push 0xed3ab8 }
	__asm { push 0xed3bcc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c522 }
	__asm { L_00b8c50d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed3c08 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c522: }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c620 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b8c8a0
extern "C" __declspec(naked) void asm_00b8c8a0()
{
	__asm { L_00b8c8a0: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor esi, esi }
	__asm { L_00b8c8a6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x14] }
	__asm { test eax, eax }
	__asm { je L_00b8c8b7 }
	__asm { cmp dword ptr [eax + 0x28], edi }
	__asm { je L_00b8c8fd }
	__asm { L_00b8c8b7: }
	__asm { inc esi }
	__asm { cmp esi, 2 }
	__asm { jl L_00b8c8a6 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b8c8fb }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b8c8ea }
	__asm { push 0x18 }
	__asm { push 0xed42a4 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c8fb }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b8c8ea: }
	__asm { movzx eax, al }
	__asm { push 0xed42e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c8fb: }
	__asm { xor eax, eax }
	__asm { L_00b8c8fd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call L_00b8c8a0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0xc] }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b533d0();
extern "C" void fn_00b8c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00b8cb00
extern "C" __declspec(naked) void asm_00b8cb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00b8cb4d }
	__asm { cmp dword ptr [esi + 0x94], 4 }
	__asm { jl L_00b8cb4d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b8cb3c }
	__asm { push 0x3b }
	__asm { push 0xed45e0 }
	__asm { push 0xed4710 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8cb4d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b8cb3c: }
	__asm { movzx eax, al }
	__asm { push 0xed4728 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8cb4d: }
	__asm { mov ecx, dword ptr [esi + 0x94] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + ecx*8 + 0x98], eax }
	__asm { mov ecx, dword ptr [esi + 0x94] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + ecx*8 + 0x9c], eax }
	__asm { mov eax, dword ptr [esi + 0x94] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + eax*4 + 0xbc], ecx }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c1b0 }
	__asm { mov ecx, eax }
	__asm { call fn_00b533d0 }
	__asm { inc dword ptr [esi + 0x94] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00626760();
extern "C" void fn_00629560();
extern "C" void fn_0099c980();
// FUNCTION: ROBLOXSTUDIO 0x00b8dec0
extern "C" __declspec(naked) void asm_00b8dec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { sub esp, 0x60 }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x34] }
	__asm { cmp dword ptr [ebp + 0xc], eax }
	__asm { je L_00b8ded5 }
	__asm { lea esi, [ecx + 0x64] }
	__asm { L_00b8ded5: }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { cmp edx, eax }
	__asm { jne L_00b8dee1 }
	__asm { add ecx, 0x34 }
	__asm { jmp L_00b8dee4 }
	__asm { L_00b8dee1: }
	__asm { add ecx, 0x64 }
	__asm { L_00b8dee4: }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_0099c980 }
	__asm { mov ecx, eax }
	__asm { call fn_00626760 }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00629560 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_00626760 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403160();
extern "C" void fn_00aefd90();
extern "C" void fn_00b8f5e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b8f640
extern "C" __declspec(naked) void asm_00b8f640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b958 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xed4f2c }
	__asm { mov dword ptr [esi + 0x1c], 0xed4f78 }
	__asm { mov edi, dword ptr [esi + 0x94] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00b8f68e }
	__asm { mov ecx, edi }
	__asm { call fn_00403160 }
	__asm { push edi }
	__asm { call fn_00b8f5e0 }
	__asm { add esp, 4 }
	__asm { L_00b8f68e: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00aefd90 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00b8f6ab }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b8f6ab: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130ef90[];
extern "C" void fn_00407e90();
extern "C" void fn_006da0e0();
extern "C" void fn_00b5e4a0();
// FUNCTION: ROBLOXSTUDIO 0x00b8fad0
extern "C" __declspec(naked) void asm_00b8fad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6cc48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00b5e4a0 }
	__asm { cmp byte ptr [g_0130ef90], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00b8fb37 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 0x10], 0x130ef8c }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 0x10], 0xb90020 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130ef90], 1 }
	__asm { L_00b8fb37: }
	__asm { lea ecx, [esi + 0xcc] }
	__asm { mov dword ptr [esi], 0xed5154 }
	__asm { call fn_006da0e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_00aefd90();
extern "C" void fn_00b8fcf0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b8fd50
extern "C" __declspec(naked) void asm_00b8fd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b958 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xed50ec }
	__asm { mov dword ptr [esi + 0x1c], 0xed5138 }
	__asm { mov edi, dword ptr [esi + 0x94] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00b8fd9e }
	__asm { mov ecx, edi }
	__asm { call fn_00403160 }
	__asm { push edi }
	__asm { call fn_00b8fcf0 }
	__asm { add esp, 4 }
	__asm { L_00b8fd9e: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00aefd90 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00b8fdbb }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b8fdbb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b5e720();
extern "C" void fn_00b8fe60();
extern "C" void fn_00b90360();
// FUNCTION: ROBLOXSTUDIO 0x00b90080
extern "C" __declspec(naked) void asm_00b90080()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b8fe60 }
	__asm { cmp eax, 1 }
	__asm { jne L_00b90092 }
	__asm { lea ecx, [esi + 0x34] }
	__asm { jmp L_00b9009c }
	__asm { L_00b90092: }
	__asm { test eax, eax }
	__asm { lea ecx, [esi + 0x64] }
	__asm { lea eax, [esi + 0x34] }
	__asm { je L_00b9009f }
	__asm { L_00b9009c: }
	__asm { lea eax, [esi + 0x64] }
	__asm { L_00b9009f: }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi + 0x94] }
	__asm { push eax }
	__asm { call fn_00b5e720 }
	__asm { mov eax, dword ptr [esi + 0xc4] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0xc8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 0xcc] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xb8] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0xbc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 0xc0] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b90360 }
	__asm { mov eax, dword ptr [esi + 0x94] }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00b918b0();
// FUNCTION: ROBLOXSTUDIO 0x00b91850
extern "C" __declspec(naked) void asm_00b91850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx - 0x64] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0xa0] }
	__asm { lea edi, [ecx - 0x64] }
	__asm { mov ecx, edi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00b9188c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov eax, dword ptr [eax + 0x64] }
	__asm { test eax, eax }
	__asm { js L_00b9188c }
	__asm { cmp eax, 4 }
	__asm { jg L_00b9188c }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00b918b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b9188c: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0130efc4[];
extern "C" char g_0130efc8[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b91e10
extern "C" __declspec(naked) void asm_00b91e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5b9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130efc8] }
	__asm { test al, 1 }
	__asm { jne L_00b91e52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130efc8], eax }
	__asm { push 0xed56dc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130efc4], eax }
	__asm { L_00b91e52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00532480();
extern "C" void fn_00891b10();
// FUNCTION: ROBLOXSTUDIO 0x00b92ef0
extern "C" __declspec(naked) void asm_00b92ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00b92f39 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00891b10 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { add esp, 4 }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov ebx, dword ptr [ecx + 4] }
	__asm { mov edi, eax }
	__asm { cmp esi, ebx }
	__asm { je L_00b92f39 }
	__asm { L_00b92f17: }
	__asm { mov edx, dword ptr [esi] }
	__asm { cmp edi, edx }
	__asm { je L_00b92f45 }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { cmp edx, ecx }
	__asm { je L_00b92f45 }
	__asm { test ecx, ecx }
	__asm { je L_00b92f32 }
	__asm { push edx }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { jne L_00b92f45 }
	__asm { L_00b92f32: }
	__asm { add esi, 8 }
	__asm { cmp esi, ebx }
	__asm { jne L_00b92f17 }
	__asm { L_00b92f39: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 2 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b92f45: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93130
extern "C" __declspec(naked) void asm_00b93130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bb20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93188 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6c38 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9318a }
	__asm { L_00b93188: }
	__asm { xor eax, eax }
	__asm { L_00b9318a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b931c0
extern "C" __declspec(naked) void asm_00b931c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bb30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93218 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6c50 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9321a }
	__asm { L_00b93218: }
	__asm { xor eax, eax }
	__asm { L_00b9321a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93250
extern "C" __declspec(naked) void asm_00b93250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bb40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b932a8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6c98 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b932aa }
	__asm { L_00b932a8: }
	__asm { xor eax, eax }
	__asm { L_00b932aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b932e0
extern "C" __declspec(naked) void asm_00b932e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bb50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93338 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6c08 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9333a }
	__asm { L_00b93338: }
	__asm { xor eax, eax }
	__asm { L_00b9333a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93370
extern "C" __declspec(naked) void asm_00b93370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bb60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b933c8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6bc0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b933ca }
	__asm { L_00b933c8: }
	__asm { xor eax, eax }
	__asm { L_00b933ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93400
extern "C" __declspec(naked) void asm_00b93400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bb70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93458 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6cc8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9345a }
	__asm { L_00b93458: }
	__asm { xor eax, eax }
	__asm { L_00b9345a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93490
extern "C" __declspec(naked) void asm_00b93490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bb80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b934e8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6ae8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b934ea }
	__asm { L_00b934e8: }
	__asm { xor eax, eax }
	__asm { L_00b934ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93520
extern "C" __declspec(naked) void asm_00b93520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bb90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93578 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6bf0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9357a }
	__asm { L_00b93578: }
	__asm { xor eax, eax }
	__asm { L_00b9357a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b935b0
extern "C" __declspec(naked) void asm_00b935b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bba0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93608 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6b00 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9360a }
	__asm { L_00b93608: }
	__asm { xor eax, eax }
	__asm { L_00b9360a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93640
extern "C" __declspec(naked) void asm_00b93640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bbb0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93698 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6ba8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9369a }
	__asm { L_00b93698: }
	__asm { xor eax, eax }
	__asm { L_00b9369a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b936d0
extern "C" __declspec(naked) void asm_00b936d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bbc0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93728 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6b90 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9372a }
	__asm { L_00b93728: }
	__asm { xor eax, eax }
	__asm { L_00b9372a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93760
extern "C" __declspec(naked) void asm_00b93760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bbd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b937b8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6b48 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b937ba }
	__asm { L_00b937b8: }
	__asm { xor eax, eax }
	__asm { L_00b937ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b937f0
extern "C" __declspec(naked) void asm_00b937f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bbe0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93848 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6c68 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9384a }
	__asm { L_00b93848: }
	__asm { xor eax, eax }
	__asm { L_00b9384a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93880
extern "C" __declspec(naked) void asm_00b93880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bbf0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b938d8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6cb0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b938da }
	__asm { L_00b938d8: }
	__asm { xor eax, eax }
	__asm { L_00b938da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93910
extern "C" __declspec(naked) void asm_00b93910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bc00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93968 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6ad0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9396a }
	__asm { L_00b93968: }
	__asm { xor eax, eax }
	__asm { L_00b9396a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b939a0
extern "C" __declspec(naked) void asm_00b939a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bc10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b939f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6c20 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b939fa }
	__asm { L_00b939f8: }
	__asm { xor eax, eax }
	__asm { L_00b939fa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93a30
extern "C" __declspec(naked) void asm_00b93a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bc20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93a88 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6bd8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b93a8a }
	__asm { L_00b93a88: }
	__asm { xor eax, eax }
	__asm { L_00b93a8a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93ac0
extern "C" __declspec(naked) void asm_00b93ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bc30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93b18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6c80 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b93b1a }
	__asm { L_00b93b18: }
	__asm { xor eax, eax }
	__asm { L_00b93b1a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93b50
extern "C" __declspec(naked) void asm_00b93b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bc40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93ba8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6b78 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b93baa }
	__asm { L_00b93ba8: }
	__asm { xor eax, eax }
	__asm { L_00b93baa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93be0
extern "C" __declspec(naked) void asm_00b93be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bc50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93c38 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6b30 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b93c3a }
	__asm { L_00b93c38: }
	__asm { xor eax, eax }
	__asm { L_00b93c3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93c70
extern "C" __declspec(naked) void asm_00b93c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bc60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93cc8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6b60 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b93cca }
	__asm { L_00b93cc8: }
	__asm { xor eax, eax }
	__asm { L_00b93cca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007c23c0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b93d00
extern "C" __declspec(naked) void asm_00b93d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5bc70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b93d58 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6b18 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b93d5a }
	__asm { L_00b93d58: }
	__asm { xor eax, eax }
	__asm { L_00b93d5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007c23c0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00ee9374[];
extern "C" char g_0130f124[];
extern "C" char g_0130f128[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95370
extern "C" __declspec(naked) void asm_00b95370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5bc8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ee9374], 0 }
	__asm { jne L_00b953a4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b953a4: }
	__asm { push 0xb93d90 }
	__asm { push 0x130f074 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f128] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b953ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f128], eax }
	__asm { push 0xee9374 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f124], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b953ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f124] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ee95a0[];
extern "C" char g_0130f12c[];
extern "C" char g_0130f130[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95410
extern "C" __declspec(naked) void asm_00b95410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5be2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ee95a0], 0 }
	__asm { jne L_00b95444 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95444: }
	__asm { push 0xb93de0 }
	__asm { push 0x130f07c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f130] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b9548e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f130], eax }
	__asm { push 0xee95a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f12c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b9548e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f12c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec97ac[];
extern "C" char g_0130f0dc[];
extern "C" char g_0130f0e0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b954b0
extern "C" __declspec(naked) void asm_00b954b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5bcae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ec97ac], 0 }
	__asm { jne L_00b954e4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b954e4: }
	__asm { push 0xb93e30 }
	__asm { push 0x130f02c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f0e0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b9552e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f0e0], eax }
	__asm { push 0xec97ac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0dc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b9552e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0dc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ee9644[];
extern "C" char g_0130f114[];
extern "C" char g_0130f118[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95550
extern "C" __declspec(naked) void asm_00b95550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5be4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ee9644], 0 }
	__asm { jne L_00b95584 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95584: }
	__asm { push 0xb93e80 }
	__asm { push 0x130f064 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f118] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b955ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f118], eax }
	__asm { push 0xee9644 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f114], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b955ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f114] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ee8c90[];
extern "C" char g_0130f0fc[];
extern "C" char g_0130f100[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b955f0
extern "C" __declspec(naked) void asm_00b955f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd60d7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ee8c90], 0 }
	__asm { jne L_00b95624 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95624: }
	__asm { push 0xb93ed0 }
	__asm { push 0x130f04c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f100] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b9566e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f100], eax }
	__asm { push 0xee8c90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0fc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b9566e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0fc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e82d54[];
extern "C" char g_0130f084[];
extern "C" char g_0130f088[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95690
extern "C" __declspec(naked) void asm_00b95690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5bcce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e82d54], 0 }
	__asm { jne L_00b956c4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b956c4: }
	__asm { push 0xb93f20 }
	__asm { push 0x130efd4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f088] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b9570e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f088], eax }
	__asm { push 0xe82d54 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f084], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b9570e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f084] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e88588[];
extern "C" char g_0130f094[];
extern "C" char g_0130f098[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95730
extern "C" __declspec(naked) void asm_00b95730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5bcee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e88588], 0 }
	__asm { jne L_00b95764 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95764: }
	__asm { push 0xb93f70 }
	__asm { push 0x130efe4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f098] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b957ae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f098], eax }
	__asm { push 0xe88588 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f094], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b957ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f094] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ee8d94[];
extern "C" char g_0130f10c[];
extern "C" char g_0130f110[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b957d0
extern "C" __declspec(naked) void asm_00b957d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5bd0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ee8d94], 0 }
	__asm { jne L_00b95804 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95804: }
	__asm { push 0xb93fd0 }
	__asm { push 0x130f05c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f110] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b9584e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f110], eax }
	__asm { push 0xee8d94 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f10c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b9584e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f10c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e8856c[];
extern "C" char g_0130f09c[];
extern "C" char g_0130f0a0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95870
extern "C" __declspec(naked) void asm_00b95870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5be6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e8856c], 0 }
	__asm { jne L_00b958a4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b958a4: }
	__asm { push 0xb94020 }
	__asm { push 0x130efec }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f0a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b958ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f0a0], eax }
	__asm { push 0xe8856c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f09c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b958ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f09c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ee8bc0[];
extern "C" char g_0130f0f4[];
extern "C" char g_0130f0f8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95910
extern "C" __declspec(naked) void asm_00b95910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd60cde }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ee8bc0], 0 }
	__asm { jne L_00b95944 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95944: }
	__asm { push 0xb94070 }
	__asm { push 0x130f044 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f0f8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b9598e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f0f8], eax }
	__asm { push 0xee8bc0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0f4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b9598e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0f4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ee8ac8[];
extern "C" char g_0130f0ec[];
extern "C" char g_0130f0f0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b959b0
extern "C" __declspec(naked) void asm_00b959b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5be8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ee8ac8], 0 }
	__asm { jne L_00b959e4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b959e4: }
	__asm { push 0xb940c0 }
	__asm { push 0x130f03c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f0f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b95a2e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f0f0], eax }
	__asm { push 0xee8ac8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0ec], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95a2e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0ec] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e88568[];
extern "C" char g_0130f0b4[];
extern "C" char g_0130f0b8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95a50
extern "C" __declspec(naked) void asm_00b95a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5beae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e88568], 0 }
	__asm { jne L_00b95a84 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95a84: }
	__asm { push 0xb94110 }
	__asm { push 0x130f004 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f0b8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b95ace }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f0b8], eax }
	__asm { push 0xe88568 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0b4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95ace: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0b4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e8858c[];
extern "C" char g_0130f0c4[];
extern "C" char g_0130f0c8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95af0
extern "C" __declspec(naked) void asm_00b95af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5bd2e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e8858c], 0 }
	__asm { jne L_00b95b24 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95b24: }
	__asm { push 0xb94160 }
	__asm { push 0x130f014 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f0c8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b95b6e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f0c8], eax }
	__asm { push 0xe8858c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0c4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95b6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0c4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec97b0[];
extern "C" char g_0130f0e4[];
extern "C" char g_0130f0e8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95b90
extern "C" __declspec(naked) void asm_00b95b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5bd4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ec97b0], 0 }
	__asm { jne L_00b95bc4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95bc4: }
	__asm { push 0xb941b0 }
	__asm { push 0x130f034 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f0e8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b95c0e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f0e8], eax }
	__asm { push 0xec97b0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0e4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95c0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0e4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e82d58[];
extern "C" char g_0130f08c[];
extern "C" char g_0130f090[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95c30
extern "C" __declspec(naked) void asm_00b95c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5bd6e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e82d58], 0 }
	__asm { jne L_00b95c64 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95c64: }
	__asm { push 0xb94200 }
	__asm { push 0x130efdc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f090] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b95cae }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f090], eax }
	__asm { push 0xe82d58 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f08c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95cae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f08c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ee9164[];
extern "C" char g_0130f11c[];
extern "C" char g_0130f120[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95cd0
extern "C" __declspec(naked) void asm_00b95cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5bd8e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ee9164], 0 }
	__asm { jne L_00b95d04 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95d04: }
	__asm { push 0xb94250 }
	__asm { push 0x130f06c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f120] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b95d4e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f120], eax }
	__asm { push 0xee9164 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f11c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95d4e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f11c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ed6fdc[];
extern "C" char g_0130f104[];
extern "C" char g_0130f108[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95d70
extern "C" __declspec(naked) void asm_00b95d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5c4be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00ed6fdc], 0 }
	__asm { jne L_00b95da4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95da4: }
	__asm { push 0xb942a0 }
	__asm { push 0x130f054 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f108] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b95dee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f108], eax }
	__asm { push 0xed6fdc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f104], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95dee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f104] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e88560[];
extern "C" char g_0130f0cc[];
extern "C" char g_0130f0d0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95e10
extern "C" __declspec(naked) void asm_00b95e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5bdae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e88560], 0 }
	__asm { jne L_00b95e44 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95e44: }
	__asm { push 0xb942f0 }
	__asm { push 0x130f01c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f0d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b95e8e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f0d0], eax }
	__asm { push 0xe88560 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0cc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95e8e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0cc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e88564[];
extern "C" char g_0130f0d4[];
extern "C" char g_0130f0d8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95eb0
extern "C" __declspec(naked) void asm_00b95eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5bdce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e88564], 0 }
	__asm { jne L_00b95ee4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95ee4: }
	__asm { push 0xb94340 }
	__asm { push 0x130f024 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f0d8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b95f2e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f0d8], eax }
	__asm { push 0xe88564 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0d4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95f2e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0d4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e88580[];
extern "C" char g_0130f0ac[];
extern "C" char g_0130f0b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95f50
extern "C" __declspec(naked) void asm_00b95f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5bdee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e88580], 0 }
	__asm { jne L_00b95f84 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95f84: }
	__asm { push 0xb94390 }
	__asm { push 0x130effc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f0b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b95fce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f0b0], eax }
	__asm { push 0xe88580 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b95fce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0ac] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e88570[];
extern "C" char g_0130f0bc[];
extern "C" char g_0130f0c0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b95ff0
extern "C" __declspec(naked) void asm_00b95ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5bece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e88570], 0 }
	__asm { jne L_00b96024 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b96024: }
	__asm { push 0xb943e0 }
	__asm { push 0x130f00c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f0c0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b9606e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f0c0], eax }
	__asm { push 0xe88570 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0bc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b9606e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0bc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e88574[];
extern "C" char g_0130f0a4[];
extern "C" char g_0130f0a8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00b96090
extern "C" __declspec(naked) void asm_00b96090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5be0e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e88574], 0 }
	__asm { jne L_00b960c4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b960c4: }
	__asm { push 0xb94430 }
	__asm { push 0x130eff4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f0a8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b9610e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f0a8], eax }
	__asm { push 0xe88574 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f0a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b9610e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0130f0a4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00828a60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b96e50
extern "C" __declspec(naked) void asm_00b96e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push 0x10 }
	__asm { mov esi, ecx }
	__asm { push 0xed5b08 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_00828a60 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [esi], 0xed5a98 }
	__asm { mov dword ptr [esi + 0x24], 0x3f99999a }
	__asm { jb L_00b96ee1 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b96ee1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xed5aec }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007c9b10();
extern "C" void fn_00965160();
extern "C" void fn_0099a220();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b96fe0
extern "C" __declspec(naked) void asm_00b96fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi], 0xed64fc }
	__asm { mov dword ptr [edi + 4], 0xed6570 }
	__asm { mov dword ptr [edi + 0x1c], 0xed65a4 }
	__asm { mov eax, dword ptr [edi + 0xe0] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xe0] }
	__asm { call fn_007c9b10 }
	__asm { push dword ptr [edi + 0xe0] }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [edi + 0xcc] }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_00b9703c }
	__asm { mov ecx, esi }
	__asm { call fn_0099a220 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b9703c: }
	__asm { cmp dword ptr [edi + 0xc4], 0x10 }
	__asm { jb L_00b97053 }
	__asm { push dword ptr [edi + 0xb0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b97053: }
	__asm { mov dword ptr [edi + 0xc4], 0xf }
	__asm { mov dword ptr [edi + 0xc0], 0 }
	__asm { mov byte ptr [edi + 0xb0], 0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 0x88], 0xe461dc }
	__asm { call fn_00965160 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013000f0[];
extern "C" void fn_0096c310();
extern "C" void fn_0096c3f0();
extern "C" void fn_0096c940();
// FUNCTION: ROBLOXSTUDIO 0x00b97340
extern "C" __declspec(naked) void asm_00b97340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00b97382 }
	__asm { cmp byte ptr [esi + 0x1c], 0 }
	__asm { je L_00b97382 }
	__asm { cmp byte ptr [g_013000f0], 0 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [ecx + 0xba0] }
	__asm { jne L_00b97376 }
	__asm { call fn_0096c940 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b97376: }
	__asm { call fn_0096c310 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b97382: }
	__asm { mov edx, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esi }
	__asm { push esp }
	__asm { call dword ptr [edx + 0x1c] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0xba0] }
	__asm { call fn_0096c3f0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97810
extern "C" __declspec(naked) void asm_00b97810()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b97864 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b97864 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b97853 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b97864 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b97853: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b97864: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97885 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x122ab30 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97885: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97890
extern "C" __declspec(naked) void asm_00b97890()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b978e4 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b978e4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b978d3 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b978e4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b978d3: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b978e4: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97905 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12d1fc0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97905: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97910
extern "C" __declspec(naked) void asm_00b97910()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b97964 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b97964 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b97953 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b97964 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b97953: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b97964: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97985 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x12d1fa0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97985: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97990
extern "C" __declspec(naked) void asm_00b97990()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b979e4 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b979e4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b979d3 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b979e4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b979d3: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b979e4: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97a05 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f390 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97a05: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97a10
extern "C" __declspec(naked) void asm_00b97a10()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b97a64 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b97a64 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b97a53 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b97a64 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b97a53: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b97a64: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97a85 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f228 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97a85: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97a90
extern "C" __declspec(naked) void asm_00b97a90()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b97ae4 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b97ae4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b97ad3 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b97ae4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b97ad3: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b97ae4: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97b05 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f460 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97b05: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97b10
extern "C" __declspec(naked) void asm_00b97b10()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b97b64 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b97b64 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b97b53 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b97b64 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b97b53: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b97b64: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97b85 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f3ec }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97b85: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97b90
extern "C" __declspec(naked) void asm_00b97b90()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b97be4 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b97be4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b97bd3 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b97be4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b97bd3: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b97be4: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97c05 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1225dfc }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97c05: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97c10
extern "C" __declspec(naked) void asm_00b97c10()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b97c64 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b97c64 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b97c53 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b97c64 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b97c53: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b97c64: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97c85 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f274 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97c85: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97c90
extern "C" __declspec(naked) void asm_00b97c90()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b97ce4 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b97ce4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b97cd3 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b97ce4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b97cd3: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b97ce4: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97d05 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f428 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97d05: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97d10
extern "C" __declspec(naked) void asm_00b97d10()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b97d64 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b97d64 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b97d53 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b97d64 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b97d53: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b97d64: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97d85 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f290 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97d85: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97d90
extern "C" __declspec(naked) void asm_00b97d90()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b97de4 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b97de4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b97dd3 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b97de4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b97dd3: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b97de4: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97e05 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f444 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97e05: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97e10
extern "C" __declspec(naked) void asm_00b97e10()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b97e64 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b97e64 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b97e53 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b97e64 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b97e53: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b97e64: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97e85 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f47c }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97e85: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97e90
extern "C" __declspec(naked) void asm_00b97e90()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b97ee4 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b97ee4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b97ed3 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b97ee4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b97ed3: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b97ee4: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97f05 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1230eb0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97f05: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97f10
extern "C" __declspec(naked) void asm_00b97f10()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b97f64 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b97f64 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b97f53 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b97f64 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b97f53: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b97f64: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b97f85 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f2e4 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b97f85: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b97f90
extern "C" __declspec(naked) void asm_00b97f90()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b97fe4 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b97fe4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b97fd3 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b97fe4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b97fd3: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b97fe4: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b98005 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f320 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b98005: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b98010
extern "C" __declspec(naked) void asm_00b98010()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b98064 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b98064 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b98053 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b98064 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b98053: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b98064: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b98085 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f3b0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b98085: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b98090
extern "C" __declspec(naked) void asm_00b98090()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b980e4 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b980e4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b980d3 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b980e4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b980d3: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b980e4: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b98105 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f3cc }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b98105: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b98110
extern "C" __declspec(naked) void asm_00b98110()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b98164 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b98164 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b98153 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b98164 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b98153: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b98164: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b98185 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f24c }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b98185: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b98190
extern "C" __declspec(naked) void asm_00b98190()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b981e4 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b981e4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b981d3 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b981e4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b981d3: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b981e4: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b98205 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f40c }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b98205: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b98210
extern "C" __declspec(naked) void asm_00b98210()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b98264 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b98264 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b98253 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b98264 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b98253: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b98264: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b98285 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f340 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b98285: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b98290
extern "C" __declspec(naked) void asm_00b98290()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b982e4 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b982e4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b982d3 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b982e4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b982d3: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b982e4: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b98305 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x1230f14 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b98305: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b98310
extern "C" __declspec(naked) void asm_00b98310()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b98364 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b98364 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b98353 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b98364 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b98353: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b98364: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b98385 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f368 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b98385: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b98390
extern "C" __declspec(naked) void asm_00b98390()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b983e4 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b983e4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b983d3 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b983e4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b983d3: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b983e4: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b98405 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f2c8 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b98405: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b98410
extern "C" __declspec(naked) void asm_00b98410()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b98464 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b98464 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b98453 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b98464 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b98453: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b98464: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b98485 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f300 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b98485: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf67d4();
// FUNCTION: ROBLOXSTUDIO 0x00b98490
extern "C" __declspec(naked) void asm_00b98490()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xba0] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b984e4 }
	__asm { cmp dword ptr [esi + 0x1b8], 0 }
	__asm { jne L_00b984e4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b984d3 }
	__asm { push 0x114 }
	__asm { push 0x102bdf0 }
	__asm { push 0x102bdd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b984e4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b984d3: }
	__asm { movzx eax, al }
	__asm { push 0x102be38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b984e4: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00b98505 }
	__asm { push eax }
	__asm { call fn_00cf67d4 }
	__asm { add esp, 4 }
	__asm { mov ecx, 0x128f2ac }
	__asm { push eax }
	__asm { call dword ptr [g_00e10524] }
	__asm { ret }
	__asm { L_00b98505: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b9a250
extern "C" __declspec(naked) void asm_00b9a250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { add ecx, 0xb0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_00b9a286 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00b9a286: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00b9a297 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b9a297: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b9a2b0
extern "C" __declspec(naked) void asm_00b9a2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { add ecx, 0xec }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_00b9a2e6 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00b9a2e6: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00b9a2f7 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b9a2f7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00b9ad50();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b9a3b0
extern "C" __declspec(naked) void asm_00b9a3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c2d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b9a408 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6f80 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9a40a }
	__asm { L_00b9a408: }
	__asm { xor eax, eax }
	__asm { L_00b9a40a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b9ad50 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00b9ad70();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b9a4e0
extern "C" __declspec(naked) void asm_00b9a4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c2e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b9a538 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6f98 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9a53a }
	__asm { L_00b9a538: }
	__asm { xor eax, eax }
	__asm { L_00b9a53a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b9ad70 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00b9ad90();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00b9a610
extern "C" __declspec(naked) void asm_00b9a610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c2f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x10 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b9a668 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xed6fb0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00b9a66a }
	__asm { L_00b9a668: }
	__asm { xor eax, eax }
	__asm { L_00b9a66a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b9ad90 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00b9a6a0
extern "C" __declspec(naked) void asm_00b9a6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp eax, ecx }
	__asm { je L_00b9a703 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [edi] }
	__asm { L_00b9a6b4: }
	__asm { inc esi }
	__asm { mov dword ptr [edi], esi }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00b9a6fd }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { jne L_00b9a6dc }
	__asm { mov eax, edx }
	__asm { mov edx, dword ptr [eax] }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { jne L_00b9a6fa }
	__asm { L_00b9a6d0: }
	__asm { mov eax, edx }
	__asm { mov edx, dword ptr [eax] }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { je L_00b9a6d0 }
	__asm { jmp L_00b9a6fa }
	__asm { L_00b9a6dc: }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { jne L_00b9a6f8 }
	__asm { L_00b9a6e5: }
	__asm { cmp eax, dword ptr [edx + 8] }
	__asm { jne L_00b9a6f8 }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov edx, dword ptr [edx + 4] }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { je L_00b9a6e5 }
	__asm { L_00b9a6f8: }
	__asm { mov eax, edx }
	__asm { L_00b9a6fa: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_00b9a6fd: }
	__asm { cmp eax, ecx }
	__asm { jne L_00b9a6b4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00b9a703: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b9bb40();
extern "C" void fn_00b9bc30();
// FUNCTION: ROBLOXSTUDIO 0x00b9b720
extern "C" __declspec(naked) void asm_00b9b720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, ecx }
	__asm { cmp eax, 1 }
	__asm { jne L_00b9b747 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00b9bc30 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, 2 }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00b9b747: }
	__asm { cmp eax, 2 }
	__asm { jne L_00b9b766 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00b9bb40 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00b9b766: }
	__asm { xor ecx, ecx }
	__asm { cmp word ptr [ebp + 0xc], cx }
	__asm { setle cl }
	__asm { xor eax, eax }
	__asm { cmp word ptr [ebp + 0xe], ax }
	__asm { setle al }
	__asm { lea ecx, [eax + ecx*2] }
	__asm { xor eax, eax }
	__asm { cmp word ptr [ebp + 0x10], ax }
	__asm { setle al }
	__asm { lea eax, [eax + ecx*2] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [edx + 0x34] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_0130f190[];
extern "C" char g_0130f194[];
extern "C" char g_0130f198[];
extern "C" char g_0130f19c[];
extern "C" void fn_00b9b4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b9caf0
extern "C" __declspec(naked) void asm_00b9caf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5c43e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f19c] }
	__asm { test al, 1 }
	__asm { jne L_00b9cb57 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f19c], eax }
	__asm { mov ecx, 0x130f190 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f190], 0 }
	__asm { mov dword ptr [g_0130f194], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe07b60 }
	__asm { mov dword ptr [g_0130f190], eax }
	__asm { mov byte ptr [g_0130f198], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b9cb57: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f178[];
extern "C" char g_0130f17c[];
extern "C" char g_0130f180[];
extern "C" char g_0130f184[];
extern "C" void fn_004115f0();
extern "C" void fn_00b9b4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b9cec0
extern "C" __declspec(naked) void asm_00b9cec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5c41e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb9ca70 }
	__asm { push 0x130f148 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f184] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b9cf39 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f184], eax }
	__asm { mov ecx, 0x130f178 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f178], 0 }
	__asm { mov dword ptr [g_0130f17c], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe07ae0 }
	__asm { mov dword ptr [g_0130f178], eax }
	__asm { mov byte ptr [g_0130f180], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b9cf39: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130f178 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f190[];
extern "C" char g_0130f194[];
extern "C" char g_0130f198[];
extern "C" char g_0130f19c[];
extern "C" void fn_004115f0();
extern "C" void fn_00b9b4c0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00b9cf50
extern "C" __declspec(naked) void asm_00b9cf50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5c43e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push 0xb9caf0 }
	__asm { push 0x130f188 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130f19c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b9cfc9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f19c], eax }
	__asm { mov ecx, 0x130f190 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f190], 0 }
	__asm { mov dword ptr [g_0130f194], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe07b60 }
	__asm { mov dword ptr [g_0130f190], eax }
	__asm { mov byte ptr [g_0130f198], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00b9cfc9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130f190 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f1ac[];
extern "C" char g_0130f1b0[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00b9cfe0
extern "C" __declspec(naked) void asm_00b9cfe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5c49e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f1b0] }
	__asm { test al, 1 }
	__asm { jne L_00b9d022 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f1b0], eax }
	__asm { push 0xed6fe0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f1ac], eax }
	__asm { L_00b9d022: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc98e[];
extern "C" void fn_006b8a90();
extern "C" void fn_009332f0();
// FUNCTION: ROBLOXSTUDIO 0x00b9d0c0
extern "C" __declspec(naked) void asm_00b9d0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c458 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009332f0 }
	__asm { mov dword ptr [esi], 0xed6fec }
	__asm { mov dword ptr [esi + 4], 0xed7048 }
	__asm { mov dword ptr [esi + 0x1c], 0xed707c }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00b9d11d }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xed7128 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00b9d11d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
