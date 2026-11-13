// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e362a4[];
extern "C" char g_00e388a8[];
extern "C" char g_01038190[];
// FUNCTION: ROBLOXSTUDIO 0x00646cd0
extern "C" __declspec(naked) void asm_00646cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cvtsi2ss xmm1, dword ptr [ecx + 0x34] }
	__asm { cvtsi2ss xmm2, dword ptr [ecx + 0x38] }
	__asm { cvtsi2ss xmm3, dword ptr [ecx + 0x3c] }
	__asm { mulss xmm1, dword ptr [g_00e388a8] }
	__asm { mulss xmm2, dword ptr [g_00e362a4] }
	__asm { mulss xmm3, dword ptr [g_00e388a8] }
	__asm { movss xmm0, dword ptr [g_01038190] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm3, xmm0 }
	__asm { movss dword ptr [eax], xmm1 }
	__asm { movss dword ptr [eax + 4], xmm2 }
	__asm { movss dword ptr [eax + 8], xmm3 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038088[];
extern "C" char g_010380b8[];
extern "C" char g_010380e4[];
// FUNCTION: ROBLOXSTUDIO 0x0064a720
extern "C" __declspec(naked) void asm_0064a720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm3, dword ptr [ebp + 0xc] }
	__asm { movss xmm2, dword ptr [ebp + 0x10] }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movaps xmm1, xmm3 }
	__asm { mulss xmm3, dword ptr [g_010380b8] }
	__asm { mulss xmm1, xmm2 }
	__asm { mulss xmm2, dword ptr [g_010380b8] }
	__asm { mulss xmm1, dword ptr [g_01038088] }
	__asm { subss xmm3, xmm1 }
	__asm { subss xmm2, xmm1 }
	__asm { subss xmm0, xmm3 }
	__asm { movss dword ptr [eax], xmm3 }
	__asm { movss dword ptr [eax + 4], xmm2 }
	__asm { subss xmm0, xmm2 }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00686850();
// FUNCTION: ROBLOXSTUDIO 0x00655ee0
extern "C" __declspec(naked) void asm_00655ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm0, dword ptr [eax + 0xc] }
	__asm { ja L_00655f18 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { comiss xmm0, dword ptr [eax + 0x10] }
	__asm { ja L_00655f18 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { comiss xmm0, dword ptr [eax + 0x14] }
	__asm { ja L_00655f18 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov ecx, dword ptr [ecx + 0x38] }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { pop ebp }
	__asm { jmp fn_00686850 }
	__asm { L_00655f18: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00660230
extern "C" __declspec(naked) void asm_00660230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0066025a }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_0066025a: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
