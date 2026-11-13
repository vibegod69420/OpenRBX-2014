// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00c6a390();
// FUNCTION: ROBLOXSTUDIO 0x00c6a690
extern "C" __declspec(naked) void asm_00c6a690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, 0x208 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0x210 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6a390 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { fld qword ptr [eax + 0x40] }
	__asm { fst qword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_00c6a724 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c6a724 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c6a724 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c6a724 }
	__asm { fstp st(0) }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { fld qword ptr [ebp - 0x1c] }
	__asm { L_00c6a724: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
// FUNCTION: ROBLOXSTUDIO 0x00c6a740
extern "C" __declspec(naked) void asm_00c6a740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, 0x208 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0040edb0 }
	__asm { cmp byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { fld qword ptr [eax + 0x258] }
	__asm { fst qword ptr [ebp - 0x10] }
	__asm { je L_00c6a7a5 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c6a7a5 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c6a7a5 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c6a7a5 }
	__asm { fstp st(0) }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { fld qword ptr [ebp - 0x10] }
	__asm { L_00c6a7a5: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_00c6a390();
// FUNCTION: ROBLOXSTUDIO 0x00c6a7b0
extern "C" __declspec(naked) void asm_00c6a7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, 0x208 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0x210 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6a390 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { fld qword ptr [eax + 0x70] }
	__asm { fst qword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_00c6a844 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c6a844 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c6a844 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c6a844 }
	__asm { fstp st(0) }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { fld qword ptr [ebp - 0x1c] }
	__asm { L_00c6a844: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10198[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_006b9740();
extern "C" void fn_00b2deb0();
extern "C" void fn_00c69020();
extern "C" void fn_00c69780();
extern "C" void fn_00c698e0();
extern "C" void fn_00c6a040();
extern "C" void fn_00c6a4c0();
extern "C" void fn_00c6be90();
// FUNCTION: ROBLOXSTUDIO 0x00c6aa40
extern "C" __declspec(naked) void asm_00c6aa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd66efb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00c6aab3 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { cmp dword ptr [eax + 0xcc0], 0 }
	__asm { jne L_00c6aab3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c6aa9e }
	__asm { push 0xb8 }
	__asm { push 0xef5940 }
	__asm { push 0xef5a10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c6aab3 }
	__asm { L_00c6aa9e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xef5a30 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c6aab3: }
	__asm { lea ecx, [ebp - 0x398] }
	__asm { call fn_00c698e0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1e8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1e4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x1e0], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x1dc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x1d8], ecx }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1d0] }
	__asm { call fn_00c69780 }
	__asm { lea ecx, [ebp - 0x398] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00c6a040 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp - 0x1e8] }
	__asm { push eax }
	__asm { call fn_00c6be90 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, 0x208 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp - 0x1e8] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1e8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { add ecx, 0x210 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00c69020 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0x228 }
	__asm { call fn_00c6a4c0 }
	__asm { lea ecx, [eax + 0x18] }
	__asm { call fn_00b2deb0 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { pop esi }
	__asm { je L_00c6abac }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c6abac }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c6abac }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c6abac }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c6abac: }
	__asm { lea ecx, [ebp - 0x1d0] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00c6a040 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00c6abe2 }
	__asm { test al, 1 }
	__asm { jne L_00c6abe2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00c6abe2 }
	__asm { lea ecx, [ebp + 0x24] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00c6abe2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_00c69560();
extern "C" void fn_00c6b390();
// FUNCTION: ROBLOXSTUDIO 0x00c6b2e0
extern "C" __declspec(naked) void asm_00c6b2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd66f20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { call fn_00c69560 }
	__asm { lea esi, [edi + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00c6b390 }
	__asm { test esi, esi }
	__asm { je L_00c6b33a }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00c6b33a: }
	__asm { mov esi, dword ptr [ebp - 0x48] }
	__asm { fld qword ptr [ebp - 0x1c] }
	__asm { fstp qword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c6b374 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00c6b374 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00c6b374 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c6b374: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}
