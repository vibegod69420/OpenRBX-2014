// Bundled inline-assembly functions (merged from asmify12).

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_01038224[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00496100();
extern "C" void fn_006b9740();
extern "C" void fn_00a207e0();
extern "C" void fn_00b655f0();
extern "C" void fn_00bd1ab0();
extern "C" void fn_00bd33b0();
// FUNCTION: ROBLOXSTUDIO 0x00bd1ec0
extern "C" __declspec(naked) void asm_00bd1ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { movss xmm0, dword ptr [g_01038224] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { je L_00bd1f28 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_00b655f0 }
	__asm { cmp eax, 3 }
	__asm { jae L_00bd1f28 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bd1f13 }
	__asm { push 0xbd }
	__asm { push 0xea3f40 }
	__asm { push 0xede440 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd1f28 }
	__asm { L_00bd1f13: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xede458 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd1f28: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, ebx }
	__asm { xor esi, esi }
	__asm { call fn_00bd33b0 }
	__asm { test eax, eax }
	__asm { je L_00bd1fae }
	__asm { L_00bd1f38: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00bd1ab0 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { mulss xmm1, dword ptr [edi + 0x18] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mulss xmm0, dword ptr [edi + 0x14] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, dword ptr [edi + 0x1c] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { subss xmm1, dword ptr [edi + 0x20] }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_00bd1fa2 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { movaps xmm0, xmm1 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { push dword ptr [eax + 0x100] }
	__asm { call fn_00496100 }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { add esp, 4 }
	__asm { push esi }
	__asm { call fn_00a207e0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00bd1fa2: }
	__asm { mov ecx, ebx }
	__asm { inc esi }
	__asm { call fn_00bd33b0 }
	__asm { cmp esi, eax }
	__asm { jb L_00bd1f38 }
	__asm { L_00bd1fae: }
	__asm { fld dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01038224[];
extern "C" char g_01038280[];
extern "C" void fn_00532790();
extern "C" void fn_005327b0();
extern "C" void fn_006cf180();
extern "C" void fn_00a207e0();
extern "C" void fn_00a212c0();
extern "C" void fn_00b61fa0();
// FUNCTION: ROBLOXSTUDIO 0x00bd1fc0
extern "C" __declspec(naked) void asm_00bd1fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { movss xmm0, dword ptr [g_01038280] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { movss xmm0, dword ptr [g_01038224] }
	__asm { movss dword ptr [ecx], xmm0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_00bd1ff9 }
	__asm { L_00bd1ff0: }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { add edx, 1 }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { L_00bd1ff9: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00a212c0 }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { jae L_00bd205b }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00a207e0 }
	__asm { mov ecx, eax }
	__asm { call fn_00b61fa0 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_006cf180 }
	__asm { fstp dword ptr [ebp - 8] }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00532790 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { call fn_005327b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { jmp L_00bd1ff0 }
	__asm { L_00bd205b: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00629b70();
extern "C" void fn_0099c980();
extern "C" void fn_00bd5990();
// FUNCTION: ROBLOXSTUDIO 0x00bd4d70
extern "C" __declspec(naked) void asm_00bd4d70()
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
	__asm { L_00bd4d90: }
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
	__asm { call fn_00bd5990 }
	__asm { test al, al }
	__asm { jne L_00bd4e11 }
	__asm { add dword ptr [ebp - 4], 4 }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { add edi, 0xa4 }
	__asm { inc ebx }
	__asm { add esi, 0x30 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { cmp ebx, 2 }
	__asm { jb L_00bd4d90 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00bd4e11: }
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
// FUNCTION: ROBLOXSTUDIO 0x00bd4f90
extern "C" __declspec(naked) void asm_00bd4f90()
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
	__asm { je L_00bd50c4 }
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
	__asm { mov ecx, dword ptr [ecx + 0x20] }
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
	__asm { mov ecx, dword ptr [edx + 0x20] }
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
	__asm { mov ecx, dword ptr [eax + 0x20] }
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
	__asm { jmp L_00bd50cb }
	__asm { L_00bd50c4: }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { L_00bd50cb: }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x3c], ecx }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { mov edx, dword ptr [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { and eax, 1 }
	__asm { je L_00bd50f9 }
	__asm { and dword ptr [ebp - 0x14], 0xfffffffe }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call fn_006547e0 }
	__asm { L_00bd50f9: }
	__asm { movzx ecx, byte ptr [g_012de657] }
	__asm { test ecx, ecx }
	__asm { je L_00bd515c }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { call fn_00bd2070 }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_009f3c40 }
	__asm { add esp, 4 }
	__asm { movzx edx, al }
	__asm { test edx, edx }
	__asm { je L_00bd515c }
	__asm { cmp dword ptr [g_012de694], 0 }
	__asm { je L_00bd5147 }
	__asm { push 0x220 }
	__asm { push 0xee2e38 }
	__asm { push 0xee2acc }
	__asm { call dword ptr [g_012de694] }
	__asm { add esp, 0xc }
	__asm { movzx eax, al }
	__asm { test eax, eax }
	__asm { jne L_00bd515c }
	__asm { L_00bd5147: }
	__asm { push 0xee30e0 }
	__asm { movzx ecx, byte ptr [g_012de657] }
	__asm { push ecx }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd515c: }
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

// branches use labels; absolute references use relocation symbols.

extern "C" char g_01038120[];
extern "C" char g_01038168[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00bd8f60();
// FUNCTION: ROBLOXSTUDIO 0x00bdaec0
extern "C" __declspec(naked) void asm_00bdaec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00bdaf0c }
	__asm { cmp dword ptr [esi + 0x4c], 1 }
	__asm { je L_00bdaf0c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bdaef7 }
	__asm { push 0x1b8 }
	__asm { push 0xee3fa4 }
	__asm { push 0xee42b8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bdaf0c }
	__asm { L_00bdaef7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee4538 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bdaf0c: }
	__asm { add esi, 0x2c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bdaf51 }
	__asm { cmp dword ptr [esi + 0x20], 0 }
	__asm { ja L_00bdaf51 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bdaf3c }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bdaf51 }
	__asm { L_00bdaf3c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bdaf51: }
	__asm { mov eax, dword ptr [esi] }
	__asm { xorps xmm0, xmm0 }
	__asm { movss xmm2, dword ptr [eax + 0x12c] }
	__asm { comiss xmm0, xmm2 }
	__asm { movss xmm1, dword ptr [eax + 0x130] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { jb L_00bdaf83 }
	__asm { call fn_00bd8f60 }
	__asm { mov dword ptr [eax + 0x134], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bdaf83: }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00bdaf9c }
	__asm { call fn_00bd8f60 }
	__asm { mov dword ptr [eax + 0x134], 0x3f800000 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bdaf9c: }
	__asm { movaps xmm0, xmm2 }
	__asm { addss xmm0, xmm1 }
	__asm { movss xmm1, dword ptr [g_01038168] }
	__asm { divss xmm2, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [g_01038120] }
	__asm { mulss xmm2, xmm2 }
	__asm { subss xmm1, xmm0 }
	__asm { mulss xmm1, xmm2 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { call fn_00bd8f60 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { movss dword ptr [eax + 0x134], xmm0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4870[];
extern "C" char g_0130faac[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_007e6a70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00be64e0
extern "C" __declspec(naked) void asm_00be64e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5f0ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0130faac] }
	__asm { test al, 1 }
	__asm { jne L_00be654b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130faac], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xee4e00 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x130f980 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08560 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00be654b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x130f980 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00be65fa }
	__asm { cmp dword ptr [g_012e4870], 0x29a }
	__asm { je L_00be65af }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00be659a }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00be65af }
	__asm { L_00be659a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00be65af: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00be65fa }
	__asm { cmp dword ptr [g_012e4870], 0x29a }
	__asm { je L_00be65fa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00be65e5 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00be65fa }
	__asm { L_00be65e5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00be65fa: }
	__asm { jmp fn_007e6a70 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00bee3d0();
// FUNCTION: ROBLOXSTUDIO 0x00be7d00
extern "C" __declspec(naked) void asm_00be7d00()
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
	__asm { je L_00be7d9f }
	__asm { push 0xbee470 }
	__asm { push 0x130fd20 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00bee3d0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00be7d65 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00be7d65: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00be7d9f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00be7d9f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00be7d9f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00be7d9f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00be7d9f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130fd18[];
extern "C" char g_0130fd1c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00be7db0
extern "C" __declspec(naked) void asm_00be7db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5f2ee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00be812c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00be7de2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xbee460 }
	__asm { push 0x130fd10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0130fd1c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00be7e49 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fd1c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00be7e3d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0130fd18], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00be7e4e }
	__asm { L_00be7e3d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0130fd18], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00be7e4e }
	__asm { L_00be7e49: }
	__asm { mov eax, dword ptr [g_0130fd18] }
	__asm { L_00be7e4e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00be7ed5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00be7e7b }
	__asm { add eax, -5 }
	__asm { jmp L_00be7e7d }
	__asm { L_00be7e7b: }
	__asm { xor eax, eax }
	__asm { L_00be7e7d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00be7ed2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00be7ed2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00be7ec1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00be7ed2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00be7ec1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00be7ed2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00be7ed5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00be7fc5 }
	__asm { L_00be7ee0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00be7fc5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00be7f65 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00be7f08 }
	__asm { add eax, -5 }
	__asm { jmp L_00be7f0a }
	__asm { L_00be7f08: }
	__asm { xor eax, eax }
	__asm { L_00be7f0a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00be7f5f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00be7f5f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00be7f4e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00be7f5f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00be7f4e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00be7f5f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00be7f65: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00be7fba }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00be7f7c }
	__asm { add ebx, -5 }
	__asm { jmp L_00be7f7e }
	__asm { L_00be7f7c: }
	__asm { xor ebx, ebx }
	__asm { L_00be7f7e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00be7fb4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00be7fb4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00be7fba }
	__asm { L_00be7fb4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00be7fba: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00be7ee0 }
	__asm { L_00be7fc5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00be8029 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00be8029 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00be8029 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00be8029 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00be801f }
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
	__asm { je L_00be801d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00be801f }
	__asm { L_00be801d: }
	__asm { mov esi, edx }
	__asm { L_00be801f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00be8029: }
	__asm { test esi, esi }
	__asm { je L_00be8090 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00be8039 }
	__asm { add eax, -5 }
	__asm { jmp L_00be803b }
	__asm { L_00be8039: }
	__asm { xor eax, eax }
	__asm { L_00be803b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00be8090 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00be8090 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00be807f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00be8090 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00be807f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00be8090: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00be80df }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00be80a7 }
	__asm { add edi, -5 }
	__asm { jmp L_00be80a9 }
	__asm { L_00be80a7: }
	__asm { xor edi, edi }
	__asm { L_00be80a9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00be80d9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00be80d9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00be80df }
	__asm { L_00be80d9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00be80df: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00be811e }
	__asm { add esi, 5 }
	__asm { je L_00be80f4 }
	__asm { add esi, -5 }
	__asm { jmp L_00be80f6 }
	__asm { L_00be80f4: }
	__asm { xor esi, esi }
	__asm { L_00be80f6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00be811e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00be811e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00be811e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00be7de2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00be812c: }
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
extern "C" void fn_00bee340();
// FUNCTION: ROBLOXSTUDIO 0x00bea0c0
extern "C" __declspec(naked) void asm_00bea0c0()
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
	__asm { je L_00bea128 }
	__asm { test ebx, ebx }
	__asm { jne L_00bea128 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bea117 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bea128 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bea117: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bea128: }
	__asm { push 0xbee460 }
	__asm { push 0x130fd10 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00bee340 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00bea168 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00bea21d }
	__asm { L_00bea168: }
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
	__asm { je L_00bea1d7 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00bea1d7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bea1c6 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bea1d7 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bea1c6: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bea1d7: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00bea1ef }
	__asm { add esi, -5 }
	__asm { jmp L_00bea1f1 }
	__asm { L_00bea1ef: }
	__asm { xor esi, esi }
	__asm { L_00bea1f1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00bea21d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00bea21d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00bea21d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00bea25a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00bea25a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00bea25a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00bea25a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00bea25a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e3ad6c[];
extern "C" void fn_006deb40();
extern "C" void fn_00933470();
extern "C" void fn_00933a90();
extern "C" void fn_00b92ba0();
extern "C" void fn_00befda0();
extern "C" void fn_00bf2430();
extern "C" void fn_00bf3840();
// FUNCTION: ROBLOXSTUDIO 0x00bf25d0
extern "C" __declspec(naked) void asm_00bf25d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60058 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov dword ptr [ebp - 0x48], 0xffffffff }
	__asm { call fn_006deb40 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x44], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x40], edx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { call fn_006deb40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x38], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x34], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { call fn_006deb40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x28], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { call fn_00b92ba0 }
	__asm { fld dword ptr [g_00e3ad6c] }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [eax + 0x148] }
	__asm { fstp dword ptr [esp] }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [eax + 0xb4] }
	__asm { lea eax, [esi + 0x8c] }
	__asm { push eax }
	__asm { call fn_00933a90 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { je L_00bf26f0 }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { call fn_00bf2430 }
	__asm { test al, al }
	__asm { je L_00bf26f0 }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { je L_00bf26b6 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00befda0 }
	__asm { test al, al }
	__asm { je L_00bf26f0 }
	__asm { L_00bf26b6: }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { call fn_00bf3840 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, 0xb }
	__asm { lea esi, [ebp - 0x4c] }
	__asm { rep movsd }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00933470 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00bf26f0: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0xffffffff }
	__asm { call fn_006deb40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { call fn_006deb40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { call fn_006deb40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x20], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00933470 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e3ad6c[];
extern "C" char g_01038064[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130735e[];
extern "C" void fn_004198d0();
extern "C" void fn_006b9740();
extern "C" void fn_006dea00();
extern "C" void fn_006deac0();
extern "C" void fn_00700b70();
extern "C" void fn_0088fab0();
extern "C" void fn_00891b10();
extern "C" void fn_00892440();
extern "C" void fn_00933470();
extern "C" void fn_00933a90();
extern "C" void fn_00933d80();
extern "C" void fn_009f3910();
extern "C" void fn_00a21680();
extern "C" void fn_00a4f890();
extern "C" void fn_00a5d310();
extern "C" void fn_00b57e60();
extern "C" void fn_00b589f0();
extern "C" void fn_00b5b160();
extern "C" void fn_00b5cbf0();
extern "C" void fn_00b92ba0();
extern "C" void fn_00bf4700();
// FUNCTION: ROBLOXSTUDIO 0x00bf4310
extern "C" __declspec(naked) void asm_00bf4310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5ff1b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x90 }
	__asm { cmp byte ptr [g_0130735e], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [edi + 0x18] }
	__asm { je L_00bf4626 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00a5d310 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 0xcc] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_00bf4394 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bf4394 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00bf4394 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bf4394: }
	__asm { push dword ptr [edi + 0x44] }
	__asm { lea ecx, [ebp - 0x80] }
	__asm { mov dword ptr [edi + 0x84], 0xffffffff }
	__asm { call fn_00b92ba0 }
	__asm { fld dword ptr [g_00e3ad6c] }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { fstp dword ptr [esp] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x80] }
	__asm { push ecx }
	__asm { push dword ptr [edi + 0x48] }
	__asm { mov dword ptr [ebp - 0x48], 0 }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { mov eax, dword ptr [eax + 0x148] }
	__asm { lea esi, [edi + 0x48] }
	__asm { push dword ptr [eax + 0xb4] }
	__asm { lea ebx, [edi + 0xa0] }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00933a90 }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { jne L_00bf4604 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { call fn_00b5cbf0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0088fab0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00891b10 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { call fn_00892440 }
	__asm { mov ecx, dword ptr [eax + 0x24] }
	__asm { mov dword ptr [ebp - 0x30], ecx }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { call fn_006deac0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { call fn_00700b70 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x9c] }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00933d80 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { push esi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_009f3910 }
	__asm { add esp, 0x14 }
	__asm { test al, al }
	__asm { je L_00bf45f8 }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [eax + 0x148] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { push dword ptr [eax + 0xb4] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push ebx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { call fn_00b57e60 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { call fn_00b589f0 }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { subss xmm2, dword ptr [ebp - 0x30] }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { subss xmm1, dword ptr [ebp - 0x2c] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { subss xmm0, dword ptr [ebp - 0x28] }
	__asm { movss dword ptr [ebp - 0x30], xmm2 }
	__asm { movss dword ptr [ebp - 0x2c], xmm1 }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00b589f0 }
	__asm { call fn_006deac0 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mulss xmm0, dword ptr [ebp - 0x24] }
	__asm { mulss xmm1, dword ptr [ebp - 0x20] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, dword ptr [ebp - 0x1c] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [ebp + 8], xmm1 }
	__asm { call fn_006deac0 }
	__asm { fldz }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { fstp dword ptr [esp + 0x28] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm3, dword ptr [eax + 8] }
	__asm { movss xmm4, dword ptr [ebp - 0x24] }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mulss xmm0, xmm1 }
	__asm { mulss xmm3, xmm1 }
	__asm { mulss xmm2, xmm1 }
	__asm { movss xmm1, dword ptr [ebp - 0x20] }
	__asm { subss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { subss xmm1, xmm2 }
	__asm { subss xmm0, xmm3 }
	__asm { add esp, 0x28 }
	__asm { movss dword ptr [ebp - 0x24], xmm4 }
	__asm { movss dword ptr [ebp - 0x20], xmm1 }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { mov eax, dword ptr [eax + 0x148] }
	__asm { push dword ptr [eax + 0xb4] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { call fn_00a21680 }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_004198d0 }
	__asm { L_00bf45f8: }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b5b160 }
	__asm { L_00bf4604: }
	__asm { lea ecx, [ebp - 0x80] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00933470 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bf4626: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00a5d310 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 6 }
	__asm { call dword ptr [eax + 0xcc] }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_00bf4677 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bf4677 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00bf4677 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bf4677: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 0x84], 0xffffffff }
	__asm { call fn_00bf4700 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bf46ec }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { fld dword ptr [g_01038064] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [eax + 0x148] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [edi + 0x48] }
	__asm { mov ecx, dword ptr [eax + 0xb4] }
	__asm { call fn_00a4f890 }
	__asm { test al, al }
	__asm { je L_00bf46ec }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bf46d7 }
	__asm { push 0x292 }
	__asm { push 0xee759c }
	__asm { push 0xee7354 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bf46ec }
	__asm { L_00bf46d7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee7cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bf46ec: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" char g_01038064[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006d19a0();
extern "C" void fn_006dea00();
extern "C" void fn_006deac0();
extern "C" void fn_00700b70();
extern "C" void fn_0088fab0();
extern "C" void fn_00891b10();
extern "C" void fn_00892440();
extern "C" void fn_00933d80();
extern "C" void fn_0099c980();
extern "C" void fn_009f3910();
extern "C" void fn_00a21530();
extern "C" void fn_00a21680();
extern "C" void fn_00a4f890();
extern "C" void fn_00a5d310();
extern "C" void fn_00b57e60();
extern "C" void fn_00b589f0();
extern "C" void fn_00b5b160();
extern "C" void fn_00b5cbf0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bf4700
extern "C" __declspec(naked) void asm_00bf4700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5ff63 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { fld dword ptr [g_01038064] }
	__asm { sub esp, 0x90 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push ecx }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { lea ebx, [edi + 0x48] }
	__asm { fstp dword ptr [esp] }
	__asm { mov eax, dword ptr [eax + 0x148] }
	__asm { push dword ptr [ebx] }
	__asm { mov ecx, dword ptr [eax + 0xb4] }
	__asm { call fn_00a4f890 }
	__asm { test al, al }
	__asm { je L_00bf48f5 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00891b10 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov esi, eax }
	__asm { call fn_00b5cbf0 }
	__asm { mov eax, dword ptr [esi + 0xe0] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0088fab0 }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov eax, dword ptr [eax + 0x148] }
	__asm { push dword ptr [eax + 0xb4] }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00a21530 }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bf4847 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { xorps xmm1, xmm1 }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00bf47fa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bf47e2 }
	__asm { push 0x2ec }
	__asm { push 0xee759c }
	__asm { push 0xee741c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bf47f7 }
	__asm { L_00bf47e2: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee7d10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bf47f7: }
	__asm { xorps xmm1, xmm1 }
	__asm { L_00bf47fa: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bf4847 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00bf4847 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bf4832 }
	__asm { push 0x2ed }
	__asm { push 0xee759c }
	__asm { push 0xee748c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bf4847 }
	__asm { L_00bf4832: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee7d70 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bf4847: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { call fn_0099c980 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x9c] }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x78], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { movss xmm0, dword ptr [ebp - 0x78] }
	__asm { addss xmm0, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x74], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 0x70], eax }
	__asm { lea eax, [ebp - 0x44] }
	__asm { movss dword ptr [ebp - 0x78], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x74] }
	__asm { addss xmm0, dword ptr [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x18] }
	__asm { movss dword ptr [ebp - 0x74], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { addss xmm0, dword ptr [ebp - 0x70] }
	__asm { movss dword ptr [ebp - 0x70], xmm0 }
	__asm { call fn_00a5d310 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea edx, [ebp - 0x9c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax + 0xcc] }
	__asm { mov esi, dword ptr [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00bf48ed }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bf48ed }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00bf48ed }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bf48ed: }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { jmp L_00bf4b54 }
	__asm { L_00bf48f5: }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { call fn_00b5cbf0 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_0088fab0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00891b10 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { call fn_00892440 }
	__asm { mov ecx, dword ptr [eax + 0x24] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { call fn_006deac0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_00700b70 }
	__asm { mov esi, eax }
	__asm { lea ebx, [edi + 0xa0] }
	__asm { lea eax, [ebp - 0x88] }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00933d80 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push ecx }
	__asm { push esi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_009f3910 }
	__asm { add esp, 0x14 }
	__asm { test al, al }
	__asm { je L_00bf4b51 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [eax + 0x148] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { push dword ptr [eax + 0xb4] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push ebx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_00b57e60 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 0x34], xmm0 }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_00b589f0 }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x3c], xmm2 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { subss xmm2, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [ebp - 0x38], xmm1 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { subss xmm1, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [ebp - 0x34], xmm0 }
	__asm { subss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_00b589f0 }
	__asm { call fn_006deac0 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0x30] }
	__asm { mulss xmm0, dword ptr [eax] }
	__asm { mulss xmm1, dword ptr [ebp - 0x2c] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, dword ptr [ebp - 0x28] }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0x40], xmm1 }
	__asm { call fn_006deac0 }
	__asm { fldz }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { fstp dword ptr [esp + 0x28] }
	__asm { movss xmm1, dword ptr [ebp - 0x40] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm3, dword ptr [eax + 8] }
	__asm { movss xmm4, dword ptr [ebp - 0x30] }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mulss xmm0, xmm1 }
	__asm { mulss xmm3, xmm1 }
	__asm { mulss xmm2, xmm1 }
	__asm { movss xmm1, dword ptr [ebp - 0x2c] }
	__asm { subss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x28] }
	__asm { subss xmm1, xmm2 }
	__asm { subss xmm0, xmm3 }
	__asm { add esp, 0x28 }
	__asm { movss dword ptr [ebp - 0x30], xmm4 }
	__asm { movss dword ptr [ebp - 0x2c], xmm1 }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { mov eax, dword ptr [eax + 0x148] }
	__asm { push dword ptr [eax + 0xb4] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00a21680 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { je L_00bf4b51 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ebx, dword ptr [ebp - 0x20] }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { cmp eax, ebx }
	__asm { je L_00bf4b33 }
	__asm { lea esi, [eax + 4] }
	__asm { or edi, 0xffffffff }
	__asm { mov edi, edi }
	__asm { L_00bf4b10: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00bf4b26 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00bf4b26 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00bf4b26: }
	__asm { add esi, 8 }
	__asm { lea eax, [esi - 4] }
	__asm { cmp eax, ebx }
	__asm { jne L_00bf4b10 }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { L_00bf4b33: }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { L_00bf4b51: }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { L_00bf4b54: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b5b160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006deb40();
extern "C" void fn_00bf3ae0();
extern "C" void fn_00bf3c50();
extern "C" void fn_00bf6430();
// FUNCTION: ROBLOXSTUDIO 0x00bf4b80
extern "C" __declspec(naked) void asm_00bf4b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_006deb40 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_006deb40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bf6430 }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x10] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x1c] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { test edx, edx }
	__asm { je L_00bf4c2f }
	__asm { L_00bf4c18: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, 9 }
	__asm { lea esi, [ebp - 0x24] }
	__asm { mov edi, eax }
	__asm { rep movsd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00bf4c2f: }
	__asm { push 0xb49ed0 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bf3c50 }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x10] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x1c] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { test edx, edx }
	__asm { jne L_00bf4c18 }
	__asm { push 0xbefd8c }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bf3c50 }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x10] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x1c] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { test edx, edx }
	__asm { jne L_00bf4c18 }
	__asm { push edx }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bf6430 }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x10] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x1c] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { test edx, edx }
	__asm { jne L_00bf4c18 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00bf3ae0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e3ad6c[];
extern "C" void fn_00626760();
extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_0099c980();
extern "C" void fn_0099ce30();
extern "C" void fn_00b64b90();
// FUNCTION: ROBLOXSTUDIO 0x00bf4d70
extern "C" __declspec(naked) void asm_00bf4d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5ff78 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x90 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x7c] }
	__asm { test ecx, ecx }
	__asm { jne L_00bf4db6 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_006da0e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bf4db6: }
	__asm { call fn_0099ce30 }
	__asm { cmp eax, 0xa }
	__asm { je L_00bf4e03 }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { push dword ptr [edi + 0x84] }
	__asm { mov ecx, dword ptr [eax + 0x100] }
	__asm { lea edx, [ebp - 0x9c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x28] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 0x7c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0099c980 }
	__asm { mov ecx, eax }
	__asm { call fn_00626760 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bf4e03: }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_006da0e0 }
	__asm { mov eax, dword ptr [edi + 0xa4] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [edi + 0xa8] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [edi + 0xac] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [edi + 0xb0] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [edi + 0xb4] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0xb8] }
	__asm { mov dword ptr [ebp - 0x3c], 0xe461dc }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { fld dword ptr [g_00e3ad6c] }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x130edb0 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { fstp dword ptr [esp] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x100] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b64b90 }
	__asm { test al, al }
	__asm { je L_00bf4ecd }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [edi + 0x84], eax }
	__asm { movss dword ptr [edi + 0x88], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [edi + 0x8c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [edi + 0x90], xmm0 }
	__asm { L_00bf4ecd: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [ebp - 0x48] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x44] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_010380b8[];
extern "C" char g_010385f0[];
extern "C" char g_0130fe44[];
extern "C" void fn_00407e90();
extern "C" void fn_0058a0a0();
extern "C" void fn_00594f40();
extern "C" void fn_00595370();
// FUNCTION: ROBLOXSTUDIO 0x00c03f40
extern "C" __declspec(naked) void asm_00c03f40()
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
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd60c3b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { sub esp, 0x4c }
	__asm { cmp byte ptr [g_0130fe44], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jne L_00c03fac }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 0x20], 0x130f348 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 0x20], 0xc046f0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130fe44], 1 }
	__asm { L_00c03fac: }
	__asm { push 0x10 }
	__asm { push 0xa0 }
	__asm { call fn_0058a0a0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c03fda }
	__asm { push 0x10 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call fn_00594f40 }
	__asm { mov ecx, eax }
	__asm { jmp L_00c03fdc }
	__asm { L_00c03fda: }
	__asm { xor ecx, ecx }
	__asm { L_00c03fdc: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], ecx }
	__asm { movss dword ptr [ebp - 0x14], xmm3 }
	__asm { movss dword ptr [ebp - 0x20], xmm1 }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { movss dword ptr [ebp - 0x40], xmm3 }
	__asm { movss dword ptr [ebp - 0x3c], xmm1 }
	__asm { movss dword ptr [ebp - 0x38], xmm2 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { call fn_00595370 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { movss dword ptr [ebp - 0x40], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { xorps xmm0, xmmword ptr [g_010385f0] }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { call fn_00595370 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { movss dword ptr [ebp - 0x40], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { xorps xmm0, xmmword ptr [g_010385f0] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x24], xmm0 }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { call fn_00595370 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { xorps xmm0, xmmword ptr [g_010385f0] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss dword ptr [ebp - 0x40], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { call fn_00595370 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { movss dword ptr [ebp - 0x40], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { call fn_00595370 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [ebp - 0x50], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [ebp - 0x4c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x24] }
	__asm { movss dword ptr [ebp - 0x48], xmm0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" char g_010380b8[];
extern "C" char g_0130fe42[];
extern "C" void fn_00407e90();
extern "C" void fn_0058a0a0();
extern "C" void fn_0059ee90();
// FUNCTION: ROBLOXSTUDIO 0x00c041d0
extern "C" __declspec(naked) void asm_00c041d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60bfb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_0130fe42], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { jne L_00c04227 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 0x10], 0x130f210 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 0x10], 0xc047b0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130fe42], 1 }
	__asm { L_00c04227: }
	__asm { push 0x10 }
	__asm { push 0x40 }
	__asm { call fn_0058a0a0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c04290 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { mulss xmm0, dword ptr [g_010380b8] }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { call fn_0059ee90 }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xee87cc }
	__asm { mov dword ptr [esi + 4], 8 }
	__asm { movss dword ptr [esi + 0x20], xmm0 }
	__asm { movss dword ptr [esi + 0x30], xmm0 }
	__asm { mov dword ptr [edi], esi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c04290: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380b8[];
extern "C" char g_010385f0[];
extern "C" char g_0130fe43[];
extern "C" void fn_00407e90();
extern "C" void fn_0058a0a0();
extern "C" void fn_00594f40();
extern "C" void fn_00595370();
// FUNCTION: ROBLOXSTUDIO 0x00c04370
extern "C" __declspec(naked) void asm_00c04370()
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
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd60c3b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { sub esp, 0x4c }
	__asm { cmp byte ptr [g_0130fe43], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jne L_00c043dc }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 0x20], 0x130f260 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 0x20], 0xc04870 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130fe43], 1 }
	__asm { L_00c043dc: }
	__asm { push 0x10 }
	__asm { push 0xa0 }
	__asm { call fn_0058a0a0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c0440a }
	__asm { push 0x10 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call fn_00594f40 }
	__asm { mov ecx, eax }
	__asm { jmp L_00c0440c }
	__asm { L_00c0440a: }
	__asm { xor ecx, ecx }
	__asm { L_00c0440c: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], ecx }
	__asm { movss dword ptr [ebp - 0x14], xmm3 }
	__asm { movss dword ptr [ebp - 0x20], xmm1 }
	__asm { movss dword ptr [ebp - 0x18], xmm2 }
	__asm { movss dword ptr [ebp - 0x40], xmm3 }
	__asm { movss dword ptr [ebp - 0x3c], xmm1 }
	__asm { movss dword ptr [ebp - 0x38], xmm2 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { call fn_00595370 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { movss dword ptr [ebp - 0x40], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { xorps xmm0, xmmword ptr [g_010385f0] }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { call fn_00595370 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { movss dword ptr [ebp - 0x40], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { xorps xmm0, xmmword ptr [g_010385f0] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x24], xmm0 }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { call fn_00595370 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { xorps xmm0, xmmword ptr [g_010385f0] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss dword ptr [ebp - 0x40], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { call fn_00595370 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { movss dword ptr [ebp - 0x40], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { call fn_00595370 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [ebp - 0x50], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [ebp - 0x4c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x24] }
	__asm { movss dword ptr [ebp - 0x48], xmm0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { call fn_00595370 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { mov esp, ebx }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" char g_00e39be4[];
extern "C" char g_00e3b3dc[];
extern "C" char g_01038064[];
extern "C" char g_010380ac[];
extern "C" char g_010380e4[];
extern "C" char g_012e3580[];
extern "C" void fn_00a5d310();
extern "C" void fn_00c79ab0();
// FUNCTION: ROBLOXSTUDIO 0x00c07bd0
extern "C" __declspec(naked) void asm_00c07bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d6e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012e3580] }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { dec eax }
	__asm { je L_00c07d0f }
	__asm { dec eax }
	__asm { je L_00c07cfa }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x84] }
	__asm { call fn_00a5d310 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00c79ab0 }
	__asm { add esp, 8 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c07c54 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00c07c54 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00c07c54 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c07c54: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc8] }
	__asm { dec eax }
	__asm { je L_00c07c8b }
	__asm { dec eax }
	__asm { je L_00c07c6e }
	__asm { mov dword ptr [ebp - 0x10], 0x3f800000 }
	__asm { jmp L_00c07cb5 }
	__asm { L_00c07c6e: }
	__asm { mov eax, dword ptr [ebx + 0x90] }
	__asm { cdq }
	__asm { mov ecx, 3 }
	__asm { idiv ecx }
	__asm { cmp edx, 1 }
	__asm { jne L_00c07ca8 }
	__asm { movss xmm0, dword ptr [g_010380ac] }
	__asm { jmp L_00c07cb0 }
	__asm { L_00c07c8b: }
	__asm { mov eax, dword ptr [ebx + 0x90] }
	__asm { cdq }
	__asm { mov ecx, 3 }
	__asm { idiv ecx }
	__asm { cmp edx, 1 }
	__asm { jne L_00c07ca8 }
	__asm { movss xmm0, dword ptr [g_00e3b3dc] }
	__asm { jmp L_00c07cb0 }
	__asm { L_00c07ca8: }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { L_00c07cb0: }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { L_00c07cb5: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c07ce6 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00c07ce6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00c07ce6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c07ce6: }
	__asm { fld dword ptr [ebp - 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c07cfa: }
	__asm { fld dword ptr [g_01038064] }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c07d0f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { fld dword ptr [g_00e39be4] }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380b8[];
extern "C" char g_010380e4[];
extern "C" char g_011edc10[];
extern "C" void fn_006f64a0();
extern "C" void fn_007c2fc0();
extern "C" void fn_00891b30();
extern "C" void fn_00892440();
extern "C" void fn_00892d80();
extern "C" void fn_008979b0();
extern "C" void fn_00a5d310();
extern "C" void fn_00c07810();
extern "C" void fn_00c0a5c0();
extern "C" void fn_00c79ab0();
// FUNCTION: ROBLOXSTUDIO 0x00c07d30
extern "C" __declspec(naked) void asm_00c07d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd208f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { call fn_00c07810 }
	__asm { mov eax, dword ptr [ebx + 0x88] }
	__asm { test eax, eax }
	__asm { je L_00c07f70 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { test eax, eax }
	__asm { je L_00c07f70 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { movss xmm0, dword ptr [eax + 0x6c] }
	__asm { movss xmm1, dword ptr [eax + 0x70] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { movss dword ptr [ebp - 0x1c], xmm1 }
	__asm { call fn_006f64a0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx + 0xa0], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x84] }
	__asm { mov dword ptr [ebx + 0xa4], 0 }
	__asm { mov dword ptr [ebx + 0xa8], 0 }
	__asm { mov byte ptr [ebx + 0x8c], 1 }
	__asm { call fn_00a5d310 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00c79ab0 }
	__asm { add esp, 8 }
	__asm { mov edi, dword ptr [ebp - 0x24] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00c07e10 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00c07e10 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00c07e10 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c07e10: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push 1 }
	__asm { call fn_008979b0 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_00892440 }
	__asm { mov esi, eax }
	__asm { mov ecx, 9 }
	__asm { lea edi, [ebx + 0xb0] }
	__asm { rep movsd }
	__asm { fld dword ptr [eax + 0x24] }
	__asm { fstp dword ptr [ebx + 0xd4] }
	__asm { fld dword ptr [eax + 0x28] }
	__asm { fstp dword ptr [ebx + 0xd8] }
	__asm { fld dword ptr [eax + 0x2c] }
	__asm { fstp dword ptr [ebx + 0xdc] }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00892d80 }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ebx + 0xe0] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ebx + 0xe4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ebx + 0xe8] }
	__asm { cmp byte ptr [g_011edc10], 0 }
	__asm { jne L_00c07ec2 }
	__asm { mov ecx, edi }
	__asm { call fn_00891b30 }
	__asm { mov ecx, edi }
	__asm { lea esi, [eax + 0x44] }
	__asm { call fn_00891b30 }
	__asm { fld dword ptr [g_010380b8] }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm0, dword ptr [eax + 0x3c] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { fstp dword ptr [esp] }
	__asm { mulss xmm0, dword ptr [esi] }
	__asm { subss xmm1, xmm0 }
	__asm { movss dword ptr [ebx + 0x104], xmm1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { call dword ptr [eax + 0xf8] }
	__asm { L_00c07ec2: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00c0a5c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov esi, dword ptr [ebp - 0x2c] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test esi, esi }
	__asm { je L_00c07f2d }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00c07f2d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00c07f2d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c07f2d: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c07f5b }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00c07f5b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00c07f5b }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00c07f5b: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c07f70: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_007c2fc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e3da0c[];
extern "C" void fn_00619340();
extern "C" void fn_00bb8b60();
extern "C" void fn_00bb8cd0();
extern "C" void fn_00bb8fb0();
extern "C" void fn_00bb90d0();
extern "C" void fn_00bb97c0();
// FUNCTION: ROBLOXSTUDIO 0x00c13b30
extern "C" __declspec(naked) void asm_00c13b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00bb97c0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bb8fb0 }
	__asm { xorps xmm0, xmm0 }
	__asm { test eax, eax }
	__asm { je L_00c13b5b }
	__asm { mov ecx, esi }
	__asm { call fn_00bb8b60 }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { L_00c13b5b: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [esi + 0x100], xmm0 }
	__asm { call fn_00bb8cd0 }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esi + 0xd0] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0xd4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0xd8] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [esi + 0xdc] }
	__asm { fld dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [esi + 0xe0] }
	__asm { fld dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [esi + 0xe4] }
	__asm { call fn_00bb90d0 }
	__asm { lea ecx, [eax + 0x128] }
	__asm { lea edx, [ebp - 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { fld dword ptr [eax] }
	__asm { sub esp, 0x10 }
	__asm { fstp dword ptr [esi + 0xe8] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esi + 0xec] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0xf0] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [esi + 0xf4] }
	__asm { fld dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [esi + 0xf8] }
	__asm { fld dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [esi + 0xfc] }
	__asm { movss xmm1, dword ptr [esi + 0xec] }
	__asm { movss xmm2, dword ptr [esi + 0xe8] }
	__asm { fldz }
	__asm { movss xmm0, dword ptr [esi + 0xf0] }
	__asm { fstp qword ptr [esp + 8] }
	__asm { mulss xmm2, xmm2 }
	__asm { mulss xmm1, xmm1 }
	__asm { mulss xmm0, xmm0 }
	__asm { addss xmm2, xmm1 }
	__asm { addss xmm2, xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm2 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00619340 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { jne L_00c13c95 }
	__asm { cmp byte ptr [esi + 0x30], al }
	__asm { je L_00c13c95 }
	__asm { movss xmm1, dword ptr [esi + 0xec] }
	__asm { movss xmm2, dword ptr [esi + 0xe8] }
	__asm { movss xmm0, dword ptr [esi + 0xf0] }
	__asm { mulss xmm2, xmm2 }
	__asm { mulss xmm1, xmm1 }
	__asm { mulss xmm0, xmm0 }
	__asm { addss xmm2, xmm1 }
	__asm { mov dword ptr [esi + 0xe8], 0 }
	__asm { mov dword ptr [esi + 0xf0], 0 }
	__asm { addss xmm2, xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm2 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fsqrt }
	__asm { fmul dword ptr [g_00e3da0c] }
	__asm { fstp dword ptr [esi + 0xec] }
	__asm { L_00c13c95: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00eec744[];
extern "C" void fn_00bb6820();
extern "C" void fn_00bb90d0();
extern "C" void fn_00c13ca0();
// FUNCTION: ROBLOXSTUDIO 0x00c14b40
extern "C" __declspec(naked) void asm_00c14b40()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_00bb90d0 }
	__asm { mov edi, eax }
	__asm { cmp byte ptr [edi + 0x20c], 0 }
	__asm { jne L_00c14be0 }
	__asm { movss xmm1, dword ptr [esi + 0x98] }
	__asm { movss xmm2, dword ptr [esi + 0x94] }
	__asm { cvtsi2ss xmm3, dword ptr [edi + 0x220] }
	__asm { movss xmm0, dword ptr [esi + 0x9c] }
	__asm { mulss xmm3, dword ptr [g_00eec744] }
	__asm { mulss xmm2, xmm2 }
	__asm { mulss xmm1, xmm1 }
	__asm { mulss xmm0, xmm0 }
	__asm { addss xmm2, xmm1 }
	__asm { mulss xmm3, xmm3 }
	__asm { addss xmm2, xmm0 }
	__asm { comiss xmm2, xmm3 }
	__asm { ja L_00c14bce }
	__asm { movss xmm1, dword ptr [esi + 0x8c] }
	__asm { movss xmm2, dword ptr [esi + 0x88] }
	__asm { movss xmm0, dword ptr [esi + 0x90] }
	__asm { mulss xmm2, xmm2 }
	__asm { mulss xmm1, xmm1 }
	__asm { mulss xmm0, xmm0 }
	__asm { addss xmm2, xmm1 }
	__asm { addss xmm2, xmm0 }
	__asm { comiss xmm2, xmm3 }
	__asm { jbe L_00c14be3 }
	__asm { L_00c14bce: }
	__asm { mov ecx, esi }
	__asm { call fn_00bb6820 }
	__asm { test al, al }
	__asm { je L_00c14be3 }
	__asm { mov byte ptr [edi + 0x20c], 1 }
	__asm { L_00c14be0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00c14be3: }
	__asm { pop edi }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_00c13ca0 }
}

