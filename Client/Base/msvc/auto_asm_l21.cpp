// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_010385f0[];
// FUNCTION: ROBLOXSTUDIO 0x006cf230
extern "C" __declspec(naked) void asm_006cf230()
{
	__asm { movss xmm1, dword ptr [g_010385f0] }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { movss xmm0, dword ptr [ecx + 0x1c] }
	__asm { xorps xmm0, xmm1 }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x20] }
	__asm { xorps xmm0, xmm1 }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x24] }
	__asm { xorps xmm0, xmm1 }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { ret 8 }
}
