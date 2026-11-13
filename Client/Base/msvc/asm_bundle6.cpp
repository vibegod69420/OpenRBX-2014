// Bundled inline-assembly functions (merged from the recursion output).

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e36278[];
extern "C" char g_01038120[];
extern "C" char g_01038168[];
extern "C" void fn_006eb650();
// FUNCTION: ROBLOXSTUDIO 0x006ebcc0
extern "C" __declspec(naked) void asm_006ebcc0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { cmp ebx, esi }
	__asm { je L_006ebd96 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { cmp esi, ecx }
	__asm { jle L_006ebd6b }
	__asm { test ecx, ecx }
	__asm { jne L_006ebcf7 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { call fn_006eb650 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ebcf7: }
	__asm { cmp esi, 0xa }
	__asm { jge L_006ebd11 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 8], 0xa }
	__asm { call fn_006eb650 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ebd11: }
	__asm { movss xmm1, dword ptr [g_01038168] }
	__asm { mov eax, ecx }
	__asm { shl eax, 2 }
	__asm { cmp eax, 0x61a80 }
	__asm { jle L_006ebd2f }
	__asm { movss xmm1, dword ptr [g_00e36278] }
	__asm { jmp L_006ebd3e }
	__asm { L_006ebd2f: }
	__asm { cmp eax, 0xfa00 }
	__asm { jle L_006ebd3e }
	__asm { movss xmm1, dword ptr [g_01038120] }
	__asm { L_006ebd3e: }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { mov edx, 0xa }
	__asm { mulss xmm0, xmm1 }
	__asm { push ebx }
	__asm { cvttss2si eax, xmm0 }
	__asm { sub eax, ecx }
	__asm { add eax, esi }
	__asm { mov ecx, eax }
	__asm { cmp eax, edx }
	__asm { cmovl ecx, edx }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov ecx, edi }
	__asm { call fn_006eb650 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ebd6b: }
	__asm { mov eax, 0x55555556 }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp esi, eax }
	__asm { jg L_006ebd96 }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_006ebd96 }
	__asm { cmp esi, 0xa }
	__asm { jle L_006ebd96 }
	__asm { cmp esi, ebx }
	__asm { cmovge esi, ebx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006eb650 }
	__asm { L_006ebd96: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
}

extern "C" char g_00e36278[];
extern "C" char g_01038120[];
extern "C" char g_01038168[];
extern "C" void fn_006eb780();
// FUNCTION: ROBLOXSTUDIO 0x006ebda0
extern "C" __declspec(naked) void asm_006ebda0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { cmp ebx, esi }
	__asm { je L_006ebe76 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { cmp esi, ecx }
	__asm { jle L_006ebe4b }
	__asm { test ecx, ecx }
	__asm { jne L_006ebdd7 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { call fn_006eb780 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ebdd7: }
	__asm { cmp esi, 0xa }
	__asm { jge L_006ebdf1 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 8], 0xa }
	__asm { call fn_006eb780 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ebdf1: }
	__asm { movss xmm1, dword ptr [g_01038168] }
	__asm { mov eax, ecx }
	__asm { shl eax, 2 }
	__asm { cmp eax, 0x61a80 }
	__asm { jle L_006ebe0f }
	__asm { movss xmm1, dword ptr [g_00e36278] }
	__asm { jmp L_006ebe1e }
	__asm { L_006ebe0f: }
	__asm { cmp eax, 0xfa00 }
	__asm { jle L_006ebe1e }
	__asm { movss xmm1, dword ptr [g_01038120] }
	__asm { L_006ebe1e: }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { mov edx, 0xa }
	__asm { mulss xmm0, xmm1 }
	__asm { push ebx }
	__asm { cvttss2si eax, xmm0 }
	__asm { sub eax, ecx }
	__asm { add eax, esi }
	__asm { mov ecx, eax }
	__asm { cmp eax, edx }
	__asm { cmovl ecx, edx }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov ecx, edi }
	__asm { call fn_006eb780 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ebe4b: }
	__asm { mov eax, 0x55555556 }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp esi, eax }
	__asm { jg L_006ebe76 }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_006ebe76 }
	__asm { cmp esi, 0xa }
	__asm { jle L_006ebe76 }
	__asm { cmp esi, ebx }
	__asm { cmovge esi, ebx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006eb780 }
	__asm { L_006ebe76: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
}

extern "C" char g_00e36278[];
extern "C" char g_01038120[];
extern "C" char g_01038168[];
extern "C" void fn_006eb910();
// FUNCTION: ROBLOXSTUDIO 0x006ebe80
extern "C" __declspec(naked) void asm_006ebe80()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { cmp ebx, esi }
	__asm { je L_006ebf56 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { cmp esi, ecx }
	__asm { jle L_006ebf2b }
	__asm { test ecx, ecx }
	__asm { jne L_006ebeb7 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { call fn_006eb910 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ebeb7: }
	__asm { cmp esi, 0xa }
	__asm { jge L_006ebed1 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 8], 0xa }
	__asm { call fn_006eb910 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ebed1: }
	__asm { movss xmm1, dword ptr [g_01038168] }
	__asm { mov eax, ecx }
	__asm { shl eax, 3 }
	__asm { cmp eax, 0x61a80 }
	__asm { jle L_006ebeef }
	__asm { movss xmm1, dword ptr [g_00e36278] }
	__asm { jmp L_006ebefe }
	__asm { L_006ebeef: }
	__asm { cmp eax, 0xfa00 }
	__asm { jle L_006ebefe }
	__asm { movss xmm1, dword ptr [g_01038120] }
	__asm { L_006ebefe: }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { mov edx, 0xa }
	__asm { mulss xmm0, xmm1 }
	__asm { push ebx }
	__asm { cvttss2si eax, xmm0 }
	__asm { sub eax, ecx }
	__asm { add eax, esi }
	__asm { mov ecx, eax }
	__asm { cmp eax, edx }
	__asm { cmovl ecx, edx }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov ecx, edi }
	__asm { call fn_006eb910 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ebf2b: }
	__asm { mov eax, 0x55555556 }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp esi, eax }
	__asm { jg L_006ebf56 }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_006ebf56 }
	__asm { cmp esi, 0xa }
	__asm { jle L_006ebf56 }
	__asm { cmp esi, ebx }
	__asm { cmovge esi, ebx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006eb910 }
	__asm { L_006ebf56: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
}

extern "C" char g_00e36278[];
extern "C" char g_01038120[];
extern "C" char g_01038168[];
extern "C" void fn_006ebab0();
// FUNCTION: ROBLOXSTUDIO 0x006ebf60
extern "C" __declspec(naked) void asm_006ebf60()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { cmp ebx, esi }
	__asm { je L_006ec036 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { cmp esi, ecx }
	__asm { jle L_006ec00b }
	__asm { test ecx, ecx }
	__asm { jne L_006ebf97 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { call fn_006ebab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ebf97: }
	__asm { cmp esi, 0xa }
	__asm { jge L_006ebfb1 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 8], 0xa }
	__asm { call fn_006ebab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ebfb1: }
	__asm { movss xmm1, dword ptr [g_01038168] }
	__asm { mov eax, ecx }
	__asm { shl eax, 3 }
	__asm { cmp eax, 0x61a80 }
	__asm { jle L_006ebfcf }
	__asm { movss xmm1, dword ptr [g_00e36278] }
	__asm { jmp L_006ebfde }
	__asm { L_006ebfcf: }
	__asm { cmp eax, 0xfa00 }
	__asm { jle L_006ebfde }
	__asm { movss xmm1, dword ptr [g_01038120] }
	__asm { L_006ebfde: }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { mov edx, 0xa }
	__asm { mulss xmm0, xmm1 }
	__asm { push ebx }
	__asm { cvttss2si eax, xmm0 }
	__asm { sub eax, ecx }
	__asm { add eax, esi }
	__asm { mov ecx, eax }
	__asm { cmp eax, edx }
	__asm { cmovl ecx, edx }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov ecx, edi }
	__asm { call fn_006ebab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ec00b: }
	__asm { mov eax, 0x55555556 }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp esi, eax }
	__asm { jg L_006ec036 }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_006ec036 }
	__asm { cmp esi, 0xa }
	__asm { jle L_006ec036 }
	__asm { cmp esi, ebx }
	__asm { cmovge esi, ebx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006ebab0 }
	__asm { L_006ec036: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e1068c[];
extern "C" void fn_004028a0();
extern "C" void fn_00402fd0();
extern "C" void fn_00403040();
extern "C" void fn_00403540();
extern "C" void fn_004039a0();
extern "C" void fn_00410e50();
extern "C" void fn_004278c0();
extern "C" void fn_006f5410();
extern "C" void fn_0070a590();
extern "C" void fn_0070da00();
extern "C" void fn_0071fd70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006f4740
extern "C" __declspec(naked) void asm_006f4740()
{
	__asm { push -1 }
	__asm { push 0xd1835b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x4a8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x4c8] }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [esp + 0x10], ebx }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { cmp ecx, 2 }
	__asm { jae L_006f478b }
	__asm { mov esi, dword ptr [esp + 0x4c4] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], ebx }
	__asm { mov byte ptr [esi], bl }
	__asm { jmp L_006f4bac }
	__asm { L_006f478b: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_006f4795 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_006f4797 }
	__asm { L_006f4795: }
	__asm { mov eax, edi }
	__asm { L_006f4797: }
	__asm { cmp byte ptr [eax + ecx - 1], 0x64 }
	__asm { jne L_006f4b94 }
	__asm { lea eax, [esp + 0xb4] }
	__asm { push 0x400 }
	__asm { push eax }
	__asm { call dword ptr [g_00e1068c] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esp + 0x98], 0xf }
	__asm { mov dword ptr [esp + 0x94], ebx }
	__asm { mov byte ptr [esp + 0x84], bl }
	__asm { mov dword ptr [esp + 0x4bc], 0 }
	__asm { mov dword ptr [esp + 0x80], 0xf }
	__asm { mov dword ptr [esp + 0x7c], 0 }
	__asm { mov byte ptr [esp + 0x6c], 0 }
	__asm { mov dword ptr [esp + 0x68], 0xf }
	__asm { mov dword ptr [esp + 0x64], 0 }
	__asm { mov byte ptr [esp + 0x54], 0 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov byte ptr [esp + 0x4bc], 2 }
	__asm { call fn_0070da00 }
	__asm { lea eax, [esp + 0xb4] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x40] }
	__asm { mov byte ptr [esp + 0x4c0], 3 }
	__asm { call fn_004039a0 }
	__asm { lea eax, [esp + 0x54] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x70] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x90] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x4c] }
	__asm { push eax }
	__asm { mov byte ptr [esp + 0x4d0], 4 }
	__asm { call fn_0071fd70 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [esp + 0x50], 0x10 }
	__asm { mov byte ptr [esp + 0x4bc], 3 }
	__asm { jb L_006f487a }
	__asm { push dword ptr [esp + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f487a: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { dec eax }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004278c0 }
	__asm { cmp dword ptr [esp + 0x18], 1 }
	__asm { mov byte ptr [esp + 0x4bc], 5 }
	__asm { jle L_006f4915 }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { lea eax, [esp + 0xa0] }
	__asm { push eax }
	__asm { call fn_0070a590 }
	__asm { mov esi, eax }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { lea eax, [esp + 0x44] }
	__asm { lea edx, [ecx + ecx*2] }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { mov byte ptr [esp + 0x4c4], 6 }
	__asm { lea ecx, [ecx + edx*8] }
	__asm { add ecx, -0x18 }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x20], 2 }
	__asm { call fn_0070a590 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov ebx, 6 }
	__asm { mov dword ptr [esp + 0x4bc], 7 }
	__asm { mov dword ptr [esp + 0x10], ebx }
	__asm { jb L_006f48fe }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_006f48fe: }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [eax + 0x10] }
	__asm { mov ecx, eax }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { mov byte ptr [esp + 0xf], 1 }
	__asm { test eax, eax }
	__asm { je L_006f491a }
	__asm { L_006f4915: }
	__asm { mov byte ptr [esp + 0xf], 0 }
	__asm { L_006f491a: }
	__asm { test bl, 4 }
	__asm { je L_006f494a }
	__asm { and ebx, 0xfffffffb }
	__asm { cmp dword ptr [esp + 0x50], 0x10 }
	__asm { jb L_006f4935 }
	__asm { push dword ptr [esp + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f4935: }
	__asm { mov dword ptr [esp + 0x50], 0xf }
	__asm { mov dword ptr [esp + 0x4c], 0 }
	__asm { mov byte ptr [esp + 0x3c], 0 }
	__asm { L_006f494a: }
	__asm { mov dword ptr [esp + 0x4bc], 5 }
	__asm { test bl, 2 }
	__asm { je L_006f4976 }
	__asm { and ebx, 0xfffffffd }
	__asm { cmp dword ptr [esp + 0xb0], 0x10 }
	__asm { jb L_006f4976 }
	__asm { push dword ptr [esp + 0x9c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f4976: }
	__asm { cmp byte ptr [esp + 0xf], 0 }
	__asm { je L_006f4a45 }
	__asm { mov esi, dword ptr [esp + 0x4c4] }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00410e50 }
	__asm { cmp dword ptr [esp + 0x38], 0x10 }
	__asm { jb L_006f49a7 }
	__asm { push dword ptr [esp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f49a7: }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x38], 0xf }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { mov byte ptr [esp + 0x4bc], 2 }
	__asm { call fn_006f5410 }
	__asm { cmp dword ptr [esp + 0x68], 0x10 }
	__asm { jb L_006f49e0 }
	__asm { push dword ptr [esp + 0x54] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f49e0: }
	__asm { cmp dword ptr [esp + 0x80], 0x10 }
	__asm { mov dword ptr [esp + 0x68], 0xf }
	__asm { mov dword ptr [esp + 0x64], 0 }
	__asm { mov byte ptr [esp + 0x54], 0 }
	__asm { jb L_006f4a0b }
	__asm { push dword ptr [esp + 0x6c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f4a0b: }
	__asm { cmp dword ptr [esp + 0x98], 0x10 }
	__asm { mov dword ptr [esp + 0x80], 0xf }
	__asm { mov dword ptr [esp + 0x7c], 0 }
	__asm { mov byte ptr [esp + 0x6c], 0 }
	__asm { jb L_006f4bb8 }
	__asm { push dword ptr [esp + 0x84] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_006f4bb8 }
	__asm { L_006f4a45: }
	__asm { cmp dword ptr [esp + 0x18], 2 }
	__asm { jle L_006f4ab0 }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x40] }
	__asm { push eax }
	__asm { call fn_0070a590 }
	__asm { mov esi, eax }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { add ecx, -2 }
	__asm { or ebx, 8 }
	__asm { lea edx, [ecx + ecx*2] }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { mov byte ptr [esp + 0x4c4], 8 }
	__asm { lea eax, [ecx + edx*8] }
	__asm { push eax }
	__asm { lea eax, [esp + 0xa8] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x20], ebx }
	__asm { call fn_0070a590 }
	__asm { push esi }
	__asm { or ebx, 0x10 }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x4d4], 9 }
	__asm { mov dword ptr [esp + 0x28], ebx }
	__asm { call fn_00403040 }
	__asm { add esp, 0x18 }
	__asm { mov byte ptr [esp + 0xf], 1 }
	__asm { test al, al }
	__asm { jne L_006f4ab5 }
	__asm { L_006f4ab0: }
	__asm { mov byte ptr [esp + 0xf], 0 }
	__asm { L_006f4ab5: }
	__asm { test bl, 0x10 }
	__asm { je L_006f4ac9 }
	__asm { lea ecx, [esp + 0x9c] }
	__asm { and ebx, 0xffffffef }
	__asm { call fn_004028a0 }
	__asm { L_006f4ac9: }
	__asm { mov dword ptr [esp + 0x4bc], 5 }
	__asm { test bl, 8 }
	__asm { je L_006f4ae2 }
	__asm { lea ecx, [esp + 0x3c] }
	__asm { call fn_004028a0 }
	__asm { L_006f4ae2: }
	__asm { cmp byte ptr [esp + 0xf], 0 }
	__asm { je L_006f4b51 }
	__asm { mov ecx, dword ptr [esp + 0x4c4] }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { call fn_00410e50 }
	__asm { lea ecx, [esp + 0x24] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov byte ptr [esp + 0x4bc], 2 }
	__asm { call fn_006f5410 }
	__asm { lea ecx, [esp + 0x54] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [esp + 0x6c] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [esp + 0x84] }
	__asm { call fn_004028a0 }
	__asm { mov eax, dword ptr [esp + 0x4c4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [esp + 0x4a8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x4b4 }
	__asm { ret }
	__asm { L_006f4b51: }
	__asm { lea ecx, [esp + 0x24] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov byte ptr [esp + 0x4bc], 2 }
	__asm { call fn_006f5410 }
	__asm { lea ecx, [esp + 0x54] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [esp + 0x6c] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [esp + 0x84] }
	__asm { mov dword ptr [esp + 0x4bc], 0xffffffff }
	__asm { call fn_004028a0 }
	__asm { L_006f4b94: }
	__asm { mov esi, dword ptr [esp + 0x4c4] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_006f4bac: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_006f4bb8: }
	__asm { mov ecx, dword ptr [esp + 0x4b4] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x4b4 }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0071c1a0();
extern "C" void fn_0071c280();
extern "C" void fn_0071c350();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006f4be0
extern "C" __declspec(naked) void asm_006f4be0()
{
	__asm { push -1 }
	__asm { push 0xd18390 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x78 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esp + 0x6c] }
	__asm { mov dword ptr [esp + 0x80], 0xf }
	__asm { mov dword ptr [esp + 0x7c], 0 }
	__asm { mov byte ptr [esp + 0x6c], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esp + 0x54] }
	__asm { mov dword ptr [esp + 0x8c], 0 }
	__asm { mov dword ptr [esp + 0x68], 0xf }
	__asm { mov dword ptr [esp + 0x64], 0 }
	__asm { mov byte ptr [esp + 0x54], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esp + 0x3c] }
	__asm { mov byte ptr [esp + 0x8c], 1 }
	__asm { mov dword ptr [esp + 0x50], 0xf }
	__asm { mov dword ptr [esp + 0x4c], 0 }
	__asm { mov byte ptr [esp + 0x3c], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esp + 0x24] }
	__asm { mov byte ptr [esp + 0x8c], 2 }
	__asm { mov dword ptr [esp + 0x38], 0xf }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { push 1 }
	__asm { push 0x102243c }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x8c], 3 }
	__asm { mov dword ptr [esp + 0x20], 0xf }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [esp + 0x8c] }
	__asm { lea eax, [esp + 0x64] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x50] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x3c] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0xa4] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esp + 0x9c], 4 }
	__asm { call fn_0071c350 }
	__asm { cmp dword ptr [esp + 0x18], 0x10 }
	__asm { jb L_006f4d21 }
	__asm { push dword ptr [esp + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f4d21: }
	__asm { cmp dword ptr [esp + 0x30], 0x10 }
	__asm { mov dword ptr [esp + 0x18], 0xf }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov byte ptr [esp + 4], 0 }
	__asm { jb L_006f4d49 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f4d49: }
	__asm { cmp dword ptr [esp + 0x48], 0x10 }
	__asm { mov dword ptr [esp + 0x30], 0xf }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { jb L_006f4d71 }
	__asm { push dword ptr [esp + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f4d71: }
	__asm { cmp dword ptr [esp + 0x60], 0x10 }
	__asm { mov dword ptr [esp + 0x48], 0xf }
	__asm { mov dword ptr [esp + 0x44], 0 }
	__asm { mov byte ptr [esp + 0x34], 0 }
	__asm { jb L_006f4d99 }
	__asm { push dword ptr [esp + 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f4d99: }
	__asm { cmp dword ptr [esp + 0x78], 0x10 }
	__asm { mov dword ptr [esp + 0x60], 0xf }
	__asm { mov dword ptr [esp + 0x5c], 0 }
	__asm { mov byte ptr [esp + 0x4c], 0 }
	__asm { mov dword ptr [esp + 0x84], 0xffffffff }
	__asm { jb L_006f4dcc }
	__asm { push dword ptr [esp + 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f4dcc: }
	__asm { push dword ptr [esp + 0x94] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x7c], 0xf }
	__asm { mov dword ptr [esp + 0x78], 0 }
	__asm { mov byte ptr [esp + 0x68], 0 }
	__asm { call fn_0071c1a0 }
	__asm { mov ecx, esi }
	__asm { call fn_0071c280 }
	__asm { mov ecx, dword ptr [esp + 0x7c] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x84 }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0071c280();
extern "C" void fn_0071c350();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006f4e10
extern "C" __declspec(naked) void asm_006f4e10()
{
	__asm { push -1 }
	__asm { push 0xd183c5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x78 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esp + 0x6c] }
	__asm { mov dword ptr [esp + 0x80], 0xf }
	__asm { mov dword ptr [esp + 0x7c], 0 }
	__asm { mov byte ptr [esp + 0x6c], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esp + 0x54] }
	__asm { mov dword ptr [esp + 0x8c], 0 }
	__asm { mov dword ptr [esp + 0x68], 0xf }
	__asm { mov dword ptr [esp + 0x64], 0 }
	__asm { mov byte ptr [esp + 0x54], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esp + 0x3c] }
	__asm { mov byte ptr [esp + 0x8c], 1 }
	__asm { mov dword ptr [esp + 0x50], 0xf }
	__asm { mov dword ptr [esp + 0x4c], 0 }
	__asm { mov byte ptr [esp + 0x3c], 0 }
	__asm { call fn_004038a0 }
	__asm { cmp byte ptr [esp + 0x94], 0 }
	__asm { mov edx, 0xe4733c }
	__asm { mov eax, 0xe47340 }
	__asm { cmove edx, eax }
	__asm { mov byte ptr [esp + 0x84], 2 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [esp + 0x30], 0xf }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { jne L_006f4ee9 }
	__asm { xor ecx, ecx }
	__asm { jmp L_006f4ef9 }
	__asm { L_006f4ee9: }
	__asm { mov ecx, edx }
	__asm { lea esi, [ecx + 1] }
	__asm { mov edi, edi }
	__asm { L_006f4ef0: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_006f4ef0 }
	__asm { sub ecx, esi }
	__asm { L_006f4ef9: }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [esp + 0x24] }
	__asm { call fn_004038a0 }
	__asm { push 1 }
	__asm { push 0x102243c }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x8c], 3 }
	__asm { mov dword ptr [esp + 0x20], 0xf }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [esp + 0x8c] }
	__asm { lea eax, [esp + 0x64] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x50] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x3c] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0xa4] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esp + 0x9c], 4 }
	__asm { call fn_0071c350 }
	__asm { cmp dword ptr [esp + 0x18], 0x10 }
	__asm { jb L_006f4f7a }
	__asm { push dword ptr [esp + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f4f7a: }
	__asm { cmp dword ptr [esp + 0x30], 0x10 }
	__asm { mov dword ptr [esp + 0x18], 0xf }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov byte ptr [esp + 4], 0 }
	__asm { jb L_006f4fa2 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f4fa2: }
	__asm { cmp dword ptr [esp + 0x48], 0x10 }
	__asm { mov dword ptr [esp + 0x30], 0xf }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { jb L_006f4fca }
	__asm { push dword ptr [esp + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f4fca: }
	__asm { cmp dword ptr [esp + 0x60], 0x10 }
	__asm { mov dword ptr [esp + 0x48], 0xf }
	__asm { mov dword ptr [esp + 0x44], 0 }
	__asm { mov byte ptr [esp + 0x34], 0 }
	__asm { jb L_006f4ff2 }
	__asm { push dword ptr [esp + 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f4ff2: }
	__asm { cmp dword ptr [esp + 0x78], 0x10 }
	__asm { mov dword ptr [esp + 0x60], 0xf }
	__asm { mov dword ptr [esp + 0x5c], 0 }
	__asm { mov byte ptr [esp + 0x4c], 0 }
	__asm { mov dword ptr [esp + 0x84], 0xffffffff }
	__asm { jb L_006f5025 }
	__asm { push dword ptr [esp + 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f5025: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x78], 0xf }
	__asm { mov dword ptr [esp + 0x74], 0 }
	__asm { mov byte ptr [esp + 0x64], 0 }
	__asm { call fn_0071c280 }
	__asm { mov ecx, dword ptr [esp + 0x7c] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x84 }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0071c260();
extern "C" void fn_0071c280();
extern "C" void fn_0071c350();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006f5060
extern "C" __declspec(naked) void asm_006f5060()
{
	__asm { push -1 }
	__asm { push 0xd183fa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x78 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esp + 0x6c] }
	__asm { mov dword ptr [esp + 0x80], 0xf }
	__asm { mov dword ptr [esp + 0x7c], 0 }
	__asm { mov byte ptr [esp + 0x6c], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esp + 0x54] }
	__asm { mov dword ptr [esp + 0x8c], 0 }
	__asm { mov dword ptr [esp + 0x68], 0xf }
	__asm { mov dword ptr [esp + 0x64], 0 }
	__asm { mov byte ptr [esp + 0x54], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esp + 0x3c] }
	__asm { mov byte ptr [esp + 0x8c], 1 }
	__asm { mov dword ptr [esp + 0x50], 0xf }
	__asm { mov dword ptr [esp + 0x4c], 0 }
	__asm { mov byte ptr [esp + 0x3c], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [esp + 0x24] }
	__asm { mov byte ptr [esp + 0x8c], 2 }
	__asm { mov dword ptr [esp + 0x38], 0xf }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { call fn_004038a0 }
	__asm { push 1 }
	__asm { push 0x102243c }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov byte ptr [esp + 0x8c], 3 }
	__asm { mov dword ptr [esp + 0x20], 0xf }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov byte ptr [esp + 0xc], 0 }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [esp + 0x8c] }
	__asm { lea eax, [esp + 0x64] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x50] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x3c] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0xa4] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esp + 0x9c], 4 }
	__asm { call fn_0071c350 }
	__asm { cmp dword ptr [esp + 0x18], 0x10 }
	__asm { jb L_006f51a1 }
	__asm { push dword ptr [esp + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f51a1: }
	__asm { cmp dword ptr [esp + 0x30], 0x10 }
	__asm { mov dword ptr [esp + 0x18], 0xf }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov byte ptr [esp + 4], 0 }
	__asm { jb L_006f51c9 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f51c9: }
	__asm { cmp dword ptr [esp + 0x48], 0x10 }
	__asm { mov dword ptr [esp + 0x30], 0xf }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { jb L_006f51f1 }
	__asm { push dword ptr [esp + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f51f1: }
	__asm { cmp dword ptr [esp + 0x60], 0x10 }
	__asm { mov dword ptr [esp + 0x48], 0xf }
	__asm { mov dword ptr [esp + 0x44], 0 }
	__asm { mov byte ptr [esp + 0x34], 0 }
	__asm { jb L_006f5219 }
	__asm { push dword ptr [esp + 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f5219: }
	__asm { cmp dword ptr [esp + 0x78], 0x10 }
	__asm { mov dword ptr [esp + 0x60], 0xf }
	__asm { mov dword ptr [esp + 0x5c], 0 }
	__asm { mov byte ptr [esp + 0x4c], 0 }
	__asm { mov dword ptr [esp + 0x84], 0xffffffff }
	__asm { jb L_006f524c }
	__asm { push dword ptr [esp + 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006f524c: }
	__asm { push dword ptr [esp + 0x94] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x7c], 0xf }
	__asm { mov dword ptr [esp + 0x78], 0 }
	__asm { mov byte ptr [esp + 0x68], 0 }
	__asm { call fn_0071c260 }
	__asm { mov ecx, esi }
	__asm { call fn_0071c280 }
	__asm { mov ecx, dword ptr [esp + 0x7c] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x84 }
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

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00707230();
extern "C" void fn_007075c0();
extern "C" void fn_00707d10();
extern "C" void fn_00707d70();
// FUNCTION: ROBLOXSTUDIO 0x00707be0
extern "C" __declspec(naked) void asm_00707be0()
{
	__asm { L_00707be0: }
	__asm { sub esp, 8 }
	__asm { mov eax, 0x2aaaaaab }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x10] }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x20] }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0x20 }
	__asm { jle L_00707cb7 }
	__asm { mov ebp, dword ptr [esp + 0x24] }
	__asm { L_00707c11: }
	__asm { test ebp, ebp }
	__asm { jle L_00707cd0 }
	__asm { push edi }
	__asm { lea eax, [esp + 0x14] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00707d70 }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, ebp }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov ebp, eax }
	__asm { sar ebp, 1 }
	__asm { mov eax, ebp }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { add ebp, eax }
	__asm { mov dword ptr [esp + 0x2c], ecx }
	__asm { mov ecx, edi }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { sar edx, 2 }
	__asm { mov dword ptr [esp + 0x28], esi }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add esp, 0xc }
	__asm { add eax, edx }
	__asm { push ebp }
	__asm { cmp eax, esi }
	__asm { jge L_00707c88 }
	__asm { push dword ptr [esp + 0x24] }
	__asm { push ebx }
	__asm { call L_00707be0 }
	__asm { mov ebx, dword ptr [esp + 0x28] }
	__asm { jmp L_00707c96 }
	__asm { L_00707c88: }
	__asm { push edi }
	__asm { push dword ptr [esp + 0x24] }
	__asm { call L_00707be0 }
	__asm { mov edi, dword ptr [esp + 0x2c] }
	__asm { L_00707c96: }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0xc }
	__asm { cmp eax, 0x20 }
	__asm { jg L_00707c11 }
	__asm { L_00707cb7: }
	__asm { cmp eax, 1 }
	__asm { jle L_00707cc8 }
	__asm { push 0 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00707230 }
	__asm { add esp, 0xc }
	__asm { L_00707cc8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret }
	__asm { L_00707cd0: }
	__asm { cmp eax, 0x20 }
	__asm { jle L_00707cb7 }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jle L_00707cfd }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_007075c0 }
	__asm { add esp, 0x10 }
	__asm { L_00707cfd: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00707d10 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret }
}

