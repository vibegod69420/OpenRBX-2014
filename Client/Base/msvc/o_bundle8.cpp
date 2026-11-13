// Bundled inline-assembly functions (merged from asmify12).

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_0130edcc[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_008a3d90();
// FUNCTION: ROBLOXSTUDIO 0x00b60820
extern "C" __declspec(naked) void asm_00b60820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_008a3d90 }
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
	__asm { jne L_00b60869 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b60869 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00b60869 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b60869: }
	__asm { add dword ptr [g_0130edcc], 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_008a3d90();
// FUNCTION: ROBLOXSTUDIO 0x00b65350
extern "C" __declspec(naked) void asm_00b65350()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_008a3d90 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00b6536e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00b65378 }
	__asm { L_00b6536e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00b65378: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b653a4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b653a4 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00b653a4 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b653a4: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00b65c20();
// FUNCTION: ROBLOXSTUDIO 0x00b65760
extern "C" __declspec(naked) void asm_00b65760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00b657ff }
	__asm { push 0xb65cb0 }
	__asm { push 0x130edf0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00b65c20 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b657c5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00b657c5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00b657ff }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b657ff }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b657ff }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b657ff }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b657ff: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_0041ed20();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_008c6620();
// FUNCTION: ROBLOXSTUDIO 0x00b65810
extern "C" __declspec(naked) void asm_00b65810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d548 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00b65878 }
	__asm { test ebx, ebx }
	__asm { jne L_00b65878 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b65867 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b65878 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b65867: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b65878: }
	__asm { push 0x8c6870 }
	__asm { push 0x12fcf98 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008c6620 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00b658b8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00b6596d }
	__asm { L_00b658b8: }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0040fcb0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00b65927 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00b65927 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b65916 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b65927 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00b65916: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b65927: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b6593f }
	__asm { add esi, -5 }
	__asm { jmp L_00b65941 }
	__asm { L_00b6593f: }
	__asm { xor esi, esi }
	__asm { L_00b65941: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b6596d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00b6596d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00b6596d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00b659aa }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b659aa }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b659aa }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b659aa }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b659aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_0130ee40[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00b6a500();
// FUNCTION: ROBLOXSTUDIO 0x00b68760
extern "C" __declspec(naked) void asm_00b68760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00b6a500 }
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
	__asm { jne L_00b687a9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b687a9 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00b687a9 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b687a9: }
	__asm { add dword ptr [g_0130ee40], 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_0130ee44[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00b6a570();
// FUNCTION: ROBLOXSTUDIO 0x00b687c0
extern "C" __declspec(naked) void asm_00b687c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00b6a570 }
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
	__asm { jne L_00b68809 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b68809 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00b68809 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b68809: }
	__asm { add dword ptr [g_0130ee44], 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_00b6a500();
// FUNCTION: ROBLOXSTUDIO 0x00b6ae60
extern "C" __declspec(naked) void asm_00b6ae60()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b6a500 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00b6ae7e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00b6ae88 }
	__asm { L_00b6ae7e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00b6ae88: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b6aeb4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b6aeb4 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00b6aeb4 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b6aeb4: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_00b6a570();
// FUNCTION: ROBLOXSTUDIO 0x00b6aec0
extern "C" __declspec(naked) void asm_00b6aec0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b6a570 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00b6aede }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00b6aee8 }
	__asm { L_00b6aede: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00b6aee8: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b6af14 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b6af14 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00b6af14 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b6af14: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00a35440();
extern "C" void fn_00a35480();
extern "C" void fn_00a35650();
extern "C" void fn_00a356d0();
extern "C" void fn_00a356f0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a35fd0();
extern "C" void fn_00a360d0();
extern "C" void fn_00a38960();
// FUNCTION: ROBLOXSTUDIO 0x00b6f2c0
extern "C" __declspec(naked) void asm_00b6f2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { fldz }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { fstp qword ptr [ebp - 8] }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38960 }
	__asm { push esi }
	__asm { call fn_00a356d0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35440 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { je L_00b6f334 }
	__asm { mov edi, edi }
	__asm { L_00b6f2f0: }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 3 }
	__asm { jne L_00b6f325 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35fd0 }
	__asm { fld qword ptr [ebp - 8] }
	__asm { fxch st(1) }
	__asm { add esp, 8 }
	__asm { fcomi st(0), st(1) }
	__asm { fstp st(1) }
	__asm { jbe L_00b6f323 }
	__asm { fstp qword ptr [ebp - 8] }
	__asm { jmp L_00b6f325 }
	__asm { L_00b6f323: }
	__asm { fstp st(0) }
	__asm { L_00b6f325: }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35440 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00b6f2f0 }
	__asm { L_00b6f334: }
	__asm { fld qword ptr [ebp - 8] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push esi }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a38960 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00a35480 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a35650 }
	__asm { add esp, 0x1c }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35150();
extern "C" void fn_00a356f0();
extern "C" void fn_00a38810();
// FUNCTION: ROBLOXSTUDIO 0x00b71cc0
extern "C" __declspec(naked) void asm_00b71cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00a35150 }
	__asm { push 1 }
	__asm { push ebx }
	__asm { mov edi, eax }
	__asm { call fn_00a38810 }
	__asm { fst qword ptr [ebp - 8] }
	__asm { mov esi, 2 }
	__asm { add esp, 0xc }
	__asm { cmp edi, esi }
	__asm { jl L_00b71d11 }
	__asm { L_00b71ceb: }
	__asm { push esi }
	__asm { fstp st(0) }
	__asm { push ebx }
	__asm { call fn_00a38810 }
	__asm { fld qword ptr [ebp - 8] }
	__asm { fxch st(1) }
	__asm { add esp, 8 }
	__asm { fcomi st(0), st(1) }
	__asm { fstp st(1) }
	__asm { jbe L_00b71d07 }
	__asm { fst qword ptr [ebp - 8] }
	__asm { jmp L_00b71d0c }
	__asm { L_00b71d07: }
	__asm { fstp st(0) }
	__asm { fld qword ptr [ebp - 8] }
	__asm { L_00b71d0c: }
	__asm { inc esi }
	__asm { cmp esi, edi }
	__asm { jle L_00b71ceb }
	__asm { L_00b71d11: }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push ebx }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ef6a[];
extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_00513a40();
extern "C" void fn_006bc950();
extern "C" void fn_006bdc50();
extern "C" void fn_006c0e30();
extern "C" void fn_006c54a0();
extern "C" void fn_008e58b0();
extern "C" void fn_00adee70();
extern "C" void fn_00b85900();
extern "C" void fn_00b85a30();
extern "C" void fn_00b85de0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b86440
extern "C" __declspec(naked) void asm_00b86440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b16e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x68 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_00b8649a }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_00b86480 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00b86480: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { js L_00b8649a }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea esi, [ebp - 0x10] }
	__asm { jmp L_00b864a2 }
	__asm { L_00b8649a: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea esi, [ebp - 0x14] }
	__asm { L_00b864a2: }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_00b864e8 }
	__asm { mov edi, dword ptr [esi + 0x28] }
	__asm { mov ecx, edi }
	__asm { call fn_006c0e30 }
	__asm { lea eax, [edi + 0x804] }
	__asm { push eax }
	__asm { call fn_006bc950 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00b8677c }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { push 1 }
	__asm { call fn_008e58b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b864e8: }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov dword ptr [ebp - 0x48], 0 }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { push 0x820 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00b8652c }
	__asm { mov ecx, eax }
	__asm { call fn_006bdc50 }
	__asm { jmp L_00b8652e }
	__asm { L_00b8652c: }
	__asm { xor eax, eax }
	__asm { L_00b8652e: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b85900 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov edi, dword ptr [ebp - 0x48] }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov dword ptr [ebp - 0x4c], edx }
	__asm { mov dword ptr [ebp - 0x48], ecx }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { test edi, edi }
	__asm { je L_00b8658e }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00b8658e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00b8658e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00b8658e: }
	__asm { mov edi, dword ptr [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00b865bd }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00b865bd }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00b865bd }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00b865bd: }
	__asm { push 0x818 }
	__asm { call fn_00cf661e }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test ebx, ebx }
	__asm { je L_00b8660f }
	__asm { lea ecx, [ebx + 0x808] }
	__asm { mov dword ptr [ebx + 0x800], 0xffffffff }
	__asm { push ecx }
	__asm { mov dword ptr [ebx + 0x804], 0 }
	__asm { call fn_006c54a0 }
	__asm { fldz }
	__asm { add esp, 4 }
	__asm { fstp qword ptr [ebx + 0x810] }
	__asm { mov ecx, 0x200 }
	__asm { xor eax, eax }
	__asm { mov edi, ebx }
	__asm { rep stosd }
	__asm { jmp L_00b86611 }
	__asm { L_00b8660f: }
	__asm { xor ebx, ebx }
	__asm { L_00b86611: }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b85a30 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov edi, dword ptr [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0x44], ecx }
	__asm { mov dword ptr [ebp - 0x40], edx }
	__asm { test edi, edi }
	__asm { je L_00b86665 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00b86665 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00b86665 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00b86665: }
	__asm { mov edi, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00b86693 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00b86693 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00b86693 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00b86693: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x74] }
	__asm { mov dword ptr [ebp - 0x60], 0xf }
	__asm { mov dword ptr [ebp - 0x64], 0 }
	__asm { mov byte ptr [ebp - 0x74], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov eax, dword ptr [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_00b866d2 }
	__asm { add eax, 4 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00b866d2: }
	__asm { mov eax, dword ptr [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { test eax, eax }
	__asm { je L_00b866ea }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_00b866ea: }
	__asm { movzx eax, byte ptr [g_0130ef6a] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x74] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00b85de0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov bl, byte ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_00adee70 }
	__asm { cmp dword ptr [ebp - 0x60], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_00b8672e }
	__asm { push dword ptr [ebp - 0x74] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b8672e: }
	__asm { mov dword ptr [ebp - 0x60], 0xf }
	__asm { mov dword ptr [ebp - 0x64], 0 }
	__asm { mov byte ptr [ebp - 0x74], 0 }
	__asm { test bl, bl }
	__asm { je L_00b8676d }
	__asm { mov edi, dword ptr [esi + 0x28] }
	__asm { mov ecx, edi }
	__asm { call fn_006c0e30 }
	__asm { lea eax, [edi + 0x804] }
	__asm { push eax }
	__asm { call fn_006bc950 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00b8676d }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { push 1 }
	__asm { call fn_008e58b0 }
	__asm { L_00b8676d: }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00adee70 }
	__asm { L_00b8677c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00b868b0
extern "C" __declspec(naked) void asm_00b868b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { add dword ptr [esi + 0x18], eax }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { adc dword ptr [esi + 0x1c], edx }
	__asm { mov edx, dword ptr [esi + 0x30] }
	__asm { lea ebx, [edi + ecx] }
	__asm { lea eax, [edx + ecx] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { cmp eax, 0x10 }
	__asm { jge L_00b868f9 }
	__asm { push ecx }
	__asm { lea eax, [esi + 0x20] }
	__asm { add eax, edx }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add dword ptr [esi + 0x30], eax }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b868f9: }
	__asm { test edx, edx }
	__asm { je L_00b8698d }
	__asm { mov eax, 0x10 }
	__asm { sub eax, edx }
	__asm { push eax }
	__asm { lea eax, [esi + 0x20] }
	__asm { add eax, edx }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { imul eax, eax, 0x7a143589 }
	__asm { sub ecx, eax }
	__asm { rol ecx, 0xd }
	__asm { imul ecx, ecx, 0x9e3779b1 }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { imul eax, eax, 0x7a143589 }
	__asm { sub ecx, eax }
	__asm { rol ecx, 0xd }
	__asm { imul ecx, ecx, 0x9e3779b1 }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { imul eax, eax, 0x7a143589 }
	__asm { sub ecx, eax }
	__asm { rol ecx, 0xd }
	__asm { imul ecx, ecx, 0x9e3779b1 }
	__asm { sub edi, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { imul eax, eax, 0x7a143589 }
	__asm { sub ecx, eax }
	__asm { rol ecx, 0xd }
	__asm { imul ecx, ecx, 0x9e3779b1 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { add edi, 0x10 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { L_00b8698d: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { lea eax, [ebx - 0x10] }
	__asm { mov ebx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { ja L_00b86a06 }
	__asm { mov esi, eax }
	__asm { L_00b869a6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { imul eax, eax, 0x7a143589 }
	__asm { sub ecx, eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { imul eax, eax, 0x7a143589 }
	__asm { rol ecx, 0xd }
	__asm { sub edx, eax }
	__asm { imul ecx, ecx, 0x9e3779b1 }
	__asm { rol edx, 0xd }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { imul edx, edx, 0x9e3779b1 }
	__asm { imul eax, eax, 0x7a143589 }
	__asm { sub ebx, eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { imul eax, eax, 0x7a143589 }
	__asm { rol ebx, 0xd }
	__asm { sub esi, eax }
	__asm { imul ebx, ebx, 0x9e3779b1 }
	__asm { rol esi, 0xd }
	__asm { add edi, 0x10 }
	__asm { imul esi, esi, 0x9e3779b1 }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { jbe L_00b869a6 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { L_00b86a06: }
	__asm { mov dword ptr [esi + 0xc], ebx }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { cmp edi, ebx }
	__asm { jae L_00b86a2c }
	__asm { sub ebx, edi }
	__asm { push ebx }
	__asm { lea eax, [esi + 0x20] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov dword ptr [esi + 0x30], ebx }
	__asm { add esp, 0xc }
	__asm { L_00b86a2c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e10338[];
extern "C" char g_00e1033c[];
extern "C" void fn_0040fb10();
extern "C" void fn_0042d490();
extern "C" void fn_00b89ee0();
extern "C" void fn_00b89f40();
extern "C" void fn_00b8be30();
extern "C" void fn_00ba53c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b88d60
extern "C" __declspec(naked) void asm_00b88d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b4fb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xed37cc }
	__asm { lea eax, [edi + 0x7c] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xa }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { call fn_0042d490 }
	__asm { lea ecx, [edi + 0x8c] }
	__asm { call fn_00b89f40 }
	__asm { cmp byte ptr [ebp - 0x14], 0 }
	__asm { je L_00b88dee }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { dec dword ptr [edx] }
	__asm { jne L_00b88dee }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edx + 4] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { lea ecx, [edx + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b88dee }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b88dee }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b88dee }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b88dee: }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_00b8be30 }
	__asm { mov eax, dword ptr [edi + 0xd8] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { test eax, eax }
	__asm { je L_00b88e2b }
	__asm { test al, 1 }
	__asm { jne L_00b88e21 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [edi + 0xe0] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b88e21 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b88e21: }
	__asm { mov dword ptr [edi + 0xd8], 0 }
	__asm { L_00b88e2b: }
	__asm { lea ecx, [edi + 0xb0] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00ba53c0 }
	__asm { lea ecx, [edi + 0xb0] }
	__asm { call dword ptr [g_00e10338] }
	__asm { push dword ptr [edi + 0xb0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0xb0] }
	__asm { mov dword ptr [edi + 0xb0], 0 }
	__asm { call dword ptr [g_00e1033c] }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edi + 0xac] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { mov ebx, dword ptr [g_00e10194] }
	__asm { test ecx, ecx }
	__asm { je L_00b88e81 }
	__asm { push ecx }
	__asm { call ebx }
	__asm { L_00b88e81: }
	__asm { mov ecx, dword ptr [edi + 0x9c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test ecx, ecx }
	__asm { je L_00b88e95 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00b88e95: }
	__asm { lea ecx, [edi + 0x94] }
	__asm { call fn_00b89ee0 }
	__asm { push dword ptr [edi + 0x94] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x8c] }
	__asm { call fn_00b89f40 }
	__asm { push dword ptr [edi + 0x8c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edi + 0x88] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00b88ed8 }
	__asm { push ecx }
	__asm { call ebx }
	__asm { L_00b88ed8: }
	__asm { mov ebx, dword ptr [edi + 0x4c] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ebx, ebx }
	__asm { je L_00b88f0a }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00b88f0a }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00b88f0a }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00b88f0a: }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ebx, ebx }
	__asm { je L_00b88f39 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00b88f39 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00b88f39 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00b88f39: }
	__asm { mov ebx, dword ptr [edi + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00b88f68 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00b88f68 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00b88f68 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00b88f68: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00b88f85 }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00b88f85 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00b88f85: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_01038138[];
extern "C" void fn_0040fb10();
extern "C" void fn_0042d490();
extern "C" void fn_00b8bac0();
// FUNCTION: ROBLOXSTUDIO 0x00b897f0
extern "C" __declspec(naked) void asm_00b897f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5b588 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea eax, [esi + 0xa0] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0042d490 }
	__asm { fld qword ptr [esi + 0xc8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fadd qword ptr [g_01038138] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { fstp qword ptr [ebp - 0x24] }
	__asm { lea ecx, [esi + 0xb0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b8bac0 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_00b89897 }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { dec dword ptr [edx] }
	__asm { jne L_00b89897 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edx + 4] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { lea ecx, [edx + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b89897 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b89897 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b89897 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b89897: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" char g_00e10260[];
extern "C" char g_0130ef6e[];
extern "C" void fn_004033d0();
extern "C" void fn_00403540();
extern "C" void fn_0040fb10();
extern "C" void fn_00422570();
extern "C" void fn_0042d490();
extern "C" void fn_006c58f0();
extern "C" void fn_00a1cc00();
extern "C" void fn_00b86fe0();
extern "C" void fn_00b87300();
extern "C" void fn_00b873f0();
extern "C" void fn_00b87d60();
extern "C" void fn_00b88150();
extern "C" void fn_00b889d0();
extern "C" void fn_00b88fa0();
extern "C" void fn_00b8a030();
extern "C" void fn_00b8bb50();
// FUNCTION: ROBLOXSTUDIO 0x00b89922
extern "C" __declspec(naked) void asm_00b89922()
{
	__asm { push 2 }
	__asm { push dword ptr [ebx + 0xd0] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push edx }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00b8a030 }
	__asm { add esp, 0x34 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { lea eax, [ebx + 0x7c] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { call fn_0042d490 }
	__asm { mov eax, dword ptr [ebx + 0x8c] }
	__asm { add ebx, 0x8c }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b873f0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { cmp esi, eax }
	__asm { jne L_00b89b06 }
	__asm { fldz }
	__asm { mov dword ptr [ebp - 0x44], 0xf }
	__asm { fstp qword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x48], 0 }
	__asm { mov byte ptr [ebp - 0x58], 0 }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { push ecx }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, ebx }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b87300 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov ecx, 0x3fffffe }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00b89a14 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00b89a14: }
	__asm { inc eax }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { call fn_00b88fa0 }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { lea ebx, [esi + 8] }
	__asm { cmp ebx, edi }
	__asm { je L_00b89a47 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00403540 }
	__asm { L_00b89a47: }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { movss dword ptr [esi + 0x2c], xmm0 }
	__asm { call fn_006c58f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebx + 0x30], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebx + 0x34], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b89ab6 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_00b889d0 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b8bb50 }
	__asm { mov eax, dword ptr [ebp - 0x48] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b89ab6 }
	__asm { test al, 1 }
	__asm { jne L_00b89ab6 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b89ab6 }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b89ab6: }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { movzx eax, byte ptr [g_0130ef6e] }
	__asm { sub esp, 0x24 }
	__asm { mov ebx, esp }
	__asm { fstp dword ptr [esp + 0x20] }
	__asm { push 0 }
	__asm { sub esp, 0x10 }
	__asm { mov edi, esp }
	__asm { push eax }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00b88150 }
	__asm { add esp, 8 }
	__asm { push 0xb8adc0 }
	__asm { push edi }
	__asm { call fn_00b87d60 }
	__asm { add esp, 0x18 }
	__asm { mov ecx, ebx }
	__asm { call fn_00b86fe0 }
	__asm { mov ecx, dword ptr [esi + 0x9c] }
	__asm { call fn_00a1cc00 }
	__asm { jmp L_00b89b54 }
	__asm { L_00b89b06: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00b89b54 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_00b889d0 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00b8bb50 }
	__asm { mov eax, dword ptr [ebp - 0x48] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b89b54 }
	__asm { test al, 1 }
	__asm { jne L_00b89b54 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00b89b54 }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00b89b54: }
	__asm { cmp byte ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00b89b9c }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { dec dword ptr [edx] }
	__asm { jne L_00b89b9c }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edx + 4] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { lea ecx, [edx + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b89b9c }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b89b9c }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b89b9c }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b89b9c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040fb10();
