// Bundled inline-assembly functions (merged from the recursion output).

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006deac0();
extern "C" void fn_00babde0();
// FUNCTION: ROBLOXSTUDIO 0x00baba10
extern "C" __declspec(naked) void asm_00baba10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5cd89 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00babad8 }
	__asm { cmp edx, -1 }
	__asm { jne L_00babadd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00baba6f }
	__asm { push 0x5d }
	__asm { push 0xede4bc }
	__asm { push 0xede5d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00baba80 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00baba6f: }
	__asm { movzx eax, al }
	__asm { push 0xede5e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00baba80: }
	__asm { mov dword ptr [ebp - 0x38], 0xe370e4 }
	__asm { call fn_006deac0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x34], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x30], ecx }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { lea edx, [ebp - 0x38] }
	__asm { L_00babaa7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [edx + 0x10] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { fstp dword ptr [eax + 0x10] }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0xe370e4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00babad8: }
	__asm { cmp edx, -1 }
	__asm { je L_00baba80 }
	__asm { L_00babadd: }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { lea ecx, [edx + edx*8] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { call fn_00babde0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], 0xe370e4 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { lea edx, [ebp - 0x24] }
	__asm { jmp L_00babaa7 }
}

extern "C" char g_010380b8[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_009f3160();
extern "C" void fn_00a206d0();
// FUNCTION: ROBLOXSTUDIO 0x00babb20
extern "C" __declspec(naked) void asm_00babb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x54 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { test al, al }
	__asm { je L_00babb73 }
	__asm { cmp esi, -1 }
	__asm { jne L_00babb73 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00babb62 }
	__asm { push 0x8d }
	__asm { push 0xede4bc }
	__asm { push 0xede5d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00babb73 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00babb62: }
	__asm { movzx eax, al }
	__asm { push 0xede840 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00babb73: }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { call fn_006da0e0 }
	__asm { cmp esi, -1 }
	__asm { jne L_00babb93 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { jmp L_00babc3c }
	__asm { L_00babb93: }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { lea edi, [esi + esi*8] }
	__asm { shl edi, 2 }
	__asm { add eax, edi }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { call fn_00a206d0 }
	__asm { mov ecx, dword ptr [ebx + 0x18] }
	__asm { push 0 }
	__asm { mov edx, dword ptr [ecx + 0x18] }
	__asm { mov ecx, dword ptr [edx + edi + 4] }
	__asm { add edx, edi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov esi, eax }
	__asm { call fn_00a206d0 }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm1, dword ptr [eax + 0xc] }
	__asm { movss xmm3, dword ptr [esi + 4] }
	__asm { addss xmm3, dword ptr [eax + 4] }
	__asm { addss xmm2, dword ptr [esi + 8] }
	__asm { addss xmm1, dword ptr [esi + 0xc] }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0x30], xmm3 }
	__asm { movss dword ptr [ebp - 0x2c], xmm2 }
	__asm { movss dword ptr [ebp - 0x28], xmm1 }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { add edi, 0x14 }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_009f3160 }
	__asm { mov esi, eax }
	__asm { mov ecx, 9 }
	__asm { lea edi, [ebp - 0x54] }
	__asm { rep movsd }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { pop edi }
	__asm { L_00babc3c: }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00baca30();
extern "C" void fn_00baca60();
// FUNCTION: ROBLOXSTUDIO 0x00bacef0
extern "C" __declspec(naked) void asm_00bacef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov edx, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov esi, edx }
	__asm { jne L_00bacf25 }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { nop }
	__asm { L_00bacf10: }
	__asm { comiss xmm0, dword ptr [eax + 0x10] }
	__asm { jbe L_00bacf1b }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_00bacf1f }
	__asm { L_00bacf1b: }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00bacf1f: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00bacf10 }
	__asm { L_00bacf25: }
	__asm { cmp esi, edx }
	__asm { je L_00bacf3f }
	__asm { movss xmm0, dword ptr [esi + 0x10] }
	__asm { comiss xmm0, dword ptr [edi] }
	__asm { ja L_00bacf3f }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x14] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bacf3f: }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00baca30 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00baca60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add eax, 0x14 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010385f0[];
// FUNCTION: ROBLOXSTUDIO 0x00bad010
extern "C" __declspec(naked) void asm_00bad010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { movss xmm3, dword ptr [ecx] }
	__asm { movss xmm2, dword ptr [ecx + 4] }
	__asm { movaps xmm0, xmm3 }
	__asm { comiss xmm2, xmm0 }
	__asm { jbe L_00bad031 }
	__asm { movaps xmm0, xmm2 }
	__asm { mov eax, 1 }
	__asm { L_00bad031: }
	__asm { movss xmm1, dword ptr [ecx + 8] }
	__asm { comiss xmm1, xmm0 }
	__asm { jbe L_00bad043 }
	__asm { movaps xmm0, xmm1 }
	__asm { mov eax, 2 }
	__asm { L_00bad043: }
	__asm { movss xmm4, dword ptr [g_010385f0] }
	__asm { xorps xmm3, xmm4 }
	__asm { comiss xmm3, xmm0 }
	__asm { jbe L_00bad05b }
	__asm { movaps xmm0, xmm3 }
	__asm { mov eax, 3 }
	__asm { L_00bad05b: }
	__asm { xorps xmm2, xmm4 }
	__asm { comiss xmm2, xmm0 }
	__asm { jbe L_00bad06b }
	__asm { movaps xmm0, xmm2 }
	__asm { mov eax, 4 }
	__asm { L_00bad06b: }
	__asm { xorps xmm1, xmm4 }
	__asm { comiss xmm1, xmm0 }
	__asm { jbe L_00bad078 }
	__asm { mov eax, 5 }
	__asm { L_00bad078: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00bad0a0
extern "C" __declspec(naked) void asm_00bad0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov ecx, edx }
	__asm { jne L_00bad0cd }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { L_00bad0b8: }
	__asm { comiss xmm0, dword ptr [eax + 0x10] }
	__asm { jbe L_00bad0c3 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_00bad0c7 }
	__asm { L_00bad0c3: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00bad0c7: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00bad0b8 }
	__asm { L_00bad0cd: }
	__asm { cmp ecx, edx }
	__asm { je L_00bad0de }
	__asm { movss xmm0, dword ptr [ecx + 0x10] }
	__asm { comiss xmm0, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { jbe L_00bad0e1 }
	__asm { L_00bad0de: }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { L_00bad0e1: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_010380b8[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01303174[];
extern "C" void fn_006b9740();
extern "C" void fn_00bad640();
// FUNCTION: ROBLOXSTUDIO 0x00badb50
extern "C" __declspec(naked) void asm_00badb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { fld dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { fstp dword ptr [edi + 4] }
	__asm { fld dword ptr [esi + 4] }
	__asm { fstp dword ptr [edi + 8] }
	__asm { movss xmm1, dword ptr [esi + 8] }
	__asm { movss dword ptr [edi + 0xc], xmm1 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00badbed }
	__asm { movss xmm0, dword ptr [edi + 4] }
	__asm { ucomiss xmm0, dword ptr [esi] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00badbb8 }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { ucomiss xmm0, dword ptr [esi + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00badbb8 }
	__asm { ucomiss xmm1, dword ptr [esi + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00badbed }
	__asm { L_00badbb8: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00badbdc }
	__asm { push 0x31 }
	__asm { push 0xede90c }
	__asm { push 0xed0d64 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00badbed }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00badbdc: }
	__asm { movzx eax, cl }
	__asm { push 0xede948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00badbed: }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { mulss xmm0, dword ptr [g_010380b8] }
	__asm { movss dword ptr [edi + 0x14], xmm0 }
	__asm { cmp byte ptr [g_01303174], 0 }
	__asm { je L_00badc96 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00bad640 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { mov esi, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], edx }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00badc65 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00badc65 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00badc65 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00badc65: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00badc96 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00badc96 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00badc96 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00badc96: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0058a0a0();
extern "C" void fn_00594b30();
extern "C" void fn_00bad640();
// FUNCTION: ROBLOXSTUDIO 0x00badcb0
extern "C" __declspec(naked) void asm_00badcb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d173 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { push 0x120 }
	__asm { mov edi, ecx }
	__asm { call fn_0058a0a0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00badcf4 }
	__asm { mov ecx, eax }
	__asm { call fn_00594b30 }
	__asm { jmp L_00badcf6 }
	__asm { L_00badcf4: }
	__asm { xor eax, eax }
	__asm { L_00badcf6: }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { test ecx, ecx }
	__asm { je L_00badd0e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00badd0e: }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00bad640 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { mov esi, dword ptr [edi + 0x1c] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x1c], edx }
	__asm { test esi, esi }
	__asm { je L_00badd6d }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00badd6d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00badd6d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00badd6d: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00badd9e }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00badd9e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00badd9e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00badd9e: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_00baddc7 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [edx + 8] }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00baddc7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_00badfc0();
// FUNCTION: ROBLOXSTUDIO 0x00badf10
extern "C" __declspec(naked) void asm_00badf10()
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
	__asm { call fn_00badfc0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00badf87 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00badf86 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00badf86 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00badf86: }
	__asm { pop ebx }
	__asm { L_00badf87: }
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

extern "C" void fn_00403160();
extern "C" void fn_00bae0f0();
// FUNCTION: ROBLOXSTUDIO 0x00bae050
extern "C" __declspec(naked) void asm_00bae050()
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
	__asm { call fn_00bae0f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00bae0c7 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bae0c6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00bae0c6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bae0c6: }
	__asm { pop ebx }
	__asm { L_00bae0c7: }
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

extern "C" void fn_00baea90();
// FUNCTION: ROBLOXSTUDIO 0x00bae520
extern "C" __declspec(naked) void asm_00bae520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00baea90 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx + 0x1c], ecx }
	__asm { mov esi, dword ptr [ebx + 0x20] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 0x20], edx }
	__asm { test esi, esi }
	__asm { je L_00bae5af }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bae5af }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bae5af }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bae5af: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00bae5e0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bae5e0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00bae5e0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bae5e0: }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_009f3160();
extern "C" void fn_00a206d0();
// FUNCTION: ROBLOXSTUDIO 0x00bae890
extern "C" __declspec(naked) void asm_00bae890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x54 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00bae8e0 }
	__asm { cmp esi, -1 }
	__asm { jne L_00bae8e0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bae8cf }
	__asm { push 0x3f }
	__asm { push 0xede9bc }
	__asm { push 0xede5d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bae8e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bae8cf: }
	__asm { movzx eax, al }
	__asm { push 0xedea00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bae8e0: }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { call fn_006da0e0 }
	__asm { cmp esi, -1 }
	__asm { je L_00bae94b }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { lea esi, [esi + esi*8] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { shl esi, 2 }
	__asm { add eax, esi }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { call fn_00a206d0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x30], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 0x2c], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { add esi, 0x14 }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_009f3160 }
	__asm { mov ecx, 9 }
	__asm { mov esi, eax }
	__asm { lea edi, [ebp - 0x54] }
	__asm { add esp, 8 }
	__asm { rep movsd }
	__asm { L_00bae94b: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0049a1e0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b9a6a0();
extern "C" void fn_00b9b4f0();
extern "C" void fn_00bae2c0();
extern "C" void fn_00baf2e0();
extern "C" void fn_00bb2650();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00baed30
extern "C" __declspec(naked) void asm_00baed30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c3f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00baf2e0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { dec dword ptr [ebx + 4] }
	__asm { jne L_00baee68 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_00baedd6 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00bb2650 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [eax + 0x1c], ebx }
	__asm { je L_00baedd6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00baedc1 }
	__asm { push 0xbf }
	__asm { push 0xed0100 }
	__asm { push 0xed0148 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00baedd6 }
	__asm { L_00baedc1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed0170 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00baedd6: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b9b4f0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9a6a0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00baee55 }
	__asm { cmp dword ptr [ebp + 0xc], 1 }
	__asm { je L_00baee55 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00baee44 }
	__asm { push 0xc1 }
	__asm { push 0xed0100 }
	__asm { push 0xed01f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00baee55 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00baee44: }
	__asm { movzx eax, cl }
	__asm { push 0xed01f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00baee55: }
	__asm { mov ecx, ebx }
	__asm { call fn_00bae2c0 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { L_00baee68: }
	__asm { test esi, esi }
	__asm { je L_00baee6f }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00baee6f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130f2ac[];
extern "C" char g_0130f2b0[];
extern "C" char g_0130f2b4[];
extern "C" char g_0130f2b8[];
extern "C" void fn_0049a1e0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b9a6a0();
extern "C" void fn_00b9b4c0();
extern "C" void fn_00b9b4f0();
extern "C" void fn_00bae320();
extern "C" void fn_00baf370();
extern "C" void fn_00bb2650();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00baee80
extern "C" __declspec(naked) void asm_00baee80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c3f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00baf370 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { dec dword ptr [ebx + 4] }
	__asm { jne L_00baefb8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_00baef26 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00bb2650 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [eax + 0x1c], ebx }
	__asm { je L_00baef26 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00baef11 }
	__asm { push 0xbf }
	__asm { push 0xed0100 }
	__asm { push 0xed0148 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00baef26 }
	__asm { L_00baef11: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed0170 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00baef26: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b9b4f0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9a6a0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00baefa5 }
	__asm { cmp dword ptr [ebp + 0xc], 1 }
	__asm { je L_00baefa5 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00baef94 }
	__asm { push 0xc1 }
	__asm { push 0xed0100 }
	__asm { push 0xed01f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00baefa5 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00baef94: }
	__asm { movzx eax, cl }
	__asm { push 0xed01f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00baefa5: }
	__asm { mov ecx, ebx }
	__asm { call fn_00bae320 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { L_00baefb8: }
	__asm { test esi, esi }
	__asm { je L_00baefbf }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00baefbf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5cefe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f2b8] }
	__asm { test al, 1 }
	__asm { jne L_00baf037 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f2b8], eax }
	__asm { mov ecx, 0x130f2ac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f2ac], 0 }
	__asm { mov dword ptr [g_0130f2b0], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe07c90 }
	__asm { mov dword ptr [g_0130f2ac], eax }
	__asm { mov byte ptr [g_0130f2b4], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00baf037: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303174[];
extern "C" void fn_00bac7d0();
extern "C" void fn_00bae980();
// FUNCTION: ROBLOXSTUDIO 0x00baf0d0
extern "C" __declspec(naked) void asm_00baf0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00bac7d0 }
	__asm { cmp byte ptr [g_01303174], 0 }
	__asm { je L_00baf190 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00bae980 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], edx }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00baf15f }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00baf15f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00baf15f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00baf15f: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00baf190 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00baf190 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00baf190 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00baf190: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0058a0a0();
extern "C" void fn_00594b30();
extern "C" void fn_00bae980();
// FUNCTION: ROBLOXSTUDIO 0x00baf1b0
extern "C" __declspec(naked) void asm_00baf1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d173 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { push 0x120 }
	__asm { mov edi, ecx }
	__asm { call fn_0058a0a0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00baf1f4 }
	__asm { mov ecx, eax }
	__asm { call fn_00594b30 }
	__asm { jmp L_00baf1f6 }
	__asm { L_00baf1f4: }
	__asm { xor eax, eax }
	__asm { L_00baf1f6: }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { test ecx, ecx }
	__asm { je L_00baf20e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00baf20e: }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00bae980 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x28], edx }
	__asm { test esi, esi }
	__asm { je L_00baf26d }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00baf26d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00baf26d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00baf26d: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00baf29e }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00baf29e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00baf29e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00baf29e: }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_00baf2c7 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [edx + 8] }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00baf2c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403160();
extern "C" void fn_00baf4a0();
// FUNCTION: ROBLOXSTUDIO 0x00baf400
extern "C" __declspec(naked) void asm_00baf400()
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
	__asm { call fn_00baf4a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00baf477 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00baf476 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00baf476 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00baf476: }
	__asm { pop ebx }
	__asm { L_00baf477: }
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

// FUNCTION: ROBLOXSTUDIO 0x00baf7c0
extern "C" __declspec(naked) void asm_00baf7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_00baf7dc }
	__asm { L_00baf7d6: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00baf7dc: }
	__asm { comiss xmm1, xmm0 }
	__asm { jbe L_00baf7e7 }
	__asm { L_00baf7e1: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00baf7e7: }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00baf7d6 }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00baf7e1 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00baf7d6 }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00baf7e1 }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { cmp edx, dword ptr [ecx + 0xc] }
	__asm { jl L_00baf7d6 }
	__asm { jg L_00baf7e1 }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, dword ptr [ecx + 0x10] }
	__asm { setl al }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00bb0320();
// FUNCTION: ROBLOXSTUDIO 0x00bafa60
extern "C" __declspec(naked) void asm_00bafa60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { movss xmm0, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebx + 8] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebx + 0xc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { call fn_00bb0320 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx + 0x1c], ecx }
	__asm { mov esi, dword ptr [ebx + 0x20] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 0x20], edx }
	__asm { test esi, esi }
	__asm { je L_00bafb07 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bafb07 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bafb07 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bafb07: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00bafb38 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bafb38 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00bafb38 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bafb38: }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00baf9d0();
// FUNCTION: ROBLOXSTUDIO 0x00bafb80
extern "C" __declspec(naked) void asm_00bafb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_00baf9d0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp eax, esi }
	__asm { je L_00bafbf8 }
	__asm { movss xmm1, dword ptr [edi] }
	__asm { movss xmm0, dword ptr [eax + 0x10] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00bafbf8 }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bafbe5 }
	__asm { movss xmm1, dword ptr [edi + 4] }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00bafbf8 }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bafbe5 }
	__asm { movss xmm1, dword ptr [edi + 8] }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00bafbf8 }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bafbe5 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov edx, dword ptr [eax + 0x1c] }
	__asm { cmp ecx, edx }
	__asm { jl L_00bafbf8 }
	__asm { jg L_00bafbe5 }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { cmp ecx, dword ptr [eax + 0x20] }
	__asm { jl L_00bafbf8 }
	__asm { L_00bafbe5: }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00bafbf8: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_010380b8[];
extern "C" void fn_006da0e0();
extern "C" void fn_006dea80();
extern "C" void fn_006deac0();
extern "C" void fn_009f2350();
extern "C" void fn_009f3160();
extern "C" void fn_00a206d0();
extern "C" void fn_00bc1d40();
// FUNCTION: ROBLOXSTUDIO 0x00bafea0
extern "C" __declspec(naked) void asm_00bafea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x64 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_006da0e0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [eax + eax*8] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { shl ecx, 2 }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { add ecx, 0x14 }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { call fn_009f3160 }
	__asm { mov esi, eax }
	__asm { mov ecx, 9 }
	__asm { mov edi, ebx }
	__asm { rep movsd }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { call fn_006dea80 }
	__asm { movss xmm0, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mulss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { mulss xmm1, dword ptr [ebx + 4] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebx + 8] }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebx + 0x10] }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { mulss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mulss xmm1, dword ptr [ebx + 0xc] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebx + 0x14] }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebx + 0x18] }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { mulss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ebx + 0x1c] }
	__asm { mulss xmm1, dword ptr [eax + 4] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebx + 0x20] }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { call fn_006deac0 }
	__asm { movss xmm1, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mulss xmm1, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mulss xmm0, dword ptr [ebx + 4] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, dword ptr [ebx + 8] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebx + 0xc] }
	__asm { movss dword ptr [ebp - 0x34], xmm1 }
	__asm { movss xmm1, dword ptr [ebx + 0x10] }
	__asm { mulss xmm1, dword ptr [eax + 4] }
	__asm { mulss xmm0, dword ptr [eax] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, dword ptr [ebx + 0x14] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0x30], xmm1 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [ebx + 0x18] }
	__asm { mulss xmm1, dword ptr [eax] }
	__asm { mulss xmm0, dword ptr [ebx + 0x1c] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebx + 0x20] }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [eax + 0x18] }
	__asm { addss xmm1, xmm0 }
	__asm { mov eax, 0x38e38e39 }
	__asm { movss dword ptr [ebp - 0x2c], xmm1 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { dec eax }
	__asm { add eax, edx }
	__asm { cmp edi, eax }
	__asm { je L_00bb01b3 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, -2 }
	__asm { add eax, edx }
	__asm { cmp edi, eax }
	__asm { je L_00bb01b3 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { lea ecx, [eax + eax*8] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add eax, -0x24 }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { call fn_00bc1d40 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { add eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { call fn_00a206d0 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov edx, dword ptr [eax + 0x18] }
	__asm { add edx, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_00a206d0 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { addss xmm1, dword ptr [esi + 8] }
	__asm { movss xmm2, dword ptr [eax + 0xc] }
	__asm { addss xmm2, dword ptr [esi + 0xc] }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { addss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm3, dword ptr [g_010380b8] }
	__asm { mulss xmm1, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { mulss xmm0, xmm3 }
	__asm { movss dword ptr [ebx + 0x2c], xmm2 }
	__asm { movss xmm2, dword ptr [ebp - 0x18] }
	__asm { subss xmm2, dword ptr [ebp - 0x24] }
	__asm { movss dword ptr [ebx + 0x28], xmm1 }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { subss xmm1, dword ptr [ebp - 0x28] }
	__asm { movss dword ptr [ebx + 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { mulss xmm2, dword ptr [ebp - 0xc] }
	__asm { subss xmm0, dword ptr [ebp - 0x20] }
	__asm { mulss xmm1, dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mulss xmm0, dword ptr [ebp - 8] }
	__asm { addss xmm2, xmm1 }
	__asm { addss xmm2, xmm0 }
	__asm { movss dword ptr [ebp + 0xc], xmm2 }
	__asm { call fn_009f2350 }
	__asm { xorps xmm3, xmm3 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00bb01a6 }
	__asm { movaps xmm6, xmm3 }
	__asm { jmp L_00bb02a8 }
	__asm { L_00bb01a6: }
	__asm { movss xmm6, dword ptr [g_010380b8] }
	__asm { jmp L_00bb02a8 }
	__asm { L_00bb01b3: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00bc1d40 }
	__asm { movss xmm0, dword ptr [ebp - 0x40] }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { movss xmm2, dword ptr [ebp - 0x18] }
	__asm { subss xmm2, dword ptr [ebp - 0x24] }
	__asm { subss xmm1, dword ptr [ebp - 0x28] }
	__asm { movss dword ptr [ebx + 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x3c] }
	__asm { movss dword ptr [ebx + 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x38] }
	__asm { mulss xmm2, dword ptr [ebp - 0xc] }
	__asm { mulss xmm1, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [ebx + 0x2c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { subss xmm0, dword ptr [ebp - 0x20] }
	__asm { addss xmm2, xmm1 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mulss xmm0, dword ptr [ebp - 8] }
	__asm { addss xmm2, xmm0 }
	__asm { movss dword ptr [ebp + 0xc], xmm2 }
	__asm { call fn_009f2350 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00bb023f }
	__asm { xorps xmm0, xmm0 }
	__asm { jmp L_00bb0247 }
	__asm { L_00bb023f: }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { L_00bb0247: }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { movss xmm2, dword ptr [ebp - 0x18] }
	__asm { subss xmm2, dword ptr [ebp - 0x24] }
	__asm { subss xmm1, dword ptr [ebp - 0x28] }
	__asm { movss dword ptr [ebp + 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { subss xmm0, dword ptr [ebp - 0x20] }
	__asm { mulss xmm2, dword ptr [ebp - 0x30] }
	__asm { mulss xmm1, dword ptr [ebp - 0x34] }
	__asm { mulss xmm0, dword ptr [ebp - 0x2c] }
	__asm { addss xmm2, xmm1 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { addss xmm2, xmm0 }
	__asm { movss dword ptr [ebp + 8], xmm2 }
	__asm { call fn_009f2350 }
	__asm { movss xmm6, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00bb02a0 }
	__asm { xorps xmm3, xmm3 }
	__asm { jmp L_00bb02a8 }
	__asm { L_00bb02a0: }
	__asm { movss xmm3, dword ptr [g_010380b8] }
	__asm { L_00bb02a8: }
	__asm { movss xmm0, dword ptr [ebp - 0x34] }
	__asm { movss xmm1, dword ptr [ebp - 0x30] }
	__asm { movss xmm2, dword ptr [ebp - 0x2c] }
	__asm { movss xmm4, dword ptr [ebp - 0xc] }
	__asm { movss xmm5, dword ptr [ebp - 8] }
	__asm { mulss xmm1, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { mulss xmm0, xmm3 }
	__asm { movss xmm3, dword ptr [ebp - 0x10] }
	__asm { mulss xmm3, xmm6 }
	__asm { mulss xmm4, xmm6 }
	__asm { mulss xmm5, xmm6 }
	__asm { addss xmm3, xmm0 }
	__asm { addss xmm4, xmm1 }
	__asm { addss xmm5, xmm2 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { addss xmm3, dword ptr [ebx + 0x24] }
	__asm { addss xmm4, dword ptr [ebx + 0x28] }
	__asm { addss xmm5, dword ptr [ebx + 0x2c] }
	__asm { mov eax, ebx }
	__asm { movss dword ptr [ebx + 0x24], xmm3 }
	__asm { movss dword ptr [ebx + 0x28], xmm4 }
	__asm { movss dword ptr [ebx + 0x2c], xmm5 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_00baf400();
extern "C" void fn_00baf5a0();
extern "C" void fn_00baf6f0();
extern "C" void fn_00baf9d0();
extern "C" void fn_00bb0830();
extern "C" void fn_00bb1300();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bb0320
extern "C" __declspec(naked) void asm_00bb0320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5cf5e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { call fn_00bb0830 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { lea ebx, [esi + 8] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x30], ebx }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00baf9d0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp eax, ecx }
	__asm { je L_00bb03d5 }
	__asm { movss xmm1, dword ptr [edi] }
	__asm { movss xmm0, dword ptr [eax + 0x10] }
	__asm { comiss xmm0, xmm1 }
	__asm { mov byte ptr [ebp - 0xd], 0 }
	__asm { ja L_00bb03d5 }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bb03cd }
	__asm { movss xmm1, dword ptr [edi + 4] }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00bb03d5 }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bb03cd }
	__asm { movss xmm1, dword ptr [edi + 8] }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00bb03d5 }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bb03cd }
	__asm { mov edx, dword ptr [edi + 0xc] }
	__asm { mov esi, dword ptr [eax + 0x1c] }
	__asm { cmp edx, esi }
	__asm { jl L_00bb03d5 }
	__asm { jg L_00bb03cd }
	__asm { mov edx, dword ptr [edi + 0x10] }
	__asm { cmp edx, dword ptr [eax + 0x20] }
	__asm { jl L_00bb03d5 }
	__asm { L_00bb03cd: }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { jmp L_00bb03db }
	__asm { L_00bb03d5: }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { L_00bb03db: }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, ecx }
	__asm { je L_00bb03e6 }
	__asm { mov esi, dword ptr [eax + 0x24] }
	__asm { jmp L_00bb043c }
	__asm { L_00bb03e6: }
	__asm { push 8 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00bb042b }
	__asm { push 0x38 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00baf6f0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00bb0425 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00baf5a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00bb042d }
	__asm { L_00bb0425: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00bb042d }
	__asm { L_00bb042b: }
	__asm { xor esi, esi }
	__asm { L_00bb042d: }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00bb1300 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00bb043c: }
	__asm { inc dword ptr [esi + 4] }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00bb0470 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov dword ptr [edx + 0x14], esi }
	__asm { jmp L_00bb0472 }
	__asm { L_00bb0470: }
	__asm { xor edx, edx }
	__asm { L_00bb0472: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_00baf400 }
	__asm { test ebx, ebx }
	__asm { je L_00bb0484 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { L_00bb0484: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130f2d0[];
extern "C" char g_0130f2d4[];
extern "C" char g_0130f2d8[];
extern "C" char g_0130f2dc[];
extern "C" void fn_0049a1e0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b9a6a0();
extern "C" void fn_00baf690();
extern "C" void fn_00baf830();
extern "C" void fn_00baf860();
extern "C" void fn_00bafb80();
extern "C" void fn_00bb0830();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bb0560
extern "C" __declspec(naked) void asm_00bb0560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c3f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bb0830 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { dec dword ptr [ebx + 4] }
	__asm { jne L_00bb0698 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_00bb0606 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00bafb80 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [eax + 0x24], ebx }
	__asm { je L_00bb0606 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb05f1 }
	__asm { push 0xbf }
	__asm { push 0xed0100 }
	__asm { push 0xed0148 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb0606 }
	__asm { L_00bb05f1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed0170 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb0606: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00baf860 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9a6a0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00bb0685 }
	__asm { cmp dword ptr [ebp + 0xc], 1 }
	__asm { je L_00bb0685 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb0674 }
	__asm { push 0xc1 }
	__asm { push 0xed0100 }
	__asm { push 0xed01f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb0685 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bb0674: }
	__asm { movzx eax, cl }
	__asm { push 0xed01f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb0685: }
	__asm { mov ecx, ebx }
	__asm { call fn_00baf690 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { L_00bb0698: }
	__asm { test esi, esi }
	__asm { je L_00bb069f }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00bb069f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5cf7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f2dc] }
	__asm { test al, 1 }
	__asm { jne L_00bb0717 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f2dc], eax }
	__asm { mov ecx, 0x130f2d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f2d0], 0 }
	__asm { mov dword ptr [g_0130f2d4], 0 }
	__asm { call fn_00baf830 }
	__asm { push 0xe07d90 }
	__asm { mov dword ptr [g_0130f2d0], eax }
	__asm { mov byte ptr [g_0130f2d8], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bb0717: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_00bb0960();
// FUNCTION: ROBLOXSTUDIO 0x00bb08c0
extern "C" __declspec(naked) void asm_00bb08c0()
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
	__asm { call fn_00bb0960 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00bb0937 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bb0936 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00bb0936 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb0936: }
	__asm { pop ebx }
	__asm { L_00bb0937: }
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

extern "C" char g_00e10260[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bb09f0
extern "C" __declspec(naked) void asm_00bb09f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp eax, 0x6666665 }
	__asm { jb L_00bb0a17 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0xf13d5c }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00bb0a17: }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, ecx }
	__asm { jne L_00bb0a38 }
	__asm { mov dword ptr [ecx + 4], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax + 8], ebx }
	__asm { jmp L_00bb0a57 }
	__asm { L_00bb0a38: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00bb0a4a }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_00bb0a57 }
	__asm { mov dword ptr [ecx], ebx }
	__asm { jmp L_00bb0a57 }
	__asm { L_00bb0a4a: }
	__asm { mov dword ptr [eax + 8], ebx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_00bb0a57 }
	__asm { mov dword ptr [ecx + 8], ebx }
	__asm { L_00bb0a57: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, ebx }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { jne L_00bb0be2 }
	__asm { push esi }
	__asm { L_00bb0a67: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, dword ptr [esi] }
	__asm { cmp ecx, edx }
	__asm { jne L_00bb0b22 }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { cmp byte ptr [edx + 0xc], 0 }
	__asm { je L_00bb0b28 }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_00bb0ac3 }
	__asm { mov eax, ecx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00bb0a9e }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00bb0a9e: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_00bb0ab0 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { jmp L_00bb0abe }
	__asm { L_00bb0ab0: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_00bb0abb }
	__asm { mov dword ptr [ecx], edx }
	__asm { jmp L_00bb0abe }
	__asm { L_00bb0abb: }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { L_00bb0abe: }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_00bb0ac3: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov byte ptr [ecx + 0xc], 1 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov esi, dword ptr [edx] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00bb0aed }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { L_00bb0aed: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { jne L_00bb0b05 }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_00bb0bd1 }
	__asm { L_00bb0b05: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp edx, dword ptr [ecx + 8] }
	__asm { jne L_00bb0b18 }
	__asm { mov dword ptr [ecx + 8], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_00bb0bd1 }
	__asm { L_00bb0b18: }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_00bb0bd1 }
	__asm { L_00bb0b22: }
	__asm { cmp byte ptr [edx + 0xc], 0 }
	__asm { jne L_00bb0b45 }
	__asm { L_00bb0b28: }
	__asm { mov byte ptr [ecx + 0xc], 1 }
	__asm { mov byte ptr [edx + 0xc], 1 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { jmp L_00bb0bd4 }
	__asm { L_00bb0b45: }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_00bb0b85 }
	__asm { mov eax, ecx }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00bb0b5e }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00bb0b5e: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_00bb0b70 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { jmp L_00bb0b7f }
	__asm { L_00bb0b70: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_00bb0b7d }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { jmp L_00bb0b7f }
	__asm { L_00bb0b7d: }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_00bb0b7f: }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_00bb0b85: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov byte ptr [ecx + 0xc], 1 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov esi, dword ptr [edx + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00bb0baf }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { L_00bb0baf: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { jne L_00bb0bc1 }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { jmp L_00bb0bcf }
	__asm { L_00bb0bc1: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { jne L_00bb0bcc }
	__asm { mov dword ptr [ecx], esi }
	__asm { jmp L_00bb0bcf }
	__asm { L_00bb0bcc: }
	__asm { mov dword ptr [ecx + 8], esi }
	__asm { L_00bb0bcf: }
	__asm { mov dword ptr [esi], edx }
	__asm { L_00bb0bd1: }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { L_00bb0bd4: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { je L_00bb0a67 }
	__asm { pop esi }
	__asm { L_00bb0be2: }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov byte ptr [eax + 0xc], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00409af0();
extern "C" void fn_0040d6f0();
extern "C" void fn_00baf7c0();
extern "C" void fn_00bb09f0();
extern "C" void fn_00bb0ea0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bb0c00
extern "C" __declspec(naked) void asm_00bb0c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5cfa0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 4], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00bb0c5b }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebx] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00bb09f0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00bb0c5b: }
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, dword ptr [edi] }
	__asm { jne L_00bb0cf5 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { movss xmm0, dword ptr [esi + 0x10] }
	__asm { movss xmm1, dword ptr [edi] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00bb0cce }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bb0e6c }
	__asm { movss xmm1, dword ptr [edi + 4] }
	__asm { movss xmm0, dword ptr [esi + 0x14] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00bb0cce }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bb0e6c }
	__asm { movss xmm1, dword ptr [edi + 8] }
	__asm { movss xmm0, dword ptr [esi + 0x18] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00bb0cce }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bb0e6c }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { cmp eax, ecx }
	__asm { jl L_00bb0cce }
	__asm { jg L_00bb0e6c }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { cmp eax, dword ptr [esi + 0x20] }
	__asm { jge L_00bb0e6c }
	__asm { L_00bb0cce: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00bb09f0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00bb0cf5: }
	__asm { cmp esi, edi }
	__asm { jne L_00bb0d3b }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x13] }
	__asm { call fn_00baf7c0 }
	__asm { test al, al }
	__asm { je L_00bb0e6c }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00bb09f0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00bb0d3b: }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { call fn_00baf7c0 }
	__asm { test al, al }
	__asm { je L_00bb0dc5 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { call fn_0040d6f0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { push eax }
	__asm { call fn_00baf7c0 }
	__asm { test al, al }
	__asm { je L_00bb0dc2 }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { je L_00bb0da1 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00bb09f0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00bb0da1: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00bb09f0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00bb0dc2: }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { L_00bb0dc5: }
	__asm { push ebx }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { call fn_00baf7c0 }
	__asm { test al, al }
	__asm { je L_00bb0e66 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { call fn_00409af0 }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { cmp ebx, edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { je L_00bb0e00 }
	__asm { lea eax, [ebx + 0x10] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea ecx, [ebp + 0x13] }
	__asm { call fn_00baf7c0 }
	__asm { test al, al }
	__asm { je L_00bb0e69 }
	__asm { L_00bb0e00: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { je L_00bb0e31 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00bb09f0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00bb0e31: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00bb09f0 }
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
	__asm { L_00bb0e66: }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { L_00bb0e69: }
	__asm { mov ebx, dword ptr [ebp - 0x18] }
	__asm { L_00bb0e6c: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push edi }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00bb0ea0 }
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

extern "C" void fn_00baf530();
extern "C" void fn_00baf9d0();
extern "C" void fn_00bb0c00();
// FUNCTION: ROBLOXSTUDIO 0x00bb1300
extern "C" __declspec(naked) void asm_00bb1300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00baf9d0 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_00bb1369 }
	__asm { movss xmm1, dword ptr [edi] }
	__asm { movss xmm0, dword ptr [esi + 0x10] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00bb1369 }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bb13ac }
	__asm { movss xmm1, dword ptr [edi + 4] }
	__asm { movss xmm0, dword ptr [esi + 0x14] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00bb1369 }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bb13ac }
	__asm { movss xmm1, dword ptr [edi + 8] }
	__asm { movss xmm0, dword ptr [esi + 0x18] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00bb1369 }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bb13ac }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { cmp eax, ecx }
	__asm { jl L_00bb1369 }
	__asm { jg L_00bb13ac }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { cmp eax, dword ptr [esi + 0x20] }
	__asm { jge L_00bb13ac }
	__asm { L_00bb1369: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00baf530 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00bb0c00 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_00bb13ac: }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x24] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bb1c50();
