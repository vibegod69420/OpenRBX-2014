// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00b8c9e0();
// FUNCTION: ROBLOXSTUDIO 0x00b8e0d0
extern "C" __declspec(naked) void asm_00b8e0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 2 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b8c9e0 }
	__asm { movss xmm0, dword ptr [ebp + 0x18] }
	__asm { movss dword ptr [esi + 0xcc], xmm0 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov dword ptr [esi], 0xe7a524 }
	__asm { mov dword ptr [esi + 0x1c], 0xe7a570 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
}