extern "C" void fn_0042d490();
// FUNCTION: ROBLOXSTUDIO 0x00b8a400
extern "C" __declspec(naked) void asm_00b8a400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { lea eax, [esi + 0x7c] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0042d490 }
	__asm { cmp byte ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [esi + 0x90] }
	__asm { je L_00b8a462 }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { dec dword ptr [edx] }
	__asm { jne L_00b8a462 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edx + 4] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { lea ecx, [edx + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b8a462 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b8a462 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b8a462 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b8a462: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040fb10();
extern "C" void fn_0042d490();
// FUNCTION: ROBLOXSTUDIO 0x00b8a560
extern "C" __declspec(naked) void asm_00b8a560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { lea eax, [esi + 0x7c] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_0042d490 }
	__asm { cmp dword ptr [esi + 0x90], 0 }
	__asm { sete bl }
	__asm { cmp byte ptr [ebp - 4], 0 }
	__asm { je L_00b8a5c7 }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { dec dword ptr [edx] }
	__asm { jne L_00b8a5c7 }
	__asm { xor ecx, ecx }
	__asm { lea eax, [edx + 4] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { lea ecx, [edx + 8] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b8a5c7 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b8a5c7 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b8a5c7 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b8a5c7: }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c8a0();
extern "C" void fn_00c04b70();
extern "C" void fn_00c04c70();
// FUNCTION: ROBLOXSTUDIO 0x00b8c750
extern "C" __declspec(naked) void asm_00b8c750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { call dword ptr [eax + 8] }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, eax }
	__asm { je L_00b8c877 }
	__asm { mov edx, dword ptr [edi] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { cmp eax, ebx }
	__asm { je L_00b8c7af }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c79a }
	__asm { push 0x33 }
	__asm { push 0xed42a4 }
	__asm { push 0xed438c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c7af }
	__asm { L_00b8c79a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed43b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c7af: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8c877 }
	__asm { test esi, esi }
	__asm { jne L_00b8c7f3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c7de }
	__asm { push 0x34 }
	__asm { push 0xed42a4 }
	__asm { push 0xe553b4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c7f3 }
	__asm { L_00b8c7de: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed4428 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c7f3: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8c877 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00b8c835 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c820 }
	__asm { push 0x35 }
	__asm { push 0xed42a4 }
	__asm { push 0xed447c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c835 }
	__asm { L_00b8c820: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed4490 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c835: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b8c877 }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { je L_00b8c877 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b8c862 }
	__asm { push 0x36 }
	__asm { push 0xed42a4 }
	__asm { push 0xed44f4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8c877 }
	__asm { L_00b8c862: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed4510 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b8c877: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00c04c70 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00c04b70 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp fn_00b8c8a0 }
}

extern "C" char g_0130ef80[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x00b8d0f0
extern "C" __declspec(naked) void asm_00b8d0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [esi + 0x20], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 4], 0xffffffff }
	__asm { mov dword ptr [esi + 8], 0xffffffff }
	__asm { mov dword ptr [esi + 0xc], 0xffffffff }
	__asm { mov dword ptr [esi + 0x10], 0xffffffff }
	__asm { mov dword ptr [esi + 0x14], 0xffffffff }
	__asm { mov dword ptr [esi], 0xed4a9c }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { movss dword ptr [esi + 0x24], xmm0 }
	__asm { mov byte ptr [esi + 0x28], 0 }
	__asm { cmp byte ptr [g_0130ef80], 0 }
	__asm { jne L_00b8d17d }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 8], 0x130ef7c }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 8], 0xb8de60 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130ef80], 1 }
	__asm { L_00b8d17d: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [esi], 0xed4ac0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10198[];
extern "C" char g_0130ef7c[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0055a540();
// FUNCTION: ROBLOXSTUDIO 0x00b8d190
extern "C" __declspec(naked) void asm_00b8d190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_0055a540 }
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
	__asm { jne L_00b8d1d9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b8d1d9 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00b8d1d9 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b8d1d9: }
	__asm { add dword ptr [g_0130ef7c], 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038074[];
extern "C" char g_01038080[];
extern "C" void fn_00626760();
extern "C" void fn_00629b70();
extern "C" void fn_0099c980();
extern "C" void fn_0099caa0();
extern "C" void fn_0099cb40();
extern "C" void fn_009f54a0();
extern "C" void fn_00a1cfa0();
extern "C" void fn_00a1d7d0();
extern "C" void fn_00a1dee0();
extern "C" void fn_00a1df30();
extern "C" void fn_00a1e1e0();
extern "C" void fn_00af0e80();
extern "C" void fn_00b8cfb0();
extern "C" void fn_00b8d1f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b8d2a0
extern "C" __declspec(naked) void asm_00b8d2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5c72b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x330 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + ebx*4 + 0x120], 1 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { je L_00b8d2e5 }
	__asm { cmp dword ptr [edi + eax*4 + 0x120], 1 }
	__asm { jne L_00b8d5f9 }
	__asm { L_00b8d2e5: }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00af0e80 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_00b8d5f9 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x1bc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0099cb40 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x18c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0099cb40 }
	__asm { lea eax, [ebp - 0x18c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2ac] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1bc] }
	__asm { call fn_00a1d7d0 }
	__asm { lea eax, [ebp - 0x1bc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18c] }
	__asm { call fn_00a1d7d0 }
	__asm { mov ecx, esi }
	__asm { call fn_0099c980 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2ac] }
	__asm { call fn_00a1df30 }
	__asm { mov ecx, edi }
	__asm { call fn_0099c980 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24c] }
	__asm { call fn_00a1df30 }
	__asm { mov eax, dword ptr [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0xcc], eax }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0xc8], eax }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0xc4], eax }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0xc0], eax }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0xbc], eax }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0xb8], eax }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0xb4], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0xb0], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0xac], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0xa8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0xa4], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0xa0], eax }
	__asm { mov eax, dword ptr [ebp - 0x6c] }
	__asm { mov dword ptr [ebp - 0x9c], eax }
	__asm { mov eax, dword ptr [ebp - 0x68] }
	__asm { mov dword ptr [ebp - 0x98], eax }
	__asm { mov eax, dword ptr [ebp - 0x64] }
	__asm { mov dword ptr [ebp - 0x94], eax }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 0x90], eax }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ebp - 0x8c], eax }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 0x88], eax }
	__asm { mov eax, dword ptr [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 0x84], eax }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 0x80], eax }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 0x7c], eax }
	__asm { mov eax, dword ptr [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 0x78], eax }
	__asm { mov eax, dword ptr [ebp - 0x44] }
	__asm { fld dword ptr [g_01038080] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x74], eax }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { fstp dword ptr [esp] }
	__asm { lea ecx, [ebp - 0xcc] }
	__asm { mov dword ptr [ebp - 0x70], eax }
	__asm { call fn_00a1dee0 }
	__asm { fld dword ptr [g_01038080] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x9c] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00a1dee0 }
	__asm { mov ecx, esi }
	__asm { call fn_0099c980 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x12c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xcc] }
	__asm { call fn_00a1e1e0 }
	__asm { mov ecx, edi }
	__asm { call fn_0099c980 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xfc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x9c] }
	__asm { call fn_00a1e1e0 }
	__asm { fld dword ptr [g_01038074] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0xfc] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x12c] }
	__asm { push eax }
	__asm { call fn_00a1cfa0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b8d532 }
	__asm { mov ecx, esi }
	__asm { call fn_0099c980 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_00a1e1e0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x12c] }
	__asm { call fn_00b8d1f0 }
	__asm { mov ecx, edi }
	__asm { call fn_0099c980 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x33c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { call fn_00a1e1e0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xfc] }
	__asm { call fn_00b8d1f0 }
	__asm { fld dword ptr [g_01038074] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0xfc] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x12c] }
	__asm { push eax }
	__asm { call fn_00a1cfa0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00b8d5f9 }
	__asm { L_00b8d532: }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x15c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0099caa0 }
	__asm { lea eax, [ebp - 0x15c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2dc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0099c980 }
	__asm { mov ecx, eax }
	__asm { call fn_00626760 }
	__asm { lea eax, [ebp - 0x2dc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1ec] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0099c980 }
	__asm { mov ecx, eax }
	__asm { call fn_00629b70 }
	__asm { fld dword ptr [g_01038080] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x1ec] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x27c] }
	__asm { push eax }
	__asm { call fn_009f54a0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x15c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x21c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_00a1df30 }
	__asm { push 0xfc }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b8d5f9 }
	__asm { lea ecx, [ebp - 0x21c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x27c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x15c] }
	__asm { push ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00b8cfb0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00b8d5f9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_00640b30();
// FUNCTION: ROBLOXSTUDIO 0x00b9c3d0
extern "C" __declspec(naked) void asm_00b9c3d0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00640b30 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00b9c3ee }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00b9c3f8 }
	__asm { L_00b9c3ee: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00b9c3f8: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b9c424 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b9c424 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00b9c424 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b9c424: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_00640ba0();
// FUNCTION: ROBLOXSTUDIO 0x00b9c430
extern "C" __declspec(naked) void asm_00b9c430()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00640ba0 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00b9c44e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00b9c458 }
	__asm { L_00b9c44e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00b9c458: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b9c484 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b9c484 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00b9c484 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b9c484: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_00b9c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00b9c490
extern "C" __declspec(naked) void asm_00b9c490()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9c1b0 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00b9c4ae }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00b9c4b8 }
	__asm { L_00b9c4ae: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00b9c4b8: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b9c4e4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b9c4e4 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00b9c4e4 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b9c4e4: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00ba04c0();
// FUNCTION: ROBLOXSTUDIO 0x00b9ff10
extern "C" __declspec(naked) void asm_00b9ff10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00b9ffaf }
	__asm { push 0xba0550 }
	__asm { push 0x130f1b8 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00ba04c0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00b9ff75 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00b9ff75: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00b9ffaf }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b9ffaf }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b9ffaf }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00b9ffaf }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b9ffaf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403160();