// FUNCTION: ROBLOXSTUDIO 0x00bb1400
extern "C" __declspec(naked) void asm_00bb1400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { movss xmm0, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebx + 8] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebx + 0xc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { call fn_00bb1c50 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx + 0x1c], ecx }
	__asm { mov esi, dword ptr [ebx + 0x20] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 0x20], edx }
	__asm { test esi, esi }
	__asm { je L_00bb14a7 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb14a7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bb14a7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb14a7: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00bb14d8 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb14d8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00bb14d8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb14d8: }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bb1520
extern "C" __declspec(naked) void asm_00bb1520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [edx], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { test esi, esi }
	__asm { je L_00bb1579 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { movss dword ptr [edx], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { movss dword ptr [edx + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { movss dword ptr [edx + 8], xmm0 }
	__asm { L_00bb1579: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380b8[];
extern "C" void fn_006da0e0();
extern "C" void fn_006dea80();
extern "C" void fn_006deac0();
extern "C" void fn_009f2350();
extern "C" void fn_009f3160();
extern "C" void fn_00a206d0();
extern "C" void fn_00bc1d40();
// FUNCTION: ROBLOXSTUDIO 0x00bb1800
extern "C" __declspec(naked) void asm_00bb1800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x64 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_006da0e0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { lea ecx, [ebx + ebx*8] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { shl ecx, 2 }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { add ecx, 0x14 }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { call fn_009f3160 }
	__asm { mov esi, eax }
	__asm { mov ecx, 9 }
	__asm { rep movsd }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { call fn_006dea80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mulss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { mulss xmm1, dword ptr [edi + 4] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0x10] }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { mulss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mulss xmm1, dword ptr [edi + 0xc] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0x14] }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0x18] }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { mulss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [edi + 0x1c] }
	__asm { mulss xmm1, dword ptr [eax + 4] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0x20] }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { call fn_006deac0 }
	__asm { movss xmm1, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mulss xmm1, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mulss xmm0, dword ptr [edi + 4] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, dword ptr [edi + 8] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0xc] }
	__asm { movss dword ptr [ebp - 0x34], xmm1 }
	__asm { movss xmm1, dword ptr [edi + 0x10] }
	__asm { mulss xmm1, dword ptr [eax + 4] }
	__asm { mulss xmm0, dword ptr [eax] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, dword ptr [edi + 0x14] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0x30], xmm1 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [edi + 0x18] }
	__asm { mulss xmm1, dword ptr [eax] }
	__asm { mulss xmm0, dword ptr [edi + 0x1c] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0x20] }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [eax + 0x18] }
	__asm { addss xmm1, xmm0 }
	__asm { mov eax, 0x38e38e39 }
	__asm { movss dword ptr [ebp - 0x2c], xmm1 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { dec eax }
	__asm { add eax, edx }
	__asm { cmp ebx, eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { jne L_00bb1acf }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { add ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_00bc1d40 }
	__asm { movss xmm0, dword ptr [ebp - 0x40] }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { movss xmm2, dword ptr [ebp - 0x18] }
	__asm { subss xmm2, dword ptr [ebp - 0x24] }
	__asm { subss xmm1, dword ptr [ebp - 0x28] }
	__asm { movss dword ptr [edi + 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x3c] }
	__asm { movss dword ptr [edi + 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x38] }
	__asm { mulss xmm2, dword ptr [ebp - 0xc] }
	__asm { mulss xmm1, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [edi + 0x2c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { subss xmm0, dword ptr [ebp - 0x20] }
	__asm { addss xmm2, xmm1 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mulss xmm0, dword ptr [ebp - 8] }
	__asm { addss xmm2, xmm0 }
	__asm { movss dword ptr [ebp + 8], xmm2 }
	__asm { call fn_009f2350 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00bb1a67 }
	__asm { xorps xmm0, xmm0 }
	__asm { jmp L_00bb1a6f }
	__asm { L_00bb1a67: }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { L_00bb1a6f: }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { movss xmm2, dword ptr [ebp - 0x18] }
	__asm { subss xmm2, dword ptr [ebp - 0x24] }
	__asm { subss xmm1, dword ptr [ebp - 0x28] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { subss xmm0, dword ptr [ebp - 0x20] }
	__asm { mulss xmm2, dword ptr [ebp - 0x30] }
	__asm { mulss xmm1, dword ptr [ebp - 0x34] }
	__asm { mulss xmm0, dword ptr [ebp - 0x2c] }
	__asm { addss xmm2, xmm1 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { addss xmm2, xmm0 }
	__asm { movss dword ptr [ebp + 0xc], xmm2 }
	__asm { call fn_009f2350 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00bb1bd2 }
	__asm { movss xmm3, dword ptr [g_010380b8] }
	__asm { jmp L_00bb1bd5 }
	__asm { L_00bb1acf: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { lea ecx, [eax + eax*8] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add eax, -0x24 }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { call fn_00bc1d40 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { add eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { call fn_00a206d0 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { mov edx, dword ptr [eax + 0x18] }
	__asm { add edx, dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_00a206d0 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { addss xmm1, dword ptr [esi + 8] }
	__asm { movss xmm2, dword ptr [eax + 0xc] }
	__asm { addss xmm2, dword ptr [esi + 0xc] }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { addss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm3, dword ptr [g_010380b8] }
	__asm { mulss xmm1, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { mulss xmm0, xmm3 }
	__asm { movss dword ptr [edi + 0x2c], xmm2 }
	__asm { movss xmm2, dword ptr [ebp - 0x18] }
	__asm { subss xmm2, dword ptr [ebp - 0x24] }
	__asm { movss dword ptr [edi + 0x28], xmm1 }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { subss xmm1, dword ptr [ebp - 0x28] }
	__asm { movss dword ptr [edi + 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { mulss xmm2, dword ptr [ebp - 0xc] }
	__asm { subss xmm0, dword ptr [ebp - 0x20] }
	__asm { mulss xmm1, dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mulss xmm0, dword ptr [ebp - 8] }
	__asm { addss xmm2, xmm1 }
	__asm { movss dword ptr [ebp + 8], xmm3 }
	__asm { addss xmm2, xmm0 }
	__asm { movss dword ptr [ebp + 0xc], xmm2 }
	__asm { call fn_009f2350 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00bb1bd2 }
	__asm { xorps xmm3, xmm3 }
	__asm { movss dword ptr [ebp + 8], xmm3 }
	__asm { jmp L_00bb1bd5 }
	__asm { L_00bb1bd2: }
	__asm { xorps xmm3, xmm3 }
	__asm { L_00bb1bd5: }
	__asm { movss xmm0, dword ptr [ebp - 0x34] }
	__asm { movss xmm1, dword ptr [ebp - 0x30] }
	__asm { movss xmm2, dword ptr [ebp - 0x2c] }
	__asm { movss xmm6, dword ptr [ebp + 8] }
	__asm { movss xmm4, dword ptr [ebp - 0xc] }
	__asm { movss xmm5, dword ptr [ebp - 8] }
	__asm { mulss xmm1, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { mulss xmm0, xmm3 }
	__asm { movss xmm3, dword ptr [ebp - 0x10] }
	__asm { mulss xmm3, xmm6 }
	__asm { mulss xmm4, xmm6 }
	__asm { mulss xmm5, xmm6 }
	__asm { addss xmm3, xmm0 }
	__asm { addss xmm4, xmm1 }
	__asm { addss xmm5, xmm2 }
	__asm { mov eax, edi }
	__asm { addss xmm3, dword ptr [edi + 0x24] }
	__asm { addss xmm4, dword ptr [edi + 0x28] }
	__asm { addss xmm5, dword ptr [edi + 0x2c] }
	__asm { movss dword ptr [edi + 0x24], xmm3 }
	__asm { movss dword ptr [edi + 0x28], xmm4 }
	__asm { movss dword ptr [edi + 0x2c], xmm5 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_00baf9d0();
extern "C" void fn_00bb08c0();
extern "C" void fn_00bb10e0();
extern "C" void fn_00bb1230();
extern "C" void fn_00bb1300();
extern "C" void fn_00bb2160();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bb1c50
extern "C" __declspec(naked) void asm_00bb1c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5cfde }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { call fn_00bb2160 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { lea ebx, [esi + 8] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x30], ebx }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00baf9d0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp eax, ecx }
	__asm { je L_00bb1d05 }
	__asm { movss xmm1, dword ptr [edi] }
	__asm { movss xmm0, dword ptr [eax + 0x10] }
	__asm { comiss xmm0, xmm1 }
	__asm { mov byte ptr [ebp - 0xd], 0 }
	__asm { ja L_00bb1d05 }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bb1cfd }
	__asm { movss xmm1, dword ptr [edi + 4] }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00bb1d05 }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bb1cfd }
	__asm { movss xmm1, dword ptr [edi + 8] }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00bb1d05 }
	__asm { comiss xmm1, xmm0 }
	__asm { ja L_00bb1cfd }
	__asm { mov edx, dword ptr [edi + 0xc] }
	__asm { mov esi, dword ptr [eax + 0x1c] }
	__asm { cmp edx, esi }
	__asm { jl L_00bb1d05 }
	__asm { jg L_00bb1cfd }
	__asm { mov edx, dword ptr [edi + 0x10] }
	__asm { cmp edx, dword ptr [eax + 0x20] }
	__asm { jl L_00bb1d05 }
	__asm { L_00bb1cfd: }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { jmp L_00bb1d0b }
	__asm { L_00bb1d05: }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { L_00bb1d0b: }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, ecx }
	__asm { je L_00bb1d16 }
	__asm { mov esi, dword ptr [eax + 0x24] }
	__asm { jmp L_00bb1d6c }
	__asm { L_00bb1d16: }
	__asm { push 8 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00bb1d5b }
	__asm { push 0x38 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00bb1230 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00bb1d55 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00bb10e0 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00bb1d5d }
	__asm { L_00bb1d55: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00bb1d5d }
	__asm { L_00bb1d5b: }
	__asm { xor esi, esi }
	__asm { L_00bb1d5d: }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00bb1300 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00bb1d6c: }
	__asm { inc dword ptr [esi + 4] }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00bb1da0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov dword ptr [edx + 0x14], esi }
	__asm { jmp L_00bb1da2 }
	__asm { L_00bb1da0: }
	__asm { xor edx, edx }
	__asm { L_00bb1da2: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_00bb08c0 }
	__asm { test ebx, ebx }
	__asm { je L_00bb1db4 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { L_00bb1db4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130f2f0[];
extern "C" char g_0130f2f4[];
extern "C" char g_0130f2f8[];
extern "C" char g_0130f2fc[];
extern "C" void fn_0049a1e0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b9a6a0();
extern "C" void fn_00baf830();
extern "C" void fn_00baf860();
extern "C" void fn_00bafb80();
extern "C" void fn_00bb11d0();
extern "C" void fn_00bb2160();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bb1e90
extern "C" __declspec(naked) void asm_00bb1e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c3f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bb2160 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { dec dword ptr [ebx + 4] }
	__asm { jne L_00bb1fc8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_00bb1f36 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00bafb80 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [eax + 0x24], ebx }
	__asm { je L_00bb1f36 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb1f21 }
	__asm { push 0xbf }
	__asm { push 0xed0100 }
	__asm { push 0xed0148 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb1f36 }
	__asm { L_00bb1f21: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed0170 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb1f36: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00baf860 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9a6a0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00bb1fb5 }
	__asm { cmp dword ptr [ebp + 0xc], 1 }
	__asm { je L_00bb1fb5 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb1fa4 }
	__asm { push 0xc1 }
	__asm { push 0xed0100 }
	__asm { push 0xed01f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb1fb5 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bb1fa4: }
	__asm { movzx eax, cl }
	__asm { push 0xed01f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb1fb5: }
	__asm { mov ecx, ebx }
	__asm { call fn_00bb11d0 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { L_00bb1fc8: }
	__asm { test esi, esi }
	__asm { je L_00bb1fcf }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00bb1fcf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d00e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f2fc] }
	__asm { test al, 1 }
	__asm { jne L_00bb2047 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f2fc], eax }
	__asm { mov ecx, 0x130f2f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f2f0], 0 }
	__asm { mov dword ptr [g_0130f2f4], 0 }
	__asm { call fn_00baf830 }
	__asm { push 0xe07e10 }
	__asm { mov dword ptr [g_0130f2f0], eax }
	__asm { mov byte ptr [g_0130f2f8], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bb2047: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_00bb2290();
// FUNCTION: ROBLOXSTUDIO 0x00bb21f0
extern "C" __declspec(naked) void asm_00bb21f0()
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
	__asm { call fn_00bb2290 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00bb2267 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bb2266 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00bb2266 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb2266: }
	__asm { pop ebx }
	__asm { L_00bb2267: }
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

extern "C" void fn_00bb2930();
// FUNCTION: ROBLOXSTUDIO 0x00bb2550
extern "C" __declspec(naked) void asm_00bb2550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00bb2930 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx + 0x1c], ecx }
	__asm { mov esi, dword ptr [ebx + 0x20] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 0x20], edx }
	__asm { test esi, esi }
	__asm { je L_00bb25df }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb25df }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bb25df }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb25df: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00bb2610 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb2610 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00bb2610 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb2610: }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038098[];
extern "C" char g_01038120[];
extern "C" void fn_006d19c0();
// FUNCTION: ROBLOXSTUDIO 0x00bb2710
extern "C" __declspec(naked) void asm_00bb2710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { movss xmm2, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { movss xmm6, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { movss xmm3, dword ptr [ebp - 0xc] }
	__asm { movaps xmm1, xmm3 }
	__asm { addss xmm1, xmm2 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, xmm2 }
	__asm { movaps xmm4, xmm3 }
	__asm { mulss xmm1, xmm6 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { mulss xmm4, xmm6 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { movaps xmm7, xmm4 }
	__asm { mulss xmm7, xmm3 }
	__asm { mulss xmm1, dword ptr [g_01038120] }
	__asm { movaps xmm5, xmm6 }
	__asm { mulss xmm5, xmm2 }
	__asm { mulss xmm1, dword ptr [g_01038120] }
	__asm { movss dword ptr [ebp - 8], xmm4 }
	__asm { movaps xmm4, xmm7 }
	__asm { divss xmm0, xmm1 }
	__asm { mulss xmm4, xmm3 }
	__asm { movss dword ptr [ebp + 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { mulss xmm4, dword ptr [g_01038098] }
	__asm { movaps xmm1, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { movaps xmm2, xmm5 }
	__asm { mulss xmm2, xmm6 }
	__asm { mulss xmm1, xmm0 }
	__asm { movaps xmm0, xmm5 }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm1, xmm3 }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm1, dword ptr [g_01038098] }
	__asm { movaps xmm6, xmm2 }
	__asm { mulss xmm6, dword ptr [ebp - 0x10] }
	__asm { addss xmm1, xmm4 }
	__asm { mulss xmm2, xmm3 }
	__asm { mulss xmm6, dword ptr [g_01038098] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm6 }
	__asm { mulss xmm0, xmm3 }
	__asm { movss xmm3, dword ptr [ebp - 4] }
	__asm { mulss xmm3, dword ptr [ebp - 0x14] }
	__asm { mulss xmm0, dword ptr [g_01038098] }
	__asm { addss xmm1, xmm2 }
	__asm { movaps xmm2, xmm3 }
	__asm { mulss xmm2, dword ptr [ebp - 0x14] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { mulss xmm2, dword ptr [g_01038098] }
	__asm { mulss xmm1, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebp - 0x20], xmm1 }
	__asm { movaps xmm1, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { mulss xmm0, dword ptr [ebp - 0x14] }
	__asm { mulss xmm1, dword ptr [ebp - 0x14] }
	__asm { mulss xmm0, dword ptr [ebp - 0x14] }
	__asm { mulss xmm1, dword ptr [g_01038098] }
	__asm { addss xmm1, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { mulss xmm5, xmm0 }
	__asm { mulss xmm7, xmm0 }
	__asm { addss xmm1, xmm4 }
	__asm { mulss xmm5, xmm0 }
	__asm { addss xmm1, xmm7 }
	__asm { movss xmm7, dword ptr [g_01038098] }
	__asm { mulss xmm5, xmm7 }
	__asm { mulss xmm0, xmm0 }
	__asm { addss xmm1, xmm5 }
	__asm { movss xmm5, dword ptr [ebp - 0x10] }
	__asm { mulss xmm0, dword ptr [ebp - 0x14] }
	__asm { mulss xmm3, xmm5 }
	__asm { mulss xmm1, dword ptr [ebp + 0xc] }
	__asm { mulss xmm0, xmm5 }
	__asm { movss dword ptr [ebp - 0x1c], xmm1 }
	__asm { movss xmm1, dword ptr [ebp - 4] }
	__asm { mulss xmm0, xmm7 }
	__asm { mulss xmm1, xmm5 }
	__asm { addss xmm0, xmm6 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mulss xmm1, xmm5 }
	__asm { sub esp, 0x24 }
	__asm { addss xmm0, xmm1 }
	__asm { movss xmm1, dword ptr [ebp - 8] }
	__asm { mulss xmm1, xmm5 }
	__asm { addss xmm0, xmm2 }
	__asm { mulss xmm1, xmm5 }
	__asm { addss xmm0, xmm3 }
	__asm { mulss xmm1, xmm7 }
	__asm { addss xmm0, xmm1 }
	__asm { mulss xmm0, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { fld dword ptr [ebp - 0x18] }
	__asm { fstp dword ptr [esp + 0x20] }
	__asm { fldz }
	__asm { fst dword ptr [esp + 0x1c] }
	__asm { fst dword ptr [esp + 0x18] }
	__asm { fst dword ptr [esp + 0x14] }
	__asm { fld dword ptr [ebp - 0x1c] }
	__asm { fstp dword ptr [esp + 0x10] }
	__asm { fst dword ptr [esp + 0xc] }
	__asm { fst dword ptr [esp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x20] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_006d19c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130f310[];
extern "C" char g_0130f314[];
extern "C" char g_0130f318[];
extern "C" char g_0130f31c[];
extern "C" void fn_0049a1e0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b9a6a0();
extern "C" void fn_00b9b4c0();
extern "C" void fn_00b9b4f0();
extern "C" void fn_00bb2420();
extern "C" void fn_00bb2650();
extern "C" void fn_00bb2cd0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bb2b00
extern "C" __declspec(naked) void asm_00bb2b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c3f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bb2cd0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { dec dword ptr [ebx + 4] }
	__asm { jne L_00bb2c38 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_00bb2ba6 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00bb2650 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [eax + 0x1c], ebx }
	__asm { je L_00bb2ba6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb2b91 }
	__asm { push 0xbf }
	__asm { push 0xed0100 }
	__asm { push 0xed0148 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb2ba6 }
	__asm { L_00bb2b91: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed0170 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb2ba6: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b9b4f0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9a6a0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00bb2c25 }
	__asm { cmp dword ptr [ebp + 0xc], 1 }
	__asm { je L_00bb2c25 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb2c14 }
	__asm { push 0xc1 }
	__asm { push 0xed0100 }
	__asm { push 0xed01f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb2c25 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bb2c14: }
	__asm { movzx eax, cl }
	__asm { push 0xed01f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb2c25: }
	__asm { mov ecx, ebx }
	__asm { call fn_00bb2420 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { L_00bb2c38: }
	__asm { test esi, esi }
	__asm { je L_00bb2c3f }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00bb2c3f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d06e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f31c] }
	__asm { test al, 1 }
	__asm { jne L_00bb2cb7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f31c], eax }
	__asm { mov ecx, 0x130f310 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f310], 0 }
	__asm { mov dword ptr [g_0130f314], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe07e90 }
	__asm { mov dword ptr [g_0130f310], eax }
	__asm { mov byte ptr [g_0130f318], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bb2cb7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_00bb2e00();
// FUNCTION: ROBLOXSTUDIO 0x00bb2d60
extern "C" __declspec(naked) void asm_00bb2d60()
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
	__asm { call fn_00bb2e00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00bb2dd7 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bb2dd6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00bb2dd6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb2dd6: }
	__asm { pop ebx }
	__asm { L_00bb2dd7: }
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

extern "C" void fn_00bb3220();
// FUNCTION: ROBLOXSTUDIO 0x00bb30c0
extern "C" __declspec(naked) void asm_00bb30c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00bb3220 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx + 0x1c], ecx }
	__asm { mov esi, dword ptr [ebx + 0x20] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 0x20], edx }
	__asm { test esi, esi }
	__asm { je L_00bb314f }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb314f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bb314f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb314f: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00bb3180 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb3180 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00bb3180 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb3180: }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130f330[];
extern "C" char g_0130f334[];
extern "C" char g_0130f338[];
extern "C" char g_0130f33c[];
extern "C" void fn_0049a1e0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b9a6a0();
extern "C" void fn_00b9b4c0();
extern "C" void fn_00b9b4f0();
extern "C" void fn_00bb2650();
extern "C" void fn_00bb2f90();
extern "C" void fn_00bb35c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bb33f0
extern "C" __declspec(naked) void asm_00bb33f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c3f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bb35c0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { dec dword ptr [ebx + 4] }
	__asm { jne L_00bb3528 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_00bb3496 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00bb2650 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [eax + 0x1c], ebx }
	__asm { je L_00bb3496 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb3481 }
	__asm { push 0xbf }
	__asm { push 0xed0100 }
	__asm { push 0xed0148 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb3496 }
	__asm { L_00bb3481: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed0170 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb3496: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b9b4f0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9a6a0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00bb3515 }
	__asm { cmp dword ptr [ebp + 0xc], 1 }
	__asm { je L_00bb3515 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb3504 }
	__asm { push 0xc1 }
	__asm { push 0xed0100 }
	__asm { push 0xed01f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb3515 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bb3504: }
	__asm { movzx eax, cl }
	__asm { push 0xed01f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb3515: }
	__asm { mov ecx, ebx }
	__asm { call fn_00bb2f90 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { L_00bb3528: }
	__asm { test esi, esi }
	__asm { je L_00bb352f }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00bb352f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d0ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f33c] }
	__asm { test al, 1 }
	__asm { jne L_00bb35a7 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f33c], eax }
	__asm { mov ecx, 0x130f330 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f330], 0 }
	__asm { mov dword ptr [g_0130f334], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe07f10 }
	__asm { mov dword ptr [g_0130f330], eax }
	__asm { mov byte ptr [g_0130f338], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bb35a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_00bb36f0();
// FUNCTION: ROBLOXSTUDIO 0x00bb3650
extern "C" __declspec(naked) void asm_00bb3650()
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
	__asm { call fn_00bb36f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00bb36c7 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bb36c6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00bb36c6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb36c6: }
	__asm { pop ebx }
	__asm { L_00bb36c7: }
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

extern "C" void fn_00403160();
extern "C" void fn_00bb3820();
// FUNCTION: ROBLOXSTUDIO 0x00bb3780
extern "C" __declspec(naked) void asm_00bb3780()
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
	__asm { call fn_00bb3820 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00bb37f7 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bb37f6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00bb37f6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb37f6: }
	__asm { pop ebx }
	__asm { L_00bb37f7: }
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

extern "C" void fn_00bb40e0();
// FUNCTION: ROBLOXSTUDIO 0x00bb3c30
extern "C" __declspec(naked) void asm_00bb3c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00bb40e0 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx + 0x1c], ecx }
	__asm { mov esi, dword ptr [ebx + 0x20] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 0x20], edx }
	__asm { test esi, esi }
	__asm { je L_00bb3cbf }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb3cbf }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bb3cbf }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb3cbf: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00bb3cf0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb3cf0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00bb3cf0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb3cf0: }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bb3f00