extern "C" void fn_006dea00();
extern "C" void fn_0099e320();
extern "C" void fn_009d86b0();
extern "C" void fn_009d8ed0();
extern "C" void fn_00c1d5d0();
// FUNCTION: ROBLOXSTUDIO 0x00c15440
extern "C" __declspec(naked) void asm_00c15440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61578 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00c1d5d0 }
	__asm { mov dword ptr [esi], 0xeec9fc }
	__asm { mov dword ptr [esi + 4], 0xeeca38 }
	__asm { mov byte ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { mov dword ptr [esi + 0xdc], 0 }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0xe0], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0xe4], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0xe8], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0xec], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0xf0], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0xf4], eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0xf8], 0 }
	__asm { mov dword ptr [esi + 0xfc], 0 }
	__asm { call fn_009d86b0 }
	__asm { fldz }
	__asm { test eax, eax }
	__asm { je L_00c15527 }
	__asm { mov edx, dword ptr [eax + 0xe0] }
	__asm { push ecx }
	__asm { fld dword ptr [edx + 0x118] }
	__asm { fstp dword ptr [esi + 0xfc] }
	__asm { mov ecx, dword ptr [eax + 0xe0] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_0099e320 }
	__asm { jmp L_00c15529 }
	__asm { L_00c15527: }
	__asm { fstp st(0) }
	__asm { L_00c15529: }
	__asm { mov ecx, edi }
	__asm { call fn_009d8ed0 }
	__asm { test eax, eax }
	__asm { je L_00c15557 }
	__asm { mov ecx, dword ptr [eax + 0xe0] }
	__asm { push ecx }
	__asm { fld dword ptr [ecx + 0x118] }
	__asm { fstp dword ptr [esi + 0xf8] }
	__asm { mov ecx, dword ptr [eax + 0xe0] }
	__asm { fldz }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_0099e320 }
	__asm { L_00c15557: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xb8], 0x459c4000 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099e320();
