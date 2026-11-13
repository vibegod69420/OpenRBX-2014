// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_01038034[];
extern "C" char g_01038224[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00bc60e0();
// FUNCTION: ROBLOXSTUDIO 0x00bc2430
extern "C" __declspec(naked) void asm_00bc2430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { movss xmm2, dword ptr [g_01038224] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, 0x38e38e39 }
	__asm { mov edx, dword ptr [esi + 0x1c] }
	__asm { sub edx, dword ptr [esi + 0x18] }
	__asm { push edi }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { xor edi, edi }
	__asm { xor ecx, ecx }
	__asm { shr eax, 0x1f }
	__asm { movss dword ptr [ebp - 0xc], xmm2 }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { add eax, edx }
	__asm { je L_00bc2588 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { L_00bc2474: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { add eax, ebx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00bc60e0 }
	__asm { test al, al }
	__asm { je L_00bc255e }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ebp - 0x18] }
	__asm { movss xmm2, dword ptr [ebp - 0x14] }
	__asm { subss xmm2, dword ptr [eax + 8] }
	__asm { subss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { subss xmm0, dword ptr [eax + 0xc] }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { inc dword ptr [ebp - 8] }
	__asm { mulss xmm2, xmm2 }
	__asm { mulss xmm1, xmm1 }
	__asm { mulss xmm0, xmm0 }
	__asm { addss xmm2, xmm1 }
	__asm { addss xmm2, xmm0 }
	__asm { movss dword ptr [ebp + 0xc], xmm2 }
	__asm { test cl, cl }
	__asm { je L_00bc2532 }
	__asm { comiss xmm2, dword ptr [g_01038034] }
	__asm { jae L_00bc2532 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bc251c }
	__asm { push 0x3ac }
	__asm { push 0xee1520 }
	__asm { push 0xee1820 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bc252d }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bc251c: }
	__asm { movzx eax, cl }
	__asm { push 0xee1838 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bc252d: }
	__asm { movss xmm2, dword ptr [ebp + 0xc] }
	__asm { L_00bc2532: }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { comiss xmm0, xmm2 }
	__asm { jbe L_00bc255e }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [edi], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [edi + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [edi + 8], xmm0 }
	__asm { movss dword ptr [ebp - 0xc], xmm2 }
	__asm { L_00bc255e: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { inc dword ptr [ebp - 4] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add ebx, 0x24 }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { jb L_00bc2474 }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { pop ebx }
	__asm { L_00bc2588: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp edi, 1 }
	__asm { sete cl }
	__asm { mov byte ptr [eax], cl }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { pop edi }
	__asm { setg al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_006dec40();
extern "C" void fn_006dec80();
extern "C" void fn_0070f5f0();
extern "C" void fn_00715550();
extern "C" void fn_00bc2260();
extern "C" void fn_00bc5690();
// FUNCTION: ROBLOXSTUDIO 0x00bc2620
extern "C" __declspec(naked) void asm_00bc2620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d8c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, ecx }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_00bc2260 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_006dec80 }
	__asm { mov esi, eax }
	__asm { call fn_006dec40 }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { comiss xmm4, xmm0 }
	__asm { movss xmm1, dword ptr [esi + 8] }
	__asm { jae L_00bc2699 }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc2696 }
	__asm { movaps xmm4, xmm1 }
	__asm { jmp L_00bc2699 }
	__asm { L_00bc2696: }
	__asm { movaps xmm4, xmm0 }
	__asm { L_00bc2699: }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { comiss xmm2, xmm0 }
	__asm { movss xmm1, dword ptr [esi + 4] }
	__asm { jae L_00bc26ba }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc26b7 }
	__asm { movaps xmm2, xmm1 }
	__asm { jmp L_00bc26ba }
	__asm { L_00bc26b7: }
	__asm { movaps xmm2, xmm0 }
	__asm { L_00bc26ba: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm3, dword ptr [esi] }
	__asm { jae L_00bc26d9 }
	__asm { comiss xmm1, xmm3 }
	__asm { jb L_00bc26d6 }
	__asm { movaps xmm0, xmm3 }
	__asm { jmp L_00bc26d9 }
	__asm { L_00bc26d6: }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00bc26d9: }
	__asm { movss xmm1, dword ptr [ebp - 0x2c] }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x28] }
	__asm { mulss xmm0, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x24] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { comiss xmm1, dword ptr [ebp - 0x20] }
	__asm { jb L_00bc2709 }
	__asm { mov ebx, 1 }
	__asm { jmp L_00bc270b }
	__asm { L_00bc2709: }
	__asm { xor ebx, ebx }
	__asm { L_00bc270b: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_006dec80 }
	__asm { mov esi, eax }
	__asm { call fn_006dec40 }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { comiss xmm4, xmm0 }
	__asm { movss xmm1, dword ptr [esi + 8] }
	__asm { jae L_00bc274c }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc2749 }
	__asm { movaps xmm4, xmm1 }
	__asm { jmp L_00bc274c }
	__asm { L_00bc2749: }
	__asm { movaps xmm4, xmm0 }
	__asm { L_00bc274c: }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { comiss xmm2, xmm0 }
	__asm { movss xmm1, dword ptr [esi + 4] }
	__asm { jae L_00bc276d }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc276a }
	__asm { movaps xmm2, xmm1 }
	__asm { jmp L_00bc276d }
	__asm { L_00bc276a: }
	__asm { movaps xmm2, xmm0 }
	__asm { L_00bc276d: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm3, dword ptr [esi] }
	__asm { jae L_00bc278c }
	__asm { comiss xmm1, xmm3 }
	__asm { jb L_00bc2789 }
	__asm { movaps xmm0, xmm3 }
	__asm { jmp L_00bc278c }
	__asm { L_00bc2789: }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00bc278c: }
	__asm { movss xmm1, dword ptr [ebp - 0x2c] }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x28] }
	__asm { mulss xmm0, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x24] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { comiss xmm1, dword ptr [ebp - 0x20] }
	__asm { jb L_00bc27bc }
	__asm { mov eax, 1 }
	__asm { jmp L_00bc27be }
	__asm { L_00bc27bc: }
	__asm { xor eax, eax }
	__asm { L_00bc27be: }
	__asm { cmp bl, al }
	__asm { je L_00bc280c }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call fn_00715550 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0070f5f0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00bc5690 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00bc280c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_006dec40();
