// Bundled inline-assembly functions (merged from asmify12).

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de29c[];
extern "C" char g_012de2a0[];
extern "C" char g_012de2a4[];
extern "C" char g_012de2a8[];
// FUNCTION: ROBLOXSTUDIO 0x00a83890
extern "C" __declspec(naked) void asm_00a83890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012de2a8] }
	__asm { mov edx, ecx }
	__asm { test al, 1 }
	__asm { jne L_00a838c4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de2a8], eax }
	__asm { mov dword ptr [g_012de29c], 1 }
	__asm { mov dword ptr [g_012de2a0], 1 }
	__asm { mov dword ptr [g_012de2a4], 1 }
	__asm { L_00a838c4: }
	__asm { movsx eax, word ptr [edx + 0x92] }
	__asm { movsx ecx, word ptr [edx + 0x94] }
	__asm { push ebx }
	__asm { movsx ebx, word ptr [edx + 0x90] }
	__asm { push esi }
	__asm { movsx esi, word ptr [edx + 0x8c] }
	__asm { sub eax, esi }
	__asm { add eax, dword ptr [g_012de29c] }
	__asm { push edi }
	__asm { movsx edi, word ptr [edx + 0x8e] }
	__asm { movsx edx, word ptr [edx + 0x96] }
	__asm { cvtsi2ss xmm0, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub ecx, edi }
	__asm { add ecx, dword ptr [g_012de2a0] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { sub edx, ebx }
	__asm { add edx, dword ptr [g_012de2a4] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { cvtsi2ss xmm0, edx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380b8[];
extern "C" char g_010380e4[];
extern "C" char g_01038248[];
extern "C" char g_010385e0[];
extern "C" char g_010385f0[];
extern "C" void fn_004199f0();
extern "C" void fn_00496100();
extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_007cd560();
extern "C" void fn_009f6420();
extern "C" void fn_009f6b70();
extern "C" void fn_00a109c0();
extern "C" void fn_00a110d0();
extern "C" void fn_00a11230();
// FUNCTION: ROBLOXSTUDIO 0x00a8d580
extern "C" __declspec(naked) void asm_00a8d580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x5c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { je L_00a8d7df }
	__asm { add eax, 0x1c }
	__asm { je L_00a8d7df }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a8d7df }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { je L_00a8d7df }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { mov eax, dword ptr [eax + 0x100] }
	__asm { push dword ptr [edi + 0x7c] }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm1, dword ptr [eax + 0xc] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [g_010385f0] }
	__asm { movss dword ptr [ebp - 0x20], xmm3 }
	__asm { mov edx, dword ptr [ebp - 0x20] }
	__asm { xorps xmm3, xmm0 }
	__asm { movss dword ptr [ebp - 0x1c], xmm2 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [ebp - 0x14], xmm3 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { xorps xmm2, xmm0 }
	__asm { movss dword ptr [ebp - 0x18], xmm1 }
	__asm { movss dword ptr [ebp - 0x10], xmm2 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { xorps xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x48], eax }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x50], edx }
	__asm { mov dword ptr [ebp - 0x4c], ecx }
	__asm { mov dword ptr [ebp - 0x2c], edx }
	__asm { mov dword ptr [ebp - 0x28], ecx }
	__asm { call fn_00a110d0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_009f6420 }
	__asm { mov eax, dword ptr [edi + 0x84] }
	__asm { xorps xmm2, xmm2 }
	__asm { movss xmm1, dword ptr [g_010385f0] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { sub eax, 0 }
	__asm { je L_00a8d691 }
	__asm { dec eax }
	__asm { jne L_00a8d69e }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { jmp L_00a8d69e }
	__asm { L_00a8d691: }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { xorps xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { L_00a8d69e: }
	__asm { mov eax, dword ptr [edi + 0x80] }
	__asm { dec eax }
	__asm { je L_00a8d6b9 }
	__asm { dec eax }
	__asm { jne L_00a8d6c0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { xorps xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { jmp L_00a8d6c0 }
	__asm { L_00a8d6b9: }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_00a8d6c0: }
	__asm { mov eax, dword ptr [edi + 0x88] }
	__asm { dec eax }
	__asm { je L_00a8d6d4 }
	__asm { dec eax }
	__asm { jne L_00a8d73c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { jmp L_00a8d73c }
	__asm { L_00a8d6d4: }
	__asm { movss xmm5, dword ptr [g_010385e0] }
	__asm { movss xmm3, dword ptr [g_010380e4] }
	__asm { movss xmm4, dword ptr [g_01038248] }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { L_00a8d6f1: }
	__asm { movss xmm1, dword ptr [ebp + eax*4 - 0x14] }
	__asm { comiss xmm1, xmm2 }
	__asm { movaps xmm0, xmm1 }
	__asm { andps xmm0, xmm5 }
	__asm { subss xmm0, xmm3 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { jbe L_00a8d710 }
	__asm { movaps xmm1, xmm3 }
	__asm { jmp L_00a8d71d }
	__asm { L_00a8d710: }
	__asm { comiss xmm2, xmm1 }
	__asm { jbe L_00a8d71a }
	__asm { movaps xmm1, xmm4 }
	__asm { jmp L_00a8d71d }
	__asm { L_00a8d71a: }
	__asm { movaps xmm1, xmm2 }
	__asm { L_00a8d71d: }
	__asm { comiss xmm0, xmm2 }
	__asm { lea ecx, [ebp - 4] }
	__asm { ja L_00a8d728 }
	__asm { lea ecx, [ebp - 8] }
	__asm { L_00a8d728: }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { mulss xmm0, xmm1 }
	__asm { inc eax }
	__asm { movss dword ptr [ebp + eax*4 - 0x18], xmm0 }
	__asm { cmp eax, 2 }
	__asm { jl L_00a8d6f1 }
	__asm { L_00a8d73c: }
	__asm { push dword ptr [edi + 0x7c] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_00a11230 }
	__asm { add esp, 0xc }
	__asm { push dword ptr [edi + 0x7c] }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_009f6b70 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { addss xmm0, dword ptr [ebp - 0x38] }
	__asm { mov ecx, edi }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { addss xmm0, dword ptr [ebp - 0x34] }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm0, dword ptr [ebp - 0x30] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 0x74] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { call eax }
	__asm { cmp eax, 1 }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { je L_00a8d7af }
	__asm { add eax, 3 }
	__asm { cdq }
	__asm { mov ecx, 6 }
	__asm { idiv ecx }
	__asm { push edx }
	__asm { call fn_00496100 }
	__asm { add esp, 4 }
	__asm { L_00a8d7af: }
	__asm { push eax }
	__asm { call fn_00a109c0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a8d7df: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_006da0e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_007cd560();
extern "C" void fn_00810310();
extern "C" void fn_00914100();
extern "C" void fn_00914240();
extern "C" void fn_00968f00();
extern "C" void fn_009978e0();
extern "C" void fn_00999150();
extern "C" void fn_00a8e1a0();
// FUNCTION: ROBLOXSTUDIO 0x00a8db30
extern "C" __declspec(naked) void asm_00a8db30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x64 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00914240 }
	__asm { mov ebx, dword ptr [edi + 0x38] }
	__asm { test ebx, ebx }
	__asm { je L_00a8db6f }
	__asm { add ebx, 0x1c }
	__asm { je L_00a8db6f }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_00810310 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00a8db6f }
	__asm { add ebx, -0x1c }
	__asm { jmp L_00a8db71 }
	__asm { L_00a8db6f: }
	__asm { xor ebx, ebx }
	__asm { L_00a8db71: }
	__asm { push ebx }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_00a8e1a0 }
	__asm { mov esi, dword ptr [edi + 0x8c] }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00a8db8b }
	__asm { xor esi, esi }
	__asm { jmp L_00a8dba4 }
	__asm { L_00a8db8b: }
	__asm { mov ecx, esi }
	__asm { call fn_00914100 }
	__asm { test al, al }
	__asm { jne L_00a8db9b }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { jmp L_00a8dba1 }
	__asm { L_00a8db9b: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { L_00a8dba1: }
	__asm { mov esi, dword ptr [esi + 0xc] }
	__asm { L_00a8dba4: }
	__asm { push edi }
	__asm { call fn_00968f00 }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { cmp esi, ebx }
	__asm { je L_00a8dd15 }
	__asm { test esi, esi }
	__asm { je L_00a8dca2 }
	__asm { push dword ptr [edi + 0x8c] }
	__asm { mov ecx, esi }
	__asm { call fn_00999150 }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { call fn_006da0e0 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov ecx, dword ptr [edi + 0x8c] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { cmp dword ptr [ecx + 0xc], 0 }
	__asm { je L_00a8dc06 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00a8dc06: }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { call fn_006da0e0 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov ecx, dword ptr [edi + 0x8c] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { cmp dword ptr [ecx + 0x10], 0 }
	__asm { je L_00a8dc40 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0 }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00a8dc40: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a8dca2 }
	__asm { mov esi, dword ptr [edi + 0x8c] }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00a8dca2 }
	__asm { mov ecx, esi }
	__asm { call fn_00914100 }
	__asm { test al, al }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { je L_00a8dc66 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { L_00a8dc66: }
	__asm { cmp dword ptr [eax + 0xc], 0 }
	__asm { je L_00a8dca2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a8dc8d }
	__asm { push 0x13f }
	__asm { push 0xeb2310 }
	__asm { push 0xeb2350 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8dca2 }
	__asm { L_00a8dc8d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeb2370 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8dca2: }
	__asm { test ebx, ebx }
	__asm { je L_00a8dd15 }
	__asm { push dword ptr [edi + 0x8c] }
	__asm { mov ecx, ebx }
	__asm { call fn_009978e0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a8dd15 }
	__asm { mov esi, dword ptr [edi + 0x8c] }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00a8dcdf }
	__asm { mov ecx, esi }
	__asm { call fn_00914100 }
	__asm { test al, al }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { je L_00a8dcd9 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { L_00a8dcd9: }
	__asm { cmp dword ptr [eax + 0xc], 0 }
	__asm { jne L_00a8dd15 }
	__asm { L_00a8dcdf: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a8dd00 }
	__asm { push 0x143 }
	__asm { push 0xeb2310 }
	__asm { push 0xeb23dc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8dd15 }
	__asm { L_00a8dd00: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeb23f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8dd15: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00a8dd6d }
	__asm { cmp dword ptr [esi + 0x90], 0 }
	__asm { jne L_00a8dd6d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a8dd5c }
	__asm { push 0x14b }
	__asm { push 0xeb2310 }
	__asm { push 0xeb2464 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8dd6d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a8dd5c: }
	__asm { movzx eax, al }
	__asm { push 0xeb2470 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8dd6d: }
	__asm { push dword ptr [esi + 0x90] }
	__asm { mov ecx, esi }
	__asm { push 1 }
	__asm { call fn_00a8e1a0 }
	__asm { pop esi }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00eb28b0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_00a8e940();
// FUNCTION: ROBLOXSTUDIO 0x00a8f1a0
extern "C" __declspec(naked) void asm_00a8f1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 0x6c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00a8f213 }
	__asm { push esi }
	__asm { call fn_00a8e940 }
	__asm { mov esi, eax }
	__asm { call fn_007cb440 }
	__asm { xor ecx, ecx }
	__asm { cmp eax, esi }
	__asm { sete cl }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [g_00eb28b0], eax }
	__asm { pop esi }
	__asm { sete al }
	__asm { cmp ecx, eax }
	__asm { je L_00a8f213 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00a8f1fe }
	__asm { push 0x165 }
	__asm { push 0xe32e0c }
	__asm { push 0x1004008 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a8f213 }
	__asm { L_00a8f1fe: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe361a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a8f213: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [g_00eb28b0], eax }
	__asm { sete al }
	__asm { ret }
}