extern "C" char g_00e10140[];
extern "C" void fn_007022e0();
extern "C" void fn_00702370();
extern "C" void fn_00703c60();
extern "C" void fn_00704180();
extern "C" void fn_00709d20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007091c0
extern "C" __declspec(naked) void asm_007091c0()
{
	__asm { L_007091c0: }
	__asm { push -1 }
	__asm { push 0xd19044 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 4], esi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jge L_0070921b }
	__asm { lea ecx, [ecx + ecx*2] }
	__asm { shl ecx, 4 }
	__asm { add ecx, dword ptr [esi] }
	__asm { mov dword ptr [esp + 8], ecx }
	__asm { mov dword ptr [esp + 0x44], 0 }
	__asm { je L_00709206 }
	__asm { push dword ptr [esp + 0x4c] }
	__asm { call fn_00703c60 }
	__asm { L_00709206: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [esp + 0x38] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x44 }
	__asm { ret 4 }
	__asm { L_0070921b: }
	__asm { mov edx, dword ptr [esi] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x50] }
	__asm { cmp edi, edx }
	__asm { jb L_007092ea }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { shl eax, 4 }
	__asm { add eax, edx }
	__asm { cmp edi, eax }
	__asm { jae L_007092ea }
	__asm { mov dword ptr [esp + 0x24], 0xf }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { mov byte ptr [esp + 0x10], 0 }
	__asm { fldz }
	__asm { mov ecx, edi }
	__asm { fstp qword ptr [esp + 0x30] }
	__asm { mov dword ptr [esp + 0x48], 1 }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov dword ptr [esp + 0x38], 0 }
	__asm { call fn_00702370 }
	__asm { push edi }
	__asm { lea ecx, [esp + 0x14] }
	__asm { call fn_00704180 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x4c], 2 }
	__asm { call L_007091c0 }
	__asm { mov eax, dword ptr [esp + 0x38] }
	__asm { mov dword ptr [esp + 0x48], 3 }
	__asm { test eax, eax }
	__asm { je L_007092bc }
	__asm { add eax, 0x38 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jg L_007092bc }
	__asm { push dword ptr [esp + 0x38] }
	__asm { call fn_007022e0 }
	__asm { add esp, 4 }
	__asm { L_007092bc: }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { mov dword ptr [esp + 0x38], 0 }
	__asm { jb L_0070930d }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [esp + 0x38] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x44 }
	__asm { ret 4 }
	__asm { L_007092ea: }
	__asm { lea eax, [ecx + 1] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00709d20 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [esi] }
	__asm { shl ecx, 4 }
	__asm { add eax, -0x30 }
	__asm { add ecx, eax }
	__asm { call fn_00704180 }
	__asm { L_0070930d: }
	__asm { mov ecx, dword ptr [esp + 0x40] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x44 }
	__asm { ret 4 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10500[];
extern "C" void fn_004038a0();
extern "C" void fn_00426850();
extern "C" void fn_004278c0();
extern "C" void fn_0070c9f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0070b780
extern "C" __declspec(naked) void asm_0070b780()
{
	__asm { sub esp, 0x20 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x28] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x10], ecx }
	__asm { push eax }
	__asm { mov ecx, ebp }
	__asm { mov byte ptr [esp + 0x10], 0x2e }
	__asm { call fn_00426850 }
	__asm { cmp eax, -1 }
	__asm { jne L_0070b7af }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { add esp, 0x20 }
	__asm { ret 8 }
	__asm { L_0070b7af: }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 1 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x3c] }
	__asm { push eax }
	__asm { mov ecx, ebp }
	__asm { mov byte ptr [esp + 0x40], 0x2e }
	__asm { call fn_00426850 }
	__asm { mov esi, dword ptr [esp + 0x38] }
	__asm { cmp eax, -1 }
	__asm { je L_0070b8d1 }
	__asm { mov byte ptr [esp + 0x34], 0x2e }
	__asm { mov byte ptr [esp + 0x38], 0x2f }
	__asm { mov byte ptr [esp + 0x10], 0x5c }
	__asm { L_0070b7e3: }
	__asm { push 1 }
	__asm { push eax }
	__asm { lea eax, [esp + 0x3c] }
	__asm { push eax }
	__asm { mov ecx, ebp }
	__asm { call fn_00426850 }
	__asm { mov edi, eax }
	__asm { push 1 }
	__asm { push edi }
	__asm { lea eax, [esp + 0x40] }
	__asm { push eax }
	__asm { mov ecx, ebp }
	__asm { call fn_00426850 }
	__asm { push 1 }
	__asm { mov ebx, eax }
	__asm { push edi }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { mov ecx, ebp }
	__asm { call fn_00426850 }
	__asm { cmp ebx, -1 }
	__asm { je L_0070b81d }
	__asm { cmp ebx, eax }
	__asm { jl L_0070b824 }
	__asm { L_0070b81d: }
	__asm { cmp eax, -1 }
	__asm { je L_0070b824 }
	__asm { mov ebx, eax }
	__asm { L_0070b824: }
	__asm { cmp ebx, -1 }
	__asm { je L_0070b8df }
	__asm { push ebx }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { mov ecx, ebp }
	__asm { call fn_004278c0 }
	__asm { mov edi, eax }
	__asm { cmp esi, edi }
	__asm { je L_0070b8a4 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0070b852 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070b852: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jae L_0070b87d }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { inc eax }
	__asm { je L_0070b887 }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_0070b887 }
	__asm { L_0070b87d: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_0070b887: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { L_0070b8a4: }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { jb L_0070b8b7 }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070b8b7: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { push esi }
	__asm { call fn_0070c9f0 }
	__asm { test al, al }
	__asm { jne L_0070b8eb }
	__asm { lea eax, [ebx + 1] }
	__asm { cmp eax, -1 }
	__asm { jne L_0070b7e3 }
	__asm { L_0070b8d1: }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { L_0070b8df: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { add esp, 0x20 }
	__asm { ret 8 }
	__asm { L_0070b8eb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { add esp, 0x20 }
	__asm { ret 8 }
}

extern "C" void fn_00426850();
extern "C" void fn_004278c0();
extern "C" void fn_0043ee70();
extern "C" void fn_0070a590();
extern "C" void fn_0070abd0();
extern "C" void fn_0070b0a0();
extern "C" void fn_0070b610();
extern "C" void fn_0070ce10();
extern "C" void fn_0070ce90();
extern "C" void fn_0070d110();
extern "C" void fn_0070d280();
extern "C" void fn_0070e030();
extern "C" void fn_00728bc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0070bfc0
extern "C" __declspec(naked) void asm_0070bfc0()
{
	__asm { push -1 }
	__asm { push 0xd193fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x98 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xb0] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { call fn_0070ce10 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_0070c0d7 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x7c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { push eax }
	__asm { lea eax, [esp + 0x48] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0xb4], 0 }
	__asm { call fn_0070a590 }
	__asm { push 0xe47ecc }
	__asm { push eax }
	__asm { lea eax, [esp + 0x9c] }
	__asm { push eax }
	__asm { mov byte ptr [esp + 0xc0], 1 }
	__asm { call fn_0043ee70 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [esp + 0x58], 0x10 }
	__asm { jb L_0070c057 }
	__asm { push dword ptr [esp + 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070c057: }
	__asm { mov dword ptr [esp + 0x58], 0xf }
	__asm { mov dword ptr [esp + 0x54], 0 }
	__asm { mov byte ptr [esp + 0x44], 0 }
	__asm { cmp dword ptr [esp + 0x88], 0x10 }
	__asm { mov byte ptr [esp + 0xac], 4 }
	__asm { jb L_0070c08a }
	__asm { push dword ptr [esp + 0x74] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070c08a: }
	__asm { lea eax, [esp + 0x8c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esp + 0x8c], 0xf }
	__asm { mov dword ptr [esp + 0x88], 0 }
	__asm { mov byte ptr [esp + 0x78], 0 }
	__asm { call fn_0070b610 }
	__asm { mov ecx, eax }
	__asm { call fn_0070e030 }
	__asm { cmp dword ptr [esp + 0xa0], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_0070c274 }
	__asm { push dword ptr [esp + 0x8c] }
	__asm { jmp L_0070c26c }
	__asm { L_0070c0d7: }
	__asm { lea eax, [esp + 0x5c] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0070ce90 }
	__asm { lea eax, [esp + 0x64] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x38] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0xbc], 5 }
	__asm { call fn_0070d280 }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [esp + 0xb8], 0 }
	__asm { mov ecx, edi }
	__asm { sete al }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { lea eax, [esp + 0x30] }
	__asm { push eax }
	__asm { mov byte ptr [esp + 0xb4], 6 }
	__asm { call fn_0070b0a0 }
	__asm { mov ebx, eax }
	__asm { push 1 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esp + 0x18], 0x2a }
	__asm { call fn_00426850 }
	__asm { cmp eax, -1 }
	__asm { jne L_0070c1c2 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esp + 0x18], 0x3f }
	__asm { call fn_00426850 }
	__asm { cmp eax, -1 }
	__asm { jne L_0070c1c2 }
	__asm { cmp byte ptr [ebx], 0 }
	__asm { je L_0070c18b }
	__asm { lea eax, [esp + 0x5c] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { call fn_0070d110 }
	__asm { add esp, 8 }
	__asm { mov ecx, ebx }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x14], 1 }
	__asm { call fn_0070abd0 }
	__asm { test al, al }
	__asm { je L_0070c18b }
	__asm { mov bl, 1 }
	__asm { jmp L_0070c18d }
	__asm { L_0070c18b: }
	__asm { xor bl, bl }
	__asm { L_0070c18d: }
	__asm { test byte ptr [esp + 0x10], 1 }
	__asm { je L_0070c239 }
	__asm { cmp dword ptr [esp + 0x28], 0x10 }
	__asm { jb L_0070c1ab }
	__asm { push dword ptr [esp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070c1ab: }
	__asm { mov dword ptr [esp + 0x28], 0xf }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { jmp L_0070c239 }
	__asm { L_0070c1c2: }
	__asm { cmp byte ptr [ebx], 0 }
	__asm { jne L_0070c1cb }
	__asm { xor bl, bl }
	__asm { jmp L_0070c239 }
	__asm { L_0070c1cb: }
	__asm { lea eax, [esp + 0x5c] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { call fn_0070d110 }
	__asm { add esp, 8 }
	__asm { xor esi, esi }
	__asm { mov byte ptr [esp + 0xac], 7 }
	__asm { cmp dword ptr [ebx + 8], esi }
	__asm { jle L_0070c224 }
	__asm { xor edi, edi }
	__asm { mov edi, edi }
	__asm { L_0070c1f0: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { add ecx, edi }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { jb L_0070c1fd }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_0070c1fd: }
	__asm { cmp dword ptr [esp + 0x28], 0x10 }
	__asm { push 7 }
	__asm { lea eax, [esp + 0x18] }
	__asm { cmovae eax, dword ptr [esp + 0x18] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00728bc0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_0070c290 }
	__asm { inc esi }
	__asm { add edi, 0x1c }
	__asm { cmp esi, dword ptr [ebx + 8] }
	__asm { jl L_0070c1f0 }
	__asm { L_0070c224: }
	__asm { xor bl, bl }
	__asm { L_0070c226: }
	__asm { cmp dword ptr [esp + 0x28], 0x10 }
	__asm { jb L_0070c239 }
	__asm { push dword ptr [esp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070c239: }
	__asm { cmp dword ptr [esp + 0x40], 0x10 }
	__asm { jb L_0070c24c }
	__asm { push dword ptr [esp + 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070c24c: }
	__asm { cmp dword ptr [esp + 0x70], 0x10 }
	__asm { mov dword ptr [esp + 0x40], 0xf }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { mov byte ptr [esp + 0x2c], 0 }
	__asm { jb L_0070c274 }
	__asm { push dword ptr [esp + 0x5c] }
	__asm { L_0070c26c: }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070c274: }
	__asm { mov ecx, dword ptr [esp + 0xa4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0xa4 }
	__asm { ret 8 }
	__asm { L_0070c290: }
	__asm { mov bl, 1 }
	__asm { jmp L_0070c226 }
}

extern "C" void fn_006f5720();
extern "C" void fn_0070b0a0();
extern "C" void fn_0070cd40();
extern "C" void fn_0070e550();
extern "C" void fn_00728bc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0070c750
extern "C" __declspec(naked) void asm_0070c750()
{
	__asm { L_0070c750: }
	__asm { push -1 }
	__asm { push 0xd19462 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x50] }
	__asm { mov eax, ecx }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { call fn_0070b0a0 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [esp + 4], ecx }
	__asm { cmp byte ptr [ecx], 0 }
	__asm { je L_0070c92b }
	__asm { push ebp }
	__asm { xor ebp, ebp }
	__asm { cmp dword ptr [ecx + 8], ebp }
	__asm { jle L_0070c92a }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x50] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x64] }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esp + 0x64], eax }
	__asm { L_0070c7a5: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { add esi, eax }
	__asm { mov al, byte ptr [edi + 2] }
	__asm { test al, al }
	__asm { mov edx, 7 }
	__asm { mov eax, 0x17 }
	__asm { cmove edx, eax }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0070c7c6 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0070c7c8 }
	__asm { L_0070c7c6: }
	__asm { mov ecx, esi }
	__asm { L_0070c7c8: }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_0070c7d2 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_0070c7d4 }
	__asm { L_0070c7d2: }
	__asm { mov eax, ebx }
	__asm { L_0070c7d4: }
	__asm { push edx }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00728bc0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_0070c8a8 }
	__asm { cmp dword ptr [esi + 0x18], eax }
	__asm { jne L_0070c83b }
	__asm { cmp byte ptr [edi], al }
	__asm { je L_0070c7f5 }
	__asm { cmp byte ptr [edi + 1], al }
	__asm { jne L_0070c83b }
	__asm { L_0070c7f5: }
	__asm { push esi }
	__asm { push dword ptr [esp + 0x60] }
	__asm { lea eax, [esp + 0x38] }
	__asm { push eax }
	__asm { call fn_0070cd40 }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x60], 0 }
	__asm { call fn_0070e550 }
	__asm { xor ecx, ecx }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { setne cl }
	__asm { mov dword ptr [esp + 0x50], 0xffffffff }
	__asm { inc ecx }
	__asm { cmp dword ptr [esp + 0x44], 0x10 }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { jb L_0070c83b }
	__asm { push dword ptr [esp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070c83b: }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_0070c84c }
	__asm { cmp byte ptr [edi + 1], 0 }
	__asm { jne L_0070c858 }
	__asm { cmp dword ptr [esi + 0x18], 1 }
	__asm { je L_0070c858 }
	__asm { L_0070c84c: }
	__asm { cmp byte ptr [edi + 1], 0 }
	__asm { je L_0070c8a8 }
	__asm { cmp dword ptr [esi + 0x18], 2 }
	__asm { jne L_0070c8a8 }
	__asm { L_0070c858: }
	__asm { cmp byte ptr [edi + 4], 0 }
	__asm { push esi }
	__asm { je L_0070c89f }
	__asm { push dword ptr [esp + 0x60] }
	__asm { lea eax, [esp + 0x38] }
	__asm { push eax }
	__asm { call fn_0070cd40 }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [esp + 0x60] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x54], 1 }
	__asm { call fn_006f5720 }
	__asm { cmp dword ptr [esp + 0x44], 0x10 }
	__asm { mov dword ptr [esp + 0x50], 0xffffffff }
	__asm { jb L_0070c8a8 }
	__asm { push dword ptr [esp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_0070c8a8 }
	__asm { L_0070c89f: }
	__asm { mov ecx, dword ptr [esp + 0x64] }
	__asm { call fn_006f5720 }
	__asm { L_0070c8a8: }
	__asm { cmp byte ptr [edi + 3], 0 }
	__asm { je L_0070c90e }
	__asm { cmp dword ptr [esi + 0x18], 2 }
	__asm { jne L_0070c90e }
	__asm { push esi }
	__asm { push dword ptr [esp + 0x60] }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { call fn_0070cd40 }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { push edi }
	__asm { push dword ptr [esp + 0x64] }
	__asm { mov dword ptr [esp + 0x58], 2 }
	__asm { push eax }
	__asm { push ebx }
	__asm { call L_0070c750 }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { mov dword ptr [esp + 0x50], 0xffffffff }
	__asm { jb L_0070c8f9 }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070c8f9: }
	__asm { mov dword ptr [esp + 0x2c], 0xf }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov byte ptr [esp + 0x18], 0 }
	__asm { L_0070c90e: }
	__asm { mov eax, dword ptr [esp + 0x64] }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { inc ebp }
	__asm { add eax, 0x1c }
	__asm { mov dword ptr [esp + 0x64], eax }
	__asm { cmp ebp, dword ptr [ecx + 8] }
	__asm { jl L_0070c7a5 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_0070c92a: }
	__asm { pop ebp }
	__asm { L_0070c92b: }
	__asm { mov ecx, dword ptr [esp + 0x38] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x44 }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_004278c0();
extern "C" void fn_0070a250();
extern "C" void fn_0070ce10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0070ce90
extern "C" __declspec(naked) void asm_0070ce90()
{
	__asm { push -1 }
	__asm { push 0xd19555 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x68 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0xc], 0 }
	__asm { push 1 }
	__asm { push 0x10189d0 }
	__asm { lea ecx, [esp + 0x48] }
	__asm { mov dword ptr [esp + 0x5c], 0xf }
	__asm { mov dword ptr [esp + 0x58], 0 }
	__asm { mov byte ptr [esp + 0x48], 0 }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [esp + 0x84] }
	__asm { lea eax, [esp + 0x40] }
	__asm { push eax }
	__asm { mov ebx, 1 }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x80], 0 }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { call fn_0070a250 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_0070cf46 }
	__asm { push ebx }
	__asm { push 0x100dda0 }
	__asm { lea ecx, [esp + 0x18] }
	__asm { mov dword ptr [esp + 0x2c], 0xf }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov byte ptr [esp + 0x18], al }
	__asm { call fn_004038a0 }
	__asm { lea eax, [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x78], ebx }
	__asm { push eax }
	__asm { mov ebx, 3 }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { call fn_0070a250 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0070cf58 }
	__asm { L_0070cf46: }
	__asm { push esi }
	__asm { call fn_0070ce10 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [esp + 0xb], 1 }
	__asm { test al, al }
	__asm { je L_0070cf5d }
	__asm { L_0070cf58: }
	__asm { mov byte ptr [esp + 0xb], 0 }
	__asm { L_0070cf5d: }
	__asm { test bl, 2 }
	__asm { je L_0070cf91 }
	__asm { and ebx, 0xfffffffd }
	__asm { cmp dword ptr [esp + 0x24], 0x10 }
	__asm { mov dword ptr [esp + 0xc], ebx }
	__asm { jb L_0070cf7c }
	__asm { push dword ptr [esp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070cf7c: }
	__asm { mov dword ptr [esp + 0x24], 0xf }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { mov byte ptr [esp + 0x10], 0 }
	__asm { L_0070cf91: }
	__asm { mov dword ptr [esp + 0x78], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_0070cfb8 }
	__asm { and ebx, 0xfffffffe }
	__asm { cmp dword ptr [esp + 0x54], 0x10 }
	__asm { mov dword ptr [esp + 0xc], ebx }
	__asm { jb L_0070cfb8 }
	__asm { push dword ptr [esp + 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070cfb8: }
	__asm { cmp byte ptr [esp + 0xb], 0 }
	__asm { je L_0070cfdf }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { dec eax }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x60] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { mov dword ptr [esp + 0x78], 2 }
	__asm { or ebx, 4 }
	__asm { jmp L_0070d011 }
	__asm { L_0070cfdf: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [esp + 0x34] }
	__asm { mov dword ptr [esp + 0x48], 0xf }
	__asm { mov dword ptr [esp + 0x44], 0 }
	__asm { mov byte ptr [esp + 0x34], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [esp + 0x28] }
	__asm { mov dword ptr [esp + 0x78], 3 }
	__asm { or ebx, 8 }
	__asm { L_0070d011: }
	__asm { mov esi, dword ptr [esp + 0x80] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x18], ebx }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { or ebx, 0x10 }
	__asm { test bl, 8 }
	__asm { je L_0070d06c }
	__asm { and ebx, 0xfffffff7 }
	__asm { cmp dword ptr [esp + 0x3c], 0x10 }
	__asm { jb L_0070d057 }
	__asm { push dword ptr [esp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070d057: }
	__asm { mov dword ptr [esp + 0x3c], 0xf }
	__asm { mov dword ptr [esp + 0x38], 0 }
	__asm { mov byte ptr [esp + 0x28], 0 }
	__asm { L_0070d06c: }
	__asm { test bl, 4 }
	__asm { je L_0070d084 }
	__asm { cmp dword ptr [esp + 0x6c], 0x10 }
	__asm { jb L_0070d084 }
	__asm { push dword ptr [esp + 0x58] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0070d084: }
	__asm { mov ecx, dword ptr [esp + 0x70] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x74 }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e104f4[];
extern "C" char g_00e10530[];
extern "C" char g_010060f0[];
extern "C" void fn_0070f3e0();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x0070f040
extern "C" __declspec(naked) void asm_0070f040()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10530] }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x12 }
	__asm { mov dword ptr [edi], 0xe47ed4 }
	__asm { mov dword ptr [edi + 0xc], 0x12 }
	__asm { mov dword ptr [edi + 8], 0x12 }
	__asm { call ebx }
	__asm { mov ebp, dword ptr [esp + 0x30] }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [eax], ecx }
	__asm { test ebp, ebp }
	__asm { je L_0070f07e }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { or dword ptr [eax], 0x40 }
	__asm { L_0070f07e: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ax, word ptr [esp + 0x1c] }
	__asm { mov word ptr [ecx + 0xa], ax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ax, word ptr [esp + 0x20] }
	__asm { mov word ptr [ecx + 0xc], ax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ax, word ptr [esp + 0x24] }
	__asm { mov word ptr [ecx + 0xe], ax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov ax, word ptr [esp + 0x28] }
	__asm { mov word ptr [ecx + 0x10], ax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax + 8], cx }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { add eax, 2 }
	__asm { cmp eax, ecx }
	__asm { jle L_0070f0f0 }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { call ebx }
	__asm { push dword ptr [edi + 0xc] }
	__asm { mov esi, eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { push dword ptr [edi + 4] }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { L_0070f0f0: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { add ecx, dword ptr [edi + 0xc] }
	__asm { mov ax, word ptr [g_010060f0] }
	__asm { mov word ptr [ecx], ax }
	__asm { add dword ptr [edi + 0xc], 2 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { add eax, 2 }
	__asm { cmp eax, ecx }
	__asm { jle L_0070f136 }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { call ebx }
	__asm { push dword ptr [edi + 0xc] }
	__asm { mov esi, eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { push dword ptr [edi + 4] }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { L_0070f136: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { add ecx, dword ptr [edi + 0xc] }
	__asm { mov ax, word ptr [g_010060f0] }
	__asm { push dword ptr [esp + 0x14] }
	__asm { mov word ptr [ecx], ax }
	__asm { add dword ptr [edi + 0xc], 2 }
	__asm { mov ecx, edi }
	__asm { call fn_0070f3e0 }
	__asm { test ebp, ebp }
	__asm { je L_0070f1a5 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { add eax, 2 }
	__asm { cmp eax, ecx }
	__asm { jle L_0070f18b }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { call ebx }
	__asm { push dword ptr [edi + 0xc] }
	__asm { mov esi, eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { push dword ptr [edi + 4] }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { L_0070f18b: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { add ecx, dword ptr [edi + 0xc] }
	__asm { mov ax, word ptr [esp + 0x30] }
	__asm { push ebp }
	__asm { mov word ptr [ecx], ax }
	__asm { add dword ptr [edi + 0xc], 2 }
	__asm { mov ecx, edi }
	__asm { call fn_0070f3e0 }
	__asm { L_0070f1a5: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { ret 0x20 }
}

extern "C" char g_00e104f4[];
extern "C" char g_00e10530[];
extern "C" void fn_0070f3e0();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x0070f1e0
extern "C" __declspec(naked) void asm_0070f1e0()
{
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebp, dword ptr [edi + 0xc] }
	__asm { mov ebx, ebp }
	__asm { and ebx, 0x80000003 }
	__asm { jns L_0070f1fb }
	__asm { dec ebx }
	__asm { or ebx, 0xfffffffc }
	__asm { inc ebx }
	__asm { L_0070f1fb: }
	__asm { mov ecx, dword ptr [g_00e10530] }
	__asm { je L_0070f23a }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { lea eax, [ebx + ebp] }
	__asm { cmp eax, edx }
	__asm { jle L_0070f237 }
	__asm { lea eax, [edx + ebx*2] }
	__asm { push eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { call ecx }
	__asm { push ebp }
	__asm { push dword ptr [edi + 4] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { push dword ptr [edi + 4] }
	__asm { call dword ptr [g_00e104f4] }
	__asm { mov ecx, dword ptr [g_00e10530] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { L_0070f237: }
	__asm { add dword ptr [edi + 0xc], ebx }
	__asm { L_0070f23a: }
	__asm { cmp dword ptr [esp + 0x4c], 0 }
	__asm { mov ebx, dword ptr [esp + 0x30] }
	__asm { je L_0070f248 }
	__asm { or ebx, 0x40 }
	__asm { L_0070f248: }
	__asm { mov ax, word ptr [esp + 0x38] }
	__asm { mov ebp, dword ptr [edi + 0xc] }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { mov word ptr [esp + 0x18], ax }
	__asm { mov ax, word ptr [esp + 0x3c] }
	__asm { mov word ptr [esp + 0x1a], ax }
	__asm { mov ax, word ptr [esp + 0x40] }
	__asm { mov word ptr [esp + 0x1c], ax }
	__asm { mov ax, word ptr [esp + 0x44] }
	__asm { mov word ptr [esp + 0x1e], ax }
	__asm { lea eax, [ebp + 0x12] }
	__asm { cmp eax, edx }
	__asm { jle L_0070f2a5 }
	__asm { lea eax, [edx + 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { call ecx }
	__asm { push ebp }
	__asm { push dword ptr [edi + 4] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ebp, dword ptr [g_00e104f4] }
	__asm { call ebp }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { jmp L_0070f2ab }
	__asm { L_0070f2a5: }
	__asm { mov ebp, dword ptr [g_00e104f4] }
	__asm { L_0070f2ab: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { add ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [esp + 0x34] }
	__asm { mov dword ptr [ecx], ebx }
	__asm { mov ebx, dword ptr [g_00e10530] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ax, word ptr [esp + 0x48] }
	__asm { mov word ptr [ecx + 0x10], ax }
	__asm { add dword ptr [edi + 0xc], 0x12 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { add eax, 2 }
	__asm { mov dword ptr [esp + 0x48], 0xffff }
	__asm { cmp eax, ecx }
	__asm { jle L_0070f312 }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { call ebx }
	__asm { push dword ptr [edi + 0xc] }
	__asm { mov esi, eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { push dword ptr [edi + 4] }
	__asm { call ebp }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { L_0070f312: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { add ecx, dword ptr [edi + 4] }
	__asm { mov ax, word ptr [esp + 0x48] }
	__asm { mov word ptr [ecx], ax }
	__asm { add dword ptr [edi + 0xc], 2 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { add eax, 2 }
	__asm { cmp eax, ecx }
	__asm { jle L_0070f353 }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { call ebx }
	__asm { push dword ptr [edi + 0xc] }
	__asm { mov esi, eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { push dword ptr [edi + 4] }
	__asm { call ebp }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { L_0070f353: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { add ecx, dword ptr [edi + 4] }
	__asm { mov ax, word ptr [esp + 0x28] }
	__asm { push dword ptr [esp + 0x2c] }
	__asm { mov word ptr [ecx], ax }
	__asm { add dword ptr [edi + 0xc], 2 }
	__asm { mov ecx, edi }
	__asm { call fn_0070f3e0 }
	__asm { cmp dword ptr [esp + 0x4c], 0 }
	__asm { je L_0070f3c3 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { add eax, 2 }
	__asm { cmp eax, ecx }
	__asm { jle L_0070f3a6 }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { call ebx }
	__asm { push dword ptr [edi + 0xc] }
	__asm { mov esi, eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { push dword ptr [edi + 4] }
	__asm { call ebp }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { L_0070f3a6: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { add ecx, dword ptr [edi + 4] }
	__asm { mov ax, word ptr [esp + 0x50] }
	__asm { push dword ptr [esp + 0x4c] }
	__asm { mov word ptr [ecx], ax }
	__asm { add dword ptr [edi + 0xc], 2 }
	__asm { mov ecx, edi }
	__asm { call fn_0070f3e0 }
	__asm { L_0070f3c3: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { pop edi }
	__asm { inc word ptr [eax + 8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x14 }
	__asm { ret 0x2c }
}

// FUNCTION: ROBLOXSTUDIO 0x0070f520
extern "C" __declspec(naked) void asm_0070f520()
{
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { movss xmm4, dword ptr [ecx + 0x10] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { subss xmm0, dword ptr [ecx + 4] }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { subss xmm3, dword ptr [ecx + 8] }
	__asm { movss xmm6, dword ptr [ecx + 0x14] }
	__asm { movss xmm7, dword ptr [ecx + 0xc] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movss xmm5, dword ptr [ecx + 0x18] }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { movaps xmm2, xmm4 }
	__asm { mulss xmm2, xmm0 }
	__asm { movaps xmm0, xmm6 }
	__asm { mulss xmm0, xmm3 }
	__asm { subss xmm1, xmm7 }
	__asm { addss xmm2, xmm0 }
	__asm { movaps xmm0, xmm5 }
	__asm { mulss xmm0, xmm1 }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { mulss xmm4, xmm2 }
	__asm { mulss xmm6, xmm2 }
	__asm { addss xmm0, xmm4 }
	__asm { mulss xmm5, xmm2 }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { addss xmm0, xmm6 }
	__asm { addss xmm7, xmm5 }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss dword ptr [eax + 8], xmm7 }
	__asm { ret 8 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e105fc[];
extern "C" char g_011dd418[];
extern "C" void fn_004039a0();
extern "C" void fn_006d8660();
extern "C" void fn_006d86d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00716820
extern "C" __declspec(naked) void asm_00716820()
{
	__asm { push -1 }
	__asm { push 0xd19bf9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov ebp, dword ptr [edi] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { lea esi, [edi + 8] }
	__asm { lea eax, [eax + eax*4] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call dword ptr [edx + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { jne L_00716901 }
	__asm { call fn_006d8660 }
	__asm { cmp dword ptr [g_011dd418], ebx }
	__asm { je L_007168b3 }
	__asm { push 0xe37130 }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { call fn_004039a0 }
	__asm { mov dword ptr [esp + 0x38], ebx }
	__asm { mov ebx, 1 }
	__asm { push ebx }
	__asm { push 0x9e }
	__asm { push 0xe370e8 }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { push 0xe37160 }
	__asm { mov dword ptr [esp + 0x28], ebx }
	__asm { call dword ptr [g_011dd418] }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [esp + 0x13], bl }
	__asm { test al, al }
	__asm { jne L_007168b8 }
	__asm { L_007168b3: }
	__asm { mov byte ptr [esp + 0x13], 0 }
	__asm { L_007168b8: }
	__asm { mov dword ptr [esp + 0x38], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_007168ed }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { jb L_007168d8 }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007168d8: }
	__asm { mov dword ptr [esp + 0x2c], 0xf }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov byte ptr [esp + 0x18], 0 }
	__asm { L_007168ed: }
	__asm { cmp byte ptr [esp + 0x13], 0 }
	__asm { je L_007168fc }
	__asm { push -1 }
	__asm { call dword ptr [g_00e105fc] }
	__asm { L_007168fc: }
	__asm { call fn_006d86d0 }
	__asm { L_00716901: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [esp + 0x40] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea edx, [esp + 0x40] }
	__asm { cmovl edx, esi }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov edx, ebp }
	__asm { lea ecx, [ecx + ecx*4] }
	__asm { lea esi, [eax + ecx*4] }
	__asm { cmp eax, esi }
	__asm { jae L_0071694a }
	__asm { mov edi, edi }
	__asm { L_00716920: }
	__asm { test eax, eax }
	__asm { je L_00716940 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { L_00716940: }
	__asm { add eax, 0x14 }
	__asm { add edx, 0x14 }
	__asm { cmp eax, esi }
	__asm { jb L_00716920 }
	__asm { L_0071694a: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push ebp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esp + 0x30] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x2c }
	__asm { ret 4 }
}

extern "C" void fn_006da0e0();
extern "C" void fn_007109a0();
// FUNCTION: ROBLOXSTUDIO 0x007174d0
extern "C" __declspec(naked) void asm_007174d0()
{
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x2c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_006da0e0 }
	__asm { fld dword ptr [esi + 0x14] }
	__asm { fstp dword ptr [ebx + 0x24] }
	__asm { lea eax, [esp + 0xc] }
	__asm { fld dword ptr [esi + 0x18] }
	__asm { push eax }
	__asm { fstp dword ptr [ebx + 0x28] }
	__asm { lea ecx, [esi + 4] }
	__asm { fld dword ptr [esi + 0x1c] }
	__asm { fstp dword ptr [ebx + 0x2c] }
	__asm { call fn_007109a0 }
	__asm { mov esi, eax }
	__asm { mov edi, ebx }
	__asm { mov ecx, 9 }
	__asm { rep movsd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { add esp, 0x24 }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00717a20();
extern "C" void fn_0071b120();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00719760
extern "C" __declspec(naked) void asm_00719760()
{
	__asm { push -1 }
	__asm { push 0xd19a4d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 8], 0 }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { jbe L_007198d2 }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { call fn_0071b120 }
	__asm { mov edx, eax }
	__asm { mov ecx, dword ptr [edx] }
	__asm { test ecx, ecx }
	__asm { jne L_007197a4 }
	__asm { xor eax, eax }
	__asm { jmp L_007197a6 }
	__asm { L_007197a4: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { L_007197a6: }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [edx + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov esi, dword ptr [eax + ecx*4] }
	__asm { push esi }
	__asm { lea ecx, [esp + 0x24] }
	__asm { mov dword ptr [esp + 0x38], 0xf }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { mov al, byte ptr [esi + 0x18] }
	__asm { mov byte ptr [esp + 0x30], al }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [esp + 0x34], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esp + 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esp + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [esp + 0x44], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [esp + 0x48], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [esp + 0x4c], eax }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [esp + 0x58], 0 }
	__asm { je L_00719854 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [edi + 0xc] }
	__asm { mov esi, dword ptr [eax + ecx*4] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00719832 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00719832: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { dec dword ptr [edi + 0x10] }
	__asm { jne L_00719851 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { jmp L_00719854 }
	__asm { L_00719851: }
	__asm { inc dword ptr [edi + 0xc] }
	__asm { L_00719854: }
	__asm { mov esi, dword ptr [esp + 0x60] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x20] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [esp + 0x2c], 0x10 }
	__asm { mov al, byte ptr [esp + 0x30] }
	__asm { mov byte ptr [esi + 0x18], al }
	__asm { mov eax, dword ptr [esp + 0x34] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [esp + 0x38] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [esp + 0x40] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [esp + 0x44] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [esp + 0x48] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [esp + 0x4c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { jb L_007198dc }
	__asm { push dword ptr [esp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [esp + 0x48] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x54 }
	__asm { ret 4 }
	__asm { L_007198d2: }
	__asm { mov esi, dword ptr [esp + 0x60] }
	__asm { push esi }
	__asm { call fn_00717a20 }
	__asm { L_007198dc: }
	__asm { mov ecx, dword ptr [esp + 0x50] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x54 }
	__asm { ret 4 }
}

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00cf6a20();
extern "C" void fn_00cf6e60();
// FUNCTION: ROBLOXSTUDIO 0x0071cc50
extern "C" __declspec(naked) void asm_0071cc50()
{
	__asm { sub esp, 8 }
	__asm { mov edx, dword ptr [esp + 0xc] }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx] }
	__asm { mov edx, dword ptr [edx + 4] }
	__asm { push edi }
	__asm { mov eax, esi }
	__asm { mov cl, 0x20 }
	__asm { call fn_00cf6e60 }
	__asm { mov edx, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { mov ebx, dword ptr [edx] }
	__asm { mov edx, dword ptr [edx + 4] }
	__asm { mov eax, ebx }
	__asm { mov cl, 0x20 }
	__asm { call fn_00cf6e60 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { push 0 }
	__asm { mov edi, eax }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x30], edi }
	__asm { call fn_00cf6a20 }
	__asm { push 0 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ebp, eax }
	__asm { mov dword ptr [esp + 0x20], edx }
	__asm { call fn_00cf6a20 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x24] }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { mov edi, edx }
	__asm { call fn_00cf6a20 }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x24] }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov esi, edx }
	__asm { call fn_00cf6a20 }
	__asm { mov ecx, dword ptr [esp + 0x28] }
	__asm { mov ebx, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [ecx], ebp }
	__asm { mov ebp, dword ptr [esp + 0x28] }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [ebp + 4], ecx }
	__asm { xor ecx, ecx }
	__asm { add edi, eax }
	__asm { adc ecx, edx }
	__asm { mov dword ptr [ebx], edi }
	__asm { add dword ptr [ebx], esi }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { mov cl, 0x20 }
	__asm { adc dword ptr [ebx + 4], 0 }
	__asm { mov eax, dword ptr [ebp] }
	__asm { mov edx, dword ptr [ebp + 4] }
	__asm { xor esi, esi }
	__asm { call fn_00cf6e60 }
	__asm { xor edx, edx }
	__asm { add dword ptr [ebp], esi }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp + 4], esi }
	__asm { adc edx, edx }
	__asm { xor eax, eax }
	__asm { add edx, dword ptr [esp + 0x14] }
	__asm { adc eax, eax }
	__asm { add edx, ecx }
	__asm { adc eax, esi }
	__asm { add dword ptr [ebp], esi }
	__asm { mov cl, 0x20 }
	__asm { adc dword ptr [ebp + 4], edx }
	__asm { add dword ptr [ebx], eax }
	__asm { adc dword ptr [ebx + 4], esi }
	__asm { mov eax, dword ptr [ebp] }
	__asm { mov edx, dword ptr [ebp + 4] }
	__asm { call fn_00cf6e60 }
	__asm { xor edx, edx }
	__asm { add dword ptr [ebp], esi }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp + 4], esi }
	__asm { adc edx, edx }
	__asm { xor eax, eax }
	__asm { add edx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { adc eax, eax }
	__asm { add edx, ecx }
	__asm { adc eax, esi }
	__asm { add dword ptr [ebp], esi }
	__asm { adc dword ptr [ebp + 4], edx }
	__asm { add dword ptr [ebx], eax }
	__asm { adc dword ptr [ebx + 4], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret }
}

extern "C" char g_00e1065c[];
extern "C" char g_00e1067c[];
extern "C" char g_00e106a8[];
extern "C" void fn_0071d650();
extern "C" void fn_0071d760();
extern "C" void fn_0071d9c0();
extern "C" void fn_00728f60();
extern "C" void fn_00729b70();
extern "C" void fn_00729c40();
extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x0071d480
extern "C" __declspec(naked) void asm_0071d480()
{
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { push 3 }
	__asm { push 0x28 }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { push edi }
	__asm { call esi }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0x28 }
	__asm { jge L_0071d4eb }
	__asm { L_0071d4a3: }
	__asm { mov ebx, dword ptr [esp + 0x40] }
	__asm { push 4 }
	__asm { push 8 }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { push edi }
	__asm { call esi }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 8 }
	__asm { jge L_0071d4d3 }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 8], 0x14 }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0xc], 0 }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { add esp, 0x30 }
	__asm { ret }
	__asm { L_0071d4d3: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { add esp, 0x30 }
	__asm { ret }
	__asm { L_0071d4eb: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call esi }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { js L_0071d4a3 }
	__asm { mov ebx, dword ptr [esp + 0x4c] }
	__asm { push ebp }
	__asm { push ebx }
	__asm { call dword ptr [g_00e106a8] }
	__asm { mov ebp, dword ptr [esp + 0x48] }
	__asm { add ebp, 8 }
	__asm { push ebp }
	__asm { push 1 }
	__asm { push ebx }
	__asm { push dword ptr [esp + 0x5c] }
	__asm { mov dword ptr [esp + 0x5c], eax }
	__asm { call fn_00729c40 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { js L_0071d632 }
	__asm { cmp word ptr [esp + 0x38], 0 }
	__asm { lea eax, [esp + 0x18] }
	__asm { je L_0071d552 }
	__asm { push ebp }
	__asm { push ebx }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0071d650 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { jns L_0071d56a }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { add esp, 0x30 }
	__asm { ret }
	__asm { L_0071d552: }
	__asm { push ebx }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [esp + 0x54] }
	__asm { call fn_0071d760 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { js L_0071d632 }
	__asm { L_0071d56a: }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call esi }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jns L_0071d590 }
	__asm { push edi }
	__asm { push esi }
	__asm { push ebp }
	__asm { call fn_0071d9c0 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0x30 }
	__asm { ret }
	__asm { L_0071d590: }
	__asm { push ebx }
	__asm { call dword ptr [g_00e106a8] }
	__asm { mov edi, dword ptr [g_00e1065c] }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x50] }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { push ebx }
	__asm { call edi }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { js L_0071d61f }
	__asm { mov esi, dword ptr [esp + 0x4c] }
	__asm { mov eax, dword ptr [esp + 0x28] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [esp + 0x2c] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov ax, word ptr [esp + 0x38] }
	__asm { mov word ptr [esi + 6], ax }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [esp + 0x30] }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [esp + 0x38] }
	__asm { push 1 }
	__asm { push dword ptr [esp + 0x4c] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { call fn_00728f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_0071d5fe }
	__asm { push esi }
	__asm { call fn_00729b70 }
	__asm { add esp, 4 }
	__asm { L_0071d5fe: }
	__asm { push ebp }
	__asm { push 1 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00729c40 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { js L_0071d632 }
	__asm { push 0 }
	__asm { push dword ptr [esp + 0x14] }
	__asm { push ebx }
	__asm { call edi }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jns L_0071d63d }
	__asm { L_0071d61f: }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { push 4 }
	__asm { push ebp }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { L_0071d632: }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { add esp, 0x30 }
	__asm { ret }
	__asm { L_0071d63d: }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { add esp, 0x30 }
	__asm { ret }
}

extern "C" char g_00e10554[];
extern "C" char g_00e1067c[];
extern "C" void fn_00728f60();
extern "C" void fn_0072a2c0();
extern "C" void fn_00cf6a60();
extern "C" void fn_00cfbcf0();
extern "C" void fn_00cfc9f0();
extern "C" void fn_00cfd260();
extern "C" void fn_00cfd340();
// FUNCTION: ROBLOXSTUDIO 0x0071d760
extern "C" __declspec(naked) void asm_0071d760()
{
	__asm { mov eax, 0x4040 }
	__asm { call fn_00cf6a60 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x4054] }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov eax, 8 }
	__asm { push 0 }
	__asm { mov word ptr [ebx + 0x20], ax }
	__asm { mov dword ptr [ebx + 0x18], 0 }
	__asm { mov dword ptr [ebx + 0x1c], 0 }
	__asm { call fn_00cfbcf0 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push dword ptr [esp + 0x405c] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov dword ptr [esp + 0x44], 0 }
	__asm { mov dword ptr [esp + 0x48], 0 }
	__asm { mov dword ptr [esp + 0x4c], 0 }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { call fn_00728f60 }
	__asm { add esp, 0xc }
	__asm { neg eax }
	__asm { push 0x38 }
	__asm { push 0xe48230 }
	__asm { push 0 }
	__asm { sbb eax, eax }
	__asm { add eax, 9 }
	__asm { push eax }
	__asm { push -0xf }
	__asm { push 8 }
	__asm { push 9 }
	__asm { lea eax, [esp + 0x34] }
	__asm { push eax }
	__asm { call fn_00cfd340 }
	__asm { mov esi, dword ptr [esp + 0x405c] }
	__asm { lea eax, [esp + 0x2050] }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esp + 0x28], 0x2000 }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { xor ebp, ebp }
	__asm { L_0071d818: }
	__asm { mov edi, dword ptr [esp + 0x4058] }
	__asm { test eax, eax }
	__asm { jne L_0071d868 }
	__asm { test ebp, ebp }
	__asm { jne L_0071d868 }
	__asm { push 1 }
	__asm { push 0x2000 }
	__asm { lea eax, [esp + 0x58] }
	__asm { push eax }
	__asm { push esi }
	__asm { call edi }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { js L_0071d8e6 }
	__asm { jle L_0071d863 }
	__asm { add dword ptr [ebx + 0x18], eax }
	__asm { lea ecx, [esp + 0x50] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x20], eax }
	__asm { mov eax, ecx }
	__asm { push eax }
	__asm { push dword ptr [ebx + 8] }
	__asm { mov dword ptr [esp + 0x24], ecx }
	__asm { call fn_00cfbcf0 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { jmp L_0071d868 }
	__asm { L_0071d863: }
	__asm { mov ebp, 4 }
	__asm { L_0071d868: }
	__asm { push ebp }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { call fn_00cfc9f0 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_0071d882 }
	__asm { cmp edi, 1 }
	__asm { jne L_0071d94d }
	__asm { L_0071d882: }
	__asm { mov eax, dword ptr [esp + 0x28] }
	__asm { cmp eax, 0x2000 }
	__asm { je L_0071d8d4 }
	__asm { push dword ptr [esp + 0x4064] }
	__asm { mov esi, 0x2000 }
	__asm { sub esi, eax }
	__asm { push esi }
	__asm { lea eax, [esp + 0x2058] }
	__asm { push 1 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10554] }
	__asm { add esp, 0x10 }
	__asm { cmp eax, esi }
	__asm { jne L_0071d971 }
	__asm { add dword ptr [ebx + 0x1c], esi }
	__asm { mov esi, dword ptr [esp + 0x405c] }
	__asm { lea eax, [esp + 0x2050] }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { mov dword ptr [esp + 0x28], 0x2000 }
	__asm { L_0071d8d4: }
	__asm { cmp edi, 1 }
	__asm { je L_0071d99c }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { jmp L_0071d818 }
	__asm { L_0071d8e6: }
	__asm { push 4 }
	__asm { push 8 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call edi }
	__asm { mov esi, dword ptr [esp + 0x4064] }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 8 }
	__asm { jge L_0071d927 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [esi + 8], 0x14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { call fn_00cfd260 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { add esp, 0x4040 }
	__asm { ret }
	__asm { L_0071d927: }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { call fn_00cfd260 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { add esp, 0x4040 }
	__asm { ret }
	__asm { L_0071d94d: }
	__asm { mov eax, dword ptr [esp + 0x4054] }
	__asm { push edi }
	__asm { add eax, 8 }
	__asm { push 0xd }
	__asm { push eax }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x4040 }
	__asm { ret }
	__asm { L_0071d971: }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, dword ptr [esp + 0x4058] }
	__asm { add ecx, 8 }
	__asm { push 6 }
	__asm { push ecx }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x4040 }
	__asm { ret }
	__asm { L_0071d99c: }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { call fn_00cfd260 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { add esp, 0x4040 }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" char g_00e10550[];
extern "C" char g_00e10654[];
extern "C" char g_00e1065c[];
extern "C" char g_00e106a8[];
extern "C" void fn_0071e1f0();
extern "C" void fn_0071e3d0();
extern "C" void fn_0071e4a0();
extern "C" void fn_0071e690();
extern "C" void fn_007293b0();
extern "C" void fn_0072a3d0();
extern "C" void fn_0072a9b0();
// FUNCTION: ROBLOXSTUDIO 0x0071e040
extern "C" __declspec(naked) void asm_0071e040()
{
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x14] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { push esi }
	__asm { push ebp }
	__asm { push edi }
	__asm { call fn_0071e690 }
	__asm { add esp, 0xc }
	__asm { cmp eax, -1 }
	__asm { je L_0071e193 }
	__asm { test eax, eax }
	__asm { je L_0071e185 }
	__asm { push ebx }
	__asm { push 0xe46c4c }
	__asm { push edi }
	__asm { call dword ptr [g_00e10654] }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { jne L_0071e090 }
	__asm { test esi, esi }
	__asm { je L_0071e0f0 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0xb }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0071e090: }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e1065c] }
	__asm { push ebx }
	__asm { call dword ptr [g_00e106a8] }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jne L_0071e0d4 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0071e1f0 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { jne L_0071e0ca }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10550] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0071e0ca: }
	__asm { mov dword ptr [esi + 4], ebx }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0071e0d4: }
	__asm { push eax }
	__asm { push esi }
	__asm { push ebp }
	__asm { push ebx }
	__asm { call fn_0071e4a0 }
	__asm { mov ebp, eax }
	__asm { add esp, 0x10 }
	__asm { test ebp, ebp }
	__asm { jne L_0071e0f7 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10550] }
	__asm { add esp, 4 }
	__asm { L_0071e0f0: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0071e0f7: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0071e1f0 }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { test edi, edi }
	__asm { jne L_0071e11e }
	__asm { push ebp }
	__asm { call fn_007293b0 }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10550] }
	__asm { add esp, 8 }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0071e11e: }
	__asm { mov dword ptr [edi + 0x1c], ebp }
	__asm { mov dword ptr [edi + 4], ebx }
	__asm { mov eax, dword ptr [ebp + 4] }
	__asm { lea eax, [eax + eax*4] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10530] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { test eax, eax }
	__asm { jne L_0071e158 }
	__asm { test esi, esi }
	__asm { je L_0071e148 }
	__asm { mov dword ptr [esi], 0xe }
	__asm { L_0071e148: }
	__asm { push edi }
	__asm { call fn_0072a3d0 }
	__asm { add esp, 4 }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0071e158: }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [ebp + 4], esi }
	__asm { jle L_0071e16f }
	__asm { nop }
	__asm { L_0071e160: }
	__asm { push edi }
	__asm { call fn_0072a9b0 }
	__asm { inc esi }
	__asm { add esp, 4 }
	__asm { cmp esi, dword ptr [ebp + 4] }
	__asm { jl L_0071e160 }
	__asm { L_0071e16f: }
	__asm { push edi }
	__asm { call fn_0071e3d0 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { pop ebx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0071e185: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0071e1f0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0071e193: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e1065c[];
extern "C" void fn_0071e710();
extern "C" void fn_00729630();
extern "C" void fn_007296b0();
extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x0071e290
extern "C" __declspec(naked) void asm_0071e290()
{
	__asm { sub esp, 0x40 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x4c] }
	__asm { push ebp }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { push esi }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_0071e2ab }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov esi, dword ptr [eax + 0x3c] }
	__asm { mov edi, esi }
	__asm { jmp L_0071e2af }
	__asm { L_0071e2ab: }
	__asm { xor esi, esi }
	__asm { xor edi, edi }
	__asm { L_0071e2af: }
	__asm { mov dword ptr [esp + 0x58], 0 }
	__asm { test ecx, ecx }
	__asm { jle L_0071e367 }
	__asm { xor ebp, ebp }
	__asm { L_0071e2c1: }
	__asm { mov edx, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [edx + ebp + 0x3c] }
	__asm { cmp ecx, edi }
	__asm { cmovb edi, ecx }
	__asm { cmp edi, dword ptr [ebx + 0xc] }
	__asm { ja L_0071e3b3 }
	__asm { movzx eax, word ptr [edx + ebp + 0x20] }
	__asm { add eax, 0x1e }
	__asm { add eax, dword ptr [edx + ebp + 0x14] }
	__asm { add eax, ecx }
	__asm { cmp eax, esi }
	__asm { cmova esi, eax }
	__asm { cmp esi, dword ptr [ebx + 0xc] }
	__asm { ja L_0071e3b3 }
	__asm { push ecx }
	__asm { push dword ptr [esp + 0x5c] }
	__asm { call dword ptr [g_00e1065c] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_0071e398 }
	__asm { push dword ptr [esp + 0x5c] }
	__asm { push 1 }
	__asm { push eax }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x64] }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { call fn_007296b0 }
	__asm { add esp, 0x18 }
	__asm { cmp eax, -1 }
	__asm { je L_0071e3c1 }
	__asm { push 1 }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add eax, ebp }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_0071e710 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jne L_0071e373 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { call fn_00729630 }
	__asm { mov edx, dword ptr [esp + 0x5c] }
	__asm { inc edx }
	__asm { add esp, 4 }
	__asm { add ebp, 0x40 }
	__asm { mov dword ptr [esp + 0x58], edx }
	__asm { cmp edx, dword ptr [ebx + 4] }
	__asm { jl L_0071e2c1 }
	__asm { L_0071e367: }
	__asm { sub esi, edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x40 }
	__asm { ret }
	__asm { L_0071e373: }
	__asm { push 0 }
	__asm { push 0x15 }
	__asm { push dword ptr [esp + 0x64] }
	__asm { call fn_0072a2c0 }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { call fn_00729630 }
	__asm { add esp, 0x10 }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x40 }
	__asm { ret }
	__asm { L_0071e398: }
	__asm { push 0 }
	__asm { push 4 }
	__asm { push dword ptr [esp + 0x64] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x40 }
	__asm { ret }
	__asm { L_0071e3b3: }
	__asm { push 0x13 }
	__asm { push dword ptr [esp + 0x64] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { L_0071e3c1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { add esp, 0x40 }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" char g_00e10530[];
extern "C" char g_00e10658[];
extern "C" char g_00e1065c[];
extern "C" char g_00e1067c[];
extern "C" char g_00e106b0[];
extern "C" char g_00e106b4[];
extern "C" void fn_0071e1a0();
extern "C" void fn_0071e290();
extern "C" void fn_0071e960();
extern "C" void fn_0071ea50();
extern "C" void fn_007293b0();
extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x0071e4a0
extern "C" __declspec(naked) void asm_0071e4a0()
{
	__asm { sub esp, 0x18 }
	__asm { mov ecx, 0x10016 }
	__asm { cmp dword ptr [esp + 0x28], ecx }
	__asm { push ebp }
	__asm { cmovl ecx, dword ptr [esp + 0x2c] }
	__asm { mov ebp, dword ptr [esp + 0x20] }
	__asm { push 2 }
	__asm { neg ecx }
	__asm { push ecx }
	__asm { push ebp }
	__asm { call dword ptr [g_00e1065c] }
	__asm { add esp, 0xc }
	__asm { cmp eax, -1 }
	__asm { jne L_0071e4ea }
	__asm { call dword ptr [g_00e1067c] }
	__asm { cmp dword ptr [eax], 0x1b }
	__asm { je L_0071e4ea }
	__asm { mov eax, dword ptr [esp + 0x28] }
	__asm { test eax, eax }
	__asm { je L_0071e4e3 }
	__asm { mov dword ptr [eax], 4 }
	__asm { L_0071e4e3: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { add esp, 0x18 }
	__asm { ret }
	__asm { L_0071e4ea: }
	__asm { push esi }
	__asm { push 0x10016 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { test esi, esi }
	__asm { jne L_0071e519 }
	__asm { mov eax, dword ptr [esp + 0x2c] }
	__asm { test eax, eax }
	__asm { je L_0071e511 }
	__asm { mov dword ptr [eax], 0xe }
	__asm { L_0071e511: }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { add esp, 0x18 }
	__asm { ret }
	__asm { L_0071e519: }
	__asm { push ebp }
	__asm { call dword ptr [g_00e106b0] }
	__asm { push ebp }
	__asm { push 0x10016 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10658] }
	__asm { push ebp }
	__asm { mov dword ptr [esp + 0x48], eax }
	__asm { call dword ptr [g_00e106b4] }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { je L_0071e561 }
	__asm { mov eax, dword ptr [esp + 0x2c] }
	__asm { test eax, eax }
	__asm { je L_0071e54f }
	__asm { mov dword ptr [eax], 5 }
	__asm { L_0071e54f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { add esp, 0x18 }
	__asm { ret }
	__asm { L_0071e561: }
	__asm { push ebx }
	__asm { push edi }
	__asm { xor ebx, ebx }
	__asm { push ebx }
	__asm { lea eax, [esp + 0x20] }
	__asm { push 0x13 }
	__asm { push eax }
	__asm { or edi, 0xffffffff }
	__asm { call fn_0072a2c0 }
	__asm { mov eax, dword ptr [esp + 0x44] }
	__asm { push 4 }
	__asm { push 0xe48250 }
	__asm { add eax, -0x12 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0071e960 }
	__asm { add esp, 0x1c }
	__asm { test eax, eax }
	__asm { je L_0071e64f }
	__asm { L_0071e595: }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { push ecx }
	__asm { push dword ptr [esp + 0x34] }
	__asm { inc eax }
	__asm { push dword ptr [esp + 0x40] }
	__asm { mov dword ptr [esp + 0x20], eax }
	__asm { dec eax }
	__asm { push eax }
	__asm { push esi }
	__asm { push ebp }
	__asm { call fn_0071ea50 }
	__asm { mov esi, eax }
	__asm { add esp, 0x18 }
	__asm { test esi, esi }
	__asm { je L_0071e623 }
	__asm { test ebx, ebx }
	__asm { je L_0071e605 }
	__asm { test edi, edi }
	__asm { jg L_0071e5d2 }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push ebp }
	__asm { call fn_0071e290 }
	__asm { add esp, 0xc }
	__asm { mov edi, eax }
	__asm { L_0071e5d2: }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { push esi }
	__asm { push ebp }
	__asm { call fn_0071e290 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { cmp edi, eax }
	__asm { jge L_0071e5fa }
	__asm { push ebx }
	__asm { call fn_007293b0 }
	__asm { mov edi, dword ptr [esp + 0x14] }
	__asm { add esp, 4 }
	__asm { mov ebx, esi }
	__asm { jmp L_0071e623 }
	__asm { L_0071e5fa: }
	__asm { push esi }
	__asm { call fn_007293b0 }
	__asm { add esp, 4 }
	__asm { jmp L_0071e623 }
	__asm { L_0071e605: }
	__asm { test byte ptr [esp + 0x30], 4 }
	__asm { mov ebx, esi }
	__asm { je L_0071e621 }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { push esi }
	__asm { push ebp }
	__asm { call fn_0071e290 }
	__asm { add esp, 0xc }
	__asm { mov edi, eax }
	__asm { jmp L_0071e623 }
	__asm { L_0071e621: }
	__asm { xor edi, edi }
	__asm { L_0071e623: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov eax, dword ptr [esp + 0x38] }
	__asm { mov esi, dword ptr [esp + 0x18] }
	__asm { sub eax, ecx }
	__asm { push 4 }
	__asm { add eax, -0x12 }
	__asm { push 0xe48250 }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_0071e960 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jne L_0071e595 }
	__asm { L_0071e64f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { jns L_0071e680 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x3c] }
	__asm { call fn_0071e1a0 }
	__asm { push ebx }
	__asm { call fn_007293b0 }
	__asm { add esp, 0x10 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { add esp, 0x18 }
	__asm { ret }
	__asm { L_0071e680: }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { add esp, 0x18 }
	__asm { ret }
}

extern "C" char g_00e10550[];
extern "C" char g_00e10658[];
extern "C" void fn_004038a0();
extern "C" void fn_004039a0();
extern "C" void fn_00412c00();
extern "C" void fn_006eb2a0();
extern "C" void fn_006f1600();
extern "C" void fn_006f1800();
extern "C" void fn_006f1820();
extern "C" void fn_0070b590();
extern "C" void fn_0070b780();
extern "C" void fn_0070c5e0();
extern "C" void fn_0070cb10();
extern "C" void fn_0071efa0();
extern "C" void fn_0071fcb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0071ed40
extern "C" __declspec(naked) void asm_0071ed40()
{
	__asm { push -1 }
	__asm { push 0xd19da0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x4c] }
	__asm { push edi }
	__asm { lea eax, [esp + 0x13] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, 0x11ddce4 }
	__asm { mov dword ptr [esp + 0x4c], 0 }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { call fn_006eb2a0 }
	__asm { mov ebx, dword ptr [esp + 0x4c] }
	__asm { mov byte ptr [eax + 0x18], 1 }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { mov dword ptr [esp + 0x44], 0 }
	__asm { mov dword ptr [esp + 0x14], 1 }
	__asm { call fn_0070b590 }
	__asm { mov dword ptr [esp + 0x38], 0xf }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x4c], 1 }
	__asm { call fn_0070b590 }
	__asm { mov ecx, eax }
	__asm { call fn_0070b780 }
	__asm { cmp dword ptr [esp + 0x38], 0x10 }
	__asm { mov byte ptr [esp + 0x13], al }
	__asm { mov byte ptr [esp + 0x44], 0 }
	__asm { jb L_0071edfd }
	__asm { push dword ptr [esp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { mov al, byte ptr [esp + 0x17] }
	__asm { add esp, 4 }
	__asm { L_0071edfd: }
	__asm { push esi }
	__asm { test al, al }
	__asm { jne L_0071eee2 }
	__asm { call fn_0070b590 }
	__asm { mov ecx, eax }
	__asm { call fn_0070c5e0 }
	__asm { mov ebp, eax }
	__asm { push 0x10 }
	__asm { lea eax, [ebp + 1] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x28], edx }
	__asm { call fn_006f1600 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov edi, eax }
	__asm { jb L_0071ee30 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_0071ee30: }
	__asm { push 0xe46c4c }
	__asm { push esi }
	__asm { call fn_0070b590 }
	__asm { mov ecx, eax }
	__asm { call fn_0070cb10 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { push ebp }
	__asm { push 1 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10658] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10550] }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [edi + ebp], 0 }
	__asm { cmp byte ptr [edi], 0 }
	__asm { mov dword ptr [esp + 0x38], 0xf }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { mov byte ptr [esp + 0x24], 0 }
	__asm { jne L_0071ee7b }
	__asm { xor ecx, ecx }
	__asm { jmp L_0071ee89 }
	__asm { L_0071ee7b: }
	__asm { mov ecx, edi }
	__asm { lea edx, [ecx + 1] }
	__asm { L_0071ee80: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0071ee80 }
	__asm { sub ecx, edx }
	__asm { L_0071ee89: }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea ecx, [esp + 0x2c] }
	__asm { call fn_004038a0 }
	__asm { lea eax, [esp + 0x24] }
	__asm { cmp ebx, eax }
	__asm { je L_0071eec9 }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_0071eeac }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071eeac: }
	__asm { lea eax, [esp + 0x24] }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebx], 0 }
	__asm { call fn_00412c00 }
	__asm { L_0071eec9: }
	__asm { cmp dword ptr [esp + 0x38], 0x10 }
	__asm { jb L_0071eedc }
	__asm { push dword ptr [esp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071eedc: }
	__asm { push edi }
	__asm { jmp L_0071ef79 }
	__asm { L_0071eee2: }
	__asm { call fn_0071fcb0 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_0071ef81 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0071efa0 }
	__asm { mov edi, dword ptr [esp + 0x24] }
	__asm { push 0x10 }
	__asm { lea esi, [edi + 1] }
	__asm { push esi }
	__asm { call fn_006f1600 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x34] }
	__asm { mov ebp, eax }
	__asm { push esi }
	__asm { push ebp }
	__asm { call fn_006f1820 }
	__asm { push esi }
	__asm { call fn_006f1800 }
	__asm { add esp, 0x24 }
	__asm { lea ecx, [esp + 0x24] }
	__asm { push ebp }
	__asm { mov byte ptr [edi + ebp], 0 }
	__asm { call fn_004039a0 }
	__asm { mov esi, eax }
	__asm { cmp ebx, esi }
	__asm { je L_0071ef65 }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_0071ef4c }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071ef4c: }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebx], 0 }
	__asm { call fn_00412c00 }
	__asm { L_0071ef65: }
	__asm { cmp dword ptr [esp + 0x38], 0x10 }
	__asm { jb L_0071ef78 }
	__asm { push dword ptr [esp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071ef78: }
	__asm { push ebp }
	__asm { L_0071ef79: }
	__asm { call fn_006f1800 }
	__asm { add esp, 4 }
	__asm { L_0071ef81: }
	__asm { mov ecx, dword ptr [esp + 0x3c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x38 }
	__asm { ret }
}

extern "C" char g_00e105fc[];
extern "C" char g_011dd418[];
extern "C" void fn_004028a0();
extern "C" void fn_004039a0();
extern "C" void fn_006d8660();
extern "C" void fn_006d86d0();
extern "C" void fn_006f1820();
extern "C" void fn_006f78c0();
extern "C" void fn_00701aa0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00725f40
extern "C" __declspec(naked) void asm_00725f40()
{
	__asm { push -1 }
	__asm { push 0xd1a479 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { xor ebx, ebx }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [esp + 0x10], ebx }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { cmp eax, 3 }
	__asm { jne L_0072601c }
	__asm { push dword ptr [edi + 0x14] }
	__asm { lea eax, [esp + 0x18] }
	__asm { push dword ptr [edi + 0x10] }
	__asm { push 0xe48730 }
	__asm { push eax }
	__asm { call fn_00701aa0 }
	__asm { add esp, 0x10 }
	__asm { mov esi, dword ptr [esp + 0x54] }
	__asm { cmp dword ptr [esp + 0x28], 0x10 }
	__asm { mov edx, dword ptr [esi + 0x34] }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [esp + 0x4c], ebx }
	__asm { mov ebx, dword ptr [esp + 0x24] }
	__asm { lea ebp, [esp + 0x14] }
	__asm { cmovae ebp, dword ptr [esp + 0x14] }
	__asm { add ecx, ebx }
	__asm { mov eax, edx }
	__asm { cmp eax, ecx }
	__asm { cmovge ecx, eax }
	__asm { mov dword ptr [esi + 0x34], ecx }
	__asm { cmp ecx, dword ptr [esi + 0x38] }
	__asm { jle L_00725fc2 }
	__asm { push edx }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_006f78c0 }
	__asm { L_00725fc2: }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { add eax, dword ptr [esi + 0x3c] }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push eax }
	__asm { call fn_006f1820 }
	__asm { add dword ptr [esi + 0x3c], ebx }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { imul eax, dword ptr [edi + 0x14] }
	__asm { mov ebx, dword ptr [edi + 8] }
	__asm { mov edx, dword ptr [esi + 0x34] }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { lea edi, [eax + eax*2] }
	__asm { add ecx, edi }
	__asm { mov eax, edx }
	__asm { add esp, 0xc }
	__asm { cmp eax, ecx }
	__asm { cmovge ecx, eax }
	__asm { mov dword ptr [esi + 0x34], ecx }
	__asm { cmp ecx, dword ptr [esi + 0x38] }
	__asm { jle L_00726003 }
	__asm { push edx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006f78c0 }
	__asm { L_00726003: }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { add eax, dword ptr [esi + 0x3c] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_006f1820 }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 0x3c], edi }
	__asm { jmp L_007260cd }
	__asm { L_0072601c: }
	__asm { cmp eax, 1 }
	__asm { jne L_007260f9 }
	__asm { push dword ptr [edi + 0x14] }
	__asm { lea eax, [esp + 0x18] }
	__asm { push dword ptr [edi + 0x10] }
	__asm { push 0xe48740 }
	__asm { push eax }
	__asm { call fn_00701aa0 }
	__asm { add esp, 0x10 }
	__asm { mov esi, dword ptr [esp + 0x54] }
	__asm { cmp dword ptr [esp + 0x28], 0x10 }
	__asm { mov edx, dword ptr [esi + 0x34] }
	__asm { mov ebx, dword ptr [esp + 0x24] }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { lea ebp, [esp + 0x14] }
	__asm { cmovae ebp, dword ptr [esp + 0x14] }
	__asm { add ecx, ebx }
	__asm { mov eax, edx }
	__asm { cmp eax, ecx }
	__asm { cmovge ecx, eax }
	__asm { mov dword ptr [esp + 0x4c], 1 }
	__asm { mov dword ptr [esi + 0x34], ecx }
	__asm { cmp ecx, dword ptr [esi + 0x38] }
	__asm { jle L_0072607b }
	__asm { push edx }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_006f78c0 }
	__asm { L_0072607b: }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { add eax, dword ptr [esi + 0x3c] }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push eax }
	__asm { call fn_006f1820 }
	__asm { add dword ptr [esi + 0x3c], ebx }
	__asm { mov ebx, dword ptr [edi + 0x10] }
	__asm { imul ebx, dword ptr [edi + 0x14] }
	__asm { mov edx, dword ptr [esi + 0x34] }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov ebp, dword ptr [edi + 8] }
	__asm { add ecx, ebx }
	__asm { mov eax, edx }
	__asm { add esp, 0xc }
	__asm { cmp eax, ecx }
	__asm { cmovge ecx, eax }
	__asm { mov dword ptr [esi + 0x34], ecx }
	__asm { cmp ecx, dword ptr [esi + 0x38] }
	__asm { jle L_007260b9 }
	__asm { push edx }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_006f78c0 }
	__asm { L_007260b9: }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { add eax, dword ptr [esi + 0x3c] }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push eax }
	__asm { call fn_006f1820 }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 0x3c], ebx }
	__asm { L_007260cd: }
	__asm { cmp dword ptr [esp + 0x28], 0x10 }
	__asm { jb L_00726177 }
	__asm { push dword ptr [esp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [esp + 0x34] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x40 }
	__asm { ret 4 }
	__asm { L_007260f9: }
	__asm { call fn_006d8660 }
	__asm { cmp dword ptr [g_011dd418], ebx }
	__asm { je L_00726148 }
	__asm { push 0xe48700 }
	__asm { lea ecx, [esp + 0x30] }
	__asm { call fn_004039a0 }
	__asm { mov ebx, 1 }
	__asm { push ebx }
	__asm { push 0x4a }
	__asm { push 0xe486b8 }
	__asm { lea eax, [esp + 0x38] }
	__asm { push eax }
	__asm { push 0xf14aa8 }
	__asm { mov dword ptr [esp + 0x60], 2 }
	__asm { mov dword ptr [esp + 0x24], ebx }
	__asm { call dword ptr [g_011dd418] }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [esp + 0x54], bl }
	__asm { test al, al }
	__asm { jne L_0072614d }
	__asm { L_00726148: }
	__asm { mov byte ptr [esp + 0x54], 0 }
	__asm { L_0072614d: }
	__asm { mov dword ptr [esp + 0x4c], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_00726163 }
	__asm { lea ecx, [esp + 0x2c] }
	__asm { call fn_004028a0 }
	__asm { L_00726163: }
	__asm { cmp byte ptr [esp + 0x54], 0 }
	__asm { je L_00726172 }
	__asm { push -1 }
	__asm { call dword ptr [g_00e105fc] }
	__asm { L_00726172: }
	__asm { call fn_006d86d0 }
	__asm { L_00726177: }
	__asm { mov ecx, dword ptr [esp + 0x44] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x40 }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_006e0020();
