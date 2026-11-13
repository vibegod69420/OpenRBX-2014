// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00edea98[];
extern "C" char g_01038088[];
// FUNCTION: ROBLOXSTUDIO 0x00bae7f0
extern "C" __declspec(naked) void asm_00bae7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { mulss xmm0, dword ptr [g_00edea98] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0xc] }
	__asm { mulss xmm0, dword ptr [g_01038088] }
	__asm { mov dword ptr [eax], 0 }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038084[];
// FUNCTION: ROBLOXSTUDIO 0x00bd9d40
extern "C" __declspec(naked) void asm_00bd9d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm2, dword ptr [ecx + 0x68] }
	__asm { movss xmm1, dword ptr [g_01038084] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, xmm1 }
	__asm { mulss xmm2, xmm1 }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss dword ptr [eax + 8], xmm2 }
	__asm { pop ebp }
	__asm { ret 0xc }
}
