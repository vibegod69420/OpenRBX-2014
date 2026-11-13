// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006d1f30();
extern "C" void fn_00ba94d0();
// FUNCTION: ROBLOXSTUDIO 0x00ba9fd0
extern "C" __declspec(naked) void asm_00ba9fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea edi, [ebx + 0x6c] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d1f30 }
	__asm { test al, al }
	__asm { je L_00ba9ff8 }
	__asm { mov ecx, ebx }
	__asm { call fn_00ba94d0 }
	__asm { mov ecx, 9 }
	__asm { rep movsd }
	__asm { L_00ba9ff8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}