extern "C" void fn_006dec80();
extern "C" void fn_0070f5f0();
extern "C" void fn_00715550();
extern "C" void fn_00babde0();
extern "C" void fn_00bc2260();
extern "C" void fn_00bc5690();
// FUNCTION: ROBLOXSTUDIO 0x00bc2830
extern "C" __declspec(naked) void asm_00bc2830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d8e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, ecx }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_00bc2260 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_006dec80 }
	__asm { mov esi, eax }
	__asm { call fn_006dec40 }
	__asm { movss xmm3, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { comiss xmm3, xmm0 }
	__asm { movss xmm1, dword ptr [esi + 8] }
	__asm { jae L_00bc28a9 }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc28a6 }
	__asm { movaps xmm3, xmm1 }
	__asm { jmp L_00bc28a9 }
	__asm { L_00bc28a6: }
	__asm { movaps xmm3, xmm0 }
	__asm { L_00bc28a9: }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { comiss xmm2, xmm0 }
	__asm { movss xmm1, dword ptr [esi + 4] }
	__asm { jae L_00bc28ca }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc28c7 }
	__asm { movaps xmm2, xmm1 }
	__asm { jmp L_00bc28ca }
	__asm { L_00bc28c7: }
	__asm { movaps xmm2, xmm0 }
	__asm { L_00bc28ca: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm4, dword ptr [esi] }
	__asm { jae L_00bc28e9 }
	__asm { comiss xmm1, xmm4 }
	__asm { jb L_00bc28e6 }
	__asm { movaps xmm0, xmm4 }
	__asm { jmp L_00bc28e9 }
	__asm { L_00bc28e6: }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00bc28e9: }
	__asm { movss xmm1, dword ptr [ebp - 0x38] }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x34] }
	__asm { mulss xmm0, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x30] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { comiss xmm1, dword ptr [ebp - 0x2c] }
	__asm { jb L_00bc2919 }
	__asm { mov ebx, 1 }
	__asm { jmp L_00bc291b }
	__asm { L_00bc2919: }
	__asm { xor ebx, ebx }
	__asm { L_00bc291b: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_006dec80 }
	__asm { mov esi, eax }
	__asm { call fn_006dec40 }
	__asm { movss xmm3, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { comiss xmm3, xmm0 }
	__asm { movss xmm1, dword ptr [esi + 8] }
	__asm { jae L_00bc295c }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc2959 }
	__asm { movaps xmm3, xmm1 }
	__asm { jmp L_00bc295c }
	__asm { L_00bc2959: }
	__asm { movaps xmm3, xmm0 }
	__asm { L_00bc295c: }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { comiss xmm2, xmm0 }
	__asm { movss xmm1, dword ptr [esi + 4] }
	__asm { jae L_00bc297d }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc297a }
	__asm { movaps xmm2, xmm1 }
	__asm { jmp L_00bc297d }
	__asm { L_00bc297a: }
	__asm { movaps xmm2, xmm0 }
	__asm { L_00bc297d: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm4, dword ptr [esi] }
	__asm { jae L_00bc299c }
	__asm { comiss xmm1, xmm4 }
	__asm { jb L_00bc2999 }
	__asm { movaps xmm0, xmm4 }
	__asm { jmp L_00bc299c }
	__asm { L_00bc2999: }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00bc299c: }
	__asm { movss xmm1, dword ptr [ebp - 0x38] }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x34] }
	__asm { mulss xmm0, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x30] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { comiss xmm1, dword ptr [ebp - 0x2c] }
	__asm { jb L_00bc29cc }
	__asm { mov eax, 1 }
	__asm { jmp L_00bc29ce }
	__asm { L_00bc29cc: }
	__asm { xor eax, eax }
	__asm { L_00bc29ce: }
	__asm { cmp bl, al }
	__asm { je L_00bc2ad7 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call fn_00715550 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0070f5f0 }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_00babde0 }
	__asm { mov esi, eax }
	__asm { call fn_006dec80 }
	__asm { mov edi, eax }
	__asm { call fn_006dec40 }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { comiss xmm4, xmm0 }
	__asm { movss xmm1, dword ptr [edi + 8] }
	__asm { jae L_00bc2a45 }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc2a42 }
	__asm { movaps xmm4, xmm1 }
	__asm { jmp L_00bc2a45 }
	__asm { L_00bc2a42: }
	__asm { movaps xmm4, xmm0 }
	__asm { L_00bc2a45: }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [ebp - 0x18] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm2, dword ptr [edi + 4] }
	__asm { jae L_00bc2a66 }
	__asm { comiss xmm1, xmm2 }
	__asm { jb L_00bc2a63 }
	__asm { movaps xmm0, xmm2 }
	__asm { jmp L_00bc2a66 }
	__asm { L_00bc2a63: }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00bc2a66: }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { comiss xmm2, xmm1 }
	__asm { movss xmm3, dword ptr [edi] }
	__asm { jae L_00bc2a85 }
	__asm { comiss xmm1, xmm3 }
	__asm { jb L_00bc2a82 }
	__asm { movaps xmm2, xmm3 }
	__asm { jmp L_00bc2a85 }
	__asm { L_00bc2a82: }
	__asm { movaps xmm2, xmm1 }
	__asm { L_00bc2a85: }
	__asm { movss xmm1, dword ptr [esi + 8] }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { mulss xmm0, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0xc] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x10] }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc2ad7 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00bc5690 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00bc2ad7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10268[];