extern "C" __declspec(naked) void asm_00bb3f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [edx], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { test esi, esi }
	__asm { je L_00bb3f59 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { movss dword ptr [edx], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { movss dword ptr [edx + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { movss dword ptr [edx + 8], xmm0 }
	__asm { L_00bb3f59: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0049a1e0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b9a6a0();
extern "C" void fn_00b9b4f0();
extern "C" void fn_00bb2650();
extern "C" void fn_00bb39d0();
extern "C" void fn_00bb4930();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bb4380
extern "C" __declspec(naked) void asm_00bb4380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c3f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bb4930 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { dec dword ptr [ebx + 4] }
	__asm { jne L_00bb44b8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_00bb4426 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00bb2650 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [eax + 0x1c], ebx }
	__asm { je L_00bb4426 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb4411 }
	__asm { push 0xbf }
	__asm { push 0xed0100 }
	__asm { push 0xed0148 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb4426 }
	__asm { L_00bb4411: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed0170 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb4426: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b9b4f0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9a6a0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00bb44a5 }
	__asm { cmp dword ptr [ebp + 0xc], 1 }
	__asm { je L_00bb44a5 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb4494 }
	__asm { push 0xc1 }
	__asm { push 0xed0100 }
	__asm { push 0xed01f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb44a5 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bb4494: }
	__asm { movzx eax, cl }
	__asm { push 0xed01f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb44a5: }
	__asm { mov ecx, ebx }
	__asm { call fn_00bb39d0 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { L_00bb44b8: }
	__asm { test esi, esi }
	__asm { je L_00bb44bf }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00bb44bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130f394[];
extern "C" char g_0130f398[];
extern "C" char g_0130f39c[];
extern "C" char g_0130f3a0[];
extern "C" void fn_0049a1e0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b9a6a0();
extern "C" void fn_00b9b4c0();
extern "C" void fn_00b9b4f0();
extern "C" void fn_00bb2650();
extern "C" void fn_00bb3a30();
extern "C" void fn_00bb49c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bb44d0
extern "C" __declspec(naked) void asm_00bb44d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c3f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bb49c0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 8] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { dec dword ptr [ebx + 4] }
	__asm { jne L_00bb4608 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_00bb4576 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00bb2650 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [eax + 0x1c], ebx }
	__asm { je L_00bb4576 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb4561 }
	__asm { push 0xbf }
	__asm { push 0xed0100 }
	__asm { push 0xed0148 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb4576 }
	__asm { L_00bb4561: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed0170 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb4576: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b9b4f0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9a6a0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00bb45f5 }
	__asm { cmp dword ptr [ebp + 0xc], 1 }
	__asm { je L_00bb45f5 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb45e4 }
	__asm { push 0xc1 }
	__asm { push 0xed0100 }
	__asm { push 0xed01f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb45f5 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bb45e4: }
	__asm { movzx eax, cl }
	__asm { push 0xed01f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb45f5: }
	__asm { mov ecx, ebx }
	__asm { call fn_00bb3a30 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { add esp, 4 }
	__asm { L_00bb4608: }
	__asm { test esi, esi }
	__asm { je L_00bb460f }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00bb460f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d18e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f3a0] }
	__asm { test al, 1 }
	__asm { jne L_00bb4687 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f3a0], eax }
	__asm { mov ecx, 0x130f394 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0130f394], 0 }
	__asm { mov dword ptr [g_0130f398], 0 }
	__asm { call fn_00b9b4c0 }
	__asm { push 0xe07fa0 }
	__asm { mov dword ptr [g_0130f394], eax }
	__asm { mov byte ptr [g_0130f39c], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bb4687: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303174[];
extern "C" void fn_00bac7d0();
extern "C" void fn_00bb3fd0();
// FUNCTION: ROBLOXSTUDIO 0x00bb4720
extern "C" __declspec(naked) void asm_00bb4720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_00bac7d0 }
	__asm { cmp byte ptr [g_01303174], 0 }
	__asm { je L_00bb47e0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00bb3fd0 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], edx }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00bb47af }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb47af }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bb47af }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb47af: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00bb47e0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb47e0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00bb47e0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb47e0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0058a0a0();
extern "C" void fn_00594b30();
extern "C" void fn_00bb3fd0();
// FUNCTION: ROBLOXSTUDIO 0x00bb4800
extern "C" __declspec(naked) void asm_00bb4800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d173 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { push 0x120 }
	__asm { mov edi, ecx }
	__asm { call fn_0058a0a0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00bb4844 }
	__asm { mov ecx, eax }
	__asm { call fn_00594b30 }
	__asm { jmp L_00bb4846 }
	__asm { L_00bb4844: }
	__asm { xor eax, eax }
	__asm { L_00bb4846: }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { test ecx, ecx }
	__asm { je L_00bb485e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00bb485e: }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00bb3fd0 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x28], edx }
	__asm { test esi, esi }
	__asm { je L_00bb48bd }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb48bd }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bb48bd }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb48bd: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00bb48ee }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb48ee }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00bb48ee }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb48ee: }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_00bb4917 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [edx + 8] }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb4917: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f450[];
extern "C" char g_0130f454[];
extern "C" char g_0130f458[];
extern "C" char g_0130f45c[];
extern "C" char g_0130f460[];
extern "C" char g_0130f464[];
extern "C" char g_0130f468[];
extern "C" char g_0130f46c[];
extern "C" char g_0130f470[];
extern "C" char g_0130f474[];
extern "C" char g_0130f478[];
extern "C" char g_0130f47c[];
extern "C" char g_0130f480[];
extern "C" char g_0130f484[];
extern "C" char g_0130f488[];
extern "C" char g_0130f48c[];
extern "C" char g_0130f490[];
extern "C" char g_0130f494[];
extern "C" char g_0130f498[];
extern "C" char g_0130f49c[];
extern "C" char g_0130f4a0[];
extern "C" char g_0130f4a4[];
extern "C" char g_0130f4a8[];
extern "C" char g_0130f4ac[];
extern "C" char g_0130f4b0[];
extern "C" char g_0130f4b4[];
extern "C" char g_0130f4b8[];
extern "C" char g_0130f4bc[];
extern "C" char g_0130f4c0[];
extern "C" char g_0130f4c4[];
extern "C" char g_0130f4c8[];
extern "C" char g_0130f4cc[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00bb4a50
extern "C" __declspec(naked) void asm_00bb4a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d26e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f464] }
	__asm { test al, 1 }
	__asm { jne L_00bb4a92 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f464], eax }
	__asm { push 0xeec650 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f460], eax }
	__asm { L_00bb4a92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d1ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f47c] }
	__asm { test al, 1 }
	__asm { jne L_00bb4ae2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f47c], eax }
	__asm { push 0xeec7f4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f478], eax }
	__asm { L_00bb4ae2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d1ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f484] }
	__asm { test al, 1 }
	__asm { jne L_00bb4b32 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f484], eax }
	__asm { push 0xeec7f8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f480], eax }
	__asm { L_00bb4b32: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d28e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f494] }
	__asm { test al, 1 }
	__asm { jne L_00bb4b82 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f494], eax }
	__asm { push 0xeec8e0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f490], eax }
	__asm { L_00bb4b82: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd614fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f4ac] }
	__asm { test al, 1 }
	__asm { jne L_00bb4bd2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f4ac], eax }
	__asm { push 0xeec9e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f4a8], eax }
	__asm { L_00bb4bd2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd614be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f474] }
	__asm { test al, 1 }
	__asm { jne L_00bb4c22 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f474], eax }
	__asm { push 0xeec7a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f470], eax }
	__asm { L_00bb4c22: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d20e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f4b4] }
	__asm { test al, 1 }
	__asm { jne L_00bb4c72 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f4b4], eax }
	__asm { push 0xeecbf0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f4b0], eax }
	__asm { L_00bb4c72: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6145e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f45c] }
	__asm { test al, 1 }
	__asm { jne L_00bb4cc2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f45c], eax }
	__asm { push 0xeec64c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f458], eax }
	__asm { L_00bb4cc2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d2ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f48c] }
	__asm { test al, 1 }
	__asm { jne L_00bb4d12 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f48c], eax }
	__asm { push 0xeec7fc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f488], eax }
	__asm { L_00bb4d12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d22e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f4c4] }
	__asm { test al, 1 }
	__asm { jne L_00bb4d62 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f4c4], eax }
	__asm { push 0xeecd40 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f4c0], eax }
	__asm { L_00bb4d62: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd614de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f49c] }
	__asm { test al, 1 }
	__asm { jne L_00bb4db2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f49c], eax }
	__asm { push 0xeec934 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f498], eax }
	__asm { L_00bb4db2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6147e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f454] }
	__asm { test al, 1 }
	__asm { jne L_00bb4e02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f454], eax }
	__asm { push 0xeec644 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f450], eax }
	__asm { L_00bb4e02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d2ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f46c] }
	__asm { test al, 1 }
	__asm { jne L_00bb4e52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f46c], eax }
	__asm { push 0xeec748 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f468], eax }
	__asm { L_00bb4e52: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6159e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f4bc] }
	__asm { test al, 1 }
	__asm { jne L_00bb4ea2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f4bc], eax }
	__asm { push 0xeecd3c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f4b8], eax }
	__asm { L_00bb4ea2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d24e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f4a4] }
	__asm { test al, 1 }
	__asm { jne L_00bb4ef2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f4a4], eax }
	__asm { push 0xeec988 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f4a0], eax }
	__asm { L_00bb4ef2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d2ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130f4cc] }
	__asm { test al, 1 }
	__asm { jne L_00bb4f42 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f4cc], eax }
	__asm { push 0xeecdd4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130f4c8], eax }
	__asm { L_00bb4f42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130f3a8[];
extern "C" char g_0130f3bc[];
extern "C" char g_0130f3c0[];
extern "C" char g_0130f3c4[];
extern "C" char g_0130f3c8[];
extern "C" void fn_004226b0();
extern "C" void fn_00657110();
extern "C" void fn_006b9740();
extern "C" void fn_006deac0();
extern "C" void fn_009d8740();
extern "C" void fn_009d8ad0();
extern "C" void fn_009d8ed0();
extern "C" void fn_009d90c0();
extern "C" void fn_009dd820();
extern "C" void fn_009ddb70();
extern "C" void fn_00b5cbf0();
extern "C" void fn_00bb4f50();
extern "C" void fn_00bba660();
// FUNCTION: ROBLOXSTUDIO 0x00bb5b90
extern "C" __declspec(naked) void asm_00bb5b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d367 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 4], 0xe81a00 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xedf584 }
	__asm { mov dword ptr [esi + 4], 0xedf5c0 }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x1c], 0x12 }
	__asm { call fn_00b5cbf0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov eax, dword ptr [g_0130f3c8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test al, 1 }
	__asm { jne L_00bb5c3f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f3c8], eax }
	__asm { mov dword ptr [g_0130f3bc], 0x58635fa9 }
	__asm { mov dword ptr [g_0130f3c0], 0x58635fa9 }
	__asm { mov dword ptr [g_0130f3c4], 0x58635fa9 }
	__asm { L_00bb5c3f: }
	__asm { mov eax, dword ptr [g_0130f3bc] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [g_0130f3c0] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [g_0130f3c4] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { call fn_006deac0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x48], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x4c], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov eax, dword ptr [g_0130f3c8] }
	__asm { test al, 1 }
	__asm { jne L_00bb5c9c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f3c8], eax }
	__asm { mov dword ptr [g_0130f3bc], 0x58635fa9 }
	__asm { mov dword ptr [g_0130f3c0], 0x58635fa9 }
	__asm { mov dword ptr [g_0130f3c4], 0x58635fa9 }
	__asm { L_00bb5c9c: }
	__asm { mov eax, dword ptr [g_0130f3bc] }
	__asm { mov dword ptr [esi + 0x54], eax }
	__asm { mov eax, dword ptr [g_0130f3c0] }
	__asm { mov dword ptr [esi + 0x58], eax }
	__asm { mov eax, dword ptr [g_0130f3c4] }
	__asm { mov dword ptr [esi + 0x5c], eax }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { lea ebx, [esi + 0xac] }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0xa0], 0 }
	__asm { mov word ptr [esi + 0xa8], 0 }
	__asm { mov byte ptr [esi + 0xaa], 0 }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_009dd820 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_009ddb70 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bba660 }
	__asm { cmp byte ptr [g_0130f3a8], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { je L_00bb5de9 }
	__asm { test al, al }
	__asm { je L_00bb5ddf }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00bb5ddf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb5dce }
	__asm { push 0xeb }
	__asm { push 0xedf868 }
	__asm { push 0xe7baac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb5ddf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb5dce: }
	__asm { movzx eax, al }
	__asm { push 0xedfa00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb5ddf: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_009d90c0 }
	__asm { jmp L_00bb5e33 }
	__asm { L_00bb5de9: }
	__asm { test al, al }
	__asm { je L_00bb5e2b }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00bb5e2b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb5e1a }
	__asm { push 0xeb }
	__asm { push 0xedf868 }
	__asm { push 0xe7baac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb5e2b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb5e1a: }
	__asm { movzx eax, al }
	__asm { push 0xedfa00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb5e2b: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_009d8ed0 }
	__asm { L_00bb5e33: }
	__asm { test eax, eax }
	__asm { je L_00bb5e7e }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0xfc] }
	__asm { mov dword ptr [ebp - 0x20], 0xbba9b0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { call fn_00bb4f50 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00657110 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_00bb5e7e }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00bb5e7e: }
	__asm { mov ecx, edi }
	__asm { call fn_009d8740 }
	__asm { test eax, eax }
	__asm { je L_00bb5ed0 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0xfc] }
	__asm { mov dword ptr [ebp - 0x20], 0xbba7c0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { call fn_00bb4f50 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00657110 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_00bb5ed0 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00bb5ed0: }
	__asm { mov ecx, edi }
	__asm { call fn_009d8ad0 }
	__asm { test eax, eax }
	__asm { je L_00bb5f22 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0xfc] }
	__asm { mov dword ptr [ebp - 0x20], 0xbba8d0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { call fn_00bb4f50 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_00657110 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_00bb5f22 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00bb5f22: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10140[];
extern "C" char g_00e10268[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00619df0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
extern "C" void fn_006b9e50();
extern "C" void fn_006e84d0();
extern "C" void fn_00bba660();
// FUNCTION: ROBLOXSTUDIO 0x00bb5f40
extern "C" __declspec(naked) void asm_00bb5f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d3ba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], 0xedf584 }
	__asm { mov dword ptr [edi + 4], 0xedf5c0 }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_00bba660 }
	__asm { mov esi, dword ptr [edi + 0xac] }
	__asm { lea ebx, [edi + 0xac] }
	__asm { cmp esi, dword ptr [edi + 0xb0] }
	__asm { je L_00bb5fa4 }
	__asm { L_00bb5f92: }
	__asm { mov ecx, esi }
	__asm { call fn_006b9e50 }
	__asm { add esi, 4 }
	__asm { cmp esi, dword ptr [edi + 0xb0] }
	__asm { jne L_00bb5f92 }
	__asm { L_00bb5fa4: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp esi, eax }
	__asm { je L_00bb6037 }
	__asm { L_00bb5fb8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00bb6029 }
	__asm { add eax, 5 }
	__asm { je L_00bb5fc8 }
	__asm { add eax, -5 }
	__asm { jmp L_00bb5fca }
	__asm { L_00bb5fc8: }
	__asm { xor eax, eax }
	__asm { L_00bb5fca: }
	__asm { lea ebx, [eax - 8] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00bb6029 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bb601f }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { je L_00bb601f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb600e }
	__asm { push 0xfb }
	__asm { push 0x10027e0 }
	__asm { push 0x1004bec }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb601f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb600e: }
	__asm { movzx eax, al }
	__asm { push 0x1004c00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb601f: }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00bb6029: }
	__asm { add esi, 4 }
	__asm { cmp esi, dword ptr [ebp - 0x10] }
	__asm { jne L_00bb5fb8 }
	__asm { lea ebx, [edi + 0xac] }
	__asm { L_00bb6037: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00619df0 }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00bb6078 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bb6078 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00bb6078 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb6078: }
	__asm { lea ebx, [edi + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { push dword ptr [ebx] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00bb60d3 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_00bb60cc }
	__asm { mov ecx, esi }
	__asm { call fn_006e84d0 }
	__asm { test esi, esi }
	__asm { je L_00bb60cc }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_00bb60cc: }
	__asm { mov dword ptr [ebx + 0xc], 0 }
	__asm { L_00bb60d3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 4], 0xe81a00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010385f0[];
extern "C" void fn_0057dce0();
extern "C" void fn_006cf370();
extern "C" void fn_006deac0();
extern "C" void fn_00bbabb0();
// FUNCTION: ROBLOXSTUDIO 0x00bb60f0
extern "C" __declspec(naked) void asm_00bb60f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d3e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movss xmm5, dword ptr [eax + 4] }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [eax] }
	__asm { movss xmm6, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 0xc] }
	__asm { mulss xmm6, xmm5 }
	__asm { movss xmm1, dword ptr [eax + 0x18] }
	__asm { mulss xmm2, xmm3 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x10] }
	__asm { mulss xmm0, xmm5 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { addss xmm6, dword ptr [eax + 0x24] }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { mulss xmm0, xmm4 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x1c] }
	__asm { mulss xmm0, xmm5 }
	__asm { movss dword ptr [ebp - 0x38], xmm6 }
	__asm { addss xmm2, dword ptr [eax + 0x28] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss dword ptr [ebp - 0x34], xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { addss xmm1, dword ptr [eax + 0x2c] }
	__asm { movss dword ptr [ebp - 0x30], xmm1 }
	__asm { call fn_006deac0 }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [g_010385f0] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { xorps xmm3, xmm0 }
	__asm { xorps xmm2, xmm0 }
	__asm { xorps xmm1, xmm0 }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x20], xmm3 }
	__asm { movss dword ptr [ebp - 0x1c], xmm2 }
	__asm { movss dword ptr [ebp - 0x18], xmm1 }
	__asm { call fn_006cf370 }
	__asm { add esp, 0xc }
	__asm { fld dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00bbabb0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { test ecx, ecx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { setne dl }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp + 0x1f], dl }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00bb628e }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb628e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bb628b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb628b: }
	__asm { mov dl, byte ptr [ebp + 0x1f] }
	__asm { L_00bb628e: }
	__asm { test dl, dl }
	__asm { je L_00bb62f8 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { movss xmm1, dword ptr [ebp - 0x2c] }
	__asm { movss xmm2, dword ptr [ebp - 0x28] }
	__asm { movss xmm3, dword ptr [ebp - 0x24] }
	__asm { movaps xmm0, xmm1 }
	__asm { addss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { addss xmm0, xmm2 }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm0, xmm3 }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { inc dword ptr [eax] }
	__asm { cmp byte ptr [ebp + 0x18], 0 }
	__asm { je L_00bb62f8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00bb62f8 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [eax], xmm1 }
	__asm { movss dword ptr [eax + 4], xmm2 }
	__asm { movss dword ptr [eax + 8], xmm3 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_0057dce0 }
	__asm { L_00bb62f8: }
	__asm { mov dword ptr [ebp - 0x54], 0xe461dc }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00bb6330 }
	__asm { or edi, 0xffffffff }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb6330 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00bb6330 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb6330: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc98c[];
extern "C" void fn_006b8aae();
extern "C" void fn_006b9740();
extern "C" void fn_0099c7f0();
extern "C" void fn_009ce700();
extern "C" void fn_009d8f50();
extern "C" void fn_00bb6f50();
// FUNCTION: ROBLOXSTUDIO 0x00bb6350
extern "C" __declspec(naked) void asm_00bb6350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp edx, eax }
	__asm { je L_00bb64a1 }
	__asm { mov cl, byte ptr [g_012fc98c] }
	__asm { test cl, cl }
	__asm { je L_00bb638e }
	__asm { push 0 }
	__asm { push edx }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xedfc88 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00bb638e: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { test al, al }
	__asm { je L_00bb63d8 }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { jne L_00bb63d8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb63c7 }
	__asm { push 0xeb }
	__asm { push 0xedf868 }
	__asm { push 0xe7baac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb63d8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb63c7: }
	__asm { movzx eax, al }
	__asm { push 0xedfa00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb63d8: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00bb641a }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb641a }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bb641a }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb641a: }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00bb6f50 }
	__asm { mov ebx, eax }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bb6458 }
	__asm { call fn_009d8f50 }
	__asm { test eax, eax }
	__asm { je L_00bb6458 }
	__asm { mov ecx, eax }
	__asm { call fn_0099c7f0 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { test eax, eax }
	__asm { je L_00bb6458 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 0x34] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ecx + 0x3a], al }
	__asm { L_00bb6458: }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_009ce700 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [esi], edx }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { pop ebx }
	__asm { test esi, esi }
	__asm { je L_00bb64a0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb64a0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00bb64a0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb64a0: }
	__asm { pop edi }
	__asm { L_00bb64a1: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006dea00();
extern "C" void fn_00898ee0();
extern "C" void fn_009d8f70();
extern "C" void fn_00bb8cd0();
// FUNCTION: ROBLOXSTUDIO 0x00bb9130
extern "C" __declspec(naked) void asm_00bb9130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { call fn_009d8f70 }
	__asm { test eax, eax }
	__asm { je L_00bb91cd }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { call fn_009d8f70 }
	__asm { mov esi, dword ptr [eax + 0x104] }
	__asm { mov ecx, esi }
	__asm { call fn_00898ee0 }
	__asm { mov eax, dword ptr [esi + 0xd4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0xd8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [esi + 0xdc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00bb8cd0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { subss xmm0, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { subss xmm0, dword ptr [ebp - 0x14] }
	__asm { pop esi }
	__asm { pop edi }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { subss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bb91cd: }
	__asm { call fn_006dea00 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099c7f0();
extern "C" void fn_009d8f50();
extern "C" void fn_00b5c730();
extern "C" void fn_00bb7a00();
extern "C" void fn_00bba570();
extern "C" void fn_00bba740();
extern "C" void fn_00bba7d0();
extern "C" void fn_00bba8e0();
// FUNCTION: ROBLOXSTUDIO 0x00bb9530
extern "C" __declspec(naked) void asm_00bb9530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_00bb957f }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jne L_00bb957f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb956e }
	__asm { push 0x1f7 }
	__asm { push 0xedf868 }
	__asm { push 0xedfacc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb957f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb956e: }
	__asm { movzx eax, al }
	__asm { push 0xedfc28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb957f: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bb95a2 }
	__asm { call fn_009d8f50 }
	__asm { test eax, eax }
	__asm { je L_00bb95a2 }
	__asm { mov ecx, eax }
	__asm { call fn_0099c7f0 }
	__asm { test eax, eax }
	__asm { je L_00bb95a2 }
	__asm { movzx ebx, byte ptr [eax + 0x3a] }
	__asm { jmp L_00bb95a7 }
	__asm { L_00bb95a2: }
	__asm { mov ebx, 0xf }
	__asm { L_00bb95a7: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bb95e8 }
	__asm { call fn_009d8f50 }
	__asm { test eax, eax }
	__asm { je L_00bb95e8 }
	__asm { mov ecx, eax }
	__asm { call fn_0099c7f0 }
	__asm { test eax, eax }
	__asm { je L_00bb95e8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bb95df }
	__asm { call fn_009d8f50 }
	__asm { test eax, eax }
	__asm { je L_00bb95df }
	__asm { mov ecx, eax }
	__asm { call fn_0099c7f0 }
	__asm { jmp L_00bb95e1 }
	__asm { L_00bb95df: }
	__asm { xor eax, eax }
	__asm { L_00bb95e1: }
	__asm { mov ecx, eax }
	__asm { call fn_00b5c730 }
	__asm { L_00bb95e8: }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { call eax }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bba7d0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { call eax }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bba570 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { call eax }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bba740 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { call eax }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bba8e0 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00bb7a00 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { add esp, 8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 0xc] }
}

extern "C" char g_00ee05d8[];
extern "C" char g_0130f3bc[];
extern "C" char g_0130f3c0[];
extern "C" char g_0130f3c4[];
extern "C" char g_0130f3c8[];
extern "C" void fn_006deac0();
extern "C" void fn_00999c00();
extern "C" void fn_0099c7f0();
extern "C" void fn_009d8f50();
extern "C" void fn_00bb7b70();
extern "C" void fn_00bb91f0();
// FUNCTION: ROBLOXSTUDIO 0x00bb97c0
extern "C" __declspec(naked) void asm_00bb97c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4d6e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { test edi, edi }
	__asm { je L_00bb97ff }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00bb97ff: }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov ebx, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00bb9841 }
	__asm { lea eax, [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb9841 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bb9841 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb9841: }
	__asm { mov eax, dword ptr [g_0130f3c8] }
	__asm { test al, 1 }
	__asm { jne L_00bb9878 }
	__asm { movss xmm0, dword ptr [g_00ee05d8] }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f3c8], eax }
	__asm { movss dword ptr [g_0130f3bc], xmm0 }
	__asm { mov dword ptr [g_0130f3c0], 0x58635fa9 }
	__asm { mov dword ptr [g_0130f3c4], 0x58635fa9 }
	__asm { jmp L_00bb9880 }
	__asm { L_00bb9878: }
	__asm { movss xmm0, dword ptr [g_0130f3bc] }
	__asm { L_00bb9880: }
	__asm { movss dword ptr [esi + 0x3c], xmm0 }
	__asm { movss xmm0, dword ptr [g_0130f3c0] }
	__asm { movss dword ptr [esi + 0x40], xmm0 }
	__asm { movss xmm0, dword ptr [g_0130f3c4] }
	__asm { movss dword ptr [esi + 0x44], xmm0 }
	__asm { call fn_006deac0 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi + 0x48] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0x4c] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0x50] }
	__asm { mov eax, dword ptr [g_0130f3c8] }
	__asm { test al, 1 }
	__asm { jne L_00bb98ec }
	__asm { movss xmm0, dword ptr [g_00ee05d8] }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130f3c8], eax }
	__asm { movss dword ptr [g_0130f3bc], xmm0 }
	__asm { mov dword ptr [g_0130f3c0], 0x58635fa9 }
	__asm { mov dword ptr [g_0130f3c4], 0x58635fa9 }
	__asm { jmp L_00bb98f4 }
	__asm { L_00bb98ec: }
	__asm { movss xmm0, dword ptr [g_0130f3bc] }
	__asm { L_00bb98f4: }
	__asm { movss dword ptr [esi + 0x54], xmm0 }
	__asm { movss xmm0, dword ptr [g_0130f3c0] }
	__asm { movss dword ptr [esi + 0x58], xmm0 }
	__asm { movss xmm0, dword ptr [g_0130f3c4] }
	__asm { movss dword ptr [esi + 0x5c], xmm0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x34] }
	__asm { push 0xd }
	__asm { push eax }
	__asm { call fn_00bb91f0 }
	__asm { add esp, 8 }
	__asm { cmp eax, 0x12 }
	__asm { jne L_00bb9958 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x34] }
	__asm { push 0xf }
	__asm { push eax }
	__asm { call fn_00bb91f0 }
	__asm { add esp, 8 }
	__asm { cmp eax, 0x12 }
	__asm { jne L_00bb9958 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x34] }
	__asm { push 0xe }
	__asm { push eax }
	__asm { call fn_00bb91f0 }
	__asm { add esp, 8 }
	__asm { cmp eax, 0x12 }
	__asm { je L_00bb9963 }
	__asm { L_00bb9958: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bb7b70 }
	__asm { L_00bb9963: }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { cmp dword ptr [ebp - 0x10], eax }
	__asm { je L_00bb99b9 }
	__asm { test eax, eax }
	__asm { je L_00bb99b9 }
	__asm { mov ebx, dword ptr [eax + 0xe0] }
	__asm { cmp dword ptr [ebx + 0xe0], 0 }
	__asm { je L_00bb99b9 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bb99b9 }
	__asm { call fn_009d8f50 }
	__asm { test eax, eax }
	__asm { je L_00bb99b9 }
	__asm { mov ecx, eax }
	__asm { call fn_0099c7f0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_00bb99b9 }
	__asm { mov ecx, ebx }
	__asm { call fn_0099c7f0 }
	__asm { cmp dword ptr [ebp - 0x10], eax }
	__asm { je L_00bb99b9 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax + 0x324] }
	__asm { push ebx }
	__asm { call fn_00999c00 }
	__asm { L_00bb99b9: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00bb99ea }
	__asm { or ebx, 0xffffffff }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bb99ea }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00bb99ea }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bb99ea: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006dea00();
