// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012dc250[];
extern "C" char g_012dc258[];
extern "C" char g_012dc268[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006247c0();
extern "C" void fn_00624900();
extern "C" void fn_006249a0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00628ee0
extern "C" __declspec(naked) void asm_00628ee0()
{
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00628f7a }
	__asm { cmp dword ptr [g_012dc268], 0x29a }
	__asm { je L_00628f2f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00628f1a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00628f2f }
	__asm { L_00628f1a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00628f2f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00628f7a }
	__asm { cmp dword ptr [g_012dc268], 0x29a }
	__asm { je L_00628f7a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00628f65 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00628f7a }
	__asm { L_00628f65: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00628f7a: }
	__asm { jmp fn_00624900 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00628fcd }
	__asm { cmp dword ptr [g_012dc250], 0x29a }
	__asm { je L_00628fcd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00628fbc }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00628fcd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00628fbc: }
	__asm { movzx eax, al }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00628fcd: }
	__asm { jmp fn_006247c0 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0062902d }
	__asm { cmp dword ptr [g_012dc258], 0x29a }
	__asm { je L_0062902d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0062901c }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0062902d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0062901c: }
	__asm { movzx eax, al }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0062902d: }
	__asm { jmp fn_006249a0 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_006294f0();
// FUNCTION: ROBLOXSTUDIO 0x00629630
extern "C" __declspec(naked) void asm_00629630()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_006294f0 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_0062964e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00629658 }
	__asm { L_0062964e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00629658: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00629684 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00629684 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00629684 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00629684: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}
