// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x00a3b4f0
extern "C" __declspec(naked) void asm_00a3b4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss xmm0, dword ptr [ecx + 0x24] }
	__asm { subss xmm0, dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x28] }
	__asm { subss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x2c] }
	__asm { subss xmm0, dword ptr [eax + 8] }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x00a3b550
extern "C" __declspec(naked) void asm_00a3b550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { addss xmm0, dword ptr [ecx + 0x24] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x28] }
	__asm { addss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x2c] }
	__asm { addss xmm0, dword ptr [eax + 8] }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0124eb14[];
extern "C" char g_0124eb1c[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3b5b0
extern "C" __declspec(naked) void asm_00a3b5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb1c] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb14] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { subss xmm0, dword ptr [esi + 8] }
	__asm { movss xmm7, dword ptr [esi + 4] }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm5, dword ptr [esi + 0x14] }
	__asm { movss xmm4, dword ptr [esi + 0x10] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { subss xmm1, dword ptr [esi + 0xc] }
	__asm { movss xmm6, dword ptr [esi + 0x18] }
	__asm { subss xmm2, xmm7 }
	__asm { movaps xmm3, xmm5 }
	__asm { mulss xmm3, xmm0 }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, xmm2 }
	__asm { add esp, 0x18 }
	__asm { addss xmm3, xmm0 }
	__asm { movaps xmm0, xmm6 }
	__asm { mulss xmm0, xmm1 }
	__asm { addss xmm3, xmm0 }
	__asm { xorps xmm0, xmm0 }
	__asm { comiss xmm0, xmm3 }
	__asm { jbe L_00a3b643 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { jmp L_00a3b67d }
	__asm { L_00a3b643: }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { mulss xmm5, xmm3 }
	__asm { mulss xmm4, xmm3 }
	__asm { addss xmm0, xmm5 }
	__asm { mulss xmm6, xmm3 }
	__asm { addss xmm7, xmm4 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0xc] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { addss xmm0, xmm6 }
	__asm { movss dword ptr [ebp - 0x14], xmm7 }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { L_00a3b67d: }
	__asm { push 0xc }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00a353e0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00a3b69a }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { L_00a3b69a: }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb14[];
extern "C" void fn_00a35060();
extern "C" void fn_00a353e0();
extern "C" void fn_00a35bf0();
extern "C" void fn_00a389c0();
// FUNCTION: ROBLOXSTUDIO 0x00a3b6d0
extern "C" __declspec(naked) void asm_00a3b6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [g_0124eb14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { push dword ptr [g_0124eb14] }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { push edi }
	__asm { call fn_00a389c0 }
	__asm { movss xmm1, dword ptr [esi + 4] }
	__asm { mulss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { mulss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm4, dword ptr [eax] }
	__asm { movss xmm3, dword ptr [esi] }
	__asm { subss xmm1, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm3, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { movaps xmm1, xmm4 }
	__asm { mulss xmm1, dword ptr [esi + 8] }
	__asm { mulss xmm4, dword ptr [esi + 4] }
	__asm { subss xmm1, xmm0 }
	__asm { push 0xc }
	__asm { subss xmm3, xmm4 }
	__asm { push edi }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { movss dword ptr [ebp - 4], xmm3 }
	__asm { call fn_00a353e0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { je L_00a3b76a }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { L_00a3b76a: }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push 0xffffd8f0 }
	__asm { push edi }
	__asm { call fn_00a35060 }
	__asm { push -2 }
	__asm { push edi }
	__asm { call fn_00a35bf0 }
	__asm { add esp, 0x14 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
