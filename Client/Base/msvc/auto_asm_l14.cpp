// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x006b97d0
extern "C" __declspec(naked) void asm_006b97d0()
{
	__asm { mov eax, 1 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { inc eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006b97e0
extern "C" __declspec(naked) void asm_006b97e0()
{
	__asm { mov eax, 1 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { inc eax }
	__asm { dec eax }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b97f0
extern "C" __declspec(naked) void asm_006b97f0()
{
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { dec eax }
	__asm { inc eax }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b9800
extern "C" __declspec(naked) void asm_006b9800()
{
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { dec eax }
	__asm { ret }
}