extern "C" void fn_0099c7f0();
extern "C" void fn_009d8f50();
extern "C" void fn_00b5c730();
extern "C" void fn_00bb7920();
extern "C" void fn_00bb9a00();
// FUNCTION: ROBLOXSTUDIO 0x00bba9c0
extern "C" __declspec(naked) void asm_00bba9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { test al, al }
	__asm { je L_00bbaa0f }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00bbaa0f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bba9fe }
	__asm { push 0x1de }
	__asm { push 0xedf868 }
	__asm { push 0xedfacc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bbaa0f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bba9fe: }
	__asm { movzx eax, al }
	__asm { push 0xedfad8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bbaa0f: }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bbaa32 }
	__asm { call fn_009d8f50 }
	__asm { test eax, eax }
	__asm { je L_00bbaa32 }
	__asm { mov ecx, eax }
	__asm { call fn_0099c7f0 }
	__asm { test eax, eax }
	__asm { je L_00bbaa32 }
	__asm { movzx ebx, byte ptr [eax + 0x3a] }
	__asm { jmp L_00bbaa37 }
	__asm { L_00bbaa32: }
	__asm { mov ebx, 0xf }
	__asm { L_00bbaa37: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x34] }
	__asm { cmp eax, ebx }
	__asm { je L_00bbaa6b }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bbaa6b }
	__asm { call fn_009d8f50 }
	__asm { test eax, eax }
	__asm { je L_00bbaa6b }
	__asm { mov ecx, eax }
	__asm { call fn_0099c7f0 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_00bbaa6b }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0x34] }
	__asm { mov byte ptr [ebx + 0x3a], al }
	__asm { L_00bbaa6b: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bbaaac }
	__asm { call fn_009d8f50 }
	__asm { test eax, eax }
	__asm { je L_00bbaaac }
	__asm { mov ecx, eax }
	__asm { call fn_0099c7f0 }
	__asm { test eax, eax }
	__asm { je L_00bbaaac }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bbaaa3 }
	__asm { call fn_009d8f50 }
	__asm { test eax, eax }
	__asm { je L_00bbaaa3 }
	__asm { mov ecx, eax }
	__asm { call fn_0099c7f0 }
	__asm { jmp L_00bbaaa5 }
	__asm { L_00bbaaa3: }
	__asm { xor eax, eax }
	__asm { L_00bbaaa5: }
	__asm { mov ecx, eax }
	__asm { call fn_00b5c730 }
	__asm { L_00bbaaac: }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bb9a00 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push esi }
	__asm { call fn_00bb7920 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bbab72 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bbab72 }
	__asm { call fn_009d8f50 }
	__asm { test eax, eax }
	__asm { je L_00bbab72 }
	__asm { mov ecx, eax }
	__asm { call fn_0099c7f0 }
	__asm { test eax, eax }
	__asm { je L_00bbab72 }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bbab2c }
	__asm { call fn_009d8f50 }
	__asm { test eax, eax }
	__asm { je L_00bbab2c }
	__asm { mov ecx, eax }
	__asm { call fn_0099c7f0 }
	__asm { test eax, eax }
	__asm { je L_00bbab2c }
	__asm { movzx ebx, byte ptr [eax + 0x3a] }
	__asm { jmp L_00bbab31 }
	__asm { L_00bbab2c: }
	__asm { mov ebx, 0xf }
	__asm { L_00bbab31: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x34] }
	__asm { cmp eax, ebx }
	__asm { je L_00bbab72 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bbab5d }
	__asm { push 0x1ef }
	__asm { push 0xedf868 }
	__asm { push 0xedfb38 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bbab72 }
	__asm { L_00bbab5d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xedfb88 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bbab72: }
	__asm { mov esi, dword ptr [esi] }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { pop edi }
	__asm { mov byte ptr [ecx + 0x213], 0 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx + 0x214] }
	__asm { pop esi }
	__asm { fld dword ptr [eax + 4] }
	__asm { pop ebx }
	__asm { fstp dword ptr [ecx + 0x218] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 0x21c] }
	__asm { pop ebp }
	__asm { ret }
}

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00421eb0();
extern "C" void fn_006b9740();
extern "C" void fn_00891b10();
extern "C" void fn_0099c7f0();
extern "C" void fn_00a4df20();
// FUNCTION: ROBLOXSTUDIO 0x00bbabb0
extern "C" __declspec(naked) void asm_00bbabb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d5e1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00bbac73 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp dword ptr [eax + 0x324], 0 }
	__asm { jne L_00bbac30 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bbac1b }
	__asm { push 0x442 }
	__asm { push 0xedf868 }
	__asm { push 0xedffc0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bbac30 }
	__asm { L_00bbac1b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee0288 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bbac30: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bbac73 }
	__asm { test edi, edi }
	__asm { jne L_00bbac73 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bbac5e }
	__asm { push 0x445 }
	__asm { push 0xedf868 }
	__asm { push 0xee02f4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bbac73 }
	__asm { L_00bbac5e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee0308 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bbac73: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push 1 }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea edx, [esi + 4] }
	__asm { push edx }
	__asm { mov dword ptr [esi + 0xa4], edi }
	__asm { mov eax, dword ptr [eax + 0x324] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0xb4] }
	__asm { call fn_00a4df20 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test ebx, ebx }
	__asm { je L_00bbad67 }
	__asm { mov ecx, ebx }
	__asm { call fn_0099c7f0 }
	__asm { cmp eax, edi }
	__asm { je L_00bbad67 }
	__asm { push ebx }
	__asm { call fn_00891b10 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { test edi, edi }
	__asm { je L_00bbad39 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bbad39 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bbad39 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bbad39: }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00bbad67 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bbad67 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_00bbad67 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00bbad67: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_010380e8[];
extern "C" void fn_006a41d0();
extern "C" void fn_009870a0();
// FUNCTION: ROBLOXSTUDIO 0x00bbd460
extern "C" __declspec(naked) void asm_00bbd460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d62c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { fld qword ptr [g_010380e8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fstp qword ptr [ebp - 0x18] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { test eax, eax }
	__asm { je L_00bbd4ac }
	__asm { add eax, 0xa0 }
	__asm { jmp L_00bbd4ae }
	__asm { L_00bbd4ac: }
	__asm { xor eax, eax }
	__asm { L_00bbd4ae: }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00bbd4c9 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00bbd4c9: }
	__asm { push 0 }
	__asm { push 0xa }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { call fn_009870a0 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xee075c }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [edi + 0x208], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00bbd54c }
	__asm { mov dword ptr [edi + 0x208], ecx }
	__asm { test cl, 1 }
	__asm { je L_00bbd535 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edi + 0x210], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edi + 0x214], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edi + 0x218], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edi + 0x21c], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edi + 0x220], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edi + 0x224], eax }
	__asm { jmp L_00bbd54c }
	__asm { L_00bbd535: }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x210] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bbd54c: }
	__asm { mov ecx, dword ptr [ebp + 0x34] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [edi + 0x228], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00bbd5bb }
	__asm { mov dword ptr [edi + 0x228], ecx }
	__asm { test cl, 1 }
	__asm { je L_00bbd5a4 }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [edi + 0x230], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [edi + 0x234], eax }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [edi + 0x238], eax }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [edi + 0x23c], eax }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [edi + 0x240], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [edi + 0x244], eax }
	__asm { jmp L_00bbd5bb }
	__asm { L_00bbd5a4: }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x230] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x3c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bbd5bb: }
	__asm { lea eax, [ebp + 0x13] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x24c] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov byte ptr [edi + 0x248], 0 }
	__asm { call fn_006a41d0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [edi + 0x260], 0 }
	__asm { mov dword ptr [edi + 0x264], 0 }
	__asm { mov byte ptr [edi + 0x8c], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00bbd61e }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bbd61e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00bbd61e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bbd61e: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00bbd649 }
	__asm { test al, 1 }
	__asm { jne L_00bbd642 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bbd642 }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bbd642: }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { L_00bbd649: }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00bbd670 }
	__asm { test al, 1 }
	__asm { jne L_00bbd670 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bbd670 }
	__asm { lea ecx, [ebp + 0x3c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bbd670: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00bbd780
extern "C" __declspec(naked) void asm_00bbd780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp esi, edi }
	__asm { je L_00bbd799 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00403540 }
	__asm { L_00bbd799: }
	__asm { mov edx, dword ptr [edi + 0x1c] }
	__asm { mov ebx, dword ptr [edi + 0x18] }
	__asm { test edx, edx }
	__asm { je L_00bbd7af }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00bbd7af: }
	__asm { mov dword ptr [esi + 0x18], ebx }
	__asm { mov edi, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], edx }
	__asm { test edi, edi }
	__asm { je L_00bbd7e2 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bbd7e2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00bbd7e2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bbd7e2: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00403540();
extern "C" void fn_00410540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bbd7f0
extern "C" __declspec(naked) void asm_00bbd7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d690 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { jne L_00bbd844 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x20], 0xe19198 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00410540 }
	__asm { L_00bbd844: }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { test eax, eax }
	__asm { je L_00bbd86a }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00bbd86a: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 0x24 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov ebx, eax }
	__asm { jb L_00bbd8b9 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bbd8b9: }
	__asm { mov esi, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00bbd8ff }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bbd8ff }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00bbd8ff }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bbd8ff: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e1027c[];
extern "C" char g_00e102d4[];
extern "C" char g_00e1031c[];
extern "C" char g_00e1038c[];
extern "C" char g_00e10394[];
extern "C" void fn_00402ec0();
extern "C" void fn_004033d0();
extern "C" void fn_00403540();
extern "C" void fn_00427010();
extern "C" void fn_0049a1e0();
extern "C" void fn_00532500();
extern "C" void fn_00532520();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00b88090();
extern "C" void fn_00bbdf70();
extern "C" void fn_00bbe0a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bbda9e
extern "C" __declspec(naked) void asm_00bbda9e()
{
	__asm { cmp dword ptr [ebp + 0xc], 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jne L_00bbdc5b }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { jne L_00bbdbab }
	__asm { lea ecx, [ebp - 0xa4] }
	__asm { mov dword ptr [ebp - 0xf4], 0x102c20c }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xf0] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xf4] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { call dword ptr [g_00e10394] }
	__asm { mov eax, dword ptr [ebp - 0xf4] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xf4], 0xe3b85c }
	__asm { mov eax, dword ptr [ebp - 0xf4] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x50] }
	__asm { mov dword ptr [ebp + ecx - 0xf8], eax }
	__asm { lea ecx, [ebp - 0xf0] }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [ebp - 0xf0], 0xe1827c }
	__asm { mov dword ptr [ebp - 0xb8], 0 }
	__asm { mov dword ptr [ebp - 0xb4], 4 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, edx }
	__asm { call dword ptr [g_00e1027c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xf4] }
	__asm { call dword ptr [g_00e1038c] }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test eax, eax }
	__asm { je L_00bbdb91 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xf4] }
	__asm { call fn_00532500 }
	__asm { jmp L_00bbdb93 }
	__asm { L_00bbdb91: }
	__asm { xor eax, eax }
	__asm { L_00bbdb93: }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00b88090 }
	__asm { lea ecx, [ebp - 0xf4] }
	__asm { call fn_00532520 }
	__asm { L_00bbdbab: }
	__asm { or edi, 0xffffffff }
	__asm { L_00bbdbae: }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x38], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { cmp ecx, eax }
	__asm { je L_00bbdbe6 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00bbdbe6: }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { test esi, esi }
	__asm { je L_00bbdbfc }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00bbdbfc: }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { mov dword ptr [ebp - 0x20], edx }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [ebp - 0x3c], ebx }
	__asm { test ebx, ebx }
	__asm { je L_00bbdc36 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bbdc36 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bbdc36 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bbdc36: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [esi + 0x264] }
	__asm { sub eax, 0 }
	__asm { je L_00bbdcb1 }
	__asm { dec eax }
	__asm { jne L_00bbdce1 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bbdf70 }
	__asm { jmp L_00bbdce1 }
	__asm { L_00bbdc5b: }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x50], esi }
	__asm { test esi, esi }
	__asm { je L_00bbdbab }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bbdbae }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bbdbae }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { jmp L_00bbdbae }
	__asm { L_00bbdcb1: }
	__asm { lea ebx, [esi + 0x260] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 0x58], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x5c], ebx }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x24c] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00bbe0a0 }
	__asm { test ebx, ebx }
	__asm { je L_00bbdce1 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { L_00bbdce1: }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { test esi, esi }
	__asm { je L_00bbdd10 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bbdd10 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bbdd10 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bbdd10: }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { jb L_00bbddaa }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_00bbddaa }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00bbdd4c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00bbdd4f }
	__asm { L_00bbdd4c: }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { L_00bbdd4f: }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { add ebx, 0x60 }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_00bbdd5d }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { L_00bbdd5d: }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push 0xee0778 }
	__asm { push 3 }
	__asm { push esi }
	__asm { call fn_00773930 }
	__asm { add esp, 0x18 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { call fn_004033d0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push edi }
	__asm { call fn_00402ec0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ecx + 0x228] }
	__asm { call fn_00427010 }
	__asm { mov eax, 0xbbdda7 }
	__asm { ret }
	__asm { or edi, 0xffffffff }
	__asm { L_00bbddaa: }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00bbdddb }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bbdddb }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00bbdddb }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bbdddb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bbde20
extern "C" __declspec(naked) void asm_00bbde20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00bbdecd }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { dec edx }
	__asm { and edx, dword ptr [esi + 0xc] }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00bbde8c }
	__asm { lea ecx, [ebx + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bbde8c }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00bbde8c }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bbde8c: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00bbde9c }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bbde9c: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { dec dword ptr [esi + 0x10] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { jne L_00bbdeca }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bbdeca: }
	__asm { inc dword ptr [esi + 0xc] }
	__asm { L_00bbdecd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402ec0();
extern "C" void fn_004033d0();
extern "C" void fn_00403540();
extern "C" void fn_00427010();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00bbd7f0();
// FUNCTION: ROBLOXSTUDIO 0x00bbdf70
extern "C" __declspec(naked) void asm_00bbdf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d730 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { sub esp, 8 }
	__asm { mov esi, ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00bbdfc3 }
	__asm { lea ecx, [eax + 4] }
	__asm { mov eax, 1 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { L_00bbdfc3: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [esi + 0x208] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00bbd7f0 }
	__asm { test eax, eax }
	__asm { jne L_00bbe07f }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push ebx }
	__asm { call fn_00402ec0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { lea ecx, [edi + 0x228] }
	__asm { call fn_00427010 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { jb L_00bbe045 }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { L_00bbe045: }
	__asm { add edi, 0x60 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00bbe050 }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_00bbe050: }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { push 0xee0798 }
	__asm { push 3 }
	__asm { push esi }
	__asm { call fn_00773930 }
	__asm { add esp, 0x18 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004033d0 }
	__asm { mov eax, 0xbbe07f }
	__asm { ret }
	__asm { L_00bbe07f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10338[];
extern "C" void fn_00403540();
extern "C" void fn_00a1bd10();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bbe0a0
extern "C" __declspec(naked) void asm_00bbe0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e10338] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { inc eax }
	__asm { cmp dword ptr [edi + 8], eax }
	__asm { ja L_00bbe0d7 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00a1bd10 }
	__asm { L_00bbe0d7: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { dec ecx }
	__asm { and dword ptr [edi + 0xc], ecx }
	__asm { add eax, dword ptr [edi + 0xc] }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { lea ebx, [ecx*4] }
	__asm { cmp dword ptr [ebx + eax], 0 }
	__asm { jne L_00bbe112 }
	__asm { push 0x20 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00bbe10c }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00bbe10c: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebx + eax], ecx }
	__asm { L_00bbe112: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ebx, dword ptr [ebx + eax] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00bbe167 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebx + 0x1c], eax }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00bbe167 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00bbe167: }
	__asm { inc dword ptr [edi + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" char g_00e10388[];
extern "C" void fn_00665750();
extern "C" void fn_00665790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bbe2b0
extern "C" __declspec(naked) void asm_00bbe2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d770 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi], 0 }
	__asm { jne L_00bbe3ff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 0x12f8550 }
	__asm { push 0x4000 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call fn_00665790 }
	__asm { lea edi, [esi + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp edi, eax }
	__asm { je L_00bbe341 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { L_00bbe341: }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push 0x2000 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp + 0xb], 0xff }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00665750 }
	__asm { lea edi, [esi + 0x14] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp edi, eax }
	__asm { je L_00bbe3a6 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { jmp L_00bbe3a9 }
	__asm { L_00bbe3a6: }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { L_00bbe3a9: }
	__asm { mov byte ptr [esi], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { pop edi }
	__asm { test edx, edx }
	__asm { je L_00bbe3de }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_00bbe3de: }
	__asm { cmp dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00bbe3ff }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bbe3ff: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00ea4e08[];
extern "C" char g_00ee1294[];
extern "C" void fn_00bbe960();
// FUNCTION: ROBLOXSTUDIO 0x00bbe4b0
extern "C" __declspec(naked) void asm_00bbe4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { movss xmm0, dword ptr [eax + 0x24] }
	__asm { subss xmm0, dword ptr [edx + 0x24] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { sub esp, 0xc }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x28] }
	__asm { subss xmm0, dword ptr [edx + 0x28] }
	__asm { mov ecx, esp }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x2c] }
	__asm { subss xmm0, dword ptr [edx + 0x2c] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { call fn_00bbe960 }
	__asm { xorps xmm0, xmm0 }
	__asm { movss xmm1, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x10 }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_00bbe525 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00bbe525: }
	__asm { comiss xmm1, dword ptr [g_00ea4e08] }
	__asm { jbe L_00bbe53b }
	__asm { mov byte ptr [esi + 4], 0xff }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00bbe53b: }
	__asm { mulss xmm1, dword ptr [g_00ee1294] }
	__asm { cvttss2si eax, xmm1 }
	__asm { mov byte ptr [esi + 4], al }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01038064[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00bbe960();
// FUNCTION: ROBLOXSTUDIO 0x00bbea40
extern "C" __declspec(naked) void asm_00bbea40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { je L_00bbeae3 }
	__asm { cmp edi, dword ptr [eax + 0x1ec] }
	__asm { jbe L_00bbea9f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bbea8a }
	__asm { push 0xea }
	__asm { push 0xee0880 }
	__asm { push 0xee1174 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bbea9f }
	__asm { L_00bbea8a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee1190 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bbea9f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bbeae3 }
	__asm { cmp esi, 0x50 }
	__asm { jb L_00bbeae3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bbeace }
	__asm { push 0xeb }
	__asm { push 0xee0880 }
	__asm { push 0xee11fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bbeae3 }
	__asm { L_00bbeace: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee1220 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bbeae3: }
	__asm { xorps xmm3, xmm3 }
	__asm { movaps xmm4, xmm3 }
	__asm { movaps xmm5, xmm3 }
	__asm { xor ebx, ebx }
	__asm { movss dword ptr [ebp - 0x1c], xmm3 }
	__asm { movss dword ptr [ebp - 0x18], xmm4 }
	__asm { movss dword ptr [ebp - 0x14], xmm5 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00bbeb9a }
	__asm { movss xmm6, dword ptr [g_01038064] }
	__asm { L_00bbeb14: }
	__asm { mov edi, esi }
	__asm { sub edi, ebx }
	__asm { cmp ebx, esi }
	__asm { jbe L_00bbeb1f }
	__asm { add edi, 0x50 }
	__asm { L_00bbeb1f: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { inc ebx }
	__asm { lea esi, [eax + edi*4] }
	__asm { mov edx, dword ptr [edi + esi + 0x58] }
	__asm { mov al, byte ptr [edi + esi + 0x5c] }
	__asm { mov byte ptr [ebp - 0xc], al }
	__asm { mov eax, edx }
	__asm { shr eax, 8 }
	__asm { movsx eax, al }
	__asm { movzx ecx, dl }
	__asm { inc ecx }
	__asm { imul eax, ecx }
	__asm { cvtsi2ss xmm2, eax }
	__asm { mov eax, edx }
	__asm { shr eax, 0x10 }
	__asm { movsx eax, al }
	__asm { imul eax, ecx }
	__asm { cvtsi2ss xmm1, eax }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { shr edx, 0x18 }
	__asm { movsx eax, dl }
	__asm { imul eax, ecx }
	__asm { cvtsi2ss xmm0, eax }
	__asm { movzx eax, byte ptr [edi + esi + 0x5c] }
	__asm { add dword ptr [ebp - 4], eax }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mulss xmm2, xmm6 }
	__asm { mulss xmm1, xmm6 }
	__asm { mulss xmm0, xmm6 }
	__asm { addss xmm3, xmm2 }
	__asm { addss xmm4, xmm1 }
	__asm { addss xmm5, xmm0 }
	__asm { cmp ebx, dword ptr [ebp + 0x10] }
	__asm { jb L_00bbeb14 }
	__asm { movss dword ptr [ebp - 0x1c], xmm3 }
	__asm { movss dword ptr [ebp - 0x18], xmm4 }
	__asm { movss dword ptr [ebp - 0x14], xmm5 }
	__asm { L_00bbeb9a: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push esi }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { call fn_00bbe960 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 0x10 }
	__asm { mov ecx, 0xff }
	__asm { cmp eax, ecx }
	__asm { cmova eax, ecx }
	__asm { mov byte ptr [esi + 4], al }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01038064[];
// FUNCTION: ROBLOXSTUDIO 0x00bbec10
extern "C" __declspec(naked) void asm_00bbec10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [g_01038064] }
	__asm { mov eax, ebx }
	__asm { shr eax, 8 }
	__asm { movsx eax, al }
	__asm { movzx edx, bl }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { inc edx }
	__asm { imul eax, edx }
	__asm { cvtsi2ss xmm0, eax }
	__asm { mov eax, ebx }
	__asm { shr eax, 0x10 }
	__asm { movsx eax, al }
	__asm { imul eax, edx }
	__asm { mulss xmm0, xmm1 }
	__asm { shr ebx, 0x18 }
	__asm { movss dword ptr [ecx], xmm0 }
	__asm { cvtsi2ss xmm0, eax }
	__asm { movsx eax, bl }
	__asm { imul eax, edx }
	__asm { mulss xmm0, xmm1 }
	__asm { pop ebx }
	__asm { movss dword ptr [ecx + 4], xmm0 }
	__asm { cvtsi2ss xmm0, eax }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [ecx + 8], xmm0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0103805c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00bbf2f0();
