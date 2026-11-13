// Bundled inline-assembly functions (merged from asmify12).

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00cf6a20();
// FUNCTION: ROBLOXSTUDIO 0x0067f0e0
extern "C" __declspec(naked) void asm_0067f0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { js L_0067f15d }
	__asm { test ecx, ecx }
	__asm { js L_0067f15d }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { jl L_0067f15d }
	__asm { cmp dword ptr [ebp + 0x18], 0 }
	__asm { jl L_0067f15d }
	__asm { jg L_0067f108 }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { jb L_0067f15d }
	__asm { L_0067f108: }
	__asm { cdq }
	__asm { mov edi, eax }
	__asm { mov ebx, edx }
	__asm { shld ebx, edi, 4 }
	__asm { shl edi, 4 }
	__asm { sub edi, eax }
	__asm { sbb ebx, edx }
	__asm { shld ebx, edi, 2 }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { shl edi, 2 }
	__asm { add edi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { adc ebx, edx }
	__asm { mov esi, edi }
	__asm { mov ecx, ebx }
	__asm { shld ecx, esi, 4 }
	__asm { shl esi, 4 }
	__asm { sub esi, edi }
	__asm { sbb ecx, ebx }
	__asm { shld ecx, esi, 2 }
	__asm { cdq }
	__asm { push 0 }
	__asm { shl esi, 2 }
	__asm { add esi, eax }
	__asm { push 0xf4240 }
	__asm { adc ecx, edx }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00cf6a20 }
	__asm { add eax, dword ptr [ebp + 0x14] }
	__asm { pop edi }
	__asm { adc edx, dword ptr [ebp + 0x18] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0067f15d: }
	__asm { cdq }
	__asm { xor eax, edx }
	__asm { sub eax, edx }
	__asm { cdq }
	__asm { mov edi, eax }
	__asm { mov ebx, edx }
	__asm { shld ebx, edi, 4 }
	__asm { shl edi, 4 }
	__asm { sub edi, eax }
	__asm { sbb ebx, edx }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { xor eax, edx }
	__asm { sub eax, edx }
	__asm { shld ebx, edi, 2 }
	__asm { cdq }
	__asm { shl edi, 2 }
	__asm { add edi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { adc ebx, edx }
	__asm { mov esi, edi }
	__asm { mov ecx, ebx }
	__asm { shld ecx, esi, 4 }
	__asm { shl esi, 4 }
	__asm { sub esi, edi }
	__asm { sbb ecx, ebx }
	__asm { cdq }
	__asm { shld ecx, esi, 2 }
	__asm { xor eax, edx }
	__asm { sub eax, edx }
	__asm { cdq }
	__asm { push 0 }
	__asm { shl esi, 2 }
	__asm { add esi, eax }
	__asm { push 0xf4240 }
	__asm { adc ecx, edx }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00cf6a20 }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { mov esi, edx }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { cdq }
	__asm { xor eax, edx }
	__asm { xor ebx, edx }
	__asm { sub ebx, edx }
	__asm { sbb eax, edx }
	__asm { neg ebx }
	__asm { mov edx, eax }
	__asm { adc edx, 0 }
	__asm { neg edx }
	__asm { sub ebx, ecx }
	__asm { pop edi }
	__asm { sbb edx, esi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005ebd40();
extern "C" void fn_0061e9a0();
extern "C" void fn_006802f0();
extern "C" void fn_006804c0();
extern "C" void fn_00680810();
extern "C" void fn_00680be0();
extern "C" void fn_00690900();
extern "C" void fn_00690de0();
extern "C" void fn_00693190();
extern "C" void fn_00693270();
extern "C" void fn_006967b0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf669e();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x0067f300
extern "C" __declspec(naked) void asm_0067f300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12bf2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], edi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0x7f7fffff }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [esi + 0x28], 1 }
	__asm { call fn_006804c0 }
	__asm { mov dword ptr [esi + 0x1dc], 0 }
	__asm { mov dword ptr [esi + 0x1e0], 0 }
	__asm { mov dword ptr [esi + 0x1e4], 0 }
	__asm { mov dword ptr [esi + 0x1e8], 0 }
	__asm { mov dword ptr [esi + 0x1ec], 0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0x1c }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { test eax, eax }
	__asm { je L_0067f3df }
	__asm { mov ecx, eax }
	__asm { call fn_00693190 }
	__asm { jmp L_0067f3e1 }
	__asm { L_0067f3df: }
	__asm { xor eax, eax }
	__asm { L_0067f3e1: }
	__asm { mov edi, dword ptr [esi + 0x20] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { test edi, edi }
	__asm { je L_0067f3ff }
	__asm { mov ecx, edi }
	__asm { call fn_00693270 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067f3ff: }
	__asm { push 0x60 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { test edi, edi }
	__asm { je L_0067f42c }
	__asm { push 0x665970 }
	__asm { push 0x478c90 }
	__asm { push 8 }
	__asm { push 0xc }
	__asm { push edi }
	__asm { call fn_00cf676b }
	__asm { jmp L_0067f42e }
	__asm { L_0067f42c: }
	__asm { xor edi, edi }
	__asm { L_0067f42e: }
	__asm { mov ebx, dword ptr [esi + 0x24] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov dword ptr [esi + 0x24], edi }
	__asm { test ebx, ebx }
	__asm { je L_0067f454 }
	__asm { push 0x665970 }
	__asm { push 8 }
	__asm { push 0xc }
	__asm { push ebx }
	__asm { call fn_00cf669e }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067f454: }
	__asm { push 0x1c }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { test edi, edi }
	__asm { je L_0067f495 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_006802f0 }
	__asm { add esp, 8 }
	__asm { push 3 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_005ebd40 }
	__asm { jmp L_0067f497 }
	__asm { L_0067f495: }
	__asm { xor eax, eax }
	__asm { L_0067f497: }
	__asm { mov edi, dword ptr [esi + 0x1dc] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0xb }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [esi + 0x1dc], eax }
	__asm { test edi, edi }
	__asm { je L_0067f4ea }
	__asm { mov edi, dword ptr [edi + 4] }
	__asm { test edi, edi }
	__asm { je L_0067f4df }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0067f4df }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0067f4df }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0067f4df: }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067f4ea: }
	__asm { test byte ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [ebp - 4], 6 }
	__asm { je L_0067f521 }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { test edi, edi }
	__asm { je L_0067f521 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0067f521 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0067f521 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0067f521: }
	__asm { push 0x110 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { test eax, eax }
	__asm { je L_0067f546 }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { call fn_00690900 }
	__asm { jmp L_0067f548 }
	__asm { L_0067f546: }
	__asm { xor eax, eax }
	__asm { L_0067f548: }
	__asm { mov edi, dword ptr [esi + 0x1e0] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov dword ptr [esi + 0x1e0], eax }
	__asm { test edi, edi }
	__asm { je L_0067f56c }
	__asm { mov ecx, edi }
	__asm { call fn_00690de0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067f56c: }
	__asm { push 0x50 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 0xd }
	__asm { test eax, eax }
	__asm { je L_0067f58b }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { call fn_006967b0 }
	__asm { jmp L_0067f58d }
	__asm { L_0067f58b: }
	__asm { xor eax, eax }
	__asm { L_0067f58d: }
	__asm { mov ecx, dword ptr [esi + 0x1e4] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov dword ptr [esi + 0x1e4], eax }
	__asm { test ecx, ecx }
	__asm { je L_0067f5a7 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0067f5a7: }
	__asm { push 0x80 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 0xe }
	__asm { test eax, eax }
	__asm { je L_0067f5c9 }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { call fn_0061e9a0 }
	__asm { jmp L_0067f5cb }
	__asm { L_0067f5c9: }
	__asm { xor eax, eax }
	__asm { L_0067f5cb: }
	__asm { mov ecx, dword ptr [esi + 0x1ec] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov dword ptr [esi + 0x1ec], eax }
	__asm { test ecx, ecx }
	__asm { je L_0067f5e5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0067f5e5: }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov ecx, ebx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { cmp byte ptr [eax + 0x1b], 0 }
	__asm { je L_0067f654 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x10] }
	__asm { push 0x1c }
	__asm { mov edi, eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 0xf }
	__asm { test eax, eax }
	__asm { je L_0067f62e }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { shr ecx, 1 }
	__asm { push ecx }
	__asm { shr edx, 1 }
	__asm { push edx }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00680810 }
	__asm { jmp L_0067f630 }
	__asm { L_0067f62e: }
	__asm { xor eax, eax }
	__asm { L_0067f630: }
	__asm { mov edi, dword ptr [esi + 0x1e8] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov dword ptr [esi + 0x1e8], eax }
	__asm { test edi, edi }
	__asm { je L_0067f654 }
	__asm { mov ecx, edi }
	__asm { call fn_00680be0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0067f654: }
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

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_004b2270();
extern "C" void fn_004b3a00();
extern "C" void fn_0068a730();
extern "C" void fn_0068b390();
extern "C" void fn_0068bca0();
// FUNCTION: ROBLOXSTUDIO 0x00689070
extern "C" __declspec(naked) void asm_00689070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd13368 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movzx eax, byte ptr [esi] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { shr edi, 3 }
	__asm { add edi, dword ptr [ecx] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_006890a4 }
	__asm { inc eax }
	__asm { jmp L_006890a6 }
	__asm { L_006890a4: }
	__asm { xor eax, eax }
	__asm { L_006890a6: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b2270 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_006890d6 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006890d6: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_006890e0 }
	__asm { inc eax }
	__asm { jmp L_006890e2 }
	__asm { L_006890e0: }
	__asm { xor eax, eax }
	__asm { L_006890e2: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0068a730 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00689111 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00689111: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push ebx }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_0068bca0 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b3a00 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov byte ptr [edi + 4], 1 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_0068918d }
	__asm { call fn_0068b390 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0068918d }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0068918d }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_0068918d }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0068918d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop ebx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0068b160();
