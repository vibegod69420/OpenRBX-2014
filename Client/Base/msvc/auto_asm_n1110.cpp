// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e362b0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b4ac40();
extern "C" void fn_00b53cd0();
extern "C" void fn_00b8c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00b4d010
extern "C" __declspec(naked) void asm_00b4d010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + eax*4 + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x104] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebx + eax*4 + 0xc] }
	__asm { mov edx, dword ptr [eax + 0x104] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { test al, al }
	__asm { je L_00b4d086 }
	__asm { cmp dword ptr [ebx + 0x2c], 0 }
	__asm { je L_00b4d04b }
	__asm { cmp dword ptr [ebx + 0x28], 0 }
	__asm { jne L_00b4d086 }
	__asm { L_00b4d04b: }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b4d072 }
	__asm { push 0x19f }
	__asm { push 0xec9e74 }
	__asm { push 0xec9fd4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b4d083 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b4d072: }
	__asm { movzx eax, al }
	__asm { push 0xec9ff0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b4d083: }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { L_00b4d086: }
	__asm { mov ecx, dword ptr [ebx + 0x2c] }
	__asm { test ecx, ecx }
	__asm { je L_00b4d0a7 }
	__asm { cmp dword ptr [ebx + 0x28], 0 }
	__asm { je L_00b4d0a7 }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push 3 }
	__asm { push edi }
	__asm { push edx }
	__asm { call fn_00b4ac40 }
	__asm { mov edi, eax }
	__asm { jmp L_00b4d0ac }
	__asm { L_00b4d0a7: }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { xor edi, edi }
	__asm { L_00b4d0ac: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov eax, esi }
	__asm { shl eax, 4 }
	__asm { mov eax, dword ptr [eax + 0xed6ce0] }
	__asm { lea esi, [eax + eax*2] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebx + eax*4 + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x100] }
	__asm { mov edx, dword ptr [eax + 0x34] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { lea eax, [ecx + eax*4] }
	__asm { mov eax, dword ptr [eax*4 + 0xed6ce0] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebx + eax*4 + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x100] }
	__asm { mov eax, dword ptr [eax + 0x34] }
	__asm { fld dword ptr [eax + ecx*4] }
	__asm { fstp dword ptr [edi + 0x78] }
	__asm { fld dword ptr [eax + ecx*4 + 4] }
	__asm { fstp dword ptr [edi + 0x7c] }
	__asm { fld dword ptr [eax + ecx*4 + 8] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { fstp dword ptr [edi + 0x80] }
	__asm { mov ecx, edi }
	__asm { fld dword ptr [edx + esi*4] }
	__asm { fstp dword ptr [edi + 0x84] }
	__asm { fld dword ptr [edx + esi*4 + 4] }
	__asm { fstp dword ptr [edi + 0x88] }
	__asm { fld dword ptr [edx + esi*4 + 8] }
	__asm { fstp dword ptr [edi + 0x8c] }
	__asm { mov dword ptr [edi + 0xa8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edi + 0xa4], eax }
	__asm { mov dword ptr [edi + 0x74], 3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { call dword ptr [eax + 0x20] }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00b4d183 }
	__asm { cmp dword ptr [edi + 0x74], 3 }
	__asm { je L_00b4d183 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b4d16e }
	__asm { push 0x55 }
	__asm { push 0xec9d00 }
	__asm { push 0xec9d4c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b4d183 }
	__asm { L_00b4d16e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xec9d78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b4d183: }
	__asm { movss xmm0, dword ptr [g_00e362b0] }
	__asm { comiss xmm0, dword ptr [edi + 0xe0] }
	__asm { jbe L_00b4d1eb }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_00b4d1d9 }
	__asm { cmp dword ptr [esi + 0x20], 8 }
	__asm { jb L_00b4d1d9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00b4d1c4 }
	__asm { push 0x1a }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca80c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b4d1d9 }
	__asm { L_00b4d1c4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b4d1d9: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi + eax*4], edi }
	__asm { inc dword ptr [esi + 0x20] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00b4d1eb: }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00b8c1b0 }
	__asm { mov ecx, eax }
	__asm { call fn_00b53cd0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_004f4640();
// FUNCTION: ROBLOXSTUDIO 0x00b4d660
extern "C" __declspec(naked) void asm_00b4d660()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_004f4640 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00b4d67e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00b4d688 }
	__asm { L_00b4d67e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00b4d688: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b4d6b4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b4d6b4 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00b4d6b4 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b4d6b4: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_004f46b0();
// FUNCTION: ROBLOXSTUDIO 0x00b4d6c0
extern "C" __declspec(naked) void asm_00b4d6c0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_004f46b0 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00b4d6de }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00b4d6e8 }
	__asm { L_00b4d6de: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00b4d6e8: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b4d714 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b4d714 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00b4d714 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b4d714: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_004f45d0();
// FUNCTION: ROBLOXSTUDIO 0x00b4d720
extern "C" __declspec(naked) void asm_00b4d720()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_004f45d0 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00b4d73e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00b4d748 }
	__asm { L_00b4d73e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00b4d748: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00b4d774 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00b4d774 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00b4d774 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00b4d774: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_010380e4[];
extern "C" char g_01038120[];
extern "C" void fn_00b4e390();
// FUNCTION: ROBLOXSTUDIO 0x00b4d8a0
extern "C" __declspec(naked) void asm_00b4d8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { jne L_00b4d8b4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x14] }
	__asm { L_00b4d8b4: }
	__asm { xorps xmm0, xmm0 }
	__asm { movss xmm2, dword ptr [g_01038120] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { movss xmm1, dword ptr [ebx + 0x118] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm3, dword ptr [edi + 0x118] }
	__asm { jb L_00b4d8e1 }
	__asm { movaps xmm1, xmm0 }
	__asm { jmp L_00b4d8e9 }
	__asm { L_00b4d8e1: }
	__asm { comiss xmm1, xmm2 }
	__asm { jb L_00b4d8e9 }
	__asm { movaps xmm1, xmm2 }
	__asm { L_00b4d8e9: }
	__asm { comiss xmm0, xmm3 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { jae L_00b4d900 }
	__asm { comiss xmm3, xmm2 }
	__asm { jb L_00b4d8fd }
	__asm { movaps xmm0, xmm2 }
	__asm { jmp L_00b4d900 }
	__asm { L_00b4d8fd: }
	__asm { movaps xmm0, xmm3 }
	__asm { L_00b4d900: }
	__asm { movss xmm2, dword ptr [g_010380e4] }
	__asm { comiss xmm2, xmm1 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { jb L_00b4d917 }
	__asm { comiss xmm2, xmm0 }
	__asm { jae L_00b4d921 }
	__asm { L_00b4d917: }
	__asm { comiss xmm1, xmm2 }
	__asm { jb L_00b4d932 }
	__asm { comiss xmm0, xmm2 }
	__asm { jb L_00b4d932 }
	__asm { L_00b4d921: }
	__asm { comiss xmm1, xmm0 }
	__asm { lea eax, [ebp - 4] }
	__asm { ja L_00b4d92c }
	__asm { lea eax, [ebp - 8] }
	__asm { L_00b4d92c: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { jmp L_00b4d93a }
	__asm { L_00b4d932: }
	__asm { addss xmm0, xmm1 }
	__asm { subss xmm0, xmm2 }
	__asm { L_00b4d93a: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { movss xmm1, dword ptr [edi + 0x11c] }
	__asm { movss xmm0, dword ptr [ebx + 0x11c] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { lea eax, [ebp - 8] }
	__asm { ja L_00b4d967 }
	__asm { lea eax, [ebp - 4] }
	__asm { L_00b4d967: }
	__asm { cmp byte ptr [edi + 0x154], 0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { je L_00b4d99a }
	__asm { mov ecx, dword ptr [edi + 0x164] }
	__asm { add ecx, dword ptr [edi + 0x158] }
	__asm { mov eax, dword ptr [edi + 0x160] }
	__asm { call eax }
	__asm { fstp dword ptr [edi + 0x150] }
	__asm { mov byte ptr [edi + 0x154], 0 }
	__asm { L_00b4d99a: }
	__asm { cmp byte ptr [ebx + 0x154], 0 }
	__asm { movss xmm0, dword ptr [edi + 0x150] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { je L_00b4d9d6 }
	__asm { mov ecx, dword ptr [ebx + 0x164] }
	__asm { add ecx, dword ptr [ebx + 0x158] }
	__asm { mov eax, dword ptr [ebx + 0x160] }
	__asm { call eax }
	__asm { fstp dword ptr [ebx + 0x150] }
	__asm { mov byte ptr [ebx + 0x154], 0 }
	__asm { L_00b4d9d6: }
	__asm { movss xmm0, dword ptr [ebx + 0x150] }
	__asm { comiss xmm0, dword ptr [ebp - 8] }
	__asm { pop edi }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { pop ebx }
	__asm { lea ecx, [ebp - 4] }
	__asm { ja L_00b4d9f1 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { L_00b4d9f1: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { fld dword ptr [ecx] }
	__asm { push ecx }
	__asm { fstp dword ptr [eax] }
	__asm { mov esi, dword ptr [esi + 0x28] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00b4e390 }
	__asm { fmul dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { fstp dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