extern "C" void fn_009d86b0();
extern "C" void fn_009d8ed0();
extern "C" void fn_00bb5f40();
extern "C" void fn_00bb90d0();
// FUNCTION: ROBLOXSTUDIO 0x00c15580
extern "C" __declspec(naked) void asm_00c15580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61578 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xeec9fc }
	__asm { mov dword ptr [esi + 4], 0xeeca38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bb90d0 }
	__asm { mov ecx, eax }
	__asm { call fn_009d86b0 }
	__asm { xorps xmm1, xmm1 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_00c15641 }
	__asm { movss xmm0, dword ptr [esi + 0xfc] }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_00c15641 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c1562c }
	__asm { mov eax, dword ptr [edi + 0xe0] }
	__asm { movss xmm0, dword ptr [eax + 0x118] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00c1562c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c1561b }
	__asm { push 0x31 }
	__asm { push 0xeeca40 }
	__asm { push 0xeeca80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1562c }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c1561b: }
	__asm { movzx eax, cl }
	__asm { push 0xeecab0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1562c: }
	__asm { fld dword ptr [esi + 0xfc] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 0xe0] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_0099e320 }
	__asm { L_00c15641: }
	__asm { mov ecx, esi }
	__asm { call fn_00bb90d0 }
	__asm { mov ecx, eax }
	__asm { call fn_009d8ed0 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_00c156d0 }
	__asm { movss xmm0, dword ptr [esi + 0xf8] }
	__asm { xorps xmm1, xmm1 }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_00c156d0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c156bb }
	__asm { mov eax, dword ptr [edi + 0xe0] }
	__asm { movss xmm0, dword ptr [eax + 0x118] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00c156bb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c156aa }
	__asm { push 0x37 }
	__asm { push 0xeeca40 }
	__asm { push 0xeecb30 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c156bb }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c156aa: }
	__asm { movzx eax, cl }
	__asm { push 0xeecb68 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c156bb: }
	__asm { fld dword ptr [esi + 0xf8] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [edi + 0xe0] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_0099e320 }
	__asm { L_00c156d0: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00bb5f40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ecaea4[];
extern "C" char g_00eec624[];
extern "C" char g_00eec62c[];
extern "C" char g_00eecbec[];
extern "C" char g_010381f0[];
extern "C" char g_010385f0[];
extern "C" char g_012fc200[];
extern "C" char g_0130fedc[];
extern "C" char g_0130fee0[];
extern "C" char g_0130fee4[];
extern "C" char g_0130fee8[];
extern "C" char g_0130feec[];
extern "C" char g_0130fef0[];
extern "C" char g_0130fef4[];
extern "C" char g_0130fef8[];
extern "C" void fn_006d19a0();
extern "C" void fn_00700240();
extern "C" void fn_00898ee0();
extern "C" void fn_009d8b70();
extern "C" void fn_009f62a0();
extern "C" void fn_00a959c0();
extern "C" void fn_00a98230();
extern "C" void fn_00a98290();
extern "C" void fn_00b678d0();
extern "C" void fn_00bb90d0();
extern "C" void fn_00bef550();
extern "C" void fn_00c1d6b0();
// FUNCTION: ROBLOXSTUDIO 0x00c157b0
extern "C" __declspec(naked) void asm_00c157b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { call fn_00c1d6b0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bb90d0 }
	__asm { mov ecx, eax }
	__asm { call fn_009d8b70 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00c15a7b }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { test edi, edi }
	__asm { je L_00c157ed }
	__asm { mov ecx, edi }
	__asm { call fn_00bef550 }
	__asm { add edi, 0x18 }
	__asm { jmp L_00c157f0 }
	__asm { L_00c157ed: }
	__asm { lea edi, [esi + 0x6c] }
	__asm { L_00c157f0: }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_006d19a0 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_009f62a0 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { call fn_00898ee0 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss xmm1, dword ptr [eax + 0xf0] }
	__asm { subss xmm1, dword ptr [esi + 0xe4] }
	__asm { mulss xmm0, dword ptr [g_00ecaea4] }
	__asm { mov ecx, esi }
	__asm { mulss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { call fn_00a98230 }
	__asm { movss xmm1, dword ptr [ebp - 4] }
	__asm { subss xmm1, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { test edi, edi }
	__asm { je L_00c15862 }
	__asm { mov ecx, edi }
	__asm { call fn_00bef550 }
	__asm { add edi, 0x18 }
	__asm { jmp L_00c15865 }
	__asm { L_00c15862: }
	__asm { lea edi, [esi + 0x6c] }
	__asm { L_00c15865: }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_006d19a0 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_009f62a0 }
	__asm { movss xmm1, dword ptr [ebp - 0x14] }
	__asm { mulss xmm1, dword ptr [g_00eecbec] }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { movaps xmm2, xmm1 }
	__asm { xorps xmm2, xmmword ptr [g_010385f0] }
	__asm { comiss xmm2, xmm0 }
	__asm { jb L_00c158a6 }
	__asm { movss dword ptr [ebp - 4], xmm2 }
	__asm { jmp L_00c158b0 }
	__asm { L_00c158a6: }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_00c158b0 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { L_00c158b0: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov edi, dword ptr [eax + 0x30] }
	__asm { test edi, edi }
	__asm { je L_00c158e0 }
	__asm { cmp byte ptr [edi + 8], 0 }
	__asm { je L_00c158c7 }
	__asm { mov ecx, edi }
	__asm { call fn_00b678d0 }
	__asm { L_00c158c7: }
	__asm { movss xmm0, dword ptr [edi + 0xc4] }
	__asm { movss xmm1, dword ptr [ebp - 4] }
	__asm { addss xmm0, xmm1 }
	__asm { movss dword ptr [edi + 0xc4], xmm0 }
	__asm { L_00c158e0: }
	__asm { mov ecx, esi }
	__asm { call fn_00a98290 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { movss xmm1, dword ptr [g_010381f0] }
	__asm { movss xmm3, dword ptr [ecx + 0xe0] }
	__asm { movss xmm4, dword ptr [ecx + 0xe8] }
	__asm { subss xmm3, dword ptr [eax] }
	__asm { subss xmm4, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [g_0130fee8] }
	__asm { mulss xmm3, dword ptr [g_00eec62c] }
	__asm { mulss xmm4, dword ptr [g_00eec62c] }
	__asm { movss dword ptr [ebp - 8], xmm3 }
	__asm { movss dword ptr [ebp - 0xc], xmm4 }
	__asm { test al, 1 }
	__asm { jne L_00c15957 }
	__asm { or eax, 1 }
	__asm { movaps xmm2, xmm1 }
	__asm { mov dword ptr [g_0130fee8], eax }
	__asm { movss dword ptr [g_0130fedc], xmm2 }
	__asm { mov dword ptr [g_0130fee0], 0x461c4000 }
	__asm { mov dword ptr [g_0130fee4], 0x447a0000 }
	__asm { jmp L_00c1595f }
	__asm { L_00c15957: }
	__asm { movss xmm2, dword ptr [g_0130fedc] }
	__asm { L_00c1595f: }
	__asm { mov ecx, dword ptr [g_0130fef8] }
	__asm { movss dword ptr [ebp - 4], xmm2 }
	__asm { test cl, 1 }
	__asm { jne L_00c15996 }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_0130fef8], ecx }
	__asm { mov dword ptr [g_0130feec], 0xc47a0000 }
	__asm { mov dword ptr [g_0130fef0], 0 }
	__asm { mov dword ptr [g_0130fef4], 0xc47a0000 }
	__asm { L_00c15996: }
	__asm { movss dword ptr [ebp - 0x18], xmm3 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { movss dword ptr [ebp - 0x10], xmm4 }
	__asm { test al, 1 }
	__asm { jne L_00c159d7 }
	__asm { movaps xmm2, xmm1 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fee8], eax }
	__asm { movss dword ptr [ebp - 4], xmm2 }
	__asm { movss dword ptr [g_0130fedc], xmm2 }
	__asm { mov dword ptr [g_0130fee0], 0x461c4000 }
	__asm { mov dword ptr [g_0130fee4], 0x447a0000 }
	__asm { L_00c159d7: }
	__asm { cmp byte ptr [g_012fc200], 0 }
	__asm { je L_00c159ed }
	__asm { movss xmm2, dword ptr [g_00eec624] }
	__asm { movss dword ptr [ebp - 4], xmm2 }
	__asm { L_00c159ed: }
	__asm { movaps xmm1, xmm3 }
	__asm { movaps xmm0, xmm4 }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, xmm2 }
	__asm { comiss xmm1, xmm0 }
	__asm { jbe L_00c15a34 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_00700240 }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mulss xmm1, dword ptr [ebp - 4] }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { mulss xmm1, dword ptr [ebp - 4] }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { L_00c15a34: }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { test edi, edi }
	__asm { je L_00c15a49 }
	__asm { mov ecx, edi }
	__asm { call fn_00bef550 }
	__asm { movss xmm1, dword ptr [edi + 0x14] }
	__asm { jmp L_00c15a51 }
	__asm { L_00c15a49: }
	__asm { movss xmm1, dword ptr [esi + 0x90] }
	__asm { L_00c15a51: }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm0, dword ptr [ebp - 8] }
	__asm { mulss xmm1, dword ptr [ebp - 0xc] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_00a959c0 }
	__asm { pop edi }
	__asm { L_00c15a7b: }
	__asm { pop esi }
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

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00ef6660[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01310778[];
extern "C" char g_01310780[];
extern "C" char g_01310a84[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_00c23ad0();
extern "C" void fn_00c23c10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00c2ccd0
extern "C" __declspec(naked) void asm_00c2ccd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62c8e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_01310a84] }
	__asm { test al, 1 }
	__asm { jne L_00c2cd3c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01310a84], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { push dword ptr [g_00ef6660] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x1310958 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08f70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00c2cd3c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1310958 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c2cdea }
	__asm { cmp dword ptr [g_01310778], 0x29a }
	__asm { je L_00c2cd9f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c2cd8a }
	__asm { push 0x117 }
	__asm { push 0xf1492c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2cd9f }
	__asm { L_00c2cd8a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf145f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2cd9f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c2cdea }
	__asm { cmp dword ptr [g_01310778], 0x29a }
	__asm { je L_00c2cdea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c2cdd5 }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2cdea }
	__asm { L_00c2cdd5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2cdea: }
	__asm { jmp fn_00c23ad0 }
	__asm { int 3 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c2ce8a }
	__asm { cmp dword ptr [g_01310780], 0x29a }
	__asm { je L_00c2ce3f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c2ce2a }
	__asm { push 0x117 }
	__asm { push 0xf1492c }
	__asm { push 0xf14658 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2ce3f }
	__asm { L_00c2ce2a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf145f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2ce3f: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c2ce8a }
	__asm { cmp dword ptr [g_01310780], 0x29a }
	__asm { je L_00c2ce8a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c2ce75 }
	__asm { push 0xe9 }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2ce8a }
	__asm { L_00c2ce75: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf14590 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2ce8a: }
	__asm { jmp fn_00c23c10 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00c35f40();
// FUNCTION: ROBLOXSTUDIO 0x00c2ddc0
extern "C" __declspec(naked) void asm_00c2ddc0()
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
	__asm { je L_00c2de5f }
	__asm { push 0xc36280 }
	__asm { push 0x1310d40 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c35f40 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c2de25 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00c2de25: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00c2de5f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c2de5f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c2de5f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c2de5f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c2de5f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00c35fd0();
// FUNCTION: ROBLOXSTUDIO 0x00c2de70
extern "C" __declspec(naked) void asm_00c2de70()
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
	__asm { je L_00c2df0f }
	__asm { push 0xc36290 }
	__asm { push 0x1310d48 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c35fd0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c2ded5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00c2ded5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00c2df0f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c2df0f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c2df0f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c2df0f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c2df0f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00c36060();
// FUNCTION: ROBLOXSTUDIO 0x00c2df20
extern "C" __declspec(naked) void asm_00c2df20()
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
	__asm { je L_00c2dfbf }
	__asm { push 0xc362a0 }
	__asm { push 0x1310914 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c36060 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c2df85 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00c2df85: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00c2dfbf }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c2dfbf }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c2dfbf }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c2dfbf }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c2dfbf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00c360f0();