extern "C" void fn_00bac9a0();
// FUNCTION: ROBLOXSTUDIO 0x00bac900
extern "C" __declspec(naked) void asm_00bac900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd619bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bac9a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00bac977 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bac976 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00bac976 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bac976: }
	__asm { pop ebx }
	__asm { L_00bac977: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00409af0();
extern "C" void fn_0040d6f0();
extern "C" void fn_00bacc70();
extern "C" void fn_00cc9b40();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00baca60
extern "C" __declspec(naked) void asm_00baca60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5cde0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00bacabb }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [eax] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00cc9b40 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00bacabb: }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { cmp esi, dword ptr [edi] }
	__asm { jne L_00bacafc }
	__asm { movss xmm0, dword ptr [esi + 0x10] }
	__asm { comiss xmm0, dword ptr [ebx] }
	__asm { jbe L_00bacc3c }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00cc9b40 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00bacafc: }
	__asm { movss xmm0, dword ptr [ebx] }
	__asm { cmp esi, edi }
	__asm { jne L_00bacb38 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { comiss xmm0, dword ptr [ecx + 0x10] }
	__asm { jbe L_00bacc3c }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00cc9b40 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00bacb38: }
	__asm { movss xmm1, dword ptr [esi + 0x10] }
	__asm { comiss xmm1, xmm0 }
	__asm { jbe L_00bacbb1 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { call fn_0040d6f0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { movss xmm0, dword ptr [ebx] }
	__asm { comiss xmm0, dword ptr [eax + 0x10] }
	__asm { jbe L_00bacbac }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push ebx }
	__asm { je L_00bacb8b }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cc9b40 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00bacb8b: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00cc9b40 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00bacbac: }
	__asm { movss xmm1, dword ptr [esi + 0x10] }
	__asm { L_00bacbb1: }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_00bacc3c }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { call fn_00409af0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, edi }
	__asm { je L_00bacbd6 }
	__asm { movss xmm0, dword ptr [eax + 0x10] }
	__asm { comiss xmm0, dword ptr [ebx] }
	__asm { jbe L_00bacc3c }
	__asm { L_00bacbd6: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push ebx }
	__asm { je L_00bacc07 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cc9b40 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00bacc07: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00cc9b40 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00bacc3c: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push ebx }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00bacc70 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10198[];