extern "C" char g_00eb3498[];
extern "C" char g_00eb34a0[];
extern "C" char g_012fd36c[];
extern "C" void fn_004038a0();
extern "C" void fn_007b00e0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00a918c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a919b0
extern "C" __declspec(naked) void asm_00a919b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4c440 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00a918c0 }
	__asm { fld qword ptr [g_00eb34a0] }
	__asm { fstp qword ptr [esi + 0x70] }
	__asm { push 3 }
	__asm { fld qword ptr [g_00eb3498] }
	__asm { push 0xe6f998 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { fstp qword ptr [esi + 0x78] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeb3334 }
	__asm { mov dword ptr [esi + 4], 0xeb33ac }
	__asm { mov dword ptr [esi + 0x18], 0xeb33b4 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb33c0 }
	__asm { mov dword ptr [esi + 0x68], 0xc8 }
	__asm { mov dword ptr [esi + 0x6c], 0xc8 }
	__asm { mov dword ptr [esi + 0x80], 2 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov byte ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esi + 0x8c], 0x3dcccccd }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00a91a7e }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a91a7e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xeb31f4 }
	__asm { mov dword ptr [ecx + 4], 0xeb326c }
	__asm { mov dword ptr [ecx + 0x18], 0xeb3274 }
	__asm { mov dword ptr [ecx + 0x1c], 0xeb3280 }
	__asm { jmp fn_007b00e0 }
	__asm { mov dword ptr [g_012fd36c], 0 }
	__asm { mov dword ptr [ecx], 0xeb31f4 }
	__asm { mov dword ptr [ecx + 4], 0xeb326c }
	__asm { mov dword ptr [ecx + 0x18], 0xeb3274 }
	__asm { mov dword ptr [ecx + 0x1c], 0xeb3280 }
	__asm { jmp fn_007b00e0 }
}

extern "C" char g_012de64e[];
extern "C" void fn_004115f0();
extern "C" void fn_0043f5a0();
extern "C" void fn_006b8a90();
extern "C" void fn_00a92310();
extern "C" void fn_00a950b0();
// FUNCTION: ROBLOXSTUDIO 0x00a94d30
extern "C" __declspec(naked) void asm_00a94d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4ca0a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x10036f4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00a92310 }
	__asm { mov dword ptr [edi + 0x134], 0xe6ac4c }
	__asm { mov dword ptr [edi + 0x138], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x13c], 0 }
	__asm { mov dword ptr [edi], 0xeb47fc }
	__asm { mov dword ptr [edi + 4], 0xeb487c }
	__asm { mov dword ptr [edi + 0x18], 0xeb4884 }
	__asm { mov dword ptr [edi + 0x1c], 0xeb4890 }
	__asm { mov dword ptr [edi + 0x64], 0xeb48a4 }
	__asm { mov dword ptr [edi + 0x80], 0xeb48f4 }
	__asm { mov dword ptr [edi + 0xf8], 0xeb4910 }
	__asm { mov dword ptr [edi + 0x134], 0xeb4934 }
	__asm { mov byte ptr [edi + 0x140], 0 }
	__asm { mov dword ptr [edi + 0x144], 0 }
	__asm { mov dword ptr [edi + 0x148], 0 }
	__asm { mov dword ptr [edi + 0x14c], 0 }
	__asm { mov dword ptr [edi + 0x150], 0 }
	__asm { mov dword ptr [edi + 0x154], 0 }
	__asm { mov dword ptr [edi + 0x158], 0x40800000 }
	__asm { mov byte ptr [edi + 0x15c], 0 }
	__asm { mov dword ptr [edi + 0x160], 0x457a0000 }
	__asm { mov dword ptr [edi + 0x164], 0x40a00000 }
	__asm { mov dword ptr [edi + 0x168], 0x3a83126f }
	__asm { mov dword ptr [edi + 0x16c], 0x41f00000 }
	__asm { mov dword ptr [edi + 0x170], 0x453b8000 }
	__asm { mov dword ptr [edi + 0x174], 0x43fa0000 }
	__asm { lea esi, [edi + 0x188] }
	__asm { mov dword ptr [edi + 0x178], 0x48c35000 }
	__asm { mov dword ptr [edi + 0x17c], 0x48c35000 }
	__asm { mov dword ptr [edi + 0x180], 0 }
	__asm { mov dword ptr [edi + 0x184], 0x3f333333 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004115f0 }
	__asm { call fn_0043f5a0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_004115f0 }
	__asm { add esp, 0x10 }
	__asm { call fn_0043f5a0 }
	__asm { mov al, byte ptr [g_012de64e] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test al, al }
	__asm { je L_00a94edc }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xeb520c }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00a94edc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xeb37ac }
	__asm { mov dword ptr [ecx + 4], 0xeb382c }
	__asm { mov dword ptr [ecx + 0x18], 0xeb3834 }
	__asm { mov dword ptr [ecx + 0x1c], 0xeb3840 }
	__asm { mov dword ptr [ecx + 0x64], 0xeb3854 }
	__asm { mov dword ptr [ecx + 0x80], 0xeb38a4 }
	__asm { mov dword ptr [ecx + 0xf8], 0xeb38c0 }
	__asm { jmp fn_00a950b0 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xeb3c8c }
	__asm { mov dword ptr [ecx + 4], 0xeb3d0c }
	__asm { mov dword ptr [ecx + 0x18], 0xeb3d14 }
	__asm { mov dword ptr [ecx + 0x1c], 0xeb3d20 }
	__asm { mov dword ptr [ecx + 0x64], 0xeb3d34 }
	__asm { mov dword ptr [ecx + 0x80], 0xeb3d84 }
	__asm { mov dword ptr [ecx + 0xf8], 0xeb3da0 }
	__asm { jmp fn_00a950b0 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xeb43ec }
	__asm { mov dword ptr [ecx + 4], 0xeb446c }
	__asm { mov dword ptr [ecx + 0x18], 0xeb4474 }
	__asm { mov dword ptr [ecx + 0x1c], 0xeb4480 }
	__asm { mov dword ptr [ecx + 0x64], 0xeb4494 }
	__asm { mov dword ptr [ecx + 0x80], 0xeb44e4 }
	__asm { mov dword ptr [ecx + 0xf8], 0xeb4500 }
	__asm { jmp fn_00a950b0 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xeb3a1c }
	__asm { mov dword ptr [ecx + 4], 0xeb3a9c }
	__asm { mov dword ptr [ecx + 0x18], 0xeb3aa4 }
	__asm { mov dword ptr [ecx + 0x1c], 0xeb3ab0 }
	__asm { mov dword ptr [ecx + 0x64], 0xeb3ac4 }
	__asm { mov dword ptr [ecx + 0x80], 0xeb3b14 }
	__asm { mov dword ptr [ecx + 0xf8], 0xeb3b30 }
	__asm { jmp fn_00a950b0 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xeb3efc }
	__asm { mov dword ptr [ecx + 4], 0xeb3f7c }
	__asm { mov dword ptr [ecx + 0x18], 0xeb3f84 }
	__asm { mov dword ptr [ecx + 0x1c], 0xeb3f90 }
	__asm { mov dword ptr [ecx + 0x64], 0xeb3fa4 }
	__asm { mov dword ptr [ecx + 0x80], 0xeb3ff4 }
	__asm { mov dword ptr [ecx + 0xf8], 0xeb4010 }
	__asm { jmp fn_00a950b0 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xeb417c }
	__asm { mov dword ptr [ecx + 4], 0xeb41fc }
	__asm { mov dword ptr [ecx + 0x18], 0xeb4204 }
	__asm { mov dword ptr [ecx + 0x1c], 0xeb4210 }
	__asm { mov dword ptr [ecx + 0x64], 0xeb4224 }
	__asm { mov dword ptr [ecx + 0x80], 0xeb4274 }
	__asm { mov dword ptr [ecx + 0xf8], 0xeb4290 }
	__asm { jmp fn_00a950b0 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xeb465c }
	__asm { mov dword ptr [ecx + 4], 0xeb46dc }
	__asm { mov dword ptr [ecx + 0x18], 0xeb46e4 }
	__asm { mov dword ptr [ecx + 0x1c], 0xeb46f0 }
	__asm { mov dword ptr [ecx + 0x64], 0xeb4704 }
	__asm { mov dword ptr [ecx + 0x80], 0xeb4754 }
	__asm { mov dword ptr [ecx + 0xf8], 0xeb4770 }
	__asm { jmp fn_00a950b0 }
}

extern "C" char g_012de64e[];
extern "C" void fn_004226b0();
extern "C" void fn_006b8a90();
extern "C" void fn_006b9e50();
extern "C" void fn_0086a9a0();
extern "C" void fn_00a950b0();
// FUNCTION: ROBLOXSTUDIO 0x00a95320
extern "C" __declspec(naked) void asm_00a95320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cada }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xeb47fc }
	__asm { mov dword ptr [edi + 4], 0xeb487c }
	__asm { mov dword ptr [edi + 0x18], 0xeb4884 }
	__asm { mov dword ptr [edi + 0x1c], 0xeb4890 }
	__asm { mov dword ptr [edi + 0x64], 0xeb48a4 }
	__asm { mov dword ptr [edi + 0x80], 0xeb48f4 }
	__asm { mov dword ptr [edi + 0xf8], 0xeb4910 }
	__asm { mov dword ptr [edi + 0x134], 0xeb4934 }
	__asm { mov al, byte ptr [g_012de64e] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test al, al }
	__asm { je L_00a953a3 }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xeb5220 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00a953a3: }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x188] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0086a9a0 }
	__asm { mov esi, dword ptr [edi + 0x148] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00a953e9 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00a953e8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a953e8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a953e8: }
	__asm { pop ebx }
	__asm { L_00a953e9: }
	__asm { lea esi, [edi + 0x13c] }
	__asm { mov dword ptr [edi + 0x134], 0xe6ac4c }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00a9541e }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00a9541e: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], 0xeb465c }
	__asm { mov dword ptr [edi + 4], 0xeb46dc }
	__asm { mov dword ptr [edi + 0x18], 0xeb46e4 }
	__asm { mov dword ptr [edi + 0x1c], 0xeb46f0 }
	__asm { mov dword ptr [edi + 0x64], 0xeb4704 }
	__asm { mov dword ptr [edi + 0x80], 0xeb4754 }
	__asm { mov dword ptr [edi + 0xf8], 0xeb4770 }
	__asm { call fn_00a950b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b678d0();
// FUNCTION: ROBLOXSTUDIO 0x00a959c0
extern "C" __declspec(naked) void asm_00a959c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00a95a0c }
	__asm { cmp dword ptr [esi + 0x28], esi }
	__asm { je L_00a95a0c }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a959fb }
	__asm { push 0x14e }
	__asm { push 0xe66eb8 }
	__asm { push 0xeb493c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a95a0c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a959fb: }
	__asm { movzx eax, al }
	__asm { push 0xeb4950 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a95a0c: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov esi, dword ptr [eax + 0x30] }
	__asm { test esi, esi }
	__asm { je L_00a95a64 }
	__asm { cmp byte ptr [esi + 8], 0 }
	__asm { je L_00a95a23 }
	__asm { mov ecx, esi }
	__asm { call fn_00b678d0 }
	__asm { L_00a95a23: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { addss xmm0, dword ptr [esi + 0xb4] }
	__asm { movss dword ptr [esi + 0xb4], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { addss xmm0, dword ptr [esi + 0xb8] }
	__asm { movss dword ptr [esi + 0xb8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm0, dword ptr [esi + 0xbc] }
	__asm { movss dword ptr [esi + 0xbc], xmm0 }
	__asm { L_00a95a64: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a5d310();
// FUNCTION: ROBLOXSTUDIO 0x00a984f0
extern "C" __declspec(naked) void asm_00a984f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ecx + 0xc8] }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00a5d310 }
	__asm { cmp dword ptr [eax], 0 }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { setne bl }
	__asm { or edi, 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00a98541 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a98541 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a98541 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a98541: }
	__asm { test bl, bl }
	__asm { je L_00a98592 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00a5d310 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { mov ebx, dword ptr [eax + 0x104] }
	__asm { test esi, esi }
	__asm { je L_00a98589 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a98589 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00a98589 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00a98589: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a98592: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a985d0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a985bf }
	__asm { push 0x77 }
	__asm { push 0xeb4b20 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a985d0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a985bf: }
	__asm { movzx eax, al }
	__asm { push 0xeb4f90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a985d0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eb5688[];
extern "C" void fn_0043f040();
extern "C" void fn_00892440();
extern "C" void fn_00a5d310();
// FUNCTION: ROBLOXSTUDIO 0x00a98ac0
extern "C" __declspec(naked) void asm_00a98ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3c088 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi - 0xc], ecx }
	__asm { je L_00a98b09 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi - 8] }
	__asm { call fn_00a5d310 }
	__asm { cmp dword ptr [eax], 0 }
	__asm { mov ecx, 1 }
	__asm { je L_00a98b09 }
	__asm { cmp byte ptr [esi + 0x38], 0 }
	__asm { mov byte ptr [ebp - 0xd], cl }
	__asm { je L_00a98b0d }
	__asm { L_00a98b09: }
	__asm { mov byte ptr [ebp - 0xd], 0 }
	__asm { L_00a98b0d: }
	__asm { or ebx, 0xffffffff }
	__asm { test cl, 1 }
	__asm { je L_00a98b40 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { test edi, edi }
	__asm { je L_00a98b40 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a98b40 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00a98b40 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a98b40: }
	__asm { cmp byte ptr [ebp - 0xd], 0 }
	__asm { je L_00a98bf2 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [esi - 8] }
	__asm { call fn_00a5d310 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00892440 }
	__asm { mov ecx, dword ptr [eax + 0x24] }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00a98ba7 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00a98ba7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00a98ba7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00a98ba7: }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { movss xmm2, dword ptr [ebp - 0x18] }
	__asm { subss xmm2, dword ptr [esi + 0x24] }
	__asm { subss xmm1, dword ptr [esi + 0x20] }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { subss xmm0, dword ptr [esi + 0x28] }
	__asm { mulss xmm2, xmm2 }
	__asm { mulss xmm1, xmm1 }
	__asm { mulss xmm0, xmm0 }
	__asm { addss xmm2, xmm1 }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [g_00eb5688] }
	__asm { comiss xmm0, xmm2 }
	__asm { jb L_00a98bf2 }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { call fn_0043f040 }
	__asm { mov byte ptr [esi + 0x38], 1 }
	__asm { L_00a98bf2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00aa17e0();
// FUNCTION: ROBLOXSTUDIO 0x00a9fd80
extern "C" __declspec(naked) void asm_00a9fd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00a9fe1f }
	__asm { push 0xaa1920 }
	__asm { push 0x130b10c }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aa17e0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a9fde5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00a9fde5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00a9fe1f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a9fe1f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a9fe1f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a9fe1f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a9fe1f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00aa1870();