extern "C" void fn_006e9210();
extern "C" void fn_006ee850();
extern "C" void fn_006f0cd0();
extern "C" void fn_00726ce0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00726510
extern "C" __declspec(naked) void asm_00726510()
{
	__asm { push -1 }
	__asm { push 0xd1a514 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc4 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xd8] }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 2 }
	__asm { lea eax, [esp + 0x10] }
	__asm { mov edi, ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006e9210 }
	__asm { mov ax, word ptr [esp + 8] }
	__asm { cmp al, 0x50 }
	__asm { jne L_007266c9 }
	__asm { cmp ah, 0x36 }
	__asm { je L_00726561 }
	__asm { cmp ah, 0x35 }
	__asm { jne L_007266c9 }
	__asm { L_00726561: }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { call fn_00726ce0 }
	__asm { push esi }
	__asm { mov ebp, eax }
	__asm { call fn_00726ce0 }
	__asm { push esi }
	__asm { mov ebx, eax }
	__asm { call fn_00726ce0 }
	__asm { add esp, 0xc }
	__asm { test ebp, ebp }
	__asm { js L_007265ff }
	__asm { test ebx, ebx }
	__asm { js L_007265ff }
	__asm { cmp ebp, 0x186a0 }
	__asm { jg L_007265ff }
	__asm { cmp ebx, 0x186a0 }
	__asm { jg L_007265ff }
	__asm { mov ecx, esi }
	__asm { call fn_006e0020 }
	__asm { mov ax, word ptr [esp + 0x10] }
	__asm { cmp ah, 0x36 }
	__asm { jne L_007265e4 }
	__asm { push 1 }
	__asm { push 3 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { mov ecx, edi }
	__asm { call fn_006ee850 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { imul eax, dword ptr [edi + 0x10] }
	__asm { lea eax, [eax + eax*2] }
	__asm { L_007265bc: }
	__asm { cdq }
	__asm { push edx }
	__asm { push eax }
	__asm { push dword ptr [edi + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_006e9210 }
	__asm { L_007265c9: }
	__asm { mov ecx, dword ptr [esp + 0xd4] }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0xd0 }
	__asm { ret 4 }
	__asm { L_007265e4: }
	__asm { cmp ah, 0x35 }
	__asm { jne L_007265c9 }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { mov ecx, edi }
	__asm { call fn_006ee850 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { imul eax, dword ptr [edi + 0x10] }
	__asm { jmp L_007265bc }
	__asm { L_007265ff: }
	__asm { push 0x1b }
	__asm { push 0xe48770 }
	__asm { lea ecx, [esp + 0x34] }
	__asm { mov dword ptr [esp + 0x48], 0xf }
	__asm { mov dword ptr [esp + 0x44], 0 }
	__asm { mov byte ptr [esp + 0x34], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [esp + 0xa4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0xe0], 3 }
	__asm { call fn_006f0cd0 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x34] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x80] }
	__asm { mov byte ptr [esp + 0xe8], 4 }
	__asm { mov dword ptr [esp + 0x94], 0xf }
	__asm { mov dword ptr [esp + 0x90], 0 }
	__asm { mov byte ptr [esp + 0x80], 0 }
	__asm { call fn_00403540 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [esp + 0x98] }
	__asm { mov byte ptr [esp + 0xe8], 5 }
	__asm { mov dword ptr [esp + 0xac], 0xf }
	__asm { mov dword ptr [esp + 0xa8], 0 }
	__asm { mov byte ptr [esp + 0x98], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x1100400 }
	__asm { lea eax, [esp + 0x78] }
	__asm { push eax }
	__asm { mov byte ptr [esp + 0xe4], 4 }
	__asm { call fn_00cf67ec }
	__asm { L_007266c9: }
	__asm { push 0x13 }
	__asm { push 0xe48754 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x28], 0xf }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { mov byte ptr [esp + 0x14], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [esp + 0xb4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0xd8], 0 }
	__asm { call fn_006f0cd0 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x48] }
	__asm { mov byte ptr [esp + 0xe0], 1 }
	__asm { mov dword ptr [esp + 0x5c], 0xf }
	__asm { mov dword ptr [esp + 0x58], 0 }
	__asm { mov byte ptr [esp + 0x48], 0 }
	__asm { call fn_00403540 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [esp + 0x60] }
	__asm { mov byte ptr [esp + 0xe0], 2 }
	__asm { mov dword ptr [esp + 0x74], 0xf }
	__asm { mov dword ptr [esp + 0x70], 0 }
	__asm { mov byte ptr [esp + 0x60], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x1100400 }
	__asm { lea eax, [esp + 0x40] }
	__asm { push eax }
	__asm { mov byte ptr [esp + 0xdc], 1 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00728f90();
extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x00728a50
extern "C" __declspec(naked) void asm_00728a50()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { jne L_00728a5c }
	__asm { or eax, 0xffffffff }
	__asm { ret }
	__asm { L_00728a5c: }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { test edi, edi }
	__asm { js L_00728ba7 }
	__asm { cmp edi, dword ptr [esi + 0x28] }
	__asm { jge L_00728ba7 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x18] }
	__asm { push ebp }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00728f90 }
	__asm { mov ebp, eax }
	__asm { add esp, 0xc }
	__asm { test ebp, ebp }
	__asm { je L_00728ada }
	__asm { test bl, 8 }
	__asm { jne L_00728ae2 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { lea ecx, [edi + edi*4] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, 2 }
	__asm { je L_00728aac }
	__asm { cmp eax, 3 }
	__asm { jne L_00728ae2 }
	__asm { L_00728aac: }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov ebx, dword ptr [esp + 0x20] }
	__asm { push 3 }
	__asm { push 0x28 }
	__asm { push ebx }
	__asm { push dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jns L_00728b83 }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push 0xf }
	__asm { push eax }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { L_00728ada: }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00728ae2: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00728b8f }
	__asm { cmp edi, dword ptr [eax + 4] }
	__asm { jge L_00728b8f }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ebx, dword ptr [esp + 0x20] }
	__asm { mov edx, edi }
	__asm { shl edx, 6 }
	__asm { mov eax, dword ptr [edx + eax + 0x10] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + edx + 0x18] }
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx + edx + 8] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + edx + 0xc] }
	__asm { mov dword ptr [ebx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + edx + 0x14] }
	__asm { mov dword ptr [ebx + 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ax, word ptr [eax + edx + 6] }
	__asm { mov word ptr [ebx + 0x20], ax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { movzx eax, word ptr [eax + edx + 4] }
	__asm { test al, 1 }
	__asm { je L_00728b7d }
	__asm { test al, 0x40 }
	__asm { je L_00728b68 }
	__asm { mov eax, 0xffff }
	__asm { mov dword ptr [ebx], ebp }
	__asm { pop ebp }
	__asm { mov word ptr [ebx + 0x22], ax }
	__asm { mov dword ptr [ebx + 4], edi }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00728b68: }
	__asm { mov eax, 1 }
	__asm { mov dword ptr [ebx], ebp }
	__asm { pop ebp }
	__asm { mov word ptr [ebx + 0x22], ax }
	__asm { mov dword ptr [ebx + 4], edi }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00728b7d: }
	__asm { xor eax, eax }
	__asm { mov word ptr [ebx + 0x22], ax }
	__asm { L_00728b83: }
	__asm { mov dword ptr [ebx], ebp }
	__asm { pop ebp }
	__asm { mov dword ptr [ebx + 4], edi }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00728b8f: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push 0x12 }
	__asm { push eax }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00728ba7: }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { push 0x12 }
	__asm { push eax }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10554[];
