// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00c50140();
// FUNCTION: ROBLOXSTUDIO 0x00c4e7d0
extern "C" __declspec(naked) void asm_00c4e7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00c4e808 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00c4e808: }
	__asm { push 0xc50300 }
	__asm { push 0x1312128 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c50140 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00c4e844 }
	__asm { push ebx }
	__asm { jmp L_00c4e848 }
	__asm { L_00c4e844: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00c4e848: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00c4e88a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c4e88a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c4e88a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c4e88a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c4e88a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c4e8cd }
	__asm { add esi, 5 }
	__asm { je L_00c4e89f }
	__asm { add esi, -5 }
	__asm { jmp L_00c4e8a1 }
	__asm { L_00c4e89f: }
	__asm { xor esi, esi }
	__asm { L_00c4e8a1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c4e8cd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c4e8cd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c4e8cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9800();
extern "C" void fn_00c35eb0();
// FUNCTION: ROBLOXSTUDIO 0x00c4e8f0
extern "C" __declspec(naked) void asm_00c4e8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ec30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_00c4e928 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_00c4e928: }
	__asm { push 0xc36270 }
	__asm { push 0x1310d38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c35eb0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_00c4e964 }
	__asm { push ebx }
	__asm { jmp L_00c4e968 }
	__asm { L_00c4e964: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_00c4e968: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_00c4e9aa }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c4e9aa }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c4e9aa }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c4e9aa }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c4e9aa: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c4e9ed }
	__asm { add esi, 5 }
	__asm { je L_00c4e9bf }
	__asm { add esi, -5 }
	__asm { jmp L_00c4e9c1 }
	__asm { L_00c4e9bf: }
	__asm { xor esi, esi }
	__asm { L_00c4e9c1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c4e9ed }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c4e9ed }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c4e9ed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e100fc[];
extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e13084[];
extern "C" char g_00e13088[];
extern "C" char g_00e1308c[];
extern "C" char g_00e13190[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_0045be50();
extern "C" void fn_0067dca0();
extern "C" void fn_0083add0();
// FUNCTION: ROBLOXSTUDIO 0x00c54060
extern "C" __declspec(naked) void asm_00c54060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65138 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xef2758 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e1308c] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_0045be50 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00c541d8 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { L_00c540b4: }
	__asm { push 1 }
	__asm { call dword ptr [g_00e13088] }
	__asm { shl eax, 0xa }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [esi + 0xc88] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc90] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0083add0 }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00c54153 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c54153 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c54153 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c54153 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00c5414c }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00c5414a }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00c5414c }
	__asm { L_00c5414a: }
	__asm { mov esi, edx }
	__asm { L_00c5414c: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c54153: }
	__asm { sub esp, 0x20 }
	__asm { mov esi, esp }
	__asm { call dword ptr [g_00e100fc] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [esi + 0x18] }
	__asm { push 0x67e460 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 8], 0x5dc }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov byte ptr [esi + 0x10], 1 }
	__asm { call fn_0067dca0 }
	__asm { add esp, 8 }
	__asm { push -1 }
	__asm { call dword ptr [g_00e13190] }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { add esp, 0x24 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c541bd }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00c541bd }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00c541bd }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c541bd: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_0045be50 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { jne L_00c540b4 }
	__asm { L_00c541d8: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c54207 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00c54207 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00c54207 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c54207: }
	__asm { call dword ptr [g_00e13084] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00c5422a }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00c5422a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c5422a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c587b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c58720
extern "C" __declspec(naked) void asm_00c58720()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x4c], 0x10 }
	__asm { jb L_00c58734 }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c58734: }
	__asm { mov dword ptr [esi + 0x4c], 0xf }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov byte ptr [esi + 0x38], 0 }
	__asm { cmp dword ptr [esi + 0x34], 0x10 }
	__asm { jb L_00c58757 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c58757: }
	__asm { mov dword ptr [esi + 0x34], 0xf }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00c5878e }
	__asm { test al, 1 }
	__asm { jne L_00c58788 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c58788 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c58788: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00c5878e: }
	__asm { pop esi }
	__asm { ret }
	__asm { add ecx, 8 }
	__asm { jmp fn_00c587b0 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp fn_00c587b0 }
}
