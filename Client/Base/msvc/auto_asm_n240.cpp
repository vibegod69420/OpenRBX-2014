// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00574190();
// FUNCTION: ROBLOXSTUDIO 0x0059f6f0
extern "C" __declspec(naked) void asm_0059f6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff0 }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { call eax }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { call eax }
	__asm { fstp dword ptr [esp + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { call eax }
	__asm { fstp dword ptr [esp + 0x30] }
	__asm { movss xmm0, dword ptr [edi + 0x28] }
	__asm { addss xmm0, dword ptr [esp + 0xc] }
	__asm { movss xmm2, dword ptr [edi + 0x20] }
	__asm { movss xmm1, dword ptr [edi + 0x24] }
	__asm { addss xmm2, dword ptr [esp + 0x30] }
	__asm { addss xmm1, dword ptr [esp + 8] }
	__asm { divss xmm0, dword ptr [edi + 0x18] }
	__asm { divss xmm2, dword ptr [edi + 0x10] }
	__asm { divss xmm1, dword ptr [edi + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { movss dword ptr [esp + 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { push ecx }
	__asm { movss dword ptr [esp + 0x24], xmm2 }
	__asm { movss dword ptr [esp + 0x28], xmm1 }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { movss dword ptr [esp], xmm0 }
	__asm { call fn_00574190 }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { fstp dword ptr [esp + 0x14] }
	__asm { movss dword ptr [esp], xmm0 }
	__asm { call fn_00574190 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { fstp dword ptr [esp + 0x18] }
	__asm { movss dword ptr [esp], xmm0 }
	__asm { call fn_00574190 }
	__asm { fstp dword ptr [esp + 0x1c] }
	__asm { movq xmm0, qword ptr [esp + 0x14] }
	__asm { movq qword ptr [edi + 0x10], xmm0 }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { movq xmm0, qword ptr [esp + 0x1c] }
	__asm { movq qword ptr [edi + 0x18], xmm0 }
	__asm { movaps xmm1, xmmword ptr [edi + 0x10] }
	__asm { mulps xmm1, xmmword ptr [esp + 0x24] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm0, dword ptr [esp + 0x30] }
	__asm { movss dword ptr [esp + 0x10], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { shufps xmm0, xmm1, 0x55 }
	__asm { subss xmm0, dword ptr [esp + 8] }
	__asm { shufps xmm1, xmm1, 0xaa }
	__asm { subss xmm1, dword ptr [esp + 0xc] }
	__asm { movss dword ptr [esp + 0x14], xmm0 }
	__asm { movq xmm0, qword ptr [esp + 0x10] }
	__asm { movq qword ptr [edi + 0x20], xmm0 }
	__asm { movss dword ptr [esp + 0x18], xmm1 }
	__asm { movq xmm0, qword ptr [esp + 0x18] }
	__asm { movq qword ptr [edi + 0x28], xmm0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0059f940
extern "C" __declspec(naked) void asm_0059f940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff0 }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movq xmm0, qword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [esi] }
	__asm { movq qword ptr [esp + 0x10], xmm0 }
	__asm { movq xmm0, qword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { movq qword ptr [esp + 0x18], xmm0 }
	__asm { call eax }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { call eax }
	__asm { fstp dword ptr [esp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { call eax }
	__asm { fstp dword ptr [esp + 0x20] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { movss xmm2, dword ptr [esp + 0x10] }
	__asm { addss xmm2, dword ptr [esp + 0x20] }
	__asm { mov edx, 1 }
	__asm { movss xmm3, dword ptr [esp + 0x14] }
	__asm { mov ecx, esi }
	__asm { and ecx, 1 }
	__asm { addss xmm3, dword ptr [esp + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { movd xmm1, eax }
	__asm { cvtdq2ps xmm1, xmm1 }
	__asm { movd xmm0, ecx }
	__asm { cvtdq2ps xmm0, xmm0 }
	__asm { mulss xmm1, xmm2 }
	__asm { mulss xmm0, xmm2 }
	__asm { mov ecx, esi }
	__asm { movss xmm4, dword ptr [esp + 0x18] }
	__asm { subss xmm1, xmm0 }
	__asm { addss xmm4, dword ptr [esp + 0xc] }
	__asm { sar ecx, 1 }
	__asm { and ecx, edx }
	__asm { mov eax, edx }
	__asm { movss dword ptr [esp + 0x10], xmm1 }
	__asm { sub eax, ecx }
	__asm { movd xmm1, eax }
	__asm { cvtdq2ps xmm1, xmm1 }
	__asm { movd xmm0, ecx }
	__asm { cvtdq2ps xmm0, xmm0 }
	__asm { mulss xmm1, xmm3 }
	__asm { mulss xmm0, xmm3 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sar esi, 2 }
	__asm { subss xmm1, xmm0 }
	__asm { and esi, edx }
	__asm { sub edx, esi }
	__asm { movd xmm0, esi }
	__asm { cvtdq2ps xmm0, xmm0 }
	__asm { movss dword ptr [esp + 0x14], xmm1 }
	__asm { movd xmm1, edx }
	__asm { cvtdq2ps xmm1, xmm1 }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm4 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { pop esi }
	__asm { subss xmm1, xmm0 }
	__asm { movq xmm0, qword ptr [esp + 0xc] }
	__asm { movq qword ptr [eax], xmm0 }
	__asm { movss dword ptr [esp + 0x14], xmm1 }
	__asm { movq xmm0, qword ptr [esp + 0x14] }
	__asm { movq qword ptr [eax + 8], xmm0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01036f88[];
extern "C" char g_01038080[];
extern "C" char g_012b55c0[];
// FUNCTION: ROBLOXSTUDIO 0x0059fe00
extern "C" __declspec(naked) void asm_0059fe00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff0 }
	__asm { push -1 }
	__asm { push 0xd96fe8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x38] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0x20], esi }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0x10], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x14], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x18], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0x3d23d70a }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp + 0x40], 0 }
	__asm { mov dword ptr [esi], 0x1036f5c }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { movss xmm2, dword ptr [edi] }
	__asm { movss xmm1, dword ptr [edi + 4] }
	__asm { comiss xmm1, xmm2 }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { jbe L_0059fe9c }
	__asm { xor ecx, ecx }
	__asm { comiss xmm0, xmm2 }
	__asm { mov eax, 2 }
	__asm { cmova eax, ecx }
	__asm { jmp L_0059fea5 }
	__asm { L_0059fe9c: }
	__asm { xor eax, eax }
	__asm { comiss xmm0, xmm1 }
	__asm { setbe al }
	__asm { inc eax }
	__asm { L_0059fea5: }
	__asm { movss xmm0, dword ptr [edi + eax*4] }
	__asm { mulss xmm0, dword ptr [g_01038080] }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [esp + 0x1c], xmm0 }
	__asm { call dword ptr [g_01036f88] }
	__asm { fstp dword ptr [esp + 0x18] }
	__asm { movss xmm0, dword ptr [esp + 0x18] }
	__asm { movss xmm1, dword ptr [esp + 0x1c] }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_0059fee2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [esp], xmm1 }
	__asm { call dword ptr [eax + 0x28] }
	__asm { L_0059fee2: }
	__asm { movaps xmm1, xmmword ptr [edi] }
	__asm { mulps xmm1, xmmword ptr [esi + 0x10] }
	__asm { movss xmm2, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { mov eax, esi }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm0, xmm2 }
	__asm { movss dword ptr [esp + 0x24], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { shufps xmm0, xmm1, 0x55 }
	__asm { subss xmm0, xmm2 }
	__asm { shufps xmm1, xmm1, 0xaa }
	__asm { subss xmm1, xmm2 }
	__asm { movss dword ptr [esp + 0x28], xmm0 }
	__asm { movq xmm0, qword ptr [esp + 0x24] }
	__asm { movq qword ptr [esi + 0x20], xmm0 }
	__asm { movss dword ptr [esp + 0x2c], xmm1 }
	__asm { movq xmm0, qword ptr [esp + 0x2c] }
	__asm { movq qword ptr [esi + 0x28], xmm0 }
	__asm { mov ecx, dword ptr [esp + 0x38] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010385e0[];
// FUNCTION: ROBLOXSTUDIO 0x0059ff50
extern "C" __declspec(naked) void asm_0059ff50()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x48 }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { call eax }
	__asm { fstp dword ptr [ebp - 0x10] }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { movss xmm5, dword ptr [esi + 0x20] }
	__asm { movss xmm3, dword ptr [esi + 0x24] }
	__asm { movss xmm4, dword ptr [esi + 0x28] }
	__asm { movaps xmm6, xmmword ptr [eax + 0x20] }
	__asm { movaps xmm2, xmmword ptr [eax + 0x10] }
	__asm { movaps xmm1, xmmword ptr [eax] }
	__asm { addss xmm4, xmm0 }
	__asm { addss xmm5, xmm0 }
	__asm { addss xmm3, xmm0 }
	__asm { movdqa xmm0, xmmword ptr [g_010385e0] }
	__asm { andps xmm2, xmm0 }
	__asm { andps xmm1, xmm0 }
	__asm { andps xmm6, xmm0 }
	__asm { movq xmm0, qword ptr [eax + 0x30] }
	__asm { movq qword ptr [ebp - 0x40], xmm0 }
	__asm { movq xmm0, qword ptr [eax + 0x38] }
	__asm { movq qword ptr [ebp - 0x38], xmm0 }
	__asm { movaps xmm7, xmm1 }
	__asm { shufps xmm7, xmm1, 0x55 }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm0, xmm5 }
	__asm { movss dword ptr [ebp - 0x10], xmm5 }
	__asm { mulss xmm7, xmm3 }
	__asm { movaps xmm5, xmm2 }
	__asm { shufps xmm5, xmm2, 0x55 }
	__asm { addss xmm7, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [ebp - 0x10] }
	__asm { mulss xmm5, xmm3 }
	__asm { movss dword ptr [ebp - 0x30], xmm4 }
	__asm { shufps xmm1, xmm1, 0xaa }
	__asm { addss xmm5, xmm0 }
	__asm { mulss xmm1, xmm4 }
	__asm { shufps xmm2, xmm2, 0xaa }
	__asm { mulss xmm2, xmm4 }
	__asm { movaps xmm4, xmm6 }
	__asm { shufps xmm4, xmm6, 0x55 }
	__asm { movaps xmm0, xmm6 }
	__asm { mulss xmm0, dword ptr [ebp - 0x10] }
	__asm { mulss xmm4, xmm3 }
	__asm { movss xmm3, dword ptr [ebp - 0x40] }
	__asm { addss xmm7, xmm1 }
	__asm { movss xmm1, dword ptr [ebp - 0x38] }
	__asm { addss xmm4, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { addss xmm5, xmm2 }
	__asm { movss xmm2, dword ptr [ebp - 0x3c] }
	__asm { subss xmm0, xmm7 }
	__asm { shufps xmm6, xmm6, 0xaa }
	__asm { mulss xmm6, dword ptr [ebp - 0x30] }
	__asm { addss xmm3, xmm7 }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { subss xmm0, xmm5 }
	__asm { addss xmm4, xmm6 }
	__asm { addss xmm2, xmm5 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm0, xmm4 }
	__asm { addss xmm1, xmm4 }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 0x20] }
	__asm { movq qword ptr [edi], xmm0 }
	__asm { movq xmm0, qword ptr [ebp - 0x18] }
	__asm { movq qword ptr [edi + 8], xmm0 }
	__asm { movss dword ptr [ebp - 0x20], xmm3 }
	__asm { movss dword ptr [ebp - 0x1c], xmm2 }
	__asm { movss dword ptr [ebp - 0x18], xmm1 }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { movq xmm0, qword ptr [ebp - 0x20] }
	__asm { movq qword ptr [eax], xmm0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { movq xmm0, qword ptr [ebp - 0x18] }
	__asm { pop edi }
	__asm { movq qword ptr [eax + 8], xmm0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret 0xc }
}

extern "C" char g_01038040[];
extern "C" char g_010380e4[];
extern "C" char g_01038290[];
extern "C" char g_012b55c0[];
extern "C" void fn_005741a0();
extern "C" void fn_0059d500();
extern "C" void fn_00cf6d5f();
// FUNCTION: ROBLOXSTUDIO 0x005aa3e0
extern "C" __declspec(naked) void asm_005aa3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff0 }
	__asm { sub esp, 0x68 }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { mov dword ptr [esp + 0x64], eax }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esp + 0x14], edi }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov dword ptr [esp + 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_005aa604 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { mov esi, dword ptr [edx + 4] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov edi, dword ptr [edi + 4] }
	__asm { movss xmm2, dword ptr [eax + 0x30] }
	__asm { subss xmm2, dword ptr [ecx + 0x30] }
	__asm { movss xmm0, dword ptr [eax + 0x34] }
	__asm { subss xmm0, dword ptr [ecx + 0x34] }
	__asm { movss xmm3, dword ptr [eax + 0x38] }
	__asm { subss xmm3, dword ptr [ecx + 0x38] }
	__asm { push ecx }
	__asm { mov dword ptr [esp + 0x2c], ecx }
	__asm { movaps xmm1, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { movss dword ptr [esp + 0x20], xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, xmm2 }
	__asm { movss dword ptr [esp + 0x34], xmm2 }
	__asm { movss dword ptr [esp + 0x24], xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [esp], xmm1 }
	__asm { call fn_005741a0 }
	__asm { fstp dword ptr [esp + 0x18] }
	__asm { movss xmm6, dword ptr [edi + 0x20] }
	__asm { movss xmm0, dword ptr [esi + 0x20] }
	__asm { mulss xmm6, dword ptr [edi + 0x10] }
	__asm { mulss xmm0, dword ptr [esi + 0x10] }
	__asm { movss xmm2, dword ptr [esp + 0x18] }
	__asm { movaps xmm1, xmm6 }
	__asm { addss xmm1, xmm0 }
	__asm { add esp, 4 }
	__asm { comiss xmm2, xmm1 }
	__asm { jbe L_005aa4f9 }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { cmp dword ptr [ecx + 0x318], 0 }
	__asm { je L_005aa604 }
	__asm { mov edx, dword ptr [esp + 0x18] }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { cmp dword ptr [ecx + 0x310], esi }
	__asm { je L_005aa4e7 }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { add eax, 0x10 }
	__asm { jmp L_005aa5fe }
	__asm { L_005aa4e7: }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x10] }
	__asm { jmp L_005aa5fe }
	__asm { L_005aa4f9: }
	__asm { comiss xmm2, dword ptr [g_01038040] }
	__asm { movaps xmm4, xmmword ptr [g_01038290] }
	__asm { movaps xmm5, xmm2 }
	__asm { subss xmm5, xmm1 }
	__asm { movaps xmmword ptr [esp + 0x50], xmm4 }
	__asm { jbe L_005aa55e }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { divss xmm1, xmm2 }
	__asm { mov dword ptr [esp + 0x4c], 0 }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm0, dword ptr [esp + 0x30] }
	__asm { movss dword ptr [esp + 0x40], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm0, dword ptr [esp + 0x1c] }
	__asm { mulss xmm1, dword ptr [esp + 0x20] }
	__asm { movss dword ptr [esp + 0x44], xmm0 }
	__asm { movss dword ptr [esp + 0x48], xmm1 }
	__asm { movdqa xmm4, xmmword ptr [esp + 0x40] }
	__asm { movaps xmmword ptr [esp + 0x50], xmm4 }
	__asm { L_005aa55e: }
	__asm { mov eax, dword ptr [esp + 0x28] }
	__asm { mov esi, dword ptr [esp + 0x18] }
	__asm { movss xmm1, dword ptr [eax + 0x38] }
	__asm { movss xmm0, dword ptr [eax + 0x34] }
	__asm { movaps xmm2, xmm4 }
	__asm { movaps xmm3, xmm4 }
	__asm { shufps xmm2, xmm4, 0x55 }
	__asm { push ecx }
	__asm { shufps xmm4, xmm4, 0xaa }
	__asm { mulss xmm3, xmm6 }
	__asm { mulss xmm2, xmm6 }
	__asm { addss xmm3, dword ptr [eax + 0x30] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mulss xmm4, xmm6 }
	__asm { movss dword ptr [esp], xmm5 }
	__asm { lea ecx, [esp + 0x44] }
	__asm { push ecx }
	__asm { addss xmm1, xmm4 }
	__asm { addss xmm0, xmm2 }
	__asm { lea ecx, [esp + 0x58] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [esp + 0x4c], xmm3 }
	__asm { movss dword ptr [esp + 0x50], xmm0 }
	__asm { movss dword ptr [esp + 0x54], xmm1 }
	__asm { mov dword ptr [esp + 0x58], 0 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp dword ptr [ecx + 0x318], 0 }
	__asm { je L_005aa604 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { cmp dword ptr [ecx + 0x310], edx }
	__asm { je L_005aa5f1 }
	__asm { lea eax, [edx + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { add eax, 0x10 }
	__asm { jmp L_005aa5fe }
	__asm { L_005aa5f1: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { lea eax, [edx + 0x10] }
	__asm { L_005aa5fe: }
	__asm { push eax }
	__asm { call fn_0059d500 }
	__asm { L_005aa604: }
	__asm { mov ecx, dword ptr [esp + 0x6c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor ecx, esp }
	__asm { call fn_00cf6d5f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}