// FUNCTION: ROBLOXSTUDIO 0x00c2dfd0
extern "C" __declspec(naked) void asm_00c2dfd0()
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
	__asm { je L_00c2e06f }
	__asm { push 0xc362b0 }
	__asm { push 0x131091c }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c360f0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c2e035 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00c2e035: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00c2e06f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c2e06f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c2e06f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c2e06f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c2e06f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_013107ec[];
extern "C" char g_013107f0[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c2efe0
extern "C" __declspec(naked) void asm_00c2efe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd62e4e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00c2f35c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00c2f012: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xc36260 }
	__asm { push 0x13107bc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_013107f0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00c2f079 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_013107f0], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c2f06d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_013107ec], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00c2f07e }
	__asm { L_00c2f06d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_013107ec], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_00c2f07e }
	__asm { L_00c2f079: }
	__asm { mov eax, dword ptr [g_013107ec] }
	__asm { L_00c2f07e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00c2f105 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2f0ab }
	__asm { add eax, -5 }
	__asm { jmp L_00c2f0ad }
	__asm { L_00c2f0ab: }
	__asm { xor eax, eax }
	__asm { L_00c2f0ad: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2f102 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00c2f102 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2f0f1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2f102 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2f0f1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2f102: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00c2f105: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00c2f1f5 }
	__asm { L_00c2f110: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00c2f1f5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00c2f195 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2f138 }
	__asm { add eax, -5 }
	__asm { jmp L_00c2f13a }
	__asm { L_00c2f138: }
	__asm { xor eax, eax }
	__asm { L_00c2f13a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2f18f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_00c2f18f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2f17e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2f18f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2f17e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2f18f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2f195: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_00c2f1ea }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_00c2f1ac }
	__asm { add ebx, -5 }
	__asm { jmp L_00c2f1ae }
	__asm { L_00c2f1ac: }
	__asm { xor ebx, ebx }
	__asm { L_00c2f1ae: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2f1e4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2f1e4 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00c2f1ea }
	__asm { L_00c2f1e4: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2f1ea: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00c2f110 }
	__asm { L_00c2f1f5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00c2f259 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c2f259 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c2f259 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c2f259 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_00c2f24f }
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
	__asm { je L_00c2f24d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_00c2f24f }
	__asm { L_00c2f24d: }
	__asm { mov esi, edx }
	__asm { L_00c2f24f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_00c2f259: }
	__asm { test esi, esi }
	__asm { je L_00c2f2c0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_00c2f269 }
	__asm { add eax, -5 }
	__asm { jmp L_00c2f26b }
	__asm { L_00c2f269: }
	__asm { xor eax, eax }
	__asm { L_00c2f26b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c2f2c0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00c2f2c0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c2f2af }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c2f2c0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c2f2af: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c2f2c0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_00c2f30f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00c2f2d7 }
	__asm { add edi, -5 }
	__asm { jmp L_00c2f2d9 }
	__asm { L_00c2f2d7: }
	__asm { xor edi, edi }
	__asm { L_00c2f2d9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2f309 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2f309 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_00c2f30f }
	__asm { L_00c2f309: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00c2f30f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c2f34e }
	__asm { add esi, 5 }
	__asm { je L_00c2f324 }
	__asm { add esi, -5 }
	__asm { jmp L_00c2f326 }
	__asm { L_00c2f324: }
	__asm { xor esi, esi }
	__asm { L_00c2f326: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2f34e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c2f34e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_00c2f34e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00c2f012 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00c2f35c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" char g_01310638[];
extern "C" char g_0131063c[];
extern "C" char g_01310640[];
extern "C" char g_01310644[];
extern "C" char g_01310648[];
extern "C" void fn_00c20020();
extern "C" void fn_00c6a860();
extern "C" void fn_00c6c2f0();
extern "C" void fn_00c6fc90();
extern "C" void fn_00c70300();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c308b0
extern "C" __declspec(naked) void asm_00c308b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6ab13 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x178], 0 }
	__asm { je L_00c30901 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp + 8], 0xeef0dc }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x24], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00c30901: }
	__asm { cmp dword ptr [esi + 0x180], 0 }
	__asm { je L_00c309fc }
	__asm { push 0x114 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c30932 }
	__asm { mov ecx, eax }
	__asm { call fn_00c6c2f0 }
	__asm { jmp L_00c30934 }
	__asm { L_00c30932: }
	__asm { xor eax, eax }
	__asm { L_00c30934: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c20020 }
	__asm { push 0x8b }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00c70300 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00c6fc90 }
	__asm { mov eax, dword ptr [g_01310638] }
	__asm { add esp, 0x10 }
	__asm { push 1 }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { push 2 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [g_0131063c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [g_01310640] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [g_01310644] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [g_01310648] }
	__asm { push 2 }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { push 1 }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_00c309bd }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00c309bd: }
	__asm { mov ecx, dword ptr [esi + 0x180] }
	__asm { call fn_00c6a860 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c309fc }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00c309fc }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00c309fc }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c309fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [ecx + 0x159] }
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
extern "C" void fn_00c35c70();
// FUNCTION: ROBLOXSTUDIO 0x00c31310
extern "C" __declspec(naked) void asm_00c31310()
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
	__asm { je L_00c31378 }
	__asm { test ebx, ebx }
	__asm { jne L_00c31378 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c31367 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c31378 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c31367: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c31378: }
	__asm { push 0xc36230 }
	__asm { push 0x1310d28 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c35c70 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_00c313b8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_00c3146d }
	__asm { L_00c313b8: }
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
	__asm { je L_00c31427 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_00c31427 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c31416 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c31427 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c31416: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c31427: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00c3143f }
	__asm { add esi, -5 }
	__asm { jmp L_00c31441 }
	__asm { L_00c3143f: }
	__asm { xor esi, esi }
	__asm { L_00c31441: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c3146d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00c3146d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00c3146d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_00c314aa }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c314aa }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c314aa }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c314aa }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c314aa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0079b070();