extern "C" void fn_0068b2b0();
extern "C" void fn_0068b320();
extern "C" void fn_006dea40();
extern "C" void fn_00c7acc0();
// FUNCTION: ROBLOXSTUDIO 0x00689850
extern "C" __declspec(naked) void asm_00689850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd133e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { call fn_0068b2b0 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_0068b160 }
	__asm { mov edi, 0x80000000 }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { mov ebx, dword ptr [g_00e10198] }
	__asm { test eax, 0x40000000 }
	__asm { jne L_006898ba }
	__asm { cmp eax, edi }
	__asm { jle L_006898ba }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_006898ba }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call ebx }
	__asm { L_006898ba: }
	__asm { call fn_0068b320 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_0068b160 }
	__asm { lock xadd dword ptr [esi], edi }
	__asm { test edi, 0x40000000 }
	__asm { jne L_006898fb }
	__asm { cmp edi, 0x80000000 }
	__asm { jle L_006898fb }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_006898fb }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call ebx }
	__asm { L_006898fb: }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { push 0xb }
	__asm { mov ecx, ebx }
	__asm { call fn_00c7acc0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006dea40 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { divss xmm1, dword ptr [ecx + 8] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { divss xmm2, dword ptr [ecx + 4] }
	__asm { divss xmm0, dword ptr [ecx] }
	__asm { movss dword ptr [ebx + 0x20], xmm1 }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebx + 0x18], xmm0 }
	__asm { movss dword ptr [ebx + 0x1c], xmm2 }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { movaps xmm3, xmm1 }
	__asm { mulss xmm3, dword ptr [ecx + 4] }
	__asm { movaps xmm2, xmm1 }
	__asm { mulss xmm2, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mulss xmm0, xmm1 }
	__asm { pop edi }
	__asm { movss dword ptr [ebx + 0x28], xmm3 }
	__asm { movss dword ptr [ebx + 0x24], xmm0 }
	__asm { movss dword ptr [ebx + 0x2c], xmm2 }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040faa0();