extern "C" char g_00e1067c[];
extern "C" char g_00e106a8[];
extern "C" char g_00e106b4[];
extern "C" char g_00e106c8[];
extern "C" void fn_00729c40();
extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x007294a0
extern "C" __declspec(naked) void asm_007294a0()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0xc] }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { call dword ptr [g_00e106a8] }
	__asm { xor esi, esi }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp dword ptr [ebp + 4], esi }
	__asm { jle L_007294e8 }
	__asm { xor edi, edi }
	__asm { L_007294c2: }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { mov eax, dword ptr [ebp] }
	__asm { push 0 }
	__asm { add eax, edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00729c40 }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { jne L_00729616 }
	__asm { inc esi }
	__asm { add edi, 0x40 }
	__asm { cmp esi, dword ptr [ebp + 4] }
	__asm { jl L_007294c2 }
	__asm { L_007294e8: }
	__asm { push ebx }
	__asm { call dword ptr [g_00e106a8] }
	__asm { sub eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [g_00e10554] }
	__asm { push ebx }
	__asm { push 4 }
	__asm { push 1 }
	__asm { push 0xe48250 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call edi }
	__asm { mov esi, dword ptr [g_00e106c8] }
	__asm { push ebx }
	__asm { push 0 }
	__asm { call esi }
	__asm { push ebx }
	__asm { push 0 }
	__asm { call esi }
	__asm { push ebx }
	__asm { push 0 }
	__asm { call esi }
	__asm { push ebx }
	__asm { push 0 }
	__asm { call esi }
	__asm { movzx ebx, word ptr [ebp + 4] }
	__asm { push dword ptr [esp + 0x4c] }
	__asm { movzx eax, bl }
	__asm { push eax }
	__asm { call esi }
	__asm { push dword ptr [esp + 0x54] }
	__asm { shr ebx, 8 }
	__asm { push ebx }
	__asm { call esi }
	__asm { movzx ebx, word ptr [ebp + 4] }
	__asm { add esp, 0x44 }
	__asm { movzx eax, bl }
	__asm { push dword ptr [esp + 0x18] }
	__asm { push eax }
	__asm { call esi }
	__asm { push dword ptr [esp + 0x20] }
	__asm { shr ebx, 8 }
	__asm { push ebx }
	__asm { call esi }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push dword ptr [esp + 0x28] }
	__asm { movzx eax, bl }
	__asm { push eax }
	__asm { call esi }
	__asm { push dword ptr [esp + 0x30] }
	__asm { mov eax, ebx }
	__asm { shr eax, 8 }
	__asm { and eax, 0xff }
	__asm { push eax }
	__asm { call esi }
	__asm { push dword ptr [esp + 0x38] }
	__asm { mov eax, ebx }
	__asm { shr eax, 0x10 }
	__asm { and eax, 0xff }
	__asm { push eax }
	__asm { call esi }
	__asm { push dword ptr [esp + 0x40] }
	__asm { shr ebx, 0x18 }
	__asm { push ebx }
	__asm { call esi }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [esp + 0x48] }
	__asm { movzx eax, bl }
	__asm { push eax }
	__asm { call esi }
	__asm { push dword ptr [esp + 0x50] }
	__asm { mov eax, ebx }
	__asm { shr eax, 8 }
	__asm { and eax, 0xff }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 0x40 }
	__asm { mov eax, ebx }
	__asm { push dword ptr [esp + 0x18] }
	__asm { shr eax, 0x10 }
	__asm { and eax, 0xff }
	__asm { push eax }
	__asm { call esi }
	__asm { push dword ptr [esp + 0x20] }
	__asm { shr ebx, 0x18 }
	__asm { push ebx }
	__asm { call esi }
	__asm { movzx ebx, word ptr [ebp + 0x14] }
	__asm { push dword ptr [esp + 0x28] }
	__asm { movzx eax, bl }
	__asm { push eax }
	__asm { call esi }
	__asm { push dword ptr [esp + 0x30] }
	__asm { shr ebx, 8 }
	__asm { push ebx }
	__asm { call esi }
	__asm { movzx eax, word ptr [ebp + 0x14] }
	__asm { mov ebx, dword ptr [esp + 0x38] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call edi }
	__asm { push ebx }
	__asm { call dword ptr [g_00e106b4] }
	__asm { add esp, 0x34 }
	__asm { test eax, eax }
	__asm { je L_0072961e }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { push 6 }
	__asm { push dword ptr [esp + 0x24] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { L_00729616: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072961e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10554[];
extern "C" char g_00e10610[];
extern "C" char g_00e1067c[];
extern "C" char g_00e106b4[];
extern "C" char g_00e106c8[];
extern "C" void fn_0072a2c0();
// FUNCTION: ROBLOXSTUDIO 0x00729c40
extern "C" __declspec(naked) void asm_00729c40()
{
	__asm { sub esp, 8 }
	__asm { mov ecx, 0xe48b14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x18] }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x20] }
	__asm { push edi }
	__asm { push 4 }
	__asm { mov eax, 0xe48b0c }
	__asm { test ebx, ebx }
	__asm { cmove eax, ecx }
	__asm { push 1 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10554] }
	__asm { mov ebp, dword ptr [g_00e106c8] }
	__asm { mov esi, dword ptr [esp + 0x2c] }
	__asm { add esp, 0x10 }
	__asm { test ebx, ebx }
	__asm { jne L_00729c8f }
	__asm { movzx ebx, word ptr [esi] }
	__asm { movzx eax, bl }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 8 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { add esp, 0x10 }
	__asm { L_00729c8f: }
	__asm { movzx ebx, word ptr [esi + 2] }
	__asm { movzx eax, bl }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 8 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { movzx ebx, word ptr [esi + 4] }
	__asm { movzx eax, bl }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 8 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { movzx ebx, word ptr [esi + 6] }
	__asm { movzx eax, bl }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 8 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [esp + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esp + 0x44], eax }
	__asm { lea eax, [esp + 0x40] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10610] }
	__asm { movzx ecx, word ptr [eax + 0x14] }
	__asm { shl cx, 4 }
	__asm { add cx, word ptr [eax + 0x10] }
	__asm { mov edx, 0x301 }
	__asm { add cx, dx }
	__asm { shl cx, 5 }
	__asm { add cx, word ptr [eax + 0xc] }
	__asm { push edi }
	__asm { movzx esi, cx }
	__asm { movzx ecx, word ptr [eax + 8] }
	__asm { shl cx, 6 }
	__asm { add cx, word ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { sar eax, 1 }
	__asm { shl cx, 5 }
	__asm { add cx, ax }
	__asm { movzx ebx, cx }
	__asm { movzx eax, bl }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 8 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { add esp, 0x44 }
	__asm { mov ebx, esi }
	__asm { movzx eax, bl }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 8 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { mov esi, dword ptr [esp + 0x2c] }
	__asm { push edi }
	__asm { mov ebx, dword ptr [esi + 0x10] }
	__asm { movzx eax, bl }
	__asm { push eax }
	__asm { call ebp }
	__asm { mov eax, ebx }
	__asm { shr eax, 8 }
	__asm { and eax, 0xff }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { mov eax, ebx }
	__asm { shr eax, 0x10 }
	__asm { and eax, 0xff }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 0x18 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { mov ebx, dword ptr [esi + 0x14] }
	__asm { movzx eax, bl }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { mov eax, ebx }
	__asm { shr eax, 8 }
	__asm { and eax, 0xff }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { add esp, 0x40 }
	__asm { mov eax, ebx }
	__asm { shr eax, 0x10 }
	__asm { and eax, 0xff }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 0x18 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { mov ebx, dword ptr [esi + 0x18] }
	__asm { movzx eax, bl }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { mov eax, ebx }
	__asm { shr eax, 8 }
	__asm { and eax, 0xff }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { mov eax, ebx }
	__asm { shr eax, 0x10 }
	__asm { and eax, 0xff }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 0x18 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { movzx ebx, word ptr [esi + 0x20] }
	__asm { movzx eax, bl }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 8 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { movzx ebx, word ptr [esi + 0x28] }
	__asm { add esp, 0x40 }
	__asm { movzx eax, bl }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 8 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [esp + 0x24], 0 }
	__asm { jne L_00729e91 }
	__asm { movzx ebx, word ptr [esi + 0x30] }
	__asm { movzx eax, bl }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 8 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { movzx ebx, word ptr [esi + 0x32] }
	__asm { movzx eax, bl }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 8 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { movzx ebx, word ptr [esi + 0x34] }
	__asm { movzx eax, bl }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 8 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { mov ebx, dword ptr [esi + 0x38] }
	__asm { movzx eax, bl }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { mov eax, ebx }
	__asm { shr eax, 8 }
	__asm { and eax, 0xff }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { add esp, 0x40 }
	__asm { mov eax, ebx }
	__asm { shr eax, 0x10 }
	__asm { and eax, 0xff }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 0x18 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { mov ebx, dword ptr [esi + 0x3c] }
	__asm { movzx eax, bl }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { mov eax, ebx }
	__asm { shr eax, 8 }
	__asm { and eax, 0xff }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { mov eax, ebx }
	__asm { shr eax, 0x10 }
	__asm { and eax, 0xff }
	__asm { push edi }
	__asm { push eax }
	__asm { call ebp }
	__asm { push edi }
	__asm { shr ebx, 0x18 }
	__asm { push ebx }
	__asm { call ebp }
	__asm { add esp, 0x30 }
	__asm { L_00729e91: }
	__asm { movzx eax, word ptr [esi + 0x20] }
	__asm { mov ebx, dword ptr [g_00e10554] }
	__asm { test ax, ax }
	__asm { je L_00729eac }
	__asm { push edi }
	__asm { push eax }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call ebx }
	__asm { add esp, 0x10 }
	__asm { L_00729eac: }
	__asm { movzx eax, word ptr [esi + 0x28] }
	__asm { test ax, ax }
	__asm { je L_00729ec1 }
	__asm { push edi }
	__asm { push eax }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0x24] }
	__asm { call ebx }
	__asm { add esp, 0x10 }
	__asm { L_00729ec1: }
	__asm { cmp dword ptr [esp + 0x24], 0 }
	__asm { jne L_00729edd }
	__asm { movzx eax, word ptr [esi + 0x30] }
	__asm { test ax, ax }
	__asm { je L_00729edd }
	__asm { push edi }
	__asm { push eax }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call ebx }
	__asm { add esp, 0x10 }
	__asm { L_00729edd: }
	__asm { push edi }
	__asm { call dword ptr [g_00e106b4] }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_00729f0c }
	__asm { call dword ptr [g_00e1067c] }
	__asm { push dword ptr [eax] }
	__asm { push 6 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { or eax, 0xffffffff }
	__asm { add esp, 8 }
	__asm { ret }
	__asm { L_00729f0c: }
	__asm { xor eax, eax }
	__asm { add esp, 8 }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_0071ddf0();
extern "C" void fn_0072a220();
extern "C" void fn_0072a2c0();
extern "C" void fn_0072a6c0();
extern "C" void fn_0072a790();
extern "C" void fn_0073a390();
extern "C" void fn_00cff6c0();
// FUNCTION: ROBLOXSTUDIO 0x0072a4d0
extern "C" __declspec(naked) void asm_0072a4d0()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0xc] }
	__asm { test ebx, ebx }
	__asm { js L_0072a51c }
	__asm { cmp ebx, dword ptr [edi + 0x28] }
	__asm { jge L_0072a51c }
	__asm { mov edx, dword ptr [esp + 0x14] }
	__asm { test dl, 8 }
	__asm { jne L_0072a514 }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { lea ecx, [ebx + ebx*4] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { cmp eax, 2 }
	__asm { je L_0072a4ff }
	__asm { cmp eax, 3 }
	__asm { jne L_0072a514 }
	__asm { L_0072a4ff: }
	__asm { push 0 }
	__asm { lea eax, [edi + 8] }
	__asm { push 0xf }
	__asm { push eax }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072a514: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { cmp ebx, dword ptr [eax + 4] }
	__asm { jl L_0072a531 }
	__asm { L_0072a51c: }
	__asm { push 0 }
	__asm { lea eax, [edi + 8] }
	__asm { push 0x12 }
	__asm { push eax }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072a531: }
	__asm { mov eax, dword ptr [eax] }
	__asm { push ebp }
	__asm { mov ebp, ebx }
	__asm { shl ebp, 6 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { movzx eax, word ptr [eax + ebp + 6] }
	__asm { test eax, eax }
	__asm { je L_0072a579 }
	__asm { cmp eax, 8 }
	__asm { je L_0072a56a }
	__asm { test dl, 4 }
	__asm { jne L_0072a581 }
	__asm { push 0 }
	__asm { lea eax, [edi + 8] }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { call fn_0072a2c0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072a56a: }
	__asm { test dl, 4 }
	__asm { jne L_0072a581 }
	__asm { mov dword ptr [esp + 0x14], 6 }
	__asm { jmp L_0072a581 }
	__asm { L_0072a579: }
	__asm { mov dword ptr [esp + 0x14], 4 }
	__asm { L_0072a581: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0072a790 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { push ebx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push edi }
	__asm { movzx ecx, word ptr [ecx + ebp + 6] }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [ecx + ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { call fn_0073a390 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { test eax, eax }
	__asm { jne L_0072a5e3 }
	__asm { push esi }
	__asm { call fn_0071ddf0 }
	__asm { add esp, 4 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072a5e3: }
	__asm { test byte ptr [esi + 0x10], 2 }
	__asm { jne L_0072a5f6 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { L_0072a5ef: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072a5f6: }
	__asm { mov ebx, dword ptr [g_00e10530] }
	__asm { push 0x2000 }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { test eax, eax }
	__asm { je L_0072a64d }
	__asm { push esi }
	__asm { push 0x2000 }
	__asm { push eax }
	__asm { call fn_0072a6c0 }
	__asm { mov ebp, eax }
	__asm { add esp, 0xc }
	__asm { test ebp, ebp }
	__asm { jg L_0072a63f }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { call fn_0072a220 }
	__asm { push esi }
	__asm { call fn_0071ddf0 }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072a63f: }
	__asm { push 0x38 }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { test eax, eax }
	__asm { jne L_0072a66a }
	__asm { L_0072a64d: }
	__asm { push 0 }
	__asm { push 0xe }
	__asm { L_0072a651: }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { call fn_0072a2c0 }
	__asm { push esi }
	__asm { call fn_0071ddf0 }
	__asm { add esp, 0x10 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072a66a: }
	__asm { mov dword ptr [eax + 0x20], 0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { push 0x38 }
	__asm { mov dword ptr [eax + 0x24], 0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { push 0xe48230 }
	__asm { mov dword ptr [eax + 0x28], 0 }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { push -0xf }
	__asm { mov dword ptr [eax + 4], ebp }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00cff6c0 }
	__asm { test eax, eax }
	__asm { je L_0072a5ef }
	__asm { push eax }
	__asm { push 0xd }
	__asm { jmp L_0072a651 }
}

// FUNCTION: ROBLOXSTUDIO 0x0072b520
extern "C" __declspec(naked) void asm_0072b520()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { dec eax }
	__asm { je L_0072b688 }
	__asm { sub eax, 2 }
	__asm { je L_0072b5ac }
	__asm { dec eax }
	__asm { je L_0072b54a }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { jmp L_0072b696 }
	__asm { L_0072b54a: }
	__asm { cmp byte ptr [esi + 0x108], 0 }
	__asm { je L_0072b599 }
	__asm { movzx eax, byte ptr [esi + 0x109] }
	__asm { sub eax, 0 }
	__asm { je L_0072b599 }
	__asm { sub eax, 2 }
	__asm { je L_0072b586 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push -1 }
	__asm { mov dword ptr [eax + 0x14], 0x74 }
	__asm { movzx ecx, byte ptr [esi + 0x109] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0072b586: }
	__asm { mov dword ptr [esi + 0x28], 5 }
	__asm { mov dword ptr [esi + 0x2c], 4 }
	__asm { jmp L_0072b696 }
	__asm { L_0072b599: }
	__asm { mov dword ptr [esi + 0x28], 4 }
	__asm { mov dword ptr [esi + 0x2c], 4 }
	__asm { jmp L_0072b696 }
	__asm { L_0072b5ac: }
	__asm { cmp byte ptr [esi + 0x100], 0 }
	__asm { jne L_0072b5ef }
	__asm { cmp byte ptr [esi + 0x108], 0 }
	__asm { je L_0072b615 }
	__asm { movzx eax, byte ptr [esi + 0x109] }
	__asm { sub eax, 0 }
	__asm { je L_0072b602 }
	__asm { dec eax }
	__asm { je L_0072b5ef }
	__asm { mov eax, dword ptr [esi] }
	__asm { push -1 }
	__asm { mov dword ptr [eax + 0x14], 0x74 }
	__asm { movzx ecx, byte ptr [esi + 0x109] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0072b5ef: }
	__asm { mov dword ptr [esi + 0x28], 3 }
	__asm { mov dword ptr [esi + 0x2c], 2 }
	__asm { jmp L_0072b696 }
	__asm { L_0072b602: }
	__asm { mov dword ptr [esi + 0x28], 2 }
	__asm { mov dword ptr [esi + 0x2c], 2 }
	__asm { jmp L_0072b696 }
	__asm { L_0072b615: }
	__asm { mov eax, dword ptr [esi + 0xc4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 0x58] }
	__asm { mov edx, dword ptr [eax + 0xb0] }
	__asm { cmp edi, 1 }
	__asm { jne L_0072b668 }
	__asm { cmp ecx, 2 }
	__asm { jne L_0072b636 }
	__asm { cmp edx, 3 }
	__asm { je L_0072b657 }
	__asm { L_0072b636: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov dword ptr [eax + 0x18], edi }
	__asm { mov dword ptr [eax + 0x1c], ecx }
	__asm { mov dword ptr [eax + 0x20], edx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x71 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0072b657: }
	__asm { mov dword ptr [esi + 0x28], 3 }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x2c], 2 }
	__asm { jmp L_0072b696 }
	__asm { L_0072b668: }
	__asm { cmp edi, 0x52 }
	__asm { jne L_0072b636 }
	__asm { cmp ecx, 0x47 }
	__asm { jne L_0072b636 }
	__asm { cmp edx, 0x42 }
	__asm { jne L_0072b636 }
	__asm { mov dword ptr [esi + 0x28], 2 }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x2c], 2 }
	__asm { jmp L_0072b696 }
	__asm { L_0072b688: }
	__asm { mov dword ptr [esi + 0x28], 1 }
	__asm { mov dword ptr [esi + 0x2c], 1 }
	__asm { L_0072b696: }
	__asm { fld1 }
	__asm { mov dword ptr [esi + 0x30], 8 }
	__asm { fstp qword ptr [esi + 0x38] }
	__asm { mov dword ptr [esi + 0x34], 8 }
	__asm { mov word ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov word ptr [esi + 0x48], 0x101 }
	__asm { mov byte ptr [esi + 0x4a], 0 }
	__asm { mov dword ptr [esi + 0x4c], 2 }
	__asm { mov byte ptr [esi + 0x50], 1 }
	__asm { mov dword ptr [esi + 0x54], 0x100 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov word ptr [esi + 0x58], 0 }
	__asm { mov byte ptr [esi + 0x5a], 0 }
	__asm { pop esi }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x0072d2a0
extern "C" __declspec(naked) void asm_0072d2a0()
{
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x18] }
	__asm { push edi }
	__asm { mov ebx, dword ptr [esi + 0x18] }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov ebp, dword ptr [ebx] }
	__asm { test edi, edi }
	__asm { jne L_0072d2d3 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0072d2ce }
	__asm { L_0072d2c4: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret }
	__asm { L_0072d2ce: }
	__asm { mov ebp, dword ptr [ebx] }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { L_0072d2d3: }
	__asm { movzx ecx, byte ptr [ebp] }
	__asm { shl ecx, 8 }
	__asm { inc ebp }
	__asm { mov dword ptr [esp + 0x1c], ecx }
	__asm { dec edi }
	__asm { jne L_0072d2f8 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_0072d2c4 }
	__asm { mov ebp, dword ptr [ebx] }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { L_0072d2f8: }
	__asm { movzx eax, byte ptr [ebp] }
	__asm { sub ecx, 2 }
	__asm { add ecx, eax }
	__asm { dec edi }
	__asm { inc ebp }
	__asm { mov dword ptr [esp + 0x1c], ecx }
	__asm { test ecx, ecx }
	__asm { jle L_0072d3f8 }
	__asm { nop }
	__asm { L_0072d310: }
	__asm { test edi, edi }
	__asm { jne L_0072d326 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_0072d2c4 }
	__asm { mov ebp, dword ptr [ebx] }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { L_0072d326: }
	__asm { movzx eax, byte ptr [ebp] }
	__asm { inc ebp }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { dec edi }
	__asm { jne L_0072d344 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_0072d2c4 }
	__asm { mov ebp, dword ptr [ebx] }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { L_0072d344: }
	__asm { mov eax, dword ptr [esi] }
	__asm { movzx edx, byte ptr [ebp] }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { sub dword ptr [esp + 0x1c], 2 }
	__asm { mov dword ptr [eax + 0x14], 0x51 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x1c], edx }
	__asm { mov eax, dword ptr [esi] }
	__asm { dec edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esp + 0x1c], edx }
	__asm { inc ebp }
	__asm { call eax }
	__asm { mov edx, dword ptr [esp + 0x18] }
	__asm { add esp, 8 }
	__asm { test edx, edx }
	__asm { js L_0072d384 }
	__asm { cmp edx, 0x20 }
	__asm { jl L_0072d3a0 }
	__asm { L_0072d384: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x1d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 0x18], edx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov edx, dword ptr [esp + 0x14] }
	__asm { add esp, 4 }
	__asm { L_0072d3a0: }
	__asm { cmp edx, 0x10 }
	__asm { jl L_0072d3b2 }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov byte ptr [edx + esi + 0xda], cl }
	__asm { jmp L_0072d3ec }
	__asm { L_0072d3b2: }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { mov cl, al }
	__asm { and cl, 0xf }
	__asm { sar eax, 4 }
	__asm { mov byte ptr [edx + esi + 0xca], cl }
	__asm { mov byte ptr [edx + esi + 0xda], al }
	__asm { cmp cl, al }
	__asm { jbe L_0072d3ec }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [eax + 0x14], 0x1e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072d3ec: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { test ecx, ecx }
	__asm { jg L_0072d310 }
	__asm { L_0072d3f8: }
	__asm { je L_0072d40d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0xc }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072d40d: }
	__asm { mov dword ptr [ebx + 4], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx], ebp }
	__asm { pop ebp }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0072d990
extern "C" __declspec(naked) void asm_0072d990()
{
	__asm { push ebx }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov ebx, dword ptr [esi] }
	__asm { test edi, edi }
	__asm { jne L_0072d9bd }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push ebp }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0072d9b8 }
	__asm { L_0072d9b1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072d9b8: }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { L_0072d9bd: }
	__asm { movzx ecx, byte ptr [ebx] }
	__asm { shl ecx, 8 }
	__asm { inc ebx }
	__asm { mov dword ptr [esp + 0x14], ecx }
	__asm { dec edi }
	__asm { jne L_0072d9e1 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push ebp }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_0072d9b1 }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { L_0072d9e1: }
	__asm { movzx eax, byte ptr [ebx] }
	__asm { add ecx, eax }
	__asm { dec edi }
	__asm { inc ebx }
	__asm { cmp ecx, 4 }
	__asm { je L_0072da02 }
	__asm { mov eax, dword ptr [ebp] }
	__asm { push ebp }
	__asm { mov dword ptr [eax + 0x14], 0xc }
	__asm { mov eax, dword ptr [ebp] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072da02: }
	__asm { test edi, edi }
	__asm { jne L_0072da18 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push ebp }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_0072d9b1 }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { L_0072da18: }
	__asm { movzx ecx, byte ptr [ebx] }
	__asm { shl ecx, 8 }
	__asm { inc ebx }
	__asm { mov dword ptr [esp + 0x14], ecx }
	__asm { dec edi }
	__asm { jne L_0072da40 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push ebp }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_0072d9b1 }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { L_0072da40: }
	__asm { movzx eax, byte ptr [ebx] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [ebp] }
	__asm { push 1 }
	__asm { mov dword ptr [eax + 0x14], 0x54 }
	__asm { mov eax, dword ptr [ebp] }
	__asm { push ebp }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { mov eax, dword ptr [ebp] }
	__asm { mov dword ptr [esp + 0x1c], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [ebp + 0xfc], eax }
	__asm { add esp, 8 }
	__asm { lea eax, [ebx + 1] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [edi - 1] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0072da90
extern "C" __declspec(naked) void asm_0072da90()
{
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x14] }
	__asm { add ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { cmp ecx, 0xe }
	__asm { jb L_0072dc1a }
	__asm { cmp byte ptr [esi], 0x4a }
	__asm { jne L_0072dc1a }
	__asm { cmp byte ptr [esi + 1], 0x46 }
	__asm { jne L_0072dc1a }
	__asm { cmp byte ptr [esi + 2], 0x49 }
	__asm { jne L_0072dc1a }
	__asm { cmp byte ptr [esi + 3], 0x46 }
	__asm { jne L_0072dc1a }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { jne L_0072dc1a }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { mov edx, 0x100 }
	__asm { mov byte ptr [edi + 0x100], 1 }
	__asm { movzx eax, byte ptr [esi + 5] }
	__asm { mov byte ptr [edi + 0x101], al }
	__asm { movzx eax, byte ptr [esi + 6] }
	__asm { mov byte ptr [edi + 0x102], al }
	__asm { movzx eax, byte ptr [esi + 7] }
	__asm { mov byte ptr [edi + 0x103], al }
	__asm { movzx ecx, byte ptr [esi + 8] }
	__asm { movzx eax, byte ptr [esi + 9] }
	__asm { imul cx, dx }
	__asm { add cx, ax }
	__asm { mov word ptr [edi + 0x104], cx }
	__asm { movzx ecx, byte ptr [esi + 0xa] }
	__asm { movzx eax, byte ptr [esi + 0xb] }
	__asm { imul cx, dx }
	__asm { add cx, ax }
	__asm { cmp byte ptr [edi + 0x101], 1 }
	__asm { mov word ptr [edi + 0x106], cx }
	__asm { je L_0072db6c }
	__asm { mov eax, dword ptr [edi] }
	__asm { push -1 }
	__asm { mov dword ptr [eax + 0x14], 0x7a }
	__asm { movzx ecx, byte ptr [edi + 0x101] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push edi }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { movzx ecx, byte ptr [edi + 0x102] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax + 0x1c], ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0072db6c: }
	__asm { movzx eax, byte ptr [edi + 0x101] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { movzx eax, byte ptr [edi + 0x102] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { movzx eax, word ptr [edi + 0x104] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { movzx eax, word ptr [edi + 0x106] }
	__asm { mov dword ptr [ecx + 0x24], eax }
	__asm { movzx eax, byte ptr [edi + 0x103] }
	__asm { mov dword ptr [ecx + 0x28], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push edi }
	__asm { mov dword ptr [eax + 0x14], 0x59 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { mov al, byte ptr [esi + 0xc] }
	__asm { add esp, 8 }
	__asm { or al, byte ptr [esi + 0xd] }
	__asm { je L_0072dbe6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov dword ptr [eax + 0x14], 0x5c }
	__asm { movzx ecx, byte ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push edi }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { movzx ecx, byte ptr [esi + 0xd] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax + 0x1c], ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0072dbe6: }
	__asm { movzx eax, byte ptr [esi + 0xd] }
	__asm { movzx ecx, byte ptr [esi + 0xc] }
	__asm { imul ecx, eax }
	__asm { sub ebx, 0xe }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { cmp ebx, eax }
	__asm { je L_0072dc16 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov dword ptr [eax + 0x14], 0x5a }
	__asm { mov eax, dword ptr [edi] }
	__asm { push edi }
	__asm { mov dword ptr [eax + 0x18], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0072dc16: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072dc1a: }
	__asm { cmp ecx, 6 }
	__asm { jb L_0072dccc }
	__asm { cmp byte ptr [esi], 0x4a }
	__asm { jne L_0072dccc }
	__asm { cmp byte ptr [esi + 1], 0x46 }
	__asm { jne L_0072dccc }
	__asm { cmp byte ptr [esi + 2], 0x58 }
	__asm { jne L_0072dccc }
	__asm { cmp byte ptr [esi + 3], 0x58 }
	__asm { jne L_0072dccc }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { jne L_0072dccc }
	__asm { movzx eax, byte ptr [esi + 5] }
	__asm { sub eax, 0x10 }
	__asm { je L_0072dcaa }
	__asm { dec eax }
	__asm { je L_0072dc9b }
	__asm { push 1 }
	__asm { sub eax, 2 }
	__asm { je L_0072dc8c }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { push edx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax + 0x14], 0x5b }
	__asm { movzx ecx, byte ptr [esi + 5] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax + 0x18], ecx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax + 0x1c], ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072dc8c: }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [eax + 0x14], 0x70 }
	__asm { jmp L_0072dcb9 }
	__asm { L_0072dc9b: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [eax + 0x14], 0x6f }
	__asm { jmp L_0072dcb7 }
	__asm { L_0072dcaa: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [eax + 0x14], 0x6e }
	__asm { L_0072dcb7: }
	__asm { push 1 }
	__asm { L_0072dcb9: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { mov dword ptr [eax + 0x18], ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0072dccc: }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [eax + 0x14], 0x4f }
	__asm { jmp L_0072dcb7 }
}

extern "C" char g_00e105b0[];
extern "C" char g_00e106d8[];
extern "C" void fn_00727730();
extern "C" void fn_00731580();
extern "C" void fn_00737780();
extern "C" void fn_00739930();
extern "C" void fn_00739970();
extern "C" void fn_00739a00();
extern "C" void fn_00739b00();
extern "C" void fn_00739b20();
extern "C" void fn_00739bf0();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_00cf6a94();
// FUNCTION: ROBLOXSTUDIO 0x007300b0
extern "C" __declspec(naked) void asm_007300b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x58 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push 1 }
	__asm { call fn_00739b20 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { je L_00730128 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0 }
	__asm { mov dword ptr [eax + 0x264], 0xf4240 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 0x268], 0xf4240 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00cf6a94 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { je L_00730130 }
	__asm { push dword ptr [eax + 0xac] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00739a00 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 0xac], 0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00739b00 }
	__asm { add esp, 0xc }
	__asm { L_00730128: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00730130: }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_00739930 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00739bf0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 0x20 }
	__asm { test edi, edi }
	__asm { je L_00730194 }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { L_00730160: }
	__asm { push 0 }
	__asm { call fn_00727730 }
	__asm { mov cl, byte ptr [esi + edi] }
	__asm { add esp, 4 }
	__asm { cmp cl, byte ptr [eax + esi] }
	__asm { je L_0073017f }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { or dword ptr [eax + 0x6c], 0x20000 }
	__asm { L_0073017f: }
	__asm { push 0 }
	__asm { call fn_00727730 }
	__asm { mov al, byte ptr [eax + esi] }
	__asm { inc esi }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { test al, al }
	__asm { jne L_00730160 }
	__asm { L_00730194: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test dword ptr [eax + 0x6c], 0x20000 }
	__asm { je L_0073023f }
	__asm { test edi, edi }
	__asm { je L_007301dc }
	__asm { push 0 }
	__asm { call fn_00727730 }
	__asm { mov cl, byte ptr [edi] }
	__asm { add esp, 4 }
	__asm { cmp cl, byte ptr [eax] }
	__asm { jne L_007301da }
	__asm { cmp cl, 0x31 }
	__asm { jne L_007301cf }
	__asm { push 0 }
	__asm { call fn_00727730 }
	__asm { mov cl, byte ptr [edi + 2] }
	__asm { add esp, 4 }
	__asm { cmp cl, byte ptr [eax + 2] }
	__asm { jne L_007301da }
	__asm { L_007301cf: }
	__asm { cmp byte ptr [edi], 0x30 }
	__asm { jne L_0073023f }
	__asm { cmp byte ptr [edi + 2], 0x39 }
	__asm { jge L_0073023f }
	__asm { L_007301da: }
	__asm { test edi, edi }
	__asm { L_007301dc: }
	__asm { mov esi, dword ptr [g_00e105b0] }
	__asm { je L_00730202 }
	__asm { push edi }
	__asm { push 0xe4a3ec }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push 0x50 }
	__asm { push eax }
	__asm { call esi }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00739e30 }
	__asm { add esp, 0x18 }
	__asm { L_00730202: }
	__asm { push 0 }
	__asm { call fn_00727730 }
	__asm { push eax }
	__asm { push 0xe4a424 }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push 0x50 }
	__asm { push eax }
	__asm { call esi }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00739e30 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0xe4a45c }
	__asm { mov dword ptr [eax + 0x6c], 0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00739c20 }
	__asm { add esp, 0x24 }
	__asm { L_0073023f: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax + 0xb0], 0x2000 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push dword ptr [eax + 0xb0] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00739970 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0xac], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00737780 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00731580 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf6a94 }
	__asm { add esp, 0x34 }
	__asm { test eax, eax }
	__asm { je L_0073029f }
	__asm { call dword ptr [g_00e106d8] }
	__asm { L_0073029f: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007330b0
extern "C" __declspec(naked) void asm_007330b0()
{
	__asm { mov edx, dword ptr [esp + 4] }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx + 0x70] }
	__asm { test esi, 0x1000 }
	__asm { je L_00733110 }
	__asm { mov al, byte ptr [ecx + 0x19] }
	__asm { cmp al, 3 }
	__asm { jne L_007330e9 }
	__asm { cmp word ptr [edx + 0x11a], 0 }
	__asm { je L_007330e3 }
	__asm { test esi, 0x2000000 }
	__asm { je L_007330e3 }
	__asm { mov byte ptr [ecx + 0x19], 6 }
	__asm { jmp L_00733106 }
	__asm { L_007330e3: }
	__asm { mov byte ptr [ecx + 0x19], 2 }
	__asm { jmp L_00733106 }
	__asm { L_007330e9: }
	__asm { cmp word ptr [edx + 0x11a], 0 }
	__asm { je L_00733100 }
	__asm { test esi, 0x2000000 }
	__asm { je L_00733100 }
	__asm { or al, 4 }
	__asm { mov byte ptr [ecx + 0x19], al }
	__asm { L_00733100: }
	__asm { cmp byte ptr [ecx + 0x18], 8 }
	__asm { jae L_0073310a }
	__asm { L_00733106: }
	__asm { mov byte ptr [ecx + 0x18], 8 }
	__asm { L_0073310a: }
	__asm { xor eax, eax }
	__asm { mov word ptr [ecx + 0x16], ax }
	__asm { L_00733110: }
	__asm { test byte ptr [edx + 0x70], 0x80 }
	__asm { pop esi }
	__asm { je L_0073313e }
	__asm { and byte ptr [ecx + 0x19], 0xfb }
	__asm { xor eax, eax }
	__asm { mov word ptr [ecx + 0x16], ax }
	__asm { mov eax, dword ptr [edx + 0x138] }
	__asm { mov dword ptr [ecx + 0x5a], eax }
	__asm { mov eax, dword ptr [edx + 0x13c] }
	__asm { mov dword ptr [ecx + 0x5e], eax }
	__asm { mov ax, word ptr [edx + 0x140] }
	__asm { mov word ptr [ecx + 0x62], ax }
	__asm { L_0073313e: }
	__asm { test dword ptr [edx + 0x70], 0x2000 }
	__asm { je L_0073315c }
	__asm { fld dword ptr [edx + 0x15c] }
	__asm { fstp dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [edx + 0x234] }
	__asm { mov dword ptr [ecx + 0xfc], eax }
	__asm { L_0073315c: }
	__asm { test dword ptr [edx + 0x70], 0x400 }
	__asm { je L_0073316f }
	__asm { cmp byte ptr [ecx + 0x18], 0x10 }
	__asm { jne L_0073316f }
	__asm { mov byte ptr [ecx + 0x18], 8 }
	__asm { L_0073316f: }
	__asm { test dword ptr [edx + 0x70], 0x4000 }
	__asm { je L_0073317c }
	__asm { or byte ptr [ecx + 0x19], 2 }
	__asm { L_0073317c: }
	__asm { test dword ptr [edx + 0x70], 0x600000 }
	__asm { je L_00733189 }
	__asm { and byte ptr [ecx + 0x19], 0xfd }
	__asm { L_00733189: }
	__asm { test byte ptr [edx + 0x70], 0x40 }
	__asm { je L_007331ad }
	__asm { mov al, byte ptr [ecx + 0x19] }
	__asm { cmp al, 2 }
	__asm { je L_0073319a }
	__asm { cmp al, 6 }
	__asm { jne L_007331ad }
	__asm { L_0073319a: }
	__asm { cmp dword ptr [edx + 0x1ec], 0 }
	__asm { je L_007331ad }
	__asm { cmp byte ptr [ecx + 0x18], 8 }
	__asm { jne L_007331ad }
	__asm { mov byte ptr [ecx + 0x19], 3 }
	__asm { L_007331ad: }
	__asm { test byte ptr [edx + 0x70], 4 }
	__asm { je L_007331bd }
	__asm { cmp byte ptr [ecx + 0x18], 8 }
	__asm { jae L_007331bd }
	__asm { mov byte ptr [ecx + 0x18], 8 }
	__asm { L_007331bd: }
	__asm { mov al, byte ptr [ecx + 0x19] }
	__asm { cmp al, 3 }
	__asm { je L_007331ce }
	__asm { test al, 2 }
	__asm { je L_007331ce }
	__asm { mov byte ptr [ecx + 0x1d], 3 }
	__asm { jmp L_007331d2 }
	__asm { L_007331ce: }
	__asm { mov byte ptr [ecx + 0x1d], 1 }
	__asm { L_007331d2: }
	__asm { test dword ptr [edx + 0x6c], 0x400000 }
	__asm { je L_007331e0 }
	__asm { and al, 0xfb }
	__asm { mov byte ptr [ecx + 0x19], al }
	__asm { L_007331e0: }
	__asm { mov al, byte ptr [ecx + 0x19] }
	__asm { test al, 4 }
	__asm { je L_007331ea }
	__asm { inc byte ptr [ecx + 0x1d] }
	__asm { L_007331ea: }
	__asm { test dword ptr [edx + 0x70], 0x8000 }
	__asm { je L_0073320c }
	__asm { cmp al, 2 }
	__asm { je L_007331fb }
	__asm { test al, al }
	__asm { jne L_0073320c }
	__asm { L_007331fb: }
	__asm { inc byte ptr [ecx + 0x1d] }
	__asm { test dword ptr [edx + 0x70], 0x1000000 }
	__asm { je L_0073320c }
	__asm { or al, 4 }
	__asm { mov byte ptr [ecx + 0x19], al }
	__asm { L_0073320c: }
	__asm { test dword ptr [edx + 0x70], 0x100000 }
	__asm { je L_0073322b }
	__asm { mov al, byte ptr [edx + 0x64] }
	__asm { cmp byte ptr [ecx + 0x18], al }
	__asm { jae L_00733220 }
	__asm { mov byte ptr [ecx + 0x18], al }
	__asm { L_00733220: }
	__asm { mov al, byte ptr [edx + 0x65] }
	__asm { cmp byte ptr [ecx + 0x1d], al }
	__asm { jae L_0073322b }
	__asm { mov byte ptr [ecx + 0x1d], al }
	__asm { L_0073322b: }
	__asm { mov al, byte ptr [ecx + 0x18] }
	__asm { imul byte ptr [ecx + 0x1d] }
	__asm { mov byte ptr [ecx + 0x1e], al }
	__asm { cmp al, 8 }
	__asm { movzx eax, al }
	__asm { jb L_00733245 }
	__asm { shr eax, 3 }
	__asm { imul eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { ret }
	__asm { L_00733245: }
	__asm { imul eax, dword ptr [ecx] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00733f50
extern "C" __declspec(naked) void asm_00733f50()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 8] }
	__asm { mov al, byte ptr [ebx + 9] }
	__asm { cmp al, 8 }
	__asm { jae L_0073405f }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx] }
	__asm { movzx eax, al }
	__asm { push esi }
	__asm { push edi }
	__asm { dec eax }
	__asm { je L_00734005 }
	__asm { dec eax }
	__asm { je L_00733fc3 }
	__asm { sub eax, 2 }
	__asm { jne L_00734045 }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { lea ecx, [ebp - 1] }
	__asm { mov esi, ecx }
	__asm { and ecx, 1 }
	__asm { mov edx, 1 }
	__asm { shr esi, 1 }
	__asm { sub edx, ecx }
	__asm { lea edi, [eax - 1] }
	__asm { add esi, eax }
	__asm { add edi, ebp }
	__asm { shl edx, 2 }
	__asm { test ebp, ebp }
	__asm { je L_00734045 }
	__asm { mov ebx, ebp }
	__asm { L_00733fa4: }
	__asm { mov al, byte ptr [esi] }
	__asm { mov cl, dl }
	__asm { shr al, cl }
	__asm { and al, 0xf }
	__asm { mov byte ptr [edi], al }
	__asm { cmp edx, 4 }
	__asm { jne L_00733fb8 }
	__asm { xor edx, edx }
	__asm { dec esi }
	__asm { jmp L_00733fbd }
	__asm { L_00733fb8: }
	__asm { mov edx, 4 }
	__asm { L_00733fbd: }
	__asm { dec edi }
	__asm { dec ebx }
	__asm { jne L_00733fa4 }
	__asm { jmp L_00734041 }
	__asm { L_00733fc3: }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { lea ecx, [ebp - 1] }
	__asm { mov esi, ecx }
	__asm { and ecx, 3 }
	__asm { mov edx, 3 }
	__asm { shr esi, 2 }
	__asm { sub edx, ecx }
	__asm { lea edi, [eax - 1] }
	__asm { add esi, eax }
	__asm { add edi, ebp }
	__asm { add edx, edx }
	__asm { test ebp, ebp }
	__asm { je L_00734045 }
	__asm { mov ebx, ebp }
	__asm { L_00733fe8: }
	__asm { mov al, byte ptr [esi] }
	__asm { mov cl, dl }
	__asm { shr al, cl }
	__asm { and al, 3 }
	__asm { mov byte ptr [edi], al }
	__asm { cmp edx, 6 }
	__asm { jne L_00733ffc }
	__asm { xor edx, edx }
	__asm { dec esi }
	__asm { jmp L_00733fff }
	__asm { L_00733ffc: }
	__asm { add edx, 2 }
	__asm { L_00733fff: }
	__asm { dec edi }
	__asm { dec ebx }
	__asm { jne L_00733fe8 }
	__asm { jmp L_00734041 }
	__asm { L_00734005: }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { lea ecx, [ebp - 1] }
	__asm { mov esi, ecx }
	__asm { shr esi, 3 }
	__asm { and ecx, 7 }
	__asm { lea edi, [eax - 1] }
	__asm { mov edx, 7 }
	__asm { add esi, eax }
	__asm { add edi, ebp }
	__asm { sub edx, ecx }
	__asm { test ebp, ebp }
	__asm { je L_00734045 }
	__asm { mov ebx, ebp }
	__asm { L_00734028: }
	__asm { mov al, byte ptr [esi] }
	__asm { mov cl, dl }
	__asm { shr al, cl }
	__asm { and al, 1 }
	__asm { mov byte ptr [edi], al }
	__asm { cmp edx, 7 }
	__asm { jne L_0073403c }
	__asm { xor edx, edx }
	__asm { dec esi }
	__asm { jmp L_0073403d }
	__asm { L_0073403c: }
	__asm { inc edx }
	__asm { L_0073403d: }
	__asm { dec edi }
	__asm { dec ebx }
	__asm { jne L_00734028 }
	__asm { L_00734041: }
	__asm { mov ebx, dword ptr [esp + 0x14] }
	__asm { L_00734045: }
	__asm { mov al, byte ptr [ebx + 0xa] }
	__asm { shl al, 3 }
	__asm { mov byte ptr [ebx + 0xb], al }
	__asm { movzx eax, byte ptr [ebx + 0xa] }
	__asm { imul eax, ebp }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ebx + 9], 8 }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebp }
	__asm { L_0073405f: }
	__asm { pop ebx }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00735910