// FUNCTION: ROBLOXSTUDIO 0x00a9fe30
extern "C" __declspec(naked) void asm_00a9fe30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00a9fecf }
	__asm { push 0xaa1930 }
	__asm { push 0x130b114 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aa1870 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00a9fe95 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00a9fe95: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00a9fecf }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a9fecf }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a9fecf }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00a9fecf }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a9fecf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130b0fc[];
extern "C" char g_0130b100[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a9ff40
extern "C" __declspec(naked) void asm_00a9ff40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4d4ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00aa02bc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00a9ff72: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xaa1900 }
	__asm { push 0x130b0ec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130b100] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00a9ffd9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130b100], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00a9ffcd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130b0fc], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00a9ffde }
	__asm { L_00a9ffcd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130b0fc], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00a9ffde }
	__asm { L_00a9ffd9: }
	__asm { mov eax, dword ptr [g_0130b0fc] }
	__asm { L_00a9ffde: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00aa0065 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aa000b }
	__asm { add eax, -5 }
	__asm { jmp L_00aa000d }
	__asm { L_00aa000b: }
	__asm { xor eax, eax }
	__asm { L_00aa000d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aa0062 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00aa0062 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa0051 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa0062 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa0051: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa0062: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00aa0065: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00aa0155 }
	__asm { L_00aa0070: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00aa0155 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00aa00f5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aa0098 }
	__asm { add eax, -5 }
	__asm { jmp L_00aa009a }
	__asm { L_00aa0098: }
	__asm { xor eax, eax }
	__asm { L_00aa009a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aa00ef }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00aa00ef }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa00de }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa00ef }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa00de: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa00ef: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aa00f5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00aa014a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00aa010c }
	__asm { add ebx, -5 }
	__asm { jmp L_00aa010e }
	__asm { L_00aa010c: }
	__asm { xor ebx, ebx }
	__asm { L_00aa010e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa0144 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa0144 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00aa014a }
	__asm { L_00aa0144: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aa014a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00aa0070 }
	__asm { L_00aa0155: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00aa01b9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aa01b9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aa01b9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aa01b9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00aa01af }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00aa01ad }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00aa01af }
	__asm { L_00aa01ad: }
	__asm { mov esi, edx }
	__asm { L_00aa01af: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00aa01b9: }
	__asm { test esi, esi }
	__asm { je L_00aa0220 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aa01c9 }
	__asm { add eax, -5 }
	__asm { jmp L_00aa01cb }
	__asm { L_00aa01c9: }
	__asm { xor eax, eax }
	__asm { L_00aa01cb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aa0220 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00aa0220 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa020f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa0220 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa020f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa0220: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00aa026f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00aa0237 }
	__asm { add edi, -5 }
	__asm { jmp L_00aa0239 }
	__asm { L_00aa0237: }
	__asm { xor edi, edi }
	__asm { L_00aa0239: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa0269 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa0269 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00aa026f }
	__asm { L_00aa0269: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aa026f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00aa02ae }
	__asm { add esi, 5 }
	__asm { je L_00aa0284 }
	__asm { add esi, -5 }
	__asm { jmp L_00aa0286 }
	__asm { L_00aa0284: }
	__asm { xor esi, esi }
	__asm { L_00aa0286: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa02ae }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa02ae }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00aa02ae: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00a9ff72 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00aa02bc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_00897cc0();
extern "C" void fn_0099e410();
extern "C" void fn_0099ea70();
extern "C" void fn_00aa2730();
extern "C" void fn_00aa2a80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00aa2950
extern "C" __declspec(naked) void asm_00aa2950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4d690 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { je L_00aa2989 }
	__asm { mov dword ptr [edi + 0x68], 0xeb6824 }
	__asm { mov dword ptr [edi + 0xb4], 0xeb682c }
	__asm { L_00aa2989: }
	__asm { push 0 }
	__asm { call fn_00aa2730 }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov dword ptr [edi], 0xeb6a0c }
	__asm { mov dword ptr [edi + 4], 0xeb6b1c }
	__asm { mov dword ptr [edi + 0x18], 0xeb6b24 }
	__asm { mov dword ptr [edi + 0x1c], 0xeb6b30 }
	__asm { mov dword ptr [edi + 0x64], 0xeb6b40 }
	__asm { mov dword ptr [edi + 0x70], 0xeb6b48 }
	__asm { mov dword ptr [edi + 0x98], 0xeb6b68 }
	__asm { mov dword ptr [edi + 0xb0], 0xeb6b9c }
	__asm { mov dword ptr [edi + 0xc4], 0xeb6bc8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 5 }
	__asm { mov dword ptr [eax + edi + 0x68], 0xeb6bd0 }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { push 0xe6b678 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ecx - 0xb4] }
	__asm { mov dword ptr [ecx + edi + 0x64], eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00897cc0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_00aa2a41 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00aa2a41: }
	__asm { mov esi, dword ptr [edi + 0xe0] }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_0099e410 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0099ea70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { jmp fn_00aa2a80 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00aa9cc0();
// FUNCTION: ROBLOXSTUDIO 0x00aa7670
extern "C" __declspec(naked) void asm_00aa7670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00aa770f }
	__asm { push 0xaa9d60 }
	__asm { push 0x130b438 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aa9cc0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00aa76d5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00aa76d5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00aa770f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aa770f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aa770f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aa770f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aa770f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130b430[];
extern "C" char g_0130b434[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aa7780
extern "C" __declspec(naked) void asm_00aa7780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4dade }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00aa7afc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00aa77b2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xaa9d50 }
	__asm { push 0x130b428 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130b434] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00aa7819 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130b434], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00aa780d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130b430], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00aa781e }
	__asm { L_00aa780d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130b430], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00aa781e }
	__asm { L_00aa7819: }
	__asm { mov eax, dword ptr [g_0130b430] }
	__asm { L_00aa781e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00aa78a5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aa784b }
	__asm { add eax, -5 }
	__asm { jmp L_00aa784d }
	__asm { L_00aa784b: }
	__asm { xor eax, eax }
	__asm { L_00aa784d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aa78a2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00aa78a2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa7891 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa78a2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa7891: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa78a2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00aa78a5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00aa7995 }
	__asm { L_00aa78b0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00aa7995 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00aa7935 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aa78d8 }
	__asm { add eax, -5 }
	__asm { jmp L_00aa78da }
	__asm { L_00aa78d8: }
	__asm { xor eax, eax }
	__asm { L_00aa78da: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aa792f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00aa792f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa791e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa792f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa791e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa792f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aa7935: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00aa798a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00aa794c }
	__asm { add ebx, -5 }
	__asm { jmp L_00aa794e }
	__asm { L_00aa794c: }
	__asm { xor ebx, ebx }
	__asm { L_00aa794e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa7984 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa7984 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00aa798a }
	__asm { L_00aa7984: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aa798a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00aa78b0 }
	__asm { L_00aa7995: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00aa79f9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aa79f9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aa79f9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aa79f9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00aa79ef }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00aa79ed }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00aa79ef }
	__asm { L_00aa79ed: }
	__asm { mov esi, edx }
	__asm { L_00aa79ef: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00aa79f9: }
	__asm { test esi, esi }
	__asm { je L_00aa7a60 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00aa7a09 }
	__asm { add eax, -5 }
	__asm { jmp L_00aa7a0b }
	__asm { L_00aa7a09: }
	__asm { xor eax, eax }
	__asm { L_00aa7a0b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aa7a60 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00aa7a60 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa7a4f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa7a60 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa7a4f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa7a60: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00aa7aaf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00aa7a77 }
	__asm { add edi, -5 }
	__asm { jmp L_00aa7a79 }
	__asm { L_00aa7a77: }
	__asm { xor edi, edi }
	__asm { L_00aa7a79: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa7aa9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa7aa9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00aa7aaf }
	__asm { L_00aa7aa9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00aa7aaf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00aa7aee }
	__asm { add esi, 5 }
	__asm { je L_00aa7ac4 }
	__asm { add esi, -5 }
	__asm { jmp L_00aa7ac6 }
	__asm { L_00aa7ac4: }
	__asm { xor esi, esi }
	__asm { L_00aa7ac6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa7aee }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa7aee }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00aa7aee: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00aa77b2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00aa7afc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_00aa9c30();
// FUNCTION: ROBLOXSTUDIO 0x00aa8820
extern "C" __declspec(naked) void asm_00aa8820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00aa8888 }
	__asm { test ebx, ebx }
	__asm { jne L_00aa8888 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa8877 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa8888 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa8877: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa8888: }
	__asm { push 0xaa9d50 }
	__asm { push 0x130b428 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aa9c30 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00aa88c8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00aa897d }
	__asm { L_00aa88c8: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00aa8937 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00aa8937 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00aa8926 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa8937 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00aa8926: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa8937: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00aa894f }
	__asm { add esi, -5 }
	__asm { jmp L_00aa8951 }
	__asm { L_00aa894f: }
	__asm { xor esi, esi }
	__asm { L_00aa8951: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa897d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa897d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00aa897d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00aa89ba }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aa89ba }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aa89ba }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aa89ba }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aa89ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00aa9c30();
