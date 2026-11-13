// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_0131b6d0[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048b370();
// FUNCTION: ROBLOXSTUDIO 0x0048aba0
extern "C" __declspec(naked) void asm_0048aba0()
{
	__asm { L_0048aba0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { mov dword ptr [esp + 0x20], eax }
	__asm { lea eax, [ebx + 0xc] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [eax], 4 }
	__asm { mov ecx, 0xe335a8 }
	__asm { cmovae ecx, eax }
	__asm { mov dword ptr [esp + 0x1c], ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [esp + 0xf], 0 }
	__asm { mov dword ptr [esp + 0x14], edx }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { and ecx, 3 }
	__asm { je L_0048abf9 }
	__asm { mov eax, 4 }
	__asm { sub eax, ecx }
	__asm { add dword ptr [esp + 0x18], eax }
	__asm { L_0048abf9: }
	__asm { test edx, edx }
	__asm { je L_0048acdf }
	__asm { L_0048ac01: }
	__asm { test esi, esi }
	__asm { je L_0048acdb }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { add ecx, -8 }
	__asm { add ecx, edx }
	__asm { mov byte ptr [esp + 0xe], 1 }
	__asm { mov ebx, esi }
	__asm { mov eax, edx }
	__asm { cmp edx, ecx }
	__asm { je L_0048ac37 }
	__asm { nop }
	__asm { L_0048ac20: }
	__asm { cmp eax, esi }
	__asm { jne L_0048ac30 }
	__asm { add eax, dword ptr [esp + 0x18] }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp eax, ecx }
	__asm { jne L_0048ac20 }
	__asm { jmp L_0048ac37 }
	__asm { L_0048ac30: }
	__asm { mov byte ptr [esp + 0xe], 0 }
	__asm { mov esi, ebx }
	__asm { L_0048ac37: }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { add eax, -8 }
	__asm { add eax, edx }
	__asm { cmp byte ptr [esp + 0xe], 0 }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov dword ptr [esp + 0x28], ebx }
	__asm { mov ebx, dword ptr [esp + 0x10] }
	__asm { mov edx, dword ptr [ebx + edx - 4] }
	__asm { mov ebx, dword ptr [esp + 0x28] }
	__asm { mov dword ptr [esp + 0x2c], edx }
	__asm { jne L_0048ac85 }
	__asm { cmp dword ptr [esp + 0x14], esi }
	__asm { ja L_0048ac73 }
	__asm { cmp esi, ecx }
	__asm { jae L_0048ac73 }
	__asm { L_0048ac67: }
	__asm { mov edi, esi }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_0048ac73 }
	__asm { cmp esi, eax }
	__asm { jb L_0048ac67 }
	__asm { L_0048ac73: }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x20], eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { jmp L_0048acc9 }
	__asm { L_0048ac85: }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { test eax, eax }
	__asm { je L_0048ac9f }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx + eax - 8], ebx }
	__asm { mov dword ptr [ecx + eax - 4], edx }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { jmp L_0048aca9 }
	__asm { L_0048ac9f: }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { L_0048aca9: }
	__asm { test edi, edi }
	__asm { je L_0048acb1 }
	__asm { mov dword ptr [edi], esi }
	__asm { jmp L_0048acb3 }
	__asm { L_0048acb1: }
	__asm { mov dword ptr [eax], esi }
	__asm { L_0048acb3: }
	__asm { push dword ptr [esp + 0x14] }
	__asm { call dword ptr [g_00e104f4] }
	__asm { mov edx, dword ptr [esp + 0x30] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [esp + 0xf], 1 }
	__asm { L_0048acc9: }
	__asm { mov dword ptr [esp + 0x10], edx }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { mov edx, ebx }
	__asm { test ebx, ebx }
	__asm { jne L_0048ac01 }
	__asm { L_0048acdb: }
	__asm { mov ebx, dword ptr [esp + 0x1c] }
	__asm { L_0048acdf: }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { mov al, byte ptr [esp + 0xf] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0x10], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [g_0131b6d0], 0 }
	__asm { call fn_0048b370 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { lea ecx, [esi + 8] }
	__asm { call L_0048aba0 }
	__asm { mov bl, al }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0048ad40 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0048ad40 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_0048ad40 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0048ad40: }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_0131b6d0[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048b370();
// FUNCTION: ROBLOXSTUDIO 0x0048b3e0
extern "C" __declspec(naked) void asm_0048b3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_0048b370 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0048b429 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0048b429 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_0048b429 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0048b429: }
	__asm { add dword ptr [g_0131b6d0], 0x18 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040fb10();
// FUNCTION: ROBLOXSTUDIO 0x0048b5a0
extern "C" __declspec(naked) void asm_0048b5a0()
{
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0048b5cd }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0048b5cd }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0048b5cd }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0048b5cd: }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_0131b6d8[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048b510();
// FUNCTION: ROBLOXSTUDIO 0x0048b5f0
extern "C" __declspec(naked) void asm_0048b5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_0048b510 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0048b639 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0048b639 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_0048b639 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0048b639: }
	__asm { add dword ptr [g_0131b6d8], 0x28 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}
