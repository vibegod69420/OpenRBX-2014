// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_01038280[];
extern "C" char g_012b55c0[];
extern "C" void fn_005b0510();
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x00595480
extern "C" __declspec(naked) void asm_00595480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff0 }
	__asm { sub esp, 0x28 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { mov esi, dword ptr [edi + 0x84] }
	__asm { xorps xmm0, xmm0 }
	__asm { mov dword ptr [esp + 0xc], 0xdd5e0b6b }
	__asm { test esi, esi }
	__asm { jle L_0059554d }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edi + 0x8c] }
	__asm { movaps xmm3, xmmword ptr [eax] }
	__asm { mulps xmm3, xmmword ptr [edi + 0x10] }
	__asm { movaps xmmword ptr [esp + 0x10], xmm3 }
	__asm { cmp esi, 0xa }
	__asm { jge L_00595525 }
	__asm { movss xmm2, dword ptr [g_01038280] }
	__asm { movss xmm4, dword ptr [esp + 0x18] }
	__asm { movss xmm5, dword ptr [esp + 0x14] }
	__asm { or edx, 0xffffffff }
	__asm { xor eax, eax }
	__asm { add ecx, 8 }
	__asm { mov edi, edi }
	__asm { L_005954f0: }
	__asm { movss xmm1, dword ptr [ecx - 8] }
	__asm { movss xmm0, dword ptr [ecx - 4] }
	__asm { mulss xmm0, xmm5 }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, dword ptr [ecx] }
	__asm { addss xmm1, xmm0 }
	__asm { comiss xmm1, xmm2 }
	__asm { jbe L_0059551b }
	__asm { movaps xmm2, xmm1 }
	__asm { mov edx, eax }
	__asm { L_0059551b: }
	__asm { inc eax }
	__asm { add ecx, 0x10 }
	__asm { cmp eax, esi }
	__asm { jl L_005954f0 }
	__asm { jmp L_00595539 }
	__asm { L_00595525: }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea edx, [esp + 0x18] }
	__asm { call fn_005b0510 }
	__asm { add esp, 8 }
	__asm { mov edx, eax }
	__asm { L_00595539: }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { shl edx, 4 }
	__asm { add edx, dword ptr [edi + 0x8c] }
	__asm { movaps xmm0, xmmword ptr [edx] }
	__asm { mulps xmm0, xmmword ptr [edi + 0x10] }
	__asm { L_0059554d: }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor ecx, esp }
	__asm { movaps xmmword ptr [eax], xmm0 }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01038280[];
