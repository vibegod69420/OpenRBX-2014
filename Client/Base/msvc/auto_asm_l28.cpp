// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_011ddd08[];
// FUNCTION: ROBLOXSTUDIO 0x0076ef40
extern "C" __declspec(naked) void asm_0076ef40()
{
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov edx, dword ptr [ecx + 0x148] }
	__asm { cmp dword ptr [eax + 0xc], 2 }
	__asm { je L_0076ef5b }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { shl eax, 6 }
	__asm { mov eax, dword ptr [eax + edx + 0xc] }
	__asm { jmp L_0076ef5e }
	__asm { L_0076ef5b: }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { L_0076ef5e: }
	__asm { mov dword ptr [ecx + 0x140], eax }
	__asm { mov byte ptr [ecx + 0x139], 1 }
	__asm { movss xmm0, dword ptr [edx + 8] }
	__asm { mulss xmm0, xmm0 }
	__asm { movss dword ptr [ecx + 0x98], xmm0 }
	__asm { mov eax, dword ptr [g_011ddd08] }
	__asm { mov dword ptr [ecx + 0x8c], eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0076f460
extern "C" __declspec(naked) void asm_0076f460()
{
	__asm { mov edx, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [ecx + 0x148] }
	__asm { shl edx, 6 }
	__asm { fld dword ptr [edx + eax + 0x10] }
	__asm { fmul st(0), st(0) }
	__asm { ret }
}