extern "C" void fn_0068b1b0();
extern "C" void fn_0068b240();
// FUNCTION: ROBLOXSTUDIO 0x00689b10
extern "C" __declspec(naked) void asm_00689b10()
{
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 4] }
	__asm { test edi, edi }
	__asm { je L_00689ba6 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { call fn_0068b240 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { cmp ebx, 1 }
	__asm { jne L_00689b3e }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { jmp L_00689b48 }
	__asm { L_00689b3e: }
	__asm { push ebx }
	__asm { push edi }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_0068b1b0 }
	__asm { L_00689b48: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00689ba4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00689ba4 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00689ba4 }
	__asm { lea edi, [esi + 4] }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { jne L_00689b9d }
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
	__asm { je L_00689b9b }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { ret }
	__asm { L_00689b9b: }
	__asm { mov esi, edx }
	__asm { L_00689b9d: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00689ba4: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00689ba6: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" void fn_004b0770();
extern "C" void fn_004b2110();
extern "C" void fn_0068a6b0();
extern "C" void fn_00cde850();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00689e40
extern "C" __declspec(naked) void asm_00689e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd13418 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { movzx eax, byte ptr [edi] }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov ebx, esi }
	__asm { shr ebx, 3 }
	__asm { inc eax }
	__asm { add ebx, esi }
	__asm { add eax, edi }
	__asm { je L_00689e77 }
	__asm { inc eax }
	__asm { jmp L_00689e79 }
	__asm { L_00689e77: }
	__asm { xor eax, eax }
	__asm { L_00689e79: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004b2110 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_00689f31 }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_00689e9c }
	__asm { inc eax }
	__asm { jmp L_00689e9e }
	__asm { L_00689e9c: }
	__asm { xor eax, eax }
	__asm { L_00689e9e: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0068a6b0 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_00689ec6 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00689ec6: }
	__asm { add eax, 4 }
	__asm { je L_00689ed8 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { L_00689ed8: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_00cde850 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004b0770 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00689f2f }
	__asm { cmp byte ptr [ebp - 0xf], 0 }
	__asm { je L_00689f26 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00689f26 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00689f26 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00689f26: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00689f2f: }
	__asm { mov eax, edi }
	__asm { L_00689f31: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_004b0770();
extern "C" void fn_006892e0();
extern "C" void fn_0068a7e0();
extern "C" void fn_0068b320();
extern "C" void fn_0068bc20();
// FUNCTION: ROBLOXSTUDIO 0x00689f50
extern "C" __declspec(naked) void asm_00689f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movsx esi, word ptr [ebx] }
	__asm { movsx edx, word ptr [ebx + 2] }
	__asm { sub esi, 0x61c88647 }
	__asm { mov eax, esi }
	__asm { shl eax, 6 }
	__asm { add edx, eax }
	__asm { mov eax, esi }
	__asm { shr eax, 2 }
	__asm { add eax, 0x9e3779b9 }
	__asm { add eax, edx }
	__asm { xor esi, eax }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { movsx ecx, word ptr [ebx + 4] }
	__asm { mov eax, esi }
	__asm { shl eax, 6 }
	__asm { add ecx, eax }
	__asm { add ecx, 0x9e3779b9 }
	__asm { mov eax, esi }
	__asm { shr eax, 2 }
	__asm { add eax, ecx }
	__asm { movzx ecx, word ptr [ebx + 6] }
	__asm { xor esi, eax }
	__asm { mov eax, esi }
	__asm { shl eax, 6 }
	__asm { add ecx, eax }
	__asm { mov eax, esi }
	__asm { shr eax, 2 }
	__asm { add eax, 0x9e3779b9 }
	__asm { add ecx, eax }
	__asm { movzx eax, byte ptr [edi] }
	__asm { xor ecx, esi }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { add eax, edi }
	__asm { je L_00689fd6 }
	__asm { inc eax }
	__asm { jmp L_00689fd8 }
	__asm { L_00689fd6: }
	__asm { xor eax, eax }
	__asm { L_00689fd8: }
	__asm { push eax }
	__asm { push ebx }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_006892e0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_0068a0ae }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_00689ffb }
	__asm { inc eax }
	__asm { jmp L_00689ffd }
	__asm { L_00689ffb: }
	__asm { xor eax, eax }
	__asm { L_00689ffd: }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov ebx, dword ptr [ebx + 4] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0068a7e0 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { test eax, eax }
	__asm { je L_0068a02d }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { L_0068a02d: }
	__asm { add eax, 8 }
	__asm { je L_0068a038 }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_0068a038: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 0x13], 1 }
	__asm { call fn_0068bc20 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004b0770 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0068a0ac }
	__asm { call fn_0068b320 }
	__asm { mov esi, eax }
	__asm { mov ecx, esi }
	__asm { call fn_0040ed30 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0068a0ac }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0068a0ac }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_0068a0ac }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0068a0ac: }
	__asm { mov eax, ebx }
	__asm { L_0068a0ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0068a0d0
extern "C" __declspec(naked) void asm_0068a0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29038 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_0068a117 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0068a117: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0068a152 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0068a152 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0068a152 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0068a152: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_006415e0();
extern "C" void fn_0068b240();
extern "C" void fn_0068b610();
// FUNCTION: ROBLOXSTUDIO 0x0068b400
extern "C" __declspec(naked) void asm_0068b400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sub ecx, dword ptr [edi] }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, dword ptr [ebp + 8] }
	__asm { jae L_0068b47d }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, dword ptr [esi] }
	__asm { L_0068b428: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ebx, ecx }
	__asm { je L_0068b47b }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov ecx, edi }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea eax, [eax - 3] }
	__asm { lea eax, [ebx + eax*4] }
	__asm { push eax }
	__asm { call fn_006415e0 }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp ebx, eax }
	__asm { je L_0068b461 }
	__asm { add eax, -0xc }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_0068b461: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sub ecx, dword ptr [edi] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, dword ptr [ebp + 8] }
	__asm { jb L_0068b428 }
	__asm { L_0068b47b: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_0068b47d: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0068b240 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_0068b49e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_0068b4a8 }
	__asm { L_0068b49e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0068b610 }
	__asm { mov esi, eax }
	__asm { L_0068b4a8: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0068b4d4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0068b4d4 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_0068b4d4 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0068b4d4: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0068b320();
extern "C" void fn_0068b610();
// FUNCTION: ROBLOXSTUDIO 0x0068b4e0
extern "C" __declspec(naked) void asm_0068b4e0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0068b320 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_0068b4fe }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_0068b508 }
	__asm { L_0068b4fe: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0068b610 }
	__asm { mov esi, eax }
	__asm { L_0068b508: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0068b534 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0068b534 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_0068b534 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0068b534: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0068b390();
extern "C" void fn_0068b610();
// FUNCTION: ROBLOXSTUDIO 0x0068b540
extern "C" __declspec(naked) void asm_0068b540()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0068b390 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_0068b55e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_0068b568 }
	__asm { L_0068b55e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0068b610 }
	__asm { mov esi, eax }
	__asm { L_0068b568: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0068b594 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0068b594 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_0068b594 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0068b594: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0068b240();
extern "C" void fn_0068b8a0();
// FUNCTION: ROBLOXSTUDIO 0x0068ba60
extern "C" __declspec(naked) void asm_0068ba60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0068b240 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0068b8a0 }
	__asm { mov esi, eax }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0068baac }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0068baac }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_0068baac }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0068baac: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0068fa70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0068f9b0