extern "C" __declspec(naked) void asm_00735910()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { cmp byte ptr [edi + 8], 3 }
	__asm { mov esi, dword ptr [edi] }
	__asm { jne L_00735b16 }
	__asm { mov al, byte ptr [edi + 9] }
	__asm { push ebx }
	__asm { push ebp }
	__asm { cmp al, 8 }
	__asm { jae L_00735a1b }
	__asm { movzx eax, al }
	__asm { dec eax }
	__asm { je L_007359ce }
	__asm { dec eax }
	__asm { je L_00735989 }
	__asm { sub eax, 2 }
	__asm { jne L_00735a10 }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { lea ebx, [esi - 1] }
	__asm { mov edx, esi }
	__asm { shr ebx, 1 }
	__asm { and edx, 1 }
	__asm { lea ebp, [ecx - 1] }
	__asm { add ebx, ecx }
	__asm { add ebp, esi }
	__asm { shl edx, 2 }
	__asm { test esi, esi }
	__asm { je L_00735a10 }
	__asm { mov edi, esi }
	__asm { L_00735968: }
	__asm { mov al, byte ptr [ebx] }
	__asm { mov cl, dl }
	__asm { shr al, cl }
	__asm { and al, 0xf }
	__asm { mov byte ptr [ebp], al }
	__asm { cmp edx, 4 }
	__asm { jne L_0073597d }
	__asm { xor edx, edx }
	__asm { dec ebx }
	__asm { jmp L_00735980 }
	__asm { L_0073597d: }
	__asm { add edx, 4 }
	__asm { L_00735980: }
	__asm { dec ebp }
	__asm { dec edi }
	__asm { jne L_00735968 }
	__asm { jmp L_00735a0c }
	__asm { L_00735989: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { lea eax, [esi - 1] }
	__asm { and eax, 3 }
	__asm { lea ebx, [esi - 1] }
	__asm { mov edx, 3 }
	__asm { shr ebx, 2 }
	__asm { sub edx, eax }
	__asm { lea ebp, [ecx - 1] }
	__asm { add ebx, ecx }
	__asm { add ebp, esi }
	__asm { add edx, edx }
	__asm { test esi, esi }
	__asm { je L_00735a10 }
	__asm { mov edi, esi }
	__asm { nop }
	__asm { L_007359b0: }
	__asm { mov al, byte ptr [ebx] }
	__asm { mov cl, dl }
	__asm { shr al, cl }
	__asm { and al, 3 }
	__asm { mov byte ptr [ebp], al }
	__asm { cmp edx, 6 }
	__asm { jne L_007359c5 }
	__asm { xor edx, edx }
	__asm { dec ebx }
	__asm { jmp L_007359c8 }
	__asm { L_007359c5: }
	__asm { add edx, 2 }
	__asm { L_007359c8: }
	__asm { dec ebp }
	__asm { dec edi }
	__asm { jne L_007359b0 }
	__asm { jmp L_00735a0c }
	__asm { L_007359ce: }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { lea ebx, [esi - 1] }
	__asm { shr ebx, 3 }
	__asm { add ebx, eax }
	__asm { lea ebp, [eax - 1] }
	__asm { lea eax, [esi - 1] }
	__asm { and eax, 7 }
	__asm { mov edx, 7 }
	__asm { add ebp, esi }
	__asm { sub edx, eax }
	__asm { test esi, esi }
	__asm { je L_00735a10 }
	__asm { mov edi, esi }
	__asm { L_007359f2: }
	__asm { mov al, byte ptr [ebx] }
	__asm { mov cl, dl }
	__asm { shr al, cl }
	__asm { and al, 1 }
	__asm { mov byte ptr [ebp], al }
	__asm { cmp edx, 7 }
	__asm { jne L_00735a07 }
	__asm { xor edx, edx }
	__asm { dec ebx }
	__asm { jmp L_00735a08 }
	__asm { L_00735a07: }
	__asm { inc edx }
	__asm { L_00735a08: }
	__asm { dec ebp }
	__asm { dec edi }
	__asm { jne L_007359f2 }
	__asm { L_00735a0c: }
	__asm { mov edi, dword ptr [esp + 0x18] }
	__asm { L_00735a10: }
	__asm { mov byte ptr [edi + 9], 8 }
	__asm { mov byte ptr [edi + 0xb], 8 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { L_00735a1b: }
	__asm { cmp byte ptr [edi + 9], 8 }
	__asm { jne L_00735b14 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov ebp, dword ptr [esp + 0x24] }
	__asm { lea ebx, [eax - 1] }
	__asm { add ebx, esi }
	__asm { lea edx, [eax - 1] }
	__asm { test ebp, ebp }
	__asm { je L_00735aad }
	__asm { lea ecx, [esi*4] }
	__asm { add edx, ecx }
	__asm { mov dword ptr [esp + 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00735a9d }
	__asm { mov edi, dword ptr [esp + 0x20] }
	__asm { mov edi, edi }
	__asm { L_00735a50: }
	__asm { movzx eax, byte ptr [ebx] }
	__asm { cmp eax, dword ptr [esp + 0x28] }
	__asm { jl L_00735a5e }
	__asm { mov byte ptr [edx], 0xff }
	__asm { jmp L_00735a63 }
	__asm { L_00735a5e: }
	__asm { mov al, byte ptr [eax + ebp] }
	__asm { mov byte ptr [edx], al }
	__asm { L_00735a63: }
	__asm { movzx ecx, byte ptr [ebx] }
	__asm { dec edx }
	__asm { lea eax, [edi + ecx*2] }
	__asm { sub edx, 3 }
	__asm { movzx eax, byte ptr [ecx + eax + 2] }
	__asm { mov byte ptr [edx + 3], al }
	__asm { movzx ecx, byte ptr [ebx] }
	__asm { dec ebx }
	__asm { lea eax, [edi + ecx*2] }
	__asm { movzx eax, byte ptr [ecx + eax + 1] }
	__asm { mov byte ptr [edx + 2], al }
	__asm { movzx ecx, byte ptr [ebx + 1] }
	__asm { lea eax, [edi + ecx*2] }
	__asm { movzx eax, byte ptr [ecx + eax] }
	__asm { mov byte ptr [edx + 1], al }
	__asm { dec esi }
	__asm { jne L_00735a50 }
	__asm { mov edi, dword ptr [esp + 0x18] }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { L_00735a9d: }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { mov dword ptr [edi + 8], 0x20040806 }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_00735aad: }
	__asm { lea ecx, [esi + esi*2] }
	__asm { add edx, ecx }
	__asm { mov dword ptr [esp + 0x18], ecx }
	__asm { test esi, esi }
	__asm { je L_00735b0a }
	__asm { mov ebp, dword ptr [esp + 0x20] }
	__asm { mov edi, edi }
	__asm { L_00735ac0: }
	__asm { movzx ecx, byte ptr [ebx] }
	__asm { lea edx, [edx - 3] }
	__asm { lea eax, [ecx*2] }
	__asm { add eax, ebp }
	__asm { lea ebx, [ebx - 1] }
	__asm { movzx eax, byte ptr [ecx + eax + 2] }
	__asm { mov byte ptr [edx + 3], al }
	__asm { movzx ecx, byte ptr [ebx + 1] }
	__asm { lea eax, [ecx*2] }
	__asm { add eax, ebp }
	__asm { movzx eax, byte ptr [ecx + eax + 1] }
	__asm { mov byte ptr [edx + 2], al }
	__asm { movzx ecx, byte ptr [ebx + 1] }
	__asm { lea eax, [ecx*2] }
	__asm { add eax, ebp }
	__asm { movzx eax, byte ptr [ecx + eax] }
	__asm { mov byte ptr [edx + 1], al }
	__asm { dec esi }
	__asm { jne L_00735ac0 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { L_00735b0a: }
	__asm { mov dword ptr [edi + 8], 0x18030802 }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { L_00735b14: }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { L_00735b16: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e105b0[];
extern "C" void fn_00733260();
extern "C" void fn_00733520();
extern "C" void fn_00733640();
extern "C" void fn_007336f0();
extern "C" void fn_00733dc0();
extern "C" void fn_00733f50();
extern "C" void fn_00734070();
extern "C" void fn_00734270();
extern "C" void fn_007342c0();
extern "C" void fn_00734430();
extern "C" void fn_00735520();
extern "C" void fn_00735910();
extern "C" void fn_00735b20();
extern "C" void fn_00737360();
extern "C" void fn_007375a0();
extern "C" void fn_007375e0();
extern "C" void fn_00737630();
extern "C" void fn_007376b0();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
// FUNCTION: ROBLOXSTUDIO 0x00735f00
extern "C" __declspec(naked) void asm_00735f00()
{
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x3c] }
	__asm { cmp dword ptr [esi + 0xec], 0 }
	__asm { jne L_00735f3f }
	__asm { movzx eax, byte ptr [esi + 0x124] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0xe4] }
	__asm { lea eax, [esp + 0xc] }
	__asm { push 0xe4ab8c }
	__asm { push 0x32 }
	__asm { push eax }
	__asm { call dword ptr [g_00e105b0] }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 0x1c }
	__asm { L_00735f3f: }
	__asm { test byte ptr [esi + 0x6c], 0x40 }
	__asm { jne L_00735f53 }
	__asm { push 0xe4abb4 }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_00735f53: }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { test eax, 0x1000 }
	__asm { je L_00735fc6 }
	__asm { cmp byte ptr [esi + 0x108], 3 }
	__asm { jne L_00735f93 }
	__asm { movzx eax, word ptr [esi + 0x11a] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x188] }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { push dword ptr [esi + 0x114] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00735910 }
	__asm { add esp, 0x14 }
	__asm { jmp L_00735fc6 }
	__asm { L_00735f93: }
	__asm { cmp word ptr [esi + 0x11a], 0 }
	__asm { je L_00735fad }
	__asm { test eax, 0x2000000 }
	__asm { je L_00735fad }
	__asm { lea eax, [esi + 0x18c] }
	__asm { push eax }
	__asm { jmp L_00735faf }
	__asm { L_00735fad: }
	__asm { push 0 }
	__asm { L_00735faf: }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00735b20 }
	__asm { add esp, 0xc }
	__asm { L_00735fc6: }
	__asm { mov eax, dword ptr [esi + 0x6c] }
	__asm { and eax, 0x400000 }
	__asm { je L_00735fed }
	__asm { or eax, 0x80 }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00737360 }
	__asm { add esp, 0xc }
	__asm { L_00735fed: }
	__asm { test dword ptr [esi + 0x70], 0x600000 }
	__asm { je L_00736053 }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007336f0 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_00736053 }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { and eax, 0x600000 }
	__asm { mov byte ptr [esi + 0x228], 1 }
	__asm { cmp eax, 0x400000 }
	__asm { jne L_00736036 }
	__asm { push 0xe4abc8 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { L_00736036: }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { and eax, 0x600000 }
	__asm { cmp eax, 0x200000 }
	__asm { jne L_00736053 }
	__asm { push 0xe4abc8 }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_00736053: }
	__asm { test dword ptr [esi + 0x70], 0x4000 }
	__asm { je L_0073607c }
	__asm { test dword ptr [esi + 0x68], 0x800 }
	__asm { jne L_0073607c }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00733dc0 }
	__asm { add esp, 8 }
	__asm { L_0073607c: }
	__asm { test byte ptr [esi + 0x70], 0x80 }
	__asm { je L_007360eb }
	__asm { cmp word ptr [esi + 0x11a], 0 }
	__asm { jne L_00736095 }
	__asm { test byte ptr [esi + 0x126], 4 }
	__asm { je L_007360eb }
	__asm { L_00736095: }
	__asm { push dword ptr [esi + 0x158] }
	__asm { lea eax, [esi + 0x142] }
	__asm { push dword ptr [esi + 0x178] }
	__asm { push dword ptr [esi + 0x174] }
	__asm { push dword ptr [esi + 0x170] }
	__asm { push dword ptr [esi + 0x16c] }
	__asm { push dword ptr [esi + 0x168] }
	__asm { push dword ptr [esi + 0x164] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x138] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x18c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00734430 }
	__asm { add esp, 0x30 }
	__asm { L_007360eb: }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { test eax, 0x2000 }
	__asm { je L_0073613e }
	__asm { test al, al }
	__asm { jns L_0073610c }
	__asm { cmp word ptr [esi + 0x11a], 0 }
	__asm { jne L_0073613e }
	__asm { test byte ptr [esi + 0x126], 4 }
	__asm { jne L_0073613e }
	__asm { L_0073610c: }
	__asm { cmp byte ptr [esi + 0x126], 3 }
	__asm { je L_0073613e }
	__asm { push dword ptr [esi + 0x158] }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { push dword ptr [esi + 0x170] }
	__asm { inc eax }
	__asm { push dword ptr [esi + 0x164] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00735520 }
	__asm { add esp, 0x14 }
	__asm { L_0073613e: }
	__asm { test dword ptr [esi + 0x70], 0x400 }
	__asm { je L_0073615e }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00734270 }
	__asm { add esp, 8 }
	__asm { L_0073615e: }
	__asm { test byte ptr [esi + 0x70], 0x40 }
	__asm { je L_0073619e }
	__asm { push dword ptr [esi + 0x1f0] }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { push dword ptr [esi + 0x1ec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_007342c0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [esi + 0x104], 0 }
	__asm { jne L_0073619e }
	__asm { push 0xe4abf0 }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_0073619e: }
	__asm { test byte ptr [esi + 0x70], 0x20 }
	__asm { je L_007361bb }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00737630 }
	__asm { add esp, 8 }
	__asm { L_007361bb: }
	__asm { test byte ptr [esi + 0x70], 8 }
	__asm { je L_007361df }
	__asm { lea eax, [esi + 0x181] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00734070 }
	__asm { add esp, 0xc }
	__asm { L_007361df: }
	__asm { test byte ptr [esi + 0x70], 4 }
	__asm { je L_007361fc }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00733f50 }
	__asm { add esp, 8 }
	__asm { L_007361fc: }
	__asm { test byte ptr [esi + 0x70], 1 }
	__asm { je L_00736219 }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_007376b0 }
	__asm { add esp, 8 }
	__asm { L_00736219: }
	__asm { test dword ptr [esi + 0x70], 0x10000 }
	__asm { je L_00736239 }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_007375e0 }
	__asm { add esp, 8 }
	__asm { L_00736239: }
	__asm { test dword ptr [esi + 0x70], 0x4000 }
	__asm { je L_00736262 }
	__asm { test dword ptr [esi + 0x68], 0x800 }
	__asm { je L_00736262 }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00733dc0 }
	__asm { add esp, 8 }
	__asm { L_00736262: }
	__asm { test dword ptr [esi + 0x70], 0x8000 }
	__asm { je L_0073628d }
	__asm { push dword ptr [esi + 0x6c] }
	__asm { movzx eax, word ptr [esi + 0x12e] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00733260 }
	__asm { add esp, 0x10 }
	__asm { L_0073628d: }
	__asm { test dword ptr [esi + 0x70], 0x80000 }
	__asm { je L_007362ad }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00733640 }
	__asm { add esp, 8 }
	__asm { L_007362ad: }
	__asm { test dword ptr [esi + 0x70], 0x20000 }
	__asm { je L_007362cd }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00733520 }
	__asm { add esp, 8 }
	__asm { L_007362cd: }
	__asm { test byte ptr [esi + 0x70], 0x10 }
	__asm { je L_007362ea }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_007375a0 }
	__asm { add esp, 8 }
	__asm { L_007362ea: }
	__asm { test dword ptr [esi + 0x70], 0x100000 }
	__asm { je L_0073636a }
	__asm { mov ecx, dword ptr [esi + 0x58] }
	__asm { test ecx, ecx }
	__asm { je L_0073630f }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { push esi }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { L_0073630f: }
	__asm { mov al, byte ptr [esi + 0x64] }
	__asm { test al, al }
	__asm { je L_0073631c }
	__asm { mov byte ptr [esi + 0x109], al }
	__asm { L_0073631c: }
	__asm { mov al, byte ptr [esi + 0x65] }
	__asm { test al, al }
	__asm { je L_00736329 }
	__asm { mov byte ptr [esi + 0x10a], al }
	__asm { L_00736329: }
	__asm { mov al, byte ptr [esi + 0x10a] }
	__asm { imul byte ptr [esi + 0x109] }
	__asm { mov byte ptr [esi + 0x10b], al }
	__asm { cmp al, 8 }
	__asm { movzx eax, al }
	__asm { jb L_00736357 }
	__asm { shr eax, 3 }
	__asm { imul eax, dword ptr [esi + 0x100] }
	__asm { mov dword ptr [esi + 0x104], eax }
	__asm { pop esi }
	__asm { add esp, 0x34 }
	__asm { ret }
	__asm { L_00736357: }
	__asm { imul eax, dword ptr [esi + 0x100] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { mov dword ptr [esi + 0x104], eax }
	__asm { L_0073636a: }
	__asm { pop esi }
	__asm { add esp, 0x34 }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10644[];
extern "C" char g_00e106d4[];
// FUNCTION: ROBLOXSTUDIO 0x00739e30
extern "C" __declspec(naked) void asm_00739e30()
{
	__asm { mov edx, dword ptr [esp + 4] }
	__asm { mov ecx, dword ptr [esp + 8] }
	__asm { sub esp, 0x1c }
	__asm { xor eax, eax }
	__asm { push esi }
	__asm { test edx, edx }
	__asm { je L_00739e82 }
	__asm { test dword ptr [edx + 0x6c], 0xc0000 }
	__asm { je L_00739e6d }
	__asm { cmp byte ptr [ecx], 0x23 }
	__asm { jne L_00739e6d }
	__asm { mov eax, 1 }
	__asm { L_00739e55: }
	__asm { cmp byte ptr [eax + ecx], 0x20 }
	__asm { je L_00739e6d }
	__asm { cmp byte ptr [eax + ecx + 1], 0x20 }
	__asm { je L_00739e6c }
	__asm { add eax, 2 }
	__asm { cmp eax, 0xf }
	__asm { jl L_00739e55 }
	__asm { jmp L_00739e6d }
	__asm { L_00739e6c: }
	__asm { inc eax }
	__asm { L_00739e6d: }
	__asm { mov esi, dword ptr [edx + 0x44] }
	__asm { test esi, esi }
	__asm { je L_00739e82 }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push edx }
	__asm { call esi }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { add esp, 0x1c }
	__asm { ret }
	__asm { L_00739e82: }
	__asm { cmp byte ptr [eax + ecx], 0x23 }
	__asm { lea edx, [eax + ecx] }
	__asm { push edi }
	__asm { jne L_00739f60 }
	__asm { lea eax, [esp + 0x16] }
	__asm { sub eax, edx }
	__asm { mov dword ptr [esp + 8], eax }
	__asm { lea eax, [esp + 0x17] }
	__asm { sub eax, edx }
	__asm { push ebx }
	__asm { push ebp }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { lea edi, [esp + 0x1c] }
	__asm { lea ebp, [esp + 0x1d] }
	__asm { sub edi, edx }
	__asm { lea eax, [esp + 0x20] }
	__asm { xor ecx, ecx }
	__asm { sub ebp, edx }
	__asm { sub eax, edx }
	__asm { mov dword ptr [esp + 0x30], edi }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { L_00739ec2: }
	__asm { cmp byte ptr [edx + ecx], 0x20 }
	__asm { mov al, byte ptr [edx + ecx + 1] }
	__asm { lea esi, [edx + ecx] }
	__asm { mov byte ptr [edi + esi], al }
	__asm { je L_00739f2a }
	__asm { mov bl, byte ptr [edx + ecx + 2] }
	__asm { mov byte ptr [esi + ebp], bl }
	__asm { cmp al, 0x20 }
	__asm { je L_00739f29 }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { mov al, byte ptr [edx + ecx + 3] }
	__asm { mov byte ptr [edi + esi], al }
	__asm { cmp bl, 0x20 }
	__asm { je L_00739f24 }
	__asm { mov edi, dword ptr [esp + 0x14] }
	__asm { mov bl, byte ptr [edx + ecx + 4] }
	__asm { mov byte ptr [edi + esi], bl }
	__asm { cmp al, 0x20 }
	__asm { je L_00739f1f }
	__asm { mov edi, dword ptr [esp + 0x18] }
	__asm { mov al, byte ptr [edx + ecx + 5] }
	__asm { mov byte ptr [edi + esi], al }
	__asm { mov edi, dword ptr [esp + 0x30] }
	__asm { cmp bl, 0x20 }
	__asm { je L_00739f1a }
	__asm { add ecx, 5 }
	__asm { cmp ecx, 0xf }
	__asm { jl L_00739ec2 }
	__asm { jmp L_00739f2a }
	__asm { L_00739f1a: }
	__asm { add ecx, 4 }
	__asm { jmp L_00739f2a }
	__asm { L_00739f1f: }
	__asm { add ecx, 3 }
	__asm { jmp L_00739f2a }
	__asm { L_00739f24: }
	__asm { add ecx, 2 }
	__asm { jmp L_00739f2a }
	__asm { L_00739f29: }
	__asm { inc ecx }
	__asm { L_00739f2a: }
	__asm { mov edi, dword ptr [g_00e106d4] }
	__asm { lea eax, [ecx - 2] }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { cmp eax, 0xc }
	__asm { ja L_00739f66 }
	__asm { lea eax, [edx + ecx] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { push 0xe4b5f0 }
	__asm { mov byte ptr [esp + ecx + 0x21], 0 }
	__asm { call edi }
	__asm { mov esi, dword ptr [g_00e10644] }
	__asm { add eax, 0x40 }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 0x10 }
	__asm { jmp L_00739f7d }
	__asm { L_00739f60: }
	__asm { mov edi, dword ptr [g_00e106d4] }
	__asm { L_00739f66: }
	__asm { push edx }
	__asm { push 0xe4b60c }
	__asm { call edi }
	__asm { mov esi, dword ptr [g_00e10644] }
	__asm { add eax, 0x40 }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 0xc }
	__asm { L_00739f7d: }
	__asm { push 0x1004e20 }
	__asm { call edi }
	__asm { add eax, 0x40 }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x1c }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0073a260
extern "C" __declspec(naked) void asm_0073a260()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { push edi }
	__asm { xor eax, eax }
	__asm { xor edi, edi }
	__asm { nop }
	__asm { L_0073a270: }
	__asm { movzx edx, byte ptr [ebx + edi + 0x11c] }
	__asm { inc edi }
	__asm { lea ecx, [edx - 0x41] }
	__asm { cmp ecx, 0x39 }
	__asm { ja L_0073a291 }
	__asm { cmp edx, 0x5a }
	__asm { jle L_0073a28b }
	__asm { cmp edx, 0x61 }
	__asm { jl L_0073a291 }
	__asm { L_0073a28b: }
	__asm { mov byte ptr [eax + esi], dl }
	__asm { inc eax }
	__asm { jmp L_0073a2be }
	__asm { L_0073a291: }
	__asm { mov ecx, edx }
	__asm { sar ecx, 4 }
	__asm { mov byte ptr [eax + esi], 0x5b }
	__asm { and ecx, 0xf }
	__asm { and edx, 0xf }
	__asm { movzx ecx, byte ptr [ecx + 0xe4b598] }
	__asm { mov byte ptr [eax + esi + 1], cl }
	__asm { movzx ecx, byte ptr [edx + 0xe4b598] }
	__asm { mov byte ptr [eax + esi + 2], cl }
	__asm { mov byte ptr [eax + esi + 3], 0x5d }
	__asm { add eax, 4 }
	__asm { L_0073a2be: }
	__asm { cmp edi, 4 }
	__asm { jl L_0073a270 }
	__asm { mov edx, dword ptr [esp + 0x18] }
	__asm { test edx, edx }
	__asm { jne L_0073a2d2 }
	__asm { pop edi }
	__asm { mov byte ptr [eax + esi], dl }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0073a2d2: }
	__asm { mov byte ptr [eax + esi], 0x3a }
	__asm { mov byte ptr [eax + esi + 1], 0x20 }
	__asm { inc eax }
	__asm { inc esi }
	__asm { add eax, esi }
	__asm { mov ecx, 0x10 }
	__asm { mov esi, edx }
	__asm { mov edi, eax }
	__asm { rep movsd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 0x3f], 0 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_0073a570();
extern "C" void fn_0073a5e0();
// FUNCTION: ROBLOXSTUDIO 0x0073ac80
extern "C" __declspec(naked) void asm_0073ac80()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push edi }
	__asm { push dword ptr [esp + 0x14] }
	__asm { push esi }
	__asm { call fn_0073a570 }
	__asm { mov eax, dword ptr [esi + 0x4c] }
	__asm { lea eax, [eax + eax*2] }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0073a5e0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [esi + 0x44], 0xffff }
	__asm { jg L_0073acb6 }
	__asm { cmp dword ptr [esi + 0x40], 0xffff }
	__asm { jle L_0073acd2 }
	__asm { L_0073acb6: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x2a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 0x18], 0xffff }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073acd2: }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov al, byte ptr [esi + 0x48] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov byte ptr [ecx], al }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073ad03 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073ad03 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073ad03: }
	__asm { push dword ptr [esi + 0x44] }
	__asm { push esi }
	__asm { call fn_0073a5e0 }
	__asm { push dword ptr [esi + 0x40] }
	__asm { push esi }
	__asm { call fn_0073a5e0 }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov al, byte ptr [esi + 0x4c] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { add esp, 0x10 }
	__asm { mov byte ptr [ecx], al }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073ad49 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073ad49 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073ad49: }
	__asm { mov edi, dword ptr [esi + 0x54] }
	__asm { xor ebx, ebx }
	__asm { cmp dword ptr [esi + 0x4c], ebx }
	__asm { jle L_0073adfc }
	__asm { L_0073ad57: }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov al, byte ptr [edi] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov byte ptr [ecx], al }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073ad87 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073ad87 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073ad87: }
	__asm { mov cl, byte ptr [edi + 8] }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { shl cl, 4 }
	__asm { add cl, byte ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov byte ptr [eax], cl }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073adbe }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073adbe }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073adbe: }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov al, byte ptr [edi + 0x10] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov byte ptr [ecx], al }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073adef }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073adef }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073adef: }
	__asm { inc ebx }
	__asm { add edi, 0x58 }
	__asm { cmp ebx, dword ptr [esi + 0x4c] }
	__asm { jl L_0073ad57 }
	__asm { L_0073adfc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push 0xda }
	__asm { push esi }
	__asm { call fn_0073a570 }
	__asm { mov eax, dword ptr [esi + 0x110] }
	__asm { lea eax, [eax*2 + 6] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0073a5e0 }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov al, byte ptr [esi + 0x110] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { add esp, 0x10 }
	__asm { mov byte ptr [ecx], al }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073ae5b }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073ae5b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073ae5b: }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { cmp dword ptr [esi + 0x110], ebx }
	__asm { jle L_0073af16 }
	__asm { push ebp }
	__asm { push edi }
	__asm { lea ebp, [esi + 0x114] }
	__asm { L_0073ae72: }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov edi, dword ptr [ebp] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov al, byte ptr [edi] }
	__asm { mov byte ptr [ecx], al }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073aea5 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073aea5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073aea5: }
	__asm { cmp byte ptr [esi + 0xf8], 0 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { je L_0073aed1 }
	__asm { cmp dword ptr [esi + 0x158], 0 }
	__asm { jne L_0073aecf }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [esi + 0x160], eax }
	__asm { je L_0073aed1 }
	__asm { cmp byte ptr [esi + 0xd1], al }
	__asm { jne L_0073aed1 }
	__asm { L_0073aecf: }
	__asm { xor ecx, ecx }
	__asm { L_0073aed1: }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { shl cl, 4 }
	__asm { add cl, al }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov byte ptr [eax], cl }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073af04 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073af04 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073af04: }
	__asm { inc ebx }
	__asm { add ebp, 4 }
	__asm { cmp ebx, dword ptr [esi + 0x110] }
	__asm { jl L_0073ae72 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { L_0073af16: }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov al, byte ptr [esi + 0x158] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { pop ebx }
	__asm { mov byte ptr [ecx], al }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073af4b }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073af4b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073af4b: }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov al, byte ptr [esi + 0x15c] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov byte ptr [ecx], al }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073af7f }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073af7f }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073af7f: }
	__asm { mov cl, byte ptr [esi + 0x160] }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { shl cl, 4 }
	__asm { add cl, byte ptr [esi + 0x164] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov byte ptr [eax], cl }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073afbc }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073afbc }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073afbc: }
	__asm { pop esi }
	__asm { ret }
}

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0073a570();
extern "C" void fn_0073a5e0();
// FUNCTION: ROBLOXSTUDIO 0x0073afc0
extern "C" __declspec(naked) void asm_0073afc0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { push 0xe0 }
	__asm { push esi }
	__asm { call fn_0073a570 }
	__asm { push 0x10 }
	__asm { push esi }
	__asm { call fn_0073a5e0 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { add esp, 0x10 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [eax], 0x4a }
	__asm { inc dword ptr [ecx] }
	__asm { dec dword ptr [ecx + 4] }
	__asm { jne L_0073b00a }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073b00a }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073b00a: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [eax], 0x46 }
	__asm { inc dword ptr [ecx] }
	__asm { dec dword ptr [ecx + 4] }
	__asm { jne L_0073b039 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073b039 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073b039: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [eax], 0x49 }
	__asm { inc dword ptr [ecx] }
	__asm { dec dword ptr [ecx + 4] }
	__asm { jne L_0073b068 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073b068 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073b068: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [eax], 0x46 }
	__asm { inc dword ptr [ecx] }
	__asm { dec dword ptr [ecx + 4] }
	__asm { jne L_0073b097 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073b097 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073b097: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [eax], 0 }
	__asm { inc dword ptr [ecx] }
	__asm { dec dword ptr [ecx + 4] }
	__asm { jne L_0073b0c6 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073b0c6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073b0c6: }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov al, byte ptr [esi + 0xe9] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov byte ptr [ecx], al }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073b0fa }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073b0fa }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073b0fa: }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov al, byte ptr [esi + 0xea] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov byte ptr [ecx], al }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073b12e }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073b12e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073b12e: }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov al, byte ptr [esi + 0xeb] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov byte ptr [ecx], al }
	__asm { inc dword ptr [edx] }
	__asm { dec dword ptr [edx + 4] }
	__asm { jne L_0073b162 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073b162 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073b162: }
	__asm { movzx eax, word ptr [esi + 0xec] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0073a5e0 }
	__asm { movzx eax, word ptr [esi + 0xee] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0073a5e0 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { add esp, 0x10 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [eax], 0 }
	__asm { inc dword ptr [ecx] }
	__asm { dec dword ptr [ecx + 4] }
	__asm { jne L_0073b1b0 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073b1b0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073b1b0: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [eax], 0 }
	__asm { inc dword ptr [ecx] }
	__asm { dec dword ptr [ecx + 4] }
	__asm { jne L_0073b1df }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0073b1df }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073b1df: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00745350();