extern "C" void fn_007dc620();
extern "C" void fn_007e8f10();
// FUNCTION: ROBLOXSTUDIO 0x00c48530
extern "C" __declspec(naked) void asm_00c48530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0079b070 }
	__asm { add esp, 0x10 }
	__asm { mov ebx, eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c4857b }
	__asm { lea edx, [ecx - 0x1c] }
	__asm { jmp L_00c4857d }
	__asm { L_00c4857b: }
	__asm { xor edx, edx }
	__asm { L_00c4857d: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov esi, dword ptr [esi + 0x2c] }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00c485a5 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00c485a5: }
	__asm { lea ecx, [edx + esi] }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_007e8f10 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_007dc620 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00c485f6 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00c485f6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00c485f6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00c485f6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10194[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
extern "C" void fn_007b00e0();
extern "C" void fn_00c5ae00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c5a980
extern "C" __declspec(naked) void asm_00c5a980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65bdf }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xef3524 }
	__asm { mov dword ptr [edi + 4], 0xef359c }
	__asm { mov dword ptr [edi + 0x18], 0xef35a4 }
	__asm { mov dword ptr [edi + 0x1c], 0xef35b0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0x94] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_00c5a9ee }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00c5a9ee: }
	__asm { lea esi, [edi + 0x90] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00c5aa18 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00c5aa18: }
	__asm { push dword ptr [edi + 0x8c] }
	__asm { mov esi, dword ptr [g_00e10194] }
	__asm { call esi }
	__asm { push dword ptr [edi + 0x84] }
	__asm { call esi }
	__asm { push dword ptr [edi + 0x88] }
	__asm { call esi }
	__asm { mov ecx, dword ptr [edi + 0x7c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c5aa71 }
	__asm { cmp dword ptr [edi + 0x70], 0 }
	__asm { je L_00c5aa58 }
	__asm { mov eax, dword ptr [edi + 0x6c] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x68] }
	__asm { call fn_00c5ae00 }
	__asm { L_00c5aa58: }
	__asm { push dword ptr [edi + 0x7c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { L_00c5aa71: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e10194] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call esi }
	__asm { push dword ptr [edi + 4] }
	__asm { call esi }
	__asm { push dword ptr [edi + 8] }
	__asm { call esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_009cad30();
extern "C" void fn_00c66b50();
// FUNCTION: ROBLOXSTUDIO 0x00c63620
extern "C" __declspec(naked) void asm_00c63620()
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
	__asm { je L_00c636bf }
	__asm { push 0xc66c90 }
	__asm { push 0x1313768 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00c66b50 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00c63685 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_00c63685: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00c636bf }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c636bf }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c636bf }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c636bf }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c636bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_006b9740();
extern "C" void fn_00c6af10();
extern "C" void fn_00c6afe0();
// FUNCTION: ROBLOXSTUDIO 0x00c6b550
extern "C" __declspec(naked) void asm_00c6b550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00c6b5b9 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { cmp dword ptr [eax + 0xcc0], 0 }
	__asm { jne L_00c6b5b9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c6b5a4 }
	__asm { push 0xc3 }
	__asm { push 0xef5940 }
	__asm { push 0xef5a10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c6b5b9 }
	__asm { L_00c6b5a4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xef5aa0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c6b5b9: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, 0x208 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0x210 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6af10 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0x228 }
	__asm { call fn_00c6afe0 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_00c6b636 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00c6b636 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00c6b636 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00c6b636 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00c6b636: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// (empty)

// (empty)

// (empty)

// (empty)