// FUNCTION: ROBLOXSTUDIO 0x00aa8d90
extern "C" __declspec(naked) void asm_00aa8d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00aa8dc8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00aa8dc8: }
	__asm { push 0xaa9d50 }
	__asm { push 0x130b428 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aa9c30 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00aa8e04 }
	__asm { push ebx }
	__asm { jmp L_00aa8e08 }
	__asm { L_00aa8e04: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00aa8e08: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00aa8e4a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aa8e4a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aa8e4a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aa8e4a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aa8e4a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00aa8e8d }
	__asm { add esi, 5 }
	__asm { je L_00aa8e5f }
	__asm { add esi, -5 }
	__asm { jmp L_00aa8e61 }
	__asm { L_00aa8e5f: }
	__asm { xor esi, esi }
	__asm { L_00aa8e61: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa8e8d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aa8e8d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00aa8e8d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4940[];
extern "C" void fn_006b9740();
extern "C" void fn_008206c0();
// FUNCTION: ROBLOXSTUDIO 0x00aad620
extern "C" __declspec(naked) void asm_00aad620()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aad66d }
	__asm { cmp dword ptr [g_012e4940], 0x29a }
	__asm { je L_00aad66d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aad65c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aad66d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aad65c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aad66d: }
	__asm { mov ecx, 0x12e4944 }
	__asm { jmp fn_008206c0 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov eax, dword ptr [ecx + 0x94] }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" char g_00eb8c28[];
extern "C" void fn_004038a0();
extern "C" void fn_0041fe80();
extern "C" void fn_005290b0();
extern "C" void fn_007acf70();
extern "C" void fn_007b00e0();
extern "C" void fn_007b5bb0();
extern "C" void fn_00aada90();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00aadc60
extern "C" __declspec(naked) void asm_00aadc60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4dfee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00aada90 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xeb92c4 }
	__asm { mov dword ptr [esi + 4], 0xeb933c }
	__asm { mov dword ptr [esi + 0x18], 0xeb9344 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb9350 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { push 0xc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00aadce8 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_005290b0 }
	__asm { jmp L_00aadcea }
	__asm { L_00aadce8: }
	__asm { xor eax, eax }
	__asm { L_00aadcea: }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007acf70 }
	__asm { cmp dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { je L_00aadd3c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { L_00aadd3c: }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [g_00eb8c28], cl }
	__asm { mov eax, 5 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xeb8c28 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { jb L_00aadd8c }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00aadd8c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xeb9224 }
	__asm { mov dword ptr [ecx + 4], 0xeb929c }
	__asm { mov dword ptr [ecx + 0x18], 0xeb92a4 }
	__asm { mov dword ptr [ecx + 0x1c], 0xeb92b0 }
	__asm { jmp fn_007b00e0 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_00ac69b0();
// FUNCTION: ROBLOXSTUDIO 0x00ac1e30
extern "C" __declspec(naked) void asm_00ac1e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00ac1e98 }
	__asm { test ebx, ebx }
	__asm { jne L_00ac1e98 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ac1e87 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac1e98 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ac1e87: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac1e98: }
	__asm { push 0xac6f10 }
	__asm { push 0x130bc00 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ac69b0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00ac1ed8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00ac1f8d }
	__asm { L_00ac1ed8: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00ac1f47 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00ac1f47 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ac1f36 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac1f47 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00ac1f36: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac1f47: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ac1f5f }
	__asm { add esi, -5 }
	__asm { jmp L_00ac1f61 }
	__asm { L_00ac1f5f: }
	__asm { xor esi, esi }
	__asm { L_00ac1f61: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ac1f8d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ac1f8d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00ac1f8d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00ac1fca }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ac1fca }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ac1fca }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00ac1fca }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00ac1fca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_00ac6a40();
// FUNCTION: ROBLOXSTUDIO 0x00ac1fe0
extern "C" __declspec(naked) void asm_00ac1fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00ac2048 }
	__asm { test ebx, ebx }
	__asm { jne L_00ac2048 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ac2037 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac2048 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ac2037: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac2048: }
	__asm { push 0xac6f20 }
	__asm { push 0x130bc30 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ac6a40 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00ac2088 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00ac213d }
	__asm { L_00ac2088: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00ac20f7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00ac20f7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ac20e6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac20f7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00ac20e6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac20f7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ac210f }
	__asm { add esi, -5 }
	__asm { jmp L_00ac2111 }
	__asm { L_00ac210f: }
	__asm { xor esi, esi }
	__asm { L_00ac2111: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ac213d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ac213d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00ac213d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00ac217a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ac217a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ac217a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00ac217a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00ac217a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00ac66e0();
// FUNCTION: ROBLOXSTUDIO 0x00ac4070
extern "C" __declspec(naked) void asm_00ac4070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00ac40a8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00ac40a8: }
	__asm { push 0xac6ec0 }
	__asm { push 0x130bc18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ac66e0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00ac40e4 }
	__asm { push ebx }
	__asm { jmp L_00ac40e8 }
	__asm { L_00ac40e4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00ac40e8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00ac412a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ac412a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ac412a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00ac412a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00ac412a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ac416d }
	__asm { add esi, 5 }
	__asm { je L_00ac413f }
	__asm { add esi, -5 }
	__asm { jmp L_00ac4141 }
	__asm { L_00ac413f: }
	__asm { xor esi, esi }
	__asm { L_00ac4141: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ac416d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ac416d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00ac416d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00ac6770();
// FUNCTION: ROBLOXSTUDIO 0x00ac4190
extern "C" __declspec(naked) void asm_00ac4190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00ac41c8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00ac41c8: }
	__asm { push 0xac6ed0 }
	__asm { push 0x130bc28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ac6770 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00ac4204 }
	__asm { push ebx }
	__asm { jmp L_00ac4208 }
	__asm { L_00ac4204: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00ac4208: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00ac424a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ac424a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ac424a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00ac424a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00ac424a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ac428d }
	__asm { add esi, 5 }
	__asm { je L_00ac425f }
	__asm { add esi, -5 }
	__asm { jmp L_00ac4261 }
	__asm { L_00ac425f: }
	__asm { xor esi, esi }
	__asm { L_00ac4261: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ac428d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ac428d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00ac428d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00d08530();
// FUNCTION: ROBLOXSTUDIO 0x00acaa70
extern "C" __declspec(naked) void asm_00acaa70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4fe3e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp dword ptr [esi + 0xb0], 0x10 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { jb L_00acaaae }
	__asm { push dword ptr [esi + 0x9c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00acaaae: }
	__asm { mov dword ptr [esi + 0xb0], 0xf }
	__asm { mov dword ptr [esi + 0xac], 0 }
	__asm { mov byte ptr [esi + 0x9c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x98] }
	__asm { or edi, 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00acaae6 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00acaae6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00acaae6: }
	__asm { mov ecx, dword ptr [esi + 0x90] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00acab03 }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00acab03 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00acab03: }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xebbcf4 }
	__asm { mov dword ptr [esi + 4], 0xebbd7c }
	__asm { mov dword ptr [esi + 0x18], 0xebbd84 }
	__asm { mov dword ptr [esi + 0x1c], 0xebbd90 }
	__asm { mov dword ptr [esi + 0x64], 0xebbda0 }
	__asm { mov dword ptr [ecx], 0xebbda8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00d08530 }
	__asm { mov ecx, esi }
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

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4988[];
extern "C" void fn_006b9740();
extern "C" void fn_00820840();
// FUNCTION: ROBLOXSTUDIO 0x00acac40
extern "C" __declspec(naked) void asm_00acac40()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00acac8d }
	__asm { cmp dword ptr [g_012e4988], 0x29a }
	__asm { je L_00acac8d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00acac7c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00acac8d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00acac7c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00acac8d: }
	__asm { mov ecx, 0x12e498c }
	__asm { jmp fn_00820840 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { fld dword ptr [ecx + 0xc8] }
	__asm { ret }
}

extern "C" void fn_00a5d310();
// FUNCTION: ROBLOXSTUDIO 0x00acacb0
extern "C" __declspec(naked) void asm_00acacb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { add ecx, 0x8c }
	__asm { call fn_00a5d310 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov edi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { je L_00acad00 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00acacf7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [esi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_00acacf7 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00acacf7: }
	__asm { pop ebx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00acad00: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380e4[];
extern "C" void fn_00865d20();
extern "C" void fn_008e9950();
extern "C" void fn_00acad10();
extern "C" void fn_00acaf90();
// FUNCTION: ROBLOXSTUDIO 0x00acae70
extern "C" __declspec(naked) void asm_00acae70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_00acad10 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00acaf89 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x2c] }
	__asm { push eax }
	__asm { call fn_00acad10 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00acaf89 }
	__asm { cmp dword ptr [esi + 0x44], 0 }
	__asm { je L_00acaf89 }
	__asm { lea eax, [esi - 0x68] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00865d20 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00acaf88 }
	__asm { mov edx, dword ptr [edi + 0x128] }
	__asm { lea ecx, [edi + 0x128] }
	__asm { push ebx }
	__asm { call dword ptr [edx + 8] }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_00acaf87 }
	__asm { movss xmm0, dword ptr [esi + 0x1c] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x18] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_008e9950 }
	__asm { fld dword ptr [esi + 0x60] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x34], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { sub esp, 0xc }
	__asm { lea eax, [esi + 0x50] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { movss dword ptr [ebp - 0x30], xmm0 }
	__asm { fld dword ptr [esi + 0x5c] }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { subss xmm0, dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [esi + 0x58] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { movss dword ptr [ebp - 0x2c], xmm0 }
	__asm { call fn_00acaf90 }
	__asm { add esp, 0x2c }
	__asm { L_00acaf87: }
	__asm { pop ebx }
	__asm { L_00acaf88: }
	__asm { pop edi }
	__asm { L_00acaf89: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_00ad5a90();
// FUNCTION: ROBLOXSTUDIO 0x00ad3390
extern "C" __declspec(naked) void asm_00ad3390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00ad33f8 }
	__asm { test ebx, ebx }
	__asm { jne L_00ad33f8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ad33e7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ad33f8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ad33e7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ad33f8: }
	__asm { push 0xad5cd0 }
	__asm { push 0x130c198 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ad5a90 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00ad3438 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00ad34ed }
	__asm { L_00ad3438: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00ad34a7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00ad34a7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ad3496 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ad34a7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00ad3496: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ad34a7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ad34bf }
	__asm { add esi, -5 }
	__asm { jmp L_00ad34c1 }
	__asm { L_00ad34bf: }
	__asm { xor esi, esi }
	__asm { L_00ad34c1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ad34ed }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ad34ed }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00ad34ed: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00ad352a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ad352a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ad352a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00ad352a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00ad352a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_00ad5b20();
// FUNCTION: ROBLOXSTUDIO 0x00ad3540
extern "C" __declspec(naked) void asm_00ad3540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00ad35a8 }
	__asm { test ebx, ebx }
	__asm { jne L_00ad35a8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ad3597 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ad35a8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ad3597: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ad35a8: }
	__asm { push 0xad5ce0 }
	__asm { push 0x130c190 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ad5b20 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00ad35e8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00ad369d }
	__asm { L_00ad35e8: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00ad3657 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00ad3657 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ad3646 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ad3657 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00ad3646: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ad3657: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ad366f }
	__asm { add esi, -5 }
	__asm { jmp L_00ad3671 }
	__asm { L_00ad366f: }
	__asm { xor esi, esi }
	__asm { L_00ad3671: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ad369d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ad369d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00ad369d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00ad36da }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ad36da }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ad36da }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00ad36da }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00ad36da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00ad5a90();
