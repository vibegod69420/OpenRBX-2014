// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006733a0();
// FUNCTION: ROBLOXSTUDIO 0x00673090
extern "C" __declspec(naked) void asm_00673090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea edi, [eax + 0x4c] }
	__asm { mov ecx, 0x10 }
	__asm { rep movsd }
	__asm { mov ecx, eax }
	__asm { call fn_006733a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}
