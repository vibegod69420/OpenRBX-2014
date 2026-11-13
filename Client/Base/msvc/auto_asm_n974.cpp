// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_004f4560();
// FUNCTION: ROBLOXSTUDIO 0x00a4f9a0
extern "C" __declspec(naked) void asm_00a4f9a0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_004f4560 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00a4f9be }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00a4f9c8 }
	__asm { L_00a4f9be: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00a4f9c8: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a4f9f4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a4f9f4 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00a4f9f4 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a4f9f4: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_00a4f1d0();
// FUNCTION: ROBLOXSTUDIO 0x00a4fa00
extern "C" __declspec(naked) void asm_00a4fa00()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a4f1d0 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00a4fa1e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00a4fa28 }
	__asm { L_00a4fa1e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00a4fa28: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a4fa54 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a4fa54 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00a4fa54 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a4fa54: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_00a4f240();
// FUNCTION: ROBLOXSTUDIO 0x00a4fa60
extern "C" __declspec(naked) void asm_00a4fa60()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a4f240 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00a4fa7e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00a4fa88 }
	__asm { L_00a4fa7e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00a4fa88: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a4fab4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a4fab4 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00a4fab4 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a4fab4: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_00a4f320();
// FUNCTION: ROBLOXSTUDIO 0x00a4fac0
extern "C" __declspec(naked) void asm_00a4fac0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a4f320 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00a4fade }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00a4fae8 }
	__asm { L_00a4fade: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00a4fae8: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a4fb14 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a4fb14 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00a4fb14 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a4fb14: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_00a4f390();
// FUNCTION: ROBLOXSTUDIO 0x00a4fb20
extern "C" __declspec(naked) void asm_00a4fb20()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00a4f390 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00a4fb3e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00a4fb48 }
	__asm { L_00a4fb3e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00a4fb48: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00a4fb74 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00a4fb74 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00a4fb74 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00a4fb74: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}
