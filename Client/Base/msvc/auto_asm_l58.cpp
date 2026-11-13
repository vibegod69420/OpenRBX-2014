// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00c039f0
extern "C" __declspec(naked) void asm_00c039f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { subss xmm1, dword ptr [ecx] }
	__asm { subss xmm0, dword ptr [ecx + 4] }
	__asm { movss xmm2, dword ptr [ecx + 8] }
	__asm { mulss xmm2, dword ptr [ebp + 0x10] }
	__asm { mulss xmm1, xmm1 }
	__asm { mulss xmm0, xmm0 }
	__asm { mulss xmm2, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { comiss xmm2, xmm1 }
	__asm { jbe L_00c03a2e }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c03a2e: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret }
}
