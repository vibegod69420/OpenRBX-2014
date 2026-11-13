// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x0069f710
extern "C" __declspec(naked) void asm_0069f710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov cl, byte ptr [ebp + 0xc] }
	__asm { mov al, byte ptr [ebp + 0x10] }
	__asm { lock cmpxchg byte ptr [edx], cl }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