// FUNCTION: ROBLOXSTUDIO 0x00ad3e20
extern "C" __declspec(naked) void asm_00ad3e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00ad3e58 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00ad3e58: }
	__asm { push 0xad5cd0 }
	__asm { push 0x130c198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ad5a90 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00ad3e94 }
	__asm { push ebx }
	__asm { jmp L_00ad3e98 }
	__asm { L_00ad3e94: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00ad3e98: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00ad3eda }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ad3eda }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ad3eda }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00ad3eda }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00ad3eda: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ad3f1d }
	__asm { add esi, 5 }
	__asm { je L_00ad3eef }
	__asm { add esi, -5 }
	__asm { jmp L_00ad3ef1 }
	__asm { L_00ad3eef: }
	__asm { xor esi, esi }
	__asm { L_00ad3ef1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ad3f1d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ad3f1d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00ad3f1d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00ad5b20();
// FUNCTION: ROBLOXSTUDIO 0x00ad3f40
extern "C" __declspec(naked) void asm_00ad3f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00ad3f78 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00ad3f78: }
	__asm { push 0xad5ce0 }
	__asm { push 0x130c190 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ad5b20 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00ad3fb4 }
	__asm { push ebx }
	__asm { jmp L_00ad3fb8 }
	__asm { L_00ad3fb4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00ad3fb8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00ad3ffa }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ad3ffa }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ad3ffa }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00ad3ffa }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00ad3ffa: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ad403d }
	__asm { add esi, 5 }
	__asm { je L_00ad400f }
	__asm { add esi, -5 }
	__asm { jmp L_00ad4011 }
	__asm { L_00ad400f: }
	__asm { xor esi, esi }
	__asm { L_00ad4011: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ad403d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ad403d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00ad403d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00ae2e40();
// FUNCTION: ROBLOXSTUDIO 0x00ae0240
extern "C" __declspec(naked) void asm_00ae0240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00ae02df }
	__asm { push 0xae2ee0 }
	__asm { push 0x130c4e0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ae2e40 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00ae02a5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00ae02a5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00ae02df }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ae02df }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ae02df }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00ae02df }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00ae02df: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130c4d8[];
extern "C" char g_0130c4dc[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ae0320
extern "C" __declspec(naked) void asm_00ae0320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5169e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00ae069c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00ae0352: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xae2ed0 }
	__asm { push 0x130c4d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130c4dc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00ae03b9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130c4dc], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00ae03ad }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130c4d8], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00ae03be }
	__asm { L_00ae03ad: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130c4d8], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00ae03be }
	__asm { L_00ae03b9: }
	__asm { mov eax, dword ptr [g_0130c4d8] }
	__asm { L_00ae03be: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00ae0445 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00ae03eb }
	__asm { add eax, -5 }
	__asm { jmp L_00ae03ed }
	__asm { L_00ae03eb: }
	__asm { xor eax, eax }
	__asm { L_00ae03ed: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ae0442 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00ae0442 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ae0431 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae0442 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ae0431: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae0442: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00ae0445: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00ae0535 }
	__asm { L_00ae0450: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00ae0535 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00ae04d5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00ae0478 }
	__asm { add eax, -5 }
	__asm { jmp L_00ae047a }
	__asm { L_00ae0478: }
	__asm { xor eax, eax }
	__asm { L_00ae047a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ae04cf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00ae04cf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ae04be }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae04cf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ae04be: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae04cf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00ae04d5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00ae052a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00ae04ec }
	__asm { add ebx, -5 }
	__asm { jmp L_00ae04ee }
	__asm { L_00ae04ec: }
	__asm { xor ebx, ebx }
	__asm { L_00ae04ee: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae0524 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae0524 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00ae052a }
	__asm { L_00ae0524: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00ae052a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00ae0450 }
	__asm { L_00ae0535: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00ae0599 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ae0599 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ae0599 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00ae0599 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00ae058f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00ae058d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00ae058f }
	__asm { L_00ae058d: }
	__asm { mov esi, edx }
	__asm { L_00ae058f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00ae0599: }
	__asm { test esi, esi }
	__asm { je L_00ae0600 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00ae05a9 }
	__asm { add eax, -5 }
	__asm { jmp L_00ae05ab }
	__asm { L_00ae05a9: }
	__asm { xor eax, eax }
	__asm { L_00ae05ab: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ae0600 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00ae0600 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ae05ef }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae0600 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ae05ef: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae0600: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00ae064f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00ae0617 }
	__asm { add edi, -5 }
	__asm { jmp L_00ae0619 }
	__asm { L_00ae0617: }
	__asm { xor edi, edi }
	__asm { L_00ae0619: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae0649 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae0649 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00ae064f }
	__asm { L_00ae0649: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00ae064f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ae068e }
	__asm { add esi, 5 }
	__asm { je L_00ae0664 }
	__asm { add esi, -5 }
	__asm { jmp L_00ae0666 }
	__asm { L_00ae0664: }
	__asm { xor esi, esi }
	__asm { L_00ae0666: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae068e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae068e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00ae068e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00ae0352 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00ae069c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_00ae2db0();
// FUNCTION: ROBLOXSTUDIO 0x00ae16a0
extern "C" __declspec(naked) void asm_00ae16a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00ae1708 }
	__asm { test ebx, ebx }
	__asm { jne L_00ae1708 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ae16f7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae1708 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ae16f7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae1708: }
	__asm { push 0xae2ed0 }
	__asm { push 0x130c4d0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ae2db0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00ae1748 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00ae17fd }
	__asm { L_00ae1748: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00ae17b7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00ae17b7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ae17a6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae17b7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00ae17a6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae17b7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ae17cf }
	__asm { add esi, -5 }
	__asm { jmp L_00ae17d1 }
	__asm { L_00ae17cf: }
	__asm { xor esi, esi }
	__asm { L_00ae17d1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae17fd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae17fd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00ae17fd: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00ae183a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ae183a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ae183a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00ae183a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00ae183a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00ae2db0();
// FUNCTION: ROBLOXSTUDIO 0x00ae22b0
extern "C" __declspec(naked) void asm_00ae22b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00ae22e8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00ae22e8: }
	__asm { push 0xae2ed0 }
	__asm { push 0x130c4d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ae2db0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00ae2324 }
	__asm { push ebx }
	__asm { jmp L_00ae2328 }
	__asm { L_00ae2324: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00ae2328: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00ae236a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00ae236a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00ae236a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00ae236a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00ae236a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ae23ad }
	__asm { add esi, 5 }
	__asm { je L_00ae237f }
	__asm { add esi, -5 }
	__asm { jmp L_00ae2381 }
	__asm { L_00ae237f: }
	__asm { xor esi, esi }
	__asm { L_00ae2381: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae23ad }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00ae23ad }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00ae23ad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00aec0d0();
// FUNCTION: ROBLOXSTUDIO 0x00aea040
extern "C" __declspec(naked) void asm_00aea040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00aea0df }
	__asm { push 0xaec2b0 }
	__asm { push 0x130c7a8 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aec0d0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00aea0a5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00aea0a5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00aea0df }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aea0df }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aea0df }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aea0df }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aea0df: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00aec160();
// FUNCTION: ROBLOXSTUDIO 0x00aea0f0
extern "C" __declspec(naked) void asm_00aea0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00aea18f }
	__asm { push 0xaec2c0 }
	__asm { push 0x130c7b8 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aec160 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00aea155 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00aea155: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00aea18f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aea18f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aea18f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aea18f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aea18f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00aec040();
// FUNCTION: ROBLOXSTUDIO 0x00aebc50
extern "C" __declspec(naked) void asm_00aebc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00aebc88 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00aebc88: }
	__asm { push 0xaec2a0 }
	__asm { push 0x130c780 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00aec040 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00aebcc4 }
	__asm { push ebx }
	__asm { jmp L_00aebcc8 }
	__asm { L_00aebcc4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00aebcc8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00aebd0a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00aebd0a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00aebd0a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00aebd0a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00aebd0a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00aebd4d }
	__asm { add esi, 5 }
	__asm { je L_00aebd1f }
	__asm { add esi, -5 }
	__asm { jmp L_00aebd21 }
	__asm { L_00aebd1f: }
	__asm { xor esi, esi }
	__asm { L_00aebd21: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aebd4d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00aebd4d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00aebd4d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00afee60();
// FUNCTION: ROBLOXSTUDIO 0x00afc2d0
extern "C" __declspec(naked) void asm_00afc2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00afc36f }
	__asm { push 0xafef00 }
	__asm { push 0x130d0ec }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00afee60 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00afc335 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00afc335: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00afc36f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00afc36f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00afc36f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00afc36f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00afc36f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130d0e4[];
extern "C" char g_0130d0e8[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00afc3b0
extern "C" __declspec(naked) void asm_00afc3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5315e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00afc72c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00afc3e2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xafeef0 }
	__asm { push 0x130d0dc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130d0e8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00afc449 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130d0e8], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00afc43d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130d0e4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00afc44e }
	__asm { L_00afc43d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130d0e4], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00afc44e }
	__asm { L_00afc449: }
	__asm { mov eax, dword ptr [g_0130d0e4] }
	__asm { L_00afc44e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00afc4d5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00afc47b }
	__asm { add eax, -5 }
	__asm { jmp L_00afc47d }
	__asm { L_00afc47b: }
	__asm { xor eax, eax }
	__asm { L_00afc47d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00afc4d2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00afc4d2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00afc4c1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00afc4d2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00afc4c1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00afc4d2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00afc4d5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00afc5c5 }
	__asm { L_00afc4e0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00afc5c5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00afc565 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00afc508 }
	__asm { add eax, -5 }
	__asm { jmp L_00afc50a }
	__asm { L_00afc508: }
	__asm { xor eax, eax }
	__asm { L_00afc50a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00afc55f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00afc55f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00afc54e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00afc55f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00afc54e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00afc55f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00afc565: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00afc5ba }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00afc57c }
	__asm { add ebx, -5 }
	__asm { jmp L_00afc57e }
	__asm { L_00afc57c: }
	__asm { xor ebx, ebx }
	__asm { L_00afc57e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00afc5b4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00afc5b4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00afc5ba }
	__asm { L_00afc5b4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00afc5ba: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00afc4e0 }
	__asm { L_00afc5c5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00afc629 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00afc629 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00afc629 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00afc629 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00afc61f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00afc61d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00afc61f }
	__asm { L_00afc61d: }
	__asm { mov esi, edx }
	__asm { L_00afc61f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00afc629: }
	__asm { test esi, esi }
	__asm { je L_00afc690 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00afc639 }
	__asm { add eax, -5 }
	__asm { jmp L_00afc63b }
	__asm { L_00afc639: }
	__asm { xor eax, eax }
	__asm { L_00afc63b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00afc690 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00afc690 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00afc67f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00afc690 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00afc67f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00afc690: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00afc6df }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00afc6a7 }
	__asm { add edi, -5 }
	__asm { jmp L_00afc6a9 }
	__asm { L_00afc6a7: }
	__asm { xor edi, edi }
	__asm { L_00afc6a9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00afc6d9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00afc6d9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00afc6df }
	__asm { L_00afc6d9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00afc6df: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00afc71e }
	__asm { add esi, 5 }
	__asm { je L_00afc6f4 }
	__asm { add esi, -5 }
	__asm { jmp L_00afc6f6 }
	__asm { L_00afc6f4: }
	__asm { xor esi, esi }
	__asm { L_00afc6f6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00afc71e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00afc71e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00afc71e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00afc3e2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00afc72c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00b183b0();
// FUNCTION: ROBLOXSTUDIO 0x00b17ba0
extern "C" __declspec(naked) void asm_00b17ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00b17c3f }
	__asm { push 0xb18440 }
	__asm { push 0x130ddb4 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b183b0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b17c05 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00b17c05: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00b17c3f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b17c3f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b17c3f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b17c3f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b17c3f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_009995f0();
// FUNCTION: ROBLOXSTUDIO 0x00b17cd0
extern "C" __declspec(naked) void asm_00b17cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00b17d38 }
	__asm { test ebx, ebx }
	__asm { jne L_00b17d38 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b17d27 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b17d38 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b17d27: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b17d38: }
	__asm { push 0x9997a0 }
	__asm { push 0x1303188 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_009995f0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00b17d78 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00b17e2d }
	__asm { L_00b17d78: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00b17de7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00b17de7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b17dd6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b17de7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00b17dd6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b17de7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b17dff }
	__asm { add esi, -5 }
	__asm { jmp L_00b17e01 }
	__asm { L_00b17dff: }
	__asm { xor esi, esi }
	__asm { L_00b17e01: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b17e2d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b17e2d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b17e2d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00b17e6a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b17e6a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b17e6a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b17e6a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b17e6a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00b1a360();
// FUNCTION: ROBLOXSTUDIO 0x00b19530
extern "C" __declspec(naked) void asm_00b19530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00b195cf }
	__asm { push 0xb1a480 }
	__asm { push 0x130de34 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b1a360 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b19595 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00b19595: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00b195cf }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b195cf }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b195cf }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b195cf }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b195cf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00b1a3f0();