extern "C" char g_012b55c0[];
extern "C" void fn_005b0510();
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x00595570
extern "C" __declspec(naked) void asm_00595570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff0 }
	__asm { sub esp, 0x28 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov eax, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { test edx, edx }
	__asm { jle L_00595694 }
	__asm { lea eax, [edi + 0xc] }
	__asm { mov ecx, edx }
	__asm { nop }
	__asm { L_005955a0: }
	__asm { mov dword ptr [eax], 0xdd5e0b6b }
	__asm { lea eax, [eax + 0x10] }
	__asm { dec ecx }
	__asm { jne L_005955a0 }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { test edx, edx }
	__asm { jle L_00595694 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add edi, 0xc }
	__asm { mov edi, edi }
	__asm { L_005955c0: }
	__asm { movaps xmm3, xmmword ptr [ecx] }
	__asm { mulps xmm3, xmmword ptr [eax + 0x10] }
	__asm { mov esi, dword ptr [eax + 0x84] }
	__asm { movaps xmmword ptr [esp + 0x10], xmm3 }
	__asm { test esi, esi }
	__asm { jle L_0059567b }
	__asm { mov ecx, dword ptr [eax + 0x8c] }
	__asm { cmp esi, 0xa }
	__asm { jge L_0059563d }
	__asm { movss xmm2, dword ptr [g_01038280] }
	__asm { movss xmm4, dword ptr [esp + 0x18] }
	__asm { movss xmm5, dword ptr [esp + 0x14] }
	__asm { or edx, 0xffffffff }
	__asm { xor eax, eax }
	__asm { add ecx, 8 }
	__asm { L_00595601: }
	__asm { movss xmm0, dword ptr [ecx - 4] }
	__asm { movss xmm1, dword ptr [ecx - 8] }
	__asm { mulss xmm0, xmm5 }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { comiss xmm1, xmm2 }
	__asm { jbe L_0059562d }
	__asm { movaps xmm2, xmm1 }
	__asm { mov edx, eax }
	__asm { L_0059562d: }
	__asm { inc eax }
	__asm { add ecx, 0x10 }
	__asm { cmp eax, esi }
	__asm { jl L_00595601 }
	__asm { movss dword ptr [esp + 0xc], xmm2 }
	__asm { jmp L_00595657 }
	__asm { L_0059563d: }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { lea edx, [esp + 0x18] }
	__asm { call fn_005b0510 }
	__asm { movss xmm2, dword ptr [esp + 0x14] }
	__asm { add esp, 8 }
	__asm { mov edx, eax }
	__asm { L_00595657: }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { shl edx, 4 }
	__asm { add edx, dword ptr [eax + 0x8c] }
	__asm { movaps xmm0, xmmword ptr [edx] }
	__asm { mulps xmm0, xmmword ptr [eax + 0x10] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { movaps xmmword ptr [edi - 0xc], xmm0 }
	__asm { movss dword ptr [edi], xmm2 }
	__asm { jmp L_00595681 }
	__asm { L_0059567b: }
	__asm { mov dword ptr [edi], 0xdd5e0b6b }
	__asm { L_00595681: }
	__asm { add ecx, 0x10 }
	__asm { add edi, 0x10 }
	__asm { dec edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { jne L_005955c0 }
	__asm { L_00595694: }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor ecx, esp }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01038034[];
extern "C" char g_01038038[];
extern "C" char g_010380e4[];
extern "C" char g_01038248[];
extern "C" void fn_005741a0();
// FUNCTION: ROBLOXSTUDIO 0x005956b0
extern "C" __declspec(naked) void asm_005956b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff0 }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { call eax }
	__asm { fstp dword ptr [esp + 8] }
	__asm { movss xmm0, dword ptr [esp + 8] }
	__asm { ucomiss xmm0, dword ptr [g_01038034] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00595819 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movaps xmm2, xmmword ptr [eax] }
	__asm { movaps xmm4, xmm2 }
	__asm { shufps xmm4, xmm2, 0x55 }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, xmm4 }
	__asm { movaps xmm1, xmm2 }
	__asm { mulss xmm1, xmm2 }
	__asm { movaps xmm3, xmm2 }
	__asm { shufps xmm3, xmm2, 0xaa }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, xmm3 }
	__asm { movaps xmmword ptr [esp + 0x10], xmm2 }
	__asm { movaps xmmword ptr [esp + 0x30], xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [g_01038038] }
	__asm { movaps xmmword ptr [esp + 0x20], xmm3 }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_0059575a }
	__asm { movss xmm0, dword ptr [g_01038248] }
	__asm { movaps xmm2, xmm0 }
	__asm { movaps xmm4, xmm0 }
	__asm { movaps xmm3, xmm0 }
	__asm { movaps xmmword ptr [esp + 0x10], xmm2 }
	__asm { movaps xmmword ptr [esp + 0x30], xmm4 }
	__asm { movaps xmmword ptr [esp + 0x20], xmm3 }
	__asm { L_0059575a: }
	__asm { movaps xmm1, xmm2 }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm2 }
	__asm { push ecx }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [esp], xmm1 }
	__asm { call fn_005741a0 }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { divss xmm0, dword ptr [esp + 0xc] }
	__asm { movaps xmm1, xmmword ptr [esp + 0x14] }
	__asm { mulss xmm1, xmm0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { mov ecx, esi }
	__asm { movaps xmmword ptr [esp + 0x10], xmm1 }
	__asm { movaps xmm1, xmm0 }
	__asm { mulss xmm1, dword ptr [esp + 0x30] }
	__asm { movss dword ptr [esp + 0xc], xmm1 }
	__asm { movaps xmm1, xmmword ptr [esp + 0x20] }
	__asm { mulss xmm1, xmm0 }
	__asm { movaps xmmword ptr [esp + 0x20], xmm1 }
	__asm { call eax }
	__asm { fstp dword ptr [esp + 8] }
	__asm { movss xmm0, dword ptr [esp + 8] }
	__asm { movaps xmm2, xmmword ptr [esp + 0x10] }
	__asm { movss xmm1, dword ptr [esp + 0xc] }
	__asm { movaps xmm3, xmmword ptr [esp + 0x20] }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { addss xmm0, xmm2 }
	__asm { movss dword ptr [edi], xmm0 }
	__asm { movss xmm0, dword ptr [edi + 4] }
	__asm { addss xmm0, xmm1 }
	__asm { movss dword ptr [edi + 4], xmm0 }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { addss xmm0, xmm3 }
	__asm { movss dword ptr [edi + 8], xmm0 }
	__asm { L_00595819: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00595830
extern "C" __declspec(naked) void asm_00595830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0x84] }
	__asm { idiv edi }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { shl edx, 4 }
	__asm { add edx, dword ptr [ecx + 0x8c] }
	__asm { movaps xmm0, xmmword ptr [edx] }
	__asm { mulps xmm0, xmmword ptr [ecx + 0x10] }
	__asm { movaps xmmword ptr [eax], xmm0 }
	__asm { lea eax, [esi + 1] }
	__asm { cdq }
	__asm { idiv edi }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { shl edx, 4 }
	__asm { add edx, dword ptr [ecx + 0x8c] }
	__asm { movaps xmm0, xmmword ptr [edx] }
	__asm { mulps xmm0, xmmword ptr [ecx + 0x10] }
	__asm { movaps xmmword ptr [eax], xmm0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}