extern "C" char g_0130f210[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00bad790();
// FUNCTION: ROBLOXSTUDIO 0x00bace90
extern "C" __declspec(naked) void asm_00bace90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00bad790 }
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
	__asm { jne L_00baced9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00baced9 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00baced9 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00baced9: }
	__asm { add dword ptr [g_0130f210], 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380ac[];
extern "C" void fn_006d19c0();
// FUNCTION: ROBLOXSTUDIO 0x00bad0f0
extern "C" __declspec(naked) void asm_00bad0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { mulss xmm0, dword ptr [g_010380ac] }
	__asm { sub esp, 0x24 }
	__asm { mulss xmm0, dword ptr [ecx + 0x14] }
	__asm { mulss xmm0, dword ptr [ecx + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ebp + 0xc], xmm0 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fst dword ptr [esp + 0x20] }
	__asm { fldz }
	__asm { fst dword ptr [esp + 0x1c] }
	__asm { fst dword ptr [esp + 0x18] }
	__asm { fst dword ptr [esp + 0x14] }
	__asm { fxch st(1) }
	__asm { fst dword ptr [esp + 0x10] }
	__asm { fxch st(1) }
	__asm { fst dword ptr [esp + 0xc] }
	__asm { fst dword ptr [esp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_006d19c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_010385f0[];
extern "C" void fn_006d2c10();
// FUNCTION: ROBLOXSTUDIO 0x00bad150
extern "C" __declspec(naked) void asm_00bad150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x24 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push esi }
	__asm { push eax }
	__asm { xor esi, esi }
	__asm { call fn_006d2c10 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm6, dword ptr [ecx + 4] }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm5, dword ptr [ecx + 0xc] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss xmm4, dword ptr [ecx + 0x18] }
	__asm { mulss xmm6, xmm3 }
	__asm { mulss xmm5, xmm1 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { mulss xmm0, xmm2 }
	__asm { mulss xmm4, xmm1 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x10] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x14] }
	__asm { mulss xmm0, xmm2 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x1c] }
	__asm { mulss xmm0, xmm3 }
	__asm { comiss xmm5, xmm6 }
	__asm { addss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x20] }
	__asm { mulss xmm0, xmm2 }
	__asm { addss xmm4, xmm0 }
	__asm { movaps xmm0, xmm6 }
	__asm { jbe L_00bad1f0 }
	__asm { movaps xmm0, xmm5 }
	__asm { mov esi, 1 }
	__asm { L_00bad1f0: }
	__asm { comiss xmm4, xmm0 }
	__asm { jbe L_00bad1fd }
	__asm { movaps xmm0, xmm4 }
	__asm { mov esi, 2 }
	__asm { L_00bad1fd: }
	__asm { movss xmm1, dword ptr [g_010385f0] }
	__asm { xorps xmm6, xmm1 }
	__asm { comiss xmm6, xmm0 }
	__asm { jbe L_00bad215 }
	__asm { movaps xmm0, xmm6 }
	__asm { mov esi, 3 }
	__asm { L_00bad215: }
	__asm { xorps xmm5, xmm1 }
	__asm { comiss xmm5, xmm0 }
	__asm { jbe L_00bad225 }
	__asm { movaps xmm0, xmm5 }
	__asm { mov esi, 4 }
	__asm { L_00bad225: }
	__asm { xorps xmm4, xmm1 }
	__asm { comiss xmm4, xmm0 }
	__asm { mov eax, 5 }
	__asm { ja L_00bad234 }
	__asm { mov eax, esi }
	__asm { L_00bad234: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e3ca54[];
extern "C" void fn_006deac0();
extern "C" void fn_00898ee0();
extern "C" void fn_009d8f50();
// FUNCTION: ROBLOXSTUDIO 0x00bb6ee0
extern "C" __declspec(naked) void asm_00bb6ee0()
{
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { call fn_009d8f50 }
	__asm { test eax, eax }
	__asm { je L_00bb6ef5 }
	__asm { mov esi, dword ptr [eax + 0x104] }
	__asm { jmp L_00bb6ef7 }
	__asm { L_00bb6ef5: }
	__asm { xor esi, esi }
	__asm { L_00bb6ef7: }
	__asm { test esi, esi }
	__asm { je L_00bb6f42 }
	__asm { mov ecx, esi }
	__asm { call fn_00898ee0 }
	__asm { call fn_006deac0 }
	__asm { movss xmm1, dword ptr [esi + 0xb4] }
	__asm { movss xmm0, dword ptr [esi + 0xa8] }
	__asm { mulss xmm0, dword ptr [eax] }
	__asm { mulss xmm1, dword ptr [eax + 4] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0xc0] }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm1, xmm0 }
	__asm { comiss xmm1, dword ptr [g_00e3ca54] }
	__asm { ja L_00bb6f42 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00bb6f42: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e36278[];
extern "C" char g_00e362bc[];
extern "C" char g_00e66638[];
extern "C" char g_010385f0[];
extern "C" void fn_004033d0();
extern "C" void fn_006cefd0();
extern "C" void fn_006d1e60();
extern "C" void fn_00891b90();
extern "C" void fn_00892440();
extern "C" void fn_00961f00();
extern "C" void fn_0099d320();
extern "C" void fn_009d8ed0();
extern "C" void fn_009dd740();
extern "C" void fn_00b09350();
extern "C" void fn_00b152d0();
extern "C" void fn_00cda1a0();
// FUNCTION: ROBLOXSTUDIO 0x00bb74a0
extern "C" __declspec(naked) void asm_00bb74a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d4fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x98 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bb776d }
	__asm { call fn_009d8ed0 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { test eax, eax }
	__asm { je L_00bb776d }
	__asm { mov ecx, eax }
	__asm { call fn_00892440 }
	__asm { mov esi, eax }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d1e60 }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [g_010385f0] }
	__asm { push dword ptr [edi + 8] }
	__asm { xorps xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { xorps xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0x1c], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { xorps xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { call fn_00961f00 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { test eax, eax }
	__asm { je L_00bb776d }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov dword ptr [ebp - 0x48], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x54], 0 }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { lea ecx, [ebp - 0xa4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b09350 }
	__asm { movss xmm0, dword ptr [g_00e36278] }
	__asm { movss xmm1, dword ptr [ebp - 0x14] }
	__asm { movss xmm2, dword ptr [ebp - 0x1c] }
	__asm { movss xmm3, dword ptr [ebp - 0x10] }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mulss xmm1, xmm0 }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm3, xmm0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ebp - 0xa4], 1 }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { movss dword ptr [ebp - 0x1c], xmm2 }
	__asm { movss dword ptr [ebp - 0x10], xmm3 }
	__asm { movss dword ptr [ebp - 0x44], xmm1 }
	__asm { movss dword ptr [ebp - 0x40], xmm2 }
	__asm { movss dword ptr [ebp - 0x3c], xmm3 }
	__asm { call fn_0099d320 }
	__asm { movss xmm1, dword ptr [ebp - 0x34] }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mulss xmm0, dword ptr [g_00e362bc] }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x38] }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x30] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x8c] }
	__asm { movss dword ptr [ebp - 0x24], xmm1 }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { call fn_006cefd0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [ebp - 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { call fn_0099d320 }
	__asm { movss xmm0, dword ptr [g_00e66638] }
	__asm { subss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [ebp - 0x34] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x44] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x38] }
	__asm { movss dword ptr [ebp - 0x44], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x30] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x70] }
	__asm { movss dword ptr [ebp - 0x40], xmm1 }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { call fn_006cefd0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xa4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp - 0x88] }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ecx], 0xe461dc }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x84] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x80] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 0x7c] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp - 0x78] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 0x74] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { push dword ptr [esi + 0x38] }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_00b152d0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xa4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp - 0x6c] }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x68] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x64] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov dword ptr [ecx], 0xe461dc }
	__asm { push dword ptr [esi + 0x38] }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { call fn_00b152d0 }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { test ecx, ecx }
	__asm { je L_00bb7743 }
	__asm { cmp dword ptr [ebp - 0x54], 0 }
	__asm { jne L_00bb7743 }
	__asm { call fn_00891b90 }
	__asm { test al, al }
	__asm { je L_00bb7743 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push 1 }
	__asm { call fn_009dd740 }
	__asm { L_00bb7743: }
	__asm { lea ecx, [ebp - 0xa4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cda1a0 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_004033d0 }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { L_00bb776d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00917b80();
extern "C" void fn_009976a0();
extern "C" void fn_0099c7f0();
extern "C" void fn_0099c980();
extern "C" void fn_009d8f50();
extern "C" void fn_00bbad80();
// FUNCTION: ROBLOXSTUDIO 0x00bb8cd0
extern "C" __declspec(naked) void asm_00bb8cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00bb8d29 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp dword ptr [eax + 0x324], 0 }
	__asm { jne L_00bb8d29 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb8d18 }
	__asm { push 0x459 }
	__asm { push 0xedf868 }
	__asm { push 0xedffc0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb8d29 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bb8d18: }
	__asm { movzx eax, cl }
	__asm { push 0xee0370 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb8d29: }
	__asm { mov ebx, dword ptr [edi + 0x34] }
	__asm { test ebx, ebx }
	__asm { je L_00bb8f78 }
	__asm { mov ebx, dword ptr [ebx + 0xe0] }
	__asm { cmp dword ptr [ebx + 0xe0], 0 }
	__asm { je L_00bb8f78 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bb8f78 }
	__asm { call fn_009d8f50 }
	__asm { test eax, eax }
	__asm { je L_00bb8f78 }
	__asm { mov ecx, eax }
	__asm { call fn_0099c7f0 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00bb8f78 }
	__asm { mov ecx, ebx }
	__asm { call fn_0099c7f0 }
	__asm { cmp esi, eax }
	__asm { je L_00bb8f78 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bb8dc7 }
	__asm { cmp dword ptr [ebx + 0xe0], 0 }
	__asm { jne L_00bb8dd4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb8db2 }
	__asm { push 0x45d }
	__asm { push 0xedf868 }
	__asm { push 0xe8e404 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb8dc7 }
	__asm { L_00bb8db2: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee03e0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb8dc7: }
	__asm { cmp dword ptr [ebx + 0xe0], 0 }
	__asm { je L_00bb8f78 }
	__asm { L_00bb8dd4: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bb8e48 }
	__asm { mov ecx, edi }
	__asm { call fn_00bbad80 }
	__asm { movss xmm0, dword ptr [edi + 0x3c] }
	__asm { mov ecx, eax }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00bb8e48 }
	__asm { movss xmm0, dword ptr [edi + 0x40] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00bb8e48 }
	__asm { movss xmm0, dword ptr [edi + 0x44] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00bb8e48 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb8e33 }
	__asm { push 0x460 }
	__asm { push 0xedf868 }
	__asm { push 0xedf614 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb8e48 }
	__asm { L_00bb8e33: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee0448 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb8e48: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, ebx }
	__asm { mov esi, dword ptr [eax + 0x324] }
	__asm { call fn_0099c980 }
	__asm { movss xmm5, dword ptr [edi + 0x40] }
	__asm { movss xmm1, dword ptr [edi + 0x44] }
	__asm { movss xmm7, dword ptr [edi + 0x3c] }
	__asm { mov ecx, eax }
	__asm { subss xmm5, dword ptr [ecx + 0x28] }
	__asm { subss xmm1, dword ptr [ecx + 0x2c] }
	__asm { movss xmm3, dword ptr [ecx + 0x40] }
	__asm { movss xmm6, dword ptr [ecx + 0x44] }
	__asm { subss xmm7, dword ptr [ecx + 0x24] }
	__asm { movss xmm4, dword ptr [ecx + 0x3c] }
	__asm { movaps xmm0, xmm6 }
	__asm { mulss xmm0, xmm5 }
	__asm { movaps xmm2, xmm3 }
	__asm { mulss xmm2, xmm1 }
	__asm { mulss xmm6, xmm7 }
	__asm { subss xmm2, xmm0 }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, xmm1 }
	__asm { mulss xmm4, xmm5 }
	__asm { subss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x30] }
	__asm { addss xmm0, xmm2 }
	__asm { mulss xmm3, xmm7 }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x34] }
	__asm { addss xmm0, xmm6 }
	__asm { subss xmm4, xmm3 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x38] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { addss xmm0, xmm4 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ecx + 0x3c] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0x40] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { call fn_009976a0 }
	__asm { fst dword ptr [ebp - 8] }
	__asm { fld dword ptr [ebp - 0x28] }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { mulss xmm0, dword ptr [ebp - 8] }
	__asm { fmul st(0), st(1) }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { fstp dword ptr [ebp - 0x28] }
	__asm { fld dword ptr [ebp - 0x24] }
	__asm { movss dword ptr [ebp - 0x2c], xmm0 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { fmul st(0), st(1) }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { fstp dword ptr [ebp - 0x24] }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { fld dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { fmul st(0), st(1) }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { fstp dword ptr [ebp - 0x20] }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { fld dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { fmul st(0), st(1) }
	__asm { fstp dword ptr [ebp - 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { fmul dword ptr [ebp - 0x18] }
	__asm { fstp dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 0x14], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bb8f78: }
	__asm { call fn_00917b80 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { pop edi }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { pop esi }
	__asm { mov eax, edx }
	__asm { mov dword ptr [edx + 0x14], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00898ee0();
extern "C" void fn_009d8b70();
extern "C" void fn_009d8f50();
extern "C" void fn_00a98110();
extern "C" void fn_00a98230();
extern "C" void fn_00bb97c0();
// FUNCTION: ROBLOXSTUDIO 0x00bb9650
extern "C" __declspec(naked) void asm_00bb9650()
{
	__asm { jmp fn_00bb97c0 }
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
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00bb96ac }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00bb96ac }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb969b }
	__asm { push 0xeb }
	__asm { push 0xedf868 }
	__asm { push 0xe7baac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb96ac }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb969b: }
	__asm { movzx eax, al }
	__asm { push 0xedfa00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb96ac: }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_009d8f50 }
	__asm { test eax, eax }
	__asm { je L_00bb96c2 }
	__asm { mov ebx, dword ptr [eax + 0x104] }
	__asm { jmp L_00bb96c4 }
	__asm { L_00bb96c2: }
	__asm { xor ebx, ebx }
	__asm { L_00bb96c4: }
	__asm { mov ecx, edi }
	__asm { call fn_009d8b70 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_00bb97b6 }
	__asm { test ebx, ebx }
	__asm { je L_00bb97b6 }
	__asm { mov ecx, edi }
	__asm { call fn_00898ee0 }
	__asm { mov ecx, edi }
	__asm { call fn_00a98230 }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm4, dword ptr [eax] }
	__asm { movss xmm6, dword ptr [edi + 0xb0] }
	__asm { movss xmm0, dword ptr [edi + 0xa4] }
	__asm { movss xmm5, dword ptr [eax + 8] }
	__asm { movss xmm2, dword ptr [edi + 0xb4] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss xmm1, dword ptr [edi + 0xb8] }
	__asm { mulss xmm6, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0xbc] }
	__asm { mulss xmm0, xmm5 }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0xa8] }
	__asm { mulss xmm0, xmm4 }
	__asm { mov ecx, edi }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0xc0] }
	__asm { mulss xmm0, xmm5 }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0xac] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0xc4] }
	__asm { mulss xmm0, xmm5 }
	__asm { movss dword ptr [esi + 0x88], xmm6 }
	__asm { movss dword ptr [esi + 0x8c], xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [esi + 0x90], xmm1 }
	__asm { call fn_00a98110 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 0x94] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x98] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0x9c] }
	__asm { L_00bb97b6: }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jmp dword ptr [eax + 8] }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10268[];
