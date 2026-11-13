// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_007beab0();
extern "C" void fn_009f22e0();
extern "C" void fn_00b4ebd0();
// FUNCTION: ROBLOXSTUDIO 0x00b91440
extern "C" __declspec(naked) void asm_00b91440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { mov esi, ecx }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_007beab0 }
	__asm { fld dword ptr [esi + 0x8c] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_009f22e0 }
	__asm { add esp, 8 }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { call fn_00b4ebd0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { fild dword ptr [ebp + 8] }
	__asm { fdivr dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esi + 0x90] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038034[];
extern "C" void fn_00b4eb80();
extern "C" void fn_00b4ebf0();
// FUNCTION: ROBLOXSTUDIO 0x00b91490
extern "C" __declspec(naked) void asm_00b91490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00b4ebf0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { fild dword ptr [ebp - 4] }
	__asm { fmul dword ptr [ebp + 8] }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { call fn_00b4eb80 }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { fmul dword ptr [ebp - 4] }
	__asm { ucomiss xmm0, dword ptr [g_01038034] }
	__asm { fstp dword ptr [esi + 0x90] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00b914cf }
	__asm { mov byte ptr [esi + 0x94], 1 }
	__asm { L_00b914cf: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
