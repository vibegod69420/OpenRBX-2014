// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_009f2130();
// FUNCTION: ROBLOXSTUDIO 0x00b914e0
extern "C" __declspec(naked) void asm_00b914e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x94], 0 }
	__asm { je L_00b91517 }
	__asm { fld dword ptr [esi + 0x8c] }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [esi + 0x94], 0 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [esi + 0x88] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_009f2130 }
	__asm { fstp dword ptr [esi + 0x8c] }
	__asm { add esp, 8 }
	__asm { L_00b91517: }
	__asm { movss xmm0, dword ptr [esi + 0x90] }
	__asm { addss xmm0, dword ptr [esi + 0x8c] }
	__asm { movss dword ptr [esi + 0x8c], xmm0 }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00b92950
extern "C" __declspec(naked) void asm_00b92950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0xed58dc }
	__asm { movss dword ptr [ecx + 4], xmm0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e3da10[];
extern "C" void fn_00891b10();
extern "C" void fn_00891b30();
extern "C" void fn_00891b90();
// FUNCTION: ROBLOXSTUDIO 0x00b92fd0
extern "C" __declspec(naked) void asm_00b92fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00891b10 }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00891b30 }
	__asm { movss xmm0, dword ptr [eax + 0x3c] }
	__asm { comiss xmm0, dword ptr [g_00e3da10] }
	__asm { jbe L_00b93006 }
	__asm { mov ecx, esi }
	__asm { call fn_00891b90 }
	__asm { test al, al }
	__asm { mov eax, 1 }
	__asm { je L_00b9300b }
	__asm { L_00b93006: }
	__asm { mov eax, 2 }
	__asm { L_00b9300b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b678d0();
// FUNCTION: ROBLOXSTUDIO 0x00ba6f50
extern "C" __declspec(naked) void asm_00ba6f50()
{
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0x30] }
	__asm { test esi, esi }
	__asm { je L_00ba6faa }
	__asm { cmp byte ptr [esi + 8], 0 }
	__asm { je L_00ba6f68 }
	__asm { mov ecx, esi }
	__asm { call fn_00b678d0 }
	__asm { L_00ba6f68: }
	__asm { movss xmm1, dword ptr [esi + 0xb0] }
	__asm { mov dword ptr [esi + 0xb4], 0 }
	__asm { movss dword ptr [esi + 0xb8], xmm1 }
	__asm { mov dword ptr [esi + 0xbc], 0 }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov dword ptr [esi + 0xc4], 0 }
	__asm { mov dword ptr [esi + 0xc8], 0 }
	__asm { L_00ba6faa: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00ba94d0();
// FUNCTION: ROBLOXSTUDIO 0x00ba9dc0
extern "C" __declspec(naked) void asm_00ba9dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movss xmm0, dword ptr [esi + 0x90] }
	__asm { ucomiss xmm0, dword ptr [ebp + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00ba9dea }
	__asm { call fn_00ba94d0 }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [esi + 0x90], xmm0 }
	__asm { L_00ba9dea: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}