extern "C" void fn_00745370();
// FUNCTION: ROBLOXSTUDIO 0x0073b890
extern "C" __declspec(naked) void asm_0073b890()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x10] }
	__asm { push ebp }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { cmp ebx, 0x3b9ac9f0 }
	__asm { jbe L_0073b8c7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x38 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 0x18], 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073b8c7: }
	__asm { mov ecx, ebx }
	__asm { and ecx, 7 }
	__asm { jbe L_0073b8d7 }
	__asm { mov eax, 8 }
	__asm { sub eax, ecx }
	__asm { add ebx, eax }
	__asm { L_0073b8d7: }
	__asm { mov edi, dword ptr [esp + 0x18] }
	__asm { test edi, edi }
	__asm { js L_0073b8e4 }
	__asm { cmp edi, 2 }
	__asm { jl L_0073b8fc }
	__asm { L_0073b8e4: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0xf }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 0x18], edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073b8fc: }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { xor ebp, ebp }
	__asm { lea eax, [eax + edi*4] }
	__asm { add eax, 0x34 }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0073b923 }
	__asm { L_0073b912: }
	__asm { cmp dword ptr [eax + 8], ebx }
	__asm { jae L_0073b9bb }
	__asm { mov ebp, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_0073b912 }
	__asm { L_0073b923: }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { test ebp, ebp }
	__asm { jne L_0073b933 }
	__asm { mov edi, dword ptr [edi*4 + 0xe4b8e0] }
	__asm { jmp L_0073b93a }
	__asm { L_0073b933: }
	__asm { mov edi, dword ptr [edi*4 + 0xe4b8e8] }
	__asm { L_0073b93a: }
	__asm { mov eax, 0x3b9aca00 }
	__asm { sub eax, ecx }
	__asm { cmp edi, eax }
	__asm { cmova edi, eax }
	__asm { lea eax, [edi + ecx] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00745350 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_0073b98d }
	__asm { L_0073b957: }
	__asm { shr edi, 1 }
	__asm { cmp edi, 0x32 }
	__asm { jae L_0073b97a }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x38 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 0x18], 2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073b97a: }
	__asm { lea eax, [ebx + 0x10] }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00745350 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_0073b957 }
	__asm { L_0073b98d: }
	__asm { mov edx, dword ptr [esp + 0x14] }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { add ecx, edi }
	__asm { add dword ptr [edx + 0x4c], ecx }
	__asm { lea ecx, [edi + ebx] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { test ebp, ebp }
	__asm { jne L_0073b9b8 }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { jmp L_0073b9bb }
	__asm { L_0073b9b8: }
	__asm { mov dword ptr [ebp], eax }
	__asm { L_0073b9bb: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { sub dword ptr [eax + 8], ebx }
	__asm { pop edi }
	__asm { lea edx, [ecx + 0x10] }
	__asm { pop esi }
	__asm { add ecx, ebx }
	__asm { pop ebp }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { add eax, edx }
	__asm { pop ebx }
	__asm { ret }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x1c] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { cmp edi, 0x3b9ac9f0 }
	__asm { jbe L_0073ba07 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x38 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 0x18], 3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073ba07: }
	__asm { mov ecx, edi }
	__asm { and ecx, 7 }
	__asm { jbe L_0073ba17 }
	__asm { mov eax, 8 }
	__asm { sub eax, ecx }
	__asm { add edi, eax }
	__asm { L_0073ba17: }
	__asm { mov ebx, dword ptr [esp + 0x18] }
	__asm { test ebx, ebx }
	__asm { js L_0073ba24 }
	__asm { cmp ebx, 2 }
	__asm { jl L_0073ba3c }
	__asm { L_0073ba24: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0xf }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 0x18], ebx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073ba3c: }
	__asm { lea eax, [edi + 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00745370 }
	__asm { mov ebp, eax }
	__asm { add esp, 8 }
	__asm { test ebp, ebp }
	__asm { jne L_0073ba6b }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [ecx + 0x14], 0x38 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [ecx + 0x18], 4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0073ba6b: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { lea eax, [edi + 0x10] }
	__asm { add dword ptr [ecx + 0x4c], eax }
	__asm { mov eax, dword ptr [ecx + ebx*4 + 0x3c] }
	__asm { mov dword ptr [ebp + 4], edi }
	__asm { pop edi }
	__asm { mov dword ptr [ebp], eax }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { pop esi }
	__asm { mov dword ptr [ecx + ebx*4 + 0x3c], ebp }
	__asm { lea eax, [ebp + 0x10] }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e105b0[];
extern "C" void fn_007399d0();
extern "C" void fn_00739a00();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_00cf67fe();
extern "C" void fn_00cfdff0();
extern "C" void fn_00cff860();
// FUNCTION: ROBLOXSTUDIO 0x0073d870
extern "C" __declspec(naked) void asm_0073d870()
{
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jne L_0073dbae }
	__asm { mov esi, dword ptr [esp + 0x3c] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [esi + 0x288] }
	__asm { add eax, dword ptr [esp + 0x4c] }
	__asm { lea edx, [esi + 0x74] }
	__asm { push ebp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esp + 0x4c] }
	__asm { sub eax, dword ptr [esp + 0x50] }
	__asm { mov ebx, 0 }
	__asm { mov dword ptr [esi + 0x78], eax }
	__asm { mov eax, dword ptr [esi + 0xac] }
	__asm { mov dword ptr [esi + 0x80], eax }
	__asm { mov eax, dword ptr [esi + 0xb0] }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x84], eax }
	__asm { mov edi, ebx }
	__asm { je L_0073db00 }
	__asm { L_0073d8c6: }
	__asm { push 1 }
	__asm { push edx }
	__asm { call fn_00cfdff0 }
	__asm { mov ebp, eax }
	__asm { test ebp, ebp }
	__asm { je L_0073d8dd }
	__asm { cmp ebp, 1 }
	__asm { jne L_0073da25 }
	__asm { L_0073d8dd: }
	__asm { mov ecx, dword ptr [esi + 0x84] }
	__asm { test ecx, ecx }
	__asm { je L_0073d8f0 }
	__asm { cmp ebp, 1 }
	__asm { jne L_0073da13 }
	__asm { L_0073d8f0: }
	__asm { test edi, edi }
	__asm { jne L_0073d963 }
	__asm { mov ebx, dword ptr [esi + 0xb0] }
	__asm { sub ebx, ecx }
	__asm { add ebx, dword ptr [esp + 0x54] }
	__asm { lea eax, [ebx + 1] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007399d0 }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { test edi, edi }
	__asm { jne L_0073d933 }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { push 0xe4baac }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x288], edi }
	__asm { call fn_00739c20 }
	__asm { add esp, 0x10 }
	__asm { L_0073d933: }
	__asm { mov ecx, dword ptr [esp + 0x54] }
	__asm { mov eax, ebx }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { push dword ptr [esi + 0xac] }
	__asm { lea eax, [edi + ecx] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { push dword ptr [esp + 0x60] }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push edi }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0x18 }
	__asm { jmp L_0073d9ee }
	__asm { L_0073d963: }
	__asm { mov eax, dword ptr [esi + 0xb0] }
	__asm { sub eax, ecx }
	__asm { inc eax }
	__asm { add eax, ebx }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x54], edi }
	__asm { call fn_007399d0 }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { test edi, edi }
	__asm { jne L_0073d9ac }
	__asm { push dword ptr [esp + 0x4c] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { push 0xe4bad4 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x288], edi }
	__asm { call fn_00739c20 }
	__asm { add esp, 0x18 }
	__asm { L_0073d9ac: }
	__asm { push ebx }
	__asm { push dword ptr [esp + 0x50] }
	__asm { push edi }
	__asm { call fn_00cf67fe }
	__asm { push dword ptr [esp + 0x58] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { mov eax, dword ptr [esi + 0xb0] }
	__asm { sub eax, dword ptr [esi + 0x84] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0xac] }
	__asm { lea eax, [edi + ebx] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [esi + 0xb0] }
	__asm { sub eax, dword ptr [esi + 0x84] }
	__asm { add esp, 0x20 }
	__asm { add ebx, eax }
	__asm { L_0073d9ee: }
	__asm { mov byte ptr [edi + ebx], 0 }
	__asm { cmp ebp, 1 }
	__asm { je L_0073db7b }
	__asm { mov eax, dword ptr [esi + 0xac] }
	__asm { mov dword ptr [esi + 0x80], eax }
	__asm { mov eax, dword ptr [esi + 0xb0] }
	__asm { mov dword ptr [esi + 0x84], eax }
	__asm { L_0073da13: }
	__asm { cmp dword ptr [esi + 0x78], 0 }
	__asm { je L_0073dad1 }
	__asm { lea edx, [esi + 0x74] }
	__asm { jmp L_0073d8c6 }
	__asm { L_0073da25: }
	__asm { mov eax, dword ptr [esi + 0x8c] }
	__asm { test eax, eax }
	__asm { je L_0073da32 }
	__asm { push eax }
	__asm { jmp L_0073da37 }
	__asm { L_0073da32: }
	__asm { push 0xe4ba40 }
	__asm { L_0073da37: }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { lea eax, [esi + 0x74] }
	__asm { push eax }
	__asm { call fn_00cff860 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { test edi, edi }
	__asm { jne L_0073da9e }
	__asm { mov ebx, dword ptr [esp + 0x54] }
	__asm { add ebx, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_007399d0 }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { test edi, edi }
	__asm { jne L_0073da8b }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { push 0xe4ba84 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x288], edi }
	__asm { call fn_00739c20 }
	__asm { add esp, 0x10 }
	__asm { L_0073da8b: }
	__asm { push dword ptr [esp + 0x54] }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push edi }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { L_0073da9e: }
	__asm { mov byte ptr [edi + ebx - 1], 0 }
	__asm { mov eax, dword ptr [esi + 0x288] }
	__asm { mov ebx, dword ptr [esp + 0x50] }
	__asm { sub eax, edi }
	__asm { dec ebx }
	__asm { add ebx, eax }
	__asm { mov eax, 0x1f }
	__asm { cmp ebx, eax }
	__asm { cmova ebx, eax }
	__asm { mov eax, dword ptr [esp + 0x54] }
	__asm { push ebx }
	__asm { add eax, edi }
	__asm { push 0xe4ba40 }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { L_0073dad1: }
	__asm { cmp ebp, 1 }
	__asm { je L_0073db7b }
	__asm { cmp ebp, -5 }
	__asm { jne L_0073daed }
	__asm { lea eax, [esi + 0x11c] }
	__asm { push eax }
	__asm { push 0xe4bafc }
	__asm { jmp L_0073db0c }
	__asm { L_0073daed: }
	__asm { cmp ebp, -3 }
	__asm { jne L_0073db00 }
	__asm { lea eax, [esi + 0x11c] }
	__asm { push eax }
	__asm { push 0xe4bb30 }
	__asm { jmp L_0073db0c }
	__asm { L_0073db00: }
	__asm { lea eax, [esi + 0x11c] }
	__asm { push eax }
	__asm { push 0xe4bb60 }
	__asm { L_0073db0c: }
	__asm { lea eax, [esp + 0x18] }
	__asm { push 0x34 }
	__asm { push eax }
	__asm { call dword ptr [g_00e105b0] }
	__asm { add esp, 0x10 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { mov ebp, dword ptr [esp + 0x5c] }
	__asm { add esp, 8 }
	__asm { mov ebx, ebp }
	__asm { test edi, edi }
	__asm { jne L_0073db77 }
	__asm { lea eax, [ebp + 1] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007399d0 }
	__asm { mov edi, eax }
	__asm { add esp, 8 }
	__asm { test edi, edi }
	__asm { jne L_0073db67 }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { push 0xe4bb90 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x288], edi }
	__asm { call fn_00739c20 }
	__asm { add esp, 0x10 }
	__asm { L_0073db67: }
	__asm { push ebp }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push edi }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { L_0073db77: }
	__asm { mov byte ptr [edi + ebp], 0 }
	__asm { L_0073db7b: }
	__asm { lea eax, [esi + 0x74] }
	__asm { push eax }
	__asm { call fn_00cff860 }
	__asm { push dword ptr [esi + 0x288] }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { mov eax, dword ptr [esp + 0x60] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 0x288], edi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { mov dword ptr [eax], ebx }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { add esp, 0x34 }
	__asm { ret }
	__asm { L_0073dbae: }
	__asm { push eax }
	__asm { push 0xe4bbac }
	__asm { lea eax, [esp + 0xc] }
	__asm { push 0x32 }
	__asm { push eax }
	__asm { call dword ptr [g_00e105b0] }
	__asm { mov esi, dword ptr [esp + 0x4c] }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { mov eax, dword ptr [esi + 0x288] }
	__asm { mov ecx, dword ptr [esp + 0x60] }
	__asm { add esp, 0x18 }
	__asm { mov byte ptr [ecx + eax], 0 }
	__asm { mov eax, dword ptr [esp + 0x4c] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { add esp, 0x34 }
	__asm { ret }
}

extern "C" void fn_00736370();
extern "C" void fn_00739970();
extern "C" void fn_00739a00();
extern "C" void fn_00739a90();
extern "C" void fn_00739c20();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x0073e9f0
extern "C" __declspec(naked) void asm_0073e9f0()
{
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x48] }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov dword ptr [esp + 0x30], 4 }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { mov dword ptr [esp + 0x38], 2 }
	__asm { mov dword ptr [esp + 0x3c], 0 }
	__asm { mov dword ptr [esp + 0x40], 1 }
	__asm { mov dword ptr [esp + 0x44], 0 }
	__asm { mov dword ptr [esp + 0x10], 8 }
	__asm { mov dword ptr [esp + 0x14], 8 }
	__asm { mov dword ptr [esp + 0x18], 4 }
	__asm { mov dword ptr [esp + 0x1c], 4 }
	__asm { mov dword ptr [esp + 0x20], 2 }
	__asm { mov dword ptr [esp + 0x24], 2 }
	__asm { mov dword ptr [esp + 0x28], 1 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { call fn_00736370 }
	__asm { mov eax, dword ptr [edi + 0xcc] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [edi + 0x123], 0 }
	__asm { je L_0073eadf }
	__asm { test byte ptr [edi + 0x70], 2 }
	__asm { jne L_0073ea95 }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { L_0073ea95: }
	__asm { movzx ecx, byte ptr [edi + 0x124] }
	__asm { mov dword ptr [edi + 0xd0], eax }
	__asm { mov eax, dword ptr [edi + 0xc8] }
	__asm { sub eax, dword ptr [esp + ecx*4 + 0x28] }
	__asm { mov esi, dword ptr [esp + ecx*4 + 0xc] }
	__asm { dec eax }
	__asm { add eax, esi }
	__asm { xor edx, edx }
	__asm { div esi }
	__asm { mov ecx, eax }
	__asm { mov al, byte ptr [edi + 0x129] }
	__asm { cmp al, 8 }
	__asm { mov dword ptr [edi + 0xe0], ecx }
	__asm { movzx eax, al }
	__asm { jb L_0073ead4 }
	__asm { shr eax, 3 }
	__asm { imul eax, ecx }
	__asm { jmp L_0073eaf7 }
	__asm { L_0073ead4: }
	__asm { imul eax, ecx }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { jmp L_0073eaf7 }
	__asm { L_0073eadf: }
	__asm { mov dword ptr [edi + 0xd0], eax }
	__asm { mov eax, dword ptr [edi + 0xc8] }
	__asm { mov dword ptr [edi + 0xe0], eax }
	__asm { mov eax, dword ptr [edi + 0xd8] }
	__asm { L_0073eaf7: }
	__asm { mov ecx, dword ptr [edi + 0x70] }
	__asm { movzx ebx, byte ptr [edi + 0x129] }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 0xdc], eax }
	__asm { mov edx, 8 }
	__asm { test cl, 4 }
	__asm { je L_0073eb1b }
	__asm { cmp byte ptr [edi + 0x127], dl }
	__asm { cmovb ebx, edx }
	__asm { L_0073eb1b: }
	__asm { push ebp }
	__asm { mov ebp, ecx }
	__asm { and ebp, 0x1000 }
	__asm { je L_0073eb82 }
	__asm { mov al, byte ptr [edi + 0x126] }
	__asm { cmp al, 3 }
	__asm { jne L_0073eb45 }
	__asm { xor ebx, ebx }
	__asm { cmp word ptr [edi + 0x11a], bx }
	__asm { setne bl }
	__asm { lea ebx, [ebx*8 + 0x18] }
	__asm { jmp L_0073eb82 }
	__asm { L_0073eb45: }
	__asm { test al, al }
	__asm { jne L_0073eb5c }
	__asm { cmp ebx, edx }
	__asm { cmovl ebx, edx }
	__asm { cmp word ptr [edi + 0x11a], 0 }
	__asm { je L_0073eb82 }
	__asm { add ebx, ebx }
	__asm { jmp L_0073eb82 }
	__asm { L_0073eb5c: }
	__asm { cmp al, 2 }
	__asm { jne L_0073eb82 }
	__asm { cmp word ptr [edi + 0x11a], 0 }
	__asm { je L_0073eb82 }
	__asm { lea ecx, [ebx*4] }
	__asm { mov eax, 0x55555556 }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [edi + 0x70] }
	__asm { mov ebx, edx }
	__asm { shr ebx, 0x1f }
	__asm { add ebx, edx }
	__asm { L_0073eb82: }
	__asm { mov esi, ecx }
	__asm { mov edx, 0x40 }
	__asm { and esi, 0x8000 }
	__asm { je L_0073ebce }
	__asm { mov al, byte ptr [edi + 0x126] }
	__asm { cmp al, 3 }
	__asm { jne L_0073eba0 }
	__asm { lea ebx, [edx - 0x20] }
	__asm { jmp L_0073ebce }
	__asm { L_0073eba0: }
	__asm { test al, al }
	__asm { jne L_0073ebbb }
	__asm { mov eax, 0x20 }
	__asm { mov dword ptr [esp + 0x4c], 0x10 }
	__asm { cmp ebx, 8 }
	__asm { cmovle eax, dword ptr [esp + 0x4c] }
	__asm { jmp L_0073ebcc }
	__asm { L_0073ebbb: }
	__asm { cmp al, 2 }
	__asm { jne L_0073ebce }
	__asm { cmp ebx, 0x20 }
	__asm { mov eax, edx }
	__asm { mov ebx, 0x20 }
	__asm { cmovle eax, ebx }
	__asm { L_0073ebcc: }
	__asm { mov ebx, eax }
	__asm { L_0073ebce: }
	__asm { test ecx, 0x4000 }
	__asm { je L_0073ec20 }
	__asm { cmp word ptr [edi + 0x11a], 0 }
	__asm { je L_0073ebe4 }
	__asm { test ebp, ebp }
	__asm { jne L_0073ec13 }
	__asm { L_0073ebe4: }
	__asm { test esi, esi }
	__asm { jne L_0073ec13 }
	__asm { mov al, byte ptr [edi + 0x126] }
	__asm { cmp al, 4 }
	__asm { je L_0073ec13 }
	__asm { cmp ebx, 8 }
	__asm { jg L_0073ec07 }
	__asm { xor ebx, ebx }
	__asm { cmp al, 6 }
	__asm { sete bl }
	__asm { lea ebx, [ebx*8 + 0x18] }
	__asm { jmp L_0073ec20 }
	__asm { L_0073ec07: }
	__asm { mov ebx, 0x30 }
	__asm { cmp al, 6 }
	__asm { cmove ebx, edx }
	__asm { jmp L_0073ec20 }
	__asm { L_0073ec13: }
	__asm { cmp ebx, 0x10 }
	__asm { mov eax, 0x20 }
	__asm { cmovle edx, eax }
	__asm { mov ebx, edx }
	__asm { L_0073ec20: }
	__asm { pop ebp }
	__asm { test ecx, 0x100000 }
	__asm { je L_0073ec39 }
	__asm { movzx ecx, byte ptr [edi + 0x65] }
	__asm { movzx eax, byte ptr [edi + 0x64] }
	__asm { imul ecx, eax }
	__asm { cmp ecx, ebx }
	__asm { cmovg ebx, ecx }
	__asm { L_0073ec39: }
	__asm { mov eax, dword ptr [edi + 0xc8] }
	__asm { add eax, 7 }
	__asm { and eax, 0xfffffff8 }
	__asm { cmp ebx, 8 }
	__asm { jl L_0073ec54 }
	__asm { mov ecx, ebx }
	__asm { shr ecx, 3 }
	__asm { imul ecx, eax }
	__asm { jmp L_0073ec5f }
	__asm { L_0073ec54: }
	__asm { mov ecx, eax }
	__asm { imul ecx, ebx }
	__asm { add ecx, 7 }
	__asm { shr ecx, 3 }
	__asm { L_0073ec5f: }
	__asm { lea eax, [ebx + 7] }
	__asm { sar eax, 3 }
	__asm { lea esi, [ecx + 1] }
	__asm { add esi, eax }
	__asm { lea ebx, [esi + 0x40] }
	__asm { cmp ebx, dword ptr [edi + 0x280] }
	__asm { jbe L_0073ecbb }
	__asm { push dword ptr [edi + 0x250] }
	__asm { push edi }
	__asm { call fn_00739a00 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00739970 }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [edi + 0x123], 0 }
	__asm { mov dword ptr [edi + 0x250], eax }
	__asm { je L_0073eca6 }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0xc }
	__asm { L_0073eca6: }
	__asm { mov eax, dword ptr [edi + 0x250] }
	__asm { add eax, 0x20 }
	__asm { mov dword ptr [edi + 0xec], eax }
	__asm { mov dword ptr [edi + 0x280], ebx }
	__asm { L_0073ecbb: }
	__asm { cmp esi, -2 }
	__asm { jbe L_0073ecce }
	__asm { push 0xe4c8cc }
	__asm { push edi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_0073ecce: }
	__asm { lea ebx, [esi + 1] }
	__asm { cmp ebx, dword ptr [edi + 0x284] }
	__asm { jbe L_0073ed05 }
	__asm { push dword ptr [edi + 0xe8] }
	__asm { push edi }
	__asm { call fn_00739a00 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00739970 }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [edi + 0xe8], eax }
	__asm { call fn_00739a90 }
	__asm { add esp, 0x20 }
	__asm { mov dword ptr [edi + 0x284], ebx }
	__asm { L_0073ed05: }
	__asm { or dword ptr [edi + 0x6c], 0x40 }
	__asm { mov dword ptr [edi + 0xd8], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0x38 }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_00738df0();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x0073eef0
extern "C" __declspec(naked) void asm_0073eef0()
{
	__asm { sub esp, 0x304 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x30c] }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { test al, 1 }
	__asm { jne L_0073ef0c }
	__asm { push 0xe4bbf8 }
	__asm { jmp L_0073ef3c }
	__asm { L_0073ef0c: }
	__asm { test al, 4 }
	__asm { je L_0073ef33 }
	__asm { push 0xe4bc14 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x31c] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { add esp, 0x304 }
	__asm { ret }
	__asm { L_0073ef33: }
	__asm { test al, 2 }
	__asm { je L_0073ef45 }
	__asm { push 0xe4bc2c }
	__asm { L_0073ef3c: }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_0073ef45: }
	__asm { or dword ptr [esi + 0x68], 2 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [esi + 0x126] }
	__asm { test bl, 2 }
	__asm { jne L_0073ef79 }
	__asm { push 0xe4bc44 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x320] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { add esp, 0x304 }
	__asm { ret }
	__asm { L_0073ef79: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x31c] }
	__asm { cmp edi, 0x300 }
	__asm { ja L_0073ef9b }
	__asm { mov eax, 0xaaaaaaab }
	__asm { mul edi }
	__asm { shr edx, 1 }
	__asm { mov ecx, edi }
	__asm { lea eax, [edx + edx*2] }
	__asm { sub ecx, eax }
	__asm { je L_0073efc7 }
	__asm { L_0073ef9b: }
	__asm { push 0xe4bc6c }
	__asm { push esi }
	__asm { cmp bl, 3 }
	__asm { je L_0073efbf }
	__asm { call fn_00739e30 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { add esp, 0x304 }
	__asm { ret }
	__asm { L_0073efbf: }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_0073efc7: }
	__asm { mov eax, 0x55555556 }
	__asm { imul edi }
	__asm { mov ebx, edx }
	__asm { shr ebx, 0x1f }
	__asm { add ebx, edx }
	__asm { test ebx, ebx }
	__asm { jle L_0073f01b }
	__asm { push ebp }
	__asm { lea edi, [esp + 0x16] }
	__asm { mov ebp, ebx }
	__asm { L_0073efe0: }
	__asm { push 3 }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737920 }
	__asm { push 3 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { movzx eax, byte ptr [esp + 0x28] }
	__asm { mov byte ptr [edi - 2], al }
	__asm { movzx eax, byte ptr [esp + 0x29] }
	__asm { mov byte ptr [edi - 1], al }
	__asm { movzx eax, byte ptr [esp + 0x2a] }
	__asm { add esp, 0x18 }
	__asm { mov byte ptr [edi], al }
	__asm { lea edi, [edi + 3] }
	__asm { dec ebp }
	__asm { jne L_0073efe0 }
	__asm { pop ebp }
	__asm { L_0073f01b: }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { mov edi, dword ptr [esp + 0x320] }
	__asm { push ebx }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00738df0 }
	__asm { add esp, 0x18 }
	__asm { cmp byte ptr [esi + 0x126], 3 }
	__asm { jne L_0073f083 }
	__asm { test edi, edi }
	__asm { je L_0073f083 }
	__asm { test byte ptr [edi + 8], 0x10 }
	__asm { je L_0073f083 }
	__asm { cmp word ptr [esi + 0x11a], bx }
	__asm { jbe L_0073f06b }
	__asm { push 0xe4bc84 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { mov word ptr [esi + 0x11a], bx }
	__asm { L_0073f06b: }
	__asm { cmp word ptr [edi + 0x16], bx }
	__asm { jbe L_0073f083 }
	__asm { push 0xe4bcac }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { mov word ptr [edi + 0x16], bx }
	__asm { L_0073f083: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { add esp, 0x304 }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_007385b0();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x0073f0e0
extern "C" __declspec(naked) void asm_0073f0e0()
{
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x14] }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { test al, 1 }
	__asm { jne L_0073f114 }
	__asm { push 0xe4c284 }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_0073f102: }
	__asm { mov al, byte ptr [esi + 0x126] }
	__asm { push edi }
	__asm { cmp al, 3 }
	__asm { jne L_0073f15b }
	__asm { mov edi, 1 }
	__asm { jmp L_0073f166 }
	__asm { L_0073f114: }
	__asm { test al, 4 }
	__asm { je L_0073f136 }
	__asm { push 0xe4c2a0 }
	__asm { L_0073f11d: }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x24] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret }
	__asm { L_0073f136: }
	__asm { cmp byte ptr [esi + 0x126], 3 }
	__asm { jne L_0073f14a }
	__asm { test al, 2 }
	__asm { jne L_0073f14a }
	__asm { push 0xe4c2b8 }
	__asm { jmp L_0073f11d }
	__asm { L_0073f14a: }
	__asm { test ebx, ebx }
	__asm { je L_0073f102 }
	__asm { test byte ptr [ebx + 8], 0x20 }
	__asm { je L_0073f102 }
	__asm { push 0xe4c2d4 }
	__asm { jmp L_0073f11d }
	__asm { L_0073f15b: }
	__asm { movzx edi, al }
	__asm { and edi, 2 }
	__asm { or edi, 1 }
	__asm { add edi, edi }
	__asm { L_0073f166: }
	__asm { cmp dword ptr [esp + 0x20], edi }
	__asm { je L_0073f18b }
	__asm { push 0xe4c2ec }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x28] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret }
	__asm { L_0073f18b: }
	__asm { push edi }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737920 }
	__asm { push edi }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { jne L_0073f2b4 }
	__asm { mov al, byte ptr [esi + 0x126] }
	__asm { cmp al, 3 }
	__asm { jne L_0073f22a }
	__asm { mov cl, byte ptr [esp + 0xc] }
	__asm { mov byte ptr [esi + 0x138], cl }
	__asm { test ebx, ebx }
	__asm { je L_0073f2a3 }
	__asm { movzx edx, word ptr [ebx + 0x14] }
	__asm { test dx, dx }
	__asm { je L_0073f2a3 }
	__asm { movzx eax, cl }
	__asm { cmp ax, dx }
	__asm { jb L_0073f1fc }
	__asm { push 0xe4c308 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret }
	__asm { L_0073f1fc: }
	__asm { movzx eax, cl }
	__asm { lea ecx, [eax + eax*2] }
	__asm { add ecx, dword ptr [esi + 0x114] }
	__asm { movzx eax, byte ptr [ecx] }
	__asm { mov word ptr [esi + 0x13a], ax }
	__asm { movzx eax, byte ptr [ecx + 1] }
	__asm { mov word ptr [esi + 0x13c], ax }
	__asm { movzx eax, byte ptr [ecx + 2] }
	__asm { mov word ptr [esi + 0x13e], ax }
	__asm { jmp L_0073f2a3 }
	__asm { L_0073f22a: }
	__asm { movzx ecx, byte ptr [esp + 0xc] }
	__asm { test al, 2 }
	__asm { jne L_0073f25b }
	__asm { mov eax, 0x100 }
	__asm { imul cx, ax }
	__asm { movzx eax, byte ptr [esp + 0xd] }
	__asm { add cx, ax }
	__asm { mov word ptr [esi + 0x140], cx }
	__asm { mov word ptr [esi + 0x13c], cx }
	__asm { mov word ptr [esi + 0x13a], cx }
	__asm { jmp L_0073f29c }
	__asm { L_0073f25b: }
	__asm { movzx eax, byte ptr [esp + 0xd] }
	__asm { mov edx, 0x100 }
	__asm { imul cx, dx }
	__asm { add cx, ax }
	__asm { movzx eax, byte ptr [esp + 0xf] }
	__asm { mov word ptr [esi + 0x13a], cx }
	__asm { movzx ecx, byte ptr [esp + 0xe] }
	__asm { imul cx, dx }
	__asm { add cx, ax }
	__asm { movzx eax, byte ptr [esp + 0x11] }
	__asm { mov word ptr [esi + 0x13c], cx }
	__asm { movzx ecx, byte ptr [esp + 0x10] }
	__asm { imul cx, dx }
	__asm { add cx, ax }
	__asm { L_0073f29c: }
	__asm { mov word ptr [esi + 0x13e], cx }
	__asm { L_0073f2a3: }
	__asm { lea eax, [esi + 0x138] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_007385b0 }
	__asm { add esp, 0xc }
	__asm { L_0073f2b4: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret }
}