extern "C" char g_010380b8[];
extern "C" void fn_00b5fe30();
extern "C" void fn_00b5fe90();
extern "C" void fn_00bc06f0();
extern "C" void fn_00bc07e0();
extern "C" void fn_00bc08e0();
extern "C" void fn_00bc1060();
extern "C" void fn_00bc1170();
extern "C" void fn_00bc12a0();
// FUNCTION: ROBLOXSTUDIO 0x00bc5030
extern "C" __declspec(naked) void asm_00bc5030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mulss xmm2, xmm0 }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm4, xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm1, xmm2 }
	__asm { addss xmm0, xmm2 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm1, xmm3 }
	__asm { addss xmm0, xmm3 }
	__asm { mov esi, ecx }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp + 0xc], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { addss xmm0, xmm4 }
	__asm { subss xmm1, xmm4 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00b5fe90 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00b5fe30 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { sub ecx, dword ptr [esi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 6 }
	__asm { jae L_00bc5128 }
	__asm { push 6 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc08e0 }
	__asm { L_00bc5128: }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 5 }
	__asm { jae L_00bc514e }
	__asm { push 5 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_00bc07e0 }
	__asm { L_00bc514e: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { sub ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 9 }
	__asm { jae L_00bc5174 }
	__asm { push 9 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call fn_00bc06f0 }
	__asm { L_00bc5174: }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { push 1 }
	__asm { push 2 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { dec eax }
	__asm { je L_00bc537e }
	__asm { dec eax }
	__asm { je L_00bc5306 }
	__asm { dec eax }
	__asm { je L_00bc528e }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { push 3 }
	__asm { push 5 }
	__asm { push 4 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 4 }
	__asm { push 5 }
	__asm { push 2 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 0 }
	__asm { push 4 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 5 }
	__asm { push 3 }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00bc528e: }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { push 4 }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 2 }
	__asm { push 5 }
	__asm { push 4 }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 3 }
	__asm { push 4 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 5 }
	__asm { push 2 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00bc5306: }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { push 3 }
	__asm { push 4 }
	__asm { push 5 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 5 }
	__asm { push 4 }
	__asm { push 2 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 2 }
	__asm { push 4 }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 5 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00bc537e: }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { push 5 }
	__asm { push 3 }
	__asm { push 2 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 5 }
	__asm { push 4 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 3 }
	__asm { push 5 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 1 }
	__asm { push 4 }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10268[];