extern "C" __declspec(naked) void asm_0068f9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1df90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_00403540 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_0068fa2c }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068fa2c: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_0068fa3d }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0068fa3d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
	__asm { add ecx, 0x10 }
	__asm { jmp fn_0068fa70 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp fn_0068fa70 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0061e5c0();
extern "C" void fn_00665970();
extern "C" void fn_00692c00();
extern "C" void fn_00692c40();
extern "C" void fn_006939a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00693090
extern "C" __declspec(naked) void asm_00693090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13c30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, eax }
	__asm { sub ecx, edx }
	__asm { sar ecx, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp ecx, esi }
	__asm { jbe L_00693103 }
	__asm { shl esi, 4 }
	__asm { add esi, edx }
	__asm { cmp esi, edx }
	__asm { jne L_006930f2 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [edi] }
	__asm { L_006930dc: }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { L_006930df: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006930f2: }
	__asm { cmp esi, eax }
	__asm { je L_006930df }
	__asm { push esi }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_00692c00 }
	__asm { add esp, 0xc }
	__asm { jmp L_006930dc }
	__asm { L_00693103: }
	__asm { jae L_006930df }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0061e5c0 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, edx }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov ecx, esi }
	__asm { sar eax, 4 }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00692c40 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { sar eax, 4 }
	__asm { sub esi, eax }
	__asm { add esp, 0x14 }
	__asm { shl esi, 4 }
	__asm { add dword ptr [edi + 4], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00665970 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { push 8 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { call fn_006939a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00693d90();
extern "C" void fn_00693f50();
extern "C" void fn_006b9740();
extern "C" void fn_00a49340();
extern "C" void fn_00b5b160();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00693c80
extern "C" __declspec(naked) void asm_00693c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13ce0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 5 }
	__asm { test al, al }
	__asm { je L_00693ceb }
	__asm { cmp dword ptr [esi + 0x60], 0 }
	__asm { je L_00693ceb }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00693cda }
	__asm { push 0x59 }
	__asm { push 0xe3f9a0 }
	__asm { push 0xe40968 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00693ceb }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00693cda: }
	__asm { movzx eax, al }
	__asm { push 0xe40978 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00693ceb: }
	__asm { lea ecx, [esi + 0xa4] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00a49340 }
	__asm { lea ecx, [esi + 0x84] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00693d90 }
	__asm { cmp dword ptr [esi + 0x78], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { je L_00693d3f }
	__asm { lea ecx, [esi + 0x78] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 0x78] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { L_00693d3f: }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b5b160 }
	__asm { push 0x665970 }
	__asm { push 4 }
	__asm { push 0xc }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cf669e }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00693f50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { jmp fn_00693d90 }
}