// FUNCTION: ROBLOXSTUDIO 0x00b195e0
extern "C" __declspec(naked) void asm_00b195e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00b1967f }
	__asm { push 0xb1a490 }
	__asm { push 0x130de3c }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b1a3f0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b19645 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00b19645: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00b1967f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b1967f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b1967f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b1967f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b1967f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_0096be30();
// FUNCTION: ROBLOXSTUDIO 0x00b198c0
extern "C" __declspec(naked) void asm_00b198c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00b19928 }
	__asm { test ebx, ebx }
	__asm { jne L_00b19928 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b19917 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b19928 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b19917: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b19928: }
	__asm { push 0x96bec0 }
	__asm { push 0x13011fc }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0096be30 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00b19968 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00b19a1d }
	__asm { L_00b19968: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00b199d7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00b199d7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b199c6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b199d7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00b199c6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b199d7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b199ef }
	__asm { add esi, -5 }
	__asm { jmp L_00b199f1 }
	__asm { L_00b199ef: }
	__asm { xor esi, esi }
	__asm { L_00b199f1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b19a1d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b19a1d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b19a1d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00b19a5a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b19a5a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b19a5a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b19a5a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b19a5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_00999680();
// FUNCTION: ROBLOXSTUDIO 0x00b19a70
extern "C" __declspec(naked) void asm_00b19a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00b19ad8 }
	__asm { test ebx, ebx }
	__asm { jne L_00b19ad8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b19ac7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b19ad8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b19ac7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b19ad8: }
	__asm { push 0x9997b0 }
	__asm { push 0x1303198 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00999680 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00b19b18 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00b19bcd }
	__asm { L_00b19b18: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00b19b87 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00b19b87 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b19b76 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b19b87 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00b19b76: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b19b87: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b19b9f }
	__asm { add esi, -5 }
	__asm { jmp L_00b19ba1 }
	__asm { L_00b19b9f: }
	__asm { xor esi, esi }
	__asm { L_00b19ba1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b19bcd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b19bcd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b19bcd: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00b19c0a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b19c0a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b19c0a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b19c0a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b19c0a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00b23720();
// FUNCTION: ROBLOXSTUDIO 0x00b21160
extern "C" __declspec(naked) void asm_00b21160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00b211ff }
	__asm { push 0xb23900 }
	__asm { push 0x130e3bc }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b23720 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b211c5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00b211c5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00b211ff }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b211ff }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b211ff }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b211ff }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b211ff: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00b237b0();
// FUNCTION: ROBLOXSTUDIO 0x00b21210
extern "C" __declspec(naked) void asm_00b21210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00b212af }
	__asm { push 0xb23910 }
	__asm { push 0x130e3c4 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b237b0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b21275 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00b21275: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00b212af }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b212af }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b212af }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b212af }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b212af: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00b23840();
// FUNCTION: ROBLOXSTUDIO 0x00b212c0
extern "C" __declspec(naked) void asm_00b212c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00b2135f }
	__asm { push 0xb23920 }
	__asm { push 0x130e3b4 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b23840 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b21325 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00b21325: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00b2135f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b2135f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b2135f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b2135f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b2135f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130e3a4[];
extern "C" char g_0130e3a8[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b21400
extern "C" __declspec(naked) void asm_00b21400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd55fee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b2177c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00b21432: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xb238d0 }
	__asm { push 0x130e38c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130e3a8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b21499 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e3a8], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b2148d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e3a4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00b2149e }
	__asm { L_00b2148d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e3a4], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00b2149e }
	__asm { L_00b21499: }
	__asm { mov eax, dword ptr [g_0130e3a4] }
	__asm { L_00b2149e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00b21525 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b214cb }
	__asm { add eax, -5 }
	__asm { jmp L_00b214cd }
	__asm { L_00b214cb: }
	__asm { xor eax, eax }
	__asm { L_00b214cd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b21522 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b21522 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b21511 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b21522 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b21511: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b21522: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00b21525: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00b21615 }
	__asm { L_00b21530: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00b21615 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00b215b5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b21558 }
	__asm { add eax, -5 }
	__asm { jmp L_00b2155a }
	__asm { L_00b21558: }
	__asm { xor eax, eax }
	__asm { L_00b2155a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b215af }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00b215af }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b2159e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b215af }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b2159e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b215af: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b215b5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00b2160a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00b215cc }
	__asm { add ebx, -5 }
	__asm { jmp L_00b215ce }
	__asm { L_00b215cc: }
	__asm { xor ebx, ebx }
	__asm { L_00b215ce: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21604 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21604 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b2160a }
	__asm { L_00b21604: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b2160a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00b21530 }
	__asm { L_00b21615: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00b21679 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b21679 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b21679 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b21679 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00b2166f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00b2166d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00b2166f }
	__asm { L_00b2166d: }
	__asm { mov esi, edx }
	__asm { L_00b2166f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00b21679: }
	__asm { test esi, esi }
	__asm { je L_00b216e0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b21689 }
	__asm { add eax, -5 }
	__asm { jmp L_00b2168b }
	__asm { L_00b21689: }
	__asm { xor eax, eax }
	__asm { L_00b2168b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b216e0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b216e0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b216cf }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b216e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b216cf: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b216e0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00b2172f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00b216f7 }
	__asm { add edi, -5 }
	__asm { jmp L_00b216f9 }
	__asm { L_00b216f7: }
	__asm { xor edi, edi }
	__asm { L_00b216f9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21729 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b21729 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b2172f }
	__asm { L_00b21729: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b2172f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b2176e }
	__asm { add esi, 5 }
	__asm { je L_00b21744 }
	__asm { add esi, -5 }
	__asm { jmp L_00b21746 }
	__asm { L_00b21744: }
	__asm { xor esi, esi }
	__asm { L_00b21746: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b2176e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b2176e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00b2176e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00b21432 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00b2177c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00b34a60();
// FUNCTION: ROBLOXSTUDIO 0x00b30f70
extern "C" __declspec(naked) void asm_00b30f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00b3100f }
	__asm { push 0xb34c40 }
	__asm { push 0x130e9c0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b34a60 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b30fd5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00b30fd5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00b3100f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b3100f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b3100f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b3100f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b3100f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00b34af0();
// FUNCTION: ROBLOXSTUDIO 0x00b31020
extern "C" __declspec(naked) void asm_00b31020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00b310bf }
	__asm { push 0xb34c50 }
	__asm { push 0x130e9d0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b34af0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b31085 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00b31085: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00b310bf }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b310bf }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b310bf }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b310bf }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b310bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00b34b80();
// FUNCTION: ROBLOXSTUDIO 0x00b310d0
extern "C" __declspec(naked) void asm_00b310d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00b3116f }
	__asm { push 0xb34c60 }
	__asm { push 0x130e9c8 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b34b80 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b31135 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00b31135: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00b3116f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b3116f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b3116f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b3116f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b3116f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130e9a8[];
extern "C" char g_0130e9ac[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b31240
extern "C" __declspec(naked) void asm_00b31240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5722e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b315bc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00b31272: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xb34c10 }
	__asm { push 0x130e990 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130e9ac] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b312d9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e9ac], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b312cd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e9a8], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00b312de }
	__asm { L_00b312cd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e9a8], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00b312de }
	__asm { L_00b312d9: }
	__asm { mov eax, dword ptr [g_0130e9a8] }
	__asm { L_00b312de: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00b31365 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b3130b }
	__asm { add eax, -5 }
	__asm { jmp L_00b3130d }
	__asm { L_00b3130b: }
	__asm { xor eax, eax }
	__asm { L_00b3130d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b31362 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b31362 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b31351 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b31362 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b31351: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b31362: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00b31365: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00b31455 }
	__asm { L_00b31370: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00b31455 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00b313f5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b31398 }
	__asm { add eax, -5 }
	__asm { jmp L_00b3139a }
	__asm { L_00b31398: }
	__asm { xor eax, eax }
	__asm { L_00b3139a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b313ef }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00b313ef }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b313de }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b313ef }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b313de: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b313ef: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b313f5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00b3144a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00b3140c }
	__asm { add ebx, -5 }
	__asm { jmp L_00b3140e }
	__asm { L_00b3140c: }
	__asm { xor ebx, ebx }
	__asm { L_00b3140e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b31444 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b31444 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b3144a }
	__asm { L_00b31444: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b3144a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00b31370 }
	__asm { L_00b31455: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00b314b9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b314b9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b314b9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b314b9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00b314af }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00b314ad }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00b314af }
	__asm { L_00b314ad: }
	__asm { mov esi, edx }
	__asm { L_00b314af: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00b314b9: }
	__asm { test esi, esi }
	__asm { je L_00b31520 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b314c9 }
	__asm { add eax, -5 }
	__asm { jmp L_00b314cb }
	__asm { L_00b314c9: }
	__asm { xor eax, eax }
	__asm { L_00b314cb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b31520 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b31520 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b3150f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b31520 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b3150f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b31520: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00b3156f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00b31537 }
	__asm { add edi, -5 }
	__asm { jmp L_00b31539 }
	__asm { L_00b31537: }
	__asm { xor edi, edi }
	__asm { L_00b31539: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b31569 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b31569 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b3156f }
	__asm { L_00b31569: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b3156f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b315ae }
	__asm { add esi, 5 }
	__asm { je L_00b31584 }
	__asm { add esi, -5 }
	__asm { jmp L_00b31586 }
	__asm { L_00b31584: }
	__asm { xor esi, esi }
	__asm { L_00b31586: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b315ae }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b315ae }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00b315ae: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00b31272 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00b315bc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130e9b8[];