extern "C" char g_010380b8[];
extern "C" void fn_00b5fe30();
extern "C" void fn_00b5fe90();
extern "C" void fn_00bc06f0();
extern "C" void fn_00bc07e0();
extern "C" void fn_00bc08e0();
extern "C" void fn_00bc1170();
extern "C" void fn_00bc12a0();
// FUNCTION: ROBLOXSTUDIO 0x00bc2af0
extern "C" __declspec(naked) void asm_00bc2af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [g_010380b8] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mulss xmm0, xmm1 }
	__asm { push ebx }
	__asm { push esi }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mulss xmm0, xmm1 }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00b5fe90 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00b5fe30 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { sub ecx, dword ptr [esi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 8 }
	__asm { jae L_00bc2ba7 }
	__asm { push 8 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc08e0 }
	__asm { L_00bc2ba7: }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 6 }
	__asm { jae L_00bc2bcd }
	__asm { push 6 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_00bc07e0 }
	__asm { L_00bc2bcd: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { sub ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0xc }
	__asm { jae L_00bc2bf3 }
	__asm { push 0xc }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call fn_00bc06f0 }
	__asm { L_00bc2bf3: }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { fchs }
	__asm { mov ecx, esi }
	__asm { fst dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { fchs }
	__asm { mov ecx, esi }
	__asm { fst dword ptr [ebp - 0x10] }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { sub esp, 0xc }
	__asm { fchs }
	__asm { mov ecx, esi }
	__asm { fst dword ptr [ebp - 4] }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { push 3 }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 0 }
	__asm { push 4 }
	__asm { push 5 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 2 }
	__asm { push 6 }
	__asm { push 4 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 6 }
	__asm { push 7 }
	__asm { push 5 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 6 }
	__asm { push 2 }
	__asm { push 3 }
	__asm { push 7 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 7 }
	__asm { push 3 }
	__asm { push 1 }
	__asm { push 5 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" char g_010380b8[];
extern "C" void fn_00b5fe30();
extern "C" void fn_00b5fe90();
extern "C" void fn_00bc06f0();
extern "C" void fn_00bc07e0();
extern "C" void fn_00bc08e0();
extern "C" void fn_00bc1060();
extern "C" void fn_00bc1170();
extern "C" void fn_00bc12a0();
// FUNCTION: ROBLOXSTUDIO 0x00bc39c0
extern "C" __declspec(naked) void asm_00bc39c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mulss xmm2, xmm0 }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm4, xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm1, xmm2 }
	__asm { addss xmm0, xmm2 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm1, xmm3 }
	__asm { addss xmm0, xmm3 }
	__asm { mov esi, ecx }
	__asm { movss dword ptr [ebp + 0xc], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { addss xmm0, xmm4 }
	__asm { subss xmm1, xmm4 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00b5fe90 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00b5fe30 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { sub ecx, dword ptr [esi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 7 }
	__asm { jae L_00bc3ab8 }
	__asm { push 7 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc08e0 }
	__asm { L_00bc3ab8: }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 7 }
	__asm { jae L_00bc3ade }
	__asm { push 7 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_00bc07e0 }
	__asm { L_00bc3ade: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { sub ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0xc }
	__asm { jae L_00bc3b04 }
	__asm { push 0xc }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call fn_00bc06f0 }
	__asm { L_00bc3b04: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { dec eax }
	__asm { je L_00bc3d5c }
	__asm { dec eax }
	__asm { je L_00bc3c94 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { dec eax }
	__asm { je L_00bc3bda }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { jmp L_00bc3e0e }
	__asm { L_00bc3bda: }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { jmp L_00bc3e1f }
	__asm { L_00bc3c94: }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { jmp L_00bc3e1f }
	__asm { L_00bc3d5c: }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { L_00bc3e0e: }
	__asm { sub esp, 0xc }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { L_00bc3e1f: }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { push 6 }
	__asm { push 4 }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 2 }
	__asm { push 6 }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 3 }
	__asm { push 4 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 4 }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 5 }
	__asm { push 6 }
	__asm { push 2 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 1 }
	__asm { push 2 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 6 }
	__asm { push 5 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}
