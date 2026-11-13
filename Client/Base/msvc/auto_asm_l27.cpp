// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x006dd600
extern "C" __declspec(naked) void asm_006dd600()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { movss xmm0, dword ptr [esp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { movss dword ptr [ecx + 8], xmm0 }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { mov eax, ecx }
	__asm { ret 8 }
}