extern "C" char g_00e10644[];
extern "C" char g_00e106d4[];
extern "C" char g_01038048[];
extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_007385e0();
extern "C" void fn_007386f0();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x0073f2c0
extern "C" __declspec(naked) void asm_0073f2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xffffffc0 }
	__asm { sub esp, 0x74 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { test al, 1 }
	__asm { jne L_0073f2e3 }
	__asm { push 0xe4be78 }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { jmp L_0073f314 }
	__asm { L_0073f2e3: }
	__asm { test al, 4 }
	__asm { je L_0073f305 }
	__asm { push 0xe4be94 }
	__asm { L_0073f2ec: }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0073f305: }
	__asm { test al, 2 }
	__asm { je L_0073f317 }
	__asm { push 0xe4beac }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { L_0073f314: }
	__asm { add esp, 8 }
	__asm { L_0073f317: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0073f333 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test al, 4 }
	__asm { je L_0073f333 }
	__asm { test eax, 0x800 }
	__asm { jne L_0073f333 }
	__asm { push 0xe4bec8 }
	__asm { jmp L_0073f2ec }
	__asm { L_0073f333: }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { cmp ebx, 0x20 }
	__asm { je L_0073f357 }
	__asm { push 0xe4bee0 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0073f357: }
	__asm { push 0x20 }
	__asm { lea eax, [esp + 0x64] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737920 }
	__asm { push 0x20 }
	__asm { lea eax, [esp + 0x70] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { jne L_0073f6dc }
	__asm { movzx edx, byte ptr [esp + 0x60] }
	__asm { movzx eax, byte ptr [esp + 0x61] }
	__asm { movzx ecx, byte ptr [esp + 0x64] }
	__asm { shl ecx, 8 }
	__asm { shl edx, 8 }
	__asm { add edx, eax }
	__asm { movzx eax, byte ptr [esp + 0x62] }
	__asm { shl edx, 8 }
	__asm { add edx, eax }
	__asm { movzx eax, byte ptr [esp + 0x63] }
	__asm { shl edx, 8 }
	__asm { add edx, eax }
	__asm { movzx eax, byte ptr [esp + 0x65] }
	__asm { add ecx, eax }
	__asm { shl ecx, 8 }
	__asm { movzx eax, byte ptr [esp + 0x66] }
	__asm { add ecx, eax }
	__asm { shl ecx, 8 }
	__asm { movzx eax, byte ptr [esp + 0x67] }
	__asm { add ecx, eax }
	__asm { mov dword ptr [esp + 0x34], ecx }
	__asm { movzx ecx, byte ptr [esp + 0x68] }
	__asm { movzx eax, byte ptr [esp + 0x69] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x6a] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x6b] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x6d] }
	__asm { mov dword ptr [esp + 0x30], ecx }
	__asm { movzx ecx, byte ptr [esp + 0x6c] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x6e] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x6f] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x71] }
	__asm { mov dword ptr [esp + 0x2c], ecx }
	__asm { movzx ecx, byte ptr [esp + 0x70] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x72] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x73] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x75] }
	__asm { mov dword ptr [esp + 0x28], ecx }
	__asm { movzx ecx, byte ptr [esp + 0x74] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x76] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x77] }
	__asm { movzx ebx, byte ptr [esp + 0x7c] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x79] }
	__asm { mov dword ptr [esp + 0x24], ecx }
	__asm { movzx ecx, byte ptr [esp + 0x78] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x7a] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x7b] }
	__asm { shl ecx, 8 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [esp + 0x7d] }
	__asm { shl ebx, 8 }
	__asm { mov dword ptr [esp + 0x5c], edx }
	__asm { mov dword ptr [esp + 0x58], ecx }
	__asm { add ebx, eax }
	__asm { movss xmm1, dword ptr [g_01038048] }
	__asm { cvtsi2ss xmm0, edx }
	__asm { movzx eax, byte ptr [esp + 0x7e] }
	__asm { mulss xmm0, xmm1 }
	__asm { shl ebx, 8 }
	__asm { add ebx, eax }
	__asm { movss dword ptr [esp + 0x54], xmm0 }
	__asm { cvtsi2ss xmm0, dword ptr [esp + 0x34] }
	__asm { movzx eax, byte ptr [esp + 0x7f] }
	__asm { mulss xmm0, xmm1 }
	__asm { shl ebx, 8 }
	__asm { add ebx, eax }
	__asm { movss dword ptr [esp + 0x50], xmm0 }
	__asm { cvtsi2ss xmm0, dword ptr [esp + 0x30] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [esp + 0x4c], xmm0 }
	__asm { cvtsi2ss xmm0, dword ptr [esp + 0x2c] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [esp + 0x48], xmm0 }
	__asm { cvtsi2ss xmm0, dword ptr [esp + 0x28] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [esp + 0x44], xmm0 }
	__asm { cvtsi2ss xmm0, dword ptr [esp + 0x24] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [esp + 0x40], xmm0 }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [esp + 0x3c], xmm0 }
	__asm { cvtsi2ss xmm0, ebx }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [esp + 0x38], xmm0 }
	__asm { test edi, edi }
	__asm { je L_0073f64b }
	__asm { test dword ptr [edi + 8], 0x800 }
	__asm { je L_0073f64b }
	__asm { lea eax, [edx - 0x763e] }
	__asm { cmp eax, 0x7d0 }
	__asm { ja L_0073f5cd }
	__asm { mov eax, dword ptr [esp + 0x34] }
	__asm { add eax, 0xffff8364 }
	__asm { cmp eax, 0x7d0 }
	__asm { ja L_0073f5cd }
	__asm { mov eax, dword ptr [esp + 0x30] }
	__asm { add eax, 0xffff09e8 }
	__asm { cmp eax, 0x7d0 }
	__asm { ja L_0073f5cd }
	__asm { mov eax, dword ptr [esp + 0x2c] }
	__asm { add eax, 0xffff8300 }
	__asm { cmp eax, 0x7d0 }
	__asm { ja L_0073f5cd }
	__asm { mov eax, dword ptr [esp + 0x28] }
	__asm { add eax, 0xffff8eb8 }
	__asm { cmp eax, 0x7d0 }
	__asm { ja L_0073f5cd }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { add eax, 0xffff1988 }
	__asm { cmp eax, 0x7d0 }
	__asm { ja L_0073f5cd }
	__asm { lea eax, [ecx - 0x36b0] }
	__asm { cmp eax, 0x7d0 }
	__asm { ja L_0073f5cd }
	__asm { cmp ebx, 0x1388 }
	__asm { jl L_0073f5cd }
	__asm { cmp ebx, 0x1b58 }
	__asm { jle L_0073f6dc }
	__asm { L_0073f5cd: }
	__asm { push 0xe4befc }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { fld dword ptr [esp + 0x50] }
	__asm { mov edi, dword ptr [g_00e106d4] }
	__asm { fstp qword ptr [esp] }
	__asm { fld dword ptr [esp + 0x54] }
	__asm { sub esp, 0x18 }
	__asm { fstp qword ptr [esp + 0x10] }
	__asm { fld dword ptr [esp + 0x70] }
	__asm { fstp qword ptr [esp + 8] }
	__asm { fld dword ptr [esp + 0x74] }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe4bf34 }
	__asm { call edi }
	__asm { mov esi, dword ptr [g_00e10644] }
	__asm { add eax, 0x40 }
	__asm { push eax }
	__asm { call esi }
	__asm { fld dword ptr [esp + 0x60] }
	__asm { add esp, 8 }
	__asm { fstp qword ptr [esp + 0x18] }
	__asm { fld dword ptr [esp + 0x5c] }
	__asm { fstp qword ptr [esp + 0x10] }
	__asm { fld dword ptr [esp + 0x60] }
	__asm { fstp qword ptr [esp + 8] }
	__asm { fld dword ptr [esp + 0x64] }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe4bf50 }
	__asm { call edi }
	__asm { add eax, 0x40 }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 0x28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0073f64b: }
	__asm { fld dword ptr [esp + 0x38] }
	__asm { sub esp, 0x40 }
	__asm { fstp qword ptr [esp + 0x38] }
	__asm { fld dword ptr [esp + 0x7c] }
	__asm { fstp qword ptr [esp + 0x30] }
	__asm { fld dword ptr [esp + 0x80] }
	__asm { fstp qword ptr [esp + 0x28] }
	__asm { fld dword ptr [esp + 0x84] }
	__asm { fstp qword ptr [esp + 0x20] }
	__asm { fld dword ptr [esp + 0x88] }
	__asm { fstp qword ptr [esp + 0x18] }
	__asm { fld dword ptr [esp + 0x8c] }
	__asm { fstp qword ptr [esp + 0x10] }
	__asm { fld dword ptr [esp + 0x90] }
	__asm { fstp qword ptr [esp + 8] }
	__asm { fld dword ptr [esp + 0x94] }
	__asm { fstp qword ptr [esp] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_007385e0 }
	__asm { push ebx }
	__asm { push dword ptr [esp + 0xa4] }
	__asm { push dword ptr [esp + 0x74] }
	__asm { push dword ptr [esp + 0x7c] }
	__asm { push dword ptr [esp + 0x84] }
	__asm { push dword ptr [esp + 0x8c] }
	__asm { push dword ptr [esp + 0x94] }
	__asm { push dword ptr [esp + 0xc0] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_007386f0 }
	__asm { add esp, 0x70 }
	__asm { L_0073f6dc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10644[];
extern "C" char g_00e106d4[];
extern "C" char g_01038048[];
extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_00738800();
extern "C" void fn_00738880();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x0073f6f0
extern "C" __declspec(naked) void asm_0073f6f0()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { test al, 1 }
	__asm { jne L_0073f70a }
	__asm { push 0xe4bd08 }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { jmp L_0073f738 }
	__asm { L_0073f70a: }
	__asm { test al, 4 }
	__asm { je L_0073f729 }
	__asm { push 0xe4bd24 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_0073f729: }
	__asm { test al, 2 }
	__asm { je L_0073f73b }
	__asm { push 0xe4bd3c }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { L_0073f738: }
	__asm { add esp, 8 }
	__asm { L_0073f73b: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x14] }
	__asm { test ebx, ebx }
	__asm { je L_0073f76e }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { test al, 1 }
	__asm { je L_0073f76e }
	__asm { test eax, 0x800 }
	__asm { jne L_0073f76e }
	__asm { push 0xe4bd54 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_0073f76e: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x1c] }
	__asm { cmp edi, 4 }
	__asm { je L_0073f792 }
	__asm { push 0xe4bd6c }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_0073f792: }
	__asm { push 4 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737920 }
	__asm { push 4 }
	__asm { lea eax, [esp + 0x24] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { jne L_0073f876 }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { movzx edi, al }
	__asm { shl edi, 8 }
	__asm { movzx eax, ah }
	__asm { add edi, eax }
	__asm { movzx eax, byte ptr [esp + 0x16] }
	__asm { shl edi, 8 }
	__asm { add edi, eax }
	__asm { movzx eax, byte ptr [esp + 0x17] }
	__asm { shl edi, 8 }
	__asm { add edi, eax }
	__asm { jne L_0073f7f7 }
	__asm { push 0xe4bd88 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_0073f7f7: }
	__asm { test ebx, ebx }
	__asm { je L_0073f840 }
	__asm { test dword ptr [ebx + 8], 0x800 }
	__asm { je L_0073f840 }
	__asm { cmp edi, 0xafc8 }
	__asm { jl L_0073f814 }
	__asm { cmp edi, 0xb3b0 }
	__asm { jle L_0073f840 }
	__asm { L_0073f814: }
	__asm { push 0xe4bdac }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { push edi }
	__asm { push 0xe4bde4 }
	__asm { call dword ptr [g_00e106d4] }
	__asm { add eax, 0x40 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10644] }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_0073f840: }
	__asm { cvtsi2ss xmm0, edi }
	__asm { sub esp, 8 }
	__asm { mulss xmm0, dword ptr [g_01038048] }
	__asm { movss dword ptr [esp + 0x14], xmm0 }
	__asm { fld dword ptr [esp + 0x14] }
	__asm { movss dword ptr [esi + 0x15c], xmm0 }
	__asm { fstp qword ptr [esp] }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00738800 }
	__asm { push edi }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00738880 }
	__asm { add esp, 0x1c }
	__asm { L_0073f876: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_00738900();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x0073f880
extern "C" __declspec(naked) void asm_0073f880()
{
	__asm { sub esp, 0x204 }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x210] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x210] }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { test al, 1 }
	__asm { jne L_0073f94b }
	__asm { push 0xe4c32c }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_0073f8af: }
	__asm { movzx eax, word ptr [esi + 0x118] }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x220] }
	__asm { mov ebx, edi }
	__asm { shr ebx, 1 }
	__asm { cmp ebx, eax }
	__asm { jne L_0073f997 }
	__asm { cmp ebx, 0x100 }
	__asm { ja L_0073f997 }
	__asm { xor edi, edi }
	__asm { test ebx, ebx }
	__asm { je L_0073f922 }
	__asm { mov ebp, 0x100 }
	__asm { L_0073f8e2: }
	__asm { push 2 }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737920 }
	__asm { push 2 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { mov ax, word ptr [esp + 0x28] }
	__asm { movzx ecx, al }
	__asm { imul cx, bp }
	__asm { movzx eax, ah }
	__asm { add cx, ax }
	__asm { mov word ptr [esp + edi*2 + 0x2c], cx }
	__asm { inc edi }
	__asm { add esp, 0x18 }
	__asm { cmp edi, ebx }
	__asm { jb L_0073f8e2 }
	__asm { mov ebp, dword ptr [esp + 0x21c] }
	__asm { L_0073f922: }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_0073f9ac }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { push ebp }
	__asm { push esi }
	__asm { call fn_00738900 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { add esp, 0x204 }
	__asm { ret }
	__asm { L_0073f94b: }
	__asm { test al, 4 }
	__asm { je L_0073f973 }
	__asm { push 0xe4c348 }
	__asm { L_0073f954: }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x220] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { add esp, 0x204 }
	__asm { ret }
	__asm { L_0073f973: }
	__asm { test al, 2 }
	__asm { jne L_0073f97e }
	__asm { push 0xe4c360 }
	__asm { jmp L_0073f954 }
	__asm { L_0073f97e: }
	__asm { test ebp, ebp }
	__asm { je L_0073f8af }
	__asm { test byte ptr [ebp + 8], 0x40 }
	__asm { je L_0073f8af }
	__asm { push 0xe4c37c }
	__asm { jmp L_0073f954 }
	__asm { L_0073f997: }
	__asm { push 0xe4c394 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { L_0073f9ac: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { add esp, 0x204 }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_00739010();
extern "C" void fn_00739970();
extern "C" void fn_00739a00();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_0073d870();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x0073f9c0
extern "C" __declspec(naked) void asm_0073f9c0()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { test al, 1 }
	__asm { jne L_0073f9da }
	__asm { push 0xe4c020 }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { jmp L_0073fa08 }
	__asm { L_0073f9da: }
	__asm { test al, 4 }
	__asm { je L_0073f9f9 }
	__asm { push 0xe4c03c }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_0073f9f9: }
	__asm { test al, 2 }
	__asm { je L_0073fa0b }
	__asm { push 0xe4c054 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { L_0073fa08: }
	__asm { add esp, 8 }
	__asm { L_0073fa0b: }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x14] }
	__asm { test ebp, ebp }
	__asm { je L_0073fa39 }
	__asm { test dword ptr [ebp + 8], 0x1000 }
	__asm { je L_0073fa39 }
	__asm { push 0xe4c06c }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_0073fa39: }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { mov ebx, dword ptr [esp + 0x28] }
	__asm { lea eax, [ebx + 1] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00739970 }
	__asm { mov edi, eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x288], edi }
	__asm { call fn_00737920 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x30 }
	__asm { test eax, eax }
	__asm { je L_0073fa9b }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 0x288], 0 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_0073fa9b: }
	__asm { mov eax, dword ptr [esi + 0x288] }
	__asm { mov byte ptr [ebx + eax], 0 }
	__asm { mov ecx, dword ptr [esi + 0x288] }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_0073fab8 }
	__asm { L_0073fab2: }
	__asm { inc edi }
	__asm { cmp byte ptr [edi], 0 }
	__asm { jne L_0073fab2 }
	__asm { L_0073fab8: }
	__asm { lea eax, [ebx - 1] }
	__asm { inc edi }
	__asm { add eax, ecx }
	__asm { cmp edi, eax }
	__asm { jb L_0073fad3 }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { push 0xe4c084 }
	__asm { jmp L_0073fb93 }
	__asm { L_0073fad3: }
	__asm { mov al, byte ptr [edi] }
	__asm { inc edi }
	__asm { test al, al }
	__asm { je L_0073faea }
	__asm { push 0xe4c09c }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { xor al, al }
	__asm { L_0073faea: }
	__asm { sub edi, dword ptr [esi + 0x288] }
	__asm { lea ecx, [esp + 0x18] }
	__asm { push ecx }
	__asm { movzx eax, al }
	__asm { push edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { call fn_0073d870 }
	__asm { mov edx, dword ptr [esp + 0x2c] }
	__asm { add esp, 0x14 }
	__asm { sub edx, edi }
	__asm { cmp edi, dword ptr [esp + 0x18] }
	__asm { ja L_0073fb82 }
	__asm { cmp edx, 4 }
	__asm { jb L_0073fb82 }
	__asm { mov ebx, dword ptr [esi + 0x288] }
	__asm { add edi, ebx }
	__asm { movzx ecx, byte ptr [edi] }
	__asm { movzx eax, byte ptr [edi + 1] }
	__asm { shl ecx, 8 }
	__asm { or ecx, eax }
	__asm { movzx eax, byte ptr [edi + 2] }
	__asm { shl ecx, 8 }
	__asm { or ecx, eax }
	__asm { movzx eax, byte ptr [edi + 3] }
	__asm { shl ecx, 8 }
	__asm { or ecx, eax }
	__asm { cmp ecx, edx }
	__asm { jae L_0073fb72 }
	__asm { mov edx, ecx }
	__asm { L_0073fb45: }
	__asm { push edx }
	__asm { push edi }
	__asm { push dword ptr [esp + 0x18] }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { call fn_00739010 }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { add esp, 0x20 }
	__asm { mov dword ptr [esi + 0x288], 0 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_0073fb72: }
	__asm { jbe L_0073fb45 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { push 0xe4c0f8 }
	__asm { jmp L_0073fb93 }
	__asm { L_0073fb82: }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { push 0xe4c0cc }
	__asm { L_0073fb93: }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x288], 0 }
	__asm { call fn_00739e30 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_00738eb0();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x00740080
extern "C" __declspec(naked) void asm_00740080()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [esp + 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { test al, 1 }
	__asm { jne L_007400a2 }
	__asm { push 0xe4bdf8 }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { jmp L_007400d0 }
	__asm { L_007400a2: }
	__asm { test al, 4 }
	__asm { je L_007400c1 }
	__asm { push 0xe4be14 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_007400c1: }
	__asm { test al, 2 }
	__asm { je L_007400d3 }
	__asm { push 0xe4be2c }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { L_007400d0: }
	__asm { add esp, 8 }
	__asm { L_007400d3: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x14] }
	__asm { test edi, edi }
	__asm { je L_007400fe }
	__asm { test byte ptr [edi + 8], 2 }
	__asm { je L_007400fe }
	__asm { push 0xe4be44 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x20] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_007400fe: }
	__asm { cmp byte ptr [esi + 0x126], 3 }
	__asm { push ebp }
	__asm { mov ebp, 3 }
	__asm { je L_00740114 }
	__asm { movzx ebp, byte ptr [esi + 0x12a] }
	__asm { L_00740114: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x20] }
	__asm { cmp ebx, ebp }
	__asm { jne L_007401b8 }
	__asm { cmp ebx, 4 }
	__asm { ja L_007401b8 }
	__asm { push ebp }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737920 }
	__asm { push ebp }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { jne L_007401cd }
	__asm { test byte ptr [esi + 0x126], 2 }
	__asm { lea ecx, [esi + 0x17c] }
	__asm { je L_00740184 }
	__asm { movzx eax, byte ptr [esp + 0x10] }
	__asm { mov byte ptr [ecx], al }
	__asm { movzx eax, byte ptr [esp + 0x11] }
	__asm { mov byte ptr [esi + 0x17d], al }
	__asm { movzx eax, byte ptr [esp + 0x12] }
	__asm { mov byte ptr [esi + 0x17e], al }
	__asm { movzx eax, byte ptr [esp + 0x13] }
	__asm { jmp L_007401a1 }
	__asm { L_00740184: }
	__asm { mov al, byte ptr [esp + 0x10] }
	__asm { mov byte ptr [esi + 0x17f], al }
	__asm { mov byte ptr [ecx], al }
	__asm { mov byte ptr [esi + 0x17d], al }
	__asm { mov byte ptr [esi + 0x17e], al }
	__asm { movzx eax, byte ptr [esp + 0x11] }
	__asm { L_007401a1: }
	__asm { push ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0x180], al }
	__asm { call fn_00738eb0 }
	__asm { add esp, 0xc }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
	__asm { L_007401b8: }
	__asm { push 0xe4be5c }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { L_007401cd: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e10644[];
extern "C" char g_00e106d4[];
extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_00738f00();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x00740670
extern "C" __declspec(naked) void asm_00740670()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { test al, 1 }
	__asm { jne L_00740689 }
	__asm { push 0xe4bf6c }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { jmp L_007406b6 }
	__asm { L_00740689: }
	__asm { test al, 4 }
	__asm { je L_007406a7 }
	__asm { push 0xe4bf88 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x18] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007406a7: }
	__asm { test al, 2 }
	__asm { je L_007406b9 }
	__asm { push 0xe4bfa0 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { L_007406b6: }
	__asm { add esp, 8 }
	__asm { L_007406b9: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { test edi, edi }
	__asm { je L_007406e6 }
	__asm { test dword ptr [edi + 8], 0x800 }
	__asm { je L_007406e6 }
	__asm { push 0xe4bfb8 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007406e6: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x18] }
	__asm { cmp ebx, 1 }
	__asm { je L_00740709 }
	__asm { push 0xe4bfd0 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00740709: }
	__asm { push 1 }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737920 }
	__asm { push 1 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { jne L_0074086b }
	__asm { movzx ebx, byte ptr [esp + 0x10] }
	__asm { cmp ebx, 4 }
	__asm { jl L_00740752 }
	__asm { push 0xe4bfec }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00740752: }
	__asm { test edi, edi }
	__asm { je L_00740860 }
	__asm { test byte ptr [edi + 8], 1 }
	__asm { je L_007407a0 }
	__asm { mov eax, dword ptr [edi + 0xfc] }
	__asm { cmp eax, 0xafc8 }
	__asm { jl L_00740774 }
	__asm { cmp eax, 0xb3b0 }
	__asm { jle L_007407a0 }
	__asm { L_00740774: }
	__asm { push 0xe4bdac }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { push dword ptr [esi + 0x234] }
	__asm { push 0xe4c000 }
	__asm { call dword ptr [g_00e106d4] }
	__asm { add eax, 0x40 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10644] }
	__asm { add esp, 0xc }
	__asm { L_007407a0: }
	__asm { test byte ptr [edi + 8], 4 }
	__asm { je L_00740860 }
	__asm { mov eax, dword ptr [edi + 0x100] }
	__asm { cmp eax, 0x763e }
	__asm { jl L_00740852 }
	__asm { cmp eax, 0x7e0e }
	__asm { jg L_00740852 }
	__asm { mov eax, dword ptr [edi + 0x104] }
	__asm { cmp eax, 0x7c9c }
	__asm { jl L_00740852 }
	__asm { cmp eax, 0x846c }
	__asm { jg L_00740852 }
	__asm { mov eax, dword ptr [edi + 0x108] }
	__asm { cmp eax, 0xf618 }
	__asm { jl L_00740852 }
	__asm { cmp eax, 0xfde8 }
	__asm { jg L_00740852 }
	__asm { mov eax, dword ptr [edi + 0x10c] }
	__asm { cmp eax, 0x7d00 }
	__asm { jl L_00740852 }
	__asm { cmp eax, 0x84d0 }
	__asm { jg L_00740852 }
	__asm { mov eax, dword ptr [edi + 0x110] }
	__asm { cmp eax, 0x7148 }
	__asm { jl L_00740852 }
	__asm { cmp eax, 0x7918 }
	__asm { jg L_00740852 }
	__asm { mov eax, dword ptr [edi + 0x114] }
	__asm { cmp eax, 0xe678 }
	__asm { jl L_00740852 }
	__asm { cmp eax, 0xee48 }
	__asm { jg L_00740852 }
	__asm { mov eax, dword ptr [edi + 0x118] }
	__asm { cmp eax, 0x36b0 }
	__asm { jl L_00740852 }
	__asm { cmp eax, 0x3e80 }
	__asm { jg L_00740852 }
	__asm { mov eax, dword ptr [edi + 0x11c] }
	__asm { cmp eax, 0x1388 }
	__asm { jl L_00740852 }
	__asm { cmp eax, 0x1b58 }
	__asm { jle L_00740860 }
	__asm { L_00740852: }
	__asm { push 0xe4befc }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { L_00740860: }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00738f00 }
	__asm { add esp, 0xc }
	__asm { L_0074086b: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_00739750();
extern "C" void fn_007399d0();
extern "C" void fn_00739a00();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x00740870
extern "C" __declspec(naked) void asm_00740870()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { test byte ptr [edi + 0x68], 1 }
	__asm { jne L_0074088b }
	__asm { push 0xe4c6b0 }
	__asm { push edi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_0074088b: }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { test al, 4 }
	__asm { je L_00740898 }
	__asm { or eax, 8 }
	__asm { mov dword ptr [edi + 0x68], eax }
	__asm { L_00740898: }
	__asm { push dword ptr [edi + 0x288] }
	__asm { push edi }
	__asm { call fn_00739a00 }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { lea eax, [esi + 1] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_007399d0 }
	__asm { mov ebx, eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [edi + 0x288], ebx }
	__asm { test ebx, ebx }
	__asm { jne L_007408d3 }
	__asm { push 0xe4c6cc }
	__asm { push edi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_007408d3: }
	__asm { push esi }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00737920 }
	__asm { push esi }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00727850 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { je L_0074090f }
	__asm { push dword ptr [edi + 0x288] }
	__asm { push edi }
	__asm { call fn_00739a00 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [edi + 0x288], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0074090f: }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [edi + 0x288] }
	__asm { mov byte ptr [esi + ebp], 0 }
	__asm { cmp byte ptr [ebp], 0 }
	__asm { lea eax, [esi + ebp] }
	__asm { mov esi, ebp }
	__asm { je L_0074092b }
	__asm { L_00740925: }
	__asm { inc esi }
	__asm { cmp byte ptr [esi], 0 }
	__asm { jne L_00740925 }
	__asm { L_0074092b: }
	__asm { cmp esi, eax }
	__asm { je L_00740930 }
	__asm { inc esi }
	__asm { L_00740930: }
	__asm { push 0x10 }
	__asm { push edi }
	__asm { call fn_007399d0 }
	__asm { mov ebx, eax }
	__asm { add esp, 8 }
	__asm { test ebx, ebx }
	__asm { jne L_00740966 }
	__asm { push 0xe4c6f0 }
	__asm { push edi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [edi + 0x288] }
	__asm { push edi }
	__asm { call fn_00739a00 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [edi + 0x288], ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_00740966: }
	__asm { mov dword ptr [ebx], 0xffffffff }
	__asm { mov dword ptr [ebx + 4], ebp }
	__asm { mov dword ptr [ebx + 8], esi }
	__asm { lea ecx, [esi + 1] }
	__asm { L_00740975: }
	__asm { mov al, byte ptr [esi] }
	__asm { inc esi }
	__asm { test al, al }
	__asm { jne L_00740975 }
	__asm { push 1 }
	__asm { push ebx }
	__asm { push dword ptr [esp + 0x20] }
	__asm { sub esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebx + 0xc], esi }
	__asm { call fn_00739750 }
	__asm { push dword ptr [edi + 0x288] }
	__asm { mov esi, eax }
	__asm { push edi }
	__asm { call fn_00739a00 }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov dword ptr [edi + 0x288], 0 }
	__asm { call fn_00739a00 }
	__asm { add esp, 0x20 }
	__asm { test esi, esi }
	__asm { je L_007409c2 }
	__asm { push 0xe4c71c }
	__asm { push edi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { L_007409c2: }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_00739300();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_0073d840();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x00740ac0
extern "C" __declspec(naked) void asm_00740ac0()
{
	__asm { sub esp, 0x10c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x118] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x118] }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { test al, 1 }
	__asm { jne L_00740b25 }
	__asm { push 0xe4c1bc }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_00740aeb: }
	__asm { mov al, byte ptr [esi + 0x126] }
	__asm { push edi }
	__asm { test al, al }
	__asm { jne L_00740baa }
	__asm { mov edi, dword ptr [esp + 0x124] }
	__asm { cmp edi, 2 }
	__asm { je L_00740b5e }
	__asm { L_00740b06: }
	__asm { push 0xe4c208 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0x10c }
	__asm { ret }
	__asm { L_00740b25: }
	__asm { test al, 4 }
	__asm { je L_00740b4d }
	__asm { push 0xe4c1d8 }
	__asm { L_00740b2e: }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x128] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0x10c }
	__asm { ret }
	__asm { L_00740b4d: }
	__asm { test ebx, ebx }
	__asm { je L_00740aeb }
	__asm { test byte ptr [ebx + 8], 0x10 }
	__asm { je L_00740aeb }
	__asm { push 0xe4c1f0 }
	__asm { jmp L_00740b2e }
	__asm { L_00740b5e: }
	__asm { push 2 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737920 }
	__asm { push 2 }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { mov eax, 1 }
	__asm { mov word ptr [esi + 0x11a], ax }
	__asm { mov ax, word ptr [esp + 0x24] }
	__asm { movzx ecx, al }
	__asm { mov edx, 0x100 }
	__asm { imul cx, dx }
	__asm { movzx eax, ah }
	__asm { add esp, 0x18 }
	__asm { add cx, ax }
	__asm { mov word ptr [esi + 0x194], cx }
	__asm { jmp L_00740caf }
	__asm { L_00740baa: }
	__asm { cmp al, 2 }
	__asm { jne L_00740c38 }
	__asm { mov edi, dword ptr [esp + 0x124] }
	__asm { cmp edi, 6 }
	__asm { jne L_00740b06 }
	__asm { push edi }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737920 }
	__asm { push edi }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { movzx ecx, byte ptr [esp + 0x28] }
	__asm { mov edx, 0x100 }
	__asm { imul cx, dx }
	__asm { mov eax, 1 }
	__asm { mov word ptr [esi + 0x11a], ax }
	__asm { movzx eax, byte ptr [esp + 0x29] }
	__asm { add cx, ax }
	__asm { movzx eax, byte ptr [esp + 0x2b] }
	__asm { mov word ptr [esi + 0x18e], cx }
	__asm { movzx ecx, byte ptr [esp + 0x2a] }
	__asm { imul cx, dx }
	__asm { add cx, ax }
	__asm { movzx eax, byte ptr [esp + 0x2d] }
	__asm { mov word ptr [esi + 0x190], cx }
	__asm { movzx ecx, byte ptr [esp + 0x2c] }
	__asm { imul cx, dx }
	__asm { add esp, 0x18 }
	__asm { add cx, ax }
	__asm { mov word ptr [esi + 0x192], cx }
	__asm { jmp L_00740caf }
	__asm { L_00740c38: }
	__asm { cmp al, 3 }
	__asm { jne L_00740cf9 }
	__asm { test byte ptr [esi + 0x68], 2 }
	__asm { jne L_00740c54 }
	__asm { push 0xe4c224 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { L_00740c54: }
	__asm { movzx eax, word ptr [esi + 0x118] }
	__asm { mov edi, dword ptr [esp + 0x124] }
	__asm { cmp edi, eax }
	__asm { ja L_00740b06 }
	__asm { cmp edi, 0x100 }
	__asm { ja L_00740b06 }
	__asm { test edi, edi }
	__asm { jne L_00740c99 }
	__asm { push 0xe4c240 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0x10c }
	__asm { ret }
	__asm { L_00740c99: }
	__asm { push edi }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0073d840 }
	__asm { add esp, 0xc }
	__asm { mov word ptr [esi + 0x11a], di }
	__asm { L_00740caf: }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00740cd1 }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { mov word ptr [esi + 0x11a], ax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0x10c }
	__asm { ret }
	__asm { L_00740cd1: }
	__asm { lea eax, [esi + 0x18c] }
	__asm { push eax }
	__asm { movzx eax, word ptr [esi + 0x11a] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00739300 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0x10c }
	__asm { ret }
	__asm { L_00740cf9: }
	__asm { push 0xe4c258 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x12c] }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0x10c }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_00739750();
extern "C" void fn_007399d0();
extern "C" void fn_00739a00();
extern "C" void fn_00739c20();
extern "C" void fn_00739e30();
extern "C" void fn_0073d870();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x00740d20
extern "C" __declspec(naked) void asm_00740d20()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push edi }
	__asm { test byte ptr [esi + 0x68], 1 }
	__asm { jne L_00740d3b }
	__asm { push 0xe4c748 }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_00740d3b: }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { test al, 4 }
	__asm { je L_00740d48 }
	__asm { or eax, 8 }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { L_00740d48: }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { mov ebx, dword ptr [esp + 0x20] }
	__asm { lea eax, [ebx + 1] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007399d0 }
	__asm { mov edi, eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x288], edi }
	__asm { test edi, edi }
	__asm { jne L_00740d83 }
	__asm { push 0xe4c764 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_00740d83: }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00737920 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 0x20 }
	__asm { test eax, eax }
	__asm { je L_00740dbf }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esi + 0x288], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_00740dbf: }
	__asm { mov eax, dword ptr [esi + 0x288] }
	__asm { mov byte ptr [ebx + eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x288] }
	__asm { mov edi, eax }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_00740ddc }
	__asm { L_00740dd6: }
	__asm { inc edi }
	__asm { cmp byte ptr [edi], 0 }
	__asm { jne L_00740dd6 }
	__asm { L_00740ddc: }
	__asm { add eax, -2 }
	__asm { add eax, ebx }
	__asm { cmp edi, eax }
	__asm { jb L_00740e0d }
	__asm { push 0xe4c78c }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x288], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_00740e0d: }
	__asm { inc edi }
	__asm { push ebp }
	__asm { movsx ebp, byte ptr [edi] }
	__asm { test ebp, ebp }
	__asm { je L_00740e26 }
	__asm { push 0xe4c7a4 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { xor ebp, ebp }
	__asm { L_00740e26: }
	__asm { sub edi, dword ptr [esi + 0x288] }
	__asm { lea eax, [esp + 0x14] }
	__asm { push eax }
	__asm { inc edi }
	__asm { push edi }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { call fn_0073d870 }
	__asm { push 0x10 }
	__asm { push esi }
	__asm { call fn_007399d0 }
	__asm { mov ebx, eax }
	__asm { add esp, 0x1c }
	__asm { test ebx, ebx }
	__asm { jne L_00740e71 }
	__asm { push 0xe4c7cc }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x288], ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_00740e71: }
	__asm { mov dword ptr [ebx], ebp }
	__asm { mov eax, dword ptr [esi + 0x288] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [esi + 0x288] }
	__asm { push 1 }
	__asm { add eax, edi }
	__asm { push ebx }
	__asm { push dword ptr [esp + 0x20] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { push esi }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { call fn_00739750 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov edi, eax }
	__asm { call fn_00739a00 }
	__asm { push dword ptr [esi + 0x288] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { add esp, 0x20 }
	__asm { mov dword ptr [esi + 0x288], 0 }
	__asm { test edi, edi }
	__asm { je L_00740ecf }
	__asm { push 0xe4c7f8 }
	__asm { push esi }
	__asm { call fn_00739c20 }
	__asm { add esp, 8 }
	__asm { L_00740ecf: }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_007276d0();
extern "C" void fn_00727850();
extern "C" void fn_00737920();
extern "C" void fn_00739530();
extern "C" void fn_00739970();
extern "C" void fn_00739a00();
extern "C" void fn_00739df0();
extern "C" void fn_0073dbf0();
// FUNCTION: ROBLOXSTUDIO 0x00740ee0
extern "C" __declspec(naked) void asm_00740ee0()
{
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x18] }
	__asm { xor esi, esi }
	__asm { mov ecx, dword ptr [edi + 0x68] }
	__asm { test cl, 4 }
	__asm { je L_00740f15 }
	__asm { mov eax, dword ptr [edi + 0x11c] }
	__asm { lea edx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0xc], 0x54414449 }
	__asm { mov byte ptr [esp + 0x10], 0 }
	__asm { cmp eax, dword ptr [edx] }
	__asm { je L_00740f15 }
	__asm { or ecx, 8 }
	__asm { mov dword ptr [edi + 0x68], ecx }
	__asm { L_00740f15: }
	__asm { test byte ptr [edi + 0x11c], 0x20 }
	__asm { lea ebx, [edi + 0x11c] }
	__asm { jne L_00740f49 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_007276d0 }
	__asm { add esp, 8 }
	__asm { cmp eax, 3 }
	__asm { je L_00740f49 }
	__asm { cmp dword ptr [edi + 0x21c], esi }
	__asm { jne L_00740f49 }
	__asm { push 0xe4c824 }
	__asm { push edi }
	__asm { call fn_00739df0 }
	__asm { add esp, 8 }
	__asm { L_00740f49: }
	__asm { test dword ptr [edi + 0x6c], 0x8000 }
	__asm { jne L_00740f6f }
	__asm { cmp dword ptr [edi + 0x21c], esi }
	__asm { jne L_00740f6f }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret }
	__asm { L_00740f6f: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push ebp }
	__asm { lea ebp, [edi + 0x26c] }
	__asm { mov dword ptr [ebp], eax }
	__asm { mov al, byte ptr [ebx + 4] }
	__asm { mov byte ptr [ebp + 4], al }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov byte ptr [edi + 0x270], 0 }
	__asm { mov dword ptr [edi + 0x278], eax }
	__asm { test eax, eax }
	__asm { jne L_00740f9e }
	__asm { mov dword ptr [edi + 0x274], esi }
	__asm { jmp L_00740fc8 }
	__asm { L_00740f9e: }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00739970 }
	__asm { push dword ptr [esp + 0x2c] }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [edi + 0x274], esi }
	__asm { call fn_00737920 }
	__asm { push dword ptr [esp + 0x38] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00727850 }
	__asm { add esp, 0x20 }
	__asm { xor esi, esi }
	__asm { L_00740fc8: }
	__asm { mov eax, dword ptr [edi + 0x21c] }
	__asm { test eax, eax }
	__asm { je L_00741019 }
	__asm { push ebp }
	__asm { push edi }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { test eax, eax }
	__asm { jns L_00740ff5 }
	__asm { push 0xe4c83c }
	__asm { push edi }
	__asm { call fn_00739df0 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { L_00740ff5: }
	__asm { jne L_00741029 }
	__asm { test byte ptr [ebx], 0x20 }
	__asm { jne L_00741019 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_007276d0 }
	__asm { add esp, 8 }
	__asm { cmp eax, 3 }
	__asm { je L_00741019 }
	__asm { push 0xe4c824 }
	__asm { push edi }
	__asm { call fn_00739df0 }
	__asm { add esp, 8 }
	__asm { L_00741019: }
	__asm { push 1 }
	__asm { push ebp }
	__asm { push dword ptr [esp + 0x28] }
	__asm { push edi }
	__asm { call fn_00739530 }
	__asm { add esp, 0x10 }
	__asm { L_00741029: }
	__asm { push dword ptr [edi + 0x274] }
	__asm { push edi }
	__asm { call fn_00739a00 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [edi + 0x274], 0 }
	__asm { pop ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0073dbf0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 8 }
	__asm { ret }
}

extern "C" void fn_00739a00();
extern "C" void fn_00739e30();
extern "C" void fn_007411d0();
extern "C" void fn_00741240();
extern "C" void fn_00741280();
extern "C" void fn_00742980();
extern "C" void fn_007447d0();
extern "C" void fn_00744a50();
// FUNCTION: ROBLOXSTUDIO 0x00742280
extern "C" __declspec(naked) void asm_00742280()
{
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x2c] }
	__asm { push edi }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x38] }
	__asm { xor edi, edi }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x1c], 0x50434369 }
	__asm { mov byte ptr [esp + 0x20], 0 }
	__asm { mov dword ptr [esp + 0x2c], edi }
	__asm { mov dword ptr [esp + 0x30], edi }
	__asm { mov dword ptr [esp + 0x34], edi }
	__asm { mov dword ptr [esp + 0x24], edi }
	__asm { mov dword ptr [esp + 0x28], edi }
	__asm { call fn_00742980 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { test eax, eax }
	__asm { je L_007423bb }
	__asm { cmp dword ptr [esp + 0x38], edi }
	__asm { je L_007422de }
	__asm { push 0xe4cbe8 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { L_007422de: }
	__asm { push ebx }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x44] }
	__asm { test ebp, ebp }
	__asm { jne L_007422ec }
	__asm { xor ebx, ebx }
	__asm { jmp L_0074236b }
	__asm { L_007422ec: }
	__asm { mov ebx, dword ptr [esp + 0x48] }
	__asm { cmp ebx, 3 }
	__asm { jle L_0074231d }
	__asm { movzx edi, byte ptr [ebp] }
	__asm { movzx eax, byte ptr [ebp + 1] }
	__asm { shl edi, 8 }
	__asm { or edi, eax }
	__asm { movzx eax, byte ptr [ebp + 2] }
	__asm { shl edi, 8 }
	__asm { or edi, eax }
	__asm { movzx eax, byte ptr [ebp + 3] }
	__asm { shl edi, 8 }
	__asm { or edi, eax }
	__asm { jge L_0074231d }
	__asm { push 0xe4cc10 }
	__asm { jmp L_00742326 }
	__asm { L_0074231d: }
	__asm { cmp ebx, edi }
	__asm { jge L_00742341 }
	__asm { push 0xe4cc44 }
	__asm { L_00742326: }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { push dword ptr [esp + 0x18] }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x24 }
	__asm { ret }
	__asm { L_00742341: }
	__asm { jle L_00742353 }
	__asm { push 0xe4cc74 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { mov ebx, edi }
	__asm { L_00742353: }
	__asm { test ebx, ebx }
	__asm { je L_0074236b }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { call fn_007447d0 }
	__asm { add esp, 0x14 }
	__asm { mov ebx, eax }
	__asm { L_0074236b: }
	__asm { mov ebp, dword ptr [esp + 0x14] }
	__asm { lea eax, [esp + 0x18] }
	__asm { lea ecx, [ebp + 2] }
	__asm { add ecx, ebx }
	__asm { push ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007411d0 }
	__asm { mov edi, dword ptr [esp + 0x1c] }
	__asm { lea eax, [ebp + 2] }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { mov byte ptr [edi + ebp + 1], 0 }
	__asm { call fn_00741240 }
	__asm { add esp, 0x18 }
	__asm { test ebx, ebx }
	__asm { je L_007423a9 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00744a50 }
	__asm { add esp, 8 }
	__asm { L_007423a9: }
	__asm { push esi }
	__asm { call fn_00741280 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00739a00 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { L_007423bb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x24 }
	__asm { ret }
}

extern "C" void fn_00739e30();
extern "C" void fn_00741150();
// FUNCTION: ROBLOXSTUDIO 0x007425c0
extern "C" __declspec(naked) void asm_007425c0()
{
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [esp], 0x534e5274 }
	__asm { mov byte ptr [esp + 4], 0 }
	__asm { cmp eax, 3 }
	__asm { jne L_00742618 }
	__asm { mov edx, dword ptr [esp + 0x20] }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { test edx, edx }
	__asm { jle L_00742606 }
	__asm { movzx eax, word ptr [ecx + 0x118] }
	__asm { cmp edx, eax }
	__asm { jg L_00742606 }
	__asm { push edx }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00741150 }
	__asm { add esp, 0x10 }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_00742606: }
	__asm { push 0xe4ccc8 }
	__asm { push ecx }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_00742618: }
	__asm { push ebx }
	__asm { test eax, eax }
	__asm { jne L_00742674 }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { mov edx, dword ptr [esp + 0x18] }
	__asm { movzx ebx, word ptr [eax + 8] }
	__asm { mov cl, byte ptr [edx + 0x127] }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { cmp ebx, eax }
	__asm { jl L_0074264d }
	__asm { push 0xe4ccf8 }
	__asm { push edx }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_0074264d: }
	__asm { mov eax, ebx }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [esp + 0xc], al }
	__asm { push 2 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { push edx }
	__asm { mov byte ptr [esp + 0x1d], bl }
	__asm { call fn_00741150 }
	__asm { add esp, 0x10 }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_00742674: }
	__asm { cmp eax, 2 }
	__asm { jne L_007426f0 }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { mov edx, eax }
	__asm { mov byte ptr [esp + 0xd], al }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { mov ebx, eax }
	__asm { mov byte ptr [esp + 0xf], al }
	__asm { movzx eax, word ptr [ecx + 6] }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [esp + 0x11], al }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { shr edx, 8 }
	__asm { shr ebx, 8 }
	__asm { shr ecx, 8 }
	__asm { cmp byte ptr [eax + 0x127], 8 }
	__asm { mov byte ptr [esp + 0xc], dl }
	__asm { mov byte ptr [esp + 0xe], bl }
	__asm { mov byte ptr [esp + 0x10], cl }
	__asm { jne L_007426d6 }
	__asm { or cl, bl }
	__asm { or cl, dl }
	__asm { je L_007426d6 }
	__asm { push 0xe4cd38 }
	__asm { push eax }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_007426d6: }
	__asm { push 6 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [esp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00741150 }
	__asm { add esp, 0x10 }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_007426f0: }
	__asm { push 0xe4cd78 }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737840();
extern "C" void fn_00739e30();
extern "C" void fn_00741150();
extern "C" void fn_007411d0();
// FUNCTION: ROBLOXSTUDIO 0x00742710
extern "C" __declspec(naked) void asm_00742710()
{
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [esp], 0x44474b62 }
	__asm { mov byte ptr [esp + 4], 0 }
	__asm { cmp eax, 3 }
	__asm { jne L_007427cc }
	__asm { mov edx, dword ptr [esp + 0x18] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x18] }
	__asm { movzx ecx, word ptr [esi + 0x118] }
	__asm { test cx, cx }
	__asm { jne L_0074274a }
	__asm { test byte ptr [esi + 0x230], 1 }
	__asm { jne L_00742765 }
	__asm { L_0074274a: }
	__asm { movzx eax, byte ptr [edx] }
	__asm { cmp ax, cx }
	__asm { jb L_00742765 }
	__asm { push 0xe4cda0 }
	__asm { push esi }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_00742765: }
	__asm { mov al, byte ptr [edx] }
	__asm { mov byte ptr [esp + 0xc], al }
	__asm { push 1 }
	__asm { lea eax, [esp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_007411d0 }
	__asm { push 1 }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00737840 }
	__asm { push 1 }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00727850 }
	__asm { mov ecx, dword ptr [esi + 0x110] }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x18 }
	__asm { mov byte ptr [esp + 0x44], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 0x10 }
	__asm { mov byte ptr [esp + 0x45], al }
	__asm { mov eax, ecx }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [esp + 0x46], al }
	__asm { push 4 }
	__asm { lea eax, [esp + 0x48] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [esp + 0x53], cl }
	__asm { call fn_00737840 }
	__asm { add esp, 0x30 }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_007427cc: }
	__asm { push ebx }
	__asm { test al, 2 }
	__asm { je L_00742848 }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { movzx eax, word ptr [ecx + 2] }
	__asm { mov edx, eax }
	__asm { mov byte ptr [esp + 0xd], al }
	__asm { movzx eax, word ptr [ecx + 4] }
	__asm { mov ebx, eax }
	__asm { mov byte ptr [esp + 0xf], al }
	__asm { movzx eax, word ptr [ecx + 6] }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [esp + 0x11], al }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { shr edx, 8 }
	__asm { shr ebx, 8 }
	__asm { shr ecx, 8 }
	__asm { cmp byte ptr [eax + 0x127], 8 }
	__asm { mov byte ptr [esp + 0xc], dl }
	__asm { mov byte ptr [esp + 0xe], bl }
	__asm { mov byte ptr [esp + 0x10], cl }
	__asm { jne L_0074282e }
	__asm { or cl, bl }
	__asm { or cl, dl }
	__asm { je L_0074282e }
	__asm { push 0xe4cdc8 }
	__asm { push eax }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_0074282e: }
	__asm { push 6 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [esp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00741150 }
	__asm { add esp, 0x10 }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_00742848: }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov edx, dword ptr [esp + 0x18] }
	__asm { movzx ebx, word ptr [eax + 8] }
	__asm { mov cl, byte ptr [edx + 0x127] }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { cmp ebx, eax }
	__asm { jl L_00742878 }
	__asm { push 0xe4ce08 }
	__asm { push edx }
	__asm { call fn_00739e30 }
	__asm { add esp, 8 }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_00742878: }
	__asm { mov eax, ebx }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [esp + 0xc], al }
	__asm { push 2 }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { push edx }
	__asm { mov byte ptr [esp + 0x1d], bl }
	__asm { call fn_00741150 }
	__asm { add esp, 0x10 }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" void fn_00727850();