extern "C" char g_00e10198[];
extern "C" char g_012de4e4[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00694e40();
// FUNCTION: ROBLOXSTUDIO 0x00694200
extern "C" __declspec(naked) void asm_00694200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00694e40 }
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
	__asm { jne L_00694249 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00694249 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_00694249 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00694249: }
	__asm { add dword ptr [g_012de4e4], 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_012de4dc[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00694eb0();
// FUNCTION: ROBLOXSTUDIO 0x00694260
extern "C" __declspec(naked) void asm_00694260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00694eb0 }
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
	__asm { jne L_006942a9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_006942a9 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_006942a9 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_006942a9: }
	__asm { add dword ptr [g_012de4dc], 0x30 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_00694e40();
// FUNCTION: ROBLOXSTUDIO 0x00695120
extern "C" __declspec(naked) void asm_00695120()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00694e40 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_0069513e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00695148 }
	__asm { L_0069513e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00695148: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00695174 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00695174 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00695174 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00695174: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_00694eb0();
// FUNCTION: ROBLOXSTUDIO 0x00695180
extern "C" __declspec(naked) void asm_00695180()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00694eb0 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_0069519e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_006951a8 }
	__asm { L_0069519e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_006951a8: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_006951d4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_006951d4 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_006951d4 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_006951d4: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00698250
extern "C" __declspec(naked) void asm_00698250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd14051 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov ebx, dword ptr [edi + 0x64] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 9 }
	__asm { test ebx, ebx }
	__asm { je L_006982a6 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006982a6 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006982a6 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006982a6: }
	__asm { mov ebx, dword ptr [edi + 0x5c] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { test ebx, ebx }
	__asm { je L_006982d5 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006982d5 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006982d5 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006982d5: }
	__asm { push 0x4033d0 }
	__asm { push 2 }
	__asm { push 8 }
	__asm { lea eax, [edi + 0x48] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_00cf669e }
	__asm { push 0x4033d0 }
	__asm { push 2 }
	__asm { push 8 }
	__asm { lea eax, [edi + 0x38] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call fn_00cf669e }
	__asm { mov ebx, dword ptr [edi + 0x34] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { test ebx, ebx }
	__asm { je L_00698330 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00698330 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00698330 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00698330: }
	__asm { mov ebx, dword ptr [edi + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test ebx, ebx }
	__asm { je L_0069835f }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069835f }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069835f }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069835f: }
	__asm { mov ebx, dword ptr [edi + 0x24] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test ebx, ebx }
	__asm { je L_0069838e }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069838e }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069838e }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069838e: }
	__asm { mov ebx, dword ptr [edi + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ebx, ebx }
	__asm { je L_006983bd }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006983bd }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006983bd }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006983bd: }
	__asm { mov ebx, dword ptr [edi + 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ebx, ebx }
	__asm { je L_006983ec }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006983ec }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006983ec }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006983ec: }
	__asm { mov ebx, dword ptr [edi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_0069841b }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069841b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069841b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069841b: }
	__asm { mov edi, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0069844c }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069844c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0069844c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069844c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00419ef0();
// FUNCTION: ROBLOXSTUDIO 0x0069ee00
extern "C" __declspec(naked) void asm_0069ee00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_0069ee3f }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_0069ee3f }
	__asm { sub edi, ecx }
	__asm { sar edi, 3 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_0069ee2a }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00419ef0 }
	__asm { L_0069ee2a: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea edx, [eax + edi*8] }
	__asm { test ecx, ecx }
	__asm { je L_0069ee6e }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { jmp L_0069ee5b }
	__asm { L_0069ee3f: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_0069ee4d }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00419ef0 }
	__asm { L_0069ee4d: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0069ee6e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { L_0069ee5b: }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_0069ee6e }
	__asm { mov ecx, 1 }
	__asm { add eax, 8 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0069ee6e: }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0121590c[];
extern "C" void fn_004033d0();
extern "C" void fn_0061ded0();
extern "C" void fn_006742b0();
extern "C" void fn_0069e390();
extern "C" void fn_0069e8d0();
extern "C" void fn_00827110();
extern "C" void fn_00963570();
extern "C" void fn_009894d0();
extern "C" void fn_00a00d30();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0069f3b0
extern "C" __declspec(naked) void asm_0069f3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd145b0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { movzx eax, byte ptr [esi + 0xc] }
	__asm { lea edi, [esi + 0xc] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { add eax, edi }
	__asm { je L_0069f3e2 }
	__asm { inc eax }
	__asm { jmp L_0069f3e4 }
	__asm { L_0069f3e2: }
	__asm { xor eax, eax }
	__asm { L_0069f3e4: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push ebx }
	__asm { call fn_00827110 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_009894d0 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_0069f41b }
	__asm { pop edi }
	__asm { pop esi }
	__asm { add eax, 0x1c }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0069f41b: }
	__asm { fld dword ptr [g_0121590c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { fstp dword ptr [esp] }
	__asm { push ebx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1bc] }
	__asm { call fn_00a00d30 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00963570 }
	__asm { add esp, 8 }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0069f47f }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069f47f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0069f47f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0069f47f: }
	__asm { cmp dword ptr [ebp - 0x10], 0 }
	__asm { jne L_0069f489 }
	__asm { xor edi, edi }
	__asm { jmp L_0069f4e5 }
	__asm { L_0069f489: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_0069e390 }
	__asm { cmp dword ptr [ebp - 0x10], 1 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { jne L_0069f4e5 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [eax + 4] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call fn_0069e8d0 }
	__asm { push 0x1c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0069f4cf }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_006742b0 }
	__asm { jmp L_0069f4d1 }
	__asm { L_0069f4cf: }
	__asm { xor eax, eax }
	__asm { L_0069f4d1: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0061ded0 }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_004033d0 }
	__asm { L_0069f4e5: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0069f516 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0069f516 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0069f516 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0069f516: }
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