// FUNCTION: ROBLOXSTUDIO 0x00bbf480
extern "C" __declspec(naked) void asm_00bbf480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00bbf51a }
	__asm { cmp dword ptr [esi + 0x1e8], 0x50 }
	__asm { jb L_00bbf4d2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bbf4bd }
	__asm { push 0xd4 }
	__asm { push 0xee0880 }
	__asm { push 0xee08c4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bbf4d2 }
	__asm { L_00bbf4bd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee0fa0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bbf4d2: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bbf51a }
	__asm { cmp dword ptr [esi + 0x1ec], 0x50 }
	__asm { jbe L_00bbf521 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bbf505 }
	__asm { push 0xd5 }
	__asm { push 0xee0880 }
	__asm { push 0xee0958 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bbf51a }
	__asm { L_00bbf505: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee1010 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bbf51a: }
	__asm { cmp dword ptr [esi + 0x1ec], 0x50 }
	__asm { L_00bbf521: }
	__asm { jne L_00bbf574 }
	__asm { mov ecx, esi }
	__asm { call fn_00bbf2f0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bbf574 }
	__asm { cmp dword ptr [esi + 0x1ec], 0x4f }
	__asm { je L_00bbf574 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bbf563 }
	__asm { push 0xda }
	__asm { push 0xee0880 }
	__asm { push 0xee107c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bbf574 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bbf563: }
	__asm { movzx eax, al }
	__asm { push 0xee1098 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bbf574: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x1e8] }
	__asm { add edi, dword ptr [esi + 0x1ec] }
	__asm { cmp edi, 0x50 }
	__asm { jb L_00bbf589 }
	__asm { sub edi, 0x50 }
	__asm { L_00bbf589: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + edi*4] }
	__asm { mov dword ptr [edi + ecx + 0x58], edx }
	__asm { mov byte ptr [edi + ecx + 0x5c], al }
	__asm { inc dword ptr [esi + 0x1ec] }
	__asm { movzx eax, al }
	__asm { cvtsi2ss xmm0, eax }
	__asm { pop edi }
	__asm { mulss xmm0, dword ptr [g_0103805c] }
	__asm { addss xmm0, dword ptr [esi + 0x50] }
	__asm { movss dword ptr [esi + 0x50], xmm0 }
	__asm { test dh, dh }
	__asm { jne L_00bbf5cf }
	__asm { cmp byte ptr [ebp + 0xa], dh }
	__asm { jne L_00bbf5cf }
	__asm { cmp byte ptr [ebp + 0xb], dh }
	__asm { jne L_00bbf5cf }
	__asm { mov ecx, 1 }
	__asm { jmp L_00bbf5d1 }
	__asm { L_00bbf5cf: }
	__asm { xor ecx, ecx }
	__asm { L_00bbf5d1: }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { add dword ptr [esi + 0x54], eax }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bbf625 }
	__asm { cmp dword ptr [esi + 0x1ec], 0x50 }
	__asm { jbe L_00bbf625 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bbf614 }
	__asm { push 0xe5 }
	__asm { push 0xee0880 }
	__asm { push 0xee0958 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bbf625 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bbf614: }
	__asm { movzx eax, al }
	__asm { push 0xee1108 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bbf625: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00bbf8f0();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00bbf6d0
extern "C" __declspec(naked) void asm_00bbf6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, 0x40 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { and ecx, 0x3f }
	__asm { inc ecx }
	__asm { mov byte ptr [ecx + esi + 0x17], 0x80 }
	__asm { sub eax, ecx }
	__asm { cmp eax, 8 }
	__asm { jae L_00bbf712 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x18] }
	__asm { add eax, ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf6804 }
	__asm { push 0x40 }
	__asm { lea eax, [esi + 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bbf8f0 }
	__asm { add esp, 0x18 }
	__asm { xor ecx, ecx }
	__asm { mov eax, 0x40 }
	__asm { L_00bbf712: }
	__asm { add eax, -8 }
	__asm { push eax }
	__asm { lea eax, [esi + 0x18] }
	__asm { add eax, ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf6804 }
	__asm { shl dword ptr [esi], 3 }
	__asm { movzx eax, byte ptr [esi] }
	__asm { mov byte ptr [esi + 0x50], al }
	__asm { mov eax, dword ptr [esi] }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [esi + 0x51], al }
	__asm { movzx eax, byte ptr [esi + 2] }
	__asm { mov byte ptr [esi + 0x52], al }
	__asm { movzx eax, byte ptr [esi + 3] }
	__asm { mov byte ptr [esi + 0x53], al }
	__asm { movzx eax, byte ptr [esi + 4] }
	__asm { mov byte ptr [esi + 0x54], al }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [esi + 0x55], al }
	__asm { movzx eax, byte ptr [esi + 6] }
	__asm { mov byte ptr [esi + 0x56], al }
	__asm { movzx eax, byte ptr [esi + 7] }
	__asm { mov byte ptr [esi + 0x57], al }
	__asm { push 0x40 }
	__asm { lea eax, [esi + 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bbf8f0 }
	__asm { movzx eax, byte ptr [esi + 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x98 }
	__asm { mov byte ptr [ecx], al }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [ecx + 1], al }
	__asm { movzx eax, byte ptr [esi + 0xa] }
	__asm { mov byte ptr [ecx + 2], al }
	__asm { movzx eax, byte ptr [esi + 0xb] }
	__asm { mov byte ptr [ecx + 3], al }
	__asm { movzx eax, byte ptr [esi + 0xc] }
	__asm { mov byte ptr [ecx + 4], al }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [ecx + 5], al }
	__asm { movzx eax, byte ptr [esi + 0xe] }
	__asm { mov byte ptr [ecx + 6], al }
	__asm { movzx eax, byte ptr [esi + 0xf] }
	__asm { mov byte ptr [ecx + 7], al }
	__asm { movzx eax, byte ptr [esi + 0x10] }
	__asm { mov byte ptr [ecx + 8], al }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [ecx + 9], al }
	__asm { movzx eax, byte ptr [esi + 0x12] }
	__asm { mov byte ptr [ecx + 0xa], al }
	__asm { movzx eax, byte ptr [esi + 0x13] }
	__asm { mov byte ptr [ecx + 0xb], al }
	__asm { movzx eax, byte ptr [esi + 0x14] }
	__asm { mov byte ptr [ecx + 0xc], al }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [ecx + 0xd], al }
	__asm { movzx eax, byte ptr [esi + 0x16] }
	__asm { mov byte ptr [ecx + 0xe], al }
	__asm { movzx eax, byte ptr [esi + 0x17] }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov byte ptr [ecx + 0xf], al }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0x24 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006deac0();
extern "C" void fn_00ac80e0();
// FUNCTION: ROBLOXSTUDIO 0x00bc0480
extern "C" __declspec(naked) void asm_00bc0480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d7d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x10], 0xe370e4 }
	__asm { call fn_006deac0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x14], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { xor ebx, ebx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 2 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00bc0579 }
	__asm { nop }
	__asm { L_00bc0500: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea edi, [ecx + ebx*4] }
	__asm { cmp edi, eax }
	__asm { jae L_00bc0534 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_00bc0534 }
	__asm { sub edi, ecx }
	__asm { sar edi, 2 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00bc0526 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ac80e0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00bc0526: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00bc0550 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { jmp L_00bc054e }
	__asm { L_00bc0534: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00bc0545 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ac80e0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00bc0545: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00bc0550 }
	__asm { mov eax, dword ptr [edi] }
	__asm { L_00bc054e: }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00bc0550: }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { sub eax, ecx }
	__asm { inc ebx }
	__asm { sar eax, 2 }
	__asm { cmp ebx, eax }
	__asm { jb L_00bc0500 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00bc0579: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00bc5ff0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bc12a0
extern "C" __declspec(naked) void asm_00bc12a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d878 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bc5ff0 }
	__asm { cmp dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_00bc134e }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bc134e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01038280[];
// FUNCTION: ROBLOXSTUDIO 0x00bc1380
extern "C" __declspec(naked) void asm_00bc1380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm2, dword ptr [g_01038280] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { push edi }
	__asm { sar edx, 4 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { xor ebx, ebx }
	__asm { add edi, edx }
	__asm { je L_00bc13f5 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0xc] }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm4, dword ptr [eax] }
	__asm { movss xmm5, dword ptr [eax + 8] }
	__asm { L_00bc13c0: }
	__asm { movss xmm1, dword ptr [ecx - 8] }
	__asm { movss xmm0, dword ptr [ecx - 4] }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm1, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { mulss xmm0, xmm5 }
	__asm { addss xmm1, xmm0 }
	__asm { comiss xmm1, xmm2 }
	__asm { jbe L_00bc13ec }
	__asm { movaps xmm2, xmm1 }
	__asm { mov ebx, esi }
	__asm { L_00bc13ec: }
	__asm { add esi, 0x1c }
	__asm { add ecx, 0x1c }
	__asm { dec edi }
	__asm { jne L_00bc13c0 }
	__asm { L_00bc13f5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006dec40();
extern "C" void fn_006dec80();
extern "C" void fn_0070f5f0();
extern "C" void fn_00715550();
extern "C" void fn_00bc2260();
extern "C" void fn_00bc5690();
// FUNCTION: ROBLOXSTUDIO 0x00bc14a0
extern "C" __declspec(naked) void asm_00bc14a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d8a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x64 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor ebx, ebx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { sub eax, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { sar eax, 2 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test eax, eax }
	__asm { je L_00bc17d9 }
	__asm { L_00bc14d6: }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bc2260 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_006dec80 }
	__asm { mov edi, eax }
	__asm { call fn_006dec40 }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { comiss xmm4, xmm0 }
	__asm { movss xmm1, dword ptr [edi + 8] }
	__asm { jae L_00bc152a }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc1527 }
	__asm { movaps xmm4, xmm1 }
	__asm { jmp L_00bc152a }
	__asm { L_00bc1527: }
	__asm { movaps xmm4, xmm0 }
	__asm { L_00bc152a: }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { comiss xmm2, xmm0 }
	__asm { movss xmm1, dword ptr [edi + 4] }
	__asm { jae L_00bc154b }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc1548 }
	__asm { movaps xmm2, xmm1 }
	__asm { jmp L_00bc154b }
	__asm { L_00bc1548: }
	__asm { movaps xmm2, xmm0 }
	__asm { L_00bc154b: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ebp - 0x1c] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm3, dword ptr [edi] }
	__asm { jae L_00bc156a }
	__asm { comiss xmm1, xmm3 }
	__asm { jb L_00bc1567 }
	__asm { movaps xmm0, xmm3 }
	__asm { jmp L_00bc156a }
	__asm { L_00bc1567: }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00bc156a: }
	__asm { movss xmm1, dword ptr [ebp - 0x50] }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x4c] }
	__asm { mulss xmm0, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x48] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { comiss xmm1, dword ptr [ebp - 0x44] }
	__asm { jb L_00bc159a }
	__asm { mov ebx, 1 }
	__asm { jmp L_00bc159c }
	__asm { L_00bc159a: }
	__asm { xor ebx, ebx }
	__asm { L_00bc159c: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { call fn_006dec80 }
	__asm { mov edi, eax }
	__asm { call fn_006dec40 }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { comiss xmm4, xmm0 }
	__asm { movss xmm1, dword ptr [edi + 8] }
	__asm { jae L_00bc15dd }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc15da }
	__asm { movaps xmm4, xmm1 }
	__asm { jmp L_00bc15dd }
	__asm { L_00bc15da: }
	__asm { movaps xmm4, xmm0 }
	__asm { L_00bc15dd: }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0x24] }
	__asm { comiss xmm2, xmm0 }
	__asm { movss xmm1, dword ptr [edi + 4] }
	__asm { jae L_00bc15fe }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc15fb }
	__asm { movaps xmm2, xmm1 }
	__asm { jmp L_00bc15fe }
	__asm { L_00bc15fb: }
	__asm { movaps xmm2, xmm0 }
	__asm { L_00bc15fe: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ebp - 0x28] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm3, dword ptr [edi] }
	__asm { jae L_00bc161d }
	__asm { comiss xmm1, xmm3 }
	__asm { jb L_00bc161a }
	__asm { movaps xmm0, xmm3 }
	__asm { jmp L_00bc161d }
	__asm { L_00bc161a: }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00bc161d: }
	__asm { movss xmm1, dword ptr [ebp - 0x50] }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x4c] }
	__asm { mulss xmm0, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x48] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { comiss xmm1, dword ptr [ebp - 0x44] }
	__asm { jb L_00bc164d }
	__asm { mov eax, 1 }
	__asm { jmp L_00bc164f }
	__asm { L_00bc164d: }
	__asm { xor eax, eax }
	__asm { L_00bc164f: }
	__asm { cmp bl, al }
	__asm { je L_00bc17ba }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x70] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00715550 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x70] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0070f5f0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00bc16cd }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { sub eax, dword ptr [esi + 4] }
	__asm { sar eax, 2 }
	__asm { cmp eax, 3 }
	__asm { jae L_00bc16cd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bc16bc }
	__asm { push 0xbd }
	__asm { push 0xea3f40 }
	__asm { push 0xede440 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bc16cd }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bc16bc: }
	__asm { movzx eax, cl }
	__asm { push 0xede458 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bc16cd: }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { call fn_006dec80 }
	__asm { mov edi, eax }
	__asm { call fn_006dec40 }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ebp - 0x2c] }
	__asm { comiss xmm4, xmm0 }
	__asm { movss xmm1, dword ptr [edi + 8] }
	__asm { jae L_00bc170c }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc1709 }
	__asm { movaps xmm4, xmm1 }
	__asm { jmp L_00bc170c }
	__asm { L_00bc1709: }
	__asm { movaps xmm4, xmm0 }
	__asm { L_00bc170c: }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [ebp - 0x30] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm2, dword ptr [edi + 4] }
	__asm { jae L_00bc172d }
	__asm { comiss xmm1, xmm2 }
	__asm { jb L_00bc172a }
	__asm { movaps xmm0, xmm2 }
	__asm { jmp L_00bc172d }
	__asm { L_00bc172a: }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00bc172d: }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ebp - 0x34] }
	__asm { comiss xmm2, xmm1 }
	__asm { movss xmm3, dword ptr [edi] }
	__asm { jae L_00bc174c }
	__asm { comiss xmm1, xmm3 }
	__asm { jb L_00bc1749 }
	__asm { movaps xmm2, xmm3 }
	__asm { jmp L_00bc174c }
	__asm { L_00bc1749: }
	__asm { movaps xmm2, xmm1 }
	__asm { L_00bc174c: }
	__asm { movss xmm1, dword ptr [esi + 0x18] }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x14] }
	__asm { mulss xmm0, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x1c] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x20] }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc17b3 }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bc5690 }
	__asm { mov dword ptr [ebp - 0x70], 0xe4687c }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test al, al }
	__asm { je L_00bc17c4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00bc17b3: }
	__asm { mov dword ptr [ebp - 0x70], 0xe4687c }
	__asm { L_00bc17ba: }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00bc17c4: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { sub eax, dword ptr [esi + 4] }
	__asm { inc ebx }
	__asm { sar eax, 2 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { cmp ebx, eax }
	__asm { jb L_00bc14d6 }
	__asm { L_00bc17d9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// (empty)

// (empty)

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
extern "C" void fn_00bc1170();
extern "C" void fn_00bc12a0();
// FUNCTION: ROBLOXSTUDIO 0x00bc2d60
extern "C" __declspec(naked) void asm_00bc2d60()
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
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp + 0xc], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm1, xmm3 }
	__asm { addss xmm0, xmm3 }
	__asm { mov esi, ecx }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { addss xmm0, xmm4 }
	__asm { subss xmm1, xmm4 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
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
	__asm { cmp eax, 8 }
	__asm { jae L_00bc2e58 }
	__asm { push 8 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc08e0 }
	__asm { L_00bc2e58: }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 6 }
	__asm { jae L_00bc2e7e }
	__asm { push 6 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_00bc07e0 }
	__asm { L_00bc2e7e: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { sub ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0xc }
	__asm { jae L_00bc2ea4 }
	__asm { push 0xc }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call fn_00bc06f0 }
	__asm { L_00bc2ea4: }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { push 3 }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 0 }
	__asm { push 4 }
	__asm { push 5 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 2 }
	__asm { push 6 }
	__asm { push 4 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 6 }
	__asm { push 7 }
	__asm { push 5 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 6 }
	__asm { push 2 }
	__asm { push 3 }
	__asm { push 7 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 7 }
	__asm { push 3 }
	__asm { push 1 }
	__asm { push 5 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10268[];
extern "C" char g_00e362b8[];
extern "C" char g_00e362bc[];
extern "C" char g_0103808c[];
extern "C" char g_010380b8[];
extern "C" void fn_00b5fe30();
extern "C" void fn_00b5fe90();
extern "C" void fn_00bc06f0();
extern "C" void fn_00bc07e0();
extern "C" void fn_00bc08e0();
extern "C" void fn_00bc1060();
extern "C" void fn_00bc1170();
extern "C" void fn_00bc12a0();
// FUNCTION: ROBLOXSTUDIO 0x00bc3000
extern "C" __declspec(naked) void asm_00bc3000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mulss xmm1, xmm0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { mulss xmm1, xmm0 }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { mulss xmm1, xmm0 }
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
	__asm { cmp eax, 5 }
	__asm { jae L_00bc30b7 }
	__asm { push 5 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc08e0 }
	__asm { L_00bc30b7: }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 5 }
	__asm { jae L_00bc30dd }
	__asm { push 5 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_00bc07e0 }
	__asm { L_00bc30dd: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { sub ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 8 }
	__asm { jae L_00bc3103 }
	__asm { push 8 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call fn_00bc06f0 }
	__asm { L_00bc3103: }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { fchs }
	__asm { mov ecx, esi }
	__asm { fst dword ptr [ebp + 8] }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { fchs }
	__asm { mov ecx, esi }
	__asm { fst dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { sub esp, 0xc }
	__asm { fchs }
	__asm { mov ecx, esi }
	__asm { fst dword ptr [ebp - 0x14] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { push 4 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 3 }
	__asm { push 4 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 4 }
	__asm { push 3 }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 2 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 4 }
	__asm { push 2 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { movss xmm1, dword ptr [ebp - 0xc] }
	__asm { mulss xmm0, dword ptr [g_0103808c] }
	__asm { mulss xmm1, dword ptr [g_00e362bc] }
	__asm { movss xmm2, dword ptr [ebp - 8] }
	__asm { mulss xmm2, dword ptr [g_00e362b8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss dword ptr [eax + 8], xmm2 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10268[];
extern "C" char g_010380b8[];
extern "C" void fn_00b5fe30();
extern "C" void fn_00b5fe90();
extern "C" void fn_00bc06f0();
extern "C" void fn_00bc07e0();
extern "C" void fn_00bc08e0();
extern "C" void fn_00bc1060();
extern "C" void fn_00bc12a0();
// FUNCTION: ROBLOXSTUDIO 0x00bc3230
extern "C" __declspec(naked) void asm_00bc3230()
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
	__asm { movss dword ptr [ebp + 0xc], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { addss xmm0, xmm4 }
	__asm { subss xmm1, xmm4 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
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
	__asm { cmp eax, 4 }
	__asm { jae L_00bc3328 }
	__asm { push 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc08e0 }
	__asm { L_00bc3328: }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 4 }
	__asm { jae L_00bc334e }
	__asm { push 4 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_00bc07e0 }
	__asm { L_00bc334e: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { sub ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 6 }
	__asm { jae L_00bc3374 }
	__asm { push 6 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call fn_00bc06f0 }
	__asm { L_00bc3374: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { dec eax }
	__asm { je L_00bc34b7 }
	__asm { dec eax }
	__asm { je L_00bc345d }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { dec eax }
	__asm { je L_00bc33fd }
	__asm { fld dword ptr [ebp - 4] }
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
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { jmp L_00bc3520 }
	__asm { L_00bc33fd: }
	__asm { fld dword ptr [ebp - 0x10] }
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
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { jmp L_00bc3520 }
	__asm { L_00bc345d: }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
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
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { jmp L_00bc350f }
	__asm { L_00bc34b7: }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
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
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { L_00bc350f: }
	__asm { sub esp, 0xc }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { L_00bc3520: }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 3 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 3 }
	__asm { push 2 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 2 }
	__asm { push 3 }
	__asm { push 0 }
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
// FUNCTION: ROBLOXSTUDIO 0x00bc3570
extern "C" __declspec(naked) void asm_00bc3570()
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
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm1, xmm3 }
	__asm { addss xmm0, xmm3 }
	__asm { mov esi, ecx }
	__asm { movss dword ptr [ebp + 0xc], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
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
	__asm { jae L_00bc3668 }
	__asm { push 6 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc08e0 }
	__asm { L_00bc3668: }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { sub ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 5 }
	__asm { jae L_00bc368e }
	__asm { push 5 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_00bc07e0 }
	__asm { L_00bc368e: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { sub ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 9 }
	__asm { jae L_00bc36b4 }
	__asm { push 9 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { call fn_00bc06f0 }
	__asm { L_00bc36b4: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { dec eax }
	__asm { je L_00bc38b2 }
	__asm { dec eax }
	__asm { je L_00bc3808 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { dec eax }
	__asm { je L_00bc376c }
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
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { jmp L_00bc3946 }
	__asm { L_00bc376c: }
	__asm { fld dword ptr [ebp - 0x14] }
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
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { jmp L_00bc3957 }
	__asm { L_00bc3808: }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x14] }
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
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { jmp L_00bc3957 }
	__asm { L_00bc38b2: }
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
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { fld dword ptr [ebp - 0xc] }
	__asm { L_00bc3946: }
	__asm { sub esp, 0xc }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { L_00bc3957: }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00bc12a0 }
	__asm { push 5 }
	__asm { push 4 }
	__asm { push 3 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1060 }
	__asm { push 2 }
	__asm { push 5 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 3 }
	__asm { push 4 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { push 4 }
	__asm { push 5 }
	__asm { push 2 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc1170 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_010385f0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006dec40();
extern "C" void fn_006dec80();
extern "C" void fn_00700b70();
extern "C" void fn_00a206d0();
// FUNCTION: ROBLOXSTUDIO 0x00bc5690
extern "C" __declspec(naked) void asm_00bc5690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d940 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { sub esp, 0x4c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test dl, dl }
	__asm { je L_00bc56fe }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { sub eax, dword ptr [esi + 4] }
	__asm { sar eax, 2 }
	__asm { cmp eax, 3 }
	__asm { jae L_00bc56fe }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bc56ed }
	__asm { push 0xbd }
	__asm { push 0xea3f40 }
	__asm { push 0xede440 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bc56fe }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00bc56ed: }
	__asm { movzx eax, dl }
	__asm { push 0xede458 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bc56fe: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss xmm7, dword ptr [esi + 0x18] }
	__asm { movss xmm0, dword ptr [esi + 0x1c] }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm7, dword ptr [eax + 0xc] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm4, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { subss xmm7, xmm0 }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, dword ptr [eax + 0xc] }
	__asm { mulss xmm4, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { movaps xmm3, xmm2 }
	__asm { mulss xmm3, dword ptr [esi + 0x1c] }
	__asm { mulss xmm2, dword ptr [esi + 0x18] }
	__asm { subss xmm3, xmm0 }
	__asm { push edi }
	__asm { subss xmm4, xmm2 }
	__asm { push 0 }
	__asm { movss dword ptr [ebp - 0x18], xmm7 }
	__asm { movss dword ptr [ebp - 0x14], xmm3 }
	__asm { push esi }
	__asm { movss dword ptr [ebp - 0x10], xmm4 }
	__asm { mov ecx, dword ptr [eax + ecx*4] }
	__asm { call fn_00a206d0 }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { call fn_00700b70 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006dec80 }
	__asm { mov edi, eax }
	__asm { call fn_006dec40 }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { comiss xmm4, xmm0 }
	__asm { movss xmm1, dword ptr [edi + 8] }
	__asm { jae L_00bc57be }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc57bb }
	__asm { movaps xmm4, xmm1 }
	__asm { jmp L_00bc57be }
	__asm { L_00bc57bb: }
	__asm { movaps xmm4, xmm0 }
	__asm { L_00bc57be: }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { comiss xmm2, xmm0 }
	__asm { movss xmm1, dword ptr [edi + 4] }
	__asm { jae L_00bc57df }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc57dc }
	__asm { movaps xmm2, xmm1 }
	__asm { jmp L_00bc57df }
	__asm { L_00bc57dc: }
	__asm { movaps xmm2, xmm0 }
	__asm { L_00bc57df: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ebp - 0x24] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm3, dword ptr [edi] }
	__asm { pop edi }
	__asm { jae L_00bc57ff }
	__asm { comiss xmm1, xmm3 }
	__asm { jb L_00bc57fc }
	__asm { movaps xmm0, xmm3 }
	__asm { jmp L_00bc57ff }
	__asm { L_00bc57fc: }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00bc57ff: }
	__asm { movss xmm1, dword ptr [ebp - 0x40] }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x3c] }
	__asm { mulss xmm0, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x38] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { comiss xmm1, dword ptr [ebp - 0x34] }
	__asm { jb L_00bc593d }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push 1 }
	__asm { mov ecx, dword ptr [eax + ecx*4] }
	__asm { push esi }
	__asm { call fn_00a206d0 }
	__asm { movss xmm0, dword ptr [g_010385f0] }
	__asm { movss xmm3, dword ptr [ebp - 0x18] }
	__asm { movss xmm2, dword ptr [ebp - 0x14] }
	__asm { movss xmm1, dword ptr [ebp - 0x10] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { xorps xmm3, xmm0 }
	__asm { xorps xmm2, xmm0 }
	__asm { xorps xmm1, xmm0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { movss dword ptr [ebp - 0x30], xmm3 }
	__asm { movss dword ptr [ebp - 0x2c], xmm2 }
	__asm { movss dword ptr [ebp - 0x28], xmm1 }
	__asm { call fn_00700b70 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006dec80 }
	__asm { mov esi, eax }
	__asm { call fn_006dec40 }
	__asm { movss xmm3, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { comiss xmm3, xmm0 }
	__asm { movss xmm1, dword ptr [esi + 8] }
	__asm { jae L_00bc58c1 }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc58be }
	__asm { movaps xmm3, xmm1 }
	__asm { jmp L_00bc58c1 }
	__asm { L_00bc58be: }
	__asm { movaps xmm3, xmm0 }
	__asm { L_00bc58c1: }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { comiss xmm2, xmm0 }
	__asm { movss xmm1, dword ptr [esi + 4] }
	__asm { jae L_00bc58e2 }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc58df }
	__asm { movaps xmm2, xmm1 }
	__asm { jmp L_00bc58e2 }
	__asm { L_00bc58df: }
	__asm { movaps xmm2, xmm0 }
	__asm { L_00bc58e2: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ebp - 0x24] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm4, dword ptr [esi] }
	__asm { jae L_00bc5901 }
	__asm { comiss xmm1, xmm4 }
	__asm { jb L_00bc58fe }
	__asm { movaps xmm0, xmm4 }
	__asm { jmp L_00bc5901 }
	__asm { L_00bc58fe: }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00bc5901: }
	__asm { movss xmm1, dword ptr [ebp - 0x54] }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x50] }
	__asm { mulss xmm0, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x4c] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { comiss xmm1, dword ptr [ebp - 0x48] }
	__asm { jb L_00bc593d }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00bc593d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00babe40();
// FUNCTION: ROBLOXSTUDIO 0x00bc59e0
extern "C" __declspec(naked) void asm_00bc59e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00bc5a36 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { sub eax, dword ptr [esi + 4] }
	__asm { sar eax, 2 }
	__asm { cmp eax, 3 }
	__asm { jae L_00bc5a36 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bc5a25 }
	__asm { push 0xbd }
	__asm { push 0xea3f40 }
	__asm { push 0xede440 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bc5a36 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bc5a25: }
	__asm { movzx eax, cl }
	__asm { push 0xede458 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bc5a36: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [esi + 0x18] }
	__asm { mulss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [esi + 0x14] }
	__asm { mulss xmm0, dword ptr [eax] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x1c] }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm1, xmm0 }
	__asm { xorps xmm0, xmm0 }
	__asm { subss xmm1, dword ptr [esi + 0x20] }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc5a7e }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00babe40 }
	__asm { test al, al }
	__asm { je L_00bc5a7e }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bc5a7e: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006dec40();
