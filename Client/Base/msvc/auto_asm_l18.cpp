// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_011dd38c[];
extern "C" char g_011dd390[];
extern "C" char g_011dd394[];
extern "C" char g_011dd398[];
// FUNCTION: ROBLOXSTUDIO 0x006c6a20
extern "C" __declspec(naked) void asm_006c6a20()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [g_011dd38c], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [g_011dd390], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [g_011dd394], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { movss dword ptr [g_011dd398], xmm0 }
	__asm { ret }
}
