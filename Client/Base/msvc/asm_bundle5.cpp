// Bundled inline-assembly functions (merged from the recursion output).

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006a6570();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x0069fd10
extern "C" __declspec(naked) void asm_0069fd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14699 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp dword ptr [esi + 0x98], 0x10 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { jb L_0069fd4d }
	__asm { push dword ptr [esi + 0x84] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0069fd4d: }
	__asm { push ebx }
	__asm { mov dword ptr [esi + 0x98], 0xf }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { push edi }
	__asm { mov byte ptr [esi + 0x84], 0 }
	__asm { mov edi, dword ptr [esi + 0x60] }
	__asm { or ebx, 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0069fd98 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069fd98 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069fd98 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069fd98: }
	__asm { mov edi, dword ptr [esi + 0x58] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0069fdc6 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069fdc6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0069fdc6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069fdc6: }
	__asm { push 0x4033d0 }
	__asm { push 7 }
	__asm { push 8 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf669e }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_0069fe1c }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { je L_0069fe03 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_006a6570 }
	__asm { L_0069fe03: }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { L_0069fe1c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10174[];
extern "C" char g_01038198[];
extern "C" char g_012d97c4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0042ba60();
extern "C" void fn_0060f640();
extern "C" void fn_006106d0();
extern "C" void fn_006a0aa0();
extern "C" void fn_006a17f0();
extern "C" void fn_006a21b0();
extern "C" void fn_006a2370();
extern "C" void fn_006a3fd0();
extern "C" void fn_006a5d80();
extern "C" void fn_006a71f0();
extern "C" void fn_006a7900();
extern "C" void fn_006a7a50();
extern "C" void fn_006b8aa8();
extern "C" void fn_006b8aae();
extern "C" void fn_006b8ab4();
extern "C" void fn_006b9740();
extern "C" void fn_006c5410();
extern "C" void fn_006c5500();
extern "C" void fn_007cb440();
extern "C" void fn_00827110();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6840();
// FUNCTION: ROBLOXSTUDIO 0x0069fe30
extern "C" __declspec(naked) void asm_0069fe30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd146ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xac }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { xor ecx, ecx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 0x1b8] }
	__asm { push edi }
	__asm { mov al, byte ptr [eax + 0x3a] }
	__asm { test al, al }
	__asm { sete cl }
	__asm { lea eax, [ebp - 0x78] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x24], ebx }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov dword ptr [ebp - 0x64], 0xf }
	__asm { mov dword ptr [ebp - 0x68], 0 }
	__asm { mov byte ptr [ebp - 0x78], 0 }
	__asm { lea ecx, [ecx*2 - 1] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov dword ptr [ebp - 0x3c], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { fldz }
	__asm { fstp qword ptr [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov dword ptr [ebp - 0x5c], 0 }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov dword ptr [ebp - 0x54], 0 }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov byte ptr [ebp - 0x4c], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { L_0069fed2: }
	__asm { mov eax, dword ptr [ebx + 0x54] }
	__asm { mov ebx, dword ptr [g_00e10174] }
	__asm { lea edi, [eax + 0x14] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x98], 0 }
	__asm { mov esi, 1 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { L_0069fef0: }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { mov cl, 1 }
	__asm { mov al, 0 }
	__asm { lock cmpxchg byte ptr [edx], cl }
	__asm { mov byte ptr [ebp - 0x11], al }
	__asm { cmp byte ptr [ebp - 0x11], 0 }
	__asm { sete al }
	__asm { test al, al }
	__asm { jne L_0069ff21 }
	__asm { cmp esi, 0x10 }
	__asm { jg L_0069ff1d }
	__asm { mov eax, esi }
	__asm { test esi, esi }
	__asm { je L_0069ff19 }
	__asm { L_0069ff14: }
	__asm { pause }
	__asm { dec eax }
	__asm { jne L_0069ff14 }
	__asm { L_0069ff19: }
	__asm { add esi, esi }
	__asm { jmp L_0069fef0 }
	__asm { L_0069ff1d: }
	__asm { call ebx }
	__asm { jmp L_0069fef0 }
	__asm { L_0069ff21: }
	__asm { mov dword ptr [ebp - 0x9c], edi }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov ebx, dword ptr [ebp - 0x24] }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { je L_006a02a5 }
	__asm { lea eax, [ebp - 0xb8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0042ba60 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_0069ff53 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0069ff53: }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec edx }
	__asm { and edx, dword ptr [ecx + 8] }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { push dword ptr [eax + edx*4] }
	__asm { call fn_006a5d80 }
	__asm { mov ecx, esi }
	__asm { call fn_006a71f0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0069ff7a }
	__asm { mov byte ptr [edi], 0 }
	__asm { L_0069ff7a: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0069ffc1 }
	__asm { cmp dword ptr [ebx + 0x64], 0 }
	__asm { ja L_0069ffc1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0069ffb0 }
	__asm { push 0xb1 }
	__asm { push 0xe415c8 }
	__asm { push 0xe41694 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0069ffc1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0069ffb0: }
	__asm { movzx eax, al }
	__asm { push 0xe416b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0069ffc1: }
	__asm { dec dword ptr [ebx + 0x64] }
	__asm { movzx eax, byte ptr [ebx + 4] }
	__asm { lea esi, [ebx + 4] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_0069ffd3 }
	__asm { inc eax }
	__asm { jmp L_0069ffd5 }
	__asm { L_0069ffd3: }
	__asm { xor eax, eax }
	__asm { L_0069ffd5: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x78] }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_00827110 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_006a3fd0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [ebp - 0x34] }
	__asm { je L_006a0035 }
	__asm { test esi, esi }
	__asm { jne L_006a0035 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006a0020 }
	__asm { push 0xb5 }
	__asm { push 0xe415c8 }
	__asm { push 0xe41724 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a0035 }
	__asm { L_006a0020: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe41740 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a0035: }
	__asm { add esi, 0x1c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 0x30], esi }
	__asm { je L_006a0087 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { test eax, eax }
	__asm { je L_006a0051 }
	__asm { cmp dword ptr [eax + 8], 1 }
	__asm { je L_006a0087 }
	__asm { L_006a0051: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006a0072 }
	__asm { push 0xba }
	__asm { push 0xe415c8 }
	__asm { push 0xe417b0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a0087 }
	__asm { L_006a0072: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe417e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a0087: }
	__asm { mov edi, dword ptr [ebp - 0x5c] }
	__asm { test edi, edi }
	__asm { je L_006a025f }
	__asm { lea eax, [ebp - 0x90] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006c5410 }
	__asm { add esp, 4 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_006a17f0 }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { lea eax, [ebp - 0x78] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_0060f640 }
	__asm { mov al, byte ptr [g_012d97c4] }
	__asm { test al, al }
	__asm { je L_006a0184 }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { push ecx }
	__asm { movzx eax, al }
	__asm { push 0xe4187c }
	__asm { push eax }
	__asm { call fn_006b8aa8 }
	__asm { mov al, byte ptr [g_012d97c4] }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_006a0184 }
	__asm { lea eax, [ebp - 0xac] }
	__asm { push eax }
	__asm { call fn_006c5410 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x90] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x80] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { fld qword ptr [ebp - 0x80] }
	__asm { fld qword ptr [g_01038198] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { fmul st(1), st(0) }
	__asm { add esp, 0xc }
	__asm { push dword ptr [edi + 4] }
	__asm { fxch st(1) }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { fstp qword ptr [ebp - 0xa4] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { fmul qword ptr [ebp - 0x48] }
	__asm { fstp qword ptr [ebp - 0x88] }
	__asm { call fn_006106d0 }
	__asm { fld qword ptr [ebp - 0xa4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_00cf6840 }
	__asm { fld qword ptr [ebp - 0x88] }
	__asm { push eax }
	__asm { call fn_00cf6840 }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { movzx eax, byte ptr [g_012d97c4] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { push 0xe41894 }
	__asm { push eax }
	__asm { call fn_006b8ab4 }
	__asm { mov al, byte ptr [g_012d97c4] }
	__asm { add esp, 0x1c }
	__asm { L_006a0184: }
	__asm { mov edx, dword ptr [ebp - 0x54] }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { cmp dword ptr [edi + 8], edx }
	__asm { jne L_006a0194 }
	__asm { cmp dword ptr [edi + 0xc], ecx }
	__asm { je L_006a01ad }
	__asm { L_006a0194: }
	__asm { test al, al }
	__asm { je L_006a01ad }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push edx }
	__asm { movzx eax, al }
	__asm { push 0xe418cc }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_006a01ad: }
	__asm { xor edi, edi }
	__asm { nop }
	__asm { L_006a01b0: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { cmp edi, eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { jae L_006a01d2 }
	__asm { lea ecx, [ecx + edi*8] }
	__asm { call fn_006a7900 }
	__asm { inc edi }
	__asm { jmp L_006a01b0 }
	__asm { L_006a01d2: }
	__asm { lea ecx, [esi + 0x28] }
	__asm { call fn_006a7900 }
	__asm { inc dword ptr [ebx + 0x68] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_006a2370 }
	__asm { mov esi, dword ptr [ebp - 0x28] }
	__asm { add dword ptr [ebx + 0x6c], eax }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_006a021e }
	__asm { or edi, 0xffffffff }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a021e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a021e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a021e: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { jmp L_006a0291 }
	__asm { mov ecx, dword ptr [ebp - 0x94] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x78] }
	__asm { push eax }
	__asm { call fn_006a21b0 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { add esp, 8 }
	__asm { call fn_006a0aa0 }
	__asm { mov eax, 0x6a024d }
	__asm { ret }
	__asm { mov eax, dword ptr [ebp - 0x3c] }
	__asm { mov ebx, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { jmp L_006a0291 }
	__asm { L_006a025f: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { sub eax, dword ptr [esi + 0x1c] }
	__asm { xor edi, edi }
	__asm { sar eax, 3 }
	__asm { test eax, eax }
	__asm { je L_006a0289 }
	__asm { mov edi, edi }
	__asm { L_006a0270: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { lea ecx, [eax + edi*8] }
	__asm { call fn_006a7a50 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { sub eax, dword ptr [esi + 0x1c] }
	__asm { inc edi }
	__asm { sar eax, 3 }
	__asm { cmp edi, eax }
	__asm { jb L_006a0270 }
	__asm { L_006a0289: }
	__asm { lea ecx, [esi + 0x28] }
	__asm { call fn_006a7a50 }
	__asm { L_006a0291: }
	__asm { mov ecx, dword ptr [ebp - 0x38] }
	__asm { mov eax, ecx }
	__asm { inc ecx }
	__asm { mov dword ptr [ebp - 0x38], ecx }
	__asm { cmp eax, dword ptr [ebp - 0x20] }
	__asm { jb L_0069fed2 }
	__asm { jmp L_006a02ac }
	__asm { L_006a02a5: }
	__asm { test edi, edi }
	__asm { je L_006a02ac }
	__asm { mov byte ptr [edi], 0 }
	__asm { L_006a02ac: }
	__asm { mov esi, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 6 }
	__asm { test esi, esi }
	__asm { je L_006a02e0 }
	__asm { or edi, 0xffffffff }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a02e0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a02e0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a02e0: }
	__asm { cmp dword ptr [ebp - 0x64], 0x10 }
	__asm { jb L_006a02f1 }
	__asm { push dword ptr [ebp - 0x78] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a02f1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a0ae0();
extern "C" void fn_006a0b20();
extern "C" void fn_006a3fd0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00827110();
// FUNCTION: ROBLOXSTUDIO 0x006a03e0
extern "C" __declspec(naked) void asm_006a03e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd146e0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { movzx eax, byte ptr [ebx + 4] }
	__asm { lea esi, [ebx + 4] }
	__asm { inc eax }
	__asm { push edi }
	__asm { add eax, esi }
	__asm { je L_006a040f }
	__asm { inc eax }
	__asm { jmp L_006a0411 }
	__asm { L_006a040f: }
	__asm { xor eax, eax }
	__asm { L_006a0411: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edi }
	__asm { push edi }
	__asm { call fn_00827110 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006a3fd0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_006a04a7 }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_006a0b20 }
	__asm { test al, al }
	__asm { je L_006a04a7 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_006a0459 }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_006a0459: }
	__asm { push edi }
	__asm { push 0xe41900 }
	__asm { push 1 }
	__asm { push dword ptr [eax] }
	__asm { call fn_00773930 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_006a049f }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a049f }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a049f }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a049f: }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { call fn_006a0ae0 }
	__asm { L_006a04a7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00403540();
extern "C" void fn_0057dce0();
extern "C" void fn_006a0840();
extern "C" void fn_006a0b20();
extern "C" void fn_006a1580();
extern "C" void fn_006a2370();
extern "C" void fn_006a3fd0();
extern "C" void fn_006a5e10();
extern "C" void fn_006a73e0();
extern "C" void fn_006a7490();
extern "C" void fn_006b9740();
extern "C" void fn_00827110();
// FUNCTION: ROBLOXSTUDIO 0x006a04c0
extern "C" __declspec(naked) void asm_006a04c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1471c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea edi, [esi + 4] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { movzx eax, byte ptr [edi] }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { je L_006a04f5 }
	__asm { inc eax }
	__asm { jmp L_006a04f7 }
	__asm { L_006a04f5: }
	__asm { xor eax, eax }
	__asm { L_006a04f7: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push ebx }
	__asm { call fn_00827110 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_006a3fd0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a0602 }
	__asm { cmp byte ptr [eax + 0x4c], 0 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { je L_006a05f0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_006a0577 }
	__asm { mov ecx, dword ptr [edi + 0x28] }
	__asm { test ecx, ecx }
	__asm { je L_006a053f }
	__asm { cmp dword ptr [ecx + 8], 3 }
	__asm { je L_006a0577 }
	__asm { L_006a053f: }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006a0566 }
	__asm { push 0x115 }
	__asm { push 0xe415c8 }
	__asm { push 0xe41918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a0577 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006a0566: }
	__asm { movzx eax, al }
	__asm { push 0xe41950 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a0577: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_006a1580 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { test eax, eax }
	__asm { mov ecx, 0x12de598 }
	__asm { cmovne ecx, eax }
	__asm { push ecx }
	__asm { call fn_006a2370 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { add esp, 4 }
	__asm { mov ebx, eax }
	__asm { test cl, cl }
	__asm { je L_006a05e4 }
	__asm { cmp dword ptr [esi + 0x70], 0 }
	__asm { jbe L_006a05ac }
	__asm { cmp dword ptr [esi + 0x74], ebx }
	__asm { jae L_006a05e4 }
	__asm { L_006a05ac: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006a05d3 }
	__asm { push 0x11b }
	__asm { push 0xe415c8 }
	__asm { push 0xe419e0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a05e4 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_006a05d3: }
	__asm { movzx eax, cl }
	__asm { push 0xe41a18 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a05e4: }
	__asm { dec dword ptr [esi + 0x70] }
	__asm { sub dword ptr [esi + 0x74], ebx }
	__asm { inc dword ptr [esi + 0x68] }
	__asm { add dword ptr [esi + 0x6c], ebx }
	__asm { L_006a05f0: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea eax, [eax*8 + 0x1c] }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { jmp L_006a074d }
	__asm { L_006a0602: }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_006a0b20 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { call fn_006a5e10 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { cmp edi, ebx }
	__asm { je L_006a0628 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_00403540 }
	__asm { L_006a0628: }
	__asm { cmp byte ptr [ebp + 0xf], 0 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { je L_006a065b }
	__asm { lea esi, [esi + eax*8] }
	__asm { add esi, 0x1c }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { call fn_006a73e0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ebx, 2 }
	__asm { jmp L_006a067c }
	__asm { L_006a065b: }
	__asm { lea eax, [eax*8 + 0x1c] }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { call fn_006a7490 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ebx, 4 }
	__asm { L_006a067c: }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x28] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_0057dce0 }
	__asm { or ecx, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, 4 }
	__asm { je L_006a06cc }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { and ebx, 0xfffffffb }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test esi, esi }
	__asm { je L_006a06cc }
	__asm { lea eax, [esi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a06c9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ecx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a06cc }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a06c9: }
	__asm { or ecx, 0xffffffff }
	__asm { L_006a06cc: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test bl, 2 }
	__asm { je L_006a0703 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { test esi, esi }
	__asm { je L_006a0703 }
	__asm { lea eax, [esi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a0703 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { dec ecx }
	__asm { jne L_006a0703 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a0703: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_006a074a }
	__asm { cmp byte ptr [edi + 0x30], 0 }
	__asm { je L_006a074a }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006a0739 }
	__asm { push 0x12e }
	__asm { push 0xe415c8 }
	__asm { push 0xe41aa4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a074a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006a0739: }
	__asm { movzx eax, al }
	__asm { push 0xe41ab8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a074a: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { L_006a074d: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006a0840 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_0121591c[];
extern "C" char g_012de594[];
extern "C" char g_012de595[];
extern "C" char g_012de596[];
extern "C" void fn_004028a0();
extern "C" void fn_00402f60();
extern "C" void fn_00403540();
extern "C" void fn_00422570();
extern "C" void fn_005323f0();
extern "C" void fn_006a21b0();
extern "C" void fn_006a2880();
extern "C" void fn_006a2a90();
extern "C" void fn_006a2b40();
extern "C" void fn_006a3800();
extern "C" void fn_006a3bf0();
extern "C" void fn_006a3d40();
extern "C" void fn_006b98f0();
extern "C" void fn_00770e20();
extern "C" void fn_00775320();
extern "C" void fn_00826b40();
extern "C" void fn_00826c90();
extern "C" void fn_008f7770();
extern "C" void fn_00a1cd30();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006a0b20
extern "C" __declspec(naked) void asm_006a0b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14772 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x70 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov dword ptr [ebp - 0x48], 0xf }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov byte ptr [ebp - 0x5c], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [ebp - 0x44], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00775320 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_00826b40 }
	__asm { call fn_00775320 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_00826c90 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, 0xb }
	__asm { cmp dword ptr [ebx + 0x10], edx }
	__asm { mov edi, eax }
	__asm { cmovb edx, dword ptr [ebx + 0x10] }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { mov eax, dword ptr [ecx + 0x1c4] }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { jb L_006a0bc1 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { jmp L_006a0bc3 }
	__asm { L_006a0bc1: }
	__asm { mov ecx, ebx }
	__asm { L_006a0bc3: }
	__asm { mov eax, 0xb }
	__asm { cmp edx, eax }
	__asm { cmovb eax, edx }
	__asm { push eax }
	__asm { push 0x10184cc }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_006a0bf7 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { cmp ecx, 0xb }
	__asm { jae L_006a0bed }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_006a0bf5 }
	__asm { L_006a0bed: }
	__asm { xor eax, eax }
	__asm { cmp ecx, 0xb }
	__asm { setne al }
	__asm { L_006a0bf5: }
	__asm { test eax, eax }
	__asm { L_006a0bf7: }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_006a0c06 }
	__asm { mov edx, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { jmp L_006a0c20 }
	__asm { L_006a0c06: }
	__asm { cmp byte ptr [edi + 9], 0 }
	__asm { je L_006a0c19 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_00770e20 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { jmp L_006a0c20 }
	__asm { L_006a0c19: }
	__asm { mov dword ptr [ebp - 0x14], 0x200 }
	__asm { L_006a0c20: }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { xor edi, edi }
	__asm { cmp byte ptr [ecx + 0x18], 0 }
	__asm { mov eax, 4 }
	__asm { cmovne edi, eax }
	__asm { xor edx, edx }
	__asm { cmp byte ptr [ecx + 9], dl }
	__asm { mov eax, 2 }
	__asm { cmovne eax, edx }
	__asm { or edi, eax }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ecx + 5], al }
	__asm { mov edx, 0xb }
	__asm { sete al }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { or edi, eax }
	__asm { mov al, byte ptr [ecx + 0x1b] }
	__asm { mov ecx, 0xb }
	__asm { cmp dword ptr [ebp - 0x4c], ecx }
	__asm { mov byte ptr [ebp - 0x18], al }
	__asm { cmovb ecx, dword ptr [ebp - 0x4c] }
	__asm { cmp dword ptr [ebp - 0x48], 0x10 }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { cmovae eax, dword ptr [ebp - 0x5c] }
	__asm { cmp ecx, 0xb }
	__asm { cmovb edx, ecx }
	__asm { push edx }
	__asm { push 0x10184cc }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_006a0ca3 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { cmp ecx, 0xb }
	__asm { jae L_006a0c99 }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_006a0ca1 }
	__asm { L_006a0c99: }
	__asm { xor eax, eax }
	__asm { cmp ecx, 0xb }
	__asm { setne al }
	__asm { L_006a0ca1: }
	__asm { test eax, eax }
	__asm { L_006a0ca3: }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_006a0d8a }
	__asm { inc dword ptr [esi + 0x64] }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [ebp - 0x20], esp }
	__asm { push 0 }
	__asm { sub esp, 0x50 }
	__asm { mov dword ptr [ebp - 0x1c], esp }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { sub esp, 0x1c }
	__asm { mov edi, esp }
	__asm { mov dword ptr [ebp - 0x24], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x44] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { sub esp, 0x1c }
	__asm { mov edi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006a0d40 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a0d40: }
	__asm { push 0x6a1b10 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006a3800 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { add esp, 0x54 }
	__asm { call fn_006a2880 }
	__asm { mov ecx, dword ptr [esi + 0x5c] }
	__asm { call fn_00a1cd30 }
	__asm { L_006a0d64: }
	__asm { cmp dword ptr [ebp - 0x48], 0x10 }
	__asm { jb L_006a0d75 }
	__asm { push dword ptr [ebp - 0x5c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a0d75: }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006a0d8a: }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_005323f0 }
	__asm { test al, al }
	__asm { je L_006a0ef8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x1c0] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { test eax, eax }
	__asm { je L_006a0ed9 }
	__asm { push 0 }
	__asm { sub esp, 0x38 }
	__asm { mov dword ptr [ebp - 0x20], esp }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { sub esp, 0x1c }
	__asm { mov edi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { movzx eax, byte ptr [g_012de594] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov edx, 1 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x58] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006a0e0b }
	__asm { lea ecx, [eax + 8] }
	__asm { mov eax, edx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { L_006a0e0b: }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x60] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006a0e27 }
	__asm { add eax, 8 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_006a0e27: }
	__asm { push 0x6a1950 }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { call fn_006a3bf0 }
	__asm { add esp, 0x40 }
	__asm { lea ecx, [ebp - 0x7c] }
	__asm { call fn_006a2a90 }
	__asm { inc dword ptr [esi + 0x64] }
	__asm { push 0 }
	__asm { sub esp, 0x20 }
	__asm { mov esi, esp }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov edi, esp }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp - 0x7c] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00422570 }
	__asm { movzx eax, byte ptr [g_012de595] }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_012de596] }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_012de594] }
	__asm { push eax }
	__asm { push 0x6a22d0 }
	__asm { push edi }
	__asm { call fn_006a3d40 }
	__asm { add esp, 0x34 }
	__asm { mov ecx, esi }
	__asm { call fn_006a2b40 }
	__asm { fld dword ptr [g_0121591c] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_008f7770 }
	__asm { mov eax, dword ptr [ebp - 0x7c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_006a0d64 }
	__asm { test al, 1 }
	__asm { jne L_006a0ecd }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006a0ecd }
	__asm { lea ecx, [ebp - 0x74] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006a0ecd: }
	__asm { mov dword ptr [ebp - 0x7c], 0 }
	__asm { jmp L_006a0d64 }
	__asm { L_006a0ed9: }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push 0xe41b24 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_006a0ef8: }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0xe41b4c }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006a21b0 }
	__asm { add esp, 8 }
	__asm { mov eax, 0x6a0f31 }
	__asm { ret }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_004028a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006a1580();
extern "C" void fn_006a2370();
extern "C" void fn_006a3fd0();
extern "C" void fn_006a66e0();
extern "C" void fn_006b9740();
extern "C" void fn_00827110();
// FUNCTION: ROBLOXSTUDIO 0x006a1280
extern "C" __declspec(naked) void asm_006a1280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x74], eax }
	__asm { jbe L_006a144b }
	__asm { L_006a1295: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_006a12e2 }
	__asm { cmp dword ptr [edi + 0x78], 0 }
	__asm { je L_006a12aa }
	__asm { cmp dword ptr [edi + 0x7c], 0 }
	__asm { jne L_006a12e2 }
	__asm { L_006a12aa: }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006a12d1 }
	__asm { push 0x19b }
	__asm { push 0xe415c8 }
	__asm { push 0xe41c0c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a12e2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006a12d1: }
	__asm { movzx eax, al }
	__asm { push 0xe41c30 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a12e2: }
	__asm { mov esi, dword ptr [edi + 0x78] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006a1580 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_006a133b }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { test ecx, ecx }
	__asm { je L_006a1303 }
	__asm { cmp dword ptr [ecx + 8], 3 }
	__asm { je L_006a133b }
	__asm { L_006a1303: }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006a132a }
	__asm { push 0x1a3 }
	__asm { push 0xe415c8 }
	__asm { push 0xe41ca8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a133b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006a132a: }
	__asm { movzx eax, al }
	__asm { push 0xe41ce0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a133b: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { test eax, eax }
	__asm { mov ecx, 0x12de598 }
	__asm { cmovne ecx, eax }
	__asm { push ecx }
	__asm { call fn_006a2370 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { add esp, 4 }
	__asm { mov ebx, eax }
	__asm { test cl, cl }
	__asm { je L_006a13a0 }
	__asm { cmp dword ptr [edi + 0x70], 0 }
	__asm { jbe L_006a1368 }
	__asm { cmp dword ptr [edi + 0x74], ebx }
	__asm { jae L_006a13a0 }
	__asm { L_006a1368: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006a138f }
	__asm { push 0x1a7 }
	__asm { push 0xe415c8 }
	__asm { push 0xe419e0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a13a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_006a138f: }
	__asm { movzx eax, cl }
	__asm { push 0xe41d78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a13a0: }
	__asm { sub dword ptr [edi + 0x74], ebx }
	__asm { dec dword ptr [edi + 0x70] }
	__asm { movzx eax, byte ptr [edi + 4] }
	__asm { lea ebx, [edi + 4] }
	__asm { inc eax }
	__asm { add eax, ebx }
	__asm { je L_006a13b5 }
	__asm { inc eax }
	__asm { jmp L_006a13b7 }
	__asm { L_006a13b5: }
	__asm { xor eax, eax }
	__asm { L_006a13b7: }
	__asm { push eax }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_00827110 }
	__asm { add esp, 4 }
	__asm { mov ecx, ebx }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_006a3fd0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { test al, al }
	__asm { je L_006a1424 }
	__asm { test esi, esi }
	__asm { jne L_006a1428 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006a1405 }
	__asm { push 0x1ad }
	__asm { push 0xe415c8 }
	__asm { push 0xe41724 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a1416 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006a1405: }
	__asm { movzx eax, al }
	__asm { push 0xe41e08 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a1416: }
	__asm { xor eax, eax }
	__asm { L_006a1418: }
	__asm { mov eax, dword ptr [eax + 0x58] }
	__asm { test eax, eax }
	__asm { je L_006a1434 }
	__asm { add eax, -0x58 }
	__asm { jmp L_006a1436 }
	__asm { L_006a1424: }
	__asm { test esi, esi }
	__asm { je L_006a1416 }
	__asm { L_006a1428: }
	__asm { lea eax, [esi + 0x58] }
	__asm { test eax, eax }
	__asm { je L_006a1416 }
	__asm { add eax, -0x58 }
	__asm { jmp L_006a1418 }
	__asm { L_006a1434: }
	__asm { xor eax, eax }
	__asm { L_006a1436: }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_006a66e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [edi + 0x74], eax }
	__asm { ja L_006a1295 }
	__asm { L_006a144b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00610670();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006a16a0
extern "C" __declspec(naked) void asm_006a16a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd147d9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push 1 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push 1 }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ebp + 0x1c], al }
	__asm { push 1 }
	__asm { mov esi, 2 }
	__asm { push 3 }
	__asm { cmovne eax, esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [edx + 0x44] }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { test cl, cl }
	__asm { je L_006a174b }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_006a174b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006a173a }
	__asm { push 0x1e6 }
	__asm { push 0xe415c8 }
	__asm { push 0xe2fa14 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a174b }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_006a173a: }
	__asm { movzx eax, cl }
	__asm { push 0xe421e0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a174b: }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { mov al, byte ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 0xf], al }
	__asm { mov al, byte ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 0xe], al }
	__asm { mov al, byte ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { cmp byte ptr [eax + 0x18], 0 }
	__asm { je L_006a177f }
	__asm { mov cl, byte ptr [ebp - 0x10] }
	__asm { mov al, byte ptr [ebp - 0xe] }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { mov byte ptr [ebp - 0xe], cl }
	__asm { L_006a177f: }
	__asm { xor ebx, ebx }
	__asm { cmp byte ptr [ebp + 0x1c], bl }
	__asm { mov eax, 1 }
	__asm { mov ecx, 6 }
	__asm { cmovne eax, ecx }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { test eax, eax }
	__asm { jle L_006a17d9 }
	__asm { L_006a1798: }
	__asm { mov esi, dword ptr [esi] }
	__asm { push 4 }
	__asm { mov edi, dword ptr [esi] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_00610670 }
	__asm { push eax }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edi + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { inc ebx }
	__asm { cmp ebx, dword ptr [ebp + 0x1c] }
	__asm { jl L_006a1798 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_006a17d9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00610640();
extern "C" void fn_006106e0();
extern "C" void fn_00610820();
extern "C" void fn_00641d60();
// FUNCTION: ROBLOXSTUDIO 0x006a17f0
extern "C" __declspec(naked) void asm_006a17f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd147fc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push 0 }
	__asm { push dword ptr [ebx + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx + 0xc] }
	__asm { push dword ptr [ebx + 8] }
	__asm { push dword ptr [ebx + 4] }
	__asm { push dword ptr [ebx] }
	__asm { push edi }
	__asm { call dword ptr [eax + 0x44] }
	__asm { cmp dword ptr [ebx], 2 }
	__asm { mov eax, 6 }
	__asm { mov ecx, 1 }
	__asm { cmove ecx, eax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 1 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test ecx, ecx }
	__asm { je L_006a1934 }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { push esi }
	__asm { L_006a1874: }
	__asm { xor esi, esi }
	__asm { test ecx, ecx }
	__asm { je L_006a1912 }
	__asm { mov edi, edi }
	__asm { L_006a1880: }
	__asm { push esi }
	__asm { push dword ptr [ebx + 8] }
	__asm { call fn_00610820 }
	__asm { push esi }
	__asm { push dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_00610820 }
	__asm { push esi }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x24], edi }
	__asm { call fn_00610820 }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], ebx }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_006106e0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x24 }
	__asm { mov edi, eax }
	__asm { push esi }
	__asm { imul edi, ebx }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call fn_00641d60 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { add ecx, 0xc }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x28], ecx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { call fn_00610640 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { inc esi }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { cmp esi, ecx }
	__asm { jb L_006a1880 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { L_006a1912: }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp eax, edx }
	__asm { jb L_006a1874 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006a1934: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012d97c4[];
extern "C" void fn_00403380();
extern "C" void fn_00403540();
extern "C" void fn_006a2090();
extern "C" void fn_006a29e0();
extern "C" void fn_006a39f0();
extern "C" void fn_006b8a9c();
extern "C" void fn_00a1cd30();
extern "C" void fn_00a5d310();
// FUNCTION: ROBLOXSTUDIO 0x006a1950
extern "C" __declspec(naked) void asm_006a1950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1481e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_00a5d310 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a5d310 }
	__asm { cmp dword ptr [ebp - 0x2c], 0 }
	__asm { mov ebx, dword ptr [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_006a1a6e }
	__asm { cmp dword ptr [ebp - 0x24], 0 }
	__asm { je L_006a1a6e }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { test edx, edx }
	__asm { je L_006a1a5b }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push 0 }
	__asm { sub esp, 0x38 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { mov dword ptr [eax], edx }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_006a19e9 }
	__asm { lea eax, [ecx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a19e9: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x1c }
	__asm { mov edi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { test ebx, ebx }
	__asm { je L_006a1a35 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a1a35: }
	__asm { push 0x6a1ca0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006a39f0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add esp, 0x3c }
	__asm { call fn_006a29e0 }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { call fn_00a1cd30 }
	__asm { jmp L_006a1a95 }
	__asm { L_006a1a5b: }
	__asm { push 0xe42244 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_006a2090 }
	__asm { jmp L_006a1a92 }
	__asm { L_006a1a6e: }
	__asm { cmp byte ptr [g_012d97c4], 0 }
	__asm { je L_006a1a95 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { call fn_00403380 }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_012d97c4] }
	__asm { push 0xe42254 }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { L_006a1a92: }
	__asm { add esp, 0xc }
	__asm { L_006a1a95: }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_006a1ac4 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a1ac4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a1ac4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a1ac4: }
	__asm { mov esi, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006a1af5 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a1af5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a1af5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a1af5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" char g_00e10500[];
extern "C" void fn_00480230();
extern "C" void fn_006a1e10();
extern "C" void fn_006a2090();
extern "C" void fn_006a2410();
extern "C" void fn_006a4260();
extern "C" void fn_006c5a50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a1b10
extern "C" __declspec(naked) void asm_006a1b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14843 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x108 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_006a2410 }
	__asm { mov esi, eax }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_006a1b72 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_006a1b7d }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push esi }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_006a1b7d }
	__asm { L_006a1b72: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_006a1b7d: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp dword ptr [ebp - 0x48], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { pop esi }
	__asm { jb L_006a1bb9 }
	__asm { push dword ptr [ebp - 0x5c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a1bb9: }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x48], 0xf }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov byte ptr [ebp - 0x5c], 0 }
	__asm { je L_006a1c63 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call fn_006c5a50 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [eax + 0x14], 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jb L_006a1bf1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006a1bf1: }
	__asm { push 1 }
	__asm { push 0x40 }
	__asm { push 0x21 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x114] }
	__asm { call fn_006a4260 }
	__asm { cmp dword ptr [ebp - 0x2c], 8 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { jb L_006a1c18 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a1c18: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { xor eax, eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov word ptr [ebp - 0x40], ax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x114] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x2c], 7 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { call fn_006a1e10 }
	__asm { add esp, 0x18 }
	__asm { lea ecx, [ebp - 0xa4] }
	__asm { call fn_00480230 }
	__asm { lea ecx, [ebp - 0xa4] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { jmp L_006a1c76 }
	__asm { L_006a1c63: }
	__asm { push 0xe4228c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006a2090 }
	__asm { add esp, 0xc }
	__asm { L_006a1c76: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_006a1c87 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a1c87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0049a1e0();
extern "C" void fn_006416b0();
extern "C" void fn_006a2090();
extern "C" void fn_006a72b0();
extern "C" void fn_006c5410();
extern "C" void fn_006c5500();
extern "C" void fn_007cb440();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a1e10
extern "C" __declspec(naked) void asm_006a1e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd148bf }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x80 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006c5410 }
	__asm { add esp, 4 }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_006416b0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x8c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x78], 0xf }
	__asm { mov dword ptr [ebp - 0x7c], 0 }
	__asm { mov byte ptr [ebp - 0x8c], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007cb440 }
	__asm { fldz }
	__asm { fstp qword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ebp - 0x74], eax }
	__asm { mov dword ptr [ebp - 0x70], 0 }
	__asm { mov dword ptr [ebp - 0x6c], 0 }
	__asm { mov dword ptr [ebp - 0x68], 0 }
	__asm { mov dword ptr [ebp - 0x64], 0 }
	__asm { mov byte ptr [ebp - 0x60], 0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x8c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { cmp eax, esi }
	__asm { je L_006a1ec8 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00403540 }
	__asm { L_006a1ec8: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov edx, dword ptr [ebp - 0x50] }
	__asm { mov esi, dword ptr [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 0x74], eax }
	__asm { test edx, edx }
	__asm { je L_006a1ee4 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a1ee4: }
	__asm { mov eax, dword ptr [ebp - 0x70] }
	__asm { mov dword ptr [ebp - 0x70], esi }
	__asm { mov esi, dword ptr [ebp - 0x6c] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0x6c], edx }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { test esi, esi }
	__asm { je L_006a1f21 }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a1f21 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a1f21 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a1f21: }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { mov eax, dword ptr [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 0x64], eax }
	__asm { mov eax, dword ptr [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call fn_006c5410 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { mov eax, dword ptr [ebp - 0x68] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebp + 0x1c] }
	__asm { xor edx, edx }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x68], eax }
	__asm { mov eax, dword ptr [ebp - 0x64] }
	__asm { div dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x64], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [eax] }
	__asm { lea ebx, [esi + 0x14] }
	__asm { push ebx }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x38], ebx }
	__asm { lea eax, [ebp - 0x8c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_006a72b0 }
	__asm { test ebx, ebx }
	__asm { je L_006a1fa3 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { L_006a1fa3: }
	__asm { mov esi, dword ptr [ebp - 0x6c] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { test esi, esi }
	__asm { je L_006a1fd2 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a1fd2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a1fd2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a1fd2: }
	__asm { cmp dword ptr [ebp - 0x78], 0x10 }
	__asm { jb L_006a1fe6 }
	__asm { push dword ptr [ebp - 0x8c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a1fe6: }
	__asm { mov esi, dword ptr [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 0x78], 0xf }
	__asm { mov dword ptr [ebp - 0x7c], 0 }
	__asm { mov byte ptr [ebp - 0x8c], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006a2029 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a2029 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a2029 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a2029: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006a2090 }
	__asm { add esp, 0xc }
	__asm { mov eax, 0x6a2057 }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006a2090 }
	__asm { add esp, 0xc }
	__asm { mov eax, 0x6a2029 }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0049a1e0();
extern "C" void fn_006a21b0();
extern "C" void fn_006a72b0();
extern "C" void fn_007cb440();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a2090
extern "C" __declspec(naked) void asm_006a2090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd148e9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_006a21b0 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp - 0x38], 0xf }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov byte ptr [ebp - 0x4c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { fldz }
	__asm { fstp qword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp eax, esi }
	__asm { je L_006a2122 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00403540 }
	__asm { L_006a2122: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { lea edi, [esi + 0x14] }
	__asm { push edi }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006a72b0 }
	__asm { test edi, edi }
	__asm { je L_006a2156 }
	__asm { mov byte ptr [edi], 0 }
	__asm { L_006a2156: }
	__asm { mov esi, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_006a218a }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a218a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a218a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a218a: }
	__asm { cmp dword ptr [ebp - 0x38], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_006a219d }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a219d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012d97c4[];
extern "C" void fn_0042d740();
extern "C" void fn_0043ee70();
extern "C" void fn_006b8aa8();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a21b0
extern "C" __declspec(naked) void asm_006a21b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1490b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { cmp byte ptr [g_012d97c4], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { je L_006a2252 }
	__asm { push 0xf1391c }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0042d740 }
	__asm { push edi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0043ee70 }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_012d97c4] }
	__asm { push 0xe4158c }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006b8aa8 }
	__asm { add esp, 0x24 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_006a2228 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a2228: }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006a2252 }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a2252: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { jb L_006a226d }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_006a226d: }
	__asm { push edi }
	__asm { push esi }
	__asm { push 0xe415a8 }
	__asm { push 3 }
	__asm { push dword ptr [eax] }
	__asm { call fn_00773930 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006a22b4 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a22b4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a22b4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a22b4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a5f50();
// FUNCTION: ROBLOXSTUDIO 0x006a22d0
extern "C" __declspec(naked) void asm_006a22d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1491d }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 8], 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_006a2319 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov edx, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006a2328 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jmp L_006a2328 }
	__asm { L_006a2319: }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { L_006a2328: }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { call fn_006a5f50 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006a2357 }
	__asm { test al, 1 }
	__asm { jne L_006a2357 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006a2357 }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006a2357: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_004278c0();
extern "C" void fn_0043ee70();
extern "C" void fn_004d2250();
extern "C" void fn_0060e370();
extern "C" void fn_006a2760();
extern "C" void fn_006a4080();
extern "C" void fn_006a40e0();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
extern "C" void fn_008f6b10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a2410
extern "C" __declspec(naked) void asm_006a2410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14968 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xd4 }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc4], 0 }
	__asm { je L_006a26a8 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp + 0x10], 0x2e }
	__asm { call fn_0060e370 }
	__asm { mov ebx, eax }
	__asm { cmp ebx, -1 }
	__asm { je L_006a26a8 }
	__asm { push -1 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x8c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004278c0 }
	__asm { mov esi, eax }
	__asm { push ebx }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xa8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004278c0 }
	__asm { push 0xe42288 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x74] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043ee70 }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc0] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004d2250 }
	__asm { add esp, 0x18 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebp - 0xac], 0x10 }
	__asm { jb L_006a250b }
	__asm { push dword ptr [ebp - 0xc0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a250b: }
	__asm { mov dword ptr [ebp - 0xac], 0xf }
	__asm { mov dword ptr [ebp - 0xb0], 0 }
	__asm { mov byte ptr [ebp - 0xc0], 0 }
	__asm { cmp dword ptr [ebp - 0x60], 0x10 }
	__asm { jb L_006a2537 }
	__asm { push dword ptr [ebp - 0x74] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a2537: }
	__asm { mov dword ptr [ebp - 0x60], 0xf }
	__asm { mov dword ptr [ebp - 0x64], 0 }
	__asm { mov byte ptr [ebp - 0x74], 0 }
	__asm { cmp dword ptr [ebp - 0x94], 0x10 }
	__asm { jb L_006a2560 }
	__asm { push dword ptr [ebp - 0xa8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a2560: }
	__asm { mov dword ptr [ebp - 0x94], 0xf }
	__asm { mov dword ptr [ebp - 0x98], 0 }
	__asm { mov byte ptr [ebp - 0xa8], 0 }
	__asm { cmp dword ptr [ebp - 0x78], 0x10 }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { jb L_006a2593 }
	__asm { push dword ptr [ebp - 0x8c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a2593: }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x78], 0xf }
	__asm { mov dword ptr [ebp - 0x7c], 0 }
	__asm { mov byte ptr [ebp - 0x8c], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008f6b10 }
	__asm { add esp, 0x20 }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { je L_006a266d }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 0x10], 2 }
	__asm { call fn_006a4080 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov ecx, esi }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_006a2760 }
	__asm { cmp dword ptr [ebp - 0x48], 0x10 }
	__asm { jb L_006a2626 }
	__asm { push dword ptr [ebp - 0x5c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a2626: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov dword ptr [ebp - 0x48], 0xf }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov byte ptr [ebp - 0x5c], 0 }
	__asm { jb L_006a2649 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a2649: }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { jb L_006a2747 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { jmp L_006a273f }
	__asm { L_006a266d: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_006a267e }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a267e: }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006a26a8 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a26a8: }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0x10], 1 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call fn_008f6b10 }
	__asm { add esp, 0x20 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xe0] }
	__asm { push eax }
	__asm { call fn_006a40e0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_006a2760 }
	__asm { cmp dword ptr [ebp - 0xcc], 0x10 }
	__asm { jb L_006a271b }
	__asm { push dword ptr [ebp - 0xe0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a271b: }
	__asm { cmp dword ptr [ebp - 0x44], 0x10 }
	__asm { mov dword ptr [ebp - 0xcc], 0xf }
	__asm { mov dword ptr [ebp - 0xd0], 0 }
	__asm { mov byte ptr [ebp - 0xe0], 0 }
	__asm { jb L_006a2747 }
	__asm { push dword ptr [ebp - 0x58] }
	__asm { L_006a273f: }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a2747: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a3510();
extern "C" void fn_006a4b70();
extern "C" void fn_00c285f0();
// FUNCTION: ROBLOXSTUDIO 0x006a2920
extern "C" __declspec(naked) void asm_006a2920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd149b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x38 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006a4b70 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_006a3510 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov esi, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006a29b0 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a29b0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a29b0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a29b0: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_006a2920();
extern "C" void fn_006a4b70();
extern "C" void fn_00c285f0();
// FUNCTION: ROBLOXSTUDIO 0x006a29e0
extern "C" __declspec(naked) void asm_006a29e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd149b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x38 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006a4b70 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_006a2920 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov esi, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006a2a6c }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a2a6c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a2a6c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a2a6c: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_00403160();
extern "C" void fn_006a2ca0();
// FUNCTION: ROBLOXSTUDIO 0x006a2c00
extern "C" __declspec(naked) void asm_006a2c00()
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
	__asm { call fn_006a2ca0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_006a2c77 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a2c76 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a2c76 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a2c76: }
	__asm { pop ebx }
	__asm { L_006a2c77: }
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
extern "C" void fn_006a2dd0();
// FUNCTION: ROBLOXSTUDIO 0x006a2d30
extern "C" __declspec(naked) void asm_006a2d30()
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
	__asm { call fn_006a2dd0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_006a2da7 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a2da6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a2da6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a2da6: }
	__asm { pop ebx }
	__asm { L_006a2da7: }
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

// FUNCTION: ROBLOXSTUDIO 0x006a2ee0
extern "C" __declspec(naked) void asm_006a2ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, esi }
	__asm { add esi, 8 }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_006a2f5e }
	__asm { push ebx }
	__asm { push edi }
	__asm { L_006a2ef3: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_006a2f02 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp eax, 1 }
	__asm { je L_006a2f54 }
	__asm { L_006a2f02: }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ebx, edx }
	__asm { add edx, 8 }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { test edx, edx }
	__asm { je L_006a2f1f }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a2f1f: }
	__asm { mov dword ptr [ebx], edi }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { test edi, edi }
	__asm { je L_006a2f51 }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a2f51 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a2f51 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_006a2f51: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_006a2f54: }
	__asm { add esi, 8 }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jne L_006a2ef3 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_006a2f5e: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a4b70();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006a3020
extern "C" __declspec(naked) void asm_006a3020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14a1b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_006a3078 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [edi], ecx }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006a4b70 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { jmp L_006a307a }
	__asm { L_006a3078: }
	__asm { xor edi, edi }
	__asm { L_006a307a: }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [eax], edi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x40], eax }
	__asm { mov esi, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_006a30b9 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a30b9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a30b9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a30b9: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_0040c260();
extern "C" void fn_006a3020();
extern "C" void fn_006a4b70();
extern "C" void fn_00c285f0();
// FUNCTION: ROBLOXSTUDIO 0x006a3380
extern "C" __declspec(naked) void asm_006a3380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14a60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_006a33ed }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x40] }
	__asm { sub esp, 0x38 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006a4b70 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_006a3020 }
	__asm { mov bl, 1 }
	__asm { jmp L_006a33ef }
	__asm { L_006a33ed: }
	__asm { xor bl, bl }
	__asm { L_006a33ef: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x40], eax }
	__asm { mov esi, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006a3429 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a3429 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a3429 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_006a3429: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_006a3380();
extern "C" void fn_006a4b70();
extern "C" void fn_00c285f0();
// FUNCTION: ROBLOXSTUDIO 0x006a3450
extern "C" __declspec(naked) void asm_006a3450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14a60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x40] }
	__asm { sub esp, 0x38 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006a4b70 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_006a3380 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x40], eax }
	__asm { mov esi, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006a34e6 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a34e6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a34e6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a34e6: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x3c }
}

extern "C" void fn_006a3450();
extern "C" void fn_006a4b70();
extern "C" void fn_00c285f0();
// FUNCTION: ROBLOXSTUDIO 0x006a3510
extern "C" __declspec(naked) void asm_006a3510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd149b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x38 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { lea esi, [edx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006a4b70 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov esi, 0xe422b4 }
	__asm { mov ecx, esi }
	__asm { call fn_006a3450 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov esi, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006a35ab }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a35ab }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a35ab }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a35ab: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_00403540();
extern "C" void fn_006a4580();
extern "C" void fn_006a4980();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a3800
extern "C" __declspec(naked) void asm_006a3800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14af1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [ebp + 0x58] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov byte ptr [ecx], al }
	__asm { mov eax, dword ptr [ebp + 0x54] }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov ecx, esp }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ebp + 0x58], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x34] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_006a38c4 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a38c4: }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006a4580 }
	__asm { mov edi, eax }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { push edi }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_006a4980 }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [ebx + 0x44], eax }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov dword ptr [ebx + 0x48], eax }
	__asm { mov al, byte ptr [edi + 0x48] }
	__asm { mov byte ptr [ebx + 0x4c], al }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { jb L_006a3915 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a3915: }
	__asm { cmp dword ptr [ebp - 0x44], 0x10 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { jb L_006a3938 }
	__asm { push dword ptr [ebp - 0x58] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a3938: }
	__asm { mov esi, dword ptr [ebp - 0x5c] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 0x44], 0xf }
	__asm { mov dword ptr [ebp - 0x48], 0 }
	__asm { mov byte ptr [ebp - 0x58], 0 }
	__asm { test esi, esi }
	__asm { je L_006a3978 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a3978 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a3978 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a3978: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_006a39a6 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a39a6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a39a6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a39a6: }
	__asm { cmp dword ptr [ebp + 0x2c], 0x10 }
	__asm { jb L_006a39b7 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a39b7: }
	__asm { cmp dword ptr [ebp + 0x48], 0x10 }
	__asm { mov dword ptr [ebp + 0x2c], 0xf }
	__asm { mov dword ptr [ebp + 0x28], 0 }
	__asm { mov byte ptr [ebp + 0x18], 0 }
	__asm { jb L_006a39da }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a39da: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_006a4430();
extern "C" void fn_006a4b70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a39f0
extern "C" __declspec(naked) void asm_006a39f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14b49 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov ecx, esp }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 0x40], esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov edi, 1 }
	__asm { test eax, eax }
	__asm { je L_006a3a54 }
	__asm { add eax, 4 }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a3a54: }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_006a3aa2 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { inc edi }
	__asm { L_006a3aa2: }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006a4430 }
	__asm { mov edi, eax }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { push edi }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_006a4b70 }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [ebx + 0x34], eax }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test edi, edi }
	__asm { je L_006a3b0a }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a3b0a }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a3b0a }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a3b0a: }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { jb L_006a3b1f }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a3b1f: }
	__asm { mov edi, dword ptr [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { test edi, edi }
	__asm { je L_006a3b5c }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a3b5c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a3b5c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a3b5c: }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_006a3b8b }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a3b8b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a3b8b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a3b8b: }
	__asm { cmp dword ptr [ebp + 0x2c], 0x10 }
	__asm { jb L_006a3b9c }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a3b9c: }
	__asm { mov edi, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp + 0x2c], 0xf }
	__asm { mov dword ptr [ebp + 0x28], 0 }
	__asm { mov byte ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_006a3bdc }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a3bdc }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], esi }
	__asm { dec esi }
	__asm { jne L_006a3bdc }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_006a3bdc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_006a46c0();
extern "C" void fn_006a5160();
extern "C" void fn_006a5bd0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a3bf0
extern "C" __declspec(naked) void asm_006a3bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14b99 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov ecx, esp }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov edx, 1 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_006a3c7f }
	__asm { add eax, 8 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a3c7f: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_006a3c9e }
	__asm { add eax, 8 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_006a3c9e: }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_006a46c0 }
	__asm { mov edi, eax }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { push edi }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_006a5160 }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [ebx + 0x34], eax }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006a5bd0 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_006a3cfa }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a3cfa }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a3cfa: }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_006a3d14 }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_006a3d14 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a3d14: }
	__asm { cmp dword ptr [ebp + 0x38], 0x10 }
	__asm { jb L_006a3d25 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a3d25: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_006a5440();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a4430
extern "C" __declspec(naked) void asm_006a4430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14d60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { mov ebx, 1 }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { test eax, eax }
	__asm { je L_006a4485 }
	__asm { add eax, 4 }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a4485: }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a44d3 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { inc ebx }
	__asm { L_006a44d3: }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006a5440 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006a4510 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a4510 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a4510 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a4510: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_006a4521 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a4521: }
	__asm { mov esi, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006a4564 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a4564 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a4564 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a4564: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00403540();
extern "C" void fn_006a5690();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a4580
extern "C" __declspec(naked) void asm_006a4580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14de0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push dword ptr [ebp + 0x50] }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { push dword ptr [ebp + 0x48] }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a4630 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a4630: }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006a5690 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006a466c }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a466c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a466c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a466c: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_006a467d }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a467d: }
	__asm { cmp dword ptr [ebp + 0x40], 0x10 }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { jb L_006a46a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a46a0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_00403540();
extern "C" void fn_006a57d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a46c0
extern "C" __declspec(naked) void asm_006a46c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14e08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov edx, 1 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_006a473d }
	__asm { add eax, 8 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a473d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a475c }
	__asm { add eax, 8 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_006a475c: }
	__asm { mov ecx, edi }
	__asm { call fn_006a57d0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_006a4781 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a4781 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a4781: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006a479b }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_006a479b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a479b: }
	__asm { cmp dword ptr [ebp + 0x30], 0x10 }
	__asm { jb L_006a47ac }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a47ac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_00403540();
extern "C" void fn_004677e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a47c0
extern "C" __declspec(naked) void asm_006a47c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14ca8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a480d }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a480d: }
	__asm { mov ecx, edi }
	__asm { call fn_004677e0 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi + 0x1c], 0xf }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006a4871 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a4871 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a4871 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a4871: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_006a4882 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a4882: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

// FUNCTION: ROBLOXSTUDIO 0x006a48a0
extern "C" __declspec(naked) void asm_006a48a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d8b0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ebx, ecx }
	__asm { mov eax, 1 }
	__asm { test ecx, ecx }
	__asm { je L_006a48e9 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, 1 }
	__asm { L_006a48e9: }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [esi], edx }
	__asm { mov dword ptr [esi + 4], ebx }
	__asm { test ebx, ebx }
	__asm { je L_006a490e }
	__asm { lea edx, [ebx + 8] }
	__asm { lock xadd dword ptr [edx], eax }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [edx], eax }
	__asm { jne L_006a490b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a490b: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_006a490e: }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [esi + 0xc], edx }
	__asm { test edx, edx }
	__asm { je L_006a4931 }
	__asm { lea eax, [edx + 8] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { inc ecx }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_006a4931: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006a494c }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a4949 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a4949: }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { L_006a494c: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edx, edx }
	__asm { je L_006a4968 }
	__asm { lea eax, [edx + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a4968 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, edx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a4968: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x006a4980
extern "C" __declspec(naked) void asm_006a4980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14cd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006a49be }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a49be: }
	__asm { push -1 }
	__asm { lea esi, [edx + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [ebx + 0x1c], 0xf }
	__asm { mov dword ptr [ebx + 0x18], 0 }
	__asm { push esi }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebx + 8], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ebx + 0x20], eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { add esi, 0x24 }
	__asm { push 0 }
	__asm { mov dword ptr [ebx + 0x38], 0xf }
	__asm { mov dword ptr [ebx + 0x34], 0 }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0x24] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebx + 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0x3c], eax }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_006a47c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a4a40
extern "C" __declspec(naked) void asm_006a4a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14d00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a4ab8 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a4ab8: }
	__asm { mov ecx, edi }
	__asm { call fn_006a47c0 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { mov dword ptr [edi + 0x38], 0xf }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x24] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [edi + 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [edi + 0x3c], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006a4b1c }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a4b1c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a4b1c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a4b1c: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_006a4b2d }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a4b2d: }
	__asm { cmp dword ptr [ebp + 0x40], 0x10 }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { jb L_006a4b50 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a4b50: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x006a4b70
extern "C" __declspec(naked) void asm_006a4b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53888 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006a4bac }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a4bac: }
	__asm { push esi }
	__asm { push edi }
	__asm { push -1 }
	__asm { lea esi, [edx + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [ebx + 0x1c], 0xf }
	__asm { mov dword ptr [ebx + 0x18], 0 }
	__asm { push esi }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebx + 8], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0x24] }
	__asm { mov dword ptr [ebx + 0x24], eax }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0x28], eax }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_006a4bfe }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a4bfe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_006a47c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a4c20
extern "C" __declspec(naked) void asm_006a4c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14d28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov edi, 1 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a4c95 }
	__asm { add eax, 4 }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a4c95: }
	__asm { mov ecx, ebx }
	__asm { call fn_006a47c0 }
	__asm { mov esi, dword ptr [ebp + 0x30] }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebx + 0x24], eax }
	__asm { mov dword ptr [ebx + 0x28], esi }
	__asm { test esi, esi }
	__asm { je L_006a4cb7 }
	__asm { lea eax, [esi + 4] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { inc edi }
	__asm { mov esi, dword ptr [ebp + 0x30] }
	__asm { L_006a4cb7: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_006a4ceb }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a4ce8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a4ce8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a4ce8: }
	__asm { mov esi, dword ptr [ebp + 0x30] }
	__asm { L_006a4ceb: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_006a4cff }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [ebp + 0x30] }
	__asm { add esp, 4 }
	__asm { L_006a4cff: }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006a4d42 }
	__asm { or edi, 0xffffffff }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a4d42 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a4d42 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a4d42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_006a48a0();
// FUNCTION: ROBLOXSTUDIO 0x006a4d60
extern "C" __declspec(naked) void asm_006a4d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4d8b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_006a4da9 }
	__asm { add eax, 8 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a4da9: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a4dc8 }
	__asm { add eax, 8 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_006a4dc8: }
	__asm { mov ecx, esi }
	__asm { call fn_006a48a0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006a4ded }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a4ded }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a4ded: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_006a4e0a }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a4e0a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a4e0a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00403540();
extern "C" void fn_006a4a40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a4ed0
extern "C" __declspec(naked) void asm_006a4ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14de0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a4f77 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a4f77: }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006a4a40 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006a4fb9 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a4fb9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a4fb9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a4fb9: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_006a4fca }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a4fca: }
	__asm { cmp dword ptr [ebp + 0x40], 0x10 }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { jb L_006a4fed }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a4fed: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_00403540();
extern "C" void fn_006a4c20();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a5010
extern "C" __declspec(naked) void asm_006a5010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14d60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov ebx, 1 }
	__asm { test eax, eax }
	__asm { je L_006a505f }
	__asm { add eax, 4 }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a505f: }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a50ad }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { inc ebx }
	__asm { L_006a50ad: }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006a4c20 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006a50f0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a50f0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a50f0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a50f0: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_006a5101 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a5101: }
	__asm { mov esi, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006a5144 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a5144 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a5144 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a5144: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x006a5160
extern "C" __declspec(naked) void asm_006a5160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14d78 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_006a51a0 }
	__asm { add eax, 8 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a51a0: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { test eax, eax }
	__asm { je L_006a51b8 }
	__asm { add eax, 8 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_006a51b8: }
	__asm { push -1 }
	__asm { add esi, 0x10 }
	__asm { push 0 }
	__asm { mov dword ptr [ebx + 0x24], 0xf }
	__asm { mov dword ptr [ebx + 0x20], 0 }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebx + 0x10], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 0x28], eax }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_006a4d60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a5200
extern "C" __declspec(naked) void asm_006a5200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14db0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_006a5251 }
	__asm { add eax, 8 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a5251: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a5270 }
	__asm { add eax, 8 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_006a5270: }
	__asm { mov ecx, edi }
	__asm { call fn_006a4d60 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { mov dword ptr [edi + 0x24], 0xf }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [edi + 0x10], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_006a52c1 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a52c1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a52c1: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006a52db }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_006a52db }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a52db: }
	__asm { cmp dword ptr [ebp + 0x30], 0x10 }
	__asm { jb L_006a52ec }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a52ec: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00403540();
extern "C" void fn_006a4ed0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a5300
extern "C" __declspec(naked) void asm_006a5300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14de0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x48] }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a53aa }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a53aa: }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006a4ed0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [edi + 0x44], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006a53ec }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a53ec }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a53ec }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a53ec: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_006a53fd }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a53fd: }
	__asm { cmp dword ptr [ebp + 0x40], 0x10 }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { jb L_006a5420 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a5420: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_00403540();
extern "C" void fn_006a5010();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a5440
extern "C" __declspec(naked) void asm_006a5440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14d60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov ebx, 1 }
	__asm { test eax, eax }
	__asm { je L_006a5492 }
	__asm { add eax, 4 }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a5492: }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a54e0 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { inc ebx }
	__asm { L_006a54e0: }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006a5010 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006a5523 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a5523 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a5523 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a5523: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_006a5534 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a5534: }
	__asm { mov esi, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006a5577 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a5577 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a5577 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a5577: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00403540();
extern "C" void fn_006a5200();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a5590
extern "C" __declspec(naked) void asm_006a5590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14e08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov edx, 1 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_006a5607 }
	__asm { add eax, 8 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a5607: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a5626 }
	__asm { add eax, 8 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_006a5626: }
	__asm { mov ecx, edi }
	__asm { call fn_006a5200 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_006a5651 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a5651 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a5651: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006a566b }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_006a566b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a566b: }
	__asm { cmp dword ptr [ebp + 0x30], 0x10 }
	__asm { jb L_006a567c }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a567c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00403540();
extern "C" void fn_006a5300();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a5690
extern "C" __declspec(naked) void asm_006a5690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14de0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x4c] }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a573d }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a573d: }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006a5300 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov al, byte ptr [ebp + 0x50] }
	__asm { mov byte ptr [edi + 0x48], al }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006a577f }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a577f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a577f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a577f: }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_006a5790 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a5790: }
	__asm { cmp dword ptr [ebp + 0x40], 0x10 }
	__asm { mov dword ptr [ebp + 0x24], 0xf }
	__asm { mov dword ptr [ebp + 0x20], 0 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { jb L_006a57b3 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a57b3: }
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
extern "C" void fn_006a5590();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a57d0
extern "C" __declspec(naked) void asm_006a57d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14e08 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { sub esp, 0x1c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov edx, 1 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_006a584a }
	__asm { add eax, 8 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a584a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a5869 }
	__asm { add eax, 8 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_006a5869: }
	__asm { mov ecx, edi }
	__asm { call fn_006a5590 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_006a5894 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a5894 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a5894: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006a58ae }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_006a58ae }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a58ae: }
	__asm { cmp dword ptr [ebp + 0x30], 0x10 }
	__asm { jb L_006a58bf }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a58bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

// FUNCTION: ROBLOXSTUDIO 0x006a5b60
extern "C" __declspec(naked) void asm_006a5b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3f9a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006a5ba1 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a5ba1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a5ba1: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_006a5bbe }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_006a5bbe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a5bbe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a5cb0
extern "C" __declspec(naked) void asm_006a5cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14e53 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_006a5d08 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a5d07 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a5d07 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a5d07: }
	__asm { pop ebx }
	__asm { L_006a5d08: }
	__asm { cmp dword ptr [esi + 0x1c], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_006a5d4d }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x20] }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { L_006a5d4d: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_006a5d5d }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a5d5d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x006a5d80
extern "C" __declspec(naked) void asm_006a5d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp esi, edi }
	__asm { je L_006a5d99 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00403540 }
	__asm { L_006a5d99: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov edx, dword ptr [edi + 0x20] }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { test edx, edx }
	__asm { je L_006a5db5 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a5db5: }
	__asm { mov dword ptr [esi + 0x1c], ebx }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], edx }
	__asm { test ebx, ebx }
	__asm { je L_006a5de8 }
	__asm { lea ecx, [ebx + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a5de8 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a5de8 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a5de8: }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006a3f30();
extern "C" void fn_006a3fd0();
extern "C" void fn_006a5cb0();
extern "C" void fn_00827110();
extern "C" void fn_00989b70();
extern "C" void fn_00b2ed70();
extern "C" void fn_00b347b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a5e10
extern "C" __declspec(naked) void asm_006a5e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd14e78 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_00827110 }
	__asm { movzx edx, byte ptr [esi] }
	__asm { lea ecx, [esi + 1] }
	__asm { add esp, 4 }
	__asm { mov ebx, eax }
	__asm { add ecx, edx }
	__asm { je L_006a5e4b }
	__asm { inc ecx }
	__asm { jmp L_006a5e4d }
	__asm { L_006a5e4b: }
	__asm { xor ecx, ecx }
	__asm { L_006a5e4d: }
	__asm { push ecx }
	__asm { push edi }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006a3fd0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_006a5f3b }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_006a5e70 }
	__asm { inc eax }
	__asm { jmp L_006a5e72 }
	__asm { L_006a5e70: }
	__asm { xor eax, eax }
	__asm { L_006a5e72: }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00989b70 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x28], 0x12de597 }
	__asm { call fn_006a3f30 }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_006a5ecb }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a5ecb: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b347b0 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b2ed70 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006a5f39 }
	__asm { cmp byte ptr [ebp - 0x13], 0 }
	__asm { je L_006a5f30 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_006a5cb0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_006a5f1f }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a5f1f: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_006a5f30: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a5f39: }
	__asm { mov eax, edi }
	__asm { L_006a5f3b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
// FUNCTION: ROBLOXSTUDIO 0x006a5f50
extern "C" __declspec(naked) void asm_006a5f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14ea0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edx, ecx }
	__asm { cmp dword ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_006a5fa3 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe19198 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00410540 }
	__asm { L_006a5fa3: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006a5fc6 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a5fc6: }
	__asm { mov ecx, dword ptr [edx] }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006a600b }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a600b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a600b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a600b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c285f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a6020
extern "C" __declspec(naked) void asm_006a6020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14e28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ebx, [edi + 4] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006a6078 }
	__asm { lea ecx, [esi + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a6078 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a6078 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a6078: }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_006a6095 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a6095: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_006a5cb0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006a64b0
extern "C" __declspec(naked) void asm_006a64b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x64 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { test esi, esi }
	__asm { jne L_006a6521 }
	__asm { push 0x60 }
	__asm { mov word ptr [ebx + 8], si }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_006a64ee }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006a64ee: }
	__asm { push edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, 0x18 }
	__asm { lea esi, [ebp - 0x70] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { rep movsd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ebx + 8], 1 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6521: }
	__asm { cmp byte ptr [ebx + 9], 0 }
	__asm { je L_006a655e }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006a5cb0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_006a6549 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a6549: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov byte ptr [ebx + 9], 0 }
	__asm { L_006a655e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006a67d0
extern "C" __declspec(naked) void asm_006a67d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29038 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { movzx eax, byte ptr [edx + 0x4c] }
	__asm { lea ecx, [edx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x44] }
	__asm { lea eax, [ecx + 0x24] }
	__asm { push dword ptr [ecx + 0x40] }
	__asm { push eax }
	__asm { lea eax, [ecx + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { push ecx }
	__asm { call eax }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006a6848 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a6848 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a6848 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a6848: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006a6860
extern "C" __declspec(naked) void asm_006a6860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29038 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edx + 0x34] }
	__asm { lea ecx, [edx + 4] }
	__asm { push dword ptr [ecx + 0x2c] }
	__asm { lea eax, [ecx + 0x24] }
	__asm { push eax }
	__asm { lea eax, [ecx + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { push ecx }
	__asm { call eax }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006a68d3 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a68d3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a68d3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a68d3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006a68f0
extern "C" __declspec(naked) void asm_006a68f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd29038 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push dword ptr [edx + 0x34] }
	__asm { lea ecx, [edx + 4] }
	__asm { push dword ptr [ecx + 0x2c] }
	__asm { lea eax, [ecx + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ecx + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { push ecx }
	__asm { call eax }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006a6967 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a6967 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a6967 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a6967: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a2e60();
// FUNCTION: ROBLOXSTUDIO 0x006a6980
extern "C" __declspec(naked) void asm_006a6980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39c88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006a2e60 }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006a6a06 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a6a05 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006a6a05 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a6a05: }
	__asm { pop edi }
	__asm { L_006a6a06: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_006a4980();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006a6b80
extern "C" __declspec(naked) void asm_006a6b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ac4b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_006a6c11 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x50 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_006a6bf9 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esi, 4 }
	__asm { mov dword ptr [ebx], ecx }
	__asm { push esi }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006a4980 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [ebx + 0x44], eax }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [ebx + 0x48], eax }
	__asm { mov al, byte ptr [esi + 0x48] }
	__asm { mov byte ptr [ebx + 0x4c], al }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6bf9: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6c11: }
	__asm { cmp eax, 1 }
	__asm { jne L_006a6c37 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6c37: }
	__asm { cmp eax, 2 }
	__asm { jne L_006a6c90 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebx] }
	__asm { test edi, edi }
	__asm { je L_006a6c79 }
	__asm { cmp dword ptr [edi + 0x3c], 0x10 }
	__asm { jb L_006a6c56 }
	__asm { push dword ptr [edi + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a6c56: }
	__asm { mov dword ptr [edi + 0x3c], 0xf }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { mov byte ptr [edi + 0x28], 0 }
	__asm { call fn_00c285f0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a6c79: }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6c90: }
	__asm { cmp eax, 3 }
	__asm { jne L_006a6cd8 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11dba38 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_006a6cc1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6cc1: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6cd8: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0x11dba38 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_006a4b70();
extern "C" void fn_006a6020();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006a6d00
extern "C" __declspec(naked) void asm_006a6d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ac4b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_006a6d8b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x38 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_006a6d73 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esi, 4 }
	__asm { mov dword ptr [ebx], ecx }
	__asm { push esi }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006a4b70 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ebx + 0x34], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6d73: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6d8b: }
	__asm { cmp eax, 1 }
	__asm { jne L_006a6db1 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6db1: }
	__asm { cmp eax, 2 }
	__asm { jne L_006a6ddd }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_006a6dc6 }
	__asm { push 1 }
	__asm { call fn_006a6020 }
	__asm { L_006a6dc6: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6ddd: }
	__asm { cmp eax, 3 }
	__asm { jne L_006a6e0e }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11dbf88 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_006a6dc6 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6e0e: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0x11dbf88 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_006a5160();
extern "C" void fn_006a5bd0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006a6e30
extern "C" __declspec(naked) void asm_006a6e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ac4b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_006a6ebb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x38 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_006a6ea3 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esi, 4 }
	__asm { mov dword ptr [ebx], ecx }
	__asm { push esi }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006a5160 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ebx + 0x34], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6ea3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6ebb: }
	__asm { cmp eax, 1 }
	__asm { jne L_006a6ee1 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6ee1: }
	__asm { cmp eax, 2 }
	__asm { jne L_006a6f17 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_006a6f00 }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_006a5bd0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a6f00: }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6f17: }
	__asm { cmp eax, 3 }
	__asm { jne L_006a6f5f }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11dbb90 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_006a6f48 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6f48: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6f5f: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0x11dbb90 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_00b25b30();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006a6f80
extern "C" __declspec(naked) void asm_006a6f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ac4b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_006a6ff4 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x28 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_006a6fdd }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00b25b30 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6fdd: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a6ff4: }
	__asm { cmp eax, 1 }
	__asm { jne L_006a7019 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a7019: }
	__asm { cmp eax, 2 }
	__asm { jne L_006a706d }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_006a7057 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_006a704e }
	__asm { test al, 1 }
	__asm { jne L_006a7047 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006a7047 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006a7047: }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_006a704e: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a7057: }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a706d: }
	__asm { cmp eax, 3 }
	__asm { jne L_006a70b3 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11dbd80 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_006a709d }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a709d: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a70b3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0x11dbd80 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006a71f0
extern "C" __declspec(naked) void asm_006a71f0()
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
	__asm { je L_006a729d }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { dec edx }
	__asm { and edx, dword ptr [esi + 0xc] }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov ebx, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_006a725c }
	__asm { lea ecx, [ebx + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a725c }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a725c }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a725c: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_006a726c }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a726c: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { dec dword ptr [esi + 0x10] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { jne L_006a729a }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a729a: }
	__asm { inc dword ptr [esi + 0xc] }
	__asm { L_006a729d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a6320();
// FUNCTION: ROBLOXSTUDIO 0x006a7360
extern "C" __declspec(naked) void asm_006a7360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_006a73a2 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_006a73a2 }
	__asm { sub edi, ecx }
	__asm { sar edi, 3 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_006a738a }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006a6320 }
	__asm { L_006a738a: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { test edx, edx }
	__asm { je L_006a73d1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [eax + edi*8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { jmp L_006a73c1 }
	__asm { L_006a73a2: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_006a73b0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006a6320 }
	__asm { L_006a73b0: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_006a73d1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_006a73c1: }
	__asm { test eax, eax }
	__asm { je L_006a73d1 }
	__asm { mov ecx, 1 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a73d1: }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006a7b70();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006a73e0
extern "C" __declspec(naked) void asm_006a73e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_006a741e }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { jmp L_006a7420 }
	__asm { L_006a741e: }
	__asm { xor esi, esi }
	__asm { L_006a7420: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 1 }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax] }
	__asm { test edx, edx }
	__asm { je L_006a743f }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a743f: }
	__asm { mov dword ptr [esi], edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { test edi, edi }
	__asm { je L_006a7473 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a7472 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a7472 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a7472: }
	__asm { pop ebx }
	__asm { L_006a7473: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_006a7b70 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006a7b70();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006a7560
extern "C" __declspec(naked) void asm_006a7560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14f24 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { push edi }
	__asm { mov ecx, 1 }
	__asm { je L_006a75f5 }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_006a75d7 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006a75bd }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006a75bd: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_006a75d9 }
	__asm { L_006a75d7: }
	__asm { xor edx, edx }
	__asm { L_006a75d9: }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_006a7b70 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov ebx, 1 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, ebx }
	__asm { jmp L_006a7604 }
	__asm { L_006a75f5: }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ebx, [esi + 2] }
	__asm { L_006a7604: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006a7620 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { inc ecx }
	__asm { L_006a7620: }
	__asm { or ebx, 4 }
	__asm { or ecx, 0xffffffff }
	__asm { test bl, 2 }
	__asm { je L_006a765d }
	__asm { and ebx, 0xfffffffd }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test esi, esi }
	__asm { je L_006a765d }
	__asm { lea eax, [esi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a765a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ecx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006a765d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a765a: }
	__asm { or ecx, 0xffffffff }
	__asm { L_006a765d: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, 1 }
	__asm { je L_006a769a }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { and ebx, 0xfffffffe }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test esi, esi }
	__asm { je L_006a769a }
	__asm { lea eax, [esi + 4] }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a769a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [esi + 8] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [edx], eax }
	__asm { dec eax }
	__asm { jne L_006a769a }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_006a769a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006a76b0
extern "C" __declspec(naked) void asm_006a76b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { test al, al }
	__asm { je L_006a76fc }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { jne L_006a76fc }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_006a76eb }
	__asm { push 0x33 }
	__asm { push 0xe422f0 }
	__asm { push 0xe37160 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a76fc }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006a76eb: }
	__asm { movzx eax, al }
	__asm { push 0xe42338 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a76fc: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi] }
	__asm { test edx, edx }
	__asm { je L_006a771e }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { L_006a771e: }
	__asm { mov dword ptr [eax], esi }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { test esi, esi }
	__asm { je L_006a7750 }
	__asm { lea ecx, [esi + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a7750 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a7750 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a7750: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { lea edx, [ebp - 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_006a776d }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x34] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { jmp L_006a777f }
	__asm { L_006a776d: }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { L_006a777f: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006a77a0
extern "C" __declspec(naked) void asm_006a77a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_006a7878 }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { jne L_006a77f3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006a77de }
	__asm { push 0x3b }
	__asm { push 0xe422f0 }
	__asm { push 0xe2ea70 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a77f3 }
	__asm { L_006a77de: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe42398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a77f3: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006a7878 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jne L_006a7834 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006a781f }
	__asm { push 0x3c }
	__asm { push 0xe422f0 }
	__asm { push 0xe37160 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a7834 }
	__asm { L_006a781f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe423f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a7834: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006a7878 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + 8], 1 }
	__asm { je L_006a7878 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006a7863 }
	__asm { push 0x3d }
	__asm { push 0xe422f0 }
	__asm { push 0xe42454 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006a7878 }
	__asm { L_006a7863: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe42478 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006a7878: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax + 8], 3 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test edx, edx }
	__asm { je L_006a789e }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_006a789e: }
	__asm { mov dword ptr [eax], esi }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { test esi, esi }
	__asm { je L_006a78d0 }
	__asm { lea ecx, [esi + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a78d0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006a78d0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a78d0: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 0x30] }
	__asm { mov eax, dword ptr [eax + 0x34] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { pop edi }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403160();
extern "C" void fn_006a7c10();
// FUNCTION: ROBLOXSTUDIO 0x006a7b70
extern "C" __declspec(naked) void asm_006a7b70()
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
	__asm { call fn_006a7c10 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_006a7be7 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a7be6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a7be6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a7be6: }
	__asm { pop ebx }
	__asm { L_006a7be7: }
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

extern "C" char g_00e102c8[];
extern "C" char g_00e103b0[];
extern "C" void fn_00403540();
extern "C" void fn_00480230();
extern "C" void fn_0057dce0();
extern "C" void fn_006a04c0();
extern "C" void fn_006a4260();
extern "C" void fn_006a9ad0();
extern "C" void fn_006b98f0();
extern "C" void fn_006c5a50();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006a7ca0
extern "C" __declspec(naked) void asm_006a7ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14f89 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xfc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x50], esi }
	__asm { movss xmm0, dword ptr [ebp + 0x14] }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ebp + 0x18], al }
	__asm { movss dword ptr [esi + 4], xmm0 }
	__asm { setne al }
	__asm { mov dword ptr [esi], 0xe4278c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { inc eax }
	__asm { cvtsi2ss xmm0, eax }
	__asm { movss dword ptr [esi + 8], xmm0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006c5a50 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [eax + 0x14], 8 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { jb L_006a7d22 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006a7d22: }
	__asm { push 1 }
	__asm { push 0x40 }
	__asm { push 0x21 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x108] }
	__asm { call fn_006a4260 }
	__asm { cmp dword ptr [ebp - 0x38], 8 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { jb L_006a7d49 }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a7d49: }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { mov word ptr [ebp - 0x4c], ax }
	__asm { push 4 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x108] }
	__asm { mov dword ptr [ebp - 0x38], 7 }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { call dword ptr [g_00e103b0] }
	__asm { cmp dword ptr [ebp - 0x100], 4 }
	__asm { jne L_006a7f1e }
	__asm { cmp dword ptr [ebp - 0xfc], 0 }
	__asm { jne L_006a7f1e }
	__asm { push 0 }
	__asm { push 4 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x108] }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { call dword ptr [g_00e103b0] }
	__asm { cmp dword ptr [ebp - 0x100], 4 }
	__asm { jne L_006a7f1e }
	__asm { cmp dword ptr [ebp - 0xfc], 0 }
	__asm { jne L_006a7f1e }
	__asm { lea eax, [ebp + 0x14] }
	__asm { cmp dword ptr [eax], 0x46584252 }
	__asm { jne L_006a7eff }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { cmp eax, 0x10 }
	__asm { jl L_006a7eff }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { call fn_00cf6698 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp - 0x108] }
	__asm { push dword ptr [esi + 0x24] }
	__asm { push eax }
	__asm { call fn_006a9ad0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { add esp, 0x14 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { lea eax, [ecx + 8] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { add eax, 0x100 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { lea edx, [eax + ecx*4] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { imul eax, ecx }
	__asm { push -1 }
	__asm { shl eax, 5 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { add eax, edx }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [esi + 0x1c], edx }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_006a04c0 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_0057dce0 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { test edi, edi }
	__asm { je L_006a7ec3 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006a7ec2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006a7ec2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006a7ec2: }
	__asm { pop ebx }
	__asm { L_006a7ec3: }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_006a7ed4 }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006a7ed4: }
	__asm { lea ecx, [ebp - 0x98] }
	__asm { call fn_00480230 }
	__asm { lea ecx, [ebp - 0x98] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_006a7eff: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe427a0 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_006a7f1e: }
	__asm { push 4 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe36588 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01038034[];
extern "C" char g_012f97f0[];
extern "C" void fn_006a9540();
// FUNCTION: ROBLOXSTUDIO 0x006a7f40
extern "C" __declspec(naked) void asm_006a7f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x30] }
	__asm { movss xmm0, dword ptr [edx] }
	__asm { ucomiss xmm0, dword ptr [g_01038034] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_006a7f5b }
	__asm { mov al, 1 }
	__asm { jmp L_006a7f5d }
	__asm { L_006a7f5b: }
	__asm { xor al, al }
	__asm { L_006a7f5d: }
	__asm { cmp byte ptr [g_012f97f0], 0 }
	__asm { push esi }
	__asm { je L_006a7f9d }
	__asm { cmp byte ptr [ebp + 0x1c], 0 }
	__asm { je L_006a7f9d }
	__asm { test al, al }
	__asm { je L_006a7f9d }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x34 }
	__asm { L_006a7f9d: }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_006a9540 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" char g_01038034[];
extern "C" void fn_006a8660();
extern "C" void fn_006e0620();
extern "C" void fn_006f64a0();
// FUNCTION: ROBLOXSTUDIO 0x006a8330
extern "C" __declspec(naked) void asm_006a8330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { movss xmm0, dword ptr [edx] }
	__asm { ucomiss xmm0, dword ptr [g_01038034] }
	__asm { push edi }
	__asm { lahf }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [ebp + 0x14], 1 }
	__asm { test ah, 0x44 }
	__asm { jp L_006a8356 }
	__asm { mov byte ptr [ebp + 0x14], 0 }
	__asm { L_006a8356: }
	__asm { movss xmm1, dword ptr [edi + 4] }
	__asm { mulss xmm1, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { movss xmm2, dword ptr [edi + 8] }
	__asm { xor esi, esi }
	__asm { mulss xmm1, xmm2 }
	__asm { test ecx, ecx }
	__asm { jle L_006a8386 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { L_006a8375: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm0, xmm1 }
	__asm { jae L_006a8389 }
	__asm { inc esi }
	__asm { add eax, 4 }
	__asm { cmp esi, ecx }
	__asm { jl L_006a8375 }
	__asm { L_006a8386: }
	__asm { lea esi, [ecx - 1] }
	__asm { L_006a8389: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { push ecx }
	__asm { divss xmm1, dword ptr [eax + esi*4] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { divss xmm1, xmm2 }
	__asm { mov ecx, edx }
	__asm { movss dword ptr [ebp + 0x10], xmm1 }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_006e0620 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_006f64a0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp - 4] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { push esi }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { call fn_006a8660 }
	__asm { movsx eax, word ptr [ebp + 0x14] }
	__asm { cvtsi2ss xmm0, eax }
	__asm { movsx eax, word ptr [ebp + 0x16] }
	__asm { mulss xmm0, dword ptr [ebp + 0x10] }
	__asm { cvtsi2ss xmm1, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mulss xmm1, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { xor eax, eax }
	__asm { test edx, edx }
	__asm { jle L_006a8425 }
	__asm { mov ecx, dword ptr [ecx + 0x18] }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { L_006a8414: }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { comiss xmm0, xmm1 }
	__asm { jae L_006a8428 }
	__asm { inc eax }
	__asm { add ecx, 4 }
	__asm { cmp eax, edx }
	__asm { jl L_006a8414 }
	__asm { L_006a8425: }
	__asm { lea eax, [edx - 1] }
	__asm { L_006a8428: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x006a8a30
extern "C" __declspec(naked) void asm_006a8a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xorps xmm3, xmm3 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { imul eax, dword ptr [ebp + 0x10] }
	__asm { shl eax, 5 }
	__asm { add eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 4 }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { test eax, eax }
	__asm { je L_006a8b33 }
	__asm { push ebx }
	__asm { movaps xmm5, xmm3 }
	__asm { movaps xmm4, xmm3 }
	__asm { push edi }
	__asm { L_006a8a82: }
	__asm { cvtsi2ss xmm0, dword ptr [ecx + 8] }
	__asm { mov ebx, dword ptr [ecx + 4] }
	__asm { xorps xmm2, xmm2 }
	__asm { xor edi, edi }
	__asm { xor edx, edx }
	__asm { addss xmm3, xmm0 }
	__asm { test ebx, ebx }
	__asm { je L_006a8afe }
	__asm { mov esi, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { L_006a8aa4: }
	__asm { mov cl, byte ptr [eax + edx] }
	__asm { movzx eax, cl }
	__asm { movzx esi, byte ptr [eax + esi] }
	__asm { cmp esi, 0xff }
	__asm { jne L_006a8abf }
	__asm { cmp cl, 1 }
	__asm { je L_006a8aea }
	__asm { xor edi, edi }
	__asm { jmp L_006a8aea }
	__asm { L_006a8abf: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 0x20] }
	__asm { shl ecx, 5 }
	__asm { add ecx, dword ptr [ebp - 8] }
	__asm { add eax, esi }
	__asm { movsx eax, byte ptr [eax + edi] }
	__asm { mov edi, dword ptr [ecx + 0xc] }
	__asm { cvtsi2ss xmm1, eax }
	__asm { movsx eax, word ptr [ecx + 6] }
	__asm { cvtsi2ss xmm0, eax }
	__asm { addss xmm2, xmm1 }
	__asm { addss xmm2, xmm0 }
	__asm { L_006a8aea: }
	__asm { mov esi, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { inc edx }
	__asm { cmp edx, ebx }
	__asm { jb L_006a8aa4 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { L_006a8afe: }
	__asm { comiss xmm2, xmm5 }
	__asm { jbe L_006a8b06 }
	__asm { movaps xmm5, xmm2 }
	__asm { L_006a8b06: }
	__asm { comiss xmm3, xmm4 }
	__asm { jbe L_006a8b0e }
	__asm { movaps xmm4, xmm3 }
	__asm { L_006a8b0e: }
	__asm { add ecx, 0x10 }
	__asm { dec eax }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jne L_006a8a82 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { movss dword ptr [eax], xmm5 }
	__asm { movss dword ptr [eax + 4], xmm4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006a8b33: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01038034[];
extern "C" void fn_00619680();
extern "C" void fn_006aa1d0();
extern "C" void fn_007715e0();
extern "C" void fn_00771810();
// FUNCTION: ROBLOXSTUDIO 0x006a9b30
extern "C" __declspec(naked) void asm_006a9b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x24 }
	__asm { movss xmm1, dword ptr [ecx] }
	__asm { ucomiss xmm1, dword ptr [g_01038034] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_006a9b63 }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_00771810 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a9b63: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_006a9c6e }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_006aa1d0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { ucomiss xmm0, dword ptr [esi] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_006a9bf7 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { ucomiss xmm0, dword ptr [esi + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_006a9bf7 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { ucomiss xmm0, dword ptr [esi + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_006a9bf7 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { ucomiss xmm0, dword ptr [esi + 0xc] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_006a9bf7 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], 0x3f800000 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_00771810 }
	__asm { L_006a9bf2: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a9bf7: }
	__asm { fldz }
	__asm { sub esp, 0x10 }
	__asm { fst dword ptr [esp + 0xc] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { fst dword ptr [esp + 8] }
	__asm { fst dword ptr [esp + 4] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { call fn_00619680 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { mov ecx, eax }
	__asm { add esp, 0x14 }
	__asm { ucomiss xmm0, dword ptr [ecx] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_006a9c54 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { ucomiss xmm0, dword ptr [ecx + 4] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_006a9c54 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { ucomiss xmm0, dword ptr [ecx + 8] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_006a9c54 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { ucomiss xmm0, dword ptr [ecx + 0xc] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_006a9bf2 }
	__asm { L_006a9c54: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { call fn_007715e0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a9c6e: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], 0x3f800000 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_00771810 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006a9cf0
extern "C" __declspec(naked) void asm_006a9cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { sub eax, 0 }
	__asm { je L_006a9d1b }
	__asm { sub eax, 2 }
	__asm { je L_006a9d05 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a9d05: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { fild dword ptr [ebp + 0x14] }
	__asm { fmul dword ptr [ebp + 0x10] }
	__asm { fsubr dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a9d1b: }
	__asm { fild dword ptr [ebp + 0xc] }
	__asm { fmul dword ptr [ebp + 0x10] }
	__asm { fsubr dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006a9d30
extern "C" __declspec(naked) void asm_006a9d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { dec eax }
	__asm { je L_006a9d4c }
	__asm { dec eax }
	__asm { je L_006a9d41 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a9d41: }
	__asm { fild dword ptr [ebp + 0xc] }
	__asm { fmul dword ptr [ebp + 0x10] }
	__asm { fsubr dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006a9d4c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { fild dword ptr [ebp + 0x14] }
	__asm { fmul dword ptr [ebp + 0x10] }
	__asm { fsubr dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_0061de60();
extern "C" void fn_00665970();
extern "C" void fn_006a9de0();
extern "C" void fn_006aa160();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006a9f80
extern "C" __declspec(naked) void asm_006a9f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14ff0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp esi, edi }
	__asm { je L_006a9fc9 }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { cmp eax, ecx }
	__asm { jne L_006a9fde }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [esi] }
	__asm { L_006a9fc6: }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_006a9fc9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006a9fde: }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub edx, eax }
	__asm { sub ebx, ecx }
	__asm { sar edx, 4 }
	__asm { sar ebx, 4 }
	__asm { cmp edx, ebx }
	__asm { ja L_006aa00c }
	__asm { push ecx }
	__asm { push dword ptr [edi + 4] }
	__asm { push eax }
	__asm { call fn_006a9de0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { add esp, 0xc }
	__asm { and eax, 0xfffffff0 }
	__asm { add eax, dword ptr [esi] }
	__asm { jmp L_006a9fc6 }
	__asm { L_006aa00c: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { sub eax, ecx }
	__asm { sar eax, 4 }
	__asm { cmp edx, eax }
	__asm { ja L_006aa03f }
	__asm { mov eax, dword ptr [edi] }
	__asm { shl ebx, 4 }
	__asm { push ecx }
	__asm { add ebx, eax }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_006a9de0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [edi + 4] }
	__asm { push ebx }
	__asm { call fn_0061de60 }
	__asm { add esp, 0x20 }
	__asm { jmp L_006a9fc6 }
	__asm { L_006aa03f: }
	__asm { test ecx, ecx }
	__asm { je L_006aa04c }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006aa04c: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov ecx, esi }
	__asm { sar eax, 4 }
	__asm { push eax }
	__asm { call fn_006aa160 }
	__asm { test al, al }
	__asm { je L_006a9fc9 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_0061de60 }
	__asm { add esp, 0x14 }
	__asm { jmp L_006a9fc6 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00665970 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x006aa0d0
extern "C" __declspec(naked) void asm_006aa0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15013 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_006aa126 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006aa125 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006aa125 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006aa125: }
	__asm { pop ebx }
	__asm { L_006aa126: }
	__asm { push dword ptr [esi + 0x24] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe42778 }
	__asm { je L_006aa146 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006aa146: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x006aa1d0
extern "C" __declspec(naked) void asm_006aa1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss xmm4, dword ptr [ecx] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { sub esp, 0x10 }
	__asm { comiss xmm1, xmm4 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea esi, [eax + 8] }
	__asm { push edi }
	__asm { jbe L_006aa2e6 }
	__asm { movss xmm2, dword ptr [ecx + 4] }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { comiss xmm0, xmm2 }
	__asm { lea edx, [ecx + 4] }
	__asm { jbe L_006aa2e6 }
	__asm { movss xmm3, dword ptr [ecx + 8] }
	__asm { movss xmm6, dword ptr [eax] }
	__asm { comiss xmm3, xmm6 }
	__asm { lea edi, [ecx + 8] }
	__asm { jbe L_006aa2e6 }
	__asm { movss xmm7, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [ecx + 0xc] }
	__asm { comiss xmm0, xmm7 }
	__asm { jbe L_006aa2e6 }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { comiss xmm0, dword ptr [edi + 4] }
	__asm { lea ebx, [edi + 4] }
	__asm { ja L_006aa240 }
	__asm { lea ebx, [esi + 4] }
	__asm { L_006aa240: }
	__asm { movss xmm5, dword ptr [ebx] }
	__asm { comiss xmm1, xmm3 }
	__asm { movss dword ptr [ebp - 0xc], xmm5 }
	__asm { cmovbe edi, esi }
	__asm { comiss xmm2, xmm7 }
	__asm { movss xmm3, dword ptr [edi] }
	__asm { movss dword ptr [ebp - 0x10], xmm3 }
	__asm { ja L_006aa260 }
	__asm { lea edx, [eax + 4] }
	__asm { L_006aa260: }
	__asm { movss xmm2, dword ptr [edx] }
	__asm { comiss xmm4, xmm6 }
	__asm { movss dword ptr [ebp - 4], xmm2 }
	__asm { cmovbe ecx, eax }
	__asm { comiss xmm5, xmm2 }
	__asm { movss xmm1, dword ptr [ecx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { ja L_006aa2a1 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { L_006aa2a1: }
	__asm { comiss xmm3, xmm1 }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { lea ecx, [ebp - 8] }
	__asm { ja L_006aa2b0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { L_006aa2b0: }
	__asm { comiss xmm2, xmm5 }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax] }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { ja L_006aa2c4 }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { L_006aa2c4: }
	__asm { comiss xmm1, xmm3 }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { lea ecx, [ebp - 8] }
	__asm { ja L_006aa2d3 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { L_006aa2d3: }
	__asm { fld dword ptr [ecx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { fstp dword ptr [eax + 8] }
	__asm { movss dword ptr [eax + 0xc], xmm0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006aa2e6: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01038034[];
// FUNCTION: ROBLOXSTUDIO 0x006aa480
extern "C" __declspec(naked) void asm_006aa480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { ucomiss xmm0, dword ptr [g_01038034] }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_006aa4a8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006aa4a8: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss xmm7, dword ptr [ecx + 0xc] }
	__asm { movss xmm4, dword ptr [eax] }
	__asm { movss xmm6, dword ptr [ecx + 0x10] }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [ecx + 8] }
	__asm { movss xmm5, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { subss xmm4, xmm7 }
	__asm { subss xmm3, xmm6 }
	__asm { movaps xmm0, xmm5 }
	__asm { movaps xmm1, xmm2 }
	__asm { mulss xmm1, xmm4 }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm5, xmm4 }
	__asm { mulss xmm2, xmm3 }
	__asm { subss xmm1, xmm0 }
	__asm { addss xmm5, xmm2 }
	__asm { addss xmm7, xmm1 }
	__asm { addss xmm6, xmm5 }
	__asm { movss dword ptr [eax], xmm7 }
	__asm { movss dword ptr [eax + 4], xmm6 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x006aa510
extern "C" __declspec(naked) void asm_006aa510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push edi }
	__asm { lea edi, [edx + 4] }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { comiss xmm0, dword ptr [ecx + 4] }
	__asm { lea esi, [ecx + 4] }
	__asm { mov ebx, esi }
	__asm { ja L_006aa54e }
	__asm { mov ebx, edi }
	__asm { L_006aa54e: }
	__asm { movss xmm0, dword ptr [edx] }
	__asm { comiss xmm0, dword ptr [ecx] }
	__asm { movss xmm1, dword ptr [ebx] }
	__asm { mov ebx, ecx }
	__asm { ja L_006aa55f }
	__asm { mov ebx, edx }
	__asm { L_006aa55f: }
	__asm { fld dword ptr [ebx] }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { fstp dword ptr [eax] }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { comiss xmm0, dword ptr [edi] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { cmovbe esi, edi }
	__asm { comiss xmm0, dword ptr [edx] }
	__asm { movss xmm1, dword ptr [esi] }
	__asm { pop edi }
	__asm { cmovbe ecx, edx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { fld dword ptr [ecx] }
	__asm { movss dword ptr [eax + 0xc], xmm1 }
	__asm { fstp dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_005eba40();
extern "C" void fn_00b5cbf0();
extern "C" void fn_00bc5e20();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x006aa590
extern "C" __declspec(naked) void asm_006aa590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15082 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 0x6abb20 }
	__asm { push 0xb5cbf0 }
	__asm { mov ebx, ecx }
	__asm { push 2 }
	__asm { push 0x10 }
	__asm { lea eax, [ebx + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebx], esi }
	__asm { call fn_00cf676b }
	__asm { lea ecx, [ebx + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b5cbf0 }
	__asm { mov dword ptr [ebx + 0x38], 0 }
	__asm { mov dword ptr [ebx + 0x3c], 0 }
	__asm { mov dword ptr [ebx + 0x40], 0 }
	__asm { mov dword ptr [ebx + 0x44], 0 }
	__asm { mov dword ptr [ebx + 0x48], 0 }
	__asm { mov dword ptr [ebx + 0x4c], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_00bc5e20 }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push 7 }
	__asm { push 0xc }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_00bc5e20 }
	__asm { push 0 }
	__asm { push 3 }
	__asm { push 1 }
	__asm { push 0x10 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_005eba40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_00bc5e20 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea edx, [ebp - 0x24] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x40] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx + 0x40], ecx }
	__asm { mov esi, dword ptr [ebx + 0x44] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov dword ptr [ebx + 0x44], edx }
	__asm { test esi, esi }
	__asm { je L_006aa6cc }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006aa6cc }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006aa6cc }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006aa6cc: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { test esi, esi }
	__asm { je L_006aa6fa }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006aa6fa }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006aa6fa }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006aa6fa: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { cmp dword ptr [ebp - 0x24], 0 }
	__asm { mov cl, byte ptr [eax + 0x18] }
	__asm { mov byte ptr [ebx + 4], cl }
	__asm { mov al, byte ptr [eax + 0x19] }
	__asm { mov byte ptr [ebx + 5], al }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { je L_006aa72f }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006aa72f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b5b160();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x006aa750
extern "C" __declspec(naked) void asm_006aa750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd150c3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov esi, dword ptr [ebx + 0x4c] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_006aa7a6 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006aa7a6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006aa7a6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006aa7a6: }
	__asm { mov esi, dword ptr [ebx + 0x44] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_006aa7d5 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006aa7d5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006aa7d5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006aa7d5: }
	__asm { mov esi, dword ptr [ebx + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006aa803 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006aa803 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006aa803 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006aa803: }
	__asm { lea ecx, [ebx + 0x28] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b5b160 }
	__asm { push 0x6abb20 }
	__asm { push 2 }
	__asm { push 0x10 }
	__asm { lea eax, [ebx + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cf669e }
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
extern "C" void fn_005eb5a0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x006aa840
extern "C" __declspec(naked) void asm_006aa840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd150e5 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { test al, al }
	__asm { je L_006aa8a6 }
	__asm { cmp dword ptr [ebx + 0x2c], 0x80000 }
	__asm { jbe L_006aa8a6 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006aa895 }
	__asm { push 0x35 }
	__asm { push 0xe427c0 }
	__asm { push 0xe4280c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006aa8a6 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006aa895: }
	__asm { movzx eax, al }
	__asm { push 0xe42838 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006aa8a6: }
	__asm { mov edx, dword ptr [ebx + 0x2c] }
	__asm { mov ecx, 0x20 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edx, ecx }
	__asm { jbe L_006aa8c2 }
	__asm { L_006aa8b5: }
	__asm { mov eax, ecx }
	__asm { shr eax, 1 }
	__asm { add ecx, eax }
	__asm { cmp ecx, edx }
	__asm { jb L_006aa8b5 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { L_006aa8c2: }
	__asm { lea edx, [ebp - 0x10] }
	__asm { cmp ecx, 0x80000 }
	__asm { mov eax, 0xe427bc }
	__asm { cmovbe eax, edx }
	__asm { lea esi, [ebx + 0x38] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006aa8e7 }
	__asm { cmp dword ptr [eax + 0x2c], edx }
	__asm { jae L_006aaa55 }
	__asm { L_006aa8e7: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push 0x18 }
	__asm { lea edx, [ebp - 0x1c] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x38] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_006aa947 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006aa947 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006aa947 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006aa947: }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_006aa979 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006aa979 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006aa979 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006aa979: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebx + 0x38] }
	__asm { push eax }
	__asm { lea eax, [ebx + 0x40] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_005eb5a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx + 0x48], ecx }
	__asm { mov edi, dword ptr [ebx + 0x4c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebx + 0x4c], edx }
	__asm { test edi, edi }
	__asm { je L_006aa9f1 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006aa9f1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006aa9f1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006aa9f1: }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_006aaa20 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006aaa20 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006aaa20 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006aaa20: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_006aaa51 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006aaa51 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_006aaa51 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006aaa51: }
	__asm { lea esi, [ebx + 0x38] }
	__asm { pop edi }
	__asm { L_006aaa55: }
	__asm { cmp dword ptr [ebx + 0x2c], 0 }
	__asm { jle L_006aaa81 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0x2c] }
	__asm { lea ecx, [ecx + ecx*2] }
	__asm { shl ecx, 3 }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 0x28] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { L_006aaa81: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00692fb0();
extern "C" void fn_006ab670();
extern "C" void fn_006abc70();
// FUNCTION: ROBLOXSTUDIO 0x006aad30
extern "C" __declspec(naked) void asm_006aad30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov ebx, ecx }
	__asm { push 1 }
	__asm { push 6 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006ab670 }
	__asm { test eax, eax }
	__asm { je L_006aaf6f }
	__asm { movzx eax, byte ptr [ebx + 4] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00692fb0 }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [ebp + 0x20] }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 0x24] }
	__asm { movss xmm2, dword ptr [ecx] }
	__asm { movss xmm1, dword ptr [edi + 4] }
	__asm { mov edx, eax }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { add ebx, 0x28 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp + 0x28], edx }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { movss dword ptr [ebp - 0x14], xmm2 }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { call fn_006abc70 }
	__asm { movss xmm2, dword ptr [edi] }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { movss dword ptr [ebp - 0x14], xmm2 }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { call fn_006abc70 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, ebx }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { movss dword ptr [ebp - 0x10], xmm2 }
	__asm { call fn_006abc70 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { movss dword ptr [ebp - 0x10], xmm2 }
	__asm { call fn_006abc70 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov esi, dword ptr [ebp + 0x24] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [esi] }
	__asm { movss xmm2, dword ptr [esi + 4] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { movss dword ptr [ebp - 0x10], xmm2 }
	__asm { call fn_006abc70 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm1, dword ptr [esi] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { movss dword ptr [ebp - 0x10], xmm2 }
	__asm { call fn_006abc70 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_006aaf6f: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_00692fb0();
extern "C" void fn_006ab670();
extern "C" void fn_006abc70();
// FUNCTION: ROBLOXSTUDIO 0x006aaf80
extern "C" __declspec(naked) void asm_006aaf80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd150f7 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 2 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006ab670 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006ab07b }
	__asm { movzx eax, byte ptr [esi + 4] }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_00692fb0 }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { mov edi, eax }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x30], ecx }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x24], edi }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call fn_006abc70 }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x24], edi }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call fn_006abc70 }
	__asm { pop edi }
	__asm { L_006ab07b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00692fb0();
extern "C" void fn_006ab670();
extern "C" void fn_006abc70();
// FUNCTION: ROBLOXSTUDIO 0x006ab090
extern "C" __declspec(naked) void asm_006ab090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15109 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 2 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006ab670 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006ab191 }
	__asm { movzx eax, byte ptr [esi + 4] }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00692fb0 }
	__asm { movss xmm0, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { mov edi, eax }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x30], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x24], edi }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call fn_006abc70 }
	__asm { movss xmm0, dword ptr [ebp + 0x14] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x1c] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x24], edi }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call fn_006abc70 }
	__asm { pop edi }
	__asm { L_006ab191: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00692fb0();
extern "C" void fn_006ab670();
extern "C" void fn_006abc70();
// FUNCTION: ROBLOXSTUDIO 0x006ab1b0
extern "C" __declspec(naked) void asm_006ab1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 6 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { call fn_006ab670 }
	__asm { test eax, eax }
	__asm { je L_006ab355 }
	__asm { movzx eax, byte ptr [ebx + 4] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00692fb0 }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov edi, dword ptr [ebp + 0x20] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov ebx, dword ptr [ebp + 0x24] }
	__asm { movss xmm1, dword ptr [edi] }
	__asm { movss xmm0, dword ptr [ebx + 4] }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 0x28] }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { call fn_006abc70 }
	__asm { movss xmm0, dword ptr [edi + 4] }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { movss xmm1, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ecx + 0x28] }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { call fn_006abc70 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ecx + 0x28] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { call fn_006abc70 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { movss xmm1, dword ptr [ebx + 4] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { push eax }
	__asm { add esi, 0x28 }
	__asm { mov ecx, esi }
	__asm { call fn_006abc70 }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { movss xmm0, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { movss xmm1, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { call fn_006abc70 }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { movss xmm0, dword ptr [ebx] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { call fn_006abc70 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_006ab355: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00692fb0();
extern "C" void fn_006ab670();
extern "C" void fn_006abc70();
extern "C" void fn_006b9740();
extern "C" void fn_006dd600();
// FUNCTION: ROBLOXSTUDIO 0x006ab360
extern "C" __declspec(naked) void asm_006ab360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1511b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push esi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006ab670 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006ab486 }
	__asm { movzx eax, byte ptr [ebx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00692fb0 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { test bl, bl }
	__asm { je L_006ab425 }
	__asm { mov eax, 0x55555556 }
	__asm { imul esi }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { mov ecx, esi }
	__asm { sub ecx, eax }
	__asm { je L_006ab425 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006ab414 }
	__asm { push 0xe7 }
	__asm { push 0xe427c0 }
	__asm { push 0xe4294c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006ab425 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_006ab414: }
	__asm { movzx eax, bl }
	__asm { push 0xe42960 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006ab425: }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { test esi, esi }
	__asm { jle L_006ab485 }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { fldz }
	__asm { L_006ab431: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { movsx eax, word ptr [eax + edi*2] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { lea eax, [ecx + eax*8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_006dd600 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x34], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x30], ecx }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x28] }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { call fn_006abc70 }
	__asm { fldz }
	__asm { inc edi }
	__asm { cmp edi, esi }
	__asm { jl L_006ab431 }
	__asm { fstp st(0) }
	__asm { L_006ab485: }
	__asm { pop edi }
	__asm { L_006ab486: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00692fb0();
extern "C" void fn_006ab670();
extern "C" void fn_006abc70();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006ab4a0
extern "C" __declspec(naked) void asm_006ab4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1512d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov edi, dword ptr [ebp + 0x1c] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edi }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006ab670 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006ab65a }
	__asm { movzx eax, byte ptr [ebx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00692fb0 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { add esp, 8 }
	__asm { mov edx, eax }
	__asm { mov dword ptr [ebp + 0x1c], edx }
	__asm { test bl, bl }
	__asm { je L_006ab56a }
	__asm { mov eax, 0x55555556 }
	__asm { imul edi }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { mov ecx, edi }
	__asm { sub ecx, eax }
	__asm { je L_006ab567 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006ab556 }
	__asm { push 0xf6 }
	__asm { push 0xe427c0 }
	__asm { push 0xe4294c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006ab567 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_006ab556: }
	__asm { movzx eax, bl }
	__asm { push 0xe429d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006ab567: }
	__asm { mov edx, dword ptr [ebp + 0x1c] }
	__asm { L_006ab56a: }
	__asm { xor ebx, ebx }
	__asm { test edi, edi }
	__asm { jle L_006ab65a }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add eax, 0x28 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_006ab581: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { movsx eax, word ptr [eax + ebx*2] }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { lea eax, [eax + eax*2] }
	__asm { mov dword ptr [ebp - 0x28], edx }
	__asm { movss xmm3, dword ptr [ecx + eax*4 + 4] }
	__asm { movss xmm2, dword ptr [ecx + eax*4] }
	__asm { movss xmm4, dword ptr [ecx + eax*4 + 8] }
	__asm { mulss xmm0, xmm2 }
	__asm { movaps xmm1, xmm3 }
	__asm { mulss xmm1, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { mulss xmm0, xmm4 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { addss xmm1, xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [esi + 0x10] }
	__asm { addss xmm1, dword ptr [esi + 0x24] }
	__asm { movss dword ptr [ebp - 0x1c], xmm1 }
	__asm { movaps xmm1, xmm2 }
	__asm { mulss xmm1, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x14] }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm4, dword ptr [esi + 0x20] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x1c] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, dword ptr [esi + 0x28] }
	__asm { movss dword ptr [ebp - 0x18], xmm1 }
	__asm { movss xmm1, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mulss xmm1, xmm2 }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { addss xmm1, xmm0 }
	__asm { addss xmm1, xmm4 }
	__asm { addss xmm1, dword ptr [esi + 0x2c] }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { call fn_006abc70 }
	__asm { mov edx, dword ptr [ebp + 0x1c] }
	__asm { inc ebx }
	__asm { cmp ebx, edi }
	__asm { jl L_006ab581 }
	__asm { pop esi }
	__asm { L_006ab65a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_006abd60();
// FUNCTION: ROBLOXSTUDIO 0x006ab670
extern "C" __declspec(naked) void asm_006ab670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push -1 }
	__asm { push 0xd1513f }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x2c] }
	__asm { lea eax, [esi + edx] }
	__asm { cmp eax, 0x80000 }
	__asm { jbe L_006ab6af }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_006ab6af: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { shl ebx, 4 }
	__asm { add ebx, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { test ecx, ecx }
	__asm { jle L_006ab6fa }
	__asm { cmp byte ptr [ebp + 0x18], 0 }
	__asm { mov edi, dword ptr [ebx + 8] }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { lea edi, [edi + eax*4] }
	__asm { jne L_006ab6dc }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi - 0x14] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { jne L_006ab6fa }
	__asm { L_006ab6dc: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [edi - 0xc], eax }
	__asm { jne L_006ab6fa }
	__asm { mov eax, dword ptr [edi - 4] }
	__asm { add eax, dword ptr [edi - 8] }
	__asm { cmp eax, esi }
	__asm { jne L_006ab6fa }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { add dword ptr [ecx + eax*4 - 4], edx }
	__asm { jmp L_006ab76b }
	__asm { L_006ab6fa: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { test eax, eax }
	__asm { je L_006ab718 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006ab718: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006abd60 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006ab76b }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006ab76b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006ab76b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006ab76b: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { pop edi }
	__asm { lea ecx, [eax + eax*4] }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { pop ebx }
	__asm { lea eax, [eax + ecx*4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add eax, -0x14 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10140[];
extern "C" void fn_006e84d0();
// FUNCTION: ROBLOXSTUDIO 0x006abb20
extern "C" __declspec(naked) void asm_006abb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1518b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [edi + 4], ebx }
	__asm { jle L_006abb95 }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { L_006abb56: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [eax + esi + 4] }
	__asm { test esi, esi }
	__asm { je L_006abb86 }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006abb86 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006abb86 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006abb86: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { inc ebx }
	__asm { add esi, 0x14 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp ebx, dword ptr [edi + 4] }
	__asm { jl L_006abb56 }
	__asm { L_006abb95: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006abbe9 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_006abbe2 }
	__asm { mov ecx, esi }
	__asm { call fn_006e84d0 }
	__asm { test esi, esi }
	__asm { je L_006abbe2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_006abbe2: }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { L_006abbe9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006abc00
extern "C" __declspec(naked) void asm_006abc00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx] }
	__asm { test ecx, ecx }
	__asm { je L_006abc20 }
	__asm { lea eax, [ecx + 4] }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { L_006abc20: }
	__asm { mov dword ptr [esi], edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test edi, edi }
	__asm { je L_006abc52 }
	__asm { lea ecx, [edi + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006abc52 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006abc52 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006abc52: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006ac1c0();
// FUNCTION: ROBLOXSTUDIO 0x006abc70
extern "C" __declspec(naked) void asm_006abc70()
{
	__asm { L_006abc70: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jge L_006abcbc }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea edx, [ecx + ecx*2] }
	__asm { lea edx, [eax + edx*8] }
	__asm { test edx, edx }
	__asm { je L_006abcb2 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp dword ptr [edx + 0x10] }
	__asm { fld dword ptr [ecx + 0x14] }
	__asm { fstp dword ptr [edx + 0x14] }
	__asm { L_006abcb2: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006abcbc: }
	__asm { mov edx, dword ptr [esi] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, edx }
	__asm { jb L_006abd0e }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { lea eax, [edx + eax*8] }
	__asm { cmp edi, eax }
	__asm { jae L_006abd0e }
	__asm { mov eax, dword ptr [edi] }
	__asm { movss xmm0, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0x14] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call L_006abc70 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006abd0e: }
	__asm { lea eax, [ecx + 1] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006ac1c0 }
	__asm { fld dword ptr [edi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea edx, [eax + eax*2] }
	__asm { fstp dword ptr [ecx + edx*8 - 0x18] }
	__asm { fld dword ptr [edi + 4] }
	__asm { fstp dword ptr [ecx + edx*8 - 0x14] }
	__asm { fld dword ptr [edi + 8] }
	__asm { fstp dword ptr [ecx + edx*8 - 0x10] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ecx + edx*8 - 0xc], eax }
	__asm { fld dword ptr [edi + 0x10] }
	__asm { fstp dword ptr [ecx + edx*8 - 8] }
	__asm { fld dword ptr [edi + 0x14] }
	__asm { pop edi }
	__asm { fstp dword ptr [ecx + edx*8 - 4] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006abc00();
extern "C" void fn_006ac2c0();
// FUNCTION: ROBLOXSTUDIO 0x006abd60
extern "C" __declspec(naked) void asm_006abd60()
{
	__asm { L_006abd60: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4dcf8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jge L_006abdd7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea edx, [ecx + ecx*4] }
	__asm { lea edx, [eax + edx*4] }
	__asm { test edx, edx }
	__asm { je L_006abdc2 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006abdb0 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006abdb0: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { L_006abdc2: }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006abdd7: }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, edx }
	__asm { jb L_006abe77 }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { lea eax, [edx + eax*4] }
	__asm { cmp edi, eax }
	__asm { jae L_006abe77 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { test eax, eax }
	__asm { je L_006abe0d }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006abe0d: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call L_006abd60 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006abe98 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006abe98 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006abe98 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006abe77: }
	__asm { lea eax, [ecx + 1] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006ac2c0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { lea ecx, [eax + eax*4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ecx - 5] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { call fn_006abc00 }
	__asm { L_006abe98: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e105fc[];
extern "C" char g_011dd418[];
extern "C" void fn_004039a0();
extern "C" void fn_006d8660();
extern "C" void fn_006d86d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006abeb0
extern "C" __declspec(naked) void asm_006abeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd151b9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { lea esi, [edi + 8] }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call dword ptr [edx + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { jne L_006abf88 }
	__asm { call fn_006d8660 }
	__asm { cmp dword ptr [g_011dd418], ebx }
	__asm { je L_006abf42 }
	__asm { push 0xe37130 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_004039a0 }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mov ebx, 1 }
	__asm { push ebx }
	__asm { push 0x9e }
	__asm { push 0xe370e8 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push 0xe37160 }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call dword ptr [g_011dd418] }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [ebp - 0xd], bl }
	__asm { test al, al }
	__asm { jne L_006abf46 }
	__asm { L_006abf42: }
	__asm { mov byte ptr [ebp - 0xd], 0 }
	__asm { L_006abf46: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_006abf75 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_006abf63 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006abf63: }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { L_006abf75: }
	__asm { cmp byte ptr [ebp - 0xd], 0 }
	__asm { je L_006abf83 }
	__asm { push -1 }
	__asm { call dword ptr [g_00e105fc] }
	__asm { L_006abf83: }
	__asm { call fn_006d86d0 }
	__asm { L_006abf88: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp + 8] }
	__asm { cmovl ecx, esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea esi, [edx + eax*8] }
	__asm { cmp edx, esi }
	__asm { jae L_006abfd7 }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { L_006abfa7: }
	__asm { test edx, edx }
	__asm { je L_006abfcd }
	__asm { mov eax, dword ptr [ecx - 0xc] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx - 8] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx - 4] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp dword ptr [edx + 0x10] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [edx + 0x14] }
	__asm { L_006abfcd: }
	__asm { add edx, 0x18 }
	__asm { add ecx, 0x18 }
	__asm { cmp edx, esi }
	__asm { jb L_006abfa7 }
	__asm { L_006abfd7: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e36278[];
extern "C" char g_01038120[];
extern "C" char g_01038168[];
extern "C" void fn_006abeb0();
// FUNCTION: ROBLOXSTUDIO 0x006ac1c0
extern "C" __declspec(naked) void asm_006ac1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { cmp esi, ebx }
	__asm { je L_006ac2b4 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 4], ebx }
	__asm { cmp ebx, ecx }
	__asm { jle L_006ac24e }
	__asm { test ecx, ecx }
	__asm { jne L_006ac1ed }
	__asm { mov dword ptr [edi + 8], ebx }
	__asm { push esi }
	__asm { jmp L_006ac271 }
	__asm { L_006ac1ed: }
	__asm { cmp ebx, 0xa }
	__asm { jge L_006ac1fc }
	__asm { mov dword ptr [edi + 8], 0xa }
	__asm { push esi }
	__asm { jmp L_006ac271 }
	__asm { L_006ac1fc: }
	__asm { movss xmm1, dword ptr [g_01038168] }
	__asm { mov eax, ecx }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 3 }
	__asm { cmp eax, 0x61a80 }
	__asm { jle L_006ac21d }
	__asm { movss xmm1, dword ptr [g_00e36278] }
	__asm { jmp L_006ac22c }
	__asm { L_006ac21d: }
	__asm { cmp eax, 0xfa00 }
	__asm { jle L_006ac22c }
	__asm { movss xmm1, dword ptr [g_01038120] }
	__asm { L_006ac22c: }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { mov edx, 0xa }
	__asm { mulss xmm0, xmm1 }
	__asm { push esi }
	__asm { cvttss2si eax, xmm0 }
	__asm { sub eax, ecx }
	__asm { add eax, ebx }
	__asm { mov ecx, eax }
	__asm { cmp eax, edx }
	__asm { cmovl ecx, edx }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_006ac271 }
	__asm { L_006ac24e: }
	__asm { mov eax, 0x55555556 }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp ebx, eax }
	__asm { jg L_006ac278 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_006ac278 }
	__asm { cmp ebx, 0xa }
	__asm { jle L_006ac278 }
	__asm { cmp ebx, esi }
	__asm { cmovge ebx, esi }
	__asm { push ebx }
	__asm { L_006ac271: }
	__asm { mov ecx, edi }
	__asm { call fn_006abeb0 }
	__asm { L_006ac278: }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jge L_006ac2b4 }
	__asm { lea ecx, [esi + esi*2] }
	__asm { shl ecx, 3 }
	__asm { L_006ac283: }
	__asm { mov eax, dword ptr [edi] }
	__asm { add eax, ecx }
	__asm { je L_006ac2ab }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov dword ptr [eax + 0x14], 0 }
	__asm { L_006ac2ab: }
	__asm { inc esi }
	__asm { add ecx, 0x18 }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jl L_006ac283 }
	__asm { L_006ac2b4: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e36278[];
extern "C" char g_01038120[];
extern "C" char g_01038168[];
extern "C" void fn_006ac000();
// FUNCTION: ROBLOXSTUDIO 0x006ac2c0
extern "C" __declspec(naked) void asm_006ac2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0xc], edi }
	__asm { cmp edi, ecx }
	__asm { je L_006ac400 }
	__asm { push ebx }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { cmp ecx, edi }
	__asm { jge L_006ac334 }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { shl eax, 2 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, edi }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { sub eax, ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_006ac2f6: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ebx, dword ptr [eax + edi + 4] }
	__asm { test ebx, ebx }
	__asm { je L_006ac326 }
	__asm { lea eax, [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006ac326 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006ac326 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006ac326: }
	__asm { add edi, 0x14 }
	__asm { dec dword ptr [ebp - 4] }
	__asm { jne L_006ac2f6 }
	__asm { mov edi, dword ptr [ebp - 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { L_006ac334: }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { cmp ebx, edx }
	__asm { jle L_006ac3ae }
	__asm { test edx, edx }
	__asm { jne L_006ac34b }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { push edi }
	__asm { jmp L_006ac3d1 }
	__asm { L_006ac34b: }
	__asm { cmp ebx, 0xa }
	__asm { jge L_006ac35a }
	__asm { mov dword ptr [esi + 8], 0xa }
	__asm { push edi }
	__asm { jmp L_006ac3d1 }
	__asm { L_006ac35a: }
	__asm { movss xmm1, dword ptr [g_01038168] }
	__asm { mov eax, edx }
	__asm { lea eax, [eax + eax*4] }
	__asm { shl eax, 2 }
	__asm { cmp eax, 0x61a80 }
	__asm { jle L_006ac37b }
	__asm { movss xmm1, dword ptr [g_00e36278] }
	__asm { jmp L_006ac38a }
	__asm { L_006ac37b: }
	__asm { cmp eax, 0xfa00 }
	__asm { jle L_006ac38a }
	__asm { movss xmm1, dword ptr [g_01038120] }
	__asm { L_006ac38a: }
	__asm { mov ecx, edx }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { mov edx, 0xa }
	__asm { mulss xmm0, xmm1 }
	__asm { push edi }
	__asm { cvttss2si eax, xmm0 }
	__asm { sub eax, ecx }
	__asm { add eax, ebx }
	__asm { mov ecx, eax }
	__asm { cmp eax, edx }
	__asm { cmovl ecx, edx }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { jmp L_006ac3d1 }
	__asm { L_006ac3ae: }
	__asm { mov eax, 0x55555556 }
	__asm { imul edx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp ebx, eax }
	__asm { jg L_006ac3d8 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_006ac3d8 }
	__asm { cmp ebx, 0xa }
	__asm { jle L_006ac3d8 }
	__asm { cmp ebx, edi }
	__asm { cmovge ebx, edi }
	__asm { push ebx }
	__asm { L_006ac3d1: }
	__asm { mov ecx, esi }
	__asm { call fn_006ac000 }
	__asm { L_006ac3d8: }
	__asm { pop ebx }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jge L_006ac400 }
	__asm { lea ecx, [edi + edi*4] }
	__asm { shl ecx, 2 }
	__asm { L_006ac3e4: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, ecx }
	__asm { je L_006ac3f7 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { L_006ac3f7: }
	__asm { inc edi }
	__asm { add ecx, 0x14 }
	__asm { cmp edi, dword ptr [esi + 4] }
	__asm { jl L_006ac3e4 }
	__asm { L_006ac400: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00654720();
extern "C" void fn_0067f670();
extern "C" void fn_00685f90();
extern "C" void fn_0068bf00();
extern "C" void fn_0069fd10();
extern "C" void fn_006aa750();
extern "C" void fn_006ad280();
extern "C" void fn_006adcf0();
extern "C" void fn_006adde0();
extern "C" void fn_006adf40();
extern "C" void fn_0076e0c0();
extern "C" void fn_00771e50();
extern "C" void fn_008f6780();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x006acfb0
extern "C" __declspec(naked) void asm_006acfb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15569 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe42a78 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0x13 }
	__asm { call fn_006ad280 }
	__asm { mov ecx, dword ptr [esi + 0x224] }
	__asm { lea edi, [esi + 0x210] }
	__asm { test ecx, ecx }
	__asm { je L_006ad039 }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { je L_006ad020 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_008f6780 }
	__asm { L_006ad020: }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { L_006ad039: }
	__asm { mov edi, dword ptr [esi + 0x20c] }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0x10 }
	__asm { test edi, edi }
	__asm { je L_006ad06f }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006ad06f }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006ad06f }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006ad06f: }
	__asm { mov edi, dword ptr [esi + 0x204] }
	__asm { mov byte ptr [ebp - 4], 0xf }
	__asm { test edi, edi }
	__asm { je L_006ad0a0 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006ad0a0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006ad0a0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006ad0a0: }
	__asm { mov edi, dword ptr [esi + 0x1fc] }
	__asm { mov byte ptr [ebp - 4], 0xe }
	__asm { pop ebx }
	__asm { test edi, edi }
	__asm { je L_006ad0bf }
	__asm { mov ecx, edi }
	__asm { call fn_006adde0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad0bf: }
	__asm { push 0x4033d0 }
	__asm { push 5 }
	__asm { push 8 }
	__asm { lea eax, [esi + 0x1d4] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0xd }
	__asm { call fn_00cf669e }
	__asm { mov edi, dword ptr [esi + 0x1d0] }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { test edi, edi }
	__asm { je L_006ad0f6 }
	__asm { mov ecx, edi }
	__asm { call fn_006adf40 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad0f6: }
	__asm { mov ecx, dword ptr [esi + 0x1cc] }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { test ecx, ecx }
	__asm { je L_006ad10a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_006ad10a: }
	__asm { mov edi, dword ptr [esi + 0x1c8] }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { test edi, edi }
	__asm { je L_006ad128 }
	__asm { mov ecx, edi }
	__asm { call fn_00771e50 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad128: }
	__asm { mov edi, dword ptr [esi + 0x1c4] }
	__asm { test edi, edi }
	__asm { je L_006ad15e }
	__asm { cmp dword ptr [edi + 0x1c], 0x10 }
	__asm { jb L_006ad143 }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad143: }
	__asm { mov dword ptr [edi + 0x1c], 0xf }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi + 8], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad15e: }
	__asm { mov edi, dword ptr [esi + 0x1b4] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { test edi, edi }
	__asm { je L_006ad17c }
	__asm { mov ecx, edi }
	__asm { call fn_006adcf0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad17c: }
	__asm { mov edi, dword ptr [esi + 0x1b0] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { test edi, edi }
	__asm { je L_006ad19a }
	__asm { mov ecx, edi }
	__asm { call fn_0076e0c0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad19a: }
	__asm { mov edi, dword ptr [esi + 0x1ac] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test edi, edi }
	__asm { je L_006ad1b8 }
	__asm { mov ecx, edi }
	__asm { call fn_0067f670 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad1b8: }
	__asm { mov edi, dword ptr [esi + 0x1a8] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { test edi, edi }
	__asm { je L_006ad1d6 }
	__asm { mov ecx, edi }
	__asm { call fn_0068bf00 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad1d6: }
	__asm { mov edi, dword ptr [esi + 0x1a4] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edi, edi }
	__asm { je L_006ad1f4 }
	__asm { mov ecx, edi }
	__asm { call fn_0069fd10 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad1f4: }
	__asm { mov ecx, dword ptr [esi + 0x1a0] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test ecx, ecx }
	__asm { je L_006ad208 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_006ad208: }
	__asm { mov edi, dword ptr [esi + 0x19c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_006ad226 }
	__asm { mov ecx, edi }
	__asm { call fn_006aa750 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad226: }
	__asm { mov edi, dword ptr [esi + 0x198] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_006ad244 }
	__asm { mov ecx, edi }
	__asm { call fn_00685f90 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad244: }
	__asm { mov ecx, dword ptr [esi + 0x194] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006ad259 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_006ad259: }
	__asm { lea ecx, [esi + 0x184] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00654720 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004637b0();
extern "C" void fn_00610a20();
extern "C" void fn_0063b6f0();
extern "C" void fn_00645800();
extern "C" void fn_006459f0();
extern "C" void fn_00680ea0();
extern "C" void fn_006854f0();
extern "C" void fn_00685f90();
extern "C" void fn_006b9740();
extern "C" void fn_00a01710();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006ad280
extern "C" __declspec(naked) void asm_006ad280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15589 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push edi }
	__asm { test ecx, ecx }
	__asm { je L_006ad40c }
	__asm { call fn_004637b0 }
	__asm { mov dword ptr [esi + 0x1c0], eax }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { test ecx, ecx }
	__asm { je L_006ad2c5 }
	__asm { call fn_0063b6f0 }
	__asm { mov ecx, eax }
	__asm { jmp L_006ad2c7 }
	__asm { L_006ad2c5: }
	__asm { xor ecx, ecx }
	__asm { L_006ad2c7: }
	__asm { mov eax, dword ptr [esi + 0x1b8] }
	__asm { mov dword ptr [esi + 0x1bc], ecx }
	__asm { push dword ptr [eax + 0x40] }
	__asm { call fn_00a01710 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_006ad325 }
	__asm { cmp dword ptr [esi + 0x198], 0 }
	__asm { je L_006ad325 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006ad314 }
	__asm { push 0x93 }
	__asm { push 0xe42ab0 }
	__asm { push 0xe42c50 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006ad325 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006ad314: }
	__asm { movzx eax, al }
	__asm { push 0xe42c60 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006ad325: }
	__asm { push 0x1e8 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { je L_006ad36b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006ad362 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006ad362: }
	__asm { mov ecx, edx }
	__asm { call fn_006854f0 }
	__asm { jmp L_006ad36d }
	__asm { L_006ad36b: }
	__asm { xor eax, eax }
	__asm { L_006ad36d: }
	__asm { mov edi, dword ptr [esi + 0x198] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 0x198], eax }
	__asm { test edi, edi }
	__asm { je L_006ad394 }
	__asm { mov ecx, edi }
	__asm { call fn_00685f90 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad394: }
	__asm { push 0xc0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_006ad3bb }
	__asm { push dword ptr [ebx] }
	__asm { mov ecx, eax }
	__asm { push esi }
	__asm { call fn_00610a20 }
	__asm { jmp L_006ad3bd }
	__asm { L_006ad3bb: }
	__asm { xor eax, eax }
	__asm { L_006ad3bd: }
	__asm { mov ecx, dword ptr [esi + 0x194] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 0x194], eax }
	__asm { test ecx, ecx }
	__asm { je L_006ad3db }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_006ad3db: }
	__asm { mov ecx, dword ptr [esi + 0x1cc] }
	__asm { test ecx, ecx }
	__asm { je L_006ad46e }
	__asm { call fn_00645800 }
	__asm { mov ecx, dword ptr [esi + 0x1cc] }
	__asm { call fn_006459f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006ad40c: }
	__asm { mov ecx, dword ptr [esi + 0x198] }
	__asm { mov dword ptr [esi + 0x1c0], 0 }
	__asm { mov dword ptr [esi + 0x1bc], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006ad453 }
	__asm { call fn_00680ea0 }
	__asm { mov edi, dword ptr [esi + 0x198] }
	__asm { mov dword ptr [esi + 0x198], 0 }
	__asm { test edi, edi }
	__asm { je L_006ad453 }
	__asm { mov ecx, edi }
	__asm { call fn_00685f90 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad453: }
	__asm { mov ecx, dword ptr [esi + 0x194] }
	__asm { mov dword ptr [esi + 0x194], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006ad46e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_006ad46e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402f60();
extern "C" void fn_00403540();
extern "C" void fn_00426850();
extern "C" void fn_004278c0();
extern "C" void fn_005e91a0();
extern "C" void fn_006a03e0();
extern "C" void fn_006ad5d0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
extern "C" void fn_008f6900();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006ad6d0
extern "C" __declspec(naked) void asm_006ad6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd155d5 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { cmp dword ptr [edi + 0x218], 0 }
	__asm { lea ebx, [edi + 0x210] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { je L_006ad71a }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { test eax, eax }
	__asm { je L_006ad71a }
	__asm { add eax, -0x1c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { jmp L_006ad721 }
	__asm { L_006ad71a: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { L_006ad721: }
	__asm { lea esi, [ebp - 0x14] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_006ad91c }
	__asm { mov edi, edi }
	__asm { L_006ad730: }
	__asm { dec dword ptr [esi + 0x18] }
	__asm { je L_006ad756 }
	__asm { mov esi, dword ptr [esi + 0x1c] }
	__asm { test esi, esi }
	__asm { je L_006ad91c }
	__asm { add esi, -0x1c }
	__asm { jne L_006ad730 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006ad756: }
	__asm { push 0xb }
	__asm { push 0 }
	__asm { push 0x10184cc }
	__asm { mov ecx, esi }
	__asm { call fn_00426850 }
	__asm { test eax, eax }
	__asm { jne L_006ad7c8 }
	__asm { mov edi, dword ptr [edi + 0x1a4] }
	__asm { push -1 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov byte ptr [ebp - 0x3c], al }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { add esp, 4 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006a03e0 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { jb L_006ad8f7 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { jmp L_006ad8ef }
	__asm { L_006ad7c8: }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push 0x100d138 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call fn_005e91a0 }
	__asm { inc eax }
	__asm { cmp edi, eax }
	__asm { lea edx, [ebp - 0x18] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { cmovae ecx, edx }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { push dword ptr [ecx] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { mov edi, dword ptr [ebp - 0x28] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { cmovae ecx, dword ptr [ebp - 0x38] }
	__asm { mov eax, 4 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0xe19990 }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_006ad842 }
	__asm { cmp edi, 4 }
	__asm { jae L_006ad838 }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_006ad840 }
	__asm { L_006ad838: }
	__asm { xor eax, eax }
	__asm { cmp edi, 4 }
	__asm { setne al }
	__asm { L_006ad840: }
	__asm { test eax, eax }
	__asm { L_006ad842: }
	__asm { sete al }
	__asm { test al, al }
	__asm { jne L_006ad88c }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { cmovae ecx, dword ptr [ebp - 0x38] }
	__asm { mov eax, 1 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0xe42cc8 }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_006ad885 }
	__asm { cmp edi, 1 }
	__asm { jae L_006ad87b }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_006ad883 }
	__asm { L_006ad87b: }
	__asm { xor eax, eax }
	__asm { cmp edi, 1 }
	__asm { setne al }
	__asm { L_006ad883: }
	__asm { test eax, eax }
	__asm { L_006ad885: }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_006ad8e6 }
	__asm { L_006ad88c: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { push 0xe42ccc }
	__asm { push 1 }
	__asm { push dword ptr [eax] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00773930 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { add esp, 0x10 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_006ad8de }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006ad8db }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006ad8db }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006ad8db: }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { L_006ad8de: }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { call fn_006ad5d0 }
	__asm { L_006ad8e6: }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { jb L_006ad8f7 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { L_006ad8ef: }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ad8f7: }
	__asm { lea eax, [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_006ad903 }
	__asm { add eax, -0x1c }
	__asm { jmp L_006ad905 }
	__asm { L_006ad903: }
	__asm { xor eax, eax }
	__asm { L_006ad905: }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_006ad911 }
	__asm { add eax, -0x1c }
	__asm { jmp L_006ad913 }
	__asm { L_006ad911: }
	__asm { xor eax, eax }
	__asm { L_006ad913: }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_008f6900 }
	__asm { L_006ad91c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012f8550[];
extern "C" void fn_00422750();
// FUNCTION: ROBLOXSTUDIO 0x006ad950
extern "C" __declspec(naked) void asm_006ad950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov dl, byte ptr [eax] }
	__asm { mov ah, dl }
	__asm { shr ah, 3 }
	__asm { and ah, 7 }
	__asm { cmp ah, 5 }
	__asm { je L_006adacd }
	__asm { test ah, ah }
	__asm { je L_006adacd }
	__asm { mov al, byte ptr [g_012f8550] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov cl, byte ptr [ebx] }
	__asm { cmp cl, al }
	__asm { je L_006ad992 }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { jne L_006ad992 }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006ad992: }
	__asm { mov cl, byte ptr [ebx + 1] }
	__asm { push edi }
	__asm { movzx edi, dl }
	__asm { shr edi, 6 }
	__asm { cmp ah, 1 }
	__asm { jne L_006ad9b9 }
	__asm { cmp cl, al }
	__asm { je L_006ad9b1 }
	__asm { and cl, 0x38 }
	__asm { cmp cl, 0x28 }
	__asm { je L_006adac2 }
	__asm { L_006ad9b1: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006ad9b9: }
	__asm { cmp cl, al }
	__asm { je L_006ad9cb }
	__asm { mov dl, cl }
	__asm { and dl, 0x38 }
	__asm { mov byte ptr [ebp + 0xb], 1 }
	__asm { cmp dl, 0x28 }
	__asm { je L_006ad9cf }
	__asm { L_006ad9cb: }
	__asm { mov byte ptr [ebp + 0xb], 0 }
	__asm { L_006ad9cf: }
	__asm { push esi }
	__asm { cmp cl, al }
	__asm { je L_006ad9f9 }
	__asm { movzx edx, cl }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { lea esi, [edx + edx*2] }
	__asm { mov edx, dword ptr [edi*4 + 0xe42a54] }
	__asm { mov edx, dword ptr [edx*4 + 0xe42a3c] }
	__asm { lea edx, [edx + esi*2] }
	__asm { cmp dword ptr [edx*4 + 0x12f6d50], 5 }
	__asm { jne L_006ad9fd }
	__asm { L_006ad9f9: }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { L_006ad9fd: }
	__asm { mov edx, dword ptr [edi*4 + 0xe42a64] }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov dl, byte ptr [ebx + 2] }
	__asm { cmp dl, al }
	__asm { je L_006ada1c }
	__asm { mov bl, dl }
	__asm { and bl, 0x38 }
	__asm { cmp bl, 0x28 }
	__asm { jne L_006ada1c }
	__asm { mov bh, 1 }
	__asm { jmp L_006ada1e }
	__asm { L_006ada1c: }
	__asm { xor bh, bh }
	__asm { L_006ada1e: }
	__asm { cmp dl, al }
	__asm { je L_006ada43 }
	__asm { movzx esi, dl }
	__asm { mov byte ptr [ebp - 2], 1 }
	__asm { lea edi, [esi + esi*2] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [esi*4 + 0xe42a3c] }
	__asm { lea esi, [esi + edi*2] }
	__asm { cmp dword ptr [esi*4 + 0x12f6d50], 5 }
	__asm { jne L_006ada47 }
	__asm { L_006ada43: }
	__asm { mov byte ptr [ebp - 2], 0 }
	__asm { L_006ada47: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ch, byte ptr [esi + 3] }
	__asm { cmp ch, al }
	__asm { je L_006ada5f }
	__asm { mov bl, ch }
	__asm { and bl, 0x38 }
	__asm { cmp bl, 0x28 }
	__asm { jne L_006ada5f }
	__asm { mov bl, 1 }
	__asm { jmp L_006ada61 }
	__asm { L_006ada5f: }
	__asm { xor bl, bl }
	__asm { L_006ada61: }
	__asm { cmp ah, 3 }
	__asm { jne L_006ada82 }
	__asm { cmp cl, al }
	__asm { je L_006ada82 }
	__asm { cmp dl, al }
	__asm { je L_006ada82 }
	__asm { cmp ch, al }
	__asm { je L_006ada82 }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00422750 }
	__asm { test al, al }
	__asm { je L_006ada82 }
	__asm { mov dl, 1 }
	__asm { jmp L_006ada84 }
	__asm { L_006ada82: }
	__asm { xor dl, dl }
	__asm { L_006ada84: }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_006ada94 }
	__asm { test bh, bh }
	__asm { je L_006ada94 }
	__asm { mov cl, 1 }
	__asm { jmp L_006ada96 }
	__asm { L_006ada94: }
	__asm { xor cl, cl }
	__asm { L_006ada96: }
	__asm { test al, al }
	__asm { jne L_006ada9f }
	__asm { cmp byte ptr [ebp - 1], al }
	__asm { je L_006adaa8 }
	__asm { L_006ada9f: }
	__asm { test bh, bh }
	__asm { jne L_006adaac }
	__asm { cmp byte ptr [ebp - 2], bh }
	__asm { jne L_006adaac }
	__asm { L_006adaa8: }
	__asm { xor al, al }
	__asm { jmp L_006adaae }
	__asm { L_006adaac: }
	__asm { mov al, 1 }
	__asm { L_006adaae: }
	__asm { test dl, dl }
	__asm { jne L_006adac2 }
	__asm { test bl, bl }
	__asm { je L_006adaba }
	__asm { test al, al }
	__asm { jne L_006adac2 }
	__asm { L_006adaba: }
	__asm { test cl, cl }
	__asm { je L_006ad9b1 }
	__asm { L_006adac2: }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006adacd: }
	__asm { xor al, al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d8f00();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x006adcf0
extern "C" __declspec(naked) void asm_006adcf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15627 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { lea ecx, [ebx + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_006d8f00 }
	__asm { push 0x4033d0 }
	__asm { push 2 }
	__asm { push 8 }
	__asm { lea eax, [ebx + 0x1c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf669e }
	__asm { mov esi, dword ptr [ebx + 0x18] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006add68 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006add68 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006add68 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006add68: }
	__asm { mov esi, dword ptr [ebx + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006add97 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006add97 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006add97 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006add97: }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006addc8 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006addc8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006addc8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006addc8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x006adde0
extern "C" __declspec(naked) void asm_006adde0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15693 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov esi, dword ptr [edi + 0x278c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_006ade39 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006ade38 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006ade38 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006ade38: }
	__asm { pop ebx }
	__asm { L_006ade39: }
	__asm { push 0x65f9e0 }
	__asm { push 0x20 }
	__asm { push 0x34 }
	__asm { lea eax, [edi + 0x2104] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf669e }
	__asm { push 0x4033d0 }
	__asm { push 0x400 }
	__asm { push 8 }
	__asm { lea eax, [edi + 0x104] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf669e }
	__asm { push 0x4033d0 }
	__asm { push 0x20 }
	__asm { push 8 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cf669e }
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

extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x006adf40
extern "C" __declspec(naked) void asm_006adf40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd156c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0x4033d0 }
	__asm { push 0x19 }
	__asm { push 8 }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf669e }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006adfae }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006adfad }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006adfad }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006adfad: }
	__asm { pop edi }
	__asm { L_006adfae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e3ad60[];
extern "C" char g_00e42ec8[];
extern "C" char g_00e42ed0[];
extern "C" char g_00e42ed8[];
extern "C" char g_00e42ee0[];
extern "C" char g_01038108[];
extern "C" char g_01038140[];
extern "C" char g_010381e0[];
extern "C" char g_012de5cc[];
extern "C" char g_012de5d0[];
extern "C" char g_012de5d4[];
extern "C" char g_012de5d8[];
extern "C" char g_012de5dc[];
extern "C" char g_012de5e0[];
extern "C" char g_012de5e4[];
extern "C" void fn_00657450();
extern "C" void fn_006576b0();
extern "C" void fn_0067fd50();
extern "C" void fn_0067fd60();
extern "C" void fn_0067fd90();
extern "C" void fn_006ae750();
extern "C" void fn_006aea70();
extern "C" void fn_006c5910();
extern "C" void fn_006e32c0();
extern "C" void fn_00cf68ec();
extern "C" void fn_00cf6a9a();
// FUNCTION: ROBLOXSTUDIO 0x006adfc0
extern "C" __declspec(naked) void asm_006adfc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x7c }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { je L_006ae287 }
	__asm { mov eax, dword ptr [g_012de5d8] }
	__asm { test al, 1 }
	__asm { jne L_006ae002 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de5d8], eax }
	__asm { mov dword ptr [g_012de5cc], 0x3d50d0d1 }
	__asm { mov dword ptr [g_012de5d0], 0x3ea9a9aa }
	__asm { mov dword ptr [g_012de5d4], 0x3eb9b9ba }
	__asm { L_006ae002: }
	__asm { test al, 2 }
	__asm { jne L_006ae02c }
	__asm { or eax, 2 }
	__asm { mov dword ptr [g_012de5d8], eax }
	__asm { mov dword ptr [g_012de5dc], 0x3de0e0e1 }
	__asm { mov dword ptr [g_012de5e0], 0x3eabdf12 }
	__asm { mov dword ptr [g_012de5e4], 0x3ed0d0d1 }
	__asm { L_006ae02c: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006aea70 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_006ae0a8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov esi, dword ptr [eax + 0x1ac] }
	__asm { mov ecx, esi }
	__asm { call fn_0067fd50 }
	__asm { movss xmm0, dword ptr [g_012de5dc] }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { movss xmm0, dword ptr [g_012de5e0] }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { movss xmm0, dword ptr [g_012de5e4] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [ebp - 0x34], xmm0 }
	__asm { mov dword ptr [ebp - 0x30], 0x3f800000 }
	__asm { call fn_0067fd60 }
	__asm { fld dword ptr [g_010381e0] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [g_00e42ee0] }
	__asm { fstp dword ptr [esp] }
	__asm { push 0x12de5dc }
	__asm { call fn_0067fd90 }
	__asm { L_006ae0a8: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { cmp byte ptr [eax + 1], 0 }
	__asm { je L_006ae286 }
	__asm { call fn_006c5910 }
	__asm { fst qword ptr [ebp - 0x10] }
	__asm { fld qword ptr [g_00e3ad60] }
	__asm { call fn_00cf6a9a }
	__asm { fmul qword ptr [g_01038108] }
	__asm { fnstcw word ptr [ebp + 0xa] }
	__asm { xor edx, edx }
	__asm { fmul qword ptr [g_00e42ed0] }
	__asm { movzx eax, word ptr [ebp + 0xa] }
	__asm { or eax, 0xc00 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov ecx, 0x19 }
	__asm { fst qword ptr [ebp - 0x18] }
	__asm { fldcw word ptr [ebp - 4] }
	__asm { fistp qword ptr [ebp - 0x20] }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { div ecx }
	__asm { fldcw word ptr [ebp + 0xa] }
	__asm { fld qword ptr [ebp - 0x10] }
	__asm { fmul qword ptr [g_00e42ec8] }
	__asm { fmul qword ptr [g_01038140] }
	__asm { fld qword ptr [g_00e42ed8] }
	__asm { mov eax, edx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { inc eax }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { call fn_00cf6a9a }
	__asm { fstp dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { sub eax, esi }
	__asm { sar eax, 6 }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { test eax, eax }
	__asm { je L_006ae286 }
	__asm { fld qword ptr [ebp - 0x18] }
	__asm { push ebx }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { fsubr qword ptr [ebp - 0x18] }
	__asm { add esp, 8 }
	__asm { xor ebx, ebx }
	__asm { fstp dword ptr [ebp - 0x14] }
	__asm { L_006ae165: }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov ecx, edi }
	__asm { add esi, ebx }
	__asm { mov dword ptr [ebp - 0x2c], 1 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { call fn_006ae750 }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00657450 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x38], 1 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { call fn_006ae750 }
	__asm { push eax }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00657450 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { push 0xe42d48 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x4c], 0x3e4ccccd }
	__asm { movss dword ptr [ebp - 0x48], xmm0 }
	__asm { mov dword ptr [ebp - 0x44], 0x3e19999a }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { call fn_006576b0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push 0xe42d54 }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [ebp - 0x5c], xmm0 }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov dword ptr [ebp - 0x54], 0 }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { call fn_006576b0 }
	__asm { movss xmm0, dword ptr [g_012de5cc] }
	__asm { movss dword ptr [ebp - 0x6c], xmm0 }
	__asm { movss xmm0, dword ptr [g_012de5d0] }
	__asm { movss dword ptr [ebp - 0x68], xmm0 }
	__asm { movss xmm0, dword ptr [g_012de5d4] }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x7c] }
	__asm { movss dword ptr [ebp - 0x64], xmm0 }
	__asm { mov dword ptr [ebp - 0x60], 0x3f800000 }
	__asm { call fn_006e32c0 }
	__asm { push eax }
	__asm { push 0xe42d60 }
	__asm { mov ecx, esi }
	__asm { call fn_006576b0 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { sub eax, esi }
	__asm { inc ecx }
	__asm { sar eax, 6 }
	__asm { add ebx, 0x40 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp ecx, eax }
	__asm { jb L_006ae165 }
	__asm { pop ebx }
	__asm { L_006ae286: }
	__asm { pop esi }
	__asm { L_006ae287: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_00571540();
extern "C" void fn_0061e030();
extern "C" void fn_006572f0();
extern "C" void fn_00657450();
extern "C" void fn_00657870();
extern "C" void fn_00657890();
extern "C" void fn_0065e490();
extern "C" void fn_0068cd50();
extern "C" void fn_0068d0f0();
extern "C" void fn_006a04c0();
extern "C" void fn_006ae750();
extern "C" void fn_006aeb90();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006ae290
extern "C" __declspec(naked) void asm_006ae290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15749 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xb8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { lea ebx, [esi + 4] }
	__asm { jne L_006ae732 }
	__asm { push 0xc }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_006ae2e3 }
	__asm { mov ecx, eax }
	__asm { call fn_00657870 }
	__asm { jmp L_006ae2e5 }
	__asm { L_006ae2e3: }
	__asm { xor eax, eax }
	__asm { L_006ae2e5: }
	__asm { push edi }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0065e490 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { test esi, esi }
	__asm { je L_006ae342 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006ae342 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006ae342 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006ae342: }
	__asm { mov esi, dword ptr [ebp - 0x5c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006ae374 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006ae374 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006ae374 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006ae374: }
	__asm { push 9 }
	__asm { push 0xe42d78 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { call fn_004038a0 }
	__asm { push 9 }
	__asm { push 0xe42d6c }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x38], 0xf }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov byte ptr [ebp - 0x4c], 0 }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1a8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0068cd50 }
	__asm { cmp dword ptr [ebp - 0x38], 0x10 }
	__asm { jb L_006ae3ee }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ae3ee: }
	__asm { mov dword ptr [ebp - 0x38], 0xf }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov byte ptr [ebp - 0x4c], 0 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { jb L_006ae415 }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ae415: }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { je L_006ae484 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc4] }
	__asm { call fn_006572f0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_006ae750 }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_006ae750 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { lea eax, [ebp - 0xc4] }
	__asm { push eax }
	__asm { call fn_006aeb90 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0xc4] }
	__asm { push eax }
	__asm { call fn_00657890 }
	__asm { lea ecx, [ebp - 0xc4] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_0061e030 }
	__asm { L_006ae484: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006ae4b6 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006ae4b6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006ae4b6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006ae4b6: }
	__asm { push 7 }
	__asm { push 0xe42d8c }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 0x38], 0xf }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov byte ptr [ebp - 0x4c], 0 }
	__asm { call fn_004038a0 }
	__asm { push 7 }
	__asm { push 0xe42d84 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 4], 8 }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { call fn_004038a0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1a8] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { call fn_0068cd50 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_006ae530 }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ae530: }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { cmp dword ptr [ebp - 0x38], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { jb L_006ae557 }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ae557: }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x38], 0xf }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov byte ptr [ebp - 0x4c], 0 }
	__asm { je L_006ae5c6 }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc4] }
	__asm { call fn_006572f0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0xd }
	__asm { call fn_006ae750 }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_006ae750 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { lea eax, [ebp - 0xc4] }
	__asm { push eax }
	__asm { call fn_006aeb90 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0xc4] }
	__asm { push eax }
	__asm { call fn_00657890 }
	__asm { lea ecx, [ebp - 0xc4] }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { call fn_0061e030 }
	__asm { L_006ae5c6: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006ae5f8 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006ae5f8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006ae5f8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006ae5f8: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1a8] }
	__asm { call fn_0068d0f0 }
	__asm { cmp dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 4], 0xe }
	__asm { je L_006ae700 }
	__asm { push 3 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc4] }
	__asm { call fn_006572f0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0xe42d94 }
	__asm { mov esi, dword ptr [eax + 0x1a4] }
	__asm { lea ecx, [ebp - 0x84] }
	__asm { mov byte ptr [ebp - 4], 0xf }
	__asm { mov dword ptr [ebp - 0x58], 1 }
	__asm { mov dword ptr [ebp - 0x54], 0 }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { call fn_00571540 }
	__asm { push 1 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0x10 }
	__asm { call fn_006a04c0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0xc4] }
	__asm { mov byte ptr [ebp - 4], 0x11 }
	__asm { call fn_00657450 }
	__asm { mov esi, dword ptr [ebp - 0x64] }
	__asm { mov byte ptr [ebp - 4], 0x10 }
	__asm { test esi, esi }
	__asm { je L_006ae6b6 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006ae6b6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006ae6b6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006ae6b6: }
	__asm { cmp dword ptr [ebp - 0x70], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0xf }
	__asm { jb L_006ae6ce }
	__asm { push dword ptr [ebp - 0x84] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ae6ce: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { lea eax, [ebp - 0xc4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x70], 0xf }
	__asm { mov dword ptr [ebp - 0x74], 0 }
	__asm { mov byte ptr [ebp - 0x84], 0 }
	__asm { call fn_00657890 }
	__asm { lea ecx, [ebp - 0xc4] }
	__asm { mov byte ptr [ebp - 4], 0xe }
	__asm { call fn_0061e030 }
	__asm { L_006ae700: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006ae731 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006ae731 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006ae731 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006ae731: }
	__asm { pop edi }
	__asm { L_006ae732: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x006b1590
extern "C" __declspec(naked) void asm_006b1590()
{
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 0x18] }
	__asm { push ebp }
	__asm { xor eax, eax }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x24] }
	__asm { mov ebp, ecx }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esp + 0xc], eax }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { push ecx }
	__asm { push ebx }
	__asm { call edx }
	__asm { cmp dword ptr [esp + 0x14], 0 }
	__asm { jne L_006b15d4 }
	__asm { mov dword ptr [esp + 0x14], 1 }
	__asm { L_006b15d4: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { push esi }
	__asm { push ebx }
	__asm { call ecx }
	__asm { test eax, eax }
	__asm { jl L_006b1613 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, dword ptr [ebp] }
	__asm { mov edx, dword ptr [edx + 0x3c] }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, ebp }
	__asm { call edx }
	__asm { test eax, eax }
	__asm { jl L_006b1613 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push ebx }
	__asm { call edx }
	__asm { test eax, eax }
	__asm { jl L_006b1613 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret 8 }
	__asm { L_006b1613: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006b1627 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call edx }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_006b1627: }
	__asm { mov eax, dword ptr [ebp] }
	__asm { mov edx, dword ptr [eax + 0x48] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, ebp }
	__asm { call edx }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jl L_006b1670 }
	__asm { mov eax, dword ptr [ebp] }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { lea ecx, [esp + 0x10] }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, ebp }
	__asm { call eax }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jl L_006b1670 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { push edx }
	__asm { push ebx }
	__asm { call eax }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jl L_006b1670 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret 8 }
	__asm { L_006b1670: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006b1684 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call edx }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_006b1684: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x006b17e0
extern "C" __declspec(naked) void asm_006b17e0()
{
	__asm { push ecx }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x18] }
	__asm { xor esi, esi }
	__asm { cmp edi, esi }
	__asm { jne L_006b17fa }
	__asm { lea eax, [esi + 1] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { pop ecx }
	__asm { ret 0xc }
	__asm { L_006b17fa: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ebp, dword ptr [eax] }
	__asm { mov ebx, dword ptr [esp + 0x1c] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], ebp }
	__asm { mov ebp, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], ebp }
	__asm { mov ebp, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx + 8], ebp }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [edx + 0x1c] }
	__asm { push ebx }
	__asm { call ecx }
	__asm { mov ecx, eax }
	__asm { cmp dword ptr [esp + 0x20], esi }
	__asm { je L_006b19ae }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ebp, dword ptr [eax] }
	__asm { push ecx }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], ebp }
	__asm { mov ebp, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], ebp }
	__asm { mov ebp, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx + 8], ebp }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { push ebx }
	__asm { call ecx }
	__asm { mov ecx, eax }
	__asm { cmp ecx, esi }
	__asm { jl L_006b19ae }
	__asm { mov dword ptr [esp + 0x20], esi }
	__asm { cmp dword ptr [edi + 0xc], esi }
	__asm { jbe L_006b19ae }
	__asm { L_006b1873: }
	__asm { mov edx, dword ptr [edi + 0x10] }
	__asm { lea ecx, [edx + esi] }
	__asm { mov eax, edx }
	__asm { mov edx, dword ptr [ecx + 0x18] }
	__asm { push edx }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [esp + 0x1c], edx }
	__asm { mov edx, dword ptr [edx] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov edx, dword ptr [esp + 0x2c] }
	__asm { mov edx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov edx, dword ptr [esp + 0x2c] }
	__asm { mov edx, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { mov edx, dword ptr [esp + 0x2c] }
	__asm { mov edx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], edx }
	__asm { mov ecx, dword ptr [eax + esi + 0x10] }
	__asm { mov edx, dword ptr [eax + esi + 0xc] }
	__asm { mov ebp, dword ptr [ebx] }
	__asm { add eax, esi }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { push edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov edx, dword ptr [eax] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { call ecx }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jl L_006b19ae }
	__asm { mov edx, dword ptr [edi + 0x10] }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { cmp dword ptr [esi + edx + 0x1c], eax }
	__asm { jbe L_006b1999 }
	__asm { L_006b1906: }
	__asm { mov ecx, dword ptr [esi + edx + 0x20] }
	__asm { mov ebp, dword ptr [ebx] }
	__asm { lea eax, [ecx + eax*8] }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], ebx }
	__asm { mov ebx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx + 8], ebx }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], ebx }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], ebx }
	__asm { mov ebx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx + 8], ebx }
	__asm { mov ebx, dword ptr [esp + 0x3c] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [esi + edx] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push ecx }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push ebx }
	__asm { call ecx }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jl L_006b19ae }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { mov edx, dword ptr [edi + 0x10] }
	__asm { inc eax }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { cmp eax, dword ptr [esi + edx + 0x1c] }
	__asm { jb L_006b1906 }
	__asm { L_006b1999: }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { inc eax }
	__asm { add esi, 0x24 }
	__asm { mov dword ptr [esp + 0x20], eax }
	__asm { cmp eax, dword ptr [edi + 0xc] }
	__asm { jb L_006b1873 }
	__asm { L_006b19ae: }
	__asm { mov eax, ecx }
	__asm { sub eax, 0x80070002 }
	__asm { pop edi }
	__asm { neg eax }
	__asm { pop esi }
	__asm { sbb eax, eax }
	__asm { pop ebp }
	__asm { and eax, ecx }
	__asm { pop ebx }
	__asm { pop ecx }
	__asm { ret 0xc }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012b55c0[];
extern "C" void fn_006b19d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006b1ae0
extern "C" __declspec(naked) void asm_006b1ae0()
{
	__asm { push -1 }
	__asm { push 0xd157d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, dword ptr [esp + 0x20] }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [esp + 0x24] }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { test eax, eax }
	__asm { je L_006b1b48 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { lea esi, [edi + 0x38] }
	__asm { push esi }
	__asm { push 0xe434b8 }
	__asm { push eax }
	__asm { call edx }
	__asm { test eax, eax }
	__asm { jl L_006b1b4f }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { push esi }
	__asm { call ecx }
	__asm { jmp L_006b1b4f }
	__asm { L_006b1b48: }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { L_006b1b4f: }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { test eax, eax }
	__asm { je L_006b1b66 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { L_006b1b66: }
	__asm { mov ebp, dword ptr [esp + 0x28] }
	__asm { test ebp, ebp }
	__asm { je L_006b1be0 }
	__asm { mov ecx, 0x7fffffff }
	__asm { mov eax, ebp }
	__asm { L_006b1b75: }
	__asm { cmp word ptr [eax], 0 }
	__asm { je L_006b1ba8 }
	__asm { add eax, 2 }
	__asm { sub ecx, 1 }
	__asm { jne L_006b1b75 }
	__asm { L_006b1b83: }
	__asm { mov edx, dword ptr [esp + 0x20] }
	__asm { push edx }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, 0x80070057 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { add esp, 0xc }
	__asm { ret 0xc }
	__asm { L_006b1ba8: }
	__asm { test ecx, ecx }
	__asm { je L_006b1b83 }
	__asm { mov eax, 0x7fffffff }
	__asm { sub eax, ecx }
	__asm { lea esi, [eax + 1] }
	__asm { xor ecx, ecx }
	__asm { mov eax, esi }
	__asm { mov edx, 2 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { test eax, eax }
	__asm { je L_006b1c02 }
	__asm { push ebp }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_006b19d0 }
	__asm { L_006b1be0: }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { push ecx }
	__asm { call dword ptr [g_00e101b0] }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { add esp, 0xc }
	__asm { ret 0xc }
	__asm { L_006b1c02: }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { push eax }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov eax, 0x8007000e }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { add esp, 0xc }
	__asm { ret 0xc }
}

extern "C" char g_00e132d0[];
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x006b2960
extern "C" __declspec(naked) void asm_006b2960()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 8] }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [esp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, 0x12 }
	__asm { mov esi, ebp }
	__asm { mov edi, ebx }
	__asm { rep movsd }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { test eax, eax }
	__asm { je L_006b29ac }
	__asm { push eax }
	__asm { call dword ptr [g_00e132d0] }
	__asm { mov dword ptr [ebx + 0x44], eax }
	__asm { test eax, eax }
	__asm { jne L_006b299b }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0x40], eax }
	__asm { pop ebp }
	__asm { mov eax, 0x8007000e }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006b299b: }
	__asm { mov ecx, dword ptr [ebx + 0x40] }
	__asm { mov edx, dword ptr [ebp + 0x44] }
	__asm { push ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { L_006b29ac: }
	__asm { mov ebx, dword ptr [ebx + 0x3c] }
	__asm { test ebx, ebx }
	__asm { je L_006b29bb }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { call ecx }
	__asm { L_006b29bb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { ret 8 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012b55c0[];
extern "C" void fn_006b1720();
extern "C" void fn_006b38a0();
extern "C" void fn_006b3a30();
// FUNCTION: ROBLOXSTUDIO 0x006b32b0
extern "C" __declspec(naked) void asm_006b32b0()
{
	__asm { push -1 }
	__asm { push 0xd15b48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, esp }
	__asm { push eax }
	__asm { lea eax, [esp + 0x18] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0xa0] }
	__asm { add esi, 0x58 }
	__asm { push esi }
	__asm { mov dword ptr [esp + 0x18], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov ebx, dword ptr [edi + 0xa0] }
	__asm { mov ebp, dword ptr [ebx + 0x38] }
	__asm { push ebp }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov ebx, dword ptr [ebx + 0x14] }
	__asm { cmp ebx, 1 }
	__asm { je L_006b3314 }
	__asm { cmp ebx, 2 }
	__asm { je L_006b3314 }
	__asm { xor ebx, ebx }
	__asm { jmp L_006b3319 }
	__asm { L_006b3314: }
	__asm { mov ebx, 1 }
	__asm { L_006b3319: }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [g_00e101b0] }
	__asm { call ebp }
	__asm { test ebx, ebx }
	__asm { je L_006b3342 }
	__asm { push esi }
	__asm { call ebp }
	__asm { mov eax, 1 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_006b3342: }
	__asm { cmp dword ptr [edi + 0x18], 0 }
	__asm { jne L_006b3361 }
	__asm { push esi }
	__asm { call ebp }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_006b3361: }
	__asm { mov ecx, edi }
	__asm { call fn_006b1720 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { jge L_006b3387 }
	__asm { L_006b336e: }
	__asm { push esi }
	__asm { call ebp }
	__asm { mov eax, ebx }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_006b3387: }
	__asm { add edi, -0x48 }
	__asm { mov ecx, edi }
	__asm { call fn_006b3a30 }
	__asm { test eax, eax }
	__asm { jne L_006b33b1 }
	__asm { push esi }
	__asm { call ebp }
	__asm { mov eax, 0x80004005 }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_006b33b1: }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b38a0 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { jl L_006b336e }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_006b38a0 }
	__asm { push esi }
	__asm { mov edi, eax }
	__asm { call ebp }
	__asm { mov eax, edi }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x10 }
	__asm { ret }
}

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10260[];
extern "C" char g_00e10264[];
extern "C" char g_00e10500[];
extern "C" void fn_0042bea0();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x006b4ad0
extern "C" __declspec(naked) void asm_006b4ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { cmp ecx, edx }
	__asm { jb L_006b4e7a }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { cmp eax, dword ptr [ebp + 0x14] }
	__asm { jb L_006b4e7a }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { sub ebx, edx }
	__asm { cmp ebx, edi }
	__asm { cmovb edi, ebx }
	__asm { sub eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { cmp eax, ebx }
	__asm { cmovb ebx, eax }
	__asm { mov eax, ecx }
	__asm { sub eax, edi }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, ebx }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp eax, dword ptr [ebp + 0x18] }
	__asm { ja L_006b4b34 }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006b4b34: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { add eax, ebx }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { cmp ecx, eax }
	__asm { jae L_006b4b8d }
	__asm { cmp eax, 0x7ffffffe }
	__asm { jbe L_006b4b58 }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006b4b58: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, dword ptr [ebp + 0x18] }
	__asm { jae L_006b4b70 }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, esi }
	__asm { call fn_0042bea0 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { jmp L_006b4b8d }
	__asm { L_006b4b70: }
	__asm { cmp dword ptr [ebp + 0x18], 0 }
	__asm { jne L_006b4b8d }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4b86 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_006b4b88 }
	__asm { L_006b4b86: }
	__asm { mov eax, esi }
	__asm { L_006b4b88: }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax], cx }
	__asm { L_006b4b8d: }
	__asm { cmp esi, edi }
	__asm { je L_006b4c0f }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4ba0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { jmp L_006b4ba3 }
	__asm { L_006b4ba0: }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { L_006b4ba3: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4bac }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4bae }
	__asm { L_006b4bac: }
	__asm { mov ecx, esi }
	__asm { L_006b4bae: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { je L_006b4bd7 }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, edx }
	__asm { lea eax, [edi + eax*2] }
	__asm { push eax }
	__asm { lea eax, [edx + ebx] }
	__asm { lea eax, [ecx + eax*2] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { add esp, 0xc }
	__asm { L_006b4bd7: }
	__asm { cmp dword ptr [edi + 0x14], 8 }
	__asm { jb L_006b4bdf }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_006b4bdf: }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_006b4be9 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4beb }
	__asm { L_006b4be9: }
	__asm { mov ecx, esi }
	__asm { L_006b4beb: }
	__asm { test ebx, ebx }
	__asm { je L_006b4e4c }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebx + ebx] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { lea eax, [edi + eax*2] }
	__asm { push eax }
	__asm { lea eax, [ecx + edx*2] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { jmp L_006b4e49 }
	__asm { L_006b4c0f: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp ebx, ecx }
	__asm { ja L_006b4c90 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4c22 }
	__asm { mov edi, dword ptr [esi] }
	__asm { jmp L_006b4c24 }
	__asm { L_006b4c22: }
	__asm { mov edi, esi }
	__asm { L_006b4c24: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4c2d }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4c2f }
	__asm { L_006b4c2d: }
	__asm { mov ecx, esi }
	__asm { L_006b4c2f: }
	__asm { test ebx, ebx }
	__asm { je L_006b4c4b }
	__asm { lea eax, [ebx + ebx] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { lea eax, [edi + eax*2] }
	__asm { push eax }
	__asm { lea eax, [ecx + edx*2] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { L_006b4c4b: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4c57 }
	__asm { mov edi, dword ptr [esi] }
	__asm { jmp L_006b4c59 }
	__asm { L_006b4c57: }
	__asm { mov edi, esi }
	__asm { L_006b4c59: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4c62 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4c64 }
	__asm { L_006b4c62: }
	__asm { mov ecx, esi }
	__asm { L_006b4c64: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { je L_006b4e4c }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, edx }
	__asm { lea eax, [edi + eax*2] }
	__asm { push eax }
	__asm { lea eax, [edx + ebx] }
	__asm { lea eax, [ecx + eax*2] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { jmp L_006b4e49 }
	__asm { L_006b4c90: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { cmp eax, edx }
	__asm { ja L_006b4d11 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4ca3 }
	__asm { mov edi, dword ptr [esi] }
	__asm { jmp L_006b4ca5 }
	__asm { L_006b4ca3: }
	__asm { mov edi, esi }
	__asm { L_006b4ca5: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4cae }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4cb0 }
	__asm { L_006b4cae: }
	__asm { mov ecx, esi }
	__asm { L_006b4cb0: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { je L_006b4cd6 }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, edx }
	__asm { lea eax, [edi + eax*2] }
	__asm { push eax }
	__asm { lea eax, [edx + ebx] }
	__asm { lea eax, [ecx + eax*2] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { L_006b4cd6: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4ce2 }
	__asm { mov edi, dword ptr [esi] }
	__asm { jmp L_006b4ce4 }
	__asm { L_006b4ce2: }
	__asm { mov edi, esi }
	__asm { L_006b4ce4: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4ced }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4cef }
	__asm { L_006b4ced: }
	__asm { mov ecx, esi }
	__asm { L_006b4cef: }
	__asm { test ebx, ebx }
	__asm { je L_006b4e4c }
	__asm { lea eax, [ebx + ebx] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { lea eax, [edi + eax*2] }
	__asm { push eax }
	__asm { lea eax, [ecx + edx*2] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { jmp L_006b4e49 }
	__asm { L_006b4d11: }
	__asm { add ecx, edx }
	__asm { cmp ecx, eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { ja L_006b4d97 }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4d26 }
	__asm { mov edi, dword ptr [esi] }
	__asm { jmp L_006b4d28 }
	__asm { L_006b4d26: }
	__asm { mov edi, esi }
	__asm { L_006b4d28: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4d31 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4d33 }
	__asm { L_006b4d31: }
	__asm { mov ecx, esi }
	__asm { L_006b4d33: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { je L_006b4d57 }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edi + eax*2] }
	__asm { push eax }
	__asm { lea eax, [edx + ebx] }
	__asm { lea eax, [ecx + eax*2] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { L_006b4d57: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4d63 }
	__asm { mov edi, dword ptr [esi] }
	__asm { jmp L_006b4d65 }
	__asm { L_006b4d63: }
	__asm { mov edi, esi }
	__asm { L_006b4d65: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4d6e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4d70 }
	__asm { L_006b4d6e: }
	__asm { mov ecx, esi }
	__asm { L_006b4d70: }
	__asm { test ebx, ebx }
	__asm { je L_006b4e4c }
	__asm { lea eax, [ebx + ebx] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { sub eax, dword ptr [ebp + 0xc] }
	__asm { add eax, ebx }
	__asm { lea eax, [edi + eax*2] }
	__asm { push eax }
	__asm { lea eax, [ecx + edx*2] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { jmp L_006b4e49 }
	__asm { L_006b4d97: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4da0 }
	__asm { mov edi, dword ptr [esi] }
	__asm { jmp L_006b4da2 }
	__asm { L_006b4da0: }
	__asm { mov edi, esi }
	__asm { L_006b4da2: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4dab }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4dad }
	__asm { L_006b4dab: }
	__asm { mov ecx, esi }
	__asm { L_006b4dad: }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { je L_006b4dd0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { lea eax, [edi + eax*2] }
	__asm { push eax }
	__asm { lea eax, [ecx + edx*2] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { L_006b4dd0: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4ddc }
	__asm { mov edi, dword ptr [esi] }
	__asm { jmp L_006b4dde }
	__asm { L_006b4ddc: }
	__asm { mov edi, esi }
	__asm { L_006b4dde: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4de7 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4de9 }
	__asm { L_006b4de7: }
	__asm { mov ecx, esi }
	__asm { L_006b4de9: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { je L_006b4e0e }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edi + eax*2] }
	__asm { mov edi, dword ptr [g_00e10500] }
	__asm { push eax }
	__asm { lea eax, [edx + ebx] }
	__asm { lea eax, [ecx + eax*2] }
	__asm { push eax }
	__asm { call edi }
	__asm { add esp, 0xc }
	__asm { jmp L_006b4e14 }
	__asm { L_006b4e0e: }
	__asm { mov edi, dword ptr [g_00e10500] }
	__asm { L_006b4e14: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4e20 }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_006b4e22 }
	__asm { L_006b4e20: }
	__asm { mov edx, esi }
	__asm { L_006b4e22: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4e2b }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b4e2d }
	__asm { L_006b4e2b: }
	__asm { mov ecx, esi }
	__asm { L_006b4e2d: }
	__asm { mov eax, ebx }
	__asm { sub eax, dword ptr [ebp + 0xc] }
	__asm { je L_006b4e4c }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add eax, ebx }
	__asm { lea eax, [edx + eax*2] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ecx + eax*2] }
	__asm { push eax }
	__asm { call edi }
	__asm { L_006b4e49: }
	__asm { add esp, 0xc }
	__asm { L_006b4e4c: }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { pop ebx }
	__asm { jb L_006b4e6b }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor edx, edx }
	__asm { mov word ptr [eax + ecx*2], dx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_006b4e6b: }
	__asm { mov eax, esi }
	__asm { xor edx, edx }
	__asm { mov word ptr [eax + ecx*2], dx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_006b4e7a: }
	__asm { push 0xf12f30 }
	__asm { call dword ptr [g_00e10264] }
}

extern "C" char g_00e10260[];
extern "C" char g_00e10264[];
extern "C" char g_00e10500[];
extern "C" void fn_0042bea0();
extern "C" void fn_0042c000();
extern "C" void fn_006b4ad0();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x006b4e90
extern "C" __declspec(naked) void asm_006b4e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test ebx, ebx }
	__asm { je L_006b4ef1 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b4ead }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_006b4eaf }
	__asm { L_006b4ead: }
	__asm { mov eax, esi }
	__asm { L_006b4eaf: }
	__asm { cmp ebx, eax }
	__asm { jb L_006b4ef1 }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b4ebc }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_006b4ebe }
	__asm { L_006b4ebc: }
	__asm { mov edx, esi }
	__asm { L_006b4ebe: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { lea eax, [edx + eax*2] }
	__asm { cmp eax, ebx }
	__asm { jbe L_006b4ef1 }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b4ed1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_006b4ed3 }
	__asm { L_006b4ed1: }
	__asm { mov eax, esi }
	__asm { L_006b4ed3: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { sub ebx, eax }
	__asm { sar ebx, 1 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006b4ad0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_006b4ef1: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp eax, ecx }
	__asm { jae L_006b4f06 }
	__asm { push 0xf12f30 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_006b4f06: }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { mov edi, eax }
	__asm { sub edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp edi, ecx }
	__asm { cmovb ecx, edi }
	__asm { sub eax, ecx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { ja L_006b4f33 }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006b4f33: }
	__asm { sub edi, ecx }
	__asm { mov dword ptr [ebp - 0xc], edi }
	__asm { cmp edx, ecx }
	__asm { jae L_006b4f8e }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4f4e }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 0xc], ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { jmp L_006b4f51 }
	__asm { L_006b4f4e: }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { L_006b4f51: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b4f5d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_006b4f60 }
	__asm { L_006b4f5d: }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { L_006b4f60: }
	__asm { test edi, edi }
	__asm { je L_006b4f8e }
	__asm { lea eax, [edi + edi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [edi + ecx] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ecx + eax*2] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [edi + edx] }
	__asm { lea eax, [ecx + eax*2] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { add esp, 0xc }
	__asm { L_006b4f8e: }
	__asm { test edx, edx }
	__asm { jne L_006b4f9a }
	__asm { test ecx, ecx }
	__asm { je L_006b5088 }
	__asm { L_006b4f9a: }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { sub edi, ecx }
	__asm { add edi, edx }
	__asm { cmp edi, 0x7ffffffe }
	__asm { jbe L_006b4fb4 }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006b4fb4: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, edi }
	__asm { jae L_006b4fee }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, esi }
	__asm { push edi }
	__asm { call fn_0042bea0 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { test edi, edi }
	__asm { je L_006b5088 }
	__asm { L_006b4fd4: }
	__asm { cmp ecx, edx }
	__asm { jae L_006b505c }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b501c }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 0xc], ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { jmp L_006b501f }
	__asm { L_006b4fee: }
	__asm { test edi, edi }
	__asm { jne L_006b4fd4 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { cmp eax, 8 }
	__asm { jb L_006b500c }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { pop edi }
	__asm { mov word ptr [eax], cx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_006b500c: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { xor ecx, ecx }
	__asm { pop esi }
	__asm { mov word ptr [eax], cx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_006b501c: }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { L_006b501f: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b502b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { jmp L_006b502e }
	__asm { L_006b502b: }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { L_006b502e: }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { test eax, eax }
	__asm { je L_006b505c }
	__asm { add eax, eax }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ecx + eax*2] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { lea eax, [ecx + eax*2] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { add esp, 0xc }
	__asm { L_006b505c: }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_006b5066 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b5068 }
	__asm { L_006b5066: }
	__asm { mov ecx, esi }
	__asm { L_006b5068: }
	__asm { test edx, edx }
	__asm { je L_006b5080 }
	__asm { lea eax, [edx + edx] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { lea eax, [ecx + eax*2] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { L_006b5080: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_0042c000 }
	__asm { L_006b5088: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10260[];
extern "C" char g_00e10264[];
extern "C" void fn_0042bea0();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x006b55f0
extern "C" __declspec(naked) void asm_006b55f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { cmp eax, edx }
	__asm { jae L_006b560f }
	__asm { push 0xf12f30 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_006b560f: }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { sub eax, edx }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { cmp eax, ebx }
	__asm { cmovb ebx, eax }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, edx }
	__asm { cmp eax, ebx }
	__asm { ja L_006b5630 }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006b5630: }
	__asm { test ebx, ebx }
	__asm { je L_006b56e5 }
	__asm { push edi }
	__asm { lea edi, [edx + ebx] }
	__asm { cmp edi, 0x7ffffffe }
	__asm { jbe L_006b564f }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006b564f: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, edi }
	__asm { jae L_006b5678 }
	__asm { push edx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_0042bea0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_006b56e4 }
	__asm { L_006b5666: }
	__asm { cmp dword ptr [ecx + 0x14], 8 }
	__asm { jb L_006b566e }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_006b566e: }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_006b56a2 }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_006b56a4 }
	__asm { L_006b5678: }
	__asm { test edi, edi }
	__asm { jne L_006b5666 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { cmp eax, 8 }
	__asm { jb L_006b5694 }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { pop edi }
	__asm { mov word ptr [eax], cx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006b5694: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { xor ecx, ecx }
	__asm { pop esi }
	__asm { mov word ptr [eax], cx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006b56a2: }
	__asm { mov edx, esi }
	__asm { L_006b56a4: }
	__asm { test ebx, ebx }
	__asm { je L_006b56c2 }
	__asm { lea eax, [ebx + ebx] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ecx + eax*2] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { lea eax, [edx + eax*2] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { L_006b56c2: }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { jb L_006b56dc }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax + edi*2], cx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006b56dc: }
	__asm { mov eax, esi }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax + edi*2], cx }
	__asm { L_006b56e4: }
	__asm { pop edi }
	__asm { L_006b56e5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10260[];
extern "C" void fn_0042bea0();
extern "C" void fn_006b55f0();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x006b57b0
extern "C" __declspec(naked) void asm_006b57b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_006b5806 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b57ca }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_006b57cc }
	__asm { L_006b57ca: }
	__asm { mov eax, esi }
	__asm { L_006b57cc: }
	__asm { cmp edi, eax }
	__asm { jb L_006b5806 }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b57d9 }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_006b57db }
	__asm { L_006b57d9: }
	__asm { mov edx, esi }
	__asm { L_006b57db: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { lea eax, [edx + eax*2] }
	__asm { cmp eax, edi }
	__asm { jbe L_006b5806 }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b57ee }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_006b57f0 }
	__asm { L_006b57ee: }
	__asm { mov eax, esi }
	__asm { L_006b57f0: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { sub edi, eax }
	__asm { sar edi, 1 }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, esi }
	__asm { call fn_006b55f0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006b5806: }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, edx }
	__asm { cmp eax, ecx }
	__asm { ja L_006b5820 }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006b5820: }
	__asm { test ecx, ecx }
	__asm { je L_006b58c7 }
	__asm { push ebx }
	__asm { lea ebx, [edx + ecx] }
	__asm { cmp ebx, 0x7ffffffe }
	__asm { jbe L_006b583f }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006b583f: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, ebx }
	__asm { jae L_006b5860 }
	__asm { push edx }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_0042bea0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ebx, ebx }
	__asm { je L_006b58c6 }
	__asm { L_006b5856: }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_006b588a }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_006b588c }
	__asm { L_006b5860: }
	__asm { test ebx, ebx }
	__asm { jne L_006b5856 }
	__asm { mov dword ptr [esi + 0x10], ebx }
	__asm { cmp eax, 8 }
	__asm { jb L_006b587c }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop ebx }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax], cx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006b587c: }
	__asm { pop ebx }
	__asm { mov eax, esi }
	__asm { xor ecx, ecx }
	__asm { pop edi }
	__asm { mov word ptr [eax], cx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006b588a: }
	__asm { mov edx, esi }
	__asm { L_006b588c: }
	__asm { test ecx, ecx }
	__asm { je L_006b58a4 }
	__asm { lea eax, [ecx + ecx] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { push edi }
	__asm { lea eax, [edx + eax*2] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { L_006b58a4: }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { mov dword ptr [esi + 0x10], ebx }
	__asm { jb L_006b58be }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax + ebx*2], cx }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_006b58be: }
	__asm { mov eax, esi }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax + ebx*2], cx }
	__asm { L_006b58c6: }
	__asm { pop ebx }
	__asm { L_006b58c7: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0042bd60();
extern "C" void fn_006b52e0();
extern "C" void fn_006b53d0();
extern "C" void fn_006b5e80();
extern "C" void fn_006b6b50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b5d10
extern "C" __declspec(naked) void asm_006b5d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15d4a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_006b5e80 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push 0x11dc508 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b53d0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_006b5e46 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push 0x11dc520 }
	__asm { push eax }
	__asm { call fn_006b53d0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_006b5e46 }
	__asm { push ebx }
	__asm { push 1 }
	__asm { push -1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], 0x2e }
	__asm { call fn_006b6b50 }
	__asm { mov ecx, eax }
	__asm { cmp ecx, -1 }
	__asm { jne L_006b5db6 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x48], 7 }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov word ptr [ebp - 0x5c], ax }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ebx, 2 }
	__asm { jmp L_006b5dd9 }
	__asm { L_006b5db6: }
	__asm { cmp dword ptr [ebp - 0x18], 8 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { cmovae eax, dword ptr [ebp - 0x2c] }
	__asm { lea eax, [eax + ecx*2] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { call fn_006b52e0 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov ebx, 4 }
	__asm { L_006b5dd9: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { push -1 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov word ptr [esi], cx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_0042bd60 }
	__asm { or ebx, 1 }
	__asm { test bl, 4 }
	__asm { je L_006b5e2d }
	__asm { and ebx, 0xfffffffb }
	__asm { cmp dword ptr [ebp - 0x30], 8 }
	__asm { jb L_006b5e19 }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b5e19: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x30], 7 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov word ptr [ebp - 0x44], ax }
	__asm { L_006b5e2d: }
	__asm { test bl, 2 }
	__asm { pop ebx }
	__asm { je L_006b5e5c }
	__asm { cmp dword ptr [ebp - 0x48], 8 }
	__asm { jb L_006b5e5c }
	__asm { push dword ptr [ebp - 0x5c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_006b5e5c }
	__asm { L_006b5e46: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x14], 7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov word ptr [esi], ax }
	__asm { L_006b5e5c: }
	__asm { cmp dword ptr [ebp - 0x18], 8 }
	__asm { jb L_006b5e6d }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b5e6d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b5b50();
extern "C" void fn_006b6750();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b6480
extern "C" __declspec(naked) void asm_006b6480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd15dc0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { L_006b64a0: }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { cmp dword ptr [ebp + 0x20], eax }
	__asm { mov edx, dword ptr [ebp + 0x84] }
	__asm { mov ebx, dword ptr [ebp + 0x60] }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov ecx, dword ptr [ebp + 0x24] }
	__asm { jne L_006b64bb }
	__asm { cmp ecx, eax }
	__asm { je L_006b6526 }
	__asm { L_006b64bb: }
	__asm { cmp ebx, dword ptr [ebp + 0x80] }
	__asm { jne L_006b64c8 }
	__asm { cmp dword ptr [ebp + 0x64], edx }
	__asm { je L_006b6526 }
	__asm { L_006b64c8: }
	__asm { cmp dword ptr [ebp + 0x5c], 8 }
	__asm { push dword ptr [ebp + 0x58] }
	__asm { lea eax, [ebp + 0x48] }
	__asm { cmovae eax, dword ptr [ebp + 0x48] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea ecx, [ebp + 8] }
	__asm { push 0 }
	__asm { call fn_006b5b50 }
	__asm { test eax, eax }
	__asm { js L_006b657b }
	__asm { cmp dword ptr [ebp + 0x1c], 8 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x58] }
	__asm { lea ecx, [ebp + 0x48] }
	__asm { push 0 }
	__asm { call fn_006b5b50 }
	__asm { test eax, eax }
	__asm { js L_006b6574 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_006b6750 }
	__asm { lea eax, [ebp + 0x48] }
	__asm { push eax }
	__asm { call fn_006b6750 }
	__asm { add esp, 8 }
	__asm { jmp L_006b64a0 }
	__asm { L_006b6526: }
	__asm { mov edx, dword ptr [ebp + 0x40] }
	__asm { cmp dword ptr [ebp + 0x20], edx }
	__asm { mov edx, dword ptr [ebp + 0x84] }
	__asm { jne L_006b6562 }
	__asm { cmp ecx, eax }
	__asm { jne L_006b6562 }
	__asm { cmp ebx, dword ptr [ebp + 0x80] }
	__asm { jne L_006b6549 }
	__asm { cmp dword ptr [ebp + 0x64], edx }
	__asm { jne L_006b6549 }
	__asm { xor ebx, ebx }
	__asm { jmp L_006b657e }
	__asm { L_006b6549: }
	__asm { cmp ecx, eax }
	__asm { jne L_006b6562 }
	__asm { xor ebx, ebx }
	__asm { mov eax, 1 }
	__asm { test al, al }
	__asm { sete bl }
	__asm { lea ebx, [ebx*2 - 1] }
	__asm { jmp L_006b657e }
	__asm { L_006b6562: }
	__asm { xor ebx, ebx }
	__asm { xor eax, eax }
	__asm { test al, al }
	__asm { sete bl }
	__asm { lea ebx, [ebx*2 - 1] }
	__asm { jmp L_006b657e }
	__asm { L_006b6574: }
	__asm { mov ebx, 1 }
	__asm { jmp L_006b657e }
	__asm { L_006b657b: }
	__asm { or ebx, 0xffffffff }
	__asm { L_006b657e: }
	__asm { cmp dword ptr [ebp + 0x1c], 8 }
	__asm { jb L_006b658f }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b658f: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp + 0x3c], 8 }
	__asm { mov dword ptr [ebp + 0x1c], 7 }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov word ptr [ebp + 8], ax }
	__asm { jb L_006b65b4 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b65b4: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp + 0x5c], 8 }
	__asm { mov dword ptr [ebp + 0x3c], 7 }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { mov word ptr [ebp + 0x28], ax }
	__asm { jb L_006b65d9 }
	__asm { push dword ptr [ebp + 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b65d9: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp + 0x7c], 8 }
	__asm { mov dword ptr [ebp + 0x5c], 7 }
	__asm { mov dword ptr [ebp + 0x58], 0 }
	__asm { mov word ptr [ebp + 0x48], ax }
	__asm { jb L_006b65fe }
	__asm { push dword ptr [ebp + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b65fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e435c0[];
extern "C" void fn_0042bd60();
extern "C" void fn_006b5180();
extern "C" void fn_006b5370();
extern "C" void fn_006b5ac0();
extern "C" void fn_006b6130();
extern "C" void fn_006b6390();
extern "C" void fn_006b6db0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b6750
extern "C" __declspec(naked) void asm_006b6750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6ea18 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { mov ebx, dword ptr [esi + 0x18] }
	__asm { add dword ptr [esi + 0x1c], edi }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { cmp dword ptr [esi + 0x1c], ecx }
	__asm { jne L_006b67a7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_006b6791 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_006b6791: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { mov word ptr [esi], ax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b67a7: }
	__asm { cmp edi, 2 }
	__asm { jbe L_006b67fd }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, 8 }
	__asm { jb L_006b67b8 }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_006b67ba }
	__asm { L_006b67b8: }
	__asm { mov edx, esi }
	__asm { L_006b67ba: }
	__asm { movzx edx, word ptr [edx] }
	__asm { cmp edx, 0x2f }
	__asm { je L_006b67c7 }
	__asm { cmp edx, 0x5c }
	__asm { jne L_006b67fd }
	__asm { L_006b67c7: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b67d0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { jmp L_006b67d2 }
	__asm { L_006b67d0: }
	__asm { mov edx, esi }
	__asm { L_006b67d2: }
	__asm { movzx edx, word ptr [edx + 2] }
	__asm { cmp edx, 0x2f }
	__asm { je L_006b67e0 }
	__asm { cmp edx, 0x5c }
	__asm { jne L_006b67fd }
	__asm { L_006b67e0: }
	__asm { cmp eax, 8 }
	__asm { jb L_006b67e9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_006b67eb }
	__asm { L_006b67e9: }
	__asm { mov eax, esi }
	__asm { L_006b67eb: }
	__asm { movzx eax, word ptr [eax + 4] }
	__asm { cmp eax, 0x2f }
	__asm { je L_006b67fd }
	__asm { cmp eax, 0x5c }
	__asm { je L_006b67fd }
	__asm { mov dl, 1 }
	__asm { jmp L_006b67ff }
	__asm { L_006b67fd: }
	__asm { xor dl, dl }
	__asm { L_006b67ff: }
	__asm { cmp dword ptr [ebx + 0x14], 8 }
	__asm { jb L_006b6809 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_006b680b }
	__asm { L_006b6809: }
	__asm { mov eax, ebx }
	__asm { L_006b680b: }
	__asm { mov edi, dword ptr [esi + 0x1c] }
	__asm { movzx eax, word ptr [eax + edi*2] }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { cmp eax, 0x2f }
	__asm { je L_006b6823 }
	__asm { cmp eax, 0x5c }
	__asm { jne L_006b68b7 }
	__asm { L_006b6823: }
	__asm { test dl, dl }
	__asm { jne L_006b6943 }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { jb L_006b6835 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_006b6837 }
	__asm { L_006b6835: }
	__asm { mov eax, esi }
	__asm { L_006b6837: }
	__asm { cmp word ptr [eax + edi*2 - 2], 0x3a }
	__asm { je L_006b6943 }
	__asm { cmp dword ptr [esi + 0x1c], ecx }
	__asm { je L_006b6870 }
	__asm { L_006b6848: }
	__asm { cmp dword ptr [ebx + 0x14], 8 }
	__asm { jb L_006b6852 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_006b6854 }
	__asm { L_006b6852: }
	__asm { mov eax, ebx }
	__asm { L_006b6854: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { movzx eax, word ptr [eax + ecx*2] }
	__asm { cmp eax, 0x2f }
	__asm { je L_006b6865 }
	__asm { cmp eax, 0x5c }
	__asm { jne L_006b6870 }
	__asm { L_006b6865: }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { cmp eax, dword ptr [ebx + 0x10] }
	__asm { jne L_006b6848 }
	__asm { L_006b6870: }
	__asm { mov edi, dword ptr [esi + 0x1c] }
	__asm { cmp edi, dword ptr [ebx + 0x10] }
	__asm { jne L_006b68b7 }
	__asm { dec edi }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_006b6390 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_006b68b7 }
	__asm { mov dword ptr [esi + 0x1c], edi }
	__asm { cmp esi, 0x11dc508 }
	__asm { je L_006b694c }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push 0x11dc508 }
	__asm { mov ecx, esi }
	__asm { call fn_0042bd60 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b68b7: }
	__asm { mov edi, dword ptr [esi + 0x1c] }
	__asm { xor ecx, ecx }
	__asm { cmp word ptr [g_00e435c0], cx }
	__asm { mov eax, 2 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push edi }
	__asm { push 0xe435c0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b6130 }
	__asm { cmp eax, -1 }
	__asm { cmove eax, dword ptr [ebx + 0x10] }
	__asm { sub eax, edi }
	__asm { push eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_006b6db0 }
	__asm { mov edi, eax }
	__asm { cmp dword ptr [esi + 0x14], 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { jb L_006b6909 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_006b690b }
	__asm { L_006b6909: }
	__asm { mov ecx, esi }
	__asm { L_006b690b: }
	__asm { xor eax, eax }
	__asm { mov word ptr [ecx], ax }
	__asm { call fn_006b5ac0 }
	__asm { push dword ptr [eax] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_006b5180 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp - 0x10], 8 }
	__asm { jb L_006b694c }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b6943: }
	__asm { push 0x2f }
	__asm { mov ecx, esi }
	__asm { call fn_006b5370 }
	__asm { L_006b694c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b60e0();
// FUNCTION: ROBLOXSTUDIO 0x006b6c10
extern "C" __declspec(naked) void asm_006b6c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, 2 }
	__asm { jbe L_006b6c58 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b6c2b }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_006b6c2d }
	__asm { L_006b6c2b: }
	__asm { mov edx, eax }
	__asm { L_006b6c2d: }
	__asm { cmp word ptr [edx + 2], 0x3a }
	__asm { jne L_006b6c55 }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b6c3d }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_006b6c3f }
	__asm { L_006b6c3d: }
	__asm { mov ecx, eax }
	__asm { L_006b6c3f: }
	__asm { movzx ecx, word ptr [ecx + 4] }
	__asm { cmp ecx, 0x2f }
	__asm { je L_006b6c4d }
	__asm { cmp ecx, 0x5c }
	__asm { jne L_006b6c55 }
	__asm { L_006b6c4d: }
	__asm { mov eax, 2 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b6c55: }
	__asm { cmp esi, 2 }
	__asm { L_006b6c58: }
	__asm { jne L_006b6c9c }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b6c66 }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_006b6c68 }
	__asm { L_006b6c66: }
	__asm { mov edx, eax }
	__asm { L_006b6c68: }
	__asm { movzx edx, word ptr [edx] }
	__asm { cmp edx, 0x2f }
	__asm { je L_006b6c79 }
	__asm { cmp edx, 0x5c }
	__asm { jne L_006b6d90 }
	__asm { L_006b6c79: }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b6c82 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_006b6c84 }
	__asm { L_006b6c82: }
	__asm { mov ecx, eax }
	__asm { L_006b6c84: }
	__asm { movzx ecx, word ptr [ecx + 2] }
	__asm { cmp ecx, 0x2f }
	__asm { je L_006b6c96 }
	__asm { cmp ecx, 0x5c }
	__asm { jne L_006b6d90 }
	__asm { L_006b6c96: }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b6c9c: }
	__asm { cmp esi, 4 }
	__asm { jbe L_006b6d1b }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b6cad }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_006b6caf }
	__asm { L_006b6cad: }
	__asm { mov edx, eax }
	__asm { L_006b6caf: }
	__asm { movzx edx, word ptr [edx] }
	__asm { cmp edx, 0x2f }
	__asm { je L_006b6cbc }
	__asm { cmp edx, 0x5c }
	__asm { jne L_006b6d1b }
	__asm { L_006b6cbc: }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b6cc5 }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_006b6cc7 }
	__asm { L_006b6cc5: }
	__asm { mov edx, eax }
	__asm { L_006b6cc7: }
	__asm { movzx edx, word ptr [edx + 2] }
	__asm { cmp edx, 0x2f }
	__asm { je L_006b6cd5 }
	__asm { cmp edx, 0x5c }
	__asm { jne L_006b6d1b }
	__asm { L_006b6cd5: }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b6cde }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_006b6ce0 }
	__asm { L_006b6cde: }
	__asm { mov edx, eax }
	__asm { L_006b6ce0: }
	__asm { cmp word ptr [edx + 4], 0x3f }
	__asm { jne L_006b6d1b }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b6cf0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_006b6cf2 }
	__asm { L_006b6cf0: }
	__asm { mov ecx, eax }
	__asm { L_006b6cf2: }
	__asm { movzx ecx, word ptr [ecx + 6] }
	__asm { cmp ecx, 0x2f }
	__asm { je L_006b6d00 }
	__asm { cmp ecx, 0x5c }
	__asm { jne L_006b6d1b }
	__asm { L_006b6d00: }
	__asm { push 4 }
	__asm { push 0xe435c0 }
	__asm { mov ecx, eax }
	__asm { call fn_006b60e0 }
	__asm { or ecx, 0xffffffff }
	__asm { cmp eax, esi }
	__asm { cmovb ecx, eax }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b6d1b: }
	__asm { cmp esi, 3 }
	__asm { jbe L_006b6d88 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b6d2c }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_006b6d2e }
	__asm { L_006b6d2c: }
	__asm { mov edx, eax }
	__asm { L_006b6d2e: }
	__asm { movzx edx, word ptr [edx] }
	__asm { cmp edx, 0x2f }
	__asm { je L_006b6d3b }
	__asm { cmp edx, 0x5c }
	__asm { jne L_006b6d88 }
	__asm { L_006b6d3b: }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b6d44 }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_006b6d46 }
	__asm { L_006b6d44: }
	__asm { mov edx, eax }
	__asm { L_006b6d46: }
	__asm { movzx edx, word ptr [edx + 2] }
	__asm { cmp edx, 0x2f }
	__asm { je L_006b6d54 }
	__asm { cmp edx, 0x5c }
	__asm { jne L_006b6d88 }
	__asm { L_006b6d54: }
	__asm { cmp ecx, 8 }
	__asm { jb L_006b6d5d }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_006b6d5f }
	__asm { L_006b6d5d: }
	__asm { mov ecx, eax }
	__asm { L_006b6d5f: }
	__asm { movzx ecx, word ptr [ecx + 4] }
	__asm { cmp ecx, 0x2f }
	__asm { je L_006b6d88 }
	__asm { cmp ecx, 0x5c }
	__asm { je L_006b6d88 }
	__asm { push 2 }
	__asm { push 0xe435c0 }
	__asm { mov ecx, eax }
	__asm { call fn_006b60e0 }
	__asm { or ecx, 0xffffffff }
	__asm { cmp eax, esi }
	__asm { cmovb ecx, eax }
	__asm { mov eax, ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b6d88: }
	__asm { test esi, esi }
	__asm { je L_006b6c96 }
	__asm { L_006b6d90: }
	__asm { cmp dword ptr [eax + 0x14], 8 }
	__asm { jb L_006b6d98 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006b6d98: }
	__asm { movzx eax, word ptr [eax] }
	__asm { cmp eax, 0x2f }
	__asm { je L_006b6da9 }
	__asm { cmp eax, 0x5c }
	__asm { jne L_006b6c96 }
	__asm { L_006b6da9: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_006b6f10();
// FUNCTION: ROBLOXSTUDIO 0x006b6e70
extern "C" __declspec(naked) void asm_006b6e70()
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
	__asm { call fn_006b6f10 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_006b6ee7 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006b6ee6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006b6ee6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006b6ee6: }
	__asm { pop ebx }
	__asm { L_006b6ee7: }
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

extern "C" char g_00e104f0[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x006b6fc0
extern "C" __declspec(naked) void asm_006b6fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd274b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe1823c }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [edi], 0xe4360c }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { test eax, eax }
	__asm { je L_006b7046 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006b7046: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_0042bd60();
extern "C" void fn_006b6e70();
extern "C" void fn_006b8240();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006b7060
extern "C" __declspec(naked) void asm_006b7060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15e13 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { jb L_006b7091 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006b7091: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [esi + 0x28], 0xf }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi], 0xe4360c }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { push 0x48 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_006b7119 }
	__asm { mov dword ptr [eax + 0x14], 7 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { xor ecx, ecx }
	__asm { mov word ptr [eax], cx }
	__asm { mov dword ptr [eax + 0x2c], 7 }
	__asm { mov dword ptr [eax + 0x28], ecx }
	__asm { mov word ptr [eax + 0x18], cx }
	__asm { mov dword ptr [eax + 0x44], 0xf }
	__asm { mov dword ptr [eax + 0x40], ecx }
	__asm { mov byte ptr [eax + 0x30], cl }
	__asm { jmp L_006b711b }
	__asm { L_006b7119: }
	__asm { xor eax, eax }
	__asm { L_006b711b: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_006b6e70 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov edi, eax }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov dword ptr [esi + 0x2c], edx }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { test edi, edi }
	__asm { je L_006b7169 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006b7169 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006b7169 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006b7169: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, eax }
	__asm { je L_006b7193 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_0042bd60 }
	__asm { jmp L_006b7193 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ecx + 0x2c] }
	__asm { call fn_006b8240 }
	__asm { mov eax, 0x6b7190 }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_006b7193: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10100[];
extern "C" char g_00e10114[];
extern "C" char g_00e101c0[];
extern "C" char g_00e131a0[];
extern "C" void fn_0042c030();
extern "C" void fn_006b52e0();
extern "C" void fn_006b7e10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b75c0
extern "C" __declspec(naked) void asm_006b75c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd15c78 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x268 }
	__asm { lea eax, [ebp - 0x274] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10100] }
	__asm { test eax, eax }
	__asm { jne L_006b7639 }
	__asm { call dword ptr [g_00e101c0] }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006b7611 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10114] }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_006b7611: }
	__asm { call dword ptr [g_00e131a0] }
	__asm { mov ecx, eax }
	__asm { xor eax, eax }
	__asm { cmp edi, 0x12 }
	__asm { cmove edi, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b7639: }
	__asm { cmp word ptr [ebp - 0x248], 0 }
	__asm { jne L_006b7647 }
	__asm { xor ecx, ecx }
	__asm { jmp L_006b765f }
	__asm { L_006b7647: }
	__asm { lea ecx, [ebp - 0x248] }
	__asm { lea edx, [ecx + 2] }
	__asm { L_006b7650: }
	__asm { mov ax, word ptr [ecx] }
	__asm { add ecx, 2 }
	__asm { test ax, ax }
	__asm { jne L_006b7650 }
	__asm { sub ecx, edx }
	__asm { sar ecx, 1 }
	__asm { L_006b765f: }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x248] }
	__asm { push eax }
	__asm { call fn_0042c030 }
	__asm { mov eax, dword ptr [ebp - 0x274] }
	__asm { test eax, 0x400 }
	__asm { je L_006b7693 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [eax], 0 }
	__asm { jmp L_006b7714 }
	__asm { L_006b7693: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { test al, 0x10 }
	__asm { je L_006b76ab }
	__asm { mov dword ptr [esi], 3 }
	__asm { mov dword ptr [edi], 3 }
	__asm { jmp L_006b76b7 }
	__asm { L_006b76ab: }
	__asm { mov dword ptr [esi], 2 }
	__asm { mov dword ptr [edi], 2 }
	__asm { L_006b76b7: }
	__asm { lea eax, [ebp - 0x248] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_006b52e0 }
	__asm { push dword ptr [ebp - 0x274] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b7e10 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x10], 8 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006b76fa }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b76fa: }
	__asm { xor eax, eax }
	__asm { mov word ptr [ebp - 0x24], ax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x10], 7 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { L_006b7714: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { call dword ptr [g_00e131a0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_004039a0();
extern "C" void fn_0042bd60();
extern "C" void fn_006b52e0();
extern "C" void fn_006b7060();
extern "C" void fn_006b72a0();
extern "C" void fn_006b73b0();
extern "C" void fn_006b7a10();
extern "C" void fn_006b7c70();
extern "C" void fn_006b8240();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006b7740
extern "C" __declspec(naked) void asm_006b7740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15e90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x94 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { push 0xe436bc }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 0x40], 0xf }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov byte ptr [ebp - 0x54], 0 }
	__asm { call fn_004038a0 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { sete byte ptr [ebp + 0xc] }
	__asm { push 0x12de614 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b7c70 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x40], 0x10 }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006b77ca }
	__asm { push dword ptr [ebp - 0x54] }
	__asm { call fn_00cf6522 }
	__asm { mov al, byte ptr [ebp + 0xf] }
	__asm { add esp, 4 }
	__asm { L_006b77ca: }
	__asm { test al, al }
	__asm { jne L_006b79ff }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x58], 7 }
	__asm { mov dword ptr [ebp - 0x5c], 0 }
	__asm { mov word ptr [ebp - 0x6c], ax }
	__asm { cmp dword ptr [edi + 0x14], 8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov dword ptr [ebp - 0x20], 0xffff }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0xffff }
	__asm { jb L_006b780b }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_006b780d }
	__asm { L_006b780b: }
	__asm { mov eax, edi }
	__asm { L_006b780d: }
	__asm { push esi }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_006b52e0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push ecx }
	__asm { add eax, 0x28 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006b73b0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x28], 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jb L_006b7855 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b7855: }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { je L_006b78fd }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_006b7899 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006b7899 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_006b7899 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006b7899: }
	__asm { push 0xe436bc }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_004039a0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test ecx, ecx }
	__asm { jne L_006b78d8 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0xa0] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_006b7060 }
	__asm { push 0x10fdc04 }
	__asm { lea eax, [ebp - 0xa0] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_006b78d8: }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { jb L_006b79ed }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_006b79ed }
	__asm { L_006b78fd: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp dword ptr [eax + 0x28], 0 }
	__asm { jne L_006b7911 }
	__asm { mov ecx, esi }
	__asm { call fn_006b8240 }
	__asm { jmp L_006b79ed }
	__asm { L_006b7911: }
	__asm { xor eax, eax }
	__asm { push -1 }
	__asm { push eax }
	__asm { mov word ptr [ebp - 0x54], ax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 0x40], 7 }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { call fn_0042bd60 }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_006b72a0 }
	__asm { add esp, 0xc }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { cmp edi, eax }
	__asm { je L_006b795f }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0042bd60 }
	__asm { L_006b795f: }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { cmp dword ptr [ebp - 0x28], 8 }
	__asm { jb L_006b7988 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b7988: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp - 0x40], 8 }
	__asm { mov dword ptr [ebp - 0x28], 7 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov word ptr [ebp - 0x3c], ax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { jb L_006b79b1 }
	__asm { push dword ptr [ebp - 0x54] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b79b1: }
	__asm { mov edx, dword ptr [ebp - 0x58] }
	__asm { mov edi, dword ptr [ebp - 0x6c] }
	__asm { cmp edx, 8 }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { cmovae eax, edi }
	__asm { cmp word ptr [eax], 0x2e }
	__asm { jne L_006b79ed }
	__asm { mov ecx, dword ptr [ebp - 0x5c] }
	__asm { cmp ecx, 1 }
	__asm { je L_006b79e3 }
	__asm { cmp edx, 8 }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { cmovae eax, edi }
	__asm { cmp word ptr [eax + 2], 0x2e }
	__asm { jne L_006b79ed }
	__asm { cmp ecx, 2 }
	__asm { jne L_006b79ed }
	__asm { L_006b79e3: }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_006b7a10 }
	__asm { add esp, 8 }
	__asm { L_006b79ed: }
	__asm { cmp dword ptr [ebp - 0x58], 8 }
	__asm { pop esi }
	__asm { jb L_006b79ff }
	__asm { push dword ptr [ebp - 0x6c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b79ff: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101c0[];
extern "C" char g_00e131a0[];
extern "C" void fn_004039a0();
extern "C" void fn_0042bd60();
extern "C" void fn_006b5460();
extern "C" void fn_006b6960();
extern "C" void fn_006b6a70();
extern "C" void fn_006b7060();
extern "C" void fn_006b75c0();
extern "C" void fn_006b8240();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006b7a10
extern "C" __declspec(naked) void asm_006b7a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15ec0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x9c }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor eax, eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x20], 7 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov word ptr [ebp - 0x34], ax }
	__asm { mov ebx, dword ptr [g_00e131a0] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0xffff }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], 0xffff }
	__asm { call ebx }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { add eax, 0x28 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_006b75c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { test ecx, ecx }
	__asm { jne L_006b7b26 }
	__asm { L_006b7a98: }
	__asm { test edi, edi }
	__asm { je L_006b7aa7 }
	__asm { mov dword ptr [edi], 0 }
	__asm { call ebx }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { L_006b7aa7: }
	__asm { mov ebx, dword ptr [esi] }
	__asm { cmp dword ptr [ebx + 0x28], 0 }
	__asm { je L_006b7bee }
	__asm { mov edx, dword ptr [ebp - 0x20] }
	__asm { mov esi, dword ptr [ebp - 0x34] }
	__asm { cmp edx, 8 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { cmovae eax, esi }
	__asm { cmp word ptr [eax], 0x2e }
	__asm { jne L_006b7b85 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { cmp ecx, 1 }
	__asm { je L_006b7af1 }
	__asm { cmp edx, 8 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { cmovae eax, esi }
	__asm { cmp word ptr [eax + 2], 0x2e }
	__asm { jne L_006b7b85 }
	__asm { cmp ecx, 2 }
	__asm { jne L_006b7b85 }
	__asm { L_006b7af1: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebx + 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_006b75c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [g_00e131a0] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { test ecx, ecx }
	__asm { je L_006b7a98 }
	__asm { L_006b7b26: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call fn_006b6960 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006b8240 }
	__asm { test edi, edi }
	__asm { jne L_006b7bf7 }
	__asm { push 0xe436f0 }
	__asm { lea ecx, [ebp - 0x74] }
	__asm { call fn_004039a0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call ebx }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e101c0] }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x74] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { call fn_006b7060 }
	__asm { push 0x10fdc04 }
	__asm { lea eax, [ebp - 0xa8] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_006b7b85: }
	__asm { xor eax, eax }
	__asm { push -1 }
	__asm { push eax }
	__asm { mov word ptr [ebp - 0x4c], ax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 0x38], 7 }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { call fn_0042bd60 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call fn_006b6a70 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006b5460 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { cmp dword ptr [ebp - 0x38], 8 }
	__asm { jb L_006b7c2b }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_006b7c2b }
	__asm { L_006b7bee: }
	__asm { mov ecx, esi }
	__asm { call fn_006b8240 }
	__asm { jmp L_006b7c2b }
	__asm { L_006b7bf7: }
	__asm { call ebx }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e101c0] }
	__asm { cmp dword ptr [ebp - 0x38], 8 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { jb L_006b7c17 }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b7c17: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x38], 7 }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov word ptr [ebp - 0x4c], ax }
	__asm { L_006b7c2b: }
	__asm { cmp dword ptr [ebp - 0x20], 8 }
	__asm { jb L_006b7c3c }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b7c3c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1062c[];
extern "C" void fn_005dde10();
extern "C" void fn_006b5d10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b7e10
extern "C" __declspec(naked) void asm_006b7e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd15fa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc4 }
	__asm { test byte ptr [ebp + 0xc], 1 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov eax, 0x1b6 }
	__asm { mov edi, 0x124 }
	__asm { cmove edi, eax }
	__asm { lea eax, [ebp - 0xd0] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_006b5d10 }
	__asm { lea ecx, [ebp - 0xa0] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_005dde10 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ebx, 3 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { jb L_006b7e8a }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006b7e8a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e1062c] }
	__asm { push 0xe4361c }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_006b7f89 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x70] }
	__asm { push eax }
	__asm { call fn_006b5d10 }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], 7 }
	__asm { call fn_005dde10 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ebx, 0xf }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { jb L_006b7ee0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006b7ee0: }
	__asm { push 0xe43624 }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_006b7f89 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_006b5d10 }
	__asm { lea ecx, [ebp - 0xb8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0x10], 0x1f }
	__asm { call fn_005dde10 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ebx, 0x3f }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { jb L_006b7f32 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006b7f32: }
	__asm { push 0xe4362c }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_006b7f89 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { call fn_006b5d10 }
	__asm { lea ecx, [ebp - 0x88] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 6 }
	__asm { mov dword ptr [ebp - 0x10], 0x7f }
	__asm { call fn_005dde10 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ebx, 0xff }
	__asm { jb L_006b7f76 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006b7f76: }
	__asm { push 0xe43634 }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 8 }
	__asm { mov byte ptr [ebp + 0xf], 0 }
	__asm { test eax, eax }
	__asm { jne L_006b7f8d }
	__asm { L_006b7f89: }
	__asm { mov byte ptr [ebp + 0xf], 1 }
	__asm { L_006b7f8d: }
	__asm { pop esi }
	__asm { test bl, bl }
	__asm { jns L_006b7fc1 }
	__asm { and ebx, 0xffffff7f }
	__asm { cmp dword ptr [ebp - 0x74], 0x10 }
	__asm { jb L_006b7fac }
	__asm { push dword ptr [ebp - 0x88] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b7fac: }
	__asm { mov dword ptr [ebp - 0x74], 0xf }
	__asm { mov dword ptr [ebp - 0x78], 0 }
	__asm { mov byte ptr [ebp - 0x88], 0 }
	__asm { L_006b7fc1: }
	__asm { test bl, 0x40 }
	__asm { je L_006b7fee }
	__asm { and ebx, 0xffffffbf }
	__asm { cmp dword ptr [ebp - 0x44], 8 }
	__asm { jb L_006b7fda }
	__asm { push dword ptr [ebp - 0x58] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b7fda: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x44], 7 }
	__asm { mov dword ptr [ebp - 0x48], 0 }
	__asm { mov word ptr [ebp - 0x58], ax }
	__asm { L_006b7fee: }
	__asm { test bl, 0x20 }
	__asm { je L_006b8028 }
	__asm { and ebx, 0xffffffdf }
	__asm { cmp dword ptr [ebp - 0xa4], 0x10 }
	__asm { jb L_006b800d }
	__asm { push dword ptr [ebp - 0xb8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b800d: }
	__asm { mov dword ptr [ebp - 0xa4], 0xf }
	__asm { mov dword ptr [ebp - 0xa8], 0 }
	__asm { mov byte ptr [ebp - 0xb8], 0 }
	__asm { L_006b8028: }
	__asm { test bl, 0x10 }
	__asm { je L_006b8055 }
	__asm { and ebx, 0xffffffef }
	__asm { cmp dword ptr [ebp - 0x14], 8 }
	__asm { jb L_006b8041 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b8041: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x14], 7 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x28], ax }
	__asm { L_006b8055: }
	__asm { test bl, 8 }
	__asm { je L_006b8080 }
	__asm { and ebx, 0xfffffff7 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { jb L_006b806e }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b806e: }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { L_006b8080: }
	__asm { test bl, 4 }
	__asm { je L_006b80ad }
	__asm { and ebx, 0xfffffffb }
	__asm { cmp dword ptr [ebp - 0x5c], 8 }
	__asm { jb L_006b8099 }
	__asm { push dword ptr [ebp - 0x70] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b8099: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x5c], 7 }
	__asm { mov dword ptr [ebp - 0x60], 0 }
	__asm { mov word ptr [ebp - 0x70], ax }
	__asm { L_006b80ad: }
	__asm { test bl, 2 }
	__asm { je L_006b80e7 }
	__asm { and ebx, 0xfffffffd }
	__asm { cmp dword ptr [ebp - 0x8c], 0x10 }
	__asm { jb L_006b80cc }
	__asm { push dword ptr [ebp - 0xa0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b80cc: }
	__asm { mov dword ptr [ebp - 0x8c], 0xf }
	__asm { mov dword ptr [ebp - 0x90], 0 }
	__asm { mov byte ptr [ebp - 0xa0], 0 }
	__asm { L_006b80e7: }
	__asm { test bl, 1 }
	__asm { je L_006b8103 }
	__asm { cmp dword ptr [ebp - 0xbc], 8 }
	__asm { jb L_006b8103 }
	__asm { push dword ptr [ebp - 0xd0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b8103: }
	__asm { cmp byte ptr [ebp + 0xf], 0 }
	__asm { je L_006b810c }
	__asm { or edi, 0x49 }
	__asm { L_006b810c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10108[];
extern "C" char g_00e1010c[];
extern "C" char g_00e10194[];
extern "C" char g_00e131a0[];
extern "C" void fn_006b52e0();
extern "C" void fn_006b7d50();
extern "C" void fn_006b7e10();
extern "C" void fn_006b8120();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b8290
extern "C" __declspec(naked) void asm_006b8290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd15fc8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [edi + 0x14], 8 }
	__asm { jb L_006b82bb }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_006b82bd }
	__asm { L_006b82bb: }
	__asm { mov eax, edi }
	__asm { L_006b82bd: }
	__asm { push eax }
	__asm { call dword ptr [g_00e10108] }
	__asm { mov ebx, eax }
	__asm { cmp ebx, -1 }
	__asm { jne L_006b82ee }
	__asm { L_006b82cb: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_006b8120 }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b82ee: }
	__asm { test ebx, 0x400 }
	__asm { je L_006b83b5 }
	__asm { cmp dword ptr [edi + 0x14], 8 }
	__asm { jb L_006b8304 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_006b8306 }
	__asm { L_006b8304: }
	__asm { mov eax, edi }
	__asm { L_006b8306: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_006b52e0 }
	__asm { cmp dword ptr [ebp - 0x18], 8 }
	__asm { push 0 }
	__asm { push 0x2000000 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push 7 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { cmovae eax, dword ptr [ebp - 0x2c] }
	__asm { push 0 }
	__asm { push eax }
	__asm { call dword ptr [g_00e1010c] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { cmp dword ptr [ebp - 0x18], 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_006b834d }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b834d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x18], 7 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov word ptr [ebp - 0x2c], ax }
	__asm { cmp esi, -1 }
	__asm { je L_006b82cb }
	__asm { push edi }
	__asm { call fn_006b7d50 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_006b83a7 }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_006b7e10 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [edi], 9 }
	__asm { push esi }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { call dword ptr [g_00e10194] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b83a7: }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_006b83b5: }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { test esi, esi }
	__asm { je L_006b83cb }
	__asm { mov dword ptr [esi], 0 }
	__asm { call dword ptr [g_00e131a0] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_006b83cb: }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], 3 }
	__asm { test bl, 0x10 }
	__asm { jne L_006b83e0 }
	__asm { mov dword ptr [ebp - 0x14], 2 }
	__asm { L_006b83e0: }
	__asm { call fn_006b7e10 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x14] }
	__asm { add esp, 8 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10110[];
extern "C" char g_00e131a0[];
extern "C" void fn_004038a0();
extern "C" void fn_004039a0();
extern "C" void fn_0042bd60();
extern "C" void fn_006b5340();
extern "C" void fn_006b6df0();
extern "C" void fn_006b7ce0();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
// FUNCTION: ROBLOXSTUDIO 0x006b8410
extern "C" __declspec(naked) void asm_006b8410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1602a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x154 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { jne L_006b8489 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { test esi, esi }
	__asm { je L_006b8456 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call dword ptr [g_00e131a0] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_006b8456: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { push -1 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x14], 7 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov word ptr [esi], ax }
	__asm { call fn_0042bd60 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b8489: }
	__asm { cmp dword ptr [edi + 0x14], 8 }
	__asm { jb L_006b8493 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_006b8495 }
	__asm { L_006b8493: }
	__asm { mov eax, edi }
	__asm { L_006b8495: }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x160] }
	__asm { push ecx }
	__asm { push 0x80 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10110] }
	__asm { push 0x22 }
	__asm { push 0xe4368c }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { test ebx, ebx }
	__asm { sete al }
	__asm { movzx eax, al }
	__asm { push edi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b7ce0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006b850e }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { mov al, byte ptr [ebp + 0xf] }
	__asm { add esp, 4 }
	__asm { L_006b850e: }
	__asm { test al, al }
	__asm { je L_006b8539 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebx }
	__asm { xor ecx, ecx }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0x14], 7 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov word ptr [eax], cx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b8539: }
	__asm { cmp ebx, 0x80 }
	__asm { jae L_006b856c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x160] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_006b6df0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b856c: }
	__asm { xor ecx, ecx }
	__asm { mov eax, ebx }
	__asm { mov edx, 2 }
	__asm { mul edx }
	__asm { seto cl }
	__asm { neg ecx }
	__asm { or ecx, eax }
	__asm { push ecx }
	__asm { call fn_00cf64a0 }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x48], esi }
	__asm { push 0xe4368c }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_004039a0 }
	__asm { cmp dword ptr [edi + 0x14], 8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { jb L_006b85ae }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_006b85b0 }
	__asm { L_006b85ae: }
	__asm { mov eax, edi }
	__asm { L_006b85b0: }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { push esi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10110] }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { sete al }
	__asm { movzx eax, al }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_006b7ce0 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_006b85fc }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x14], 7 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x28], ax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov ebx, 2 }
	__asm { jmp L_006b8619 }
	__asm { L_006b85fc: }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { call fn_006b6df0 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov ebx, 4 }
	__asm { L_006b8619: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { push -1 }
	__asm { push ecx }
	__asm { mov dword ptr [edi + 0x14], 7 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov word ptr [edi], cx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_0042bd60 }
	__asm { or ebx, 1 }
	__asm { test bl, 4 }
	__asm { je L_006b8650 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { and ebx, 0xfffffffb }
	__asm { call fn_006b5340 }
	__asm { L_006b8650: }
	__asm { test bl, 2 }
	__asm { je L_006b865d }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_006b5340 }
	__asm { L_006b865d: }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { jb L_006b866e }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b866e: }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x30], 0xf }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov byte ptr [ebp - 0x44], 0 }
	__asm { call fn_00cf6698 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105b0[];
extern "C" char g_00e43948[];
extern "C" char g_010380a0[];
extern "C" char g_010380d8[];
extern "C" char g_010381d0[];
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x006b9020
extern "C" __declspec(naked) void asm_006b9020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x44 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp eax, 0x3e8 }
	__asm { jae L_006b9051 }
	__asm { push eax }
	__asm { push 0xe4382c }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push 0x40 }
	__asm { push eax }
	__asm { call dword ptr [g_00e105b0] }
	__asm { add esp, 0x10 }
	__asm { jmp L_006b9162 }
	__asm { L_006b9051: }
	__asm { cmp eax, 0x186a0 }
	__asm { jae L_006b907e }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { fild dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { jns L_006b9068 }
	__asm { fadd qword ptr [g_010381d0] }
	__asm { L_006b9068: }
	__asm { fmul qword ptr [g_010380d8] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe43830 }
	__asm { jmp L_006b9153 }
	__asm { L_006b907e: }
	__asm { cmp eax, 0xf4240 }
	__asm { jae L_006b90ab }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { fild dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { jns L_006b9095 }
	__asm { fadd qword ptr [g_010381d0] }
	__asm { L_006b9095: }
	__asm { fmul qword ptr [g_010380d8] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe43838 }
	__asm { jmp L_006b9153 }
	__asm { L_006b90ab: }
	__asm { cmp eax, 0x5f5e100 }
	__asm { jae L_006b90d5 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { fild dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { jns L_006b90c2 }
	__asm { fadd qword ptr [g_010381d0] }
	__asm { L_006b90c2: }
	__asm { fmul qword ptr [g_010380a0] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe43840 }
	__asm { jmp L_006b9153 }
	__asm { L_006b90d5: }
	__asm { cmp eax, 0x3b9aca00 }
	__asm { jae L_006b90ff }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { fild dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { jns L_006b90ec }
	__asm { fadd qword ptr [g_010381d0] }
	__asm { L_006b90ec: }
	__asm { fmul qword ptr [g_010380a0] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe43848 }
	__asm { jmp L_006b9153 }
	__asm { L_006b90ff: }
	__asm { xor ecx, ecx }
	__asm { cmp ecx, 0x17 }
	__asm { jg L_006b9132 }
	__asm { jl L_006b910f }
	__asm { cmp eax, 0x4876e800 }
	__asm { jae L_006b9132 }
	__asm { L_006b910f: }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { fild dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { jns L_006b911f }
	__asm { fadd qword ptr [g_010381d0] }
	__asm { L_006b911f: }
	__asm { fmul qword ptr [g_00e43948] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe43850 }
	__asm { jmp L_006b9153 }
	__asm { L_006b9132: }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { fild dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { jns L_006b9142 }
	__asm { fadd qword ptr [g_010381d0] }
	__asm { L_006b9142: }
	__asm { fmul qword ptr [g_00e43948] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe43858 }
	__asm { L_006b9153: }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push 0x40 }
	__asm { push eax }
	__asm { call dword ptr [g_00e105b0] }
	__asm { add esp, 0x14 }
	__asm { L_006b9162: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [ebp - 0x44], 0 }
	__asm { jne L_006b9192 }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b9192: }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { lea edx, [ecx + 1] }
	__asm { L_006b9198: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_006b9198 }
	__asm { sub ecx, edx }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0067e970();
extern "C" void fn_0067ea10();
extern "C" void fn_0067eab0();
// FUNCTION: ROBLOXSTUDIO 0x006b92a0
extern "C" __declspec(naked) void asm_006b92a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { add ebx, 0x7d2c }
	__asm { mov eax, 0x396b06bd }
	__asm { lea ecx, [ebx*4 + 3] }
	__asm { mul ecx }
	__asm { shr edx, 0xf }
	__asm { mov eax, edx }
	__asm { imul eax, eax, 0x23ab1 }
	__asm { shr eax, 2 }
	__asm { sub ebx, eax }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { lea ecx, [ebx*4 + 3] }
	__asm { mov eax, 0x166db073 }
	__asm { mul ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, edx }
	__asm { shr edi, 7 }
	__asm { mov eax, edi }
	__asm { imul eax, eax, 0x5b5 }
	__asm { shr eax, 2 }
	__asm { sub ebx, eax }
	__asm { mov eax, 0xd62b80d7 }
	__asm { lea ecx, [ebx*4 + 2] }
	__asm { add ecx, ebx }
	__asm { mul ecx }
	__asm { mov esi, edx }
	__asm { shr esi, 7 }
	__asm { mov ecx, esi }
	__asm { imul ecx, ecx, 0x99 }
	__asm { add ecx, 2 }
	__asm { mov eax, 0xcccccccd }
	__asm { mul ecx }
	__asm { shr edx, 2 }
	__asm { sub ebx, edx }
	__asm { mov eax, 0xcccccccd }
	__asm { mul esi }
	__asm { shr edx, 3 }
	__asm { inc ebx }
	__asm { lea eax, [edx + edx*2] }
	__asm { shl eax, 2 }
	__asm { sub esi, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { imul eax, eax, 0x64 }
	__asm { add eax, 0xffffed40 }
	__asm { add edx, eax }
	__asm { add edx, edi }
	__asm { movzx eax, dx }
	__asm { add esi, 3 }
	__asm { inc eax }
	__asm { movzx ecx, bx }
	__asm { movzx esi, si }
	__asm { cmp eax, 0x579 }
	__asm { jl L_006b9389 }
	__asm { mov eax, 0x2710 }
	__asm { cmp dx, ax }
	__asm { ja L_006b9396 }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, 2 }
	__asm { jl L_006b93a3 }
	__asm { cmp ecx, 0x1f }
	__asm { ja L_006b93ad }
	__asm { lea eax, [esi + 1] }
	__asm { cmp eax, 2 }
	__asm { jl L_006b93b7 }
	__asm { cmp esi, 0xc }
	__asm { ja L_006b93c1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov word ptr [eax + 2], si }
	__asm { pop esi }
	__asm { mov word ptr [eax], dx }
	__asm { mov word ptr [eax + 4], cx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b9389: }
	__asm { push 0 }
	__asm { push edx }
	__asm { push 0x578 }
	__asm { call fn_0067eab0 }
	__asm { L_006b9396: }
	__asm { push 1 }
	__asm { push edx }
	__asm { push 0x578 }
	__asm { call fn_0067eab0 }
	__asm { L_006b93a3: }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push 1 }
	__asm { call fn_0067e970 }
	__asm { L_006b93ad: }
	__asm { push 1 }
	__asm { push ecx }
	__asm { push 1 }
	__asm { call fn_0067e970 }
	__asm { L_006b93b7: }
	__asm { push 0 }
	__asm { push esi }
	__asm { push 1 }
	__asm { call fn_0067ea10 }
	__asm { L_006b93c1: }
	__asm { push 1 }
	__asm { push esi }
	__asm { push 1 }
	__asm { call fn_0067ea10 }
}

extern "C" char g_00e102b0[];
extern "C" char g_00e105b0[];
extern "C" void fn_004276b0();
extern "C" void fn_006b8f50();
extern "C" void fn_006b92a0();
extern "C" void fn_006b9430();
extern "C" void fn_006b9500();
extern "C" void fn_006c5910();
extern "C" void fn_00cf6970();
extern "C" void fn_00cf6d70();
// FUNCTION: ROBLOXSTUDIO 0x006b9590
extern "C" __declspec(naked) void asm_006b9590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x120 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_006b9500 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_006b9614 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_006b8f50 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_006b92a0 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_006b92a0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_006b92a0 }
	__asm { movzx eax, word ptr [ebp - 0x18] }
	__asm { push eax }
	__asm { movzx eax, word ptr [ebp - 0x1e] }
	__asm { push eax }
	__asm { movzx eax, word ptr [ebp - 4] }
	__asm { push eax }
	__asm { push 0xe437c4 }
	__asm { lea eax, [ebp - 0x120] }
	__asm { push 0x100 }
	__asm { push eax }
	__asm { call dword ptr [g_00e105b0] }
	__asm { lea eax, [ebp - 0x120] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_004276b0 }
	__asm { add esp, 0x38 }
	__asm { L_006b9614: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_006b9430 }
	__asm { call fn_006c5910 }
	__asm { fstp qword ptr [esp] }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { push 0x3e8 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00cf6970 }
	__asm { movzx eax, ax }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0xf4240 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00cf6970 }
	__asm { push 0 }
	__asm { push 0x3c }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_00cf6d70 }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x3938700 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00cf6970 }
	__asm { push 0 }
	__asm { push 0x3c }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_00cf6d70 }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0xd693a400 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00cf6970 }
	__asm { push eax }
	__asm { push 0xe437d4 }
	__asm { lea eax, [ebp - 0x120] }
	__asm { push 0x100 }
	__asm { push eax }
	__asm { call dword ptr [g_00e105b0] }
	__asm { lea eax, [ebp - 0x120] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_004276b0 }
	__asm { add esp, 0x2c }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e102b0] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_006ba060();
// FUNCTION: ROBLOXSTUDIO 0x006b9fc0
extern "C" __declspec(naked) void asm_006b9fc0()
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
	__asm { call fn_006ba060 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_006ba037 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006ba036 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006ba036 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006ba036: }
	__asm { pop ebx }
	__asm { L_006ba037: }
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

extern "C" char g_00e10194[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006ba230
extern "C" __declspec(naked) void asm_006ba230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, edx }
	__asm { je L_006ba28e }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10194] }
	__asm { push esi }
	__asm { L_006ba246: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_006ba285 }
	__asm { lea eax, [esi + 0x10] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006ba285 }
	__asm { test esi, esi }
	__asm { je L_006ba285 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_006ba26b }
	__asm { cmp eax, -1 }
	__asm { je L_006ba26b }
	__asm { push eax }
	__asm { call ebx }
	__asm { L_006ba26b: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006ba279 }
	__asm { cmp eax, -1 }
	__asm { je L_006ba279 }
	__asm { push eax }
	__asm { call ebx }
	__asm { L_006ba279: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { L_006ba285: }
	__asm { add edi, 4 }
	__asm { cmp edi, edx }
	__asm { jne L_006ba246 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_006ba28e: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_006bacb0();
extern "C" void fn_008ed6c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006ba710
extern "C" __declspec(naked) void asm_006ba710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd161f9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x30] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_006ba7b9 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_006ba7a2 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_006ba7b9 }
	__asm { L_006ba7a2: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006ba7b9: }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006bacb0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_008ed6c0 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { jb L_006ba7f6 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ba7f6: }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { test eax, eax }
	__asm { je L_006ba82f }
	__asm { test al, 1 }
	__asm { jne L_006ba828 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006ba828 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006ba828: }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { L_006ba82f: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_006ba85a }
	__asm { test al, 1 }
	__asm { jne L_006ba853 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006ba853 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006ba853: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_006ba85a: }
	__asm { cmp dword ptr [ebp + 0x44], 0x10 }
	__asm { jb L_006ba86b }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006ba86b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006badb0();
extern "C" void fn_00b021e0();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x006ba880
extern "C" __declspec(naked) void asm_006ba880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16241 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { test eax, eax }
	__asm { je L_006ba901 }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_006ba8ea }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_006ba901 }
	__asm { L_006ba8ea: }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006ba901: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_006ba924 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006ba924: }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_006badb0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00b021e0 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00be5350 }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_006ba985 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006ba985 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006ba985 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006ba985: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_006ba9a9 }
	__asm { test al, 1 }
	__asm { jne L_006ba9a9 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006ba9a9 }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006ba9a9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10188[];
extern "C" char g_00e1318c[];
extern "C" char g_00e13190[];
extern "C" void fn_0040edb0();
extern "C" void fn_006bb510();
extern "C" void fn_006bbb00();
extern "C" void fn_006bc760();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006baa30
extern "C" __declspec(naked) void asm_006baa30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16260 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x20], ebx }
	__asm { mov byte ptr [ebp - 0x1c], 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006bbb00 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { test eax, eax }
	__asm { je L_006baa7f }
	__asm { add eax, 0x10 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006baa7f: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006baab7 }
	__asm { lea eax, [esi + 0x10] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006baab7 }
	__asm { test esi, esi }
	__asm { je L_006baab7 }
	__asm { lea ecx, [esi + 4] }
	__asm { call dword ptr [g_00e1318c] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e1318c] }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006baab7: }
	__asm { mov ecx, ebx }
	__asm { call fn_006bc760 }
	__asm { mov byte ptr [ebp - 0x1c], 1 }
	__asm { L_006baac2: }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, 8 }
	__asm { lea esi, [ebp + 0xc] }
	__asm { rep movsd }
	__asm { call dword ptr [g_00e13190] }
	__asm { add esp, 0x24 }
	__asm { test al, al }
	__asm { je L_006baafc }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [eax + 4] }
	__asm { call dword ptr [g_00e10188] }
	__asm { test eax, eax }
	__asm { sete bl }
	__asm { test bl, bl }
	__asm { je L_006baac2 }
	__asm { jmp L_006baafe }
	__asm { L_006baafc: }
	__asm { xor bl, bl }
	__asm { L_006baafe: }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006bb510 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_006bafd0();
// FUNCTION: ROBLOXSTUDIO 0x006badb0
extern "C" __declspec(naked) void asm_006badb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd162e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_006bae2a }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_006bae13 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_006bae2a }
	__asm { L_006bae13: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006bae2a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006bae4d }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006bae4d: }
	__asm { mov ecx, edi }
	__asm { call fn_006bafd0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006bae85 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bae85 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006bae85 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bae85: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006baeac }
	__asm { test al, 1 }
	__asm { jne L_006baeac }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006baeac }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006baeac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_004677e0();
// FUNCTION: ROBLOXSTUDIO 0x006bafd0
extern "C" __declspec(naked) void asm_006bafd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16338 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006bb01d }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006bb01d: }
	__asm { mov ecx, esi }
	__asm { call fn_004677e0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006bb07b }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { test cl, 1 }
	__asm { je L_006bb064 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { jmp L_006bb07b }
	__asm { L_006bb064: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 0xc }
	__asm { L_006bb07b: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_006bb0af }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bb0ac }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006bb0ac }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bb0ac: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { L_006bb0af: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_006bb0d4 }
	__asm { test cl, 1 }
	__asm { jne L_006bb0d4 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_006bb0d4 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006bb0d4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" void fn_006bb6f0();
extern "C" void fn_008ed6c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006bbe70
extern "C" __declspec(naked) void asm_006bbe70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ac4b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_006bbeec }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x40 }
	__asm { mov edi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006bbed5 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [edi + 8] }
	__asm { push ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_008ed6c0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bbed5: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bbeec: }
	__asm { cmp eax, 1 }
	__asm { jne L_006bbf11 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bbf11: }
	__asm { cmp eax, 2 }
	__asm { jne L_006bbf3c }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_006bbf26 }
	__asm { push 1 }
	__asm { call fn_006bb6f0 }
	__asm { L_006bbf26: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bbf3c: }
	__asm { cmp eax, 3 }
	__asm { jne L_006bbf6c }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11dc720 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_006bbf26 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bbf6c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0x11dc720 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_00b021e0();
extern "C" void fn_00be5350();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006bbf90
extern "C" __declspec(naked) void asm_006bbf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ac4b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { jne L_006bc00c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x30 }
	__asm { mov edi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006bbff5 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [edi + 8] }
	__asm { push ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00b021e0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bbff5: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bc00c: }
	__asm { cmp eax, 1 }
	__asm { jne L_006bc031 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bc031: }
	__asm { cmp eax, 2 }
	__asm { jne L_006bc066 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_006bc050 }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00be5350 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bc050: }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bc066: }
	__asm { cmp eax, 3 }
	__asm { jne L_006bc0ac }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11dc828 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_006bc096 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bc096: }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bc0ac: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0x11dc828 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006bb950();
// FUNCTION: ROBLOXSTUDIO 0x006bc230
extern "C" __declspec(naked) void asm_006bc230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_006bc268 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_006bc268 }
	__asm { sub edi, ecx }
	__asm { sar edi, 2 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_006bc25a }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006bb950 }
	__asm { L_006bc25a: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_006bc291 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { jmp L_006bc27f }
	__asm { L_006bc268: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_006bc276 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006bb950 }
	__asm { L_006bc276: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_006bc291 }
	__asm { mov eax, dword ptr [edi] }
	__asm { L_006bc27f: }
	__asm { mov dword ptr [ecx], eax }
	__asm { test eax, eax }
	__asm { je L_006bc291 }
	__asm { mov ecx, 1 }
	__asm { add eax, 0x10 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006bc291: }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101c8[];
extern "C" char g_00e131bc[];
extern "C" char g_00e131c0[];
extern "C" char g_012de728[];
extern "C" void fn_004038a0();
extern "C" void fn_004115f0();
extern "C" void fn_006bb7e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006bc310
extern "C" __declspec(naked) void asm_006bc310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006bc385 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edi], 0 }
	__asm { jne L_006bc36c }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { jmp L_006bc387 }
	__asm { L_006bc36c: }
	__asm { mov ecx, edi }
	__asm { lea edx, [ecx + 1] }
	__asm { L_006bc371: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_006bc371 }
	__asm { sub ecx, edx }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { jmp L_006bc387 }
	__asm { L_006bc385: }
	__asm { xor esi, esi }
	__asm { L_006bc387: }
	__asm { push 0x6bbc80 }
	__asm { push 0x12de704 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004115f0 }
	__asm { mov ebx, dword ptr [g_012de728] }
	__asm { push ebx }
	__asm { call dword ptr [g_00e131bc] }
	__asm { add esp, 0xc }
	__asm { cmp eax, esi }
	__asm { je L_006bc3dd }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 1 }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006bc3d3 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006bc3d3: }
	__asm { push ebx }
	__asm { call dword ptr [g_00e131c0] }
	__asm { add esp, 0x14 }
	__asm { L_006bc3dd: }
	__asm { push edi }
	__asm { call dword ptr [g_00e101c8] }
	__asm { push eax }
	__asm { call fn_006bb7e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006bce90();
extern "C" void fn_006bcfd0();
extern "C" void fn_006bd130();
// FUNCTION: ROBLOXSTUDIO 0x006bcba0
extern "C" __declspec(naked) void asm_006bcba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16548 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006bcfd0 }
	__asm { mov ecx, eax }
	__asm { call fn_006bce90 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006bcc1e }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006bcc1e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006bcc1e }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bcc1e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006bcc44 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006bcc44: }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006bcfd0 }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006bd130 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006bcc89 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006bcc89 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006bcc89 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bcc89: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006bce90();
extern "C" void fn_006bcf40();
extern "C" void fn_006bcfd0();
// FUNCTION: ROBLOXSTUDIO 0x006bcca0
extern "C" __declspec(naked) void asm_006bcca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16570 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006bcfd0 }
	__asm { mov ecx, eax }
	__asm { call fn_006bce90 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test edi, edi }
	__asm { je L_006bcd32 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bcd31 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006bcd31 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bcd31: }
	__asm { pop ebx }
	__asm { L_006bcd32: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_006bcd42 }
	__asm { push esi }
	__asm { call fn_006bcf40 }
	__asm { L_006bcd42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006bcfd0();
extern "C" void fn_006bd130();
// FUNCTION: ROBLOXSTUDIO 0x006bcd60
extern "C" __declspec(naked) void asm_006bcd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16590 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006bcdab }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006bcdab: }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006bcfd0 }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006bd130 }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006bcdf3 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bcdf3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006bcdf3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bcdf3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006bc920();
// FUNCTION: ROBLOXSTUDIO 0x006bce10
extern "C" __declspec(naked) void asm_006bce10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53888 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_006bce45 }
	__asm { push eax }
	__asm { call fn_006bc920 }
	__asm { add esp, 4 }
	__asm { L_006bce45: }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006bce7b }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bce7a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006bce7a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bce7a: }
	__asm { pop edi }
	__asm { L_006bce7b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e131bc[];
// FUNCTION: ROBLOXSTUDIO 0x006bce90
extern "C" __declspec(naked) void asm_006bce90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e131bc] }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_006bcece }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_006bcedb }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006bcece: }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { L_006bcedb: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006bcef0
extern "C" __declspec(naked) void asm_006bcef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_006bcf35 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_006bcf2b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bcf2a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006bcf2a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bcf2a: }
	__asm { pop ebx }
	__asm { L_006bcf2b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_006bcf35: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006bce90();
extern "C" void fn_006bcfd0();
// FUNCTION: ROBLOXSTUDIO 0x006bd060
extern "C" __declspec(naked) void asm_006bd060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd496d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_006bcfd0 }
	__asm { mov ecx, eax }
	__asm { call fn_006bce90 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { test esi, esi }
	__asm { je L_006bd098 }
	__asm { mov esi, dword ptr [esi] }
	__asm { jmp L_006bd09a }
	__asm { L_006bd098: }
	__asm { xor esi, esi }
	__asm { L_006bd09a: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_006bd0e2 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bd0cf }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_006bd0cf }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_006bd0cf: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bd0e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e131bc[];
extern "C" char g_00e131c0[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006bd130
extern "C" __declspec(naked) void asm_006bd130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd508b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov ebx, 1 }
	__asm { test esi, esi }
	__asm { je L_006bd187 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_006bd189 }
	__asm { add eax, 4 }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jmp L_006bd189 }
	__asm { L_006bd187: }
	__asm { xor esi, esi }
	__asm { L_006bd189: }
	__asm { push edi }
	__asm { call dword ptr [g_00e131bc] }
	__asm { add esp, 4 }
	__asm { cmp eax, esi }
	__asm { je L_006bd1bf }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 1 }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006bd1b5 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { inc ebx }
	__asm { L_006bd1b5: }
	__asm { push edi }
	__asm { call dword ptr [g_00e131c0] }
	__asm { add esp, 0x14 }
	__asm { L_006bd1bf: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006bd1f3 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bd1f3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006bd1f3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bd1f3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403160();
extern "C" void fn_006bd3c0();
// FUNCTION: ROBLOXSTUDIO 0x006bd320
extern "C" __declspec(naked) void asm_006bd320()
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
	__asm { call fn_006bd3c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_006bd397 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bd396 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006bd396 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bd396: }
	__asm { pop ebx }
	__asm { L_006bd397: }
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
extern "C" void fn_006bd4f0();
// FUNCTION: ROBLOXSTUDIO 0x006bd450
extern "C" __declspec(naked) void asm_006bd450()
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
	__asm { call fn_006bd4f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_006bd4c7 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bd4c6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006bd4c6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bd4c6: }
	__asm { pop ebx }
	__asm { L_006bd4c7: }
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
extern "C" void fn_006bd620();
// FUNCTION: ROBLOXSTUDIO 0x006bd580
extern "C" __declspec(naked) void asm_006bd580()
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
	__asm { call fn_006bd620 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_006bd5f7 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bd5f6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006bd5f6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bd5f6: }
	__asm { pop ebx }
	__asm { L_006bd5f7: }
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

extern "C" void fn_008d1da0();
// FUNCTION: ROBLOXSTUDIO 0x006bd6b0
extern "C" __declspec(naked) void asm_006bd6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_008d1da0 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_006bd6e8 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006bd6e6 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006bd6e6: }
	__asm { mov eax, esi }
	__asm { L_006bd6e8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10260[];
extern "C" void fn_006bd6b0();
// FUNCTION: ROBLOXSTUDIO 0x006bd6f0
extern "C" __declspec(naked) void asm_006bd6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 4], 0xaaaaaa9 }
	__asm { jb L_006bd70b }
	__asm { push 0xf13d5c }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006bd70b: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_006bd6b0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { inc dword ptr [edi + 4] }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { mov edx, dword ptr [edi] }
	__asm { cmp ecx, edx }
	__asm { jne L_006bd72f }
	__asm { mov dword ptr [edx + 4], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_006bd74b }
	__asm { L_006bd72f: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_006bd741 }
	__asm { mov dword ptr [ecx], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp ecx, dword ptr [eax] }
	__asm { jne L_006bd74e }
	__asm { mov dword ptr [eax], ebx }
	__asm { jmp L_006bd74e }
	__asm { L_006bd741: }
	__asm { mov dword ptr [ecx + 8], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp ecx, dword ptr [eax + 8] }
	__asm { jne L_006bd74e }
	__asm { L_006bd74b: }
	__asm { mov dword ptr [eax + 8], ebx }
	__asm { L_006bd74e: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, ebx }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { jne L_006bd8db }
	__asm { push esi }
	__asm { mov edi, edi }
	__asm { L_006bd760: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, dword ptr [esi] }
	__asm { cmp ecx, edx }
	__asm { jne L_006bd81b }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { cmp byte ptr [edx + 0xc], 0 }
	__asm { je L_006bd821 }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_006bd7bc }
	__asm { mov eax, ecx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_006bd797 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_006bd797: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_006bd7a9 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { jmp L_006bd7b7 }
	__asm { L_006bd7a9: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_006bd7b4 }
	__asm { mov dword ptr [ecx], edx }
	__asm { jmp L_006bd7b7 }
	__asm { L_006bd7b4: }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { L_006bd7b7: }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_006bd7bc: }
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
	__asm { jne L_006bd7e6 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { L_006bd7e6: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { jne L_006bd7fe }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_006bd8ca }
	__asm { L_006bd7fe: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp edx, dword ptr [ecx + 8] }
	__asm { jne L_006bd811 }
	__asm { mov dword ptr [ecx + 8], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_006bd8ca }
	__asm { L_006bd811: }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_006bd8ca }
	__asm { L_006bd81b: }
	__asm { cmp byte ptr [edx + 0xc], 0 }
	__asm { jne L_006bd83e }
	__asm { L_006bd821: }
	__asm { mov byte ptr [ecx + 0xc], 1 }
	__asm { mov byte ptr [edx + 0xc], 1 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { jmp L_006bd8cd }
	__asm { L_006bd83e: }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_006bd87e }
	__asm { mov eax, ecx }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_006bd857 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_006bd857: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_006bd869 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { jmp L_006bd878 }
	__asm { L_006bd869: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_006bd876 }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { jmp L_006bd878 }
	__asm { L_006bd876: }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_006bd878: }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_006bd87e: }
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
	__asm { jne L_006bd8a8 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { L_006bd8a8: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { jne L_006bd8ba }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { jmp L_006bd8c8 }
	__asm { L_006bd8ba: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { jne L_006bd8c5 }
	__asm { mov dword ptr [ecx], esi }
	__asm { jmp L_006bd8c8 }
	__asm { L_006bd8c5: }
	__asm { mov dword ptr [ecx + 8], esi }
	__asm { L_006bd8c8: }
	__asm { mov dword ptr [esi], edx }
	__asm { L_006bd8ca: }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { L_006bd8cd: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { je L_006bd760 }
	__asm { pop esi }
	__asm { L_006bd8db: }
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

// FUNCTION: ROBLOXSTUDIO 0x006bd8f0
extern "C" __declspec(naked) void asm_006bd8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, ecx }
	__asm { je L_006bd984 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { lea ebx, [eax + 8] }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { nop }
	__asm { L_006bd910: }
	__asm { mov edx, dword ptr [ebx - 4] }
	__asm { mov edi, dword ptr [eax + esi] }
	__asm { test edx, edx }
	__asm { je L_006bd929 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_006bd929: }
	__asm { mov dword ptr [esi], edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { test edi, edi }
	__asm { je L_006bd95e }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006bd95b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006bd95b }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bd95b: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_006bd95e: }
	__asm { movzx eax, byte ptr [ebx] }
	__asm { mov byte ptr [esi + 8], al }
	__asm { movzx eax, byte ptr [ebx + 1] }
	__asm { mov byte ptr [esi + 9], al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esi, 0xc }
	__asm { add eax, esi }
	__asm { add ebx, 0xc }
	__asm { cmp eax, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { jne L_006bd910 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bd984: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006bd990
extern "C" __declspec(naked) void asm_006bd990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_006bd9de }
	__asm { add esi, 8 }
	__asm { L_006bd9a5: }
	__asm { test eax, eax }
	__asm { je L_006bd9d1 }
	__asm { mov ecx, dword ptr [esi - 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [esi - 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_006bd9c4 }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_006bd9c4: }
	__asm { movzx ecx, byte ptr [esi] }
	__asm { mov byte ptr [eax + 8], cl }
	__asm { movzx ecx, byte ptr [esi + 1] }
	__asm { mov byte ptr [eax + 9], cl }
	__asm { L_006bd9d1: }
	__asm { add esi, 0xc }
	__asm { add eax, 0xc }
	__asm { lea ecx, [esi - 8] }
	__asm { cmp ecx, edi }
	__asm { jne L_006bd9a5 }
	__asm { L_006bd9de: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006bd320();
extern "C" void fn_006bed10();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006bdca0
extern "C" __declspec(naked) void asm_006bdca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16613 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { fld qword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { fstp qword ptr [esi + 8] }
	__asm { fild dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { fstp qword ptr [esi + 0x18] }
	__asm { mov byte ptr [esi + 0x28], 1 }
	__asm { fldz }
	__asm { fstp qword ptr [esi + 0x20] }
	__asm { test ebx, ebx }
	__asm { je L_006bdd96 }
	__asm { push edi }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_006bdd31 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { call fn_006bed10 }
	__asm { lea ecx, [eax + ebx*4] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { jmp L_006bdd33 }
	__asm { L_006bdd31: }
	__asm { xor edi, edi }
	__asm { L_006bdd33: }
	__asm { push edi }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006bd320 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [esi], edx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { je L_006bdd81 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bdd81 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006bdd81 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bdd81: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_006bdd96: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0067d7a0();
extern "C" void fn_006bd450();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006bddb0
extern "C" __declspec(naked) void asm_006bddb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16633 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { fld qword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { fstp qword ptr [esi + 8] }
	__asm { fld qword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { fst qword ptr [esi + 0x10] }
	__asm { mov byte ptr [esi + 0x28], 1 }
	__asm { fstp qword ptr [esi + 0x18] }
	__asm { fldz }
	__asm { fstp qword ptr [esi + 0x20] }
	__asm { test ebx, ebx }
	__asm { je L_006bdea3 }
	__asm { push edi }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x18], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_006bde3e }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { call fn_0067d7a0 }
	__asm { lea ecx, [eax + ebx*8] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { jmp L_006bde40 }
	__asm { L_006bde3e: }
	__asm { xor edi, edi }
	__asm { L_006bde40: }
	__asm { push edi }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006bd450 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [esi], edx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { je L_006bde8e }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bde8e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006bde8e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bde8e: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_006bdea3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x006bdec0
extern "C" __declspec(naked) void asm_006bdec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53888 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax] }
	__asm { test edx, edx }
	__asm { je L_006bdf0c }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006bdf0c: }
	__asm { mov dword ptr [esi], edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { test edi, edi }
	__asm { je L_006bdf40 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bdf3f }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006bdf3f }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bdf3f: }
	__asm { pop ebx }
	__asm { L_006bdf40: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov word ptr [esi + 8], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101a4[];
extern "C" char g_00e131b0[];
extern "C" char g_00e131b4[];
extern "C" char g_00e36268[];
extern "C" char g_00e44898[];
extern "C" char g_01038228[];
extern "C" char g_012de64f[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040c260();
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
extern "C" void fn_006baa00();
extern "C" void fn_006bac70();
extern "C" void fn_006bc660();
extern "C" void fn_006bc960();
extern "C" void fn_006c53e0();
extern "C" void fn_006c5410();
extern "C" void fn_008b19b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006bdf60
extern "C" __declspec(naked) void asm_006bdf60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd167b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x94 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { fld qword ptr [g_00e44898] }
	__asm { lea ecx, [esi + 8] }
	__asm { fstp qword ptr [esi] }
	__asm { push edi }
	__asm { mov dword ptr [ecx], ebx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { test al, al }
	__asm { je L_006bdfde }
	__asm { test cl, 3 }
	__asm { je L_006bdfde }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006bdfcd }
	__asm { push 0x113 }
	__asm { push 0x10042f8 }
	__asm { push 0x1004338 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006bdfde }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006bdfcd: }
	__asm { movzx eax, al }
	__asm { push 0xe43b18 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006bdfde: }
	__asm { lea edi, [esi + 0xc] }
	__asm { push edi }
	__asm { call dword ptr [g_00e101a4] }
	__asm { mov al, byte ptr [g_012de64f] }
	__asm { test al, al }
	__asm { je L_006be003 }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0x100df30 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006be003: }
	__asm { lea ecx, [esi + 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { lea eax, [esi + 0x30] }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [eax], eax }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { lea eax, [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [eax], eax }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { fld qword ptr [g_00e36268] }
	__asm { fst qword ptr [esi + 0x60] }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { fldz }
	__asm { mov byte ptr [esi + 0x80], 1 }
	__asm { fst qword ptr [esi + 0x70] }
	__asm { fst qword ptr [esi + 0x78] }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { fxch st(1) }
	__asm { fst qword ptr [esi + 0x90] }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { fxch st(1) }
	__asm { mov byte ptr [esi + 0xb0], 1 }
	__asm { fst qword ptr [esi + 0xa0] }
	__asm { fst qword ptr [esi + 0xa8] }
	__asm { mov dword ptr [esi + 0xb8], 0 }
	__asm { mov dword ptr [esi + 0xbc], 0 }
	__asm { fxch st(1) }
	__asm { fst qword ptr [esi + 0xc0] }
	__asm { mov dword ptr [esi + 0xc8], 0 }
	__asm { fxch st(1) }
	__asm { mov byte ptr [esi + 0xe0], 1 }
	__asm { fst qword ptr [esi + 0xd0] }
	__asm { fst qword ptr [esi + 0xd8] }
	__asm { lea eax, [esi + 0xe8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { fxch st(1) }
	__asm { fstp qword ptr [eax + 8] }
	__asm { mov byte ptr [eax + 0x28], 1 }
	__asm { fst qword ptr [eax + 0x10] }
	__asm { fst qword ptr [eax + 0x18] }
	__asm { fstp qword ptr [eax + 0x20] }
	__asm { lea edi, [eax + 0x30] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 0x15 }
	__asm { call fn_006c5410 }
	__asm { mov byte ptr [edi + 8], 1 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { fld qword ptr [g_00e36268] }
	__asm { fst qword ptr [edi + 0x18] }
	__asm { fldz }
	__asm { fst qword ptr [edi + 0x20] }
	__asm { mov byte ptr [edi + 0x38], 1 }
	__asm { fst qword ptr [edi + 0x28] }
	__asm { fst qword ptr [edi + 0x30] }
	__asm { mov dword ptr [esi + 0x158], 0 }
	__asm { mov dword ptr [esi + 0x15c], 0 }
	__asm { fxch st(1) }
	__asm { fstp qword ptr [esi + 0x160] }
	__asm { mov byte ptr [esi + 0x180], 1 }
	__asm { fld1 }
	__asm { fst qword ptr [esi + 0x168] }
	__asm { fstp qword ptr [esi + 0x170] }
	__asm { fstp qword ptr [esi + 0x178] }
	__asm { lea edi, [esi + 0x188] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 0x1d }
	__asm { call fn_006c53e0 }
	__asm { mov byte ptr [edi + 8], 1 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { fld qword ptr [g_00e36268] }
	__asm { fstp qword ptr [edi + 0x18] }
	__asm { mov byte ptr [edi + 0x38], 1 }
	__asm { fldz }
	__asm { fst qword ptr [edi + 0x20] }
	__asm { fst qword ptr [edi + 0x28] }
	__asm { fstp qword ptr [edi + 0x30] }
	__asm { lea edi, [esi + 0x1c8] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 0x21 }
	__asm { call fn_006c53e0 }
	__asm { mov byte ptr [edi + 8], 1 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { fld qword ptr [g_00e36268] }
	__asm { fstp qword ptr [edi + 0x18] }
	__asm { mov byte ptr [edi + 0x38], 1 }
	__asm { fldz }
	__asm { fst qword ptr [edi + 0x20] }
	__asm { fst qword ptr [edi + 0x28] }
	__asm { fst qword ptr [edi + 0x30] }
	__asm { fld qword ptr [g_01038228] }
	__asm { mov dword ptr [esi + 0x208], 0 }
	__asm { fstp qword ptr [esi + 0x210] }
	__asm { mov dword ptr [esi + 0x220], 0 }
	__asm { mov dword ptr [esi + 0x224], 0 }
	__asm { fstp qword ptr [esi + 0x218] }
	__asm { mov dword ptr [esi + 0x228], 0 }
	__asm { push 1 }
	__asm { lea ecx, [esi + 0x230] }
	__asm { mov byte ptr [ebp - 4], 0x26 }
	__asm { mov dword ptr [esi + 0x22c], 0 }
	__asm { call fn_006bc960 }
	__asm { mov dword ptr [esi + 0x234], 0 }
	__asm { push 4 }
	__asm { mov byte ptr [ebp - 4], 0x28 }
	__asm { mov dword ptr [esi + 0x238], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { test edi, edi }
	__asm { je L_006be351 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x20], 0x6c0a00 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_006be2cb }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, 0xe44828 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { jmp L_006be2d2 }
	__asm { L_006be2cb: }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { L_006be2d2: }
	__asm { push 0xe43e30 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x80] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0x2a }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_006bc660 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { mov ebx, 3 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0x2b }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_006baa00 }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0x2c }
	__asm { call fn_006bac70 }
	__asm { add esp, 0x1c }
	__asm { mov eax, dword ptr [ebp - 0x60] }
	__asm { mov byte ptr [ebp - 4], 0x2e }
	__asm { test eax, eax }
	__asm { je L_006be344 }
	__asm { test al, 1 }
	__asm { jne L_006be33d }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006be33d }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006be33d: }
	__asm { mov dword ptr [ebp - 0x60], 0 }
	__asm { L_006be344: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e131b4] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { jmp L_006be353 }
	__asm { L_006be351: }
	__asm { xor eax, eax }
	__asm { L_006be353: }
	__asm { mov edi, dword ptr [esi + 0x234] }
	__asm { mov dword ptr [ebp - 4], 0x30 }
	__asm { mov dword ptr [esi + 0x234], eax }
	__asm { test edi, edi }
	__asm { je L_006be37b }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e131b0] }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006be37b: }
	__asm { mov dword ptr [ebp - 4], 0x2f }
	__asm { test bl, 2 }
	__asm { je L_006be3b4 }
	__asm { mov eax, dword ptr [ebp - 0x80] }
	__asm { and ebx, 0xfffffffd }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test eax, eax }
	__asm { je L_006be3b4 }
	__asm { test al, 1 }
	__asm { jne L_006be3ad }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006be3ad }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006be3ad: }
	__asm { mov dword ptr [ebp - 0x80], 0 }
	__asm { L_006be3b4: }
	__asm { mov dword ptr [ebp - 4], 0x28 }
	__asm { test bl, 1 }
	__asm { je L_006be3e0 }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { test eax, eax }
	__asm { je L_006be3e0 }
	__asm { test al, 1 }
	__asm { jne L_006be3e0 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006be3e0 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006be3e0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006be400
extern "C" __declspec(naked) void asm_006be400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53888 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov esi, dword ptr [ebx + 0x44] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006be456 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006be456 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006be456 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006be456: }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006be487 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006be487 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006be487 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006be487: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e131c0[];
// FUNCTION: ROBLOXSTUDIO 0x006be4d0
extern "C" __declspec(naked) void asm_006be4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53888 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { call dword ptr [g_00e131c0] }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006be54d }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006be54d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006be54d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006be54d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e101a8[];
extern "C" char g_00e131b0[];
extern "C" char g_00e131c8[];
extern "C" char g_012de64f[];
extern "C" char g_012de651[];
extern "C" void fn_0041fe80();
extern "C" void fn_006b8a90();
extern "C" void fn_006bc9a0();
extern "C" void fn_006bca40();
extern "C" void fn_006be400();
extern "C" void fn_006bf0e0();
extern "C" void fn_006c2710();
extern "C" void fn_00971be0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006be5b0
extern "C" __declspec(naked) void asm_006be5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1689b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov al, byte ptr [g_012de651] }
	__asm { mov dword ptr [ebp - 4], 0xf }
	__asm { test al, al }
	__asm { je L_006be5f4 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe43e50 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006be5f4: }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x230] }
	__asm { call fn_006bca40 }
	__asm { mov ecx, dword ptr [edi + 0x234] }
	__asm { call dword ptr [g_00e131c8] }
	__asm { mov ecx, edi }
	__asm { call fn_006c2710 }
	__asm { mov esi, dword ptr [edi + 0x234] }
	__asm { mov byte ptr [ebp - 4], 0xe }
	__asm { test esi, esi }
	__asm { je L_006be633 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e131b0] }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006be633: }
	__asm { lea ecx, [edi + 0x230] }
	__asm { call fn_006bc9a0 }
	__asm { mov eax, dword ptr [edi + 0x220] }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { test eax, eax }
	__asm { je L_006be68b }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { push ecx }
	__asm { push dword ptr [edi + 0x224] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [edi + 0x220] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0x220], 0 }
	__asm { mov dword ptr [edi + 0x224], 0 }
	__asm { mov dword ptr [edi + 0x228], 0 }
	__asm { L_006be68b: }
	__asm { mov ebx, dword ptr [edi + 0x1dc] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { test ebx, ebx }
	__asm { je L_006be6c0 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006be6c0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006be6c0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006be6c0: }
	__asm { mov ebx, dword ptr [edi + 0x19c] }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { test ebx, ebx }
	__asm { je L_006be6f2 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006be6f2 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006be6f2 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006be6f2: }
	__asm { mov ebx, dword ptr [edi + 0x15c] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { test ebx, ebx }
	__asm { je L_006be724 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006be724 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006be724 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006be724: }
	__asm { lea ecx, [edi + 0xe8] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_006be400 }
	__asm { mov ebx, dword ptr [edi + 0xbc] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { test ebx, ebx }
	__asm { je L_006be765 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006be765 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006be765 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006be765: }
	__asm { mov ebx, dword ptr [edi + 0x8c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test ebx, ebx }
	__asm { je L_006be797 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006be797 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006be797 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006be797: }
	__asm { mov ebx, dword ptr [edi + 0x5c] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { test ebx, ebx }
	__asm { je L_006be7c6 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006be7c6 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006be7c6 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006be7c6: }
	__asm { mov ebx, dword ptr [edi + 0x54] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test ebx, ebx }
	__asm { je L_006be7f4 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006be7f4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_006be7f4 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006be7f4: }
	__asm { mov eax, dword ptr [edi + 0x48] }
	__asm { lea ecx, [edi + 0x48] }
	__asm { cmp eax, ecx }
	__asm { je L_006be815 }
	__asm { mov edi, edi }
	__asm { L_006be800: }
	__asm { lea edx, [eax] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { cmp eax, ecx }
	__asm { jne L_006be800 }
	__asm { L_006be815: }
	__asm { mov dword ptr [ecx], ecx }
	__asm { mov dword ptr [ecx + 4], ecx }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_006be85c }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { push ecx }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { push eax }
	__asm { call fn_00971be0 }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { L_006be85c: }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { lea ecx, [edi + 0x30] }
	__asm { cmp eax, ecx }
	__asm { je L_006be87b }
	__asm { L_006be866: }
	__asm { lea edx, [eax] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { cmp eax, ecx }
	__asm { jne L_006be866 }
	__asm { L_006be87b: }
	__asm { mov dword ptr [ecx], ecx }
	__asm { mov dword ptr [ecx + 4], ecx }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x24] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006bf0e0 }
	__asm { push dword ptr [edi + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { add edi, 0xc }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e101a8] }
	__asm { mov al, byte ptr [g_012de64f] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test al, al }
	__asm { je L_006be8d6 }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0x100df10 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006be8d6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012de7c8[];
extern "C" char g_012de7f2[];
extern "C" void fn_0069c040();
extern "C" void fn_006b9740();
extern "C" void fn_006bdec0();
extern "C" void fn_006bf4b0();
extern "C" void fn_006c0240();
extern "C" void fn_006c0ca0();
// FUNCTION: ROBLOXSTUDIO 0x006beb40
extern "C" __declspec(naked) void asm_006beb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd168d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { lea edi, [ebx + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_006bebce }
	__asm { mov esi, dword ptr [ebx + 0x24] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x24] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_006bf4b0 }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_006bebce }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006bebb9 }
	__asm { push 0x120 }
	__asm { push 0xe43cec }
	__asm { push 0xe43f50 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006bebce }
	__asm { L_006bebb9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe43f78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006bebce: }
	__asm { movzx eax, byte ptr [g_012de7f2] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x24] }
	__asm { call fn_0069c040 }
	__asm { cmp byte ptr [g_012de7c8], 0 }
	__asm { je L_006becb0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0x8c], 0 }
	__asm { je L_006becad }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006bec5d }
	__asm { mov edx, dword ptr [ebx + 0x3c] }
	__asm { mov eax, dword ptr [ebx + 0x38] }
	__asm { cmp eax, edx }
	__asm { je L_006bec5d }
	__asm { L_006bec18: }
	__asm { cmp dword ptr [eax], ecx }
	__asm { je L_006bec23 }
	__asm { add eax, 0xc }
	__asm { cmp eax, edx }
	__asm { jne L_006bec18 }
	__asm { L_006bec23: }
	__asm { cmp eax, edx }
	__asm { je L_006bec5d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006bec48 }
	__asm { push 0x127 }
	__asm { push 0xe43cec }
	__asm { push 0xe43fe8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006bec5d }
	__asm { L_006bec48: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe44050 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006bec5d: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_006bdec0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x38] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006c0240 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006becbd }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006becbd }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006becbd }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { jmp L_006becbd }
	__asm { L_006becad: }
	__asm { push ecx }
	__asm { jmp L_006becb3 }
	__asm { L_006becb0: }
	__asm { push dword ptr [ebp + 8] }
	__asm { L_006becb3: }
	__asm { mov ecx, ebx }
	__asm { call fn_006c0ca0 }
	__asm { or ebx, 0xffffffff }
	__asm { L_006becbd: }
	__asm { push edi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006becf5 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006becf5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006becf5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006becf5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
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

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006c1d90();
// FUNCTION: ROBLOXSTUDIO 0x006c1bb0
extern "C" __declspec(naked) void asm_006c1bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd418b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_006c1c04 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006c1c04: }
	__asm { mov ecx, edi }
	__asm { call fn_006c1d90 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006c1c3f }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006c1c3f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006c1c3f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c1c3f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_006c1d00();
extern "C" void fn_00b9e010();
// FUNCTION: ROBLOXSTUDIO 0x006c1c60
extern "C" __declspec(naked) void asm_006c1c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16a8b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], ebx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push ebx }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006c1d00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_006c1cd4 }
	__asm { lea ecx, [edi + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006c1cd4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006c1cd4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c1cd4: }
	__asm { test ebx, ebx }
	__asm { je L_006c1ce1 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00b9e010 }
	__asm { L_006c1ce1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008cb160();
// FUNCTION: ROBLOXSTUDIO 0x006c1d90
extern "C" __declspec(naked) void asm_006c1d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd418b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_006c1de1 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006c1de1: }
	__asm { mov esi, 0xe45488 }
	__asm { mov ecx, esi }
	__asm { call fn_008cb160 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { mov dword ptr [edi], esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006c1e2a }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006c1e2a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006c1e2a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c1e2a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00c7a700();
// FUNCTION: ROBLOXSTUDIO 0x006c1e40
extern "C" __declspec(naked) void asm_006c1e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e491 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov esi, 1 }
	__asm { test eax, eax }
	__asm { je L_006c1e91 }
	__asm { add eax, 4 }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006c1e91: }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_00c7a700 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { test eax, eax }
	__asm { je L_006c1eb8 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { inc esi }
	__asm { L_006c1eb8: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test esi, esi }
	__asm { je L_006c1eed }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006c1eed }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006c1eed }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c1eed: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006c1f1b }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006c1f1b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [esi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_006c1f1b }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_006c1f1b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e131b0[];
extern "C" void fn_006c2a00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006c1ff0
extern "C" __declspec(naked) void asm_006c1ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16ace }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_006c2a00 }
	__asm { mov esi, dword ptr [ebx + 0x18] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006c204f }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006c204f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006c204f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c204f: }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006c206b }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e131b0] }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006c206b: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_006c2088 }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006c2088 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c2088: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00534440();
// FUNCTION: ROBLOXSTUDIO 0x006c22b0
extern "C" __declspec(naked) void asm_006c22b0()
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
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov eax, dword ptr [ebx + 0x224] }
	__asm { sub eax, dword ptr [ebx + 0x220] }
	__asm { and eax, 0xfffffff8 }
	__asm { cmp eax, 8 }
	__asm { jne L_006c22f8 }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006c22f8: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00534440 }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_006c236f }
	__asm { mov esi, dword ptr [ebx + 0x220] }
	__asm { cmp esi, dword ptr [ebx + 0x224] }
	__asm { je L_006c236f }
	__asm { L_006c2323: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ebx, dword ptr [eax + 0x14] }
	__asm { test ebx, ebx }
	__asm { je L_006c2361 }
	__asm { mov edi, dword ptr [edi + 0x4c] }
	__asm { test edi, edi }
	__asm { je L_006c233c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x14] }
	__asm { mov edi, eax }
	__asm { L_006c233c: }
	__asm { mov ecx, dword ptr [ebx + 0x4c] }
	__asm { test ecx, ecx }
	__asm { je L_006c234a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x14] }
	__asm { mov ecx, eax }
	__asm { L_006c234a: }
	__asm { cmp edi, ecx }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { jne L_006c2361 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_006c23ba }
	__asm { L_006c2361: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add esi, 8 }
	__asm { cmp esi, dword ptr [eax + 0x224] }
	__asm { jne L_006c2323 }
	__asm { L_006c236f: }
	__asm { xor bl, bl }
	__asm { L_006c2371: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006c23a5 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006c23a5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006c23a5 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_006c23a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006c23ba: }
	__asm { mov bl, 1 }
	__asm { jmp L_006c2371 }
}

extern "C" char g_00e131b0[];
extern "C" char g_00e131b4[];
extern "C" void fn_006b98c0();
extern "C" void fn_006baa00();
extern "C" void fn_006bac70();
extern "C" void fn_006bc660();
extern "C" void fn_006bc950();
extern "C" void fn_006c1bb0();
extern "C" void fn_006c1c60();
extern "C" void fn_006c1e40();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006c23c0
extern "C" __declspec(naked) void asm_006c23c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16b51 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x84 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { je L_006c2431 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov byte ptr [ecx + 0x1c], 1 }
	__asm { jmp L_006c2433 }
	__asm { L_006c2431: }
	__asm { xor ecx, ecx }
	__asm { L_006c2433: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_006c1c60 }
	__asm { mov ebx, 1 }
	__asm { push 0x12df2d0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_006bc950 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push 0xe45034 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { push 4 }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_006c2545 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006c24a7 }
	__asm { add eax, 4 }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006c24a7: }
	__asm { push 0x6c2a90 }
	__asm { push edx }
	__asm { call fn_006c1e40 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x90] }
	__asm { call fn_006c1bb0 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { cmovae eax, dword ptr [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x90] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x10], 3 }
	__asm { call fn_006bc660 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x70] }
	__asm { mov ebx, 7 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_006baa00 }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { call fn_006bac70 }
	__asm { add esp, 0x1c }
	__asm { mov eax, dword ptr [ebp - 0x70] }
	__asm { mov byte ptr [ebp - 4], bl }
	__asm { test eax, eax }
	__asm { je L_006c253b }
	__asm { test al, 1 }
	__asm { jne L_006c2534 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006c2534 }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006c2534: }
	__asm { mov dword ptr [ebp - 0x70], 0 }
	__asm { L_006c253b: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e131b4] }
	__asm { jmp L_006c2547 }
	__asm { L_006c2545: }
	__asm { xor edi, edi }
	__asm { L_006c2547: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 9 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { test ecx, ecx }
	__asm { je L_006c256e }
	__asm { call dword ptr [g_00e131b0] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006c256e: }
	__asm { mov dword ptr [ebp - 4], 8 }
	__asm { test bl, 4 }
	__asm { je L_006c25a7 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { and ebx, 0xfffffffb }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test eax, eax }
	__asm { je L_006c25a7 }
	__asm { test al, 1 }
	__asm { jne L_006c25a0 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006c25a0 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006c25a0: }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { L_006c25a7: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test bl, 2 }
	__asm { je L_006c25df }
	__asm { mov eax, dword ptr [ebp - 0x90] }
	__asm { and ebx, 0xfffffffd }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test eax, eax }
	__asm { je L_006c25df }
	__asm { test al, 1 }
	__asm { jne L_006c25df }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006c25df }
	__asm { lea ecx, [ebp - 0x88] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006c25df: }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_006c25f0 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006c25f0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" void fn_005e4b50();
// FUNCTION: ROBLOXSTUDIO 0x006c2740
extern "C" __declspec(naked) void asm_006c2740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16b70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea edi, [ebx + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { cmp esi, eax }
	__asm { je L_006c28d6 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_006c2787: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov edx, dword ptr [edi + 0x10] }
	__asm { add ecx, 0x60 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_006c279a }
	__asm { mov ebx, dword ptr [edi] }
	__asm { jmp L_006c279c }
	__asm { L_006c279a: }
	__asm { mov ebx, edi }
	__asm { L_006c279c: }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jb L_006c27aa }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_006c27aa: }
	__asm { cmp eax, edx }
	__asm { cmovb edx, eax }
	__asm { test edx, edx }
	__asm { je L_006c280b }
	__asm { sub edx, 4 }
	__asm { jb L_006c27c9 }
	__asm { L_006c27b8: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [ebx] }
	__asm { jne L_006c27ce }
	__asm { add ecx, 4 }
	__asm { add ebx, 4 }
	__asm { sub edx, 4 }
	__asm { jae L_006c27b8 }
	__asm { L_006c27c9: }
	__asm { cmp edx, -4 }
	__asm { je L_006c2802 }
	__asm { L_006c27ce: }
	__asm { mov al, byte ptr [ecx] }
	__asm { cmp al, byte ptr [ebx] }
	__asm { jne L_006c27fb }
	__asm { cmp edx, -3 }
	__asm { je L_006c2802 }
	__asm { mov al, byte ptr [ecx + 1] }
	__asm { cmp al, byte ptr [ebx + 1] }
	__asm { jne L_006c27fb }
	__asm { cmp edx, -2 }
	__asm { je L_006c2802 }
	__asm { mov al, byte ptr [ecx + 2] }
	__asm { cmp al, byte ptr [ebx + 2] }
	__asm { jne L_006c27fb }
	__asm { cmp edx, -1 }
	__asm { je L_006c2802 }
	__asm { mov al, byte ptr [ecx + 3] }
	__asm { cmp al, byte ptr [ebx + 3] }
	__asm { je L_006c2802 }
	__asm { L_006c27fb: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { jmp L_006c2804 }
	__asm { L_006c2802: }
	__asm { xor eax, eax }
	__asm { L_006c2804: }
	__asm { test eax, eax }
	__asm { jne L_006c2821 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_006c280b: }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { cmp eax, ecx }
	__asm { jae L_006c2817 }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_006c281f }
	__asm { L_006c2817: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp + 8], ecx }
	__asm { setne al }
	__asm { L_006c281f: }
	__asm { test eax, eax }
	__asm { L_006c2821: }
	__asm { sete al }
	__asm { test al, al }
	__asm { je L_006c2885 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { test eax, eax }
	__asm { je L_006c2844 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006c2844: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_005e4b50 }
	__asm { mov ebx, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_006c2885 }
	__asm { lea eax, [ebx + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006c2885 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006c2885 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c2885: }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_006c28c7 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_006c28ac }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_006c28c7 }
	__asm { mov edi, edi }
	__asm { L_006c28a0: }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_006c28a0 }
	__asm { jmp L_006c28c7 }
	__asm { L_006c28ac: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_006c28c5 }
	__asm { L_006c28b5: }
	__asm { cmp esi, dword ptr [eax + 8] }
	__asm { jne L_006c28c5 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_006c28b5 }
	__asm { L_006c28c5: }
	__asm { mov esi, eax }
	__asm { L_006c28c7: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp esi, dword ptr [eax + 0x24] }
	__asm { jne L_006c2787 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { L_006c28d6: }
	__asm { push edi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x006c31e0
extern "C" __declspec(naked) void asm_006c31e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { test edx, edx }
	__asm { je L_006c325f }
	__asm { cmp edx, 1 }
	__asm { je L_006c325f }
	__asm { cmp edx, 2 }
	__asm { jne L_006c3229 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [eax + 8] }
	__asm { test edi, edi }
	__asm { je L_006c3248 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006c3248 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_006c3248 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_006c3229: }
	__asm { cmp edx, 3 }
	__asm { jne L_006c324c }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x11dd1f0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { L_006c3248: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c324c: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0x11dd1f0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c325f: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_006c3289 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { test eax, eax }
	__asm { je L_006c3289 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006c3289: }
	__asm { cmp edx, 1 }
	__asm { jne L_006c3248 }
	__asm { mov edi, dword ptr [edi + 8] }
	__asm { test edi, edi }
	__asm { je L_006c3248 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006c3248 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_006c3248 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 8] }
}

extern "C" char g_00e102c4[];
extern "C" char g_00e102d4[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10328[];
extern "C" char g_00e10438[];
extern "C" char g_012de648[];
extern "C" void fn_00423a00();
extern "C" void fn_00424610();
extern "C" void fn_004276b0();
extern "C" void fn_006b96c0();
extern "C" void fn_006c54a0();
extern "C" void fn_006c5500();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006c32c0
extern "C" __declspec(naked) void asm_006c32c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16c25 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xdc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov ecx, dword ptr [g_012de648] }
	__asm { test ecx, ecx }
	__asm { je L_006c34d8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006c34d8 }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { je L_006c34d8 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_006c54a0 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x7c] }
	__asm { mov dword ptr [ebp - 0xe4], 0x1004fbc }
	__asm { mov dword ptr [ebp - 0xd4], 0x1004fb4 }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xcc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xe4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e10328] }
	__asm { mov eax, dword ptr [ebp - 0xe4] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xe4], 0xe18340 }
	__asm { mov eax, dword ptr [ebp - 0xe4] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ebp + ecx - 0xe8], eax }
	__asm { lea ecx, [ebp - 0xcc] }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [ebp - 0xcc], 0xe1827c }
	__asm { mov dword ptr [ebp - 0x94], 0 }
	__asm { mov dword ptr [ebp - 0x90], 0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { cmp dword ptr [eax + 0x90], 3 }
	__asm { jne L_006c343d }
	__asm { sub eax, -0x80 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { fld qword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { add eax, 0x60 }
	__asm { mov ecx, dword ptr [eax + 0x30] }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_006c33ea }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006c33ea: }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push 0xe45054 }
	__asm { push ecx }
	__asm { push 0xe45070 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xd4] }
	__asm { push 0xe4507c }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e102c4] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10438] }
	__asm { jmp L_006c3483 }
	__asm { L_006c343d: }
	__asm { mov ecx, dword ptr [eax + 0x90] }
	__asm { add eax, 0x60 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_006c344e }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006c344e: }
	__asm { push ecx }
	__asm { push 0xe45070 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xd4] }
	__asm { push 0xe4507c }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e102c4] }
	__asm { L_006c3483: }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xe4] }
	__asm { call fn_00424610 }
	__asm { mov esi, eax }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { jb L_006c34a0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_006c34a0: }
	__asm { mov ecx, dword ptr [g_012de648] }
	__asm { test ecx, ecx }
	__asm { je L_006c34b0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { jmp L_006c34b2 }
	__asm { L_006c34b0: }
	__asm { xor eax, eax }
	__asm { L_006c34b2: }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call fn_006b96c0 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_006c34cd }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006c34cd: }
	__asm { lea ecx, [ebp - 0xe4] }
	__asm { call fn_00423a00 }
	__asm { L_006c34d8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006bca40();
extern "C" void fn_006c0ca0();
// FUNCTION: ROBLOXSTUDIO 0x006c3520
extern "C" __declspec(naked) void asm_006c3520()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [eax + 0x90], 0 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { cmp byte ptr [eax + 0x94], 0 }
	__asm { je L_006c354e }
	__asm { mov ecx, dword ptr [eax + 0xd4] }
	__asm { test ecx, ecx }
	__asm { je L_006c3557 }
	__asm { call fn_006bca40 }
	__asm { jmp L_006c3557 }
	__asm { L_006c354e: }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { push eax }
	__asm { call fn_006c0ca0 }
	__asm { L_006c3557: }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { test esi, esi }
	__asm { je L_006c3594 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006c3594 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006c3594 }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_006c3594: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e131bc[];
extern "C" char g_00e131c0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012de7d8[];
extern "C" char g_012de7dc[];
extern "C" void fn_00421e70();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006bc920();
extern "C" void fn_006bc950();
extern "C" void fn_006c4140();
extern "C" void fn_006c4a90();
extern "C" void fn_006c4cb0();
extern "C" void fn_006c54a0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006c3610
extern "C" __declspec(naked) void asm_006c3610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4dcf8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov esi, dword ptr [ebx + 0x14] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_006c54a0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x80], edx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x84], eax }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { add esp, 4 }
	__asm { push dword ptr [eax + 0x84] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { push dword ptr [eax + 0x80] }
	__asm { push eax }
	__asm { call fn_006c4140 }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { call fn_006c4cb0 }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { add eax, 0x208 }
	__asm { push eax }
	__asm { call fn_006bc950 }
	__asm { mov edi, dword ptr [g_00e131bc] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006c36dc }
	__asm { push 0x12de7d8 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_006c36dc }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_006c36dc }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006c36c7 }
	__asm { push 0x87 }
	__asm { push 0xe45098 }
	__asm { push 0xe45160 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006c36dc }
	__asm { L_006c36c7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe45178 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006c36dc: }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { push 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_006c36f9 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_006c36fb }
	__asm { L_006c36f9: }
	__asm { xor esi, esi }
	__asm { L_006c36fb: }
	__asm { push 0x12de7d8 }
	__asm { call edi }
	__asm { add esp, 4 }
	__asm { mov edi, 1 }
	__asm { cmp eax, esi }
	__asm { je L_006c373f }
	__asm { mov eax, dword ptr [g_012de7d8] }
	__asm { push edi }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [g_012de7dc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006c3731 }
	__asm { add eax, 4 }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006c3731: }
	__asm { push 0x12de7d8 }
	__asm { call dword ptr [g_00e131c0] }
	__asm { add esp, 0x14 }
	__asm { L_006c373f: }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { push 0 }
	__asm { add ecx, 8 }
	__asm { call fn_006b97e0 }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { lea edx, [ebp - 0x38] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x10] }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ebx, eax }
	__asm { je L_006c37b9 }
	__asm { push 0x12de7d8 }
	__asm { call dword ptr [g_00e131bc] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_006c3779 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_006c377b }
	__asm { L_006c3779: }
	__asm { xor ecx, ecx }
	__asm { L_006c377b: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp ecx, dword ptr [eax + 0x14] }
	__asm { je L_006c37b9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006c37a4 }
	__asm { push 0x8f }
	__asm { push 0xe45098 }
	__asm { push 0xe451e8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006c37b9 }
	__asm { L_006c37a4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe45208 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006c37b9: }
	__asm { push 4 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { je L_006c37d1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { jmp L_006c37d3 }
	__asm { L_006c37d1: }
	__asm { xor esi, esi }
	__asm { L_006c37d3: }
	__asm { push 0x12de7d8 }
	__asm { call dword ptr [g_00e131bc] }
	__asm { add esp, 4 }
	__asm { cmp eax, esi }
	__asm { je L_006c3817 }
	__asm { mov eax, dword ptr [g_012de7d8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [g_012de7dc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_006c3809 }
	__asm { add eax, 4 }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006c3809: }
	__asm { push 0x12de7d8 }
	__asm { call dword ptr [g_00e131c0] }
	__asm { add esp, 0x14 }
	__asm { L_006c3817: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, 0x208 }
	__asm { push eax }
	__asm { call fn_006bc920 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { add esp, 4 }
	__asm { push ebx }
	__asm { call fn_006c4a90 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00421e70 }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx + 0x20], ecx }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { cmp esi, dword ptr [edx + 0x24] }
	__asm { je L_006c388a }
	__asm { test esi, esi }
	__asm { je L_006c386d }
	__asm { lea eax, [esi + 8] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { inc ecx }
	__asm { L_006c386d: }
	__asm { mov ecx, dword ptr [edx + 0x24] }
	__asm { test ecx, ecx }
	__asm { je L_006c3887 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006c3884 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c3884: }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { L_006c3887: }
	__asm { mov dword ptr [edx + 0x24], esi }
	__asm { L_006c388a: }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006c38bb }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006c38bb }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006c38bb }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c38bb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005e4b50();
extern "C" void fn_006b9740();
extern "C" void fn_006c23c0();
extern "C" void fn_006c6650();
// FUNCTION: ROBLOXSTUDIO 0x006c3b40
extern "C" __declspec(naked) void asm_006c3b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16c60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { call fn_006c6650 }
	__asm { add esp, 4 }
	__asm { add esi, 0xc }
	__asm { mov edi, eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_006c3ba2 }
	__asm { cmp eax, 0x65 }
	__asm { jl L_006c3b9d }
	__asm { add eax, -0x64 }
	__asm { imul edi, eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { jmp L_006c3ba2 }
	__asm { L_006c3b9d: }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { L_006c3ba2: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_006c3be4 }
	__asm { test edi, edi }
	__asm { jg L_006c3be4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006c3bd3 }
	__asm { push 0x72 }
	__asm { push 0xe45098 }
	__asm { push 0xe450e0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006c3be4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006c3bd3: }
	__asm { movzx eax, al }
	__asm { push 0xe450f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006c3be4: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { lea ebx, [ecx + 0x220] }
	__asm { mov dword ptr [ecx + 0x22c], edi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { sub eax, dword ptr [ebx] }
	__asm { sar eax, 3 }
	__asm { cmp eax, edi }
	__asm { jae L_006c3c5e }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { L_006c3c02: }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_006c23c0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_005e4b50 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_006c3c4c }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006c3c4c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006c3c4c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c3c4c: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { sub eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { sar eax, 3 }
	__asm { cmp eax, esi }
	__asm { jb L_006c3c02 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { L_006c3c5e: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e101a8[];
extern "C" char g_012de64f[];
extern "C" char g_012de651[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0041fe80();
extern "C" void fn_006b8a90();
extern "C" void fn_006b8aa8();
extern "C" void fn_006b9740();
extern "C" void fn_006bc920();
extern "C" void fn_006be400();
extern "C" void fn_006c41b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006c4220
extern "C" __declspec(naked) void asm_006c4220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16e0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0xc }
	__asm { je L_006c42e2 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { lea eax, [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_006c4298 }
	__asm { cmp ecx, eax }
	__asm { je L_006c4298 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006c4283 }
	__asm { push 0x74 }
	__asm { push 0xe45548 }
	__asm { push 0xe4558c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006c4298 }
	__asm { L_006c4283: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe455b8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006c4298: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006c42e2 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { lea eax, [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_006c42e2 }
	__asm { cmp ecx, eax }
	__asm { je L_006c42e2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006c42cd }
	__asm { push 0x75 }
	__asm { push 0xe45548 }
	__asm { push 0xe45638 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006c42e2 }
	__asm { L_006c42cd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe45668 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006c42e2: }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { sub eax, dword ptr [esi + 0x40] }
	__asm { or ebx, 0xffffffff }
	__asm { sar eax, 3 }
	__asm { test eax, eax }
	__asm { je L_006c4342 }
	__asm { L_006c42f2: }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax - 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov edi, dword ptr [esi + 0x44] }
	__asm { cmp dword ptr [esi + 0x40], edi }
	__asm { je L_006c4335 }
	__asm { mov edi, dword ptr [edi - 4] }
	__asm { test edi, edi }
	__asm { je L_006c4331 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006c4331 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006c4331 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c4331: }
	__asm { add dword ptr [esi + 0x44], -8 }
	__asm { L_006c4335: }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { sub eax, dword ptr [esi + 0x40] }
	__asm { sar eax, 3 }
	__asm { test eax, eax }
	__asm { jne L_006c42f2 }
	__asm { L_006c4342: }
	__asm { mov al, byte ptr [g_012de651] }
	__asm { test al, al }
	__asm { je L_006c437c }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe456e4 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { mov cl, byte ptr [g_012de651] }
	__asm { add esp, 0xc }
	__asm { test cl, cl }
	__asm { je L_006c437c }
	__asm { lea eax, [esi + 0x60] }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe45538 }
	__asm { push eax }
	__asm { call fn_006b8aa8 }
	__asm { add esp, 0xc }
	__asm { L_006c437c: }
	__asm { lea ecx, [esi + 0x1b0] }
	__asm { call fn_006c41b0 }
	__asm { mov edi, dword ptr [esi + 0x184] }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { test edi, edi }
	__asm { je L_006c43b9 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006c43b9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006c43b9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c43b9: }
	__asm { mov edi, dword ptr [esi + 0x154] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { test edi, edi }
	__asm { je L_006c43eb }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006c43eb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006c43eb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c43eb: }
	__asm { lea ecx, [esi + 0xe0] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_006be400 }
	__asm { mov edi, dword ptr [esi + 0xd8] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { test edi, edi }
	__asm { je L_006c442c }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006c442c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006c442c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c442c: }
	__asm { cmp dword ptr [esi + 0x74], 0x10 }
	__asm { jb L_006c443d }
	__asm { push dword ptr [esi + 0x60] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006c443d: }
	__asm { mov dword ptr [esi + 0x74], 0xf }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov byte ptr [esi + 0x60], 0 }
	__asm { mov ecx, dword ptr [esi + 0x58] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { test ecx, ecx }
	__asm { je L_006c446a }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006c446a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c446a: }
	__asm { mov edi, dword ptr [esi + 0x50] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edi, edi }
	__asm { je L_006c4499 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006c4499 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006c4499 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c4499: }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_006c44d4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x44] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi + 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { L_006c44d4: }
	__asm { lea edi, [esi + 0x28] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e101a8] }
	__asm { mov al, byte ptr [g_012de64f] }
	__asm { test al, al }
	__asm { je L_006c44fd }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0x100df10 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006c44fd: }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_006c4518 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006c4518 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c4518: }
	__asm { push 0x12df2f8 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006bc920 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_006c4546 }
	__asm { lea eax, [ecx + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006c4546 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c4546: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" void fn_005eb810();
// FUNCTION: ROBLOXSTUDIO 0x006c4560
extern "C" __declspec(naked) void asm_006c4560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd16e30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 0x28] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x40] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_005eb810 }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006c45e9 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006c45e9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006c45e9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006c45e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e132c4[];
extern "C" char g_00e132c8[];
extern "C" char g_00e132e0[];
extern "C" char g_011dd36c[];
extern "C" char g_012df3bc[];
extern "C" char g_012df3c0[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b8aae();
// FUNCTION: ROBLOXSTUDIO 0x006c5f00
extern "C" __declspec(naked) void asm_006c5f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp byte ptr [g_012df3c0], 0 }
	__asm { jne L_006c609e }
	__asm { push 0 }
	__asm { call dword ptr [g_00e132e0] }
	__asm { test eax, eax }
	__asm { jns L_006c5f3b }
	__asm { mov cl, byte ptr [g_011dd36c] }
	__asm { test cl, cl }
	__asm { je L_006c5f3b }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe46040 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006c5f3b: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push 0xe433f8 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0xe433e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e132c8] }
	__asm { test eax, eax }
	__asm { jns L_006c5f83 }
	__asm { mov cl, byte ptr [g_011dd36c] }
	__asm { test cl, cl }
	__asm { je L_006c6091 }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe46064 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { jmp L_006c6091 }
	__asm { L_006c5f83: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x48] }
	__asm { test eax, eax }
	__asm { jns L_006c5fb7 }
	__asm { mov cl, byte ptr [g_011dd36c] }
	__asm { test cl, cl }
	__asm { je L_006c6091 }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe4608c }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { jmp L_006c6091 }
	__asm { L_006c5fb7: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { push 0x12df3bc }
	__asm { lea edx, [ebp - 8] }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0x10004000 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push edx }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x5c] }
	__asm { test eax, eax }
	__asm { jns L_006c6063 }
	__asm { mov cl, byte ptr [g_011dd36c] }
	__asm { test cl, cl }
	__asm { je L_006c5fff }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe460b8 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006c5fff: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { or dword ptr [ebp - 8], 0x2000 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { push 0x12df3bc }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x5c] }
	__asm { test eax, eax }
	__asm { jns L_006c6048 }
	__asm { mov cl, byte ptr [g_011dd36c] }
	__asm { test cl, cl }
	__asm { je L_006c603c }
	__asm { push eax }
	__asm { movzx eax, cl }
	__asm { push 0xe460f4 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_006c603c: }
	__asm { mov dword ptr [g_012df3bc], 0 }
	__asm { jmp L_006c6088 }
	__asm { L_006c6048: }
	__asm { mov al, byte ptr [g_011dd36c] }
	__asm { test al, al }
	__asm { je L_006c6088 }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { push dword ptr [g_012df3bc] }
	__asm { push 0xe4612c }
	__asm { jmp L_006c607c }
	__asm { L_006c6063: }
	__asm { mov al, byte ptr [g_011dd36c] }
	__asm { test al, al }
	__asm { je L_006c6088 }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { push dword ptr [g_012df3bc] }
	__asm { push 0xe4616c }
	__asm { L_006c607c: }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_006c6088: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { call dword ptr [ecx + 8] }
	__asm { L_006c6091: }
	__asm { call dword ptr [g_00e132c4] }
	__asm { mov byte ptr [g_012df3c0], 1 }
	__asm { L_006c609e: }
	__asm { mov eax, dword ptr [g_012df3bc] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012df718[];
extern "C" char g_012df71c[];
// FUNCTION: ROBLOXSTUDIO 0x006c60f0
extern "C" __declspec(naked) void asm_006c60f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { dec dword ptr [g_012df71c] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { mov edi, edi }
	__asm { L_006c6100: }
	__asm { cmp dword ptr [eax*4 + 0x12df70c], ecx }
	__asm { je L_006c6111 }
	__asm { inc eax }
	__asm { cmp eax, 4 }
	__asm { jl L_006c6100 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006c6111: }
	__asm { cmp eax, 3 }
	__asm { jge L_006c6131 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, 3 }
	__asm { lea edi, [eax*4 + 0x12df70c] }
	__asm { lea esi, [eax*4 + 0x12df710] }
	__asm { sub ecx, eax }
	__asm { rep movsd }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_006c6131: }
	__asm { mov dword ptr [g_012df718], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01038120[];
extern "C" char g_011dd378[];
extern "C" void fn_006c6ab0();
extern "C" void fn_006d1420();
// FUNCTION: ROBLOXSTUDIO 0x006c6e70
extern "C" __declspec(naked) void asm_006c6e70()
{
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { sub esp, 0x10 }
	__asm { cmp eax, 2 }
	__asm { jne L_006c6ec7 }
	__asm { cmp byte ptr [g_011dd378], 0 }
	__asm { je L_006c6f1a }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x18] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x20] }
	__asm { lea eax, [esi + 0x38] }
	__asm { mov edx, dword ptr [edi] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0x44] }
	__asm { movss xmm0, dword ptr [esp + 0x28] }
	__asm { mulss xmm0, dword ptr [g_01038120] }
	__asm { push ecx }
	__asm { movss dword ptr [esp], xmm0 }
	__asm { push 0x11dd37c }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_006c6ab0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add esp, 0x10 }
	__asm { ret }
	__asm { L_006c6ec7: }
	__asm { test eax, eax }
	__asm { jne L_006c6ed2 }
	__asm { mov eax, 0x11dd38c }
	__asm { jmp L_006c6f01 }
	__asm { L_006c6ed2: }
	__asm { call fn_006d1420 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [esp], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [esp + 4], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [esp + 8], xmm0 }
	__asm { mov dword ptr [esp + 0xc], 0x3f800000 }
	__asm { lea eax, [esp] }
	__asm { L_006c6f01: }
	__asm { fld dword ptr [esp + 0x20] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { push dword ptr [esp + 0x20] }
	__asm { push dword ptr [esp + 0x20] }
	__asm { call fn_006c6ab0 }
	__asm { add esp, 0x10 }
	__asm { L_006c6f1a: }
	__asm { add esp, 0x10 }
	__asm { ret }
}

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e18420[];
// FUNCTION: ROBLOXSTUDIO 0x006cf270
extern "C" __declspec(naked) void asm_006cf270()
{
	__asm { fld dword ptr [esp + 8] }
	__asm { movss xmm4, dword ptr [ecx + 0x10] }
	__asm { fadd st(0), st(0) }
	__asm { movss xmm5, dword ptr [ecx + 0x14] }
	__asm { movss xmm6, dword ptr [ecx + 0x18] }
	__asm { movss xmm3, dword ptr [ecx + 4] }
	__asm { fmul qword ptr [g_00e18420] }
	__asm { movss xmm1, dword ptr [ecx + 8] }
	__asm { movss xmm2, dword ptr [ecx + 0xc] }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { fld st(0) }
	__asm { fsin }
	__asm { fstp dword ptr [esp + 8] }
	__asm { movss xmm0, dword ptr [esp + 8] }
	__asm { fcos }
	__asm { mulss xmm4, xmm0 }
	__asm { mulss xmm5, xmm0 }
	__asm { mulss xmm6, xmm0 }
	__asm { fstp dword ptr [esp + 8] }
	__asm { movss xmm0, dword ptr [esp + 8] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { addss xmm3, xmm4 }
	__asm { addss xmm1, xmm5 }
	__asm { addss xmm2, xmm6 }
	__asm { movss dword ptr [eax], xmm3 }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss dword ptr [eax + 8], xmm2 }
	__asm { ret 8 }
}

extern "C" char g_00e18420[];
// FUNCTION: ROBLOXSTUDIO 0x006cf2f0
extern "C" __declspec(naked) void asm_006cf2f0()
{
	__asm { fld dword ptr [esp + 8] }
	__asm { movss xmm4, dword ptr [ecx + 4] }
	__asm { fadd st(0), st(0) }
	__asm { movss xmm5, dword ptr [ecx + 8] }
	__asm { movss xmm6, dword ptr [ecx + 0xc] }
	__asm { movss xmm3, dword ptr [ecx + 0x10] }
	__asm { fmul qword ptr [g_00e18420] }
	__asm { movss xmm1, dword ptr [ecx + 0x14] }
	__asm { movss xmm2, dword ptr [ecx + 0x18] }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { fld st(0) }
	__asm { fsin }
	__asm { fstp dword ptr [esp + 8] }
	__asm { movss xmm0, dword ptr [esp + 8] }
	__asm { fcos }
	__asm { mulss xmm4, xmm0 }
	__asm { mulss xmm5, xmm0 }
	__asm { mulss xmm6, xmm0 }
	__asm { fstp dword ptr [esp + 8] }
	__asm { movss xmm0, dword ptr [esp + 8] }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { subss xmm3, xmm4 }
	__asm { subss xmm1, xmm5 }
	__asm { subss xmm2, xmm6 }
	__asm { movss dword ptr [eax], xmm3 }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss dword ptr [eax + 8], xmm2 }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x006cf590
extern "C" __declspec(naked) void asm_006cf590()
{
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { movss xmm1, dword ptr [ecx + 0xc] }
	__asm { movss xmm4, dword ptr [eax] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { subss xmm4, dword ptr [ecx + 0x24] }
	__asm { subss xmm2, dword ptr [ecx + 0x28] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { movss xmm3, dword ptr [eax + 8] }
	__asm { subss xmm3, dword ptr [ecx + 0x2c] }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x18] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss dword ptr [eax], xmm1 }
	__asm { movss xmm1, dword ptr [ecx + 0x10] }
	__asm { mulss xmm1, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x1c] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss xmm1, dword ptr [ecx + 0x14] }
	__asm { mulss xmm1, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x20] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movss dword ptr [eax + 8], xmm1 }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x006cf730
extern "C" __declspec(naked) void asm_006cf730()
{
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea edx, [ecx + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push edi }
	__asm { lea edi, [edx + 4] }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { comiss xmm0, dword ptr [ecx + 4] }
	__asm { lea esi, [ecx + 4] }
	__asm { mov ebx, esi }
	__asm { ja L_006cf769 }
	__asm { mov ebx, edi }
	__asm { L_006cf769: }
	__asm { movss xmm0, dword ptr [edx] }
	__asm { comiss xmm0, dword ptr [ecx] }
	__asm { movss xmm1, dword ptr [ebx] }
	__asm { mov ebx, ecx }
	__asm { ja L_006cf77a }
	__asm { mov ebx, edx }
	__asm { L_006cf77a: }
	__asm { fld dword ptr [ebx] }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { fstp dword ptr [eax] }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { comiss xmm0, dword ptr [edi] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { cmovbe esi, edi }
	__asm { comiss xmm0, dword ptr [edx] }
	__asm { movss xmm1, dword ptr [esi] }
	__asm { pop edi }
	__asm { cmovbe ecx, edx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { fld dword ptr [ecx] }
	__asm { movss dword ptr [eax + 0xc], xmm1 }
	__asm { fstp dword ptr [eax + 8] }
	__asm { ret 4 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x006e18f0
extern "C" __declspec(naked) void asm_006e18f0()
{
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { movss xmm3, dword ptr [eax + 8] }
	__asm { comiss xmm3, xmm0 }
	__asm { mov edx, dword ptr [esp + 0xc] }
	__asm { movss xmm1, dword ptr [edx + 8] }
	__asm { jae L_006e1919 }
	__asm { comiss xmm0, xmm1 }
	__asm { jb L_006e1916 }
	__asm { movaps xmm3, xmm1 }
	__asm { jmp L_006e1919 }
	__asm { L_006e1916: }
	__asm { movaps xmm3, xmm0 }
	__asm { L_006e1919: }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { comiss xmm1, xmm0 }
	__asm { movss xmm2, dword ptr [edx + 4] }
	__asm { jae L_006e193a }
	__asm { comiss xmm0, xmm2 }
	__asm { jb L_006e1937 }
	__asm { movaps xmm1, xmm2 }
	__asm { jmp L_006e193a }
	__asm { L_006e1937: }
	__asm { movaps xmm1, xmm0 }
	__asm { L_006e193a: }
	__asm { movss xmm2, dword ptr [ecx] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm0, xmm2 }
	__asm { movss xmm4, dword ptr [edx] }
	__asm { jae L_006e196b }
	__asm { comiss xmm2, xmm4 }
	__asm { jb L_006e1968 }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { movaps xmm0, xmm4 }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss dword ptr [eax + 8], xmm3 }
	__asm { ret 0xc }
	__asm { L_006e1968: }
	__asm { movaps xmm0, xmm2 }
	__asm { L_006e196b: }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss dword ptr [eax + 8], xmm3 }
	__asm { ret 0xc }
}

extern "C" char g_010380e4[];
extern "C" void fn_006e2960();
extern "C" void fn_006e2c50();
// FUNCTION: ROBLOXSTUDIO 0x006e2be0
extern "C" __declspec(naked) void asm_006e2be0()
{
	__asm { sub esp, 0x40 }
	__asm { push esi }
	__asm { lea eax, [esp + 4] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_006e2c50 }
	__asm { movss xmm1, dword ptr [esi + 4] }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { mulss xmm0, dword ptr [esp + 4] }
	__asm { mulss xmm1, dword ptr [esp + 0x14] }
	__asm { push ecx }
	__asm { lea ecx, [esp + 8] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { mulss xmm0, dword ptr [esp + 0x28] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0xc] }
	__asm { mulss xmm0, dword ptr [esp + 0x38] }
	__asm { mov esi, dword ptr [esp + 0x4c] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { divss xmm0, xmm1 }
	__asm { movss dword ptr [esp], xmm0 }
	__asm { push esi }
	__asm { call fn_006e2960 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { add esp, 0x40 }
	__asm { ret 4 }
}

extern "C" void fn_006d19c0();
// FUNCTION: ROBLOXSTUDIO 0x006e72c0
extern "C" __declspec(naked) void asm_006e72c0()
{
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { fld dword ptr [ebx + 0x80] }
	__asm { push edi }
	__asm { sub esp, 0x24 }
	__asm { lea ecx, [esp + 0x30] }
	__asm { fstp dword ptr [esp + 0x20] }
	__asm { fld dword ptr [ebx + 0x74] }
	__asm { fstp dword ptr [esp + 0x1c] }
	__asm { fld dword ptr [ebx + 0x68] }
	__asm { fstp dword ptr [esp + 0x18] }
	__asm { fld dword ptr [ebx + 0x7c] }
	__asm { fstp dword ptr [esp + 0x14] }
	__asm { fld dword ptr [ebx + 0x70] }
	__asm { fstp dword ptr [esp + 0x10] }
	__asm { fld dword ptr [ebx + 0x64] }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fld dword ptr [ebx + 0x78] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [ebx + 0x6c] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebx + 0x60] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_006d19c0 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esp + 0x34] }
	__asm { mov ecx, 9 }
	__asm { mov edi, eax }
	__asm { rep movsd }
	__asm { fld dword ptr [ebx + 0x84] }
	__asm { fstp dword ptr [eax + 0x24] }
	__asm { fld dword ptr [ebx + 0x88] }
	__asm { fstp dword ptr [eax + 0x28] }
	__asm { fld dword ptr [ebx + 0x8c] }
	__asm { fstp dword ptr [eax + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0x24 }
	__asm { ret 4 }
}

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e105fc[];
extern "C" char g_011dd418[];
extern "C" void fn_004039a0();
extern "C" void fn_006d8660();
extern "C" void fn_006d86d0();
extern "C" void fn_006f1600();
extern "C" void fn_006f1800();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6a20();
extern "C" void fn_00cfbbb0();
// FUNCTION: ROBLOXSTUDIO 0x006e89e0
extern "C" __declspec(naked) void asm_006e89e0()
{
	__asm { push -1 }
	__asm { push 0xd17789 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [esp + 0x14], ebx }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { mov ebp, dword ptr [edi + 0x40] }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { mov dword ptr [esp + 0x18], eax }
	__asm { mov al, byte ptr [edi + 0x24] }
	__asm { test al, al }
	__asm { je L_006e8a38 }
	__asm { mov al, byte ptr [ecx + 3] }
	__asm { mov byte ptr [esp + 0x10], al }
	__asm { mov al, byte ptr [ecx + 2] }
	__asm { mov byte ptr [esp + 0x11], al }
	__asm { mov al, byte ptr [ecx + 1] }
	__asm { mov byte ptr [esp + 0x12], al }
	__asm { mov al, byte ptr [ecx] }
	__asm { mov byte ptr [esp + 0x13], al }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { jmp L_006e8a3a }
	__asm { L_006e8a38: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { L_006e8a3a: }
	__asm { push 0 }
	__asm { push 0x1f4 }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { push dword ptr [edi + 0x48] }
	__asm { mov dword ptr [edi + 0x44], ebx }
	__asm { call fn_00cf6a20 }
	__asm { cmp ebx, edx }
	__asm { jl L_006e8b05 }
	__asm { jg L_006e8a65 }
	__asm { cmp dword ptr [edi + 0x40], eax }
	__asm { jb L_006e8b05 }
	__asm { L_006e8a65: }
	__asm { call fn_006d8660 }
	__asm { cmp dword ptr [g_011dd418], ebx }
	__asm { je L_006e8ab7 }
	__asm { push 0xe46d24 }
	__asm { lea ecx, [esp + 0x20] }
	__asm { call fn_004039a0 }
	__asm { mov ebx, 1 }
	__asm { push ebx }
	__asm { push 0x171 }
	__asm { push 0xe46cd8 }
	__asm { lea eax, [esp + 0x28] }
	__asm { push eax }
	__asm { push 0xe46d48 }
	__asm { mov dword ptr [esp + 0x50], 0 }
	__asm { mov dword ptr [esp + 0x28], ebx }
	__asm { call dword ptr [g_011dd418] }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [esp + 0xf], bl }
	__asm { test al, al }
	__asm { jne L_006e8abc }
	__asm { L_006e8ab7: }
	__asm { mov byte ptr [esp + 0xf], 0 }
	__asm { L_006e8abc: }
	__asm { mov dword ptr [esp + 0x3c], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_006e8af1 }
	__asm { cmp dword ptr [esp + 0x30], 0x10 }
	__asm { jb L_006e8adc }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006e8adc: }
	__asm { mov dword ptr [esp + 0x30], 0xf }
	__asm { mov dword ptr [esp + 0x2c], 0 }
	__asm { mov byte ptr [esp + 0x1c], 0 }
	__asm { L_006e8af1: }
	__asm { cmp byte ptr [esp + 0xf], 0 }
	__asm { je L_006e8b00 }
	__asm { push -1 }
	__asm { call dword ptr [g_00e105fc] }
	__asm { L_006e8b00: }
	__asm { call fn_006d86d0 }
	__asm { L_006e8b05: }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0x50] }
	__asm { push 0x10 }
	__asm { push dword ptr [edi + 0x40] }
	__asm { call fn_006f1600 }
	__asm { mov ecx, dword ptr [edi + 0x40] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [esp + 0x14], ecx }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { push ecx }
	__asm { lea ecx, [esp + 0x1c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov dword ptr [edi + 0x50], eax }
	__asm { call fn_00cfbbb0 }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], eax }
	__asm { mov eax, dword ptr [edi + 0x44] }
	__asm { push esi }
	__asm { mov dword ptr [edi + 0x4c], eax }
	__asm { call fn_006f1800 }
	__asm { mov ecx, dword ptr [esp + 0x3c] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { pop ebx }
	__asm { add esp, 0x34 }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_006f1040();
extern "C" void fn_006f1600();
extern "C" void fn_006f1820();
extern "C" void fn_00cfbbb0();
// FUNCTION: ROBLOXSTUDIO 0x006e8f20
extern "C" __declspec(naked) void asm_006e8f20()
{
	__asm { push -1 }
	__asm { push 0xd177c3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 8 }
	__asm { lea ecx, [edi + 0xc] }
	__asm { mov dword ptr [edi], 0xe46c04 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe46c50 }
	__asm { mov dword ptr [esp + 0x14], edi }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov bh, byte ptr [esp + 0x34] }
	__asm { mov bl, byte ptr [esp + 0x30] }
	__asm { mov dword ptr [esp + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { test bh, bh }
	__asm { jne L_006e8fc0 }
	__asm { test bl, bl }
	__asm { jne L_006e8fc0 }
	__asm { xor eax, eax }
	__asm { jmp L_006e8fc5 }
	__asm { L_006e8fc0: }
	__asm { mov eax, 1 }
	__asm { L_006e8fc5: }
	__asm { mov esi, dword ptr [esp + 0x2c] }
	__asm { mov byte ptr [edi + 0x60], al }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { call fn_006f1040 }
	__asm { cmp esi, dword ptr [eax + 0x48] }
	__asm { setne al }
	__asm { mov byte ptr [edi + 0x24], al }
	__asm { test bl, bl }
	__asm { je L_006e905a }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { test al, al }
	__asm { je L_006e900e }
	__asm { movzx eax, byte ptr [esi + 3] }
	__asm { mov byte ptr [esp + 0x34], al }
	__asm { movzx eax, byte ptr [esi + 2] }
	__asm { mov byte ptr [esp + 0x35], al }
	__asm { movzx eax, byte ptr [esi + 1] }
	__asm { mov byte ptr [esp + 0x36], al }
	__asm { movzx eax, byte ptr [esi] }
	__asm { mov byte ptr [esp + 0x37], al }
	__asm { mov eax, dword ptr [esp + 0x34] }
	__asm { jmp L_006e9010 }
	__asm { L_006e900e: }
	__asm { mov eax, dword ptr [esi] }
	__asm { L_006e9010: }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { call fn_006f1600 }
	__asm { mov ecx, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [esp + 0x3c], ecx }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { add esp, 8 }
	__asm { add ecx, -4 }
	__asm { push ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { push ecx }
	__asm { lea ecx, [esp + 0x3c] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov dword ptr [edi + 0x50], eax }
	__asm { call fn_00cfbbb0 }
	__asm { mov eax, dword ptr [esp + 0x34] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { mov dword ptr [edi + 0x44], ecx }
	__asm { mov dword ptr [edi + 0x48], eax }
	__asm { mov dword ptr [edi + 0x4c], ecx }
	__asm { jmp L_006e9094 }
	__asm { L_006e905a: }
	__asm { mov esi, dword ptr [esp + 0x24] }
	__asm { mov eax, dword ptr [esp + 0x28] }
	__asm { mov dword ptr [edi + 0x40], esi }
	__asm { mov dword ptr [edi + 0x44], eax }
	__asm { mov dword ptr [edi + 0x48], esi }
	__asm { mov dword ptr [edi + 0x4c], eax }
	__asm { test bh, bh }
	__asm { jne L_006e907b }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [edi + 0x50], eax }
	__asm { jmp L_006e9094 }
	__asm { L_006e907b: }
	__asm { push 0x10 }
	__asm { push esi }
	__asm { call fn_006f1600 }
	__asm { push esi }
	__asm { push dword ptr [esp + 0x2c] }
	__asm { mov dword ptr [edi + 0x50], eax }
	__asm { push eax }
	__asm { call fn_006f1820 }
	__asm { add esp, 0x14 }
	__asm { L_006e9094: }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { add esp, 0x10 }
	__asm { ret 0x18 }
}

// FUNCTION: ROBLOXSTUDIO 0x006ea500
extern "C" __declspec(naked) void asm_006ea500()
{
	__asm { push esi }
	__asm { push edi }
	__asm { L_006ea502: }
	__asm { mov edi, dword ptr [esp + 0x18] }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { cmp dword ptr [esp + 0x10], edi }
	__asm { jne L_006ea516 }
	__asm { cmp dword ptr [esp + 0x14], ecx }
	__asm { je L_006ea56c }
	__asm { L_006ea516: }
	__asm { test ecx, ecx }
	__asm { je L_006ea51d }
	__asm { dec ecx }
	__asm { jmp L_006ea529 }
	__asm { L_006ea51d: }
	__asm { sub edi, 4 }
	__asm { mov ecx, 0x1f }
	__asm { mov dword ptr [esp + 0x18], edi }
	__asm { L_006ea529: }
	__asm { mov edx, dword ptr [esp + 0x24] }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [esp + 0x1c], ecx }
	__asm { test edx, edx }
	__asm { je L_006ea53c }
	__asm { dec edx }
	__asm { jmp L_006ea548 }
	__asm { L_006ea53c: }
	__asm { sub esi, 4 }
	__asm { mov edx, 0x1f }
	__asm { mov dword ptr [esp + 0x20], esi }
	__asm { L_006ea548: }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { mov dword ptr [esp + 0x24], edx }
	__asm { mov ecx, edx }
	__asm { test dword ptr [edi], eax }
	__asm { mov eax, 1 }
	__asm { je L_006ea564 }
	__asm { shl eax, cl }
	__asm { or dword ptr [esi], eax }
	__asm { jmp L_006ea502 }
	__asm { L_006ea564: }
	__asm { shl eax, cl }
	__asm { not eax }
	__asm { and dword ptr [esi], eax }
	__asm { jmp L_006ea502 }
	__asm { L_006ea56c: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov ecx, dword ptr [esp + 0x20] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { ret }
	__asm { mov edx, dword ptr [esp + 0x1c] }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x1c] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { L_006ea592: }
	__asm { cmp edi, dword ptr [esp + 0x18] }
	__asm { jne L_006ea59e }
	__asm { cmp ecx, dword ptr [esp + 0x1c] }
	__asm { je L_006ea5fc }
	__asm { L_006ea59e: }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { mov ecx, edx }
	__asm { test dword ptr [edi], eax }
	__asm { mov eax, 1 }
	__asm { je L_006ea5b6 }
	__asm { shl eax, cl }
	__asm { or dword ptr [esi], eax }
	__asm { jmp L_006ea5bc }
	__asm { L_006ea5b6: }
	__asm { shl eax, cl }
	__asm { not eax }
	__asm { and dword ptr [esi], eax }
	__asm { L_006ea5bc: }
	__asm { mov edx, dword ptr [esp + 0x24] }
	__asm { mov esi, dword ptr [esp + 0x20] }
	__asm { cmp edx, 0x1f }
	__asm { jae L_006ea5cc }
	__asm { inc edx }
	__asm { jmp L_006ea5d5 }
	__asm { L_006ea5cc: }
	__asm { xor edx, edx }
	__asm { add esi, 4 }
	__asm { mov dword ptr [esp + 0x20], esi }
	__asm { L_006ea5d5: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [esp + 0x24], edx }
	__asm { cmp ecx, 0x1f }
	__asm { jae L_006ea5ed }
	__asm { inc ecx }
	__asm { mov dword ptr [esp + 0x14], ecx }
	__asm { jmp L_006ea592 }
	__asm { L_006ea5ed: }
	__asm { xor ecx, ecx }
	__asm { add edi, 4 }
	__asm { mov dword ptr [esp + 0x14], ecx }
	__asm { mov dword ptr [esp + 0x10], edi }
	__asm { jmp L_006ea592 }
	__asm { L_006ea5fc: }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006ea610();
extern "C" void fn_006eab50();
// FUNCTION: ROBLOXSTUDIO 0x006eaa40
extern "C" __declspec(naked) void asm_006eaa40()
{
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push ebp }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0x30] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [esp + 0x34] }
	__asm { mov ebx, ecx }
	__asm { push dword ptr [esp + 0x34] }
	__asm { mov dword ptr [esp + 0x24], ebx }
	__asm { call fn_006eab50 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov edi, eax }
	__asm { or ebx, 0xffffffff }
	__asm { lea edx, [edi + esi] }
	__asm { mov dword ptr [esp + 0x34], ecx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { lea ebp, [ebx - 3] }
	__asm { test edx, edx }
	__asm { jns L_006eaa9a }
	__asm { mov eax, edx }
	__asm { neg eax }
	__asm { je L_006eaa9a }
	__asm { mov ecx, ebx }
	__asm { sub ecx, edx }
	__asm { shr ecx, 5 }
	__asm { shl ecx, 2 }
	__asm { mov eax, ebp }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [esp + 0x34] }
	__asm { add esi, eax }
	__asm { jmp L_006eaaa2 }
	__asm { L_006eaa9a: }
	__asm { mov eax, edx }
	__asm { shr eax, 5 }
	__asm { lea esi, [esi + eax*4] }
	__asm { L_006eaaa2: }
	__asm { and edx, 0x1f }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { mov dword ptr [esp + 0x20], 0 }
	__asm { test edi, edi }
	__asm { jns L_006eaad1 }
	__asm { mov eax, edi }
	__asm { neg eax }
	__asm { je L_006eaad1 }
	__asm { mov ecx, ebx }
	__asm { sub ecx, edi }
	__asm { shr ecx, 5 }
	__asm { shl ecx, 2 }
	__asm { mov eax, ebp }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [esp + 0x34] }
	__asm { add ecx, eax }
	__asm { jmp L_006eaad9 }
	__asm { L_006eaad1: }
	__asm { mov eax, edi }
	__asm { shr eax, 5 }
	__asm { lea ecx, [ecx + eax*4] }
	__asm { L_006eaad9: }
	__asm { push dword ptr [esp + 0x38] }
	__asm { mov esi, edi }
	__asm { push edx }
	__asm { push dword ptr [esp + 0x18] }
	__asm { and esi, 0x1f }
	__asm { mov eax, esi }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_006ea610 }
	__asm { mov ecx, dword ptr [esp + 0x2c] }
	__asm { add esp, 0x14 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [esp + 0x30], 0 }
	__asm { test edi, edi }
	__asm { jns L_006eab2a }
	__asm { mov eax, edi }
	__asm { neg eax }
	__asm { je L_006eab2a }
	__asm { mov eax, dword ptr [esp + 0x28] }
	__asm { sub ebx, edi }
	__asm { shr ebx, 5 }
	__asm { shl ebx, 2 }
	__asm { pop edi }
	__asm { sub ebp, ebx }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { pop esi }
	__asm { add ecx, ebp }
	__asm { pop ebp }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { add esp, 0x14 }
	__asm { ret 0x14 }
	__asm { L_006eab2a: }
	__asm { mov eax, dword ptr [esp + 0x28] }
	__asm { shr edi, 5 }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { lea ecx, [ecx + edi*4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { add esp, 0x14 }
	__asm { ret 0x14 }
}

extern "C" void fn_006ea580();
extern "C" void fn_006eaf00();
// FUNCTION: ROBLOXSTUDIO 0x006eb110
extern "C" __declspec(naked) void asm_006eb110()
{
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { push ebp }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { xor edx, edx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { or ebp, 0xffffffff }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x18], ecx }
	__asm { mov dword ptr [esp + 0x1c], ebx }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { lea esi, [edx - 4] }
	__asm { test eax, eax }
	__asm { je L_006eb17d }
	__asm { mov edx, dword ptr [esp + 0x30] }
	__asm { sub edx, ecx }
	__asm { sar edx, 2 }
	__asm { shl edx, 5 }
	__asm { add edx, dword ptr [esp + 0x34] }
	__asm { jns L_006eb16a }
	__asm { mov eax, edx }
	__asm { neg eax }
	__asm { je L_006eb16a }
	__asm { mov ecx, ebp }
	__asm { sub ecx, edx }
	__asm { shr ecx, 5 }
	__asm { shl ecx, 2 }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { add ebx, eax }
	__asm { jmp L_006eb172 }
	__asm { L_006eb16a: }
	__asm { mov eax, edx }
	__asm { shr eax, 5 }
	__asm { lea ebx, [ebx + eax*4] }
	__asm { L_006eb172: }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { and edx, 0x1f }
	__asm { mov dword ptr [esp + 0x1c], ebx }
	__asm { L_006eb17d: }
	__asm { xor edi, edi }
	__asm { mov dword ptr [esp + 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_006eb1ce }
	__asm { mov edi, dword ptr [esp + 0x38] }
	__asm { sub edi, ecx }
	__asm { sar edi, 2 }
	__asm { shl edi, 5 }
	__asm { add edi, dword ptr [esp + 0x3c] }
	__asm { jns L_006eb1b7 }
	__asm { mov eax, edi }
	__asm { neg eax }
	__asm { je L_006eb1b7 }
	__asm { mov ecx, ebp }
	__asm { sub ecx, edi }
	__asm { shr ecx, 5 }
	__asm { shl ecx, 2 }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { add dword ptr [esp + 0x10], eax }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { jmp L_006eb1c7 }
	__asm { L_006eb1b7: }
	__asm { mov esi, dword ptr [esp + 0x10] }
	__asm { mov eax, edi }
	__asm { shr eax, 5 }
	__asm { lea esi, [esi + eax*4] }
	__asm { mov dword ptr [esp + 0x10], esi }
	__asm { L_006eb1c7: }
	__asm { mov eax, dword ptr [esp + 0x14] }
	__asm { and edi, 0x1f }
	__asm { L_006eb1ce: }
	__asm { mov esi, ebx }
	__asm { sub esi, ecx }
	__asm { sar esi, 2 }
	__asm { shl esi, 5 }
	__asm { add esi, edx }
	__asm { cmp ebx, dword ptr [esp + 0x10] }
	__asm { jne L_006eb1e4 }
	__asm { cmp edx, edi }
	__asm { je L_006eb253 }
	__asm { L_006eb1e4: }
	__asm { xor ebx, ebx }
	__asm { test eax, eax }
	__asm { je L_006eb218 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { jns L_006eb20d }
	__asm { neg eax }
	__asm { je L_006eb20d }
	__asm { mov ecx, ebp }
	__asm { sub ecx, ebx }
	__asm { shr ecx, 5 }
	__asm { shl ecx, 2 }
	__asm { mov eax, 0xfffffffc }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { add ecx, eax }
	__asm { jmp L_006eb215 }
	__asm { L_006eb20d: }
	__asm { mov eax, ebx }
	__asm { shr eax, 5 }
	__asm { lea ecx, [ecx + eax*4] }
	__asm { L_006eb215: }
	__asm { and ebx, 0x1f }
	__asm { L_006eb218: }
	__asm { push dword ptr [esp + 0x2c] }
	__asm { lea eax, [esp + 0x20] }
	__asm { push edx }
	__asm { push dword ptr [esp + 0x24] }
	__asm { push ebx }
	__asm { push ecx }
	__asm { push edi }
	__asm { push dword ptr [esp + 0x28] }
	__asm { push eax }
	__asm { call fn_006ea580 }
	__asm { mov edi, dword ptr [esp + 0x44] }
	__asm { mov eax, dword ptr [esp + 0x3c] }
	__asm { sub eax, dword ptr [edi] }
	__asm { add esp, 0x20 }
	__asm { sar eax, 2 }
	__asm { shl eax, 5 }
	__asm { add eax, dword ptr [esp + 0x20] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call fn_006eaf00 }
	__asm { jmp L_006eb257 }
	__asm { L_006eb253: }
	__asm { mov edi, dword ptr [esp + 0x24] }
	__asm { L_006eb257: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0x34], 0 }
	__asm { test esi, esi }
	__asm { jns L_006eb27e }
	__asm { mov eax, esi }
	__asm { neg eax }
	__asm { je L_006eb27e }
	__asm { sub ebp, esi }
	__asm { shr ebp, 5 }
	__asm { shl ebp, 2 }
	__asm { mov eax, 0xfffffffc }
	__asm { sub eax, ebp }
	__asm { add ecx, eax }
	__asm { jmp L_006eb286 }
	__asm { L_006eb27e: }
	__asm { mov eax, esi }
	__asm { shr eax, 5 }
	__asm { lea ecx, [ecx + eax*4] }
	__asm { L_006eb286: }
	__asm { mov eax, dword ptr [esp + 0x2c] }
	__asm { and esi, 0x1f }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { add esp, 0x18 }
	__asm { ret 0x14 }
}

extern "C" char g_00e36278[];
extern "C" char g_01038120[];
extern "C" char g_01038168[];
extern "C" void fn_006eb520();
// FUNCTION: ROBLOXSTUDIO 0x006ebbe0
extern "C" __declspec(naked) void asm_006ebbe0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, dword ptr [edi + 4] }
	__asm { cmp ebx, esi }
	__asm { je L_006ebcb5 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { cmp esi, ecx }
	__asm { jle L_006ebc8a }
	__asm { test ecx, ecx }
	__asm { jne L_006ebc17 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { call fn_006eb520 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ebc17: }
	__asm { cmp esi, 0x10 }
	__asm { jge L_006ebc31 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi + 8], 0x10 }
	__asm { call fn_006eb520 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ebc31: }
	__asm { movss xmm1, dword ptr [g_01038168] }
	__asm { mov eax, ecx }
	__asm { add eax, eax }
	__asm { cmp eax, 0x61a80 }
	__asm { jle L_006ebc4e }
	__asm { movss xmm1, dword ptr [g_00e36278] }
	__asm { jmp L_006ebc5d }
	__asm { L_006ebc4e: }
	__asm { cmp eax, 0xfa00 }
	__asm { jle L_006ebc5d }
	__asm { movss xmm1, dword ptr [g_01038120] }
	__asm { L_006ebc5d: }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { mov edx, 0x10 }
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
	__asm { call fn_006eb520 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
	__asm { L_006ebc8a: }
	__asm { mov eax, 0x55555556 }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp esi, eax }
	__asm { jg L_006ebcb5 }
	__asm { cmp byte ptr [esp + 0x14], 0 }
	__asm { je L_006ebcb5 }
	__asm { cmp esi, 0x10 }
	__asm { jle L_006ebcb5 }
	__asm { cmp esi, ebx }
	__asm { cmovge esi, ebx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006eb520 }
	__asm { L_006ebcb5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret 8 }
}

// (empty)