extern "C" char g_01038214[];
extern "C" char g_01038248[];
extern "C" void fn_00672ce0();
extern "C" void fn_00672f50();
extern "C" void fn_00673030();
extern "C" void fn_006aab60();
extern "C" void fn_006ab790();
extern "C" void fn_006e2150();
// FUNCTION: ROBLOXSTUDIO 0x006aaac0
extern "C" __declspec(naked) void asm_006aaac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x174 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x174] }
	__asm { call fn_00672ce0 }
	__asm { call fn_006e2150 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x174] }
	__asm { call fn_00672f50 }
	__asm { fld1 }
	__asm { movzx eax, byte ptr [esi + 5] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0x10 }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fld dword ptr [g_01038248] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fild dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { jns L_006aab10 }
	__asm { fadd dword ptr [g_01038214] }
	__asm { L_006aab10: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fild dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { jns L_006aab24 }
	__asm { fadd dword ptr [g_01038214] }
	__asm { L_006aab24: }
	__asm { lea ecx, [ebp - 0x174] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_00673030 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x174] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_006ab790 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { int 3 }
	__asm { jmp fn_006aab60 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x006b1720
extern "C" __declspec(naked) void asm_006b1720()
{
	__asm { cmp dword ptr [ecx + 0x98], 0 }
	__asm { jne L_006b172f }
	__asm { mov eax, 0x8004020a }
	__asm { ret }
	__asm { L_006b172f: }
	__asm { mov eax, dword ptr [ecx + 0x98] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { push eax }
	__asm { call edx }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov byte ptr [ecx + 0x24], 0 }
	__asm { mov ecx, dword ptr [ecx + 0x98] }
	__asm { test ecx, ecx }
	__asm { jne L_006b1754 }
	__asm { mov eax, 0x8004020a }
	__asm { ret }
	__asm { L_006b1754: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { call ecx }
	__asm { ret }
}

extern "C" char g_00e132cc[];
extern "C" void fn_006b2960();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x006b2a10
extern "C" __declspec(naked) void asm_006b2a10()
{
	__asm { push esi }
	__asm { push 0x48 }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf6804 }
	__asm { mov eax, 1 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
	__asm { int 3 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp ebx, esi }
	__asm { je L_006b2a85 }
	__asm { cmp dword ptr [esi + 0x40], 0 }
	__asm { je L_006b2a5a }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { push eax }
	__asm { call dword ptr [g_00e132cc] }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { L_006b2a5a: }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { test eax, eax }
	__asm { je L_006b2a70 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push eax }
	__asm { call edx }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { L_006b2a70: }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_006b2960 }
	__asm { test eax, eax }
	__asm { jge L_006b2a85 }
	__asm { pop esi }
	__asm { mov eax, 0x8007000e }
	__asm { pop ebx }
	__asm { ret 4 }
	__asm { L_006b2a85: }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { ret 4 }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006b71b0
extern "C" __declspec(naked) void asm_006b71b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], 0xe4360c }
	__asm { mov edi, dword ptr [esi + 0x30] }
	__asm { test edi, edi }
	__asm { je L_006b71e9 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea edx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [edx], eax }
	__asm { jne L_006b71e8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006b71e8 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006b71e8: }
	__asm { pop ebx }
	__asm { L_006b71e9: }
	__asm { mov dword ptr [esi], 0xe1823c }
	__asm { cmp dword ptr [esi + 0x28], 0x10 }
	__asm { jb L_006b7200 }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006b7200: }
	__asm { mov dword ptr [esi + 0x28], 0xf }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, -1 }
	__asm { je L_006b722e }
	__asm { push eax }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_006b722e: }
	__asm { ret }
}