extern "C" char g_010380b8[];
extern "C" void fn_00b5fe30();
extern "C" void fn_00b5fe90();
extern "C" void fn_00bc06f0();
extern "C" void fn_00bc07e0();
extern "C" void fn_00bc08e0();
extern "C" void fn_00bc1060();
extern "C" void fn_00bc1170();
extern "C" void fn_00bc12a0();
// FUNCTION: ROBLOXSTUDIO 0x00bc5400
extern "C" __declspec(naked) void asm_00bc5400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [g_010380b8] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mulss xmm0, xmm1 }
	__asm { push ebx }
	__asm { push esi }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mulss xmm0, xmm1 }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00b5fe90 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00b5fe30 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { sub ecx, dword ptr [esi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 6 }
	__asm { jae L_00bc54b7 }
	__asm { push 6 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc08e0 }
	__asm { L_00bc54b7: }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 5 }
	__asm { jae L_00bc54dd }
	__asm { push 5 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_00bc07e0 }
	__asm { L_00bc54dd: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { sub ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 9 }
	__asm { jae L_00bc5503 }
	__asm { push 9 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call fn_00bc06f0 }
	__asm { L_00bc5503: }
	__asm { fld dword ptr [ebp - 4] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { fchs }
	__asm { mov ecx, esi }
	__asm { fst dword ptr [ebp + 8] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { sub esp, 0xc }
	__asm { fchs }
	__asm { mov ecx, esi }
	__asm { fst dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { fchs }
	__asm { mov ecx, esi }
	__asm { fst dword ptr [ebp - 8] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { push 1 }
	__asm { push 4 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 5 }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 2 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 4 }
	__asm { push 5 }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 4 }
	__asm { push 1 }
	__asm { push 2 }
	__asm { push 5 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bc6400();
extern "C" void fn_00bc6450();
// FUNCTION: ROBLOXSTUDIO 0x00bc9630
extern "C" __declspec(naked) void asm_00bc9630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { cmp byte ptr [eax + 0x15], 2 }
	__asm { je L_00bc96fb }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { lea eax, [ecx + 1] }
	__asm { push edi }
	__asm { cmp eax, 0x3fffffff }
	__asm { ja L_00bc9672 }
	__asm { lea eax, [ecx*4] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { call fn_00bc6400 }
	__asm { mov esi, eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { jmp L_00bc9680 }
	__asm { L_00bc9672: }
	__asm { push ebx }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00bc9680: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov ebx, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ebp - 0xc], ebx }
	__asm { test ecx, ecx }
	__asm { jle L_00bc9696 }
	__asm { xor eax, eax }
	__asm { mov edi, esi }
	__asm { rep stosd }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_00bc9696: }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { cmp dword ptr [ebx + 8], edi }
	__asm { jle L_00bc96db }
	__asm { L_00bc96a0: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { test eax, eax }
	__asm { je L_00bc96cc }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { lea ebx, [ecx - 1] }
	__asm { nop }
	__asm { L_00bc96b0: }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [eax] }
	__asm { and ecx, ebx }
	__asm { lea edx, [edi + ecx*4] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, esi }
	__asm { test esi, esi }
	__asm { jne L_00bc96b0 }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { mov ebx, dword ptr [ebp - 0xc] }
	__asm { L_00bc96cc: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { inc edi }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { cmp edi, dword ptr [ebx + 8] }
	__asm { jl L_00bc96a0 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { L_00bc96db: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { push 0 }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { push dword ptr [ebx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6400 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebx], esi }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 8], ecx }
	__asm { pop esi }
	__asm { L_00bc96fb: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_0130f640[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00bd0940();
// FUNCTION: ROBLOXSTUDIO 0x00bd0060
extern "C" __declspec(naked) void asm_00bd0060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00bd0940 }
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
	__asm { jne L_00bd00a9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00bd00a9 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00bd00a9 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00bd00a9: }
	__asm { add dword ptr [g_0130f640], 0x12c }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)
