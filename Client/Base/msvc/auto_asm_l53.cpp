// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_01038120[];
// FUNCTION: ROBLOXSTUDIO 0x00bd9ef0
extern "C" __declspec(naked) void asm_00bd9ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { fld dword ptr [ecx + 0x68] }
	__asm { fstp dword ptr [eax] }
	__asm { movss xmm0, dword ptr [ecx + 0x68] }
	__asm { mulss xmm0, dword ptr [g_01038120] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_010380b8[];
extern "C" char g_01038178[];
extern "C" char g_01038190[];
extern "C" void fn_0099d320();
// FUNCTION: ROBLOXSTUDIO 0x00bda3a0
extern "C" __declspec(naked) void asm_00bda3a0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { call fn_0099d320 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mulss xmm0, dword ptr [g_010380b8] }
	__asm { movaps xmm1, xmm0 }
	__asm { mulss xmm1, dword ptr [g_01038178] }
	__asm { movss dword ptr [esi + 0x54], xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { movss dword ptr [esi + 0x68], xmm1 }
	__asm { mulss xmm1, dword ptr [g_01038190] }
	__asm { movss dword ptr [esi + 0x58], xmm1 }
	__asm { pop esi }
	__asm { ret }
}