extern "C" void fn_0067c340();
extern "C" void fn_0067cb60();
extern "C" void fn_0067e970();
extern "C" void fn_0067ea10();
extern "C" void fn_0067eab0();
extern "C" void fn_00cf6a20();
// FUNCTION: ROBLOXSTUDIO 0x006b8d60
extern "C" __declspec(naked) void asm_006b8d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { movzx ecx, word ptr [esi + 0xc] }
	__asm { push ecx }
	__asm { mov edx, esp }
	__asm { lea eax, [ecx + 1] }
	__asm { mov edi, 1 }
	__asm { mov word ptr [edx], di }
	__asm { cmp eax, 2 }
	__asm { jl L_006b8efe }
	__asm { cmp ecx, 0x1f }
	__asm { ja L_006b8f08 }
	__asm { mov word ptr [edx], cx }
	__asm { mov ax, word ptr [esi + 0x10] }
	__asm { inc ax }
	__asm { movzx ecx, ax }
	__asm { push ecx }
	__asm { mov edx, esp }
	__asm { lea eax, [ecx + 1] }
	__asm { mov word ptr [edx], di }
	__asm { cmp eax, 2 }
	__asm { jl L_006b8f12 }
	__asm { cmp ecx, 0xc }
	__asm { ja L_006b8f1c }
	__asm { mov word ptr [edx], cx }
	__asm { mov eax, 0x76c }
	__asm { add ax, word ptr [esi + 0x14] }
	__asm { movzx ecx, ax }
	__asm { push ecx }
	__asm { mov edx, esp }
	__asm { mov eax, 0x578 }
	__asm { mov word ptr [edx], ax }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, 0x579 }
	__asm { jl L_006b8f26 }
	__asm { mov eax, 0x2710 }
	__asm { cmp cx, ax }
	__asm { ja L_006b8f33 }
	__asm { mov word ptr [edx], cx }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_0067cb60 }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { test edx, edx }
	__asm { js L_006b8e61 }
	__asm { test ecx, ecx }
	__asm { js L_006b8e61 }
	__asm { test eax, eax }
	__asm { js L_006b8e61 }
	__asm { mov eax, edx }
	__asm { cdq }
	__asm { mov edi, eax }
	__asm { mov ebx, edx }
	__asm { shld ebx, edi, 4 }
	__asm { shl edi, 4 }
	__asm { sub edi, eax }
	__asm { sbb ebx, edx }
	__asm { shld ebx, edi, 2 }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { shl edi, 2 }
	__asm { add edi, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { adc ebx, edx }
	__asm { mov esi, edi }
	__asm { mov ecx, ebx }
	__asm { shld ecx, esi, 4 }
	__asm { shl esi, 4 }
	__asm { sub esi, edi }
	__asm { sbb ecx, ebx }
	__asm { shld ecx, esi, 2 }
	__asm { cdq }
	__asm { shl esi, 2 }
	__asm { push 0 }
	__asm { add esi, eax }
	__asm { push 0xf4240 }
	__asm { adc ecx, edx }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00cf6a20 }
	__asm { mov edi, eax }
	__asm { mov eax, edx }
	__asm { jmp L_006b8ed8 }
	__asm { L_006b8e61: }
	__asm { mov eax, edx }
	__asm { cdq }
	__asm { xor eax, edx }
	__asm { sub eax, edx }
	__asm { cdq }
	__asm { mov edi, eax }
	__asm { mov ebx, edx }
	__asm { shld ebx, edi, 4 }
	__asm { shl edi, 4 }
	__asm { sub edi, eax }
	__asm { sbb ebx, edx }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { xor eax, edx }
	__asm { sub eax, edx }
	__asm { shld ebx, edi, 2 }
	__asm { cdq }
	__asm { shl edi, 2 }
	__asm { add edi, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { adc ebx, edx }
	__asm { mov esi, edi }
	__asm { mov ecx, ebx }
	__asm { shld ecx, esi, 4 }
	__asm { shl esi, 4 }
	__asm { sub esi, edi }
	__asm { sbb ecx, ebx }
	__asm { cdq }
	__asm { shld ecx, esi, 2 }
	__asm { xor eax, edx }
	__asm { sub eax, edx }
	__asm { cdq }
	__asm { push 0 }
	__asm { shl esi, 2 }
	__asm { add esi, eax }
	__asm { push 0xf4240 }
	__asm { adc ecx, edx }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00cf6a20 }
	__asm { mov ecx, eax }
	__asm { xor eax, eax }
	__asm { mov esi, edx }
	__asm { cdq }
	__asm { xor eax, edx }
	__asm { xor edi, edi }
	__asm { xor edi, edx }
	__asm { sub edi, edx }
	__asm { sbb eax, edx }
	__asm { neg edi }
	__asm { adc eax, 0 }
	__asm { neg eax }
	__asm { sub edi, ecx }
	__asm { sbb eax, esi }
	__asm { L_006b8ed8: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], edi }
	__asm { call fn_0067c340 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006b8efe: }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push 1 }
	__asm { call fn_0067e970 }
	__asm { L_006b8f08: }
	__asm { push 1 }
	__asm { push ecx }
	__asm { push 1 }
	__asm { call fn_0067e970 }
	__asm { L_006b8f12: }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push 1 }
	__asm { call fn_0067ea10 }
	__asm { L_006b8f1c: }
	__asm { push 1 }
	__asm { push ecx }
	__asm { push 1 }
	__asm { call fn_0067ea10 }
	__asm { L_006b8f26: }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push 0x578 }
	__asm { call fn_0067eab0 }
	__asm { L_006b8f33: }
	__asm { push 1 }
	__asm { push ecx }
	__asm { push 0x578 }
	__asm { call fn_0067eab0 }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006bb510