extern "C" void fn_00737840();
extern "C" void fn_00739a00();
extern "C" void fn_007411d0();
extern "C" void fn_00741240();
extern "C" void fn_00741280();
extern "C" void fn_00742980();
extern "C" void fn_00742b40();
extern "C" void fn_007447d0();
extern "C" void fn_00744a50();
// FUNCTION: ROBLOXSTUDIO 0x00742c50
extern "C" __declspec(naked) void asm_00742c50()
{
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x30] }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x38] }
	__asm { mov dword ptr [esp + 0x18], 0x7458547a }
	__asm { push edi }
	__asm { mov byte ptr [esp + 0x20], 0 }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { call fn_00742980 }
	__asm { mov esi, eax }
	__asm { add esp, 0xc }
	__asm { test esi, esi }
	__asm { jne L_00742cb9 }
	__asm { push dword ptr [esp + 0xc] }
	__asm { push edi }
	__asm { call fn_00739a00 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x24 }
	__asm { ret }
	__asm { L_00742cb9: }
	__asm { mov edx, dword ptr [esp + 0x38] }
	__asm { push ebx }
	__asm { test edx, edx }
	__asm { je L_00742d64 }
	__asm { cmp byte ptr [edx], 0 }
	__asm { je L_00742d64 }
	__asm { mov ebx, dword ptr [esp + 0x44] }
	__asm { cmp ebx, -1 }
	__asm { je L_00742d64 }
	__asm { mov ecx, edx }
	__asm { push ebp }
	__asm { lea ebp, [ecx + 1] }
	__asm { L_00742ce2: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00742ce2 }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { push ebx }
	__asm { sub ecx, ebp }
	__asm { push ecx }
	__asm { push edx }
	__asm { push edi }
	__asm { call fn_007447d0 }
	__asm { add eax, 2 }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { lea eax, [esp + 0x30] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_007411d0 }
	__asm { lea eax, [esi + 1] }
	__asm { mov esi, dword ptr [esp + 0x34] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00741240 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00739a00 }
	__asm { add esp, 0x34 }
	__asm { mov byte ptr [esp + 0x13], bl }
	__asm { pop ebp }
	__asm { test edi, edi }
	__asm { je L_00742d49 }
	__asm { push 1 }
	__asm { lea eax, [esp + 0x13] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00737840 }
	__asm { push 1 }
	__asm { lea eax, [esp + 0x1f] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00727850 }
	__asm { add esp, 0x18 }
	__asm { L_00742d49: }
	__asm { lea eax, [esp + 0x1c] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00744a50 }
	__asm { push edi }
	__asm { call fn_00741280 }
	__asm { add esp, 0xc }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x24 }
	__asm { ret }
	__asm { L_00742d64: }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { push 0 }
	__asm { push edx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00742b40 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00739a00 }
	__asm { add esp, 0x18 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x24 }
	__asm { ret }
}

extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00743760
extern "C" __declspec(naked) void asm_00743760()
{
	__asm { sub esp, 0x44 }
	__asm { mov ecx, dword ptr [esp + 0x50] }
	__asm { mov dword ptr [esp + 0x28], 0 }
	__asm { mov dword ptr [esp + 0x2c], 4 }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { mov dword ptr [esp + 0x34], 2 }
	__asm { mov dword ptr [esp + 0x38], 0 }
	__asm { mov dword ptr [esp + 0x3c], 1 }
	__asm { mov dword ptr [esp + 0x40], 0 }
	__asm { mov dword ptr [esp + 0xc], 8 }
	__asm { mov dword ptr [esp + 0x10], 8 }
	__asm { mov dword ptr [esp + 0x14], 4 }
	__asm { mov dword ptr [esp + 0x18], 4 }
	__asm { mov dword ptr [esp + 0x1c], 2 }
	__asm { mov dword ptr [esp + 0x20], 2 }
	__asm { mov dword ptr [esp + 0x24], 1 }
	__asm { cmp ecx, 6 }
	__asm { jge L_00743a28 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x54] }
	__asm { shl ecx, 2 }
	__asm { movzx ebx, byte ptr [esi + 0xb] }
	__asm { mov eax, ebx }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x60], ecx }
	__asm { dec eax }
	__asm { je L_00743967 }
	__asm { dec eax }
	__asm { je L_007438eb }
	__asm { sub eax, 2 }
	__asm { je L_0074386c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ebp, dword ptr [esp + ecx + 0x38] }
	__asm { mov edi, dword ptr [esp + 0x5c] }
	__asm { shr ebx, 3 }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { mov dword ptr [esp + 0x10], ebp }
	__asm { cmp ebp, eax }
	__asm { jae L_007439e3 }
	__asm { mov eax, dword ptr [esp + ecx + 0x1c] }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { imul eax, ebx }
	__asm { mov edx, dword ptr [esp + 0x60] }
	__asm { mov esi, ebp }
	__asm { imul esi, ebx }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { add esi, edi }
	__asm { nop }
	__asm { L_00743840: }
	__asm { cmp edi, esi }
	__asm { je L_0074385b }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov edx, dword ptr [esp + 0x6c] }
	__asm { add esp, 0xc }
	__asm { L_0074385b: }
	__asm { add ebp, dword ptr [esp + edx + 0x1c] }
	__asm { add edi, ebx }
	__asm { add esi, eax }
	__asm { cmp ebp, ecx }
	__asm { jb L_00743840 }
	__asm { jmp L_007439df }
	__asm { L_0074386c: }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [esp + ecx + 0x38] }
	__asm { mov esi, dword ptr [esp + 0x5c] }
	__asm { mov dword ptr [esp + 0x18], edi }
	__asm { mov edx, 4 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov dword ptr [esp + 0x10], ebx }
	__asm { cmp ebx, edi }
	__asm { jae L_007439e3 }
	__asm { mov ebp, dword ptr [esp + ecx + 0x1c] }
	__asm { L_00743897: }
	__asm { mov edi, dword ptr [esp + 0x5c] }
	__asm { mov al, bl }
	__asm { and al, 1 }
	__asm { shl al, 2 }
	__asm { mov ecx, 4 }
	__asm { sub cl, al }
	__asm { mov eax, ebx }
	__asm { shr eax, 1 }
	__asm { movzx eax, byte ptr [eax + edi] }
	__asm { shr eax, cl }
	__asm { mov ecx, edx }
	__asm { and eax, 0xf }
	__asm { shl eax, cl }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { or ecx, eax }
	__asm { mov dword ptr [esp + 0x14], ecx }
	__asm { test edx, edx }
	__asm { jne L_007438d8 }
	__asm { mov byte ptr [esi], cl }
	__asm { inc esi }
	__asm { xor ecx, ecx }
	__asm { mov edx, 4 }
	__asm { mov dword ptr [esp + 0x14], ecx }
	__asm { jmp L_007438db }
	__asm { L_007438d8: }
	__asm { sub edx, 4 }
	__asm { L_007438db: }
	__asm { add ebx, ebp }
	__asm { cmp ebx, dword ptr [esp + 0x18] }
	__asm { jb L_00743897 }
	__asm { cmp edx, 4 }
	__asm { jmp L_007439db }
	__asm { L_007438eb: }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [esp + ecx + 0x38] }
	__asm { mov esi, dword ptr [esp + 0x5c] }
	__asm { mov dword ptr [esp + 0x18], edi }
	__asm { mov edx, 6 }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov dword ptr [esp + 0x10], ebx }
	__asm { cmp ebx, edi }
	__asm { jae L_007439e3 }
	__asm { mov ebp, dword ptr [esp + ecx + 0x1c] }
	__asm { L_00743916: }
	__asm { mov edi, dword ptr [esp + 0x5c] }
	__asm { mov al, bl }
	__asm { and al, 3 }
	__asm { mov ecx, 3 }
	__asm { sub cl, al }
	__asm { mov eax, ebx }
	__asm { shr eax, 2 }
	__asm { add cl, cl }
	__asm { movzx eax, byte ptr [eax + edi] }
	__asm { shr eax, cl }
	__asm { mov ecx, edx }
	__asm { and eax, 3 }
	__asm { shl eax, cl }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { or ecx, eax }
	__asm { mov dword ptr [esp + 0x14], ecx }
	__asm { test edx, edx }
	__asm { jne L_00743957 }
	__asm { mov byte ptr [esi], cl }
	__asm { inc esi }
	__asm { xor ecx, ecx }
	__asm { mov edx, 6 }
	__asm { mov dword ptr [esp + 0x14], ecx }
	__asm { jmp L_0074395a }
	__asm { L_00743957: }
	__asm { sub edx, 2 }
	__asm { L_0074395a: }
	__asm { add ebx, ebp }
	__asm { cmp ebx, dword ptr [esp + 0x18] }
	__asm { jb L_00743916 }
	__asm { cmp edx, 6 }
	__asm { jmp L_007439db }
	__asm { L_00743967: }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [esp + ecx + 0x38] }
	__asm { mov esi, dword ptr [esp + 0x5c] }
	__asm { mov dword ptr [esp + 0x18], edi }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov edx, 7 }
	__asm { mov dword ptr [esp + 0x10], ebx }
	__asm { cmp ebx, edi }
	__asm { jae L_007439e3 }
	__asm { mov ebp, dword ptr [esp + ecx + 0x1c] }
	__asm { mov edi, edi }
	__asm { L_00743990: }
	__asm { mov edi, dword ptr [esp + 0x5c] }
	__asm { mov al, bl }
	__asm { and al, 7 }
	__asm { mov ecx, 7 }
	__asm { sub cl, al }
	__asm { mov eax, ebx }
	__asm { shr eax, 3 }
	__asm { movzx eax, byte ptr [eax + edi] }
	__asm { shr eax, cl }
	__asm { mov ecx, edx }
	__asm { and eax, 1 }
	__asm { shl eax, cl }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { or ecx, eax }
	__asm { mov dword ptr [esp + 0x14], ecx }
	__asm { test edx, edx }
	__asm { jne L_007439cf }
	__asm { mov byte ptr [esi], cl }
	__asm { inc esi }
	__asm { xor ecx, ecx }
	__asm { mov edx, 7 }
	__asm { mov dword ptr [esp + 0x14], ecx }
	__asm { jmp L_007439d0 }
	__asm { L_007439cf: }
	__asm { dec edx }
	__asm { L_007439d0: }
	__asm { add ebx, ebp }
	__asm { cmp ebx, dword ptr [esp + 0x18] }
	__asm { jb L_00743990 }
	__asm { cmp edx, 7 }
	__asm { L_007439db: }
	__asm { je L_007439df }
	__asm { mov byte ptr [esi], cl }
	__asm { L_007439df: }
	__asm { mov ecx, dword ptr [esp + 0x60] }
	__asm { L_007439e3: }
	__asm { mov esi, dword ptr [esp + ecx + 0x1c] }
	__asm { mov edi, dword ptr [esp + 0x58] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, dword ptr [edi] }
	__asm { dec eax }
	__asm { add eax, ecx }
	__asm { xor edx, edx }
	__asm { div esi }
	__asm { mov cl, byte ptr [edi + 0xb] }
	__asm { cmp cl, 8 }
	__asm { movzx ecx, cl }
	__asm { mov dword ptr [edi], eax }
	__asm { jb L_00743a18 }
	__asm { shr ecx, 3 }
	__asm { imul ecx, eax }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x44 }
	__asm { ret }
	__asm { L_00743a18: }
	__asm { imul ecx, eax }
	__asm { add ecx, 7 }
	__asm { shr ecx, 3 }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { L_00743a28: }
	__asm { add esp, 0x44 }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00737360();
extern "C" void fn_007375a0();
extern "C" void fn_007375e0();
extern "C" void fn_00737630();
extern "C" void fn_007376b0();
extern "C" void fn_00744b60();
extern "C" void fn_00744c70();
extern "C" void fn_00744d10();
extern "C" void fn_00744e40();
// FUNCTION: ROBLOXSTUDIO 0x007450d0
extern "C" __declspec(naked) void asm_007450d0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { test esi, esi }
	__asm { je L_00745225 }
	__asm { test dword ptr [esi + 0x70], 0x100000 }
	__asm { je L_00745102 }
	__asm { mov ecx, dword ptr [esi + 0x5c] }
	__asm { test ecx, ecx }
	__asm { je L_00745102 }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { push esi }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { L_00745102: }
	__asm { test dword ptr [esi + 0x70], 0x8000 }
	__asm { je L_00745125 }
	__asm { push dword ptr [esi + 0x6c] }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00737360 }
	__asm { add esp, 0xc }
	__asm { L_00745125: }
	__asm { test dword ptr [esi + 0x70], 0x10000 }
	__asm { je L_00745145 }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_007375e0 }
	__asm { add esp, 8 }
	__asm { L_00745145: }
	__asm { test byte ptr [esi + 0x70], 4 }
	__asm { je L_0074516a }
	__asm { movzx eax, byte ptr [esi + 0x127] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00744d10 }
	__asm { add esp, 0xc }
	__asm { L_0074516a: }
	__asm { test byte ptr [esi + 0x70], 0x10 }
	__asm { je L_00745187 }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_007375a0 }
	__asm { add esp, 8 }
	__asm { L_00745187: }
	__asm { test byte ptr [esi + 0x70], 8 }
	__asm { je L_007451ab }
	__asm { lea eax, [esi + 0x181] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00744e40 }
	__asm { add esp, 0xc }
	__asm { L_007451ab: }
	__asm { test dword ptr [esi + 0x70], 0x20000 }
	__asm { je L_007451cb }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00744b60 }
	__asm { add esp, 8 }
	__asm { L_007451cb: }
	__asm { test dword ptr [esi + 0x70], 0x80000 }
	__asm { je L_007451eb }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00744c70 }
	__asm { add esp, 8 }
	__asm { L_007451eb: }
	__asm { test byte ptr [esi + 0x70], 1 }
	__asm { je L_00745208 }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_007376b0 }
	__asm { add esp, 8 }
	__asm { L_00745208: }
	__asm { test byte ptr [esi + 0x70], 0x20 }
	__asm { je L_00745225 }
	__asm { mov eax, dword ptr [esi + 0xec] }
	__asm { inc eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x100] }
	__asm { push eax }
	__asm { call fn_00737630 }
	__asm { add esp, 8 }
	__asm { L_00745225: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0073d6c0();
// FUNCTION: ROBLOXSTUDIO 0x007453e0
extern "C" __declspec(naked) void asm_007453e0()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { lea edx, [eax*8] }
	__asm { cmp ecx, edx }
	__asm { jb L_0074541e }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { shl eax, 3 }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { shl eax, 3 }
	__asm { mov dword ptr [esi + 0x104], 1 }
	__asm { mov dword ptr [esi + 0x108], 1 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0074541e: }
	__asm { push edi }
	__asm { lea edi, [eax*4] }
	__asm { cmp ecx, edi }
	__asm { jb L_00745453 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { shl eax, 2 }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { shl eax, 2 }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x104], 2 }
	__asm { mov dword ptr [esi + 0x108], 2 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00745453: }
	__asm { push ebp }
	__asm { lea ebp, [ecx + ecx*2] }
	__asm { cmp ebp, edx }
	__asm { jb L_007454a2 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { add eax, eax }
	__asm { push 3 }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push 3 }
	__asm { lea eax, [eax + ecx*2] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { add esp, 0x10 }
	__asm { lea eax, [eax + ecx*2] }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x104], 3 }
	__asm { mov dword ptr [esi + 0x108], 3 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007454a2: }
	__asm { push ebx }
	__asm { lea ebx, [eax + eax] }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { cmp ecx, ebx }
	__asm { jb L_007454d7 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { add eax, eax }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { add eax, eax }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x104], 4 }
	__asm { mov dword ptr [esi + 0x108], 4 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007454d7: }
	__asm { lea ebx, [ecx + ecx*4] }
	__asm { cmp ebx, edx }
	__asm { jb L_00745522 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { push 5 }
	__asm { lea eax, [eax + eax*2] }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { add eax, dword ptr [esi + 0x1c] }
	__asm { push 5 }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { lea eax, [eax + eax*2] }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { add esp, 0x10 }
	__asm { add eax, dword ptr [esi + 0x20] }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x104], 5 }
	__asm { mov dword ptr [esi + 0x108], 5 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00745522: }
	__asm { cmp ebp, edi }
	__asm { jb L_00745562 }
	__asm { push 3 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_0073d6c0 }
	__asm { add eax, dword ptr [esi + 0x1c] }
	__asm { push 3 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { call fn_0073d6c0 }
	__asm { add esp, 0x10 }
	__asm { add eax, dword ptr [esi + 0x20] }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x104], 6 }
	__asm { mov dword ptr [esi + 0x108], 6 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00745562: }
	__asm { lea ebx, [ecx*8] }
	__asm { sub ebx, ecx }
	__asm { cmp ebx, edx }
	__asm { jb L_007455ab }
	__asm { push 7 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_0073d6c0 }
	__asm { add eax, dword ptr [esi + 0x1c] }
	__asm { push 7 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { call fn_0073d6c0 }
	__asm { add esp, 0x10 }
	__asm { add eax, dword ptr [esi + 0x20] }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x104], 7 }
	__asm { mov dword ptr [esi + 0x108], 7 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007455ab: }
	__asm { cmp ecx, eax }
	__asm { jb L_007455d4 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { pop ebx }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x104], 8 }
	__asm { mov dword ptr [esi + 0x108], 8 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007455d4: }
	__asm { lea eax, [ecx + ecx*8] }
	__asm { cmp eax, edx }
	__asm { jb L_00745619 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { shl eax, 3 }
	__asm { push 9 }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { shl eax, 3 }
	__asm { push 9 }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x104], 9 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x108], 9 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00745619: }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { cmp eax, edi }
	__asm { jb L_0074565e }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { shl eax, 2 }
	__asm { push 5 }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { shl eax, 2 }
	__asm { push 5 }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x104], 0xa }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x108], 0xa }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0074565e: }
	__asm { mov eax, ecx }
	__asm { imul eax, eax, 0xb }
	__asm { cmp eax, edx }
	__asm { jb L_007456a5 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { shl eax, 3 }
	__asm { push 0xb }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { shl eax, 3 }
	__asm { push 0xb }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x104], 0xb }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x108], 0xb }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007456a5: }
	__asm { cmp ebp, dword ptr [esp + 0x14] }
	__asm { jb L_007456e7 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { add eax, eax }
	__asm { push 3 }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { add eax, eax }
	__asm { push 3 }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x104], 0xc }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x108], 0xc }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007456e7: }
	__asm { mov eax, ecx }
	__asm { imul eax, eax, 0xd }
	__asm { cmp eax, edx }
	__asm { jb L_0074572e }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { shl eax, 3 }
	__asm { push 0xd }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { shl eax, 3 }
	__asm { push 0xd }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x104], 0xd }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x108], 0xd }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0074572e: }
	__asm { cmp ebx, edi }
	__asm { jb L_00745770 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { shl eax, 2 }
	__asm { push 7 }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { shl eax, 2 }
	__asm { push 7 }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x104], 0xe }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x108], 0xe }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00745770: }
	__asm { mov eax, ecx }
	__asm { shl eax, 4 }
	__asm { sub eax, ecx }
	__asm { cmp eax, edx }
	__asm { jb L_007457b9 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { shl eax, 3 }
	__asm { push 0xf }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { shl eax, 3 }
	__asm { push 0xf }
	__asm { push eax }
	__asm { call fn_0073d6c0 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x104], 0xf }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x108], 0xf }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_007457b9: }
	__asm { push 2 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_0073d6c0 }
	__asm { push 2 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { call fn_0073d6c0 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x104], 0x10 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x108], 0x10 }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00749550
extern "C" __declspec(naked) void asm_00749550()
{
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { cmp byte ptr [esi + 0x6c], 0 }
	__asm { jne L_00749684 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x18] }
	__asm { test ebx, ebx }
	__asm { je L_00749683 }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { push ebp }
	__asm { push edi }
	__asm { L_00749573: }
	__asm { cmp byte ptr [esi + 0x6c], 0 }
	__asm { jne L_00749671 }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { movsx edi, byte ptr [eax] }
	__asm { inc edx }
	__asm { and edi, 1 }
	__asm { mov ecx, 0x18 }
	__asm { sub ecx, edx }
	__asm { shl edi, cl }
	__asm { or edi, dword ptr [esi + 0xc] }
	__asm { cmp edx, 8 }
	__asm { jl L_0074966b }
	__asm { mov ebp, edx }
	__asm { shr ebp, 3 }
	__asm { mov eax, ebp }
	__asm { neg eax }
	__asm { mov dword ptr [esp + 0x18], ebp }
	__asm { lea edx, [edx + eax*8] }
	__asm { mov dword ptr [esp + 0x10], edx }
	__asm { L_007495b0: }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { mov ebx, edi }
	__asm { sar ebx, 0x10 }
	__asm { and ebx, 0xff }
	__asm { mov byte ptr [eax], bl }
	__asm { inc dword ptr [esi + 0x70] }
	__asm { dec dword ptr [esi + 0x74] }
	__asm { jne L_00749604 }
	__asm { mov eax, dword ptr [esi + 0x78] }
	__asm { push eax }
	__asm { mov ebp, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_007495f4 }
	__asm { mov eax, dword ptr [esi + 0x78] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi + 0x78] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_007495f4: }
	__asm { mov eax, dword ptr [ebp] }
	__asm { mov dword ptr [esi + 0x70], eax }
	__asm { mov eax, dword ptr [ebp + 4] }
	__asm { mov ebp, dword ptr [esp + 0x18] }
	__asm { mov dword ptr [esi + 0x74], eax }
	__asm { L_00749604: }
	__asm { cmp ebx, 0xff }
	__asm { jne L_00749651 }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { mov byte ptr [eax], 0 }
	__asm { inc dword ptr [esi + 0x70] }
	__asm { dec dword ptr [esi + 0x74] }
	__asm { jne L_00749651 }
	__asm { mov eax, dword ptr [esi + 0x78] }
	__asm { push eax }
	__asm { mov ebx, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00749646 }
	__asm { mov eax, dword ptr [esi + 0x78] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [eax + 0x14], 0x19 }
	__asm { mov eax, dword ptr [esi + 0x78] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00749646: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi + 0x70], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 0x74], eax }
	__asm { L_00749651: }
	__asm { shl edi, 8 }
	__asm { dec ebp }
	__asm { mov dword ptr [esp + 0x18], ebp }
	__asm { jne L_007495b0 }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { mov eax, dword ptr [esp + 0x1c] }
	__asm { mov ebx, dword ptr [esp + 0x20] }
	__asm { L_0074966b: }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi + 0x10], edx }
	__asm { L_00749671: }
	__asm { inc eax }
	__asm { dec ebx }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { mov dword ptr [esp + 0x20], ebx }
	__asm { jne L_00749573 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { L_00749683: }
	__asm { pop ebx }
	__asm { L_00749684: }
	__asm { pop esi }
	__asm { pop ecx }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0074c5c0();
// FUNCTION: ROBLOXSTUDIO 0x0074c7d0
extern "C" __declspec(naked) void asm_0074c7d0()
{
	__asm { push ecx }
	__asm { push ebx }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x10] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebp + 0x188] }
	__asm { mov ebx, dword ptr [ebp + 0xc4] }
	__asm { xor edi, edi }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { cmp dword ptr [ebp + 0x24], edi }
	__asm { jle L_0074c85b }
	__asm { add ebx, 0xc }
	__asm { push esi }
	__asm { L_0074c7f3: }
	__asm { mov ecx, dword ptr [ebx + 0x1c] }
	__asm { imul ecx, dword ptr [ebx] }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { idiv dword ptr [ebp + 0x11c] }
	__asm { xor edx, edx }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { div ecx }
	__asm { mov esi, edx }
	__asm { test esi, esi }
	__asm { cmove esi, ecx }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { test edi, edi }
	__asm { jne L_0074c82c }
	__asm { lea eax, [esi - 1] }
	__asm { cdq }
	__asm { idiv ecx }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { inc eax }
	__asm { mov dword ptr [edx + 0x48], eax }
	__asm { jmp L_0074c830 }
	__asm { L_0074c82c: }
	__asm { mov edx, dword ptr [esp + 0x10] }
	__asm { L_0074c830: }
	__asm { mov eax, dword ptr [edx + 0x40] }
	__asm { mov eax, dword ptr [edx + eax*4 + 0x38] }
	__asm { lea edx, [ecx + ecx] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { test edx, edx }
	__asm { jle L_0074c851 }
	__asm { lea eax, [eax + esi*4] }
	__asm { lea esi, [eax - 4] }
	__asm { L_0074c847: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea eax, [eax + 4] }
	__asm { dec edx }
	__asm { jne L_0074c847 }
	__asm { L_0074c851: }
	__asm { inc edi }
	__asm { add ebx, 0x58 }
	__asm { cmp edi, dword ptr [ebp + 0x24] }
	__asm { jl L_0074c7f3 }
	__asm { pop esi }
	__asm { L_0074c85b: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { pop ecx }
	__asm { ret }
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x188] }
	__asm { sub eax, 0 }
	__asm { je L_0074c897 }
	__asm { sub eax, 2 }
	__asm { je L_0074c88e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { mov dword ptr [eax + 0x14], 3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0074c88e: }
	__asm { mov dword ptr [esi + 4], 0x74c4d0 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0074c897: }
	__asm { mov eax, dword ptr [ecx + 0x1a4] }
	__asm { cmp byte ptr [eax + 8], 0 }
	__asm { je L_0074c8d5 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 4], 0x74c3a0 }
	__asm { call fn_0074c5c0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0074c8d5: }
	__asm { mov dword ptr [esi + 4], 0x74c330 }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { pop esi }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0076e670();
// FUNCTION: ROBLOXSTUDIO 0x0076e7e0
extern "C" __declspec(naked) void asm_0076e7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x118] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 0x11c] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 0x120] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0x124] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x128] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x12c] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { sete al }
	__asm { mov byte ptr [esi], al }
	__asm { call fn_0076e670 }
	__asm { fstp dword ptr [ebp + 8] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fistp dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov eax, esi }
	__asm { test ecx, ecx }
	__asm { je L_0076e852 }
	__asm { fild dword ptr [ebp + 8] }
	__asm { fdivr qword ptr [esi + 0x10] }
	__asm { fstp qword ptr [esi + 0x10] }
	__asm { L_0076e852: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_011ddd08[];
extern "C" char g_012fc991[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b8aae();
extern "C" void fn_0076e2e0();
extern "C" void fn_0076ef40();
extern "C" void fn_0076ef90();
// FUNCTION: ROBLOXSTUDIO 0x0076ed70
extern "C" __declspec(naked) void asm_0076ed70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xc], 0x8000000 }
	__asm { jb L_0076ed95 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp byte ptr [eax + 0x2a], 0 }
	__asm { je L_0076ed95 }
	__asm { cmp dword ptr [eax + 0x2c], 2 }
	__asm { jl L_0076ed95 }
	__asm { mov eax, 1 }
	__asm { jmp L_0076ed97 }
	__asm { L_0076ed95: }
	__asm { xor eax, eax }
	__asm { L_0076ed97: }
	__asm { fld qword ptr [ebp + 0x18] }
	__asm { sub esp, 0x18 }
	__asm { mov byte ptr [esi], al }
	__asm { fstp qword ptr [esp + 0x10] }
	__asm { fld qword ptr [ebp + 0x10] }
	__asm { fstp qword ptr [esp + 8] }
	__asm { fld qword ptr [ebp + 8] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_0076ef90 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp byte ptr [eax + 0x26], 0 }
	__asm { je L_0076eed7 }
	__asm { mov eax, dword ptr [esi + 0x8c] }
	__asm { test eax, eax }
	__asm { jle L_0076edcf }
	__asm { dec eax }
	__asm { jmp L_0076ee0f }
	__asm { L_0076edcf: }
	__asm { mov al, byte ptr [g_012fc991] }
	__asm { test al, al }
	__asm { je L_0076edec }
	__asm { push dword ptr [esi + 0x28] }
	__asm { movzx eax, al }
	__asm { push 0xe4d794 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_0076edec: }
	__asm { mov eax, dword ptr [esi + 0x148] }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, xmm0 }
	__asm { movss dword ptr [esi + 0x98], xmm0 }
	__asm { mov eax, dword ptr [g_011ddd08] }
	__asm { mov byte ptr [esi + 0x139], 1 }
	__asm { L_0076ee0f: }
	__asm { cmp byte ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x8c], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { jne L_0076ee99 }
	__asm { mov byte ptr [esi + 0x24], 1 }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { test edx, edx }
	__asm { jne L_0076ee5b }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { cmp eax, 0x15 }
	__asm { push edi }
	__asm { lea edi, [ebp + 0xc] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { cmovle ecx, edi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp + 0x14], 0x15 }
	__asm { cmp dword ptr [ecx], 1 }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { cmovg eax, ecx }
	__asm { mov dword ptr [ebp + 0x1c], 1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { pop edi }
	__asm { jmp L_0076ee5e }
	__asm { L_0076ee5b: }
	__asm { mov dword ptr [esi + 0x28], edx }
	__asm { L_0076ee5e: }
	__asm { mov al, byte ptr [g_012fc991] }
	__asm { test al, al }
	__asm { je L_0076ee7e }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x28] }
	__asm { movzx eax, al }
	__asm { push edx }
	__asm { push 0xe4d7c0 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_0076ee7e: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi + 0x148] }
	__asm { cmp dword ptr [eax + 0xc], 2 }
	__asm { je L_0076eeee }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { shl eax, 6 }
	__asm { mov eax, dword ptr [eax + ecx + 0xc] }
	__asm { jmp L_0076eef1 }
	__asm { L_0076ee99: }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov byte ptr [ebp + 0x1c], 0 }
	__asm { test eax, eax }
	__asm { jne L_0076eeac }
	__asm { mov al, byte ptr [esi + 1] }
	__asm { mov byte ptr [ebp + 0x1c], al }
	__asm { jmp L_0076eebb }
	__asm { L_0076eeac: }
	__asm { cmp eax, dword ptr [esi + 0x28] }
	__asm { je L_0076eebb }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { call fn_0076ef40 }
	__asm { L_0076eebb: }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { fld qword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { sub esp, 0x10 }
	__asm { fstp qword ptr [esp + 8] }
	__asm { fld qword ptr [ebp + 8] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_0076e2e0 }
	__asm { jmp L_0076ef1a }
	__asm { L_0076eed7: }
	__asm { cmp byte ptr [esi + 0x24], 0 }
	__asm { je L_0076ef1a }
	__asm { mov ecx, dword ptr [esi + 0x148] }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { L_0076eeee: }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { L_0076eef1: }
	__asm { mov dword ptr [esi + 0x140], eax }
	__asm { mov byte ptr [esi + 0x139], 1 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { mulss xmm0, xmm0 }
	__asm { movss dword ptr [esi + 0x98], xmm0 }
	__asm { mov eax, dword ptr [g_011ddd08] }
	__asm { mov dword ptr [esi + 0x8c], eax }
	__asm { L_0076ef1a: }
	__asm { cmp byte ptr [esi + 0x139], 0 }
	__asm { mov eax, dword ptr [esi + 0x13c] }
	__asm { mov dword ptr [esi + 0x144], eax }
	__asm { je L_0076ef39 }
	__asm { mov dword ptr [esi + 0x13c], 0 }
	__asm { L_0076ef39: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_01038250[];
extern "C" void fn_00402f60();
extern "C" void fn_00422630();
extern "C" void fn_0067e360();
// FUNCTION: ROBLOXSTUDIO 0x0076f130
extern "C" __declspec(naked) void asm_0076f130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov ebx, dword ptr [esi + 0x10] }
	__asm { mov edi, ecx }
	__asm { jb L_0076f14b }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0076f14d }
	__asm { L_0076f14b: }
	__asm { mov ecx, esi }
	__asm { L_0076f14d: }
	__asm { mov eax, 3 }
	__asm { cmp ebx, eax }
	__asm { cmovb eax, ebx }
	__asm { push eax }
	__asm { push 0x102eff4 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_0076f18c }
	__asm { cmp ebx, 3 }
	__asm { jb L_0076f18c }
	__asm { cmp ebx, 3 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_0076f18c }
	__asm { movzx eax, byte ptr [edi + 0x11] }
	__asm { pop edi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { fild dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076f18c: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0076f196 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0076f198 }
	__asm { L_0076f196: }
	__asm { mov ecx, esi }
	__asm { L_0076f198: }
	__asm { mov eax, 0xa }
	__asm { cmp ebx, eax }
	__asm { cmovb eax, ebx }
	__asm { push eax }
	__asm { push 0xe4dad0 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_0076f1d3 }
	__asm { cmp ebx, 0xa }
	__asm { jb L_0076f1d3 }
	__asm { cmp ebx, 0xa }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_0076f1d3 }
	__asm { fild dword ptr [edi + 0x140] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076f1d3: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0076f1dd }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0076f1df }
	__asm { L_0076f1dd: }
	__asm { mov ecx, esi }
	__asm { L_0076f1df: }
	__asm { mov eax, 0xb }
	__asm { cmp ebx, eax }
	__asm { cmovb eax, ebx }
	__asm { push eax }
	__asm { push 0xe4dadc }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_0076f21a }
	__asm { cmp ebx, 0xb }
	__asm { jb L_0076f21a }
	__asm { cmp ebx, 0xb }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_0076f21a }
	__asm { fild dword ptr [edi + 0x144] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076f21a: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0076f224 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0076f226 }
	__asm { L_0076f224: }
	__asm { mov ecx, esi }
	__asm { L_0076f226: }
	__asm { mov eax, 0xc }
	__asm { cmp ebx, eax }
	__asm { cmovb eax, ebx }
	__asm { push eax }
	__asm { push 0xe4dae8 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_0076f263 }
	__asm { cmp ebx, 0xc }
	__asm { jb L_0076f263 }
	__asm { cmp ebx, 0xc }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_0076f263 }
	__asm { fld dword ptr [edi + 0x98] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { fsqrt }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076f263: }
	__asm { push 0xe4daf8 }
	__asm { push esi }
	__asm { call fn_00422630 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0076f281 }
	__asm { fild dword ptr [edi + 0x28] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076f281: }
	__asm { push 0xe4db04 }
	__asm { push esi }
	__asm { call fn_00422630 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0076f2ad }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [eax + 0x10], ecx }
	__asm { pop edi }
	__asm { sete cl }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { fild dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076f2ad: }
	__asm { push 0xe4db18 }
	__asm { push esi }
	__asm { call fn_00422630 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0076f2ce }
	__asm { fild dword ptr [edi + 0x94] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076f2ce: }
	__asm { push 0xe4db2c }
	__asm { push esi }
	__asm { call fn_00422630 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0076f319 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { jne L_0076f3da }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, 0x16 }
	__asm { jge L_0076f30e }
	__asm { mov eax, dword ptr [edi + 0x148] }
	__asm { pop edi }
	__asm { shl ecx, 6 }
	__asm { pop esi }
	__asm { fld qword ptr [ecx + eax + 0x70] }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076f30e: }
	__asm { fldz }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076f319: }
	__asm { push 0xe4db3c }
	__asm { push esi }
	__asm { call fn_00422630 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0076f33a }
	__asm { fild dword ptr [edi + 0x84] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076f33a: }
	__asm { push 0xe4db50 }
	__asm { push esi }
	__asm { call fn_00422630 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0076f35b }
	__asm { fild dword ptr [edi + 0x88] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076f35b: }
	__asm { push 0xe4db68 }
	__asm { push esi }
	__asm { call fn_00422630 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0076f38a }
	__asm { push -1 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xe4] }
	__asm { call fn_0067e360 }
	__asm { fld qword ptr [eax + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076f38a: }
	__asm { push 0xe4db78 }
	__asm { push esi }
	__asm { call fn_00422630 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0076f3ab }
	__asm { fild dword ptr [edi + 0x114] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076f3ab: }
	__asm { push 0xe4db8c }
	__asm { push esi }
	__asm { call fn_00422630 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_0076f3da }
	__asm { push -1 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xfc] }
	__asm { call fn_0067e360 }
	__asm { fld qword ptr [eax + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0076f3da: }
	__asm { fld qword ptr [g_01038250] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00425f10();
// FUNCTION: ROBLOXSTUDIO 0x0076f8c0
extern "C" __declspec(naked) void asm_0076f8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { add ecx, 0x3c }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { je L_0076f94b }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00425f10 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp esi, edi }
	__asm { je L_0076f915 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { L_0076f905: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esi, 8 }
	__asm { cmp esi, edi }
	__asm { jne L_0076f905 }
	__asm { pop ebx }
	__asm { L_0076f915: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0076f949 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0076f949 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0076f949 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0076f949: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_0076f94b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00619df0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0076f960
extern "C" __declspec(naked) void asm_0076f960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1a656 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe336a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test cl, cl }
	__asm { je L_0076f9d3 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { je L_0076f9d3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0076f9c2 }
	__asm { push 0x22 }
	__asm { push 0xe4dd00 }
	__asm { push 0xe4dd44 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0076f9d3 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0076f9c2: }
	__asm { movzx eax, cl }
	__asm { push 0xe4dd50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0076f9d3: }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00619df0 }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0076fa15 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0076fa14 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0076fa14 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0076fa14: }
	__asm { pop edi }
	__asm { L_0076fa15: }
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