extern "C" char g_0130e9bc[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b315d0
extern "C" __declspec(naked) void asm_00b315d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5725e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b3194c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00b31602: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xb34c20 }
	__asm { push 0x130e9a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130e9bc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b31669 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e9bc], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b3165d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e9b8], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00b3166e }
	__asm { L_00b3165d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e9b8], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00b3166e }
	__asm { L_00b31669: }
	__asm { mov eax, dword ptr [g_0130e9b8] }
	__asm { L_00b3166e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00b316f5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b3169b }
	__asm { add eax, -5 }
	__asm { jmp L_00b3169d }
	__asm { L_00b3169b: }
	__asm { xor eax, eax }
	__asm { L_00b3169d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b316f2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b316f2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b316e1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b316f2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b316e1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b316f2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00b316f5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00b317e5 }
	__asm { L_00b31700: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00b317e5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00b31785 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b31728 }
	__asm { add eax, -5 }
	__asm { jmp L_00b3172a }
	__asm { L_00b31728: }
	__asm { xor eax, eax }
	__asm { L_00b3172a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b3177f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00b3177f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b3176e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b3177f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b3176e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b3177f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b31785: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00b317da }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00b3179c }
	__asm { add ebx, -5 }
	__asm { jmp L_00b3179e }
	__asm { L_00b3179c: }
	__asm { xor ebx, ebx }
	__asm { L_00b3179e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b317d4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b317d4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b317da }
	__asm { L_00b317d4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b317da: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00b31700 }
	__asm { L_00b317e5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00b31849 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b31849 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b31849 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b31849 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00b3183f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00b3183d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00b3183f }
	__asm { L_00b3183d: }
	__asm { mov esi, edx }
	__asm { L_00b3183f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00b31849: }
	__asm { test esi, esi }
	__asm { je L_00b318b0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b31859 }
	__asm { add eax, -5 }
	__asm { jmp L_00b3185b }
	__asm { L_00b31859: }
	__asm { xor eax, eax }
	__asm { L_00b3185b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b318b0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b318b0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b3189f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b318b0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b3189f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b318b0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00b318ff }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00b318c7 }
	__asm { add edi, -5 }
	__asm { jmp L_00b318c9 }
	__asm { L_00b318c7: }
	__asm { xor edi, edi }
	__asm { L_00b318c9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b318f9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b318f9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b318ff }
	__asm { L_00b318f9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b318ff: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b3193e }
	__asm { add esi, 5 }
	__asm { je L_00b31914 }
	__asm { add esi, -5 }
	__asm { jmp L_00b31916 }
	__asm { L_00b31914: }
	__asm { xor esi, esi }
	__asm { L_00b31916: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b3193e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b3193e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00b3193e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00b31602 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00b3194c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130e9b0[];
extern "C" char g_0130e9b4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b31960
extern "C" __declspec(naked) void asm_00b31960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5728e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b31cdc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00b31992: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xb34c30 }
	__asm { push 0x130e998 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130e9b4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b319f9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130e9b4], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b319ed }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130e9b0], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00b319fe }
	__asm { L_00b319ed: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130e9b0], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00b319fe }
	__asm { L_00b319f9: }
	__asm { mov eax, dword ptr [g_0130e9b0] }
	__asm { L_00b319fe: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00b31a85 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b31a2b }
	__asm { add eax, -5 }
	__asm { jmp L_00b31a2d }
	__asm { L_00b31a2b: }
	__asm { xor eax, eax }
	__asm { L_00b31a2d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b31a82 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b31a82 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b31a71 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b31a82 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b31a71: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b31a82: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00b31a85: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00b31b75 }
	__asm { L_00b31a90: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00b31b75 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00b31b15 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b31ab8 }
	__asm { add eax, -5 }
	__asm { jmp L_00b31aba }
	__asm { L_00b31ab8: }
	__asm { xor eax, eax }
	__asm { L_00b31aba: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b31b0f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00b31b0f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b31afe }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b31b0f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b31afe: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b31b0f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b31b15: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00b31b6a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00b31b2c }
	__asm { add ebx, -5 }
	__asm { jmp L_00b31b2e }
	__asm { L_00b31b2c: }
	__asm { xor ebx, ebx }
	__asm { L_00b31b2e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b31b64 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b31b64 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b31b6a }
	__asm { L_00b31b64: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b31b6a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00b31a90 }
	__asm { L_00b31b75: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00b31bd9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b31bd9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b31bd9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b31bd9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00b31bcf }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00b31bcd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00b31bcf }
	__asm { L_00b31bcd: }
	__asm { mov esi, edx }
	__asm { L_00b31bcf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00b31bd9: }
	__asm { test esi, esi }
	__asm { je L_00b31c40 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b31be9 }
	__asm { add eax, -5 }
	__asm { jmp L_00b31beb }
	__asm { L_00b31be9: }
	__asm { xor eax, eax }
	__asm { L_00b31beb: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b31c40 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b31c40 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b31c2f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b31c40 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b31c2f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b31c40: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00b31c8f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00b31c57 }
	__asm { add edi, -5 }
	__asm { jmp L_00b31c59 }
	__asm { L_00b31c57: }
	__asm { xor edi, edi }
	__asm { L_00b31c59: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b31c89 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b31c89 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b31c8f }
	__asm { L_00b31c89: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b31c8f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b31cce }
	__asm { add esi, 5 }
	__asm { je L_00b31ca4 }
	__asm { add esi, -5 }
	__asm { jmp L_00b31ca6 }
	__asm { L_00b31ca4: }
	__asm { xor esi, esi }
	__asm { L_00b31ca6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b31cce }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b31cce }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00b31cce: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00b31992 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00b31cdc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_00b348b0();
// FUNCTION: ROBLOXSTUDIO 0x00b33200
extern "C" __declspec(naked) void asm_00b33200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00b33268 }
	__asm { test ebx, ebx }
	__asm { jne L_00b33268 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b33257 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b33268 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b33257: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b33268: }
	__asm { push 0xb34c10 }
	__asm { push 0x130e990 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b348b0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00b332a8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00b3335d }
	__asm { L_00b332a8: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00b33317 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00b33317 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b33306 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b33317 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00b33306: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b33317: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b3332f }
	__asm { add esi, -5 }
	__asm { jmp L_00b33331 }
	__asm { L_00b3332f: }
	__asm { xor esi, esi }
	__asm { L_00b33331: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b3335d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b3335d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b3335d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00b3339a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b3339a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b3339a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b3339a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b3339a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_00b34940();
// FUNCTION: ROBLOXSTUDIO 0x00b333b0
extern "C" __declspec(naked) void asm_00b333b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00b33418 }
	__asm { test ebx, ebx }
	__asm { jne L_00b33418 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b33407 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b33418 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b33407: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b33418: }
	__asm { push 0xb34c20 }
	__asm { push 0x130e9a0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b34940 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00b33458 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00b3350d }
	__asm { L_00b33458: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00b334c7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00b334c7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b334b6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b334c7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00b334b6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b334c7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b334df }
	__asm { add esi, -5 }
	__asm { jmp L_00b334e1 }
	__asm { L_00b334df: }
	__asm { xor esi, esi }
	__asm { L_00b334e1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b3350d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b3350d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b3350d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00b3354a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b3354a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b3354a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b3354a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b3354a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_00b349d0();
// FUNCTION: ROBLOXSTUDIO 0x00b33560
extern "C" __declspec(naked) void asm_00b33560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00b335c8 }
	__asm { test ebx, ebx }
	__asm { jne L_00b335c8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b335b7 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b335c8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b335b7: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b335c8: }
	__asm { push 0xb34c30 }
	__asm { push 0x130e998 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b349d0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00b33608 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00b336bd }
	__asm { L_00b33608: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00b33677 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00b33677 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b33666 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b33677 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00b33666: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b33677: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b3368f }
	__asm { add esi, -5 }
	__asm { jmp L_00b33691 }
	__asm { L_00b3368f: }
	__asm { xor esi, esi }
	__asm { L_00b33691: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b336bd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b336bd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b336bd: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00b336fa }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b336fa }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b336fa }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b336fa }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b336fa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130ebb8[];
extern "C" char g_0130ebbc[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b36e50
extern "C" __declspec(naked) void asm_00b36e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5791e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b371cc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00b36e82: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xb37e60 }
	__asm { push 0x130eba8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130ebbc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b36ee9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ebbc], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b36edd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130ebb8], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00b36eee }
	__asm { L_00b36edd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130ebb8], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00b36eee }
	__asm { L_00b36ee9: }
	__asm { mov eax, dword ptr [g_0130ebb8] }
	__asm { L_00b36eee: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00b36f75 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b36f1b }
	__asm { add eax, -5 }
	__asm { jmp L_00b36f1d }
	__asm { L_00b36f1b: }
	__asm { xor eax, eax }
	__asm { L_00b36f1d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b36f72 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b36f72 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b36f61 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b36f72 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b36f61: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b36f72: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00b36f75: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00b37065 }
	__asm { L_00b36f80: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00b37065 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00b37005 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b36fa8 }
	__asm { add eax, -5 }
	__asm { jmp L_00b36faa }
	__asm { L_00b36fa8: }
	__asm { xor eax, eax }
	__asm { L_00b36faa: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b36fff }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00b36fff }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b36fee }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b36fff }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b36fee: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b36fff: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b37005: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00b3705a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00b3701c }
	__asm { add ebx, -5 }
	__asm { jmp L_00b3701e }
	__asm { L_00b3701c: }
	__asm { xor ebx, ebx }
	__asm { L_00b3701e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b37054 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b37054 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b3705a }
	__asm { L_00b37054: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b3705a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00b36f80 }
	__asm { L_00b37065: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00b370c9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b370c9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b370c9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b370c9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00b370bf }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00b370bd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00b370bf }
	__asm { L_00b370bd: }
	__asm { mov esi, edx }
	__asm { L_00b370bf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00b370c9: }
	__asm { test esi, esi }
	__asm { je L_00b37130 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b370d9 }
	__asm { add eax, -5 }
	__asm { jmp L_00b370db }
	__asm { L_00b370d9: }
	__asm { xor eax, eax }
	__asm { L_00b370db: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b37130 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b37130 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b3711f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b37130 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b3711f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b37130: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00b3717f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00b37147 }
	__asm { add edi, -5 }
	__asm { jmp L_00b37149 }
	__asm { L_00b37147: }
	__asm { xor edi, edi }
	__asm { L_00b37149: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b37179 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b37179 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b3717f }
	__asm { L_00b37179: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b3717f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b371be }
	__asm { add esi, 5 }
	__asm { je L_00b37194 }
	__asm { add esi, -5 }
	__asm { jmp L_00b37196 }
	__asm { L_00b37194: }
	__asm { xor esi, esi }
	__asm { L_00b37196: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b371be }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b371be }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00b371be: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00b36e82 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00b371cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130ebc0[];
