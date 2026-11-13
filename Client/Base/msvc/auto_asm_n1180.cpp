// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_0130f1d8[];
extern "C" char g_0130f1dc[];
extern "C" void fn_00407e90();
extern "C" void fn_006d19a0();
extern "C" void fn_006d6760();
extern "C" void fn_006da0e0();
extern "C" void fn_006dea00();
extern "C" void fn_00b65d10();
extern "C" void fn_00ba8d70();
extern "C" void fn_00c048d0();
// FUNCTION: ROBLOXSTUDIO 0x00ba8960
extern "C" __declspec(naked) void asm_00ba8960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5cce3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call fn_00c048d0 }
	__asm { cmp byte ptr [g_0130f1d8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00ba89c7 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 0x10], 0x13031bc }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 0x10], 0xba9c00 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130f1d8], 1 }
	__asm { L_00ba89c7: }
	__asm { mov dword ptr [edi], 0xedd2fc }
	__asm { mov byte ptr [edi + 0x1c], 0 }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { mov dword ptr [edi + 0x20], 0xffffffff }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov byte ptr [edi + 0x38], 1 }
	__asm { call fn_006da0e0 }
	__asm { call fn_006d6760 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x6c] }
	__asm { call fn_006d19a0 }
	__asm { mov dword ptr [edi + 0x90], 0 }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x94], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0x98], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0x9c], eax }
	__asm { mov eax, dword ptr [g_0130f1dc] }
	__asm { inc eax }
	__asm { lea esi, [edi + 0xa4] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [g_0130f1dc], eax }
	__asm { mov dword ptr [edi + 0xa0], eax }
	__asm { call fn_006da0e0 }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x30], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x34], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x3c], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x40], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { push 0x134 }
	__asm { mov dword ptr [edi + 0x28], edi }
	__asm { call fn_00ba8d70 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00ba8ac1 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00b65d10 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ba8ac1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b65f80();
extern "C" void fn_00ba8de0();
extern "C" void fn_00ba8e40();
extern "C" void fn_00c048f0();
// FUNCTION: ROBLOXSTUDIO 0x00ba8ae0
extern "C" __declspec(naked) void asm_00ba8ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5cd58 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xedd2fc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00ba8c1c }
	__asm { cmp dword ptr [esi + 0x24], 0 }
	__asm { je L_00ba8b52 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba8b3d }
	__asm { push 0x24 }
	__asm { push 0xedd31c }
	__asm { push 0xedd358 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba8b52 }
	__asm { L_00ba8b3d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xedd370 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba8b52: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba8c1c }
	__asm { cmp dword ptr [esi + 0x34], 0 }
	__asm { je L_00ba8b98 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba8b83 }
	__asm { push 0x25 }
	__asm { push 0xedd31c }
	__asm { push 0xedd3d0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba8b98 }
	__asm { L_00ba8b83: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xedd3d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba8b98: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba8c1c }
	__asm { cmp dword ptr [esi + 0x30], 0 }
	__asm { jne L_00ba8bda }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba8bc5 }
	__asm { push 0x26 }
	__asm { push 0xedd31c }
	__asm { push 0xedd428 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba8bda }
	__asm { L_00ba8bc5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xedd430 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba8bda: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba8c1c }
	__asm { cmp dword ptr [esi + 0x20], -1 }
	__asm { je L_00ba8c1c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba8c07 }
	__asm { push 0x27 }
	__asm { push 0xedd31c }
	__asm { push 0xedd484 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba8c1c }
	__asm { L_00ba8c07: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xedd498 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba8c1c: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { test eax, eax }
	__asm { je L_00ba8c33 }
	__asm { push eax }
	__asm { call fn_00ba8de0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { L_00ba8c33: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x30] }
	__asm { test edi, edi }
	__asm { je L_00ba8c4b }
	__asm { mov ecx, edi }
	__asm { call fn_00b65f80 }
	__asm { push edi }
	__asm { call fn_00ba8e40 }
	__asm { add esp, 4 }
	__asm { L_00ba8c4b: }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { pop edi }
	__asm { je L_00ba8cd6 }
	__asm { cmp dword ptr [esi + 0x2c], 0 }
	__asm { je L_00ba8c95 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba8c80 }
	__asm { push 0x31 }
	__asm { push 0xedd31c }
	__asm { push 0xedd4f8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba8c95 }
	__asm { L_00ba8c80: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xedd500 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba8c95: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba8cd6 }
	__asm { cmp dword ptr [esi + 0x28], esi }
	__asm { je L_00ba8cd6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba8cc1 }
	__asm { push 0x32 }
	__asm { push 0xedd31c }
	__asm { push 0xedd550 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba8cd6 }
	__asm { L_00ba8cc1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xedd560 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba8cd6: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c048f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_0130f1d4[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00ba92e0();
// FUNCTION: ROBLOXSTUDIO 0x00ba8de0
extern "C" __declspec(naked) void asm_00ba8de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00ba92e0 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ba8e29 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ba8e29 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00ba8e29 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00ba8e29: }
	__asm { add dword ptr [g_0130f1d4], 0x3c }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_0130ee10[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00b664f0();
// FUNCTION: ROBLOXSTUDIO 0x00ba8e40
extern "C" __declspec(naked) void asm_00ba8e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00b664f0 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ba8e89 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ba8e89 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00ba8e89 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00ba8e89: }
	__asm { add dword ptr [g_0130ee10], 0x134 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00898ee0();
extern "C" void fn_00bef550();
// FUNCTION: ROBLOXSTUDIO 0x00ba9040
extern "C" __declspec(naked) void asm_00ba9040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { test edi, edi }
	__asm { je L_00ba911e }
	__asm { mov ecx, edi }
	__asm { call fn_00bef550 }
	__asm { mov ecx, esi }
	__asm { call fn_00898ee0 }
	__asm { movss xmm2, dword ptr [edi + 8] }
	__asm { movss xmm4, dword ptr [edi + 0xc] }
	__asm { movss xmm1, dword ptr [esi + 0xa8] }
	__asm { movss xmm3, dword ptr [edi + 0x10] }
	__asm { mulss xmm1, xmm4 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [esi + 0xa4] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0xac] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0xb4] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, dword ptr [esi + 0xc8] }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { movss xmm1, dword ptr [esi + 0xb0] }
	__asm { mulss xmm1, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0xb8] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0xc0] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, dword ptr [esi + 0xcc] }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { movss xmm1, dword ptr [esi + 0xbc] }
	__asm { mulss xmm1, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0xc4] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { addss xmm1, dword ptr [esi + 0xd0] }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { jmp L_00ba913e }
	__asm { L_00ba911e: }
	__asm { call fn_00898ee0 }
	__asm { mov eax, dword ptr [esi + 0xc8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0xcc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [esi + 0xd0] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00ba913e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