extern "C" __declspec(naked) void asm_006bb510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd163a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040ed30 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { or edi, 0xffffffff }
	__asm { add edx, 8 }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [edx], eax }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_006bb57c }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_006bb57c }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_006bb57c }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_006bb57c: }
	__asm { mov esi, dword ptr [ebx] }
	__asm { test esi, esi }
	__asm { je L_006bb5bc }
	__asm { lea eax, [esi + 0x10] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006bb5bc }
	__asm { test esi, esi }
	__asm { je L_006bb5bc }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [g_00e10194] }
	__asm { test eax, eax }
	__asm { je L_006bb5a5 }
	__asm { cmp eax, -1 }
	__asm { je L_006bb5a5 }
	__asm { push eax }
	__asm { call edi }
	__asm { L_006bb5a5: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_006bb5b3 }
	__asm { cmp eax, -1 }
	__asm { je L_006bb5b3 }
	__asm { push eax }
	__asm { call edi }
	__asm { L_006bb5b3: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006bb5bc: }
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
extern "C" char g_00e131b0[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_006bc0d0();
// FUNCTION: ROBLOXSTUDIO 0x006bb5d0
extern "C" __declspec(naked) void asm_006bb5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd163dc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax + 0x28], 1 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea ecx, [ecx + 8] }
	__asm { call fn_006bc0d0 }
	__asm { cmp byte ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_006bb654 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_006bb654 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_006bb654 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_006bb654 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_006bb654: }
	__asm { lea ecx, [esi + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e131b0] }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_006bb697 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006bb696 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006bb696 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006bb696: }
	__asm { pop edi }
	__asm { L_006bb697: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e131cc[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_006bb9d0();
extern "C" void fn_006bc230();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006bbb00
extern "C" __declspec(naked) void asm_006bbb00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1645d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { call fn_0040ed30 }
	__asm { cmp dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { jne L_006bbb63 }
	__asm { push 0x7fffffff }
	__asm { push 0 }
	__asm { call fn_006bb9d0 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { add esp, 8 }
	__asm { mov edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_006bbb60 }
	__asm { cmp ecx, -1 }
	__asm { je L_006bbb60 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_006bbb60: }
	__asm { mov dword ptr [esi + 0x1c], edi }
	__asm { L_006bbb63: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, dword ptr [esi + 0x14] }
	__asm { je L_006bbbad }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [eax - 4] }
	__asm { mov cl, byte ptr [ecx + 0xc] }
	__asm { test cl, cl }
	__asm { jne L_006bbbad }
	__asm { mov ecx, dword ptr [eax - 4] }
	__asm { mov edx, 1 }
	__asm { add ecx, 8 }
	__asm { mov eax, edx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax - 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { test eax, eax }
	__asm { je L_006bbc26 }
	__asm { add eax, 0x10 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { jmp L_006bbc26 }
	__asm { L_006bbbad: }
	__asm { push 0x14 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_006bbbf9 }
	__asm { push 0x7fffffff }
	__asm { push 0 }
	__asm { call fn_006bb9d0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [edi], eax }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e131cc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 8], 1 }
	__asm { mov byte ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { jmp L_006bbbfb }
	__asm { L_006bbbf9: }
	__asm { xor edi, edi }
	__asm { L_006bbbfb: }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { test edi, edi }
	__asm { je L_006bbc0e }
	__asm { lea eax, [edi + 0x10] }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { L_006bbc0e: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_006bc230 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [edi], eax }
	__asm { L_006bbc26: }
	__asm { mov eax, 0x80000000 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { lock xadd dword ptr [esi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_006bbc5d }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_006bbc5d }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_006bbc5d }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_006bbc5d: }
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

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10138[];
extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040faa0();
extern "C" void fn_0040fb10();
extern "C" void fn_006ba230();
// FUNCTION: ROBLOXSTUDIO 0x006bc0d0
extern "C" __declspec(naked) void asm_006bc0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd16498 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { test eax, eax }
	__asm { je L_006bc220 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { call fn_0040ed30 }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_006bc156 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ebx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_006bc220 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_006bc220 }
	__asm { lock bts dword ptr [ebx], 0x1e }
	__asm { jb L_006bc220 }
	__asm { mov ecx, ebx }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006bc156: }
	__asm { push esi }
	__asm { mov eax, ecx }
	__asm { push edi }
	__asm { sub eax, ecx }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { push dword ptr [ebx + 0x1c] }
	__asm { call dword ptr [g_00e10138] }
	__asm { mov esi, dword ptr [ebx + 0x10] }
	__asm { mov edi, dword ptr [ebx + 0x14] }
	__asm { cmp esi, edi }
	__asm { je L_006bc190 }
	__asm { L_006bc175: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push dword ptr [eax] }
	__asm { mov byte ptr [eax + 0xc], 1 }
	__asm { call dword ptr [g_00e10138] }
	__asm { add esi, 4 }
	__asm { cmp esi, edi }
	__asm { jne L_006bc175 }
	__asm { L_006bc190: }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x14] }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { call fn_006ba230 }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov edi, dword ptr [g_00e10194] }
	__asm { mov dword ptr [ebx + 0x14], eax }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { je L_006bc1c0 }
	__asm { cmp eax, -1 }
	__asm { je L_006bc1c0 }
	__asm { push eax }
	__asm { call edi }
	__asm { L_006bc1c0: }
	__asm { mov dword ptr [ebx + 0x1c], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ebx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_006bc21e }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_006bc21e }
	__asm { lock bts dword ptr [ebx], 0x1e }
	__asm { jb L_006bc21e }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { add ebx, 4 }
	__asm { test esi, esi }
	__asm { jne L_006bc217 }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [ebx], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_006bc215 }
	__asm { push edx }
	__asm { call edi }
	__asm { jmp L_006bc217 }
	__asm { L_006bc215: }
	__asm { mov esi, edx }
	__asm { L_006bc217: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_006bc21e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_006bc220: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e10528[];
extern "C" char g_00e131a0[];
extern "C" void fn_0040ebf0();
extern "C" void fn_0040fb10();
// FUNCTION: ROBLOXSTUDIO 0x006bc760
extern "C" __declspec(naked) void asm_006bc760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd16510 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x60 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { jne L_006bc7d3 }
	__asm { call dword ptr [g_00e131a0] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 0x10], 0xf138a8 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x34], 1 }
	__asm { mov dword ptr [ebp - 0x30], esi }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x40], 0xe32dec }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040ebf0 }
	__asm { L_006bc7d3: }
	__asm { mov al, byte ptr [esi + 4] }
	__asm { test al, al }
	__asm { jne L_006bc829 }
	__asm { call dword ptr [g_00e131a0] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { mov dword ptr [ebp - 0x14], 0xe43994 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x60], 1 }
	__asm { mov dword ptr [ebp - 0x5c], esi }
	__asm { mov dword ptr [ebp - 0x44], 0xf }
	__asm { mov dword ptr [ebp - 0x48], 0 }
	__asm { mov byte ptr [ebp - 0x58], 0 }
	__asm { mov dword ptr [ebp - 0x6c], 0xe32dec }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0040ebf0 }
	__asm { L_006bc829: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_006bc853 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_006bc853 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_006bc853 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_006bc853: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_006bc0d0();
// FUNCTION: ROBLOXSTUDIO 0x006bc870
extern "C" __declspec(naked) void asm_006bc870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd49da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [ecx + 8] }
	__asm { call fn_006bc0d0 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_006bc8eb }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_006bc8eb }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_006bc8eb }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_006bc8eb }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_006bc8eb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c54a0();
// FUNCTION: ROBLOXSTUDIO 0x006bdc50
extern "C" __declspec(naked) void asm_006bdc50()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x800], 0xffffffff }
	__asm { lea eax, [esi + 0x810] }
	__asm { mov dword ptr [esi + 0x804], 0 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x808], 0 }
	__asm { call fn_006c54a0 }
	__asm { fldz }
	__asm { add esp, 4 }
	__asm { fstp qword ptr [esi + 0x818] }
	__asm { xor eax, eax }
	__asm { mov edi, esi }
	__asm { mov ecx, 0x200 }
	__asm { rep stosd }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
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

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)