extern "C" char g_0130ebc4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b371e0
extern "C" __declspec(naked) void asm_00b371e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5794e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b3755c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00b37212: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xb37e70 }
	__asm { push 0x130ebb0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130ebc4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00b37279 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ebc4], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b3726d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130ebc0], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00b3727e }
	__asm { L_00b3726d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130ebc0], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00b3727e }
	__asm { L_00b37279: }
	__asm { mov eax, dword ptr [g_0130ebc0] }
	__asm { L_00b3727e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00b37305 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b372ab }
	__asm { add eax, -5 }
	__asm { jmp L_00b372ad }
	__asm { L_00b372ab: }
	__asm { xor eax, eax }
	__asm { L_00b372ad: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b37302 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b37302 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b372f1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b37302 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b372f1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b37302: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00b37305: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00b373f5 }
	__asm { L_00b37310: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00b373f5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00b37395 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b37338 }
	__asm { add eax, -5 }
	__asm { jmp L_00b3733a }
	__asm { L_00b37338: }
	__asm { xor eax, eax }
	__asm { L_00b3733a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b3738f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00b3738f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b3737e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b3738f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b3737e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b3738f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b37395: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00b373ea }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00b373ac }
	__asm { add ebx, -5 }
	__asm { jmp L_00b373ae }
	__asm { L_00b373ac: }
	__asm { xor ebx, ebx }
	__asm { L_00b373ae: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b373e4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b373e4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b373ea }
	__asm { L_00b373e4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b373ea: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00b37310 }
	__asm { L_00b373f5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00b37459 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b37459 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b37459 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b37459 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00b3744f }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00b3744d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00b3744f }
	__asm { L_00b3744d: }
	__asm { mov esi, edx }
	__asm { L_00b3744f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00b37459: }
	__asm { test esi, esi }
	__asm { je L_00b374c0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00b37469 }
	__asm { add eax, -5 }
	__asm { jmp L_00b3746b }
	__asm { L_00b37469: }
	__asm { xor eax, eax }
	__asm { L_00b3746b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b374c0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00b374c0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b374af }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b374c0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b374af: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b374c0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00b3750f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00b374d7 }
	__asm { add edi, -5 }
	__asm { jmp L_00b374d9 }
	__asm { L_00b374d7: }
	__asm { xor edi, edi }
	__asm { L_00b374d9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b37509 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b37509 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00b3750f }
	__asm { L_00b37509: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00b3750f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b3754e }
	__asm { add esi, 5 }
	__asm { je L_00b37524 }
	__asm { add esi, -5 }
	__asm { jmp L_00b37526 }
	__asm { L_00b37524: }
	__asm { xor esi, esi }
	__asm { L_00b37526: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b3754e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b3754e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00b3754e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00b37212 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00b3755c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00b37d40();
// FUNCTION: ROBLOXSTUDIO 0x00b37b00
extern "C" __declspec(naked) void asm_00b37b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00b37b38 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00b37b38: }
	__asm { push 0xb37e60 }
	__asm { push 0x130eba8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b37d40 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00b37b74 }
	__asm { push ebx }
	__asm { jmp L_00b37b78 }
	__asm { L_00b37b74: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00b37b78: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00b37bba }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b37bba }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b37bba }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b37bba }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b37bba: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b37bfd }
	__asm { add esi, 5 }
	__asm { je L_00b37bcf }
	__asm { add esi, -5 }
	__asm { jmp L_00b37bd1 }
	__asm { L_00b37bcf: }
	__asm { xor esi, esi }
	__asm { L_00b37bd1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b37bfd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b37bfd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b37bfd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00b37dd0();
// FUNCTION: ROBLOXSTUDIO 0x00b37c20
extern "C" __declspec(naked) void asm_00b37c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00b37c58 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00b37c58: }
	__asm { push 0xb37e70 }
	__asm { push 0x130ebb0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b37dd0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00b37c94 }
	__asm { push ebx }
	__asm { jmp L_00b37c98 }
	__asm { L_00b37c94: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00b37c98: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00b37cda }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b37cda }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b37cda }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b37cda }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b37cda: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00b37d1d }
	__asm { add esi, 5 }
	__asm { je L_00b37cef }
	__asm { add esi, -5 }
	__asm { jmp L_00b37cf1 }
	__asm { L_00b37cef: }
	__asm { xor esi, esi }
	__asm { L_00b37cf1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b37d1d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b37d1d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b37d1d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_0130ec14[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_004f4640();
// FUNCTION: ROBLOXSTUDIO 0x00b49cb0
extern "C" __declspec(naked) void asm_00b49cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_004f4640 }
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
	__asm { jne L_00b49cf9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b49cf9 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00b49cf9 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b49cf9: }
	__asm { add dword ptr [g_0130ec14], 0x110 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x00b58d10
extern "C" __declspec(naked) void asm_00b58d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd499f4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { sub esi, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { cmp eax, ecx }
	__asm { jne L_00b58db6 }
	__asm { test ecx, ecx }
	__asm { je L_00b58e04 }
	__asm { mov ebx, dword ptr [ebx + 0xc] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, 9 }
	__asm { mov esi, edx }
	__asm { mov edi, ebx }
	__asm { rep movsd }
	__asm { fld dword ptr [edx + 0x24] }
	__asm { fstp dword ptr [ebx + 0x24] }
	__asm { fld dword ptr [edx + 0x28] }
	__asm { fstp dword ptr [ebx + 0x28] }
	__asm { fld dword ptr [edx + 0x2c] }
	__asm { fstp dword ptr [ebx + 0x2c] }
	__asm { mov eax, dword ptr [edx + 0x30] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x34] }
	__asm { mov dword ptr [ebx + 0x34], eax }
	__asm { add dword ptr [ecx + 0xc], 0x38 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_00b58d9d }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_00b58d9d: }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b58db6: }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00b58df0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { L_00b58df0: }
	__asm { add dword ptr [ebx + 0xc], 0x38 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { cmp eax, dword ptr [ebx + 4] }
	__asm { jne L_00b58e01 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { L_00b58e01: }
	__asm { inc dword ptr [ebx + 0x10] }
	__asm { L_00b58e04: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00a09010();
// FUNCTION: ROBLOXSTUDIO 0x00b5f310
extern "C" __declspec(naked) void asm_00b5f310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x64 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { mov dx, word ptr [ecx + 2] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov ax, word ptr [esi] }
	__asm { mov di, word ptr [esi + 2] }
	__asm { sar ax, 2 }
	__asm { mov word ptr [ebp - 2], ax }
	__asm { mov ax, word ptr [ecx] }
	__asm { mov bx, word ptr [esi + 4] }
	__asm { sar ax, 2 }
	__asm { mov word ptr [ebp + 0x16], ax }
	__asm { mov ax, word ptr [ecx + 4] }
	__asm { sar ax, 2 }
	__asm { mov word ptr [ebp + 0x12], ax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x64], eax }
	__asm { mov ax, word ptr [esi + 4] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x5e], eax }
	__asm { mov ax, word ptr [ecx + 4] }
	__asm { sar di, 1 }
	__asm { sar dx, 1 }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { movsx ecx, di }
	__asm { movsx eax, dx }
	__asm { sar bx, 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { cmp ecx, eax }
	__asm { jg L_00b5f66f }
	__asm { mov ax, word ptr [ebp + 0x12] }
	__asm { mov edx, dword ptr [ebp - 0x30] }
	__asm { movsx ebx, bx }
	__asm { cwde }
	__asm { mov dword ptr [ebp - 0x40], ebx }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { L_00b5f396: }
	__asm { mov edi, ebx }
	__asm { mov dword ptr [ebp - 0xc], ebx }
	__asm { cmp edi, eax }
	__asm { jg L_00b5f663 }
	__asm { mov ax, word ptr [ebp + 0x16] }
	__asm { movsx edx, word ptr [ebp - 2] }
	__asm { cwde }
	__asm { mov dword ptr [ebp - 0x3c], edx }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { L_00b5f3b2: }
	__asm { mov dword ptr [ebp - 0x20], edx }
	__asm { cmp edx, eax }
	__asm { jg L_00b5f64a }
	__asm { lea eax, [edi + ecx*8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [eax*8 + 1] }
	__asm { add eax, edx }
	__asm { lea eax, [ecx + eax*4] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { L_00b5f3d2: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00b5f631 }
	__asm { mov ax, word ptr [ebp - 0x64] }
	__asm { lea ebx, [edx*4] }
	__asm { movsx edx, word ptr [ebp - 0x5e] }
	__asm { cwde }
	__asm { sub edx, eax }
	__asm { mov dword ptr [ebp - 0x38], ebx }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { L_00b5f3f7: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { bsf eax, ecx }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { and eax, 3 }
	__asm { or eax, ebx }
	__asm { mov ebx, edi }
	__asm { lea ecx, [esi + esi] }
	__asm { mov esi, dword ptr [ebp - 0xc] }
	__asm { shr ebx, 4 }
	__asm { or ebx, ecx }
	__asm { shr edi, 2 }
	__asm { lea ecx, [esi*4] }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { and edi, 3 }
	__asm { or edi, ecx }
	__asm { movsx ecx, word ptr [ebp - 0x64] }
	__asm { mov word ptr [ebp - 0x58], ax }
	__asm { cwde }
	__asm { sub eax, ecx }
	__asm { mov word ptr [ebp - 0x56], bx }
	__asm { mov word ptr [ebp - 0x54], di }
	__asm { cmp eax, edx }
	__asm { ja L_00b5f60b }
	__asm { movsx ecx, word ptr [ebp - 0x62] }
	__asm { movsx edx, word ptr [ebp - 0x5c] }
	__asm { movsx eax, bx }
	__asm { sub edx, ecx }
	__asm { sub eax, ecx }
	__asm { cmp eax, edx }
	__asm { ja L_00b5f608 }
	__asm { movsx ecx, word ptr [ebp - 4] }
	__asm { movsx edx, word ptr [ebp - 6] }
	__asm { movsx eax, di }
	__asm { sub edx, ecx }
	__asm { sub eax, ecx }
	__asm { cmp eax, edx }
	__asm { ja L_00b5f608 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { movzx eax, word ptr [ecx] }
	__asm { shl ax, 5 }
	__asm { mov word ptr [ebp - 0x4e], ax }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { shl ax, 4 }
	__asm { mov word ptr [ebp - 0x4c], ax }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { shl ax, 5 }
	__asm { mov word ptr [ebp - 0x4a], ax }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { add eax, dword ptr [ebp - 0x4e] }
	__asm { mov ecx, dword ptr [ebp - 0x4a] }
	__asm { add ecx, dword ptr [ebp - 0x54] }
	__asm { mov word ptr [ebp - 0x46], ax }
	__asm { mov eax, dword ptr [ebp - 0x56] }
	__asm { add eax, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov word ptr [ebp - 0x44], ax }
	__asm { lea eax, [ebp - 0x46] }
	__asm { mov word ptr [ebp - 0x42], cx }
	__asm { cmp eax, edi }
	__asm { jae L_00b5f57e }
	__asm { mov ebx, dword ptr [esi] }
	__asm { cmp ebx, eax }
	__asm { ja L_00b5f57e }
	__asm { mov ecx, eax }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { cmp edi, ecx }
	__asm { jne L_00b5f55a }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jae L_00b5f557 }
	__asm { sub edi, ebx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edi }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov eax, 0x2aaaaaaa }
	__asm { sub eax, ecx }
	__asm { cmp eax, 1 }
	__asm { jb L_00b5f678 }
	__asm { lea edi, [ecx + 1] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov edx, ecx }
	__asm { shr edx, 1 }
	__asm { mov eax, 0x2aaaaaaa }
	__asm { sub eax, edx }
	__asm { cmp eax, ecx }
	__asm { jae L_00b5f548 }
	__asm { xor ecx, ecx }
	__asm { jmp L_00b5f54a }
	__asm { L_00b5f548: }
	__asm { add ecx, edx }
	__asm { L_00b5f54a: }
	__asm { cmp ecx, edi }
	__asm { cmovb ecx, edi }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00a09010 }
	__asm { L_00b5f557: }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { L_00b5f55a: }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea edx, [eax + ecx*2] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00b5f604 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ax, word ptr [edx + 4] }
	__asm { mov word ptr [ecx + 4], ax }
	__asm { jmp L_00b5f604 }
	__asm { L_00b5f57e: }
	__asm { mov ebx, dword ptr [esi + 8] }
	__asm { cmp edi, ebx }
	__asm { jne L_00b5f5f4 }
	__asm { mov ecx, ebx }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jae L_00b5f5f1 }
	__asm { sub edi, dword ptr [esi] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edi }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov eax, 0x2aaaaaaa }
	__asm { sub eax, ecx }
	__asm { cmp eax, 1 }
	__asm { jb L_00b5f678 }
	__asm { sub ebx, dword ptr [esi] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ebx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { lea edi, [ecx + 1] }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov ecx, 0x2aaaaaaa }
	__asm { sub ecx, edx }
	__asm { cmp ecx, eax }
	__asm { jae L_00b5f5e2 }
	__asm { xor eax, eax }
	__asm { jmp L_00b5f5e4 }
	__asm { L_00b5f5e2: }
	__asm { add eax, edx }
	__asm { L_00b5f5e4: }
	__asm { cmp eax, edi }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00a09010 }
	__asm { L_00b5f5f1: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { L_00b5f5f4: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { test edx, edx }
	__asm { je L_00b5f604 }
	__asm { mov eax, dword ptr [ebp - 0x46] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov word ptr [edx + 4], cx }
	__asm { L_00b5f604: }
	__asm { add dword ptr [esi + 4], 6 }
	__asm { L_00b5f608: }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00b5f60b: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov ebx, dword ptr [ebp - 0x38] }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { not eax }
	__asm { and ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { jne L_00b5f3f7 }
	__asm { mov edx, dword ptr [ebp - 0x20] }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov edi, dword ptr [ebp - 0xc] }
	__asm { L_00b5f631: }
	__asm { inc edx }
	__asm { add eax, 4 }
	__asm { mov dword ptr [ebp - 0x20], edx }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { cmp edx, dword ptr [ebp - 0x28] }
	__asm { jle L_00b5f3d2 }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00b5f64a: }
	__asm { mov edx, dword ptr [ebp - 0x3c] }
	__asm { inc edi }
	__asm { mov dword ptr [ebp - 0xc], edi }
	__asm { cmp edi, dword ptr [ebp - 0x2c] }
	__asm { jle L_00b5f3b2 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov edx, dword ptr [ebp - 0x30] }
	__asm { mov ebx, dword ptr [ebp - 0x40] }
	__asm { L_00b5f663: }
	__asm { inc ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp ecx, edx }
	__asm { jle L_00b5f396 }
	__asm { L_00b5f66f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00b5f678: }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
}