extern "C" void fn_006dec80();
// FUNCTION: ROBLOXSTUDIO 0x00bc5a90
extern "C" __declspec(naked) void asm_00bc5a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x38e38e39 }
	__asm { mov edx, dword ptr [edi + 0x1c] }
	__asm { sub edx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { je L_00bc5bf2 }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { L_00bc5ac4: }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { add esi, ebx }
	__asm { test cl, cl }
	__asm { je L_00bc5b19 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { sub eax, dword ptr [esi + 4] }
	__asm { sar eax, 2 }
	__asm { cmp eax, 3 }
	__asm { jae L_00bc5b19 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bc5b08 }
	__asm { push 0xbd }
	__asm { push 0xea3f40 }
	__asm { push 0xede440 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bc5b19 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bc5b08: }
	__asm { movzx eax, cl }
	__asm { push 0xede458 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bc5b19: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { call fn_006dec80 }
	__asm { mov ebx, eax }
	__asm { call fn_006dec40 }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { comiss xmm4, xmm0 }
	__asm { movss xmm1, dword ptr [ebx + 8] }
	__asm { jae L_00bc5b5a }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc5b57 }
	__asm { movaps xmm4, xmm1 }
	__asm { jmp L_00bc5b5a }
	__asm { L_00bc5b57: }
	__asm { movaps xmm4, xmm0 }
	__asm { L_00bc5b5a: }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { comiss xmm2, xmm0 }
	__asm { movss xmm1, dword ptr [ebx + 4] }
	__asm { jae L_00bc5b7b }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc5b78 }
	__asm { movaps xmm2, xmm1 }
	__asm { jmp L_00bc5b7b }
	__asm { L_00bc5b78: }
	__asm { movaps xmm2, xmm0 }
	__asm { L_00bc5b7b: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ebp - 0x14] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm3, dword ptr [ebx] }
	__asm { jae L_00bc5b9a }
	__asm { comiss xmm1, xmm3 }
	__asm { jb L_00bc5b97 }
	__asm { movaps xmm0, xmm3 }
	__asm { jmp L_00bc5b9a }
	__asm { L_00bc5b97: }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00bc5b9a: }
	__asm { mulss xmm0, dword ptr [esi + 0x14] }
	__asm { movss xmm1, dword ptr [esi + 0x18] }
	__asm { mulss xmm1, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x1c] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x20] }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc5bfd }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { sub ecx, dword ptr [edi + 0x18] }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { inc esi }
	__asm { add ebx, 0x24 }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { cmp esi, eax }
	__asm { jb L_00bc5ac4 }
	__asm { L_00bc5bf2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bc5bfd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bc5c10
extern "C" __declspec(naked) void asm_00bc5c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { je L_00bc5c5c }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00bc5c5c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bc5c47 }
	__asm { push 0x68 }
	__asm { push 0xea3f40 }
	__asm { push 0xea3f80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bc5c5c }
	__asm { L_00bc5c47: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea3f90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bc5c5c: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { je L_00bc5ca1 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00bc5ca1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bc5c8c }
	__asm { push 0x68 }
	__asm { push 0xea3f40 }
	__asm { push 0xea3f80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bc5ca1 }
	__asm { L_00bc5c8c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xea3f90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bc5ca1: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { movss xmm6, dword ptr [eax + 4] }
	__asm { movss xmm5, dword ptr [eax + 8] }
	__asm { movss xmm4, dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movaps xmm0, xmm6 }
	__asm { subss xmm0, dword ptr [edi + 4] }
	__asm { movss xmm7, dword ptr [eax] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { subss xmm2, dword ptr [edi + 8] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { subss xmm1, dword ptr [edi + 0xc] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movaps xmm0, xmm5 }
	__asm { subss xmm0, dword ptr [edi + 8] }
	__asm { movaps xmm3, xmm4 }
	__asm { subss xmm3, dword ptr [edi + 0xc] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0xc], xmm3 }
	__asm { movaps xmm3, xmm7 }
	__asm { subss xmm3, dword ptr [edi + 4] }
	__asm { subss xmm0, xmm5 }
	__asm { movss xmm5, dword ptr [eax + 8] }
	__asm { subss xmm7, xmm6 }
	__asm { movss xmm6, dword ptr [ebp - 4] }
	__asm { subss xmm5, xmm4 }
	__asm { movss xmm4, dword ptr [ebp - 8] }
	__asm { mulss xmm2, xmm6 }
	__asm { mulss xmm3, xmm4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { addss xmm2, xmm3 }
	__asm { movss xmm3, dword ptr [ebp - 0xc] }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm2, xmm1 }
	__asm { xorps xmm1, xmm1 }
	__asm { comiss xmm1, xmm2 }
	__asm { jbe L_00bc5d48 }
	__asm { L_00bc5d40: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bc5d48: }
	__asm { mulss xmm7, xmm4 }
	__asm { mulss xmm0, xmm6 }
	__asm { mulss xmm5, xmm3 }
	__asm { addss xmm7, xmm0 }
	__asm { addss xmm7, xmm5 }
	__asm { comiss xmm7, xmm1 }
	__asm { ja L_00bc5d40 }
	__asm { mov al, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006dec40();
extern "C" void fn_006dec80();
// FUNCTION: ROBLOXSTUDIO 0x00bc5d70
extern "C" __declspec(naked) void asm_00bc5d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_006dec80 }
	__asm { mov edi, eax }
	__asm { call fn_006dec40 }
	__asm { movss xmm3, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { comiss xmm3, xmm0 }
	__asm { movss xmm1, dword ptr [edi + 8] }
	__asm { jae L_00bc5da4 }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc5da1 }
	__asm { movaps xmm3, xmm1 }
	__asm { jmp L_00bc5da4 }
	__asm { L_00bc5da1: }
	__asm { movaps xmm3, xmm0 }
	__asm { L_00bc5da4: }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { comiss xmm0, xmm1 }
	__asm { movss xmm2, dword ptr [edi + 4] }
	__asm { jae L_00bc5dc5 }
	__asm { comiss xmm1, xmm2 }
	__asm { jb L_00bc5dc2 }
	__asm { movaps xmm0, xmm2 }
	__asm { jmp L_00bc5dc5 }
	__asm { L_00bc5dc2: }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00bc5dc5: }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { comiss xmm2, xmm1 }
	__asm { movss xmm4, dword ptr [edi] }
	__asm { jae L_00bc5de4 }
	__asm { comiss xmm1, xmm4 }
	__asm { jb L_00bc5de1 }
	__asm { movaps xmm2, xmm4 }
	__asm { jmp L_00bc5de4 }
	__asm { L_00bc5de1: }
	__asm { movaps xmm2, xmm1 }
	__asm { L_00bc5de4: }
	__asm { movss xmm1, dword ptr [esi + 8] }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { mulss xmm0, xmm2 }
	__asm { pop edi }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0xc] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bc5e19 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00bc5e19: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006deb40();
extern "C" void fn_00bc5950();
extern "C" void fn_00d0c9c0();
// FUNCTION: ROBLOXSTUDIO 0x00bc60e0
extern "C" __declspec(naked) void asm_00bc60e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test cl, cl }
	__asm { je L_00bc613b }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { sub eax, dword ptr [edi + 4] }
	__asm { sar eax, 2 }
	__asm { cmp eax, 3 }
	__asm { jae L_00bc613b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bc612a }
	__asm { push 0xbd }
	__asm { push 0xea3f40 }
	__asm { push 0xede440 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bc613b }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bc612a: }
	__asm { movzx eax, cl }
	__asm { push 0xede458 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bc613b: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [edi + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00d0c9c0 }
	__asm { fld dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { fstp dword ptr [esi] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 8] }
	__asm { call fn_006deb40 }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { mov ecx, eax }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00bc6190 }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00bc6190 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00bc61bb }
	__asm { L_00bc6190: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00bc5950 }
	__asm { test al, al }
	__asm { je L_00bc61a6 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00bc61a6: }
	__asm { call fn_006deb40 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 8] }
	__asm { L_00bc61bb: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10688[];
extern "C" void fn_00bc6250();
extern "C" void fn_00bc7710();
// FUNCTION: ROBLOXSTUDIO 0x00bc7d90
extern "C" __declspec(naked) void asm_00bc7d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { test eax, eax }
	__asm { je L_00bc7dc4 }
	__asm { test byte ptr [eax + 5], 3 }
	__asm { je L_00bc7dc4 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bc7710 }
	__asm { add esp, 8 }
	__asm { L_00bc7dc4: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00bc7e6a }
	__asm { test byte ptr [eax + 6], 8 }
	__asm { jne L_00bc7e6a }
	__asm { push dword ptr [edi + 0xc8] }
	__asm { push 3 }
	__asm { push eax }
	__asm { call fn_00bc6250 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { test eax, eax }
	__asm { je L_00bc7e6a }
	__asm { cmp dword ptr [eax + 8], 4 }
	__asm { jne L_00bc7e6a }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov esi, dword ptr [g_00e10688] }
	__asm { add eax, 0x10 }
	__asm { push 0x6b }
	__asm { push eax }
	__asm { call esi }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { neg eax }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { sbb eax, eax }
	__asm { add ecx, 0x10 }
	__asm { neg eax }
	__asm { push 0x76 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call esi }
	__asm { add esp, 0x10 }
	__asm { neg eax }
	__asm { sbb edx, edx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { neg edx }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { test eax, eax }
	__asm { jne L_00bc7e34 }
	__asm { test edx, edx }
	__asm { je L_00bc7e6a }
	__asm { L_00bc7e34: }
	__asm { mov cl, dl }
	__asm { add cl, cl }
	__asm { or cl, al }
	__asm { mov al, byte ptr [ebx + 5] }
	__asm { and al, 0xe7 }
	__asm { shl cl, 3 }
	__asm { or cl, al }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebx + 5], cl }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [ebx + 0x1c], eax }
	__asm { mov dword ptr [edi + 0x2c], ebx }
	__asm { je L_00bc7e66 }
	__asm { test edx, edx }
	__asm { je L_00bc7e6a }
	__asm { L_00bc7e5a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc7e66: }
	__asm { test edx, edx }
	__asm { jne L_00bc7e9b }
	__asm { L_00bc7e6a: }
	__asm { mov ecx, dword ptr [ebx + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00bc7e9b }
	__asm { mov edx, ecx }
	__asm { shl edx, 4 }
	__asm { L_00bc7e76: }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { lea edx, [edx - 0x10] }
	__asm { dec ecx }
	__asm { cmp dword ptr [eax + edx + 8], 4 }
	__asm { jl L_00bc7e97 }
	__asm { mov eax, dword ptr [eax + edx] }
	__asm { test byte ptr [eax + 5], 3 }
	__asm { je L_00bc7e97 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bc7710 }
	__asm { add esp, 8 }
	__asm { L_00bc7e97: }
	__asm { test ecx, ecx }
	__asm { jne L_00bc7e76 }
	__asm { L_00bc7e9b: }
	__asm { mov cl, byte ptr [ebx + 8] }
	__asm { mov edx, 1 }
	__asm { shl edx, cl }
	__asm { test edx, edx }
	__asm { je L_00bc7f0f }
	__asm { mov esi, edx }
	__asm { shl esi, 5 }
	__asm { mov edi, edi }
	__asm { L_00bc7eb0: }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { sub esi, 0x20 }
	__asm { add ecx, esi }
	__asm { dec edx }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { jne L_00bc7ece }
	__asm { cmp dword ptr [ecx + 0x18], 4 }
	__asm { jl L_00bc7f0b }
	__asm { mov dword ptr [ecx + 0x18], 0xb }
	__asm { jmp L_00bc7f0b }
	__asm { L_00bc7ece: }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { jne L_00bc7eed }
	__asm { cmp dword ptr [ecx + 0x18], 4 }
	__asm { jl L_00bc7eed }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { test byte ptr [eax + 5], 3 }
	__asm { je L_00bc7eed }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bc7710 }
	__asm { add esp, 8 }
	__asm { L_00bc7eed: }
	__asm { cmp dword ptr [ebp - 8], 0 }
	__asm { jne L_00bc7f0b }
	__asm { cmp dword ptr [ecx + 8], 4 }
	__asm { jl L_00bc7f0b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test byte ptr [eax + 5], 3 }
	__asm { je L_00bc7f0b }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bc7710 }
	__asm { add esp, 8 }
	__asm { L_00bc7f0b: }
	__asm { test edx, edx }
	__asm { jne L_00bc7eb0 }
	__asm { L_00bc7f0f: }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { jne L_00bc7e5a }
	__asm { cmp dword ptr [ebp - 8], 0 }
	__asm { jne L_00bc7e5a }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36d10();
extern "C" void fn_00a45610();
extern "C" void fn_00a457e0();
extern "C" void fn_00bc6400();
extern "C" void fn_00bc6450();
extern "C" void fn_00bc90f0();
extern "C" void fn_00bca570();
// FUNCTION: ROBLOXSTUDIO 0x00bc9190
extern "C" __declspec(naked) void asm_00bc9190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x58 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor ebx, ebx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_00bc90f0 }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { add esp, 8 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { lea eax, [edx - 1] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test edx, edx }
	__asm { je L_00bc91cd }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { inc eax }
	__asm { movzx edx, byte ptr [eax - 1] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { jmp L_00bc91da }
	__asm { L_00bc91cd: }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_00bca570 }
	__asm { add esp, 4 }
	__asm { mov edx, eax }
	__asm { L_00bc91da: }
	__asm { mov dword ptr [esi], edx }
	__asm { cmp edx, 0x3d }
	__asm { jne L_00bc92b4 }
	__asm { push edi }
	__asm { L_00bc91e6: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { cmp eax, ecx }
	__asm { jbe L_00bc926b }
	__asm { cmp ecx, 0x7ffffffe }
	__asm { jb L_00bc9239 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { add eax, 0x10 }
	__asm { push 0x50 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call fn_00a45610 }
	__asm { push 0xee1d64 }
	__asm { push dword ptr [esi + 4] }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { push 0xea705c }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push 3 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a36d10 }
	__asm { add esp, 0x28 }
	__asm { L_00bc9239: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { lea ebx, [ecx + ecx] }
	__asm { lea eax, [ebx + 1] }
	__asm { cmp eax, -3 }
	__asm { ja L_00bc9258 }
	__asm { push ebx }
	__asm { push ecx }
	__asm { push dword ptr [edi] }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00bc9263 }
	__asm { L_00bc9258: }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { L_00bc9263: }
	__asm { mov dword ptr [edi + 8], ebx }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { L_00bc926b: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ecx + eax], dl }
	__asm { inc dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { lea eax, [edx - 1] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test edx, edx }
	__asm { je L_00bc9297 }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { inc eax }
	__asm { movzx edx, byte ptr [eax - 1] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { jmp L_00bc92a4 }
	__asm { L_00bc9297: }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_00bca570 }
	__asm { add esp, 4 }
	__asm { mov edx, eax }
	__asm { L_00bc92a4: }
	__asm { inc ebx }
	__asm { mov dword ptr [esi], edx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { cmp edx, 0x3d }
	__asm { je L_00bc91e6 }
	__asm { pop edi }
	__asm { L_00bc92b4: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { cmp dword ptr [esi], eax }
	__asm { jne L_00bc92c3 }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc92c3: }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { sub eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6ce0();
extern "C" void fn_00bc9c60();
extern "C" void fn_00bc9d60();
extern "C" void fn_00bca060();
// FUNCTION: ROBLOXSTUDIO 0x00bc9e10
extern "C" __declspec(naked) void asm_00bc9e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { call fn_00bc9d60 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { jne L_00bc9e3d }
	__asm { cmp esi, 0xee1e60 }
	__asm { jne L_00bc9ec9 }
	__asm { L_00bc9e3d: }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [ebx + 0x18], eax }
	__asm { jbe L_00bc9e56 }
	__asm { L_00bc9e45: }
	__asm { add dword ptr [ebx + 0x18], -0x20 }
	__asm { mov edi, dword ptr [ebx + 0x18] }
	__asm { cmp dword ptr [edi + 0x18], 0 }
	__asm { je L_00bc9e7a }
	__asm { cmp edi, eax }
	__asm { ja L_00bc9e45 }
	__asm { L_00bc9e56: }
	__asm { add dword ptr [ebx + 0x18], -0x20 }
	__asm { L_00bc9e5a: }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00bca060 }
	__asm { push edi }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00bc9c60 }
	__asm { add esp, 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc9e7a: }
	__asm { test edi, edi }
	__asm { je L_00bc9e5a }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00bc9d60 }
	__asm { add esp, 8 }
	__asm { cmp eax, esi }
	__asm { je L_00bc9ebe }
	__asm { cmp dword ptr [eax + 0x1c], esi }
	__asm { lea ecx, [eax + 0x1c] }
	__asm { je L_00bc9ea1 }
	__asm { L_00bc9e97: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp dword ptr [eax + 0x1c], esi }
	__asm { lea ecx, [eax + 0x1c] }
	__asm { jne L_00bc9e97 }
	__asm { L_00bc9ea1: }
	__asm { mov dword ptr [eax + 0x1c], edi }
	__asm { mov ecx, 8 }
	__asm { rep movsd }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { jmp L_00bc9ec9 }
	__asm { L_00bc9ebe: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov dword ptr [esi + 0x1c], edi }
	__asm { mov esi, edi }
	__asm { L_00bc9ec9: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { cmp dword ptr [ecx + 8], 4 }
	__asm { jl L_00bc9efd }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test byte ptr [eax + 5], 3 }
	__asm { je L_00bc9efd }
	__asm { test byte ptr [ebx + 5], 4 }
	__asm { je L_00bc9efd }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc6ce0 }
	__asm { add esp, 8 }
	__asm { L_00bc9efd: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bca980();
extern "C" void fn_00bcaad0();
// FUNCTION: ROBLOXSTUDIO 0x00bca6a0
extern "C" __declspec(naked) void asm_00bca6a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { jne L_00bca6d7 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push 4 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00bca6d7: }
	__asm { test ecx, ecx }
	__asm { jle L_00bca775 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { L_00bca6e4: }
	__asm { mov edi, dword ptr [ebx + 8] }
	__asm { add edi, eax }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov al, byte ptr [edi + 8] }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { jne L_00bca70e }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 1 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00bca70e: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { dec eax }
	__asm { je L_00bca73e }
	__asm { sub eax, 2 }
	__asm { je L_00bca729 }
	__asm { dec eax }
	__asm { jne L_00bca762 }
	__asm { push esi }
	__asm { push dword ptr [edi] }
	__asm { call fn_00bcaad0 }
	__asm { add esp, 8 }
	__asm { jmp L_00bca75f }
	__asm { L_00bca729: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { fld qword ptr [edi] }
	__asm { fstp qword ptr [ebp - 0xc] }
	__asm { jne L_00bca762 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 8 }
	__asm { jmp L_00bca751 }
	__asm { L_00bca73e: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov al, byte ptr [edi] }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { jne L_00bca762 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 1 }
	__asm { L_00bca751: }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { add esp, 0x10 }
	__asm { L_00bca75f: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { L_00bca762: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 0x10 }
	__asm { dec ecx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { jne L_00bca6e4 }
	__asm { L_00bca775: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov eax, dword ptr [ebx + 0x34] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jne L_00bca79d }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push 4 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { L_00bca79d: }
	__asm { xor edi, edi }
	__asm { test eax, eax }
	__asm { jle L_00bca7bb }
	__asm { L_00bca7a3: }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { push esi }
	__asm { push dword ptr [ebx + 0x20] }
	__asm { push dword ptr [eax + edi*4] }
	__asm { call fn_00bca980 }
	__asm { inc edi }
	__asm { add esp, 0xc }
	__asm { cmp edi, dword ptr [ebp + 8] }
	__asm { jl L_00bca7a3 }
	__asm { L_00bca7bb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bcaad0();
// FUNCTION: ROBLOXSTUDIO 0x00bca7d0
extern "C" __declspec(naked) void asm_00bca7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { je L_00bca7e7 }
	__asm { xor edi, edi }
	__asm { jmp L_00bca7ea }
	__asm { L_00bca7e7: }
	__asm { mov edi, dword ptr [ebx + 0x30] }
	__asm { L_00bca7ea: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { jne L_00bca82f }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push 4 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { test eax, eax }
	__asm { jne L_00bca82f }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [edi*4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push ecx }
	__asm { push dword ptr [esi] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00bca82f: }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { je L_00bca839 }
	__asm { xor edi, edi }
	__asm { jmp L_00bca83c }
	__asm { L_00bca839: }
	__asm { mov edi, dword ptr [ebx + 0x38] }
	__asm { L_00bca83c: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { jne L_00bca85e }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push 4 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00bca85e: }
	__asm { test edi, edi }
	__asm { jle L_00bca8c7 }
	__asm { xor edi, edi }
	__asm { L_00bca864: }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { push esi }
	__asm { push dword ptr [edi + eax] }
	__asm { call fn_00bcaad0 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov eax, dword ptr [edi + eax + 4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jne L_00bca899 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push 4 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00bca899: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov eax, dword ptr [edi + eax + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jne L_00bca8bf }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push 4 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00bca8bf: }
	__asm { add edi, 0xc }
	__asm { dec dword ptr [ebp + 0xc] }
	__asm { jne L_00bca864 }
	__asm { L_00bca8c7: }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { je L_00bca8d1 }
	__asm { xor eax, eax }
	__asm { jmp L_00bca8d4 }
	__asm { L_00bca8d1: }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { L_00bca8d4: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jne L_00bca8f9 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push 4 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x10 }
	__asm { L_00bca8f9: }
	__asm { xor edi, edi }
	__asm { test eax, eax }
	__asm { jle L_00bca96f }
	__asm { nop }
	__asm { L_00bca900: }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { test eax, eax }
	__asm { je L_00bca946 }
	__asm { lea ecx, [eax + 0x10] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00bca946 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { inc eax }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jne L_00bca969 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push 4 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { test eax, eax }
	__asm { jne L_00bca969 }
	__asm { push dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 4] }
	__asm { jmp L_00bca95c }
	__asm { L_00bca946: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { jne L_00bca969 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push 4 }
	__asm { push eax }
	__asm { L_00bca95c: }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { add esp, 0x10 }
	__asm { L_00bca969: }
	__asm { inc edi }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { jl L_00bca900 }
	__asm { L_00bca96f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bca6a0();
extern "C" void fn_00bca7d0();
extern "C" void fn_00bcaad0();
// FUNCTION: ROBLOXSTUDIO 0x00bca980
extern "C" __declspec(naked) void asm_00bca980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { je L_00bca99a }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { je L_00bca99c }
	__asm { L_00bca99a: }
	__asm { xor eax, eax }
	__asm { L_00bca99c: }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00bcaad0 }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jne L_00bca9c8 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push 4 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00bca9c8: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jne L_00bca9ea }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push 4 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00bca9ea: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov al, byte ptr [edi + 0x48] }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { jne L_00bcaa0c }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 1 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00bcaa0c: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov al, byte ptr [edi + 0x49] }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { jne L_00bcaa2e }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 1 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00bcaa2e: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov al, byte ptr [edi + 0x4a] }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { jne L_00bcaa50 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 1 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00bcaa50: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov al, byte ptr [edi + 0x4b] }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { jne L_00bcaa72 }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 1 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00bcaa72: }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov ebx, dword ptr [edi + 0x2c] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { jne L_00bcaaba }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push 4 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { test eax, eax }
	__asm { jne L_00bcaaba }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebx*4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push ecx }
	__asm { push dword ptr [esi] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_00bcaaba: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bca6a0 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bca7d0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a379c0();
extern "C" void fn_00a379f0();
extern "C" void fn_00bc6250();
extern "C" void fn_00bc6280();
extern "C" void fn_00bc6ce0();
extern "C" void fn_00bc9c60();
extern "C" void fn_00bcada0();
// FUNCTION: ROBLOXSTUDIO 0x00bcc7e0
extern "C" __declspec(naked) void asm_00bcc7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00bcc7f6: }
	__asm { cmp dword ptr [edi + 8], 5 }
	__asm { jne L_00bcc89d }
	__asm { mov esi, dword ptr [edi] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00bc9c60 }
	__asm { add esp, 0xc }
	__asm { cmp byte ptr [esi + 7], 0 }
	__asm { mov edx, eax }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { je L_00bcc82e }
	__asm { push 0xea6eac }
	__asm { push ebx }
	__asm { call fn_00a379c0 }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { add esp, 8 }
	__asm { L_00bcc82e: }
	__asm { cmp dword ptr [edx + 8], 0 }
	__asm { jne L_00bcc861 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00bcc861 }
	__asm { test byte ptr [ecx + 6], 2 }
	__asm { jne L_00bcc861 }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { push dword ptr [eax + 0xc0] }
	__asm { push 1 }
	__asm { push ecx }
	__asm { call fn_00bc6250 }
	__asm { mov esi, eax }
	__asm { add esp, 0xc }
	__asm { test esi, esi }
	__asm { jne L_00bcc8c0 }
	__asm { mov esi, dword ptr [ebp - 0xc] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { L_00bcc861: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { cmp dword ptr [ecx + 8], 4 }
	__asm { jl L_00bcc8fe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test byte ptr [eax + 5], 3 }
	__asm { je L_00bcc8fe }
	__asm { test byte ptr [esi + 5], 4 }
	__asm { je L_00bcc8fe }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00bc6ce0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcc89d: }
	__asm { push 1 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00bc6280 }
	__asm { mov esi, eax }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00bcc8c0 }
	__asm { push 0x1025014 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00a379f0 }
	__asm { add esp, 0xc }
	__asm { L_00bcc8c0: }
	__asm { cmp dword ptr [esi + 8], 6 }
	__asm { je L_00bcc8ed }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { inc eax }
	__asm { mov edi, esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp eax, 0x64 }
	__asm { jl L_00bcc7f6 }
	__asm { push 0xee1ef4 }
	__asm { push ebx }
	__asm { call fn_00a379c0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcc8ed: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00bcada0 }
	__asm { add esp, 0x14 }
	__asm { L_00bcc8fe: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00bcc9d0();
extern "C" void fn_00bcce50();
extern "C" void fn_00bcd4b0();
extern "C" void fn_00bcd510();
extern "C" void fn_00bce900();
extern "C" void fn_00c18d70();
extern "C" void fn_00c18e80();
// FUNCTION: ROBLOXSTUDIO 0x00bccaa0
extern "C" __declspec(naked) void asm_00bccaa0()
{
	__asm { L_00bccaa0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edi + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, 6 }
	__asm { jl L_00bccac1 }
	__asm { cmp eax, 9 }
	__asm { jle L_00bccacf }
	__asm { L_00bccac1: }
	__asm { push 0xe4f510 }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 8 }
	__asm { L_00bccacf: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, 0x2c }
	__asm { jne L_00bccb3a }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x38], edi }
	__asm { call fn_00bce900 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp - 0x30], 6 }
	__asm { jne L_00bccb01 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00bcce50 }
	__asm { add esp, 0xc }
	__asm { L_00bccb01: }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { movzx eax, word ptr [eax + 0x34] }
	__asm { mov ecx, 0xc8 }
	__asm { sub ecx, eax }
	__asm { cmp edi, ecx }
	__asm { jle L_00bccb27 }
	__asm { push 0xee2180 }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00bcd4b0 }
	__asm { add esp, 0xc }
	__asm { L_00bccb27: }
	__asm { lea eax, [edi + 1] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { push esi }
	__asm { call L_00bccaa0 }
	__asm { add esp, 0xc }
	__asm { jmp L_00bccb96 }
	__asm { L_00bccb3a: }
	__asm { cmp eax, 0x3d }
	__asm { je L_00bccb5f }
	__asm { push 0x3d }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bccb5f: }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bcd510 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { add esp, 0xc }
	__asm { mov ebx, eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { cmp ebx, edi }
	__asm { je L_00bccbcc }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00bcc9d0 }
	__asm { add esp, 0x10 }
	__asm { cmp ebx, edi }
	__asm { jle L_00bccb96 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { sub edi, ebx }
	__asm { add dword ptr [eax + 0x24], edi }
	__asm { L_00bccb96: }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov eax, dword ptr [ecx + 0x24] }
	__asm { dec eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], 0xffffffff }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], 0xc }
	__asm { call fn_00c18e80 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bccbcc: }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00c18d70 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00c18e80 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc87b0();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00bccfa0();
extern "C" void fn_00bcd050();
extern "C" void fn_00bce690();
extern "C" void fn_00bce710();
extern "C" void fn_00bce7e0();
extern "C" void fn_00bcebe0();
// FUNCTION: ROBLOXSTUDIO 0x00bccc70
extern "C" __declspec(naked) void asm_00bccc70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x23c }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x23c] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bce710 }
	__asm { mov eax, dword ptr [ebp - 0x23c] }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [eax + 0x3c], ebx }
	__asm { cmp dword ptr [edi + 0x10], 0x28 }
	__asm { je L_00bcccc0 }
	__asm { push 0x28 }
	__asm { push edi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bcccc0: }
	__asm { push edi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { je L_00bccd0e }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 4 }
	__asm { push 0xee20e8 }
	__asm { push edi }
	__asm { call fn_00bc87b0 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bce690 }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { add esp, 0xc }
	__asm { inc byte ptr [esi + 0x32] }
	__asm { movzx eax, byte ptr [esi + 0x32] }
	__asm { movzx eax, word ptr [esi + eax*2 + 0xaa] }
	__asm { lea edx, [eax + eax*2] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ecx + edx*4 + 4], eax }
	__asm { pop esi }
	__asm { L_00bccd0e: }
	__asm { push edi }
	__asm { call fn_00bce7e0 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [edi + 0x10], 0x29 }
	__asm { je L_00bccd3d }
	__asm { push 0x29 }
	__asm { push edi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bccd3d: }
	__asm { push edi }
	__asm { call fn_00bc8800 }
	__asm { push edi }
	__asm { call fn_00bccfa0 }
	__asm { mov eax, dword ptr [ebp - 0x23c] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [eax + 0x40], ecx }
	__asm { cmp dword ptr [edi + 0x10], 0x106 }
	__asm { jne L_00bccd6c }
	__asm { push edi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { jmp L_00bccdba }
	__asm { L_00bccd6c: }
	__asm { cmp ebx, dword ptr [edi + 4] }
	__asm { jne L_00bccd84 }
	__asm { push 0x106 }
	__asm { push edi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { jmp L_00bccda8 }
	__asm { L_00bccd84: }
	__asm { push ebx }
	__asm { push 0x109 }
	__asm { push edi }
	__asm { call fn_00bc8900 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 0x106 }
	__asm { push edi }
	__asm { call fn_00bc8900 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 0xee2014 }
	__asm { L_00bccda8: }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bccdba: }
	__asm { push edi }
	__asm { call fn_00bcd050 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x23c] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bcebe0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
extern "C" void fn_00bc6450();
extern "C" void fn_00bc87b0();
extern "C" void fn_00bcee60();
extern "C" void fn_00c18bc0();
// FUNCTION: ROBLOXSTUDIO 0x00bcd050
extern "C" __declspec(naked) void asm_00bcd050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 0x30] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x34] }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00bcee60 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { call fn_00c18bc0 }
	__asm { mov ecx, dword ptr [ebx + 0x18] }
	__asm { add esp, 0x14 }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, 0x3fffffff }
	__asm { ja L_00bcd0a0 }
	__asm { lea eax, [ecx*4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00bcd0a9 }
	__asm { L_00bcd0a0: }
	__asm { push edi }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { L_00bcd0a9: }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov ecx, dword ptr [ebx + 0x18] }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, 0x3fffffff }
	__asm { ja L_00bcd0dc }
	__asm { lea eax, [ecx*4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x14] }
	__asm { push edi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00bcd0e5 }
	__asm { L_00bcd0dc: }
	__asm { push edi }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { L_00bcd0e5: }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov ecx, dword ptr [ebx + 0x28] }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, 0xfffffff }
	__asm { ja L_00bcd114 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { shl ecx, 4 }
	__asm { push ecx }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { push dword ptr [esi + 8] }
	__asm { push edi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00bcd11d }
	__asm { L_00bcd114: }
	__asm { push edi }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { L_00bcd11d: }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov ecx, dword ptr [ebx + 0x2c] }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, 0x3fffffff }
	__asm { ja L_00bcd150 }
	__asm { lea eax, [ecx*4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push edi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00bcd159 }
	__asm { L_00bcd150: }
	__asm { push edi }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { L_00bcd159: }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { movsx ecx, word ptr [ebx + 0x30] }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, 0x15555555 }
	__asm { ja L_00bcd18f }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x18] }
	__asm { push edi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00bcd198 }
	__asm { L_00bcd18f: }
	__asm { push edi }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { L_00bcd198: }
	__asm { movzx ecx, byte ptr [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { movsx eax, word ptr [ebx + 0x30] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, 0x3fffffff }
	__asm { ja L_00bcd1cd }
	__asm { lea eax, [ecx*4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push edi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00bcd1d6 }
	__asm { L_00bcd1cd: }
	__asm { push edi }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { L_00bcd1d6: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { movzx eax, byte ptr [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ecx + 0x30], eax }
	__asm { add dword ptr [edi + 8], -0x20 }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { cmp eax, 0x11d }
	__asm { je L_00bcd201 }
	__asm { cmp eax, 0x11e }
	__asm { jne L_00bcd214 }
	__asm { L_00bcd201: }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { add eax, 0x10 }
	__asm { push dword ptr [eax - 4] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00bc87b0 }
	__asm { add esp, 0xc }
	__asm { L_00bcd214: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a45780();
extern "C" void fn_00a457e0();
extern "C" void fn_00bc8720();
extern "C" void fn_00bc8790();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00bce2f0();
extern "C" void fn_00bce360();
extern "C" void fn_00bcece0();
extern "C" void fn_00bcf6c0();
extern "C" void fn_00c180d0();
extern "C" void fn_00c183e0();
extern "C" void fn_00c18ce0();
// FUNCTION: ROBLOXSTUDIO 0x00bcd250
extern "C" __declspec(naked) void asm_00bcd250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, dword ptr [esi + 0x30] }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xa }
	__asm { push ebx }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { call fn_00c180d0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov dword ptr [ecx + 0x10], 0xffffffff }
	__asm { mov dword ptr [ecx + 0x14], 0xffffffff }
	__asm { mov dword ptr [ecx], 0xb }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { push dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 0x1c], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { call fn_00c183e0 }
	__asm { add esp, 0x1c }
	__asm { cmp dword ptr [esi + 0x10], 0x7b }
	__asm { je L_00bcd2f6 }
	__asm { push 0x7b }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bcd2f6: }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [esi + 0x10], 0x7d }
	__asm { je L_00bcd405 }
	__asm { cmp dword ptr [ebp - 0x2c], 0 }
	__asm { je L_00bcd344 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00c183e0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 8], 0x32 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { jne L_00bcd344 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push 0x32 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { push dword ptr [eax + 8] }
	__asm { push ebx }
	__asm { call fn_00c18ce0 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { L_00bcd344: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, 0x5b }
	__asm { je L_00bcd3de }
	__asm { cmp eax, 0x11d }
	__asm { je L_00bcd3c3 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bcf6c0 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { cmp eax, 0x7ffffffd }
	__asm { jle L_00bcd3ba }
	__asm { mov edi, dword ptr [esi + 0x30] }
	__asm { push 0xee20b4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0x7ffffffd }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { test eax, eax }
	__asm { jne L_00bcd398 }
	__asm { push 0xee1fc8 }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00bcd3a9 }
	__asm { L_00bcd398: }
	__asm { push eax }
	__asm { push 0xee1fec }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0x14 }
	__asm { L_00bcd3a9: }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_00bc8720 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { L_00bcd3ba: }
	__asm { inc eax }
	__asm { inc dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { jmp L_00bcd3eb }
	__asm { L_00bcd3c3: }
	__asm { push esi }
	__asm { call fn_00bc8790 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [esi + 0x20], 0x3d }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push esi }
	__asm { je L_00bcd3e3 }
	__asm { call fn_00bce360 }
	__asm { jmp L_00bcd3e8 }
	__asm { L_00bcd3de: }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push esi }
	__asm { L_00bcd3e3: }
	__asm { call fn_00bcece0 }
	__asm { L_00bcd3e8: }
	__asm { add esp, 8 }
	__asm { L_00bcd3eb: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, 0x2c }
	__asm { je L_00bcd2f6 }
	__asm { cmp eax, 0x3b }
	__asm { je L_00bcd2f6 }
	__asm { cmp eax, 0x7d }
	__asm { jne L_00bcd410 }
	__asm { L_00bcd405: }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { jmp L_00bcd458 }
	__asm { L_00bcd410: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jne L_00bcd428 }
	__asm { push 0x7d }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { jmp L_00bcd446 }
	__asm { L_00bcd428: }
	__asm { push edi }
	__asm { push 0x7b }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 0x7d }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 0xee2014 }
	__asm { L_00bcd446: }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bcd458: }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00bce2f0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { lea esi, [eax + edi*4] }
	__asm { call fn_00a45780 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { shl eax, 0x17 }
	__asm { and ecx, 0x7fffff }
	__asm { or eax, ecx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { lea esi, [eax + edi*4] }
	__asm { call fn_00a45780 }
	__asm { shl eax, 0xe }
	__asm { xor eax, dword ptr [esi] }
	__asm { add esp, 0x10 }
	__asm { and eax, 0x7fc000 }
	__asm { xor dword ptr [esi], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc87b0();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00bcd5c0();
extern "C" void fn_00bce690();
extern "C" void fn_00bcf6c0();
extern "C" void fn_00c18100();
extern "C" void fn_00c183e0();
extern "C" void fn_00c187f0();
extern "C" void fn_00c18b80();
// FUNCTION: ROBLOXSTUDIO 0x00bcd970
extern "C" __declspec(naked) void asm_00bcd970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x30] }
	__asm { push 0 }
	__asm { mov ebx, dword ptr [edi + 0x24] }
	__asm { push 0xb }
	__asm { push 0xee21ac }
	__asm { push esi }
	__asm { call fn_00bc87b0 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bce690 }
	__asm { add esp, 0xc }
	__asm { push 1 }
	__asm { push 0xb }
	__asm { push 0xee21b8 }
	__asm { push esi }
	__asm { call fn_00bc87b0 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bce690 }
	__asm { add esp, 0xc }
	__asm { push 2 }
	__asm { push 0xa }
	__asm { push 0xee21c4 }
	__asm { push esi }
	__asm { call fn_00bc87b0 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bce690 }
	__asm { push 3 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00bce690 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [esi + 0x10], 0x3d }
	__asm { je L_00bcda07 }
	__asm { push 0x3d }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bcda07: }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bcf6c0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00c183e0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [esi + 0x10], 0x2c }
	__asm { je L_00bcda4e }
	__asm { push 0x2c }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bcda4e: }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bcf6c0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00c183e0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [esi + 0x10], 0x2c }
	__asm { jne L_00bcda98 }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bcf6c0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00c183e0 }
	__asm { add esp, 0x18 }
	__asm { jmp L_00bcdabd }
	__asm { L_00bcda98: }
	__asm { fld1 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push edi }
	__asm { call fn_00c187f0 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x24] }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c18100 }
	__asm { push 1 }
	__asm { push edi }
	__asm { call fn_00c18b80 }
	__asm { add esp, 0x24 }
	__asm { L_00bcdabd: }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00bcd5c0 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00bcd7b0();
extern "C" void fn_00bcd970();
extern "C" void fn_00bcee60();
extern "C" void fn_00c180d0();
extern "C" void fn_00c18860();
// FUNCTION: ROBLOXSTUDIO 0x00bcdae0
extern "C" __declspec(naked) void asm_00bcdae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ebp - 8], 0xffffffff }
	__asm { mov byte ptr [ebp - 2], 1 }
	__asm { mov al, byte ptr [edi + 0x32] }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { mov byte ptr [ebp - 3], 0 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [esi + 0x10], 0x11d }
	__asm { je L_00bcdb44 }
	__asm { push 0x11d }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bcdb44: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00bc8800 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { cmp eax, 0x2c }
	__asm { je L_00bcdb87 }
	__asm { cmp eax, 0x3d }
	__asm { je L_00bcdb78 }
	__asm { cmp eax, 0x10b }
	__asm { je L_00bcdb87 }
	__asm { push 0xee21fc }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { jmp L_00bcdb90 }
	__asm { L_00bcdb78: }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00bcd970 }
	__asm { add esp, 0xc }
	__asm { jmp L_00bcdb93 }
	__asm { L_00bcdb87: }
	__asm { push dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00bcd7b0 }
	__asm { L_00bcdb90: }
	__asm { add esp, 8 }
	__asm { L_00bcdb93: }
	__asm { cmp dword ptr [esi + 0x10], 0x106 }
	__asm { jne L_00bcdba7 }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { jmp L_00bcdbf5 }
	__asm { L_00bcdba7: }
	__asm { cmp ebx, dword ptr [esi + 4] }
	__asm { jne L_00bcdbbf }
	__asm { push 0x106 }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { jmp L_00bcdbe3 }
	__asm { L_00bcdbbf: }
	__asm { push ebx }
	__asm { push 0x108 }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 0x106 }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 0xee2014 }
	__asm { L_00bcdbe3: }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bcdbf5: }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { movzx eax, byte ptr [esi + 8] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_00bcee60 }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [esi + 9], 0 }
	__asm { pop ebx }
	__asm { je L_00bcdc28 }
	__asm { movzx eax, byte ptr [esi + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0x23 }
	__asm { push edi }
	__asm { call fn_00c180d0 }
	__asm { add esp, 0x14 }
	__asm { L_00bcdc28: }
	__asm { movzx eax, byte ptr [edi + 0x32] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push edi }
	__asm { call fn_00c18860 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bccec0();
extern "C" void fn_00bcd250();
extern "C" void fn_00bcd510();
extern "C" void fn_00c180d0();
extern "C" void fn_00c183e0();
extern "C" void fn_00c184d0();
extern "C" void fn_00c18dd0();
extern "C" void fn_00c18f70();
// FUNCTION: ROBLOXSTUDIO 0x00bcdc50
extern "C" __declspec(naked) void asm_00bcdc50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov edi, dword ptr [esi + 0x30] }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { cmp eax, 0x28 }
	__asm { je L_00bcdcc6 }
	__asm { cmp eax, 0x7b }
	__asm { je L_00bcdcb7 }
	__asm { cmp eax, 0x11e }
	__asm { je L_00bcdc8b }
	__asm { push 0xee2124 }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcdc8b: }
	__asm { push dword ptr [esi + 0x18] }
	__asm { push edi }
	__asm { call fn_00c18f70 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 8], 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_00bc8800 }
	__asm { add esp, 0xc }
	__asm { jmp L_00bcdd18 }
	__asm { L_00bcdcb7: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bcd250 }
	__asm { add esp, 8 }
	__asm { jmp L_00bcdd18 }
	__asm { L_00bcdcc6: }
	__asm { cmp ebx, dword ptr [esi + 8] }
	__asm { je L_00bcdcd9 }
	__asm { push 0xee20f0 }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 8 }
	__asm { L_00bcdcd9: }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [esi + 0x10], 0x29 }
	__asm { jne L_00bcdcf1 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { jmp L_00bcdd0a }
	__asm { L_00bcdcf1: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bcd510 }
	__asm { push -1 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c18dd0 }
	__asm { add esp, 0x14 }
	__asm { L_00bcdd0a: }
	__asm { push ebx }
	__asm { push 0x28 }
	__asm { push 0x29 }
	__asm { push esi }
	__asm { call fn_00bccec0 }
	__asm { add esp, 0x10 }
	__asm { L_00bcdd18: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp eax, 0xd }
	__asm { je L_00bcdd4a }
	__asm { cmp eax, 0xe }
	__asm { je L_00bcdd4a }
	__asm { test eax, eax }
	__asm { je L_00bcdd42 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c183e0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { L_00bcdd42: }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { sub eax, ecx }
	__asm { dec eax }
	__asm { jmp L_00bcdd4d }
	__asm { L_00bcdd4a: }
	__asm { or eax, 0xffffffff }
	__asm { L_00bcdd4d: }
	__asm { push 2 }
	__asm { inc eax }
	__asm { push eax }
	__asm { push ecx }
	__asm { push 0x1c }
	__asm { push edi }
	__asm { call fn_00c180d0 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x10], 0xffffffff }
	__asm { mov dword ptr [esi + 0x14], 0xffffffff }
	__asm { mov dword ptr [esi], 0xd }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { call fn_00c184d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x1c }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00bccbf0();
extern "C" void fn_00bcf7c0();
extern "C" void fn_00c18130();
extern "C" void fn_00c18710();
extern "C" void fn_00c18860();
// FUNCTION: ROBLOXSTUDIO 0x00bce0a0
extern "C" __declspec(naked) void asm_00bce0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x30] }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 8], 0xffffffff }
	__asm { call fn_00bcf7c0 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [esi + 0x10], 0x105 }
	__asm { mov ebx, eax }
	__asm { jne L_00bce0f3 }
	__asm { L_00bce0c7: }
	__asm { push edi }
	__asm { call fn_00c18710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c18130 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00c18860 }
	__asm { push esi }
	__asm { call fn_00bcf7c0 }
	__asm { add esp, 0x1c }
	__asm { cmp dword ptr [esi + 0x10], 0x105 }
	__asm { mov ebx, eax }
	__asm { je L_00bce0c7 }
	__asm { L_00bce0f3: }
	__asm { cmp dword ptr [esi + 0x10], 0x104 }
	__asm { jne L_00bce125 }
	__asm { push edi }
	__asm { call fn_00c18710 }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c18130 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00c18860 }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { push esi }
	__asm { call fn_00bccbf0 }
	__asm { add esp, 0x20 }
	__asm { jmp L_00bce133 }
	__asm { L_00bce125: }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c18130 }
	__asm { add esp, 0xc }
	__asm { L_00bce133: }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00c18860 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x10], 0x106 }
	__asm { jne L_00bce156 }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bce156: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { jne L_00bce171 }
	__asm { push 0x106 }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { jmp L_00bce195 }
	__asm { L_00bce171: }
	__asm { push eax }
	__asm { push 0x10a }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 0x106 }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 0xee2014 }
	__asm { L_00bce195: }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00bccde0();
extern "C" void fn_00bccfa0();
extern "C" void fn_00bcee60();
extern "C" void fn_00bcf6c0();
extern "C" void fn_00c180d0();
extern "C" void fn_00c184f0();
extern "C" void fn_00c185a0();
extern "C" void fn_00c18710();
extern "C" void fn_00c18820();
extern "C" void fn_00c18860();
// FUNCTION: ROBLOXSTUDIO 0x00bceeb0
extern "C" __declspec(naked) void asm_00bceeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { push esi }
	__asm { call fn_00c184f0 }
	__asm { mov dword ptr [ebp - 0x14], 0xffffffff }
	__asm { mov byte ptr [ebp - 0xe], 1 }
	__asm { mov cl, byte ptr [esi + 0x32] }
	__asm { mov byte ptr [ebp - 0x10], cl }
	__asm { mov byte ptr [ebp - 0xf], 0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [ebp - 8], 0xffffffff }
	__asm { mov byte ptr [ebp - 2], 0 }
	__asm { mov al, byte ptr [esi + 0x32] }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { mov byte ptr [ebp - 3], 0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { call fn_00bc8800 }
	__asm { push edi }
	__asm { call fn_00bccfa0 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [edi + 0x10], 0x114 }
	__asm { jne L_00bcef2c }
	__asm { push edi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { jmp L_00bcef7d }
	__asm { L_00bcef2c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jne L_00bcef47 }
	__asm { push 0x114 }
	__asm { push edi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { jmp L_00bcef6b }
	__asm { L_00bcef47: }
	__asm { push eax }
	__asm { push 0x110 }
	__asm { push edi }
	__asm { call fn_00bc8900 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 0x114 }
	__asm { push edi }
	__asm { call fn_00bc8900 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 0xee2014 }
	__asm { L_00bcef6b: }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bcef7d: }
	__asm { push ebx }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bcf6c0 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { cmp eax, 1 }
	__asm { mov ecx, 3 }
	__asm { cmove eax, ecx }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00c185a0 }
	__asm { add esp, 0x14 }
	__asm { cmp byte ptr [ebp - 3], 0 }
	__asm { jne L_00bcf005 }
	__asm { mov ebx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { movzx eax, byte ptr [ebx + 8] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00bcee60 }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [ebx + 9], 0 }
	__asm { je L_00bcefe2 }
	__asm { movzx eax, byte ptr [ebx + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0x23 }
	__asm { push esi }
	__asm { call fn_00c180d0 }
	__asm { add esp, 0x14 }
	__asm { L_00bcefe2: }
	__asm { movzx eax, byte ptr [esi + 0x32] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { push esi }
	__asm { call fn_00c18860 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00c18820 }
	__asm { add esp, 0x14 }
	__asm { jmp L_00bcf073 }
	__asm { L_00bcf005: }
	__asm { push edi }
	__asm { call fn_00bccde0 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00c18860 }
	__asm { mov ebx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { movzx eax, byte ptr [ebx + 8] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00bcee60 }
	__asm { add esp, 0x14 }
	__asm { cmp byte ptr [ebx + 9], 0 }
	__asm { je L_00bcf048 }
	__asm { movzx eax, byte ptr [ebx + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0x23 }
	__asm { push esi }
	__asm { call fn_00c180d0 }
	__asm { add esp, 0x14 }
	__asm { L_00bcf048: }
	__asm { movzx eax, byte ptr [esi + 0x32] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { push esi }
	__asm { call fn_00c18860 }
	__asm { add esp, 8 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00c18710 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00c18820 }
	__asm { add esp, 0xc }
	__asm { L_00bcf073: }
	__asm { mov edi, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { movzx eax, byte ptr [edi + 8] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00bcee60 }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [edi + 9], 0 }
	__asm { pop ebx }
	__asm { je L_00bcf0a6 }
	__asm { movzx eax, byte ptr [edi + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0x23 }
	__asm { push esi }
	__asm { call fn_00c180d0 }
	__asm { add esp, 0x14 }
	__asm { L_00bcf0a6: }
	__asm { movzx eax, byte ptr [esi + 0x32] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_00c18860 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00bccfa0();
extern "C" void fn_00bcee60();
extern "C" void fn_00bcf6c0();
extern "C" void fn_00c180d0();
extern "C" void fn_00c184f0();
extern "C" void fn_00c185a0();
extern "C" void fn_00c18710();
extern "C" void fn_00c18820();
extern "C" void fn_00c18860();
// FUNCTION: ROBLOXSTUDIO 0x00bcf8b0
extern "C" __declspec(naked) void asm_00bcf8b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x30] }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { push edi }
	__asm { call fn_00c184f0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bcf6c0 }
	__asm { mov ecx, dword ptr [ebp - 0x34] }
	__asm { mov eax, 3 }
	__asm { cmp ecx, 1 }
	__asm { cmove ecx, eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ebp - 0x34], ecx }
	__asm { call fn_00c185a0 }
	__asm { mov dword ptr [ebp - 0xc], 0xffffffff }
	__asm { mov byte ptr [ebp - 6], 1 }
	__asm { mov al, byte ptr [edi + 0x32] }
	__asm { mov byte ptr [ebp - 8], al }
	__asm { mov byte ptr [ebp - 7], 0 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { add esp, 0x1c }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { cmp dword ptr [esi + 0x10], 0x103 }
	__asm { je L_00bcf946 }
	__asm { push 0x103 }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bcf946: }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { mov ebx, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ebp - 0x18], 0xffffffff }
	__asm { mov byte ptr [ebp - 0x12], 0 }
	__asm { mov al, byte ptr [ebx + 0x32] }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { mov byte ptr [ebp - 0x13], 0 }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { mov dword ptr [ebx + 0x14], eax }
	__asm { call fn_00bccfa0 }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebx + 0x14], eax }
	__asm { movzx eax, byte ptr [ecx + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0xc] }
	__asm { call fn_00bcee60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [eax + 9], 0 }
	__asm { je L_00bcf9af }
	__asm { movzx eax, byte ptr [eax + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0x23 }
	__asm { push ebx }
	__asm { call fn_00c180d0 }
	__asm { add esp, 0x14 }
	__asm { L_00bcf9af: }
	__asm { movzx eax, byte ptr [ebx + 0x32] }
	__asm { mov dword ptr [ebx + 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { call fn_00c18860 }
	__asm { add esp, 8 }
	__asm { push dword ptr [ebp - 4] }
	__asm { push edi }
	__asm { call fn_00c18710 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00c18820 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [esi + 0x10], 0x106 }
	__asm { pop ebx }
	__asm { jne L_00bcf9f0 }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { jmp L_00bcfa41 }
	__asm { L_00bcf9f0: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { jne L_00bcfa0b }
	__asm { push 0x106 }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { jmp L_00bcfa2f }
	__asm { L_00bcfa0b: }
	__asm { push eax }
	__asm { push 0x115 }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 0x106 }
	__asm { push esi }
	__asm { call fn_00bc8900 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push 0xee2014 }
	__asm { L_00bcfa2f: }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bcfa41: }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { movzx eax, byte ptr [esi + 8] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_00bcee60 }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [esi + 9], 0 }
	__asm { je L_00bcfa73 }
	__asm { movzx eax, byte ptr [esi + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0x23 }
	__asm { push edi }
	__asm { call fn_00c180d0 }
	__asm { add esp, 0x14 }
	__asm { L_00bcfa73: }
	__asm { movzx eax, byte ptr [edi + 0x32] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push edi }
	__asm { call fn_00c18860 }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { push edi }
	__asm { call fn_00c18860 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f644[];
extern "C" void fn_00407e90();
extern "C" void fn_00b49950();
// FUNCTION: ROBLOXSTUDIO 0x00bcfbb0
extern "C" __declspec(naked) void asm_00bcfbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b49950 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi], 0xee252c }
	__asm { mov dword ptr [esi + 0x108], 0 }
	__asm { mov dword ptr [esi + 0x10c], eax }
	__asm { cmp byte ptr [g_0130f644], 0 }
	__asm { jne L_00bcfc17 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 0x10], 0x130f640 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 0x10], 0xbd10f0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130f644], 1 }
	__asm { L_00bcfc17: }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { movss xmm0, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], 0xee2584 }
	__asm { movss dword ptr [esi + 0x110], xmm0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x114], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x118], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x11c], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x120], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x124], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x128], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_0130f64c[];
extern "C" void fn_00407e90();
extern "C" void fn_00b49950();
// FUNCTION: ROBLOXSTUDIO 0x00bcfc70
extern "C" __declspec(naked) void asm_00bcfc70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b49950 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi], 0xee252c }
	__asm { mov dword ptr [esi + 0x108], 0 }
	__asm { mov dword ptr [esi + 0x10c], eax }
	__asm { cmp byte ptr [g_0130f64c], 0 }
	__asm { jne L_00bcfcd7 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 0x10], 0x130f648 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 0x10], 0xbd1150 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130f64c], 1 }
	__asm { L_00bcfcd7: }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { movss xmm0, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], 0xee25b0 }
	__asm { movss dword ptr [esi + 0x110], xmm0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x114], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x118], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x11c], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x120], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x124], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x128], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_0130f63c[];
extern "C" void fn_00407e90();
extern "C" void fn_00b49950();
// FUNCTION: ROBLOXSTUDIO 0x00bcfe60
extern "C" __declspec(naked) void asm_00bcfe60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b49950 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi], 0xee252c }
	__asm { mov dword ptr [esi + 0x108], 0 }
	__asm { mov dword ptr [esi + 0x10c], eax }
	__asm { cmp byte ptr [g_0130f63c], 0 }
	__asm { jne L_00bcfec7 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 0x10], 0x130f638 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 0x10], 0xbd1210 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130f63c], 1 }
	__asm { L_00bcfec7: }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { movss xmm0, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], 0xee2558 }
	__asm { movss dword ptr [esi + 0x110], xmm0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x114], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x118], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x11c], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099c980();
extern "C" void fn_00babe40();
extern "C" void fn_00bd0470();
extern "C" void fn_00bd05a0();
extern "C" void fn_00bd06c0();
extern "C" void fn_00bd07d0();
extern "C" void fn_00bd0d00();
extern "C" void fn_00bd0f00();
extern "C" void fn_00bd0fd0();
extern "C" void fn_00bd1080();
// FUNCTION: ROBLOXSTUDIO 0x00bd0270
extern "C" __declspec(naked) void asm_00bd0270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 0x28], 0 }
	__asm { jne L_00bd0285 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { call dword ptr [eax + 0x14] }
	__asm { L_00bd0285: }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov esi, dword ptr [ebx + 0x10] }
	__asm { push edi }
	__asm { call fn_0099c980 }
	__asm { mov ecx, esi }
	__asm { lea edi, [eax + 0x24] }
	__asm { call fn_0099c980 }
	__asm { movss xmm6, dword ptr [edi] }
	__asm { subss xmm6, dword ptr [eax + 0x24] }
	__asm { movss xmm3, dword ptr [edi + 4] }
	__asm { subss xmm3, dword ptr [eax + 0x28] }
	__asm { movss xmm5, dword ptr [eax + 0x10] }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss xmm4, dword ptr [edi + 8] }
	__asm { subss xmm4, dword ptr [eax + 0x2c] }
	__asm { movss xmm2, dword ptr [eax + 0x14] }
	__asm { mulss xmm0, xmm6 }
	__asm { movss xmm1, dword ptr [eax + 0xc] }
	__asm { mulss xmm5, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x1c] }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, xmm6 }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mulss xmm0, xmm6 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss dword ptr [ebp - 0x10], xmm5 }
	__asm { movss dword ptr [ebp - 0xc], xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { mov ecx, dword ptr [eax + 0x100] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { call eax }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00bd07d0 }
	__asm { mov esi, eax }
	__asm { pop edi }
	__asm { test esi, esi }
	__asm { jne L_00bd03a6 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bd0449 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd038d }
	__asm { push 0x24 }
	__asm { push 0xee25d8 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd0449 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bd038d: }
	__asm { movzx eax, al }
	__asm { push 0xee2778 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bd03a6: }
	__asm { movss xmm1, dword ptr [ebp - 8] }
	__asm { comiss xmm1, dword ptr [ebp - 4] }
	__asm { ja L_00bd0449 }
	__asm { xorps xmm0, xmm0 }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bd03c7 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00bd0f00 }
	__asm { jmp L_00bd043a }
	__asm { L_00bd03c7: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00babe40 }
	__asm { mov ecx, ebx }
	__asm { test al, al }
	__asm { je L_00bd03e0 }
	__asm { push esi }
	__asm { call fn_00bd0f00 }
	__asm { jmp L_00bd043a }
	__asm { L_00bd03e0: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bd05a0 }
	__asm { test eax, eax }
	__asm { je L_00bd0407 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { comiss xmm0, dword ptr [ebp - 4] }
	__asm { ja L_00bd0449 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00bd0d00 }
	__asm { jmp L_00bd043a }
	__asm { L_00bd0407: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00bd0470 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00bd06c0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { comiss xmm0, dword ptr [ebp - 4] }
	__asm { ja L_00bd0449 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00bd0fd0 }
	__asm { L_00bd043a: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_00bd1080 }
	__asm { L_00bd0449: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00496100();
extern "C" void fn_006b9740();
extern "C" void fn_00a207e0();
extern "C" void fn_00a212c0();
extern "C" void fn_00bd3050();
extern "C" void fn_00bd33b0();
// FUNCTION: ROBLOXSTUDIO 0x00bd2090
extern "C" __declspec(naked) void asm_00bd2090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { je L_00bd20e6 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00bd33b0 }
	__asm { test eax, eax }
	__asm { je L_00bd20e6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bd20d1 }
	__asm { push 0xd2 }
	__asm { push 0xee29f0 }
	__asm { push 0xee2a34 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd20e6 }
	__asm { L_00bd20d1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee2a58 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd20e6: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push dword ptr [eax + 0x100] }
	__asm { call fn_00496100 }
	__asm { mov edi, dword ptr [eax + 0x18] }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { xor ebx, ebx }
	__asm { call fn_00a212c0 }
	__asm { test eax, eax }
	__asm { je L_00bd21bc }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov edi, edi }
	__asm { L_00bd2110: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_00a207e0 }
	__asm { movss xmm3, dword ptr [eax + 8] }
	__asm { movss xmm5, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [esi + 0xc] }
	__asm { movss xmm2, dword ptr [eax + 0xc] }
	__asm { movss xmm1, dword ptr [esi + 0x18] }
	__asm { mulss xmm0, xmm5 }
	__asm { movaps xmm4, xmm3 }
	__asm { mulss xmm4, dword ptr [esi + 0x10] }
	__asm { mulss xmm1, xmm5 }
	__asm { mulss xmm5, dword ptr [esi] }
	__asm { addss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x14] }
	__asm { mulss xmm0, xmm2 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { addss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x1c] }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm3, dword ptr [esi + 4] }
	__asm { addss xmm4, dword ptr [esi + 0x28] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x20] }
	__asm { mulss xmm0, xmm2 }
	__asm { mulss xmm2, dword ptr [esi + 8] }
	__asm { addss xmm5, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 8], xmm4 }
	__asm { addss xmm5, xmm2 }
	__asm { addss xmm1, dword ptr [esi + 0x2c] }
	__asm { addss xmm5, dword ptr [esi + 0x24] }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { movss dword ptr [ebp - 0xc], xmm5 }
	__asm { call fn_00bd3050 }
	__asm { mov ecx, edi }
	__asm { inc ebx }
	__asm { call fn_00a212c0 }
	__asm { cmp ebx, eax }
	__asm { jb L_00bd2110 }
	__asm { L_00bd21bc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00629b70();
extern "C" void fn_0099c980();
extern "C" void fn_00bd3990();
// FUNCTION: ROBLOXSTUDIO 0x00bd2ae0
extern "C" __declspec(naked) void asm_00bd2ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { push edi }
	__asm { xor ebx, ebx }
	__asm { lea edi, [edx + 4] }
	__asm { add esi, 0x2c }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { nop }
	__asm { L_00bd2b00: }
	__asm { lea ecx, [ebx - 1] }
	__asm { and ecx, 1 }
	__asm { mov ecx, dword ptr [edx + ecx*4 + 4] }
	__asm { call fn_0099c980 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_0099c980 }
	__asm { mov ecx, eax }
	__asm { call fn_00629b70 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea edx, [esi - 0x2c] }
	__asm { mov esi, eax }
	__asm { mov edi, edx }
	__asm { mov ecx, 9 }
	__asm { rep movsd }
	__asm { fld dword ptr [eax + 0x24] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push edx }
	__asm { fstp dword ptr [esi - 8] }
	__asm { push edi }
	__asm { fld dword ptr [eax + 0x28] }
	__asm { push ebx }
	__asm { fstp dword ptr [esi - 4] }
	__asm { fld dword ptr [eax + 0x2c] }
	__asm { fstp dword ptr [esi] }
	__asm { call fn_00bd3990 }
	__asm { test al, al }
	__asm { jne L_00bd2b81 }
	__asm { add dword ptr [ebp - 4], 4 }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { add edi, 0xa4 }
	__asm { inc ebx }
	__asm { add esi, 0x30 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { cmp ebx, 2 }
	__asm { jb L_00bd2b00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00bd2b81: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006547e0();
extern "C" void fn_006b9740();
extern "C" void fn_00891b60();
extern "C" void fn_009f3c40();
extern "C" void fn_00babde0();
extern "C" void fn_00bc1c10();
extern "C" void fn_00bc2260();
extern "C" void fn_00bc61d0();
extern "C" void fn_00bd0240();
extern "C" void fn_00bd0930();
extern "C" void fn_00bd1590();
extern "C" void fn_00bd1960();
extern "C" void fn_00bd2070();
// FUNCTION: ROBLOXSTUDIO 0x00bd2e50
extern "C" __declspec(naked) void asm_00bd2e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5dba4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { call fn_00bc61d0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { push 0x170 }
	__asm { call fn_00bd1960 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [ebp - 0x1c], 0 }
	__asm { je L_00bd2f84 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_00bd0930 }
	__asm { push eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { sub esp, 0x1c }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x40], esp }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_00bd0240 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x44], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { sub esp, 0x1c }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x48], esp }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { call fn_00bc1c10 }
	__asm { mov ecx, eax }
	__asm { call fn_00bd0240 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov edx, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x4c], edx }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [edx + 0x18] }
	__asm { call fn_00bc2260 }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov edx, dword ptr [ebp - 0x34] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { call fn_00babde0 }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add ecx, 0xc }
	__asm { push ecx }
	__asm { mov edx, 4 }
	__asm { shl edx, 0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax + edx + 4] }
	__asm { call fn_00891b60 }
	__asm { push eax }
	__asm { mov ecx, 4 }
	__asm { imul ecx, ecx, 0 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [edx + ecx + 4] }
	__asm { call fn_00891b60 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { call fn_00bd1590 }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { jmp L_00bd2f8b }
	__asm { L_00bd2f84: }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { L_00bd2f8b: }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x3c], ecx }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { mov edx, dword ptr [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { and eax, 1 }
	__asm { je L_00bd2fb9 }
	__asm { and dword ptr [ebp - 0x14], 0xfffffffe }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_006547e0 }
	__asm { L_00bd2fb9: }
	__asm { movzx ecx, byte ptr [g_012de657] }
	__asm { test ecx, ecx }
	__asm { je L_00bd301c }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { call fn_00bd2070 }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_009f3c40 }
	__asm { add esp, 4 }
	__asm { movzx edx, al }
	__asm { test edx, edx }
	__asm { je L_00bd301c }
	__asm { cmp dword ptr [g_012de694], 0 }
	__asm { je L_00bd3007 }
	__asm { push 0x1f1 }
	__asm { push 0xee29f0 }
	__asm { push 0xee2acc }
	__asm { call dword ptr [g_012de694] }
	__asm { add esp, 0xc }
	__asm { movzx eax, al }
	__asm { test eax, eax }
	__asm { jne L_00bd301c }
	__asm { L_00bd3007: }
	__asm { push 0xee2b78 }
	__asm { movzx ecx, byte ptr [g_012de657] }
	__asm { push ecx }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd301c: }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_01038280[];
extern "C" char g_010385f0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bd79a0
extern "C" __declspec(naked) void asm_00bd79a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { movss xmm0, dword ptr [g_01038280] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { je L_00bd7a07 }
	__asm { cmp dword ptr [esi + 0xd4], 0 }
	__asm { ja L_00bd7a07 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bd79f2 }
	__asm { push 0x80 }
	__asm { push 0xee3788 }
	__asm { push 0xee3904 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd7a07 }
	__asm { L_00bd79f2: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee3920 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd7a07: }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [esi + 0xd4], edi }
	__asm { jbe L_00bd7aa2 }
	__asm { L_00bd7a15: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bd7a59 }
	__asm { cmp edi, dword ptr [esi + 0xd4] }
	__asm { jb L_00bd7a59 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bd7a44 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd7a59 }
	__asm { L_00bd7a44: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd7a59: }
	__asm { mov esi, dword ptr [esi + edi*4 + 0x34] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x20] }
	__asm { movss xmm0, dword ptr [esi + 0xe0] }
	__asm { xorps xmm0, xmmword ptr [g_010385f0] }
	__asm { comiss xmm0, dword ptr [ebp - 8] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { ja L_00bd7a84 }
	__asm { lea eax, [ebp - 4] }
	__asm { L_00bd7a84: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { inc edi }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { cmp edi, dword ptr [esi + 0xd4] }
	__asm { jb L_00bd7a15 }
	__asm { L_00bd7aa2: }
	__asm { fld dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e33a14[];
extern "C" char g_01038120[];
extern "C" char g_01038190[];
extern "C" void fn_00594b30();
extern "C" void fn_005aa650();
extern "C" void fn_006d19a0();
extern "C" void fn_006d6760();
extern "C" void fn_006da0e0();
extern "C" void fn_006dce00();
extern "C" void fn_006dd620();
extern "C" void fn_009f4c50();
extern "C" void fn_00a09850();
extern "C" void fn_00b49920();
extern "C" void fn_00b61de0();
// FUNCTION: ROBLOXSTUDIO 0x00bd7ab0
extern "C" __declspec(naked) void asm_00bd7ab0()
{
	__asm { push ebx }
	__asm { mov ebx, esp }
	__asm { sub esp, 8 }
	__asm { and esp, 0xfffffff0 }
	__asm { add esp, 4 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esp + 4], ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ddb6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { sub esp, 0x78 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebx + 0xc] }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x2c], edi }
	__asm { call fn_00b49920 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov word ptr [edi + 0x34], ax }
	__asm { mov dword ptr [edi + 0xd8], eax }
	__asm { lea ecx, [edi + 0xf0] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov dword ptr [edi], 0xee3b38 }
	__asm { mov dword ptr [edi + 0xdc], eax }
	__asm { mov dword ptr [edi + 0xe0], eax }
	__asm { call fn_00594b30 }
	__asm { lea ecx, [edi + 0x214] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006da0e0 }
	__asm { mov dword ptr [edi + 0x2e4], 0 }
	__asm { mov eax, dword ptr [esi + 0x108] }
	__asm { test eax, eax }
	__asm { je L_00bd7b49 }
	__asm { lea ecx, [eax - 0x70] }
	__asm { jmp L_00bd7b4b }
	__asm { L_00bd7b49: }
	__asm { xor ecx, ecx }
	__asm { L_00bd7b4b: }
	__asm { mov esi, dword ptr [ebx + 0x10] }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push eax }
	__asm { add ecx, 0x140 }
	__asm { call fn_00a09850 }
	__asm { mov eax, dword ptr [esi] }
	__asm { movzx ecx, byte ptr [ebp - 0x11] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov ax, word ptr [esi + 4] }
	__asm { mov word ptr [edi + 0x34], ax }
	__asm { mov eax, ecx }
	__asm { shr ecx, 3 }
	__asm { and ecx, 7 }
	__asm { shr eax, 6 }
	__asm { mov dword ptr [ebp - 0x28], ecx }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { call fn_006dd620 }
	__asm { movss xmm0, dword ptr [g_01038190] }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [g_01038120] }
	__asm { addss xmm3, xmm0 }
	__asm { addss xmm2, xmm0 }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0x18], xmm3 }
	__asm { movss dword ptr [ebp - 0x1c], xmm2 }
	__asm { movss dword ptr [ebp - 0x20], xmm1 }
	__asm { call fn_006d6760 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x70] }
	__asm { call fn_006d19a0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { lea eax, [edi + 0x214] }
	__asm { mov ecx, 9 }
	__asm { lea esi, [ebp - 0x70] }
	__asm { mov edi, eax }
	__asm { rep movsd }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { movss dword ptr [eax + 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [eax + 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { movss dword ptr [eax + 0x2c], xmm0 }
	__asm { test ecx, ecx }
	__asm { jle L_00bd7c2e }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { push ecx }
	__asm { mulss xmm0, dword ptr [g_00e33a14] }
	__asm { movss dword ptr [esp], xmm0 }
	__asm { push eax }
	__asm { call fn_009f4c50 }
	__asm { add esp, 8 }
	__asm { L_00bd7c2e: }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { mov ecx, dword ptr [ecx + 0x100] }
	__asm { call fn_00b61de0 }
	__asm { mov esi, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [esi + 0x210], eax }
	__asm { lea eax, [ebp - 0x80] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x214] }
	__asm { call fn_006dce00 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xf0] }
	__asm { call fn_005aa650 }
	__asm { mov eax, dword ptr [esi + 0xf0] }
	__asm { push dword ptr [esi + 0x210] }
	__asm { lea ecx, [esi + 0xf0] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret 0xc }
}

extern "C" char g_00e362b0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b533d0();
extern "C" void fn_00b8c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00bd86d0
extern "C" __declspec(naked) void asm_00bd86d0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor ebx, ebx }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x2e4], ebx }
	__asm { jbe L_00bd882b }
	__asm { L_00bd86e5: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bd8729 }
	__asm { cmp esi, dword ptr [edi + 0x2e4] }
	__asm { jb L_00bd8729 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bd8714 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd8729 }
	__asm { L_00bd8714: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd8729: }
	__asm { mov eax, dword ptr [edi + esi*4 + 0x244] }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { jge L_00bd881e }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jge L_00bd881e }
	__asm { cmp dword ptr [eax + 0xc], 0 }
	__asm { jge L_00bd881e }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { jge L_00bd881e }
	__asm { cmp dword ptr [eax + 0x14], 0 }
	__asm { jge L_00bd881e }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bd87a6 }
	__asm { cmp esi, dword ptr [edi + 0x2e4] }
	__asm { jb L_00bd87a6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bd8791 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd87a6 }
	__asm { L_00bd8791: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd87a6: }
	__asm { mov eax, dword ptr [edi + esi*4 + 0x244] }
	__asm { movss xmm0, dword ptr [g_00e362b0] }
	__asm { comiss xmm0, dword ptr [eax + 0xe0] }
	__asm { jbe L_00bd881e }
	__asm { test ebx, ebx }
	__asm { jne L_00bd87cb }
	__asm { mov ecx, edi }
	__asm { call fn_00b8c1b0 }
	__asm { mov ebx, eax }
	__asm { L_00bd87cb: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bd8810 }
	__asm { cmp esi, dword ptr [edi + 0x2e4] }
	__asm { jb L_00bd8810 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd87fb }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd8810 }
	__asm { L_00bd87fb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd8810: }
	__asm { push dword ptr [edi + esi*4 + 0x244] }
	__asm { mov ecx, ebx }
	__asm { call fn_00b533d0 }
	__asm { L_00bd881e: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x2e4] }
	__asm { jb L_00bd86e5 }
	__asm { L_00bd882b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_01038280[];
extern "C" char g_010385f0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bd89d0
extern "C" __declspec(naked) void asm_00bd89d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { movss xmm0, dword ptr [g_01038280] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { je L_00bd8a37 }
	__asm { cmp dword ptr [esi + 0x2e4], 0 }
	__asm { ja L_00bd8a37 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bd8a22 }
	__asm { push 0x93 }
	__asm { push 0xee3ba0 }
	__asm { push 0xee3904 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd8a37 }
	__asm { L_00bd8a22: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee3ce8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd8a37: }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [esi + 0x2e4], edi }
	__asm { jbe L_00bd8ad5 }
	__asm { L_00bd8a45: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bd8a89 }
	__asm { cmp edi, dword ptr [esi + 0x2e4] }
	__asm { jb L_00bd8a89 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bd8a74 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd8a89 }
	__asm { L_00bd8a74: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd8a89: }
	__asm { mov esi, dword ptr [esi + edi*4 + 0x244] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x20] }
	__asm { movss xmm0, dword ptr [esi + 0xe0] }
	__asm { xorps xmm0, xmmword ptr [g_010385f0] }
	__asm { comiss xmm0, dword ptr [ebp - 8] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { ja L_00bd8ab7 }
	__asm { lea eax, [ebp - 4] }
	__asm { L_00bd8ab7: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { inc edi }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { cmp edi, dword ptr [esi + 0x2e4] }
	__asm { jb L_00bd8a45 }
	__asm { L_00bd8ad5: }
	__asm { fld dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380e4[];
extern "C" char g_010385f0[];
extern "C" char g_0130ee00[];
extern "C" char g_0130ee04[];
extern "C" char g_0130ee08[];
extern "C" char g_0130ee0c[];
extern "C" void fn_00b49920();
extern "C" void fn_00c03e00();
// FUNCTION: ROBLOXSTUDIO 0x00bd8b80
extern "C" __declspec(naked) void asm_00bd8b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00b49920 }
	__asm { mov dword ptr [edi], 0xee3d9c }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { fstp dword ptr [edi + 0x54] }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { movss xmm0, dword ptr [eax + 0x114] }
	__asm { mov eax, dword ptr [g_0130ee0c] }
	__asm { movss dword ptr [ebp + 0xc], xmm0 }
	__asm { test al, 1 }
	__asm { jne L_00bd8c2c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ee0c], eax }
	__asm { mov dword ptr [g_0130ee00], 0 }
	__asm { mov dword ptr [g_0130ee04], 0xc11cf5c3 }
	__asm { mov dword ptr [g_0130ee08], 0 }
	__asm { L_00bd8c2c: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0x130ee00 }
	__asm { push eax }
	__asm { call fn_00c03e00 }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { divss xmm0, dword ptr [ebp + 0xc] }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax + 0x104] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x90] }
	__asm { xorps xmm0, xmmword ptr [g_010385f0] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { add esp, 8 }
	__asm { movss dword ptr [edi + 0x5c], xmm3 }
	__asm { movss dword ptr [edi + 0x60], xmm2 }
	__asm { movss dword ptr [edi + 0x64], xmm1 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0103808c[];
extern "C" char g_012f8550[];
extern "C" void fn_006dea00();
extern "C" void fn_00a0a110();
extern "C" void fn_00a4f140();
extern "C" void fn_00cf6840();
extern "C" void fn_00cf68ec();
// FUNCTION: ROBLOXSTUDIO 0x00bd9000
extern "C" __declspec(naked) void asm_00bd9000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { fld dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { fmul dword ptr [g_0103808c] }
	__asm { mov edi, ecx }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { call fn_00cf6840 }
	__asm { fld dword ptr [esi + 4] }
	__asm { fmul dword ptr [g_0103808c] }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { call fn_00cf6840 }
	__asm { fld dword ptr [esi + 8] }
	__asm { fmul dword ptr [g_0103808c] }
	__asm { mov word ptr [ebp - 6], ax }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { add esp, 8 }
	__asm { call fn_00cf6840 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov word ptr [ebp - 4], ax }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { mov ecx, dword ptr [eax + 0xb4] }
	__asm { call fn_00a4f140 }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0xf] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00a0a110 }
	__asm { mov al, byte ptr [ebp + 0xf] }
	__asm { cmp al, byte ptr [g_012f8550] }
	__asm { jne L_00bd90b6 }
	__asm { call fn_006dea00 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00bd90b6: }
	__asm { movzx ecx, al }
	__asm { mov eax, ecx }
	__asm { shr eax, 3 }
	__asm { and eax, 0x1ffffff8 }
	__asm { and ecx, 7 }
	__asm { or eax, ecx }
	__asm { xor edx, edx }
	__asm { dec eax }
	__asm { mov ecx, 6 }
	__asm { div ecx }
	__asm { mov esi, 5 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, edx }
	__asm { xor edx, edx }
	__asm { div esi }
	__asm { shl edx, 4 }
	__asm { test cl, 1 }
	__asm { jne L_00bd90fc }
	__asm { neg edx }
	__asm { L_00bd90fc: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cvtsi2ss xmm0, edx }
	__asm { sar ecx, 1 }
	__asm { pop edi }
	__asm { movss dword ptr [ebp + ecx*4 - 0xc], xmm0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_010380b8[];
extern "C" char g_010385f0[];
extern "C" void fn_0099c980();
extern "C" void fn_009f6b70();
extern "C" void fn_00bdc240();
// FUNCTION: ROBLOXSTUDIO 0x00bd9590
extern "C" __declspec(naked) void asm_00bd9590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x3c }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { call fn_0099c980 }
	__asm { mov edx, dword ptr [eax + 0x24] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x50] }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { call fn_00bdc240 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00bd95cf }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bd95cf: }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { mov eax, dword ptr [eax + 0x100] }
	__asm { push esi }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm1, dword ptr [eax + 0xc] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [g_010385f0] }
	__asm { movss dword ptr [ebp - 0x24], xmm3 }
	__asm { xorps xmm3, xmm0 }
	__asm { movss dword ptr [ebp - 0x20], xmm2 }
	__asm { movss dword ptr [ebp - 0x18], xmm3 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { xorps xmm2, xmm0 }
	__asm { movss dword ptr [ebp - 0x1c], xmm1 }
	__asm { movss dword ptr [ebp - 0x14], xmm2 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { xorps xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { xor esi, esi }
	__asm { L_00bd9651: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_009f6b70 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { addss xmm0, dword ptr [ebp - 0xc] }
	__asm { movss dword ptr [ebp - 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { addss xmm0, dword ptr [ebp - 8] }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm0, dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x50] }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { call fn_00bdc240 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00bd96ab }
	__asm { inc esi }
	__asm { cmp esi, 5 }
	__asm { jle L_00bd9651 }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bd96ab: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380b8[];
extern "C" char g_010385f0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009f6c00();
extern "C" void fn_00b4ba50();
extern "C" void fn_00c1ba20();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bd9990
extern "C" __declspec(naked) void asm_00bd9990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd284ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [eax + 0x100] }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm1, dword ptr [eax + 0xc] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [g_010385f0] }
	__asm { movss dword ptr [ebp - 0x2c], xmm3 }
	__asm { xorps xmm3, xmm0 }
	__asm { movss dword ptr [ebp - 0x28], xmm2 }
	__asm { movss dword ptr [ebp - 0x20], xmm3 }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x44], eax }
	__asm { xorps xmm2, xmm0 }
	__asm { movss dword ptr [ebp - 0x24], xmm1 }
	__asm { movss dword ptr [ebp - 0x1c], xmm2 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { xorps xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0x18], xmm1 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { L_00bd9a35: }
	__asm { push 0x138 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00bd9ab5 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { call fn_009f6c00 }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss xmm3, dword ptr [g_010380b8] }
	__asm { mulss xmm2, xmm3 }
	__asm { mulss xmm1, xmm3 }
	__asm { mulss xmm0, xmm3 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [ebp - 0x2c], xmm2 }
	__asm { movss dword ptr [ebp - 0x28], xmm1 }
	__asm { movss dword ptr [ebp - 0x24], xmm0 }
	__asm { call fn_00b4ba50 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { push 0 }
	__asm { call fn_00b4ba50 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call fn_00c1ba20 }
	__asm { mov edi, eax }
	__asm { jmp L_00bd9ab7 }
	__asm { L_00bd9ab5: }
	__asm { xor edi, edi }
	__asm { L_00bd9ab7: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test al, al }
	__asm { je L_00bd9b02 }
	__asm { cmp dword ptr [esi + 0x4c], 8 }
	__asm { jb L_00bd9b02 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd9af1 }
	__asm { push 0x1a }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca80c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd9b02 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bd9af1: }
	__asm { movzx eax, al }
	__asm { push 0xeca818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd9b02: }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { mov dword ptr [esi + eax*4 + 0x2c], edi }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { inc dword ptr [esi + 0x4c] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp eax, 8 }
	__asm { jb L_00bd9a35 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_0103808c[];
extern "C" char g_010380b8[];
extern "C" char g_010385f0[];
extern "C" void fn_006dea00();
extern "C" void fn_009f6c50();
// FUNCTION: ROBLOXSTUDIO 0x00bd9d80
extern "C" __declspec(naked) void asm_00bd9d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x3c }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x50] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x100] }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm1, dword ptr [eax + 0xc] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [g_010385f0] }
	__asm { movss dword ptr [ebp - 0x18], xmm3 }
	__asm { xorps xmm3, xmm0 }
	__asm { movss dword ptr [ebp - 0x14], xmm2 }
	__asm { movss dword ptr [ebp - 0xc], xmm3 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { xorps xmm2, xmm0 }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { xorps xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_009f6c50 }
	__asm { movss xmm0, dword ptr [g_0103808c] }
	__asm { movss xmm3, dword ptr [esi + 0x68] }
	__asm { movss xmm2, dword ptr [esi + 0x6c] }
	__asm { movss xmm1, dword ptr [esi + 0x70] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0x24], xmm3 }
	__asm { movss dword ptr [ebp - 0x20], xmm2 }
	__asm { movss dword ptr [ebp - 0x1c], xmm1 }
	__asm { call fn_006dea00 }
	__asm { xorps xmm1, xmm1 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_00bd9e83 }
	__asm { mov edx, 1 }
	__asm { jmp L_00bd9e85 }
	__asm { L_00bd9e83: }
	__asm { xor edx, edx }
	__asm { L_00bd9e85: }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_00bd9e96 }
	__asm { mov edi, 1 }
	__asm { jmp L_00bd9e98 }
	__asm { L_00bd9e96: }
	__asm { xor edi, edi }
	__asm { L_00bd9e98: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_00bd9ea8 }
	__asm { mov eax, 1 }
	__asm { jmp L_00bd9eaa }
	__asm { L_00bd9ea8: }
	__asm { xor eax, eax }
	__asm { L_00bd9eaa: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { movsx ecx, ax }
	__asm { movsx eax, word ptr [ebp - 8] }
	__asm { xor ecx, eax }
	__asm { movsx edx, dx }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { movsx ecx, di }
	__asm { fld dword ptr [ebp + eax*4 - 0x24] }
	__asm { movsx eax, word ptr [ebp - 6] }
	__asm { fstp dword ptr [esi] }
	__asm { xor ecx, eax }
	__asm { pop edi }
	__asm { lea ecx, [ecx + ecx*2] }
	__asm { mov eax, esi }
	__asm { fld dword ptr [ebp + ecx*4 - 0x20] }
	__asm { movsx ecx, word ptr [ebp - 4] }
	__asm { xor edx, ecx }
	__asm { fstp dword ptr [esi + 4] }
	__asm { lea ecx, [edx + edx*2] }
	__asm { fld dword ptr [ebp + ecx*4 - 0x1c] }
	__asm { fstp dword ptr [esi + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_010380b8[];
extern "C" char g_010385f0[];
extern "C" void fn_006dea00();
extern "C" void fn_0099c980();
extern "C" void fn_009f6b70();
extern "C" void fn_00bd9000();
// FUNCTION: ROBLOXSTUDIO 0x00bda040
extern "C" __declspec(naked) void asm_00bda040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x4c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { call fn_0099c980 }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov edx, dword ptr [eax + 0x24] }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { call fn_00bd9000 }
	__asm { call fn_006dea00 }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { mov ecx, eax }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00bda1ca }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00bda1ca }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00bda1ca }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { mov eax, dword ptr [eax + 0x100] }
	__asm { xor edi, edi }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm1, dword ptr [eax + 0xc] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [g_010385f0] }
	__asm { movss dword ptr [ebp - 0x28], xmm3 }
	__asm { xorps xmm3, xmm0 }
	__asm { movss dword ptr [ebp - 0x24], xmm2 }
	__asm { movss dword ptr [ebp - 0x1c], xmm3 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { xorps xmm2, xmm0 }
	__asm { movss dword ptr [ebp - 0x20], xmm1 }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x48], eax }
	__asm { xorps xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x44], eax }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { L_00bda135: }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { call fn_009f6b70 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { addss xmm0, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { addss xmm0, dword ptr [ebp - 0xc] }
	__asm { movss dword ptr [ebp - 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm0, dword ptr [ebp - 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { call fn_00bd9000 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esi] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 8] }
	__asm { call fn_006dea00 }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { mov ecx, eax }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00bda1ca }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00bda1ca }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00bda1ca }
	__asm { inc edi }
	__asm { cmp edi, 5 }
	__asm { jle L_00bda135 }
	__asm { L_00bda1ca: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01038120[];
extern "C" void fn_0099d320();
// FUNCTION: ROBLOXSTUDIO 0x00bda3e0
extern "C" __declspec(naked) void asm_00bda3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { call fn_0099d320 }
	__asm { mov edx, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [g_01038120] }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { movss xmm2, dword ptr [ebp - 0xc] }
	__asm { movaps xmm3, xmm2 }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mulss xmm2, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mulss xmm3, dword ptr [ebp - 4] }
	__asm { movss xmm4, dword ptr [ebp - 4] }
	__asm { mulss xmm4, dword ptr [ebp - 8] }
	__asm { movss dword ptr [esi + 0x6c], xmm3 }
	__asm { movss dword ptr [esi + 0x70], xmm2 }
	__asm { movaps xmm0, xmm2 }
	__asm { addss xmm0, xmm3 }
	__asm { addss xmm2, xmm4 }
	__asm { addss xmm3, xmm4 }
	__asm { movss dword ptr [esi + 0x68], xmm4 }
	__asm { mulss xmm0, xmm1 }
	__asm { mulss xmm2, xmm1 }
	__asm { mulss xmm3, xmm1 }
	__asm { movss dword ptr [esi + 0x74], xmm0 }
	__asm { movss dword ptr [esi + 0x78], xmm2 }
	__asm { movss dword ptr [esi + 0x7c], xmm3 }
	__asm { movss xmm0, dword ptr [esi + 0x6c] }
	__asm { addss xmm0, xmm4 }
	__asm { addss xmm0, dword ptr [esi + 0x70] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [esi + 0x58], xmm0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)
