// Bundled inline-assembly functions (merged from asmify12).

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

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" char g_00e10500[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0071afb0
extern "C" __declspec(naked) void asm_0071afb0()
{
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov edx, dword ptr [ebx + 8] }
	__asm { push esi }
	__asm { mov esi, 1 }
	__asm { test edx, edx }
	__asm { cmovne esi, edx }
	__asm { L_0071afc8: }
	__asm { mov eax, esi }
	__asm { sub eax, edx }
	__asm { cmp eax, ecx }
	__asm { jb L_0071afd5 }
	__asm { cmp esi, 8 }
	__asm { jae L_0071afe8 }
	__asm { L_0071afd5: }
	__asm { mov eax, 0x4924924 }
	__asm { sub eax, esi }
	__asm { cmp eax, esi }
	__asm { jb L_0071b10f }
	__asm { add esi, esi }
	__asm { jmp L_0071afc8 }
	__asm { L_0071afe8: }
	__asm { sub esi, edx }
	__asm { push ebp }
	__asm { mov ebp, dword ptr [ebx + 0xc] }
	__asm { lea eax, [edx + esi] }
	__asm { mov dword ptr [esp + 0xc], ebp }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { test eax, eax }
	__asm { je L_0071b022 }
	__asm { cmp eax, 0x3fffffff }
	__asm { ja L_0071b01c }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x1c], eax }
	__asm { test eax, eax }
	__asm { jne L_0071b022 }
	__asm { L_0071b01c: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0071b022: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { shl eax, 2 }
	__asm { shl ebp, 2 }
	__asm { push edi }
	__asm { lea edx, [ecx + ebp] }
	__asm { sub eax, edx }
	__asm { add eax, ecx }
	__asm { sar eax, 2 }
	__asm { lea edi, [eax*4] }
	__asm { mov eax, dword ptr [esp + 0x20] }
	__asm { push edi }
	__asm { push edx }
	__asm { add eax, ebp }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { add esp, 0xc }
	__asm { lea edx, [edi + eax] }
	__asm { mov dword ptr [esp + 0x14], edx }
	__asm { cmp ecx, esi }
	__asm { ja L_0071b0a6 }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { sar ebp, 2 }
	__asm { mov eax, esi }
	__asm { lea edi, [ebp*4] }
	__asm { push edi }
	__asm { sub eax, ecx }
	__asm { push edx }
	__asm { push dword ptr [esp + 0x1c] }
	__asm { mov dword ptr [esp + 0x24], eax }
	__asm { mov eax, dword ptr [g_00e10500] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [esp + 0x24] }
	__asm { add esp, 0xc }
	__asm { add edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_0071b094 }
	__asm { xor eax, eax }
	__asm { rep stosd }
	__asm { L_0071b094: }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov ebp, dword ptr [esp + 0x20] }
	__asm { test eax, eax }
	__asm { je L_0071b0ef }
	__asm { mov ecx, eax }
	__asm { mov edi, ebp }
	__asm { jmp L_0071b0eb }
	__asm { L_0071b0a6: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { lea edi, [esi*4] }
	__asm { mov eax, edi }
	__asm { and eax, 0xfffffffc }
	__asm { push eax }
	__asm { mov eax, dword ptr [g_00e10500] }
	__asm { push ecx }
	__asm { push edx }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { lea ecx, [edi + eax] }
	__asm { sub ebp, ecx }
	__asm { add ebp, eax }
	__asm { sar ebp, 2 }
	__asm { lea edi, [ebp*4] }
	__asm { mov ebp, dword ptr [esp + 0x2c] }
	__asm { push edi }
	__asm { push ecx }
	__asm { push ebp }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0x18 }
	__asm { add edi, eax }
	__asm { test esi, esi }
	__asm { je L_0071b0ef }
	__asm { mov ecx, esi }
	__asm { L_0071b0eb: }
	__asm { xor eax, eax }
	__asm { rep stosd }
	__asm { L_0071b0ef: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_0071b100 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0071b100: }
	__asm { add dword ptr [ebx + 8], esi }
	__asm { mov dword ptr [ebx + 4], ebp }
	__asm { pop ebp }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add esp, 0xc }
	__asm { ret 4 }
	__asm { L_0071b10f: }
	__asm { push 0x10060dc }
	__asm { call dword ptr [g_00e10260] }
}

// FUNCTION: ROBLOXSTUDIO 0x0071ca10
extern "C" __declspec(naked) void asm_0071ca10()
{
	__asm { mov edx, dword ptr [esp + 4] }
	__asm { mov eax, dword ptr [edx] }
	__asm { xor dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { xor dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { xor dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { xor dword ptr [ecx + 0xc], eax }
	__asm { mov eax, ecx }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { mov edx, dword ptr [esp + 4] }
	__asm { mov eax, dword ptr [edx] }
	__asm { and dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { and dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { and dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { and dword ptr [ecx + 0xc], eax }
	__asm { mov eax, ecx }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { mov edx, dword ptr [esp + 4] }
	__asm { mov eax, dword ptr [edx] }
	__asm { or dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { or dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { or dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { or dword ptr [ecx + 0xc], eax }
	__asm { mov eax, ecx }
	__asm { ret 4 }
	__asm { int 3 }
	__asm { mov edx, dword ptr [esp + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jne L_0071ca97 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { cmp eax, dword ptr [edx + 4] }
	__asm { jne L_0071ca97 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp eax, dword ptr [edx + 8] }
	__asm { jne L_0071ca97 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { cmp eax, dword ptr [edx + 0xc] }
	__asm { jne L_0071ca97 }
	__asm { mov al, 1 }
	__asm { ret 4 }
	__asm { L_0071ca97: }
	__asm { xor al, al }
	__asm { ret 4 }
}

extern "C" void fn_00cf6e40();
extern "C" void fn_00cf6e60();
// FUNCTION: ROBLOXSTUDIO 0x0071caa0
extern "C" __declspec(naked) void asm_0071caa0()
{
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { push ebp }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov ebp, dword ptr [esp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov eax, ebp }
	__asm { bts edi, eax }
	__asm { xor ebx, ebx }
	__asm { cmp eax, 0x20 }
	__asm { mov ecx, ebp }
	__asm { cmovae ebx, edi }
	__asm { xor edi, ebx }
	__asm { cmp eax, 0x40 }
	__asm { cmovae ebx, edi }
	__asm { add edi, -1 }
	__asm { adc ebx, -1 }
	__asm { mov eax, esi }
	__asm { and edi, esi }
	__asm { and ebx, edx }
	__asm { call fn_00cf6e60 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov ecx, 0x40 }
	__asm { sub ecx, ebp }
	__asm { mov eax, edi }
	__asm { mov edx, ebx }
	__asm { call fn_00cf6e40 }
	__asm { mov ebx, dword ptr [esp + 0x10] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov edi, edx }
	__asm { mov edx, dword ptr [ebx + 0xc] }
	__asm { mov ecx, ebp }
	__asm { call fn_00cf6e60 }
	__asm { add esi, eax }
	__asm { adc edi, edx }
	__asm { mov dword ptr [ebx + 0xc], edi }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 8], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ecx }
	__asm { ret 4 }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [esp + 0xc] }
	__asm { mov edx, dword ptr [eax + 0xc] }
	__asm { push ebp }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov ebp, 0x40 }
	__asm { sub ebp, ecx }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { mov eax, ebp }
	__asm { bts edi, eax }
	__asm { xor ebx, ebx }
	__asm { cmp eax, 0x20 }
	__asm { cmovae ebx, edi }
	__asm { xor edi, ebx }
	__asm { cmp eax, 0x40 }
	__asm { cmovae ebx, edi }
	__asm { add edi, -1 }
	__asm { adc ebx, -1 }
	__asm { not edi }
	__asm { not ebx }
	__asm { mov eax, esi }
	__asm { and edi, esi }
	__asm { and ebx, edx }
	__asm { call fn_00cf6e40 }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov dword ptr [ecx + 0xc], edx }
	__asm { mov eax, edi }
	__asm { mov edx, ebx }
	__asm { mov ecx, ebp }
	__asm { call fn_00cf6e60 }
	__asm { mov ebx, dword ptr [esp + 0x10] }
	__asm { mov ecx, dword ptr [esp + 0x18] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edi, edx }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { call fn_00cf6e40 }
	__asm { add esi, eax }
	__asm { adc edi, edx }
	__asm { mov dword ptr [ebx + 4], edi }
	__asm { pop edi }
	__asm { mov dword ptr [ebx], esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ecx }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0072c380
extern "C" __declspec(naked) void asm_0072c380()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x65 }
	__asm { je L_0072c3a6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x15 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072c3a6: }
	__asm { mov eax, dword ptr [esi + 0xf4] }
	__asm { cmp eax, dword ptr [esi + 0x20] }
	__asm { jb L_0072c3c7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push -1 }
	__asm { mov dword ptr [eax + 0x14], 0x7e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_0072c3c7: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0072c3eb }
	__asm { mov eax, dword ptr [esi + 0xf4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072c3eb: }
	__asm { mov eax, dword ptr [esi + 0x168] }
	__asm { cmp byte ptr [eax + 0xc], 0 }
	__asm { je L_0072c400 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072c400: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { sub eax, dword ptr [esi + 0xf4] }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { cmp ecx, eax }
	__asm { cmova ecx, eax }
	__asm { mov eax, dword ptr [esi + 0x16c] }
	__asm { push ecx }
	__asm { lea ecx, [esp + 0xc] }
	__asm { push ecx }
	__asm { push dword ptr [esp + 0x14] }
	__asm { mov dword ptr [esp + 0x14], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { call eax }
	__asm { mov eax, dword ptr [esp + 0x18] }
	__asm { add dword ptr [esi + 0xf4], eax }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { ret }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, dword ptr [esp + 8] }
	__asm { cmp dword ptr [esi + 0x14], 0x66 }
	__asm { je L_0072c466 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x15 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072c466: }
	__asm { mov eax, dword ptr [esi + 0xf4] }
	__asm { cmp eax, dword ptr [esi + 0x20] }
	__asm { jb L_0072c48b }
	__asm { mov eax, dword ptr [esi] }
	__asm { push -1 }
	__asm { mov dword ptr [eax + 0x14], 0x7e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072c48b: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0072c4a9 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072c4a9: }
	__asm { mov eax, dword ptr [esi + 0x168] }
	__asm { cmp byte ptr [eax + 0xc], 0 }
	__asm { je L_0072c4be }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072c4be: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x100] }
	__asm { shl edi, 3 }
	__asm { cmp dword ptr [esp + 0x14], edi }
	__asm { jae L_0072c4e1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { mov dword ptr [eax + 0x14], 0x18 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0072c4e1: }
	__asm { mov eax, dword ptr [esi + 0x174] }
	__asm { push dword ptr [esp + 0x10] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_0072c4fd }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_0072c4fd: }
	__asm { add dword ptr [esi + 0xf4], edi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00739bf0
extern "C" __declspec(naked) void asm_00739bf0()
{
	__asm { mov ecx, dword ptr [esp + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00739c0d }
	__asm { mov eax, dword ptr [esp + 8] }
	__asm { mov dword ptr [ecx + 0x48], eax }
	__asm { mov eax, dword ptr [esp + 0xc] }
	__asm { mov dword ptr [ecx + 0x40], eax }
	__asm { mov eax, dword ptr [esp + 0x10] }
	__asm { mov dword ptr [ecx + 0x44], eax }
	__asm { L_00739c0d: }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov eax, dword ptr [esp + 4] }
	__asm { test eax, eax }
	__asm { jne L_00739c19 }
	__asm { ret }
	__asm { L_00739c19: }
	__asm { mov eax, dword ptr [eax + 0x48] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0074dcb0
extern "C" __declspec(naked) void asm_0074dcb0()
{
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { push 0xd8 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 1 }
	__asm { push ebx }
	__asm { call eax }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebx + 0x19c], esi }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi], 0x74f0b0 }
	__asm { cmp byte ptr [ebx + 0xc8], 0 }
	__asm { je L_0074dd3d }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { push ebp }
	__asm { shl eax, 8 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { push ebx }
	__asm { call eax }
	__asm { xor ebp, ebp }
	__asm { add esp, 0xc }
	__asm { mov edx, eax }
	__asm { mov dword ptr [ebx + 0x8c], edx }
	__asm { cmp dword ptr [ebx + 0x24], ebp }
	__asm { jle L_0074dd1d }
	__asm { push edi }
	__asm { L_0074dd04: }
	__asm { or eax, 0xffffffff }
	__asm { mov edi, edx }
	__asm { mov ecx, 0x40 }
	__asm { inc ebp }
	__asm { rep stosd }
	__asm { add edx, 0x100 }
	__asm { cmp ebp, dword ptr [ebx + 0x24] }
	__asm { jl L_0074dd04 }
	__asm { pop edi }
	__asm { L_0074dd1d: }
	__asm { pop ebp }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0074dd3d: }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_011ddd08[];
extern "C" void fn_006c54a0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0076de40
extern "C" __declspec(naked) void asm_0076de40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1a5e6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x140 }
	__asm { mov byte ptr [esi + 1], 1 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov byte ptr [esi + 0x11], 1 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x84], 0x64 }
	__asm { mov dword ptr [esi + 0x88], 0x64 }
	__asm { mov eax, dword ptr [g_011ddd08] }
	__asm { mov dword ptr [esi + 0x8c], eax }
	__asm { mov byte ptr [esi + 0x90], 0 }
	__asm { mov dword ptr [esi + 0x94], 1 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 0xac], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0076dee8 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0076dee8: }
	__asm { lea eax, [ecx + 0x140] }
	__asm { mov dword ptr [esi + 0x9c], ecx }
	__asm { mov dword ptr [esi + 0xa0], eax }
	__asm { mov dword ptr [esi + 0xa8], ecx }
	__asm { mov dword ptr [esi + 0xa4], ecx }
	__asm { push 0x140 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0xc4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0076df30 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0076df30: }
	__asm { lea eax, [ecx + 0x140] }
	__asm { mov dword ptr [esi + 0xb4], ecx }
	__asm { mov dword ptr [esi + 0xb8], eax }
	__asm { mov dword ptr [esi + 0xc0], ecx }
	__asm { mov dword ptr [esi + 0xbc], ecx }
	__asm { push 0x140 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [esi + 0xdc], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0076df75 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0076df75: }
	__asm { lea eax, [ecx + 0x140] }
	__asm { mov dword ptr [esi + 0xcc], ecx }
	__asm { mov dword ptr [esi + 0xd0], eax }
	__asm { mov dword ptr [esi + 0xd8], ecx }
	__asm { mov dword ptr [esi + 0xd4], ecx }
	__asm { push 0xa0 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [esi + 0xf4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0076dfba }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0076dfba: }
	__asm { lea eax, [ecx + 0xa0] }
	__asm { mov dword ptr [esi + 0xe4], ecx }
	__asm { mov dword ptr [esi + 0xe8], eax }
	__asm { mov dword ptr [esi + 0xf0], ecx }
	__asm { mov dword ptr [esi + 0xec], ecx }
	__asm { push 0x50 }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { mov dword ptr [esi + 0x10c], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_0076dffc }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0076dffc: }
	__asm { lea eax, [ecx + 0x50] }
	__asm { mov dword ptr [esi + 0xfc], ecx }
	__asm { mov dword ptr [esi + 0x100], eax }
	__asm { mov dword ptr [esi + 0x108], ecx }
	__asm { mov dword ptr [esi + 0x104], ecx }
	__asm { lea eax, [esi + 0x130] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { mov dword ptr [esi + 0x114], 0 }
	__asm { call fn_006c54a0 }
	__asm { mov byte ptr [esi + 0x138], 0 }
	__asm { mov dword ptr [esi + 0x13c], 0 }
	__asm { mov dword ptr [esi + 0x144], 0 }
	__asm { mov dword ptr [esi + 0x148], 0x11ddd48 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov dword ptr [esi + 0x54], eax }
	__asm { mov dword ptr [esi + 0x58], eax }
	__asm { mov dword ptr [esi + 0x5c], eax }
	__asm { mov dword ptr [esi + 0x60], eax }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { mov dword ptr [esi + 0x68], eax }
	__asm { mov dword ptr [esi + 0x6c], eax }
	__asm { mov dword ptr [esi + 0x70], eax }
	__asm { mov dword ptr [esi + 0x74], eax }
	__asm { mov dword ptr [esi + 0x78], eax }
	__asm { mov dword ptr [esi + 0x7c], eax }
	__asm { mov dword ptr [esi + 0x80], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0076ea00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0076e0c0
extern "C" __declspec(naked) void asm_0076e0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1a636 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { call fn_0076ea00 }
	__asm { mov edx, dword ptr [esi + 0x100] }
	__asm { mov edi, dword ptr [esi + 0x104] }
	__asm { mov ecx, dword ptr [esi + 0x10c] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_0076e114 }
	__asm { sub edx, dword ptr [esi + 0xfc] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_0076e114: }
	__asm { lea eax, [edi + ecx*8] }
	__asm { mov dword ptr [esi + 0x104], eax }
	__asm { mov eax, dword ptr [esi + 0xfc] }
	__asm { test eax, eax }
	__asm { je L_0076e130 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0076e130: }
	__asm { mov edx, dword ptr [esi + 0xe8] }
	__asm { mov edi, dword ptr [esi + 0xec] }
	__asm { mov ecx, dword ptr [esi + 0xf4] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_0076e158 }
	__asm { sub edx, dword ptr [esi + 0xe4] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_0076e158: }
	__asm { lea eax, [edi + ecx*8] }
	__asm { mov dword ptr [esi + 0xec], eax }
	__asm { mov eax, dword ptr [esi + 0xe4] }
	__asm { test eax, eax }
	__asm { je L_0076e174 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0076e174: }
	__asm { mov edx, dword ptr [esi + 0xd0] }
	__asm { mov edi, dword ptr [esi + 0xd4] }
	__asm { mov ecx, dword ptr [esi + 0xdc] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_0076e19c }
	__asm { sub edx, dword ptr [esi + 0xcc] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_0076e19c: }
	__asm { lea eax, [edi + ecx*8] }
	__asm { mov dword ptr [esi + 0xd4], eax }
	__asm { mov eax, dword ptr [esi + 0xcc] }
	__asm { test eax, eax }
	__asm { je L_0076e1b8 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0076e1b8: }
	__asm { mov edx, dword ptr [esi + 0xb8] }
	__asm { mov edi, dword ptr [esi + 0xbc] }
	__asm { mov ecx, dword ptr [esi + 0xc4] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_0076e1e0 }
	__asm { sub edx, dword ptr [esi + 0xb4] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_0076e1e0: }
	__asm { lea eax, [edi + ecx*8] }
	__asm { mov dword ptr [esi + 0xbc], eax }
	__asm { mov eax, dword ptr [esi + 0xb4] }
	__asm { test eax, eax }
	__asm { je L_0076e1fc }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0076e1fc: }
	__asm { mov edx, dword ptr [esi + 0xa0] }
	__asm { mov edi, dword ptr [esi + 0xa4] }
	__asm { mov ecx, dword ptr [esi + 0xac] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp ecx, eax }
	__asm { jl L_0076e224 }
	__asm { sub edx, dword ptr [esi + 0x9c] }
	__asm { sar edx, 3 }
	__asm { sub ecx, edx }
	__asm { L_0076e224: }
	__asm { lea eax, [edi + ecx*8] }
	__asm { mov dword ptr [esi + 0xa4], eax }
	__asm { mov eax, dword ptr [esi + 0x9c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_0076e242 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0076e242: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e464ec[];
// FUNCTION: ROBLOXSTUDIO 0x0076e250
extern "C" __declspec(naked) void asm_0076e250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { cmp byte ptr [edx + 0x139], 0 }
	__asm { je L_0076e2d5 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add dword ptr [edx + 0x13c], eax }
	__asm { mov eax, dword ptr [edx + 0x13c] }
	__asm { cmp eax, dword ptr [edx + 0x140] }
	__asm { jl L_0076e2d5 }
	__asm { mov ecx, dword ptr [edx + 0x28] }
	__asm { mov eax, dword ptr [edx + 0x148] }
	__asm { shl ecx, 6 }
	__asm { cmp byte ptr [ebp + 0x10], 0 }
	__asm { movss xmm0, dword ptr [ecx + eax + 8] }
	__asm { mulss xmm0, xmm0 }
	__asm { je L_0076e2c6 }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { addss xmm1, dword ptr [g_00e464ec] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { comiss xmm1, xmm0 }
	__asm { movss dword ptr [ebp + 0x10], xmm1 }
	__asm { ja L_0076e2b3 }
	__asm { lea eax, [ebp + 8] }
	__asm { L_0076e2b3: }
	__asm { fld dword ptr [eax] }
	__asm { mov byte ptr [edx + 0x139], 0 }
	__asm { fstp dword ptr [edx + 0x98] }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0076e2c6: }
	__asm { movss dword ptr [edx + 0x98], xmm0 }
	__asm { mov byte ptr [edx + 0x139], 0 }
	__asm { L_0076e2d5: }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403170();
extern "C" void fn_007794e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007792b0
extern "C" __declspec(naked) void asm_007792b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b6b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea esi, [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi + 0x78] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00779301 }
	__asm { test al, 1 }
	__asm { jne L_007792fa }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x80] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007792fa }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007792fa: }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { L_00779301: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_007794e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00779346 }
	__asm { cmp byte ptr [esi + 9], 0 }
	__asm { je L_0077933b }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { call fn_00403170 }
	__asm { add esp, 8 }
	__asm { L_0077933b: }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00779346: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00402150();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007794e0
extern "C" __declspec(naked) void asm_007794e0()
{
	__asm { L_007794e0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1b698 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x6c], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { jb L_00779511 }
	__asm { push dword ptr [esi + 0x58] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00779511: }
	__asm { mov dword ptr [esi + 0x6c], 0xf }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov byte ptr [esi + 0x58], 0 }
	__asm { mov edi, dword ptr [esi + 0x54] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00779559 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00779558 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00779558 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00779558: }
	__asm { pop ebx }
	__asm { L_00779559: }
	__asm { mov ecx, esi }
	__asm { call fn_00402150 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x7c], 0x10 }
	__asm { jb L_00779584 }
	__asm { push dword ptr [esi + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00779584: }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { cmp dword ptr [esi + 0x64], 0x10 }
	__asm { jb L_007795a7 }
	__asm { push dword ptr [esi + 0x50] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007795a7: }
	__asm { mov dword ptr [esi + 0x64], 0xf }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { mov byte ptr [esi + 0x50], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_00402150 }
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
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp L_007794e0 }
}

extern "C" char g_00e10264[];
extern "C" void fn_0077e840();
// FUNCTION: ROBLOXSTUDIO 0x0077f730
extern "C" __declspec(naked) void asm_0077f730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { je L_0077f7be }
	__asm { mov al, byte ptr [eax] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push ebx }
	__asm { movzx ebx, al }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp ebx, 0x100 }
	__asm { jb L_0077f76d }
	__asm { push 0xe4f830 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_0077f76d: }
	__asm { xor edx, edx }
	__asm { mov eax, ebx }
	__asm { and eax, 0x3f }
	__asm { bts edx, eax }
	__asm { xor ecx, ecx }
	__asm { cmp eax, 0x20 }
	__asm { cmovae ecx, edx }
	__asm { xor edx, ecx }
	__asm { cmp eax, 0x40 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmovae ecx, edx }
	__asm { shr ebx, 6 }
	__asm { and edx, dword ptr [eax + ebx*8] }
	__asm { and ecx, dword ptr [eax + ebx*8 + 4] }
	__asm { pop ebx }
	__asm { or edx, ecx }
	__asm { je L_0077f7be }
	__asm { inc dword ptr [esi] }
	__asm { push dword ptr [edi + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { lea ecx, [edi + 5] }
	__asm { call fn_0077e840 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077f7be: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10264[];
extern "C" void fn_0077e840();
extern "C" void fn_007810b0();
// FUNCTION: ROBLOXSTUDIO 0x00780620
extern "C" __declspec(naked) void asm_00780620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push edi }
	__asm { push dword ptr [edi] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_007810b0 }
	__asm { mov ebx, dword ptr [edi + 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [ebx] }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { je L_007806bc }
	__asm { mov al, byte ptr [eax] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { movzx esi, al }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp esi, 0x100 }
	__asm { jb L_0078066b }
	__asm { push 0xe4f830 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_0078066b: }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { and eax, 0x3f }
	__asm { bts edx, eax }
	__asm { xor ecx, ecx }
	__asm { cmp eax, 0x20 }
	__asm { cmovae ecx, edx }
	__asm { xor edx, ecx }
	__asm { cmp eax, 0x40 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmovae ecx, edx }
	__asm { shr esi, 6 }
	__asm { and edx, dword ptr [eax + esi*8] }
	__asm { and ecx, dword ptr [eax + esi*8 + 4] }
	__asm { or edx, ecx }
	__asm { je L_007806bc }
	__asm { inc dword ptr [ebx] }
	__asm { push dword ptr [edi + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { lea ecx, [edi + 5] }
	__asm { call fn_0077e840 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007806bc: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10510[];
extern "C" void fn_007843d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00783e50
extern "C" __declspec(naked) void asm_00783e50()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4f870 }
	__asm { mov dword ptr [esi + 0x28], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { test ecx, ecx }
	__asm { je L_00783e79 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00783e79 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { L_00783e79: }
	__asm { mov dword ptr [esi], 0xe4f508 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { jb L_00783e90 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00783e90: }
	__asm { mov dword ptr [esi + 0x24], 0xf }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi], 0xe4f020 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
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
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4f85c }
	__asm { mov dword ptr [esi + 0x40], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { test ecx, ecx }
	__asm { je L_00783ee9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00783ee9 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { L_00783ee9: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_007843d0 }
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
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4f884 }
	__asm { mov dword ptr [esi + 0x10], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00783f29 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00783f29 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { L_00783f29: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi], 0xe4efe8 }
	__asm { test ecx, ecx }
	__asm { je L_00783f3c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00783f3c: }
	__asm { mov dword ptr [esi], 0xe4efdc }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00784000
extern "C" __declspec(naked) void asm_00784000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c453 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00784056 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00784055 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00784055 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00784055: }
	__asm { pop ebx }
	__asm { L_00784056: }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_00784089 }
	__asm { lea ecx, [edi + 4] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { L_00784089: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi], 0xe4f850 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { mov dword ptr [ecx], 0xe4f850 }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_007869a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00784200
extern "C" __declspec(naked) void asm_00784200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c49b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea edi, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov ebx, dword ptr [edi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { test ebx, ebx }
	__asm { je L_0078425b }
	__asm { lea ecx, [ebx + 9] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007869a0 }
	__asm { push dword ptr [ebx + 4] }
	__asm { call fn_00cf6522 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { L_0078425b: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0078426b }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078426b: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0078428c }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078428c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4f508 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { jb L_007842ca }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007842ca: }
	__asm { mov dword ptr [esi + 0x24], 0xf }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi], 0xe4f020 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007842fd }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_007842fd: }
	__asm { ret }
}

extern "C" void fn_00adee70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00784390
extern "C" __declspec(naked) void asm_00784390()
{
	__asm { add ecx, 8 }
	__asm { jmp fn_00adee70 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x34], 0x10 }
	__asm { jb L_007843b4 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007843b4: }
	__asm { mov dword ptr [esi + 0x34], 0xf }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { pop esi }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e102c8[];
extern "C" char g_00e102d4[];
extern "C" char g_00e102e0[];
extern "C" char g_00e10318[];
extern "C" char g_00e1031c[];
extern "C" char g_00e1037c[];
extern "C" char g_00e1039c[];
extern "C" char g_00e10450[];
extern "C" char g_00e1045c[];
extern "C" char g_00e1046c[];
extern "C" void fn_00426140();
extern "C" void fn_00426760();
extern "C" void fn_0042c160();
extern "C" void fn_00786d90();
// FUNCTION: ROBLOXSTUDIO 0x007870a0
extern "C" __declspec(naked) void asm_007870a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c7ca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xb4 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 0xc0], 0x10065ec }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xb0] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 2 }
	__asm { call dword ptr [g_00e1037c] }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xc0], 0xe1b728 }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x60] }
	__asm { mov dword ptr [ebp + ecx - 0xc4], eax }
	__asm { lea eax, [ebp - 0xb0] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebp - 0xb0], 0xe1827c }
	__asm { jb L_0078715b }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0078715b: }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xb0] }
	__asm { call fn_00426760 }
	__asm { push esi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e1045c] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_007871a5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_007871a5 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_007871a5: }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc0] }
	__asm { push eax }
	__asm { call fn_00786d90 }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add esp, 8 }
	__asm { add ecx, eax }
	__asm { call dword ptr [g_00e1039c] }
	__asm { test al, al }
	__asm { jne L_00787232 }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { call dword ptr [g_00e10450] }
	__asm { test al, al }
	__asm { jne L_00787232 }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { call dword ptr [g_00e1046c] }
	__asm { cmp eax, -1 }
	__asm { jne L_00787232 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [esi + 1] }
	__asm { mov byte ptr [esi], 0 }
	__asm { test eax, eax }
	__asm { je L_00787211 }
	__asm { mov cl, byte ptr [ebp - 0xd] }
	__asm { mov byte ptr [eax], cl }
	__asm { L_00787211: }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov byte ptr [esi], 1 }
	__asm { call fn_0042c160 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00787232: }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xc0], 0xe1b728 }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x60] }
	__asm { mov dword ptr [ebp + ecx - 0xc4], eax }
	__asm { lea ecx, [ebp - 0xb0] }
	__asm { mov dword ptr [ebp - 0xb0], 0xe1827c }
	__asm { call fn_00426140 }
	__asm { lea ecx, [ebp - 0xb0] }
	__asm { call dword ptr [g_00e10318] }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { call dword ptr [g_00e102e0] }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { int 3 }
	__asm { test ecx, ecx }
	__asm { je L_007872b8 }
	__asm { mov eax, dword ptr [ecx - 5] }
	__asm { ret }
	__asm { L_007872b8: }
	__asm { xor eax, eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { ret }
}

extern "C" void fn_006b98f0();
extern "C" void fn_007d2bd0();
extern "C" void fn_007d55c0();
extern "C" void fn_00825140();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0078a830
extern "C" __declspec(naked) void asm_0078a830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd61f38 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax] }
	__asm { cmp eax, 1 }
	__asm { jb L_0078a8fd }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0078a883 }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0078a883: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0078a8e3 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_007d2bd0 }
	__asm { mov ecx, dword ptr [ebp - 0x58] }
	__asm { mov bl, byte ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0078a8d1 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_0078a8d1: }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0078a8e3: }
	__asm { mov eax, dword ptr [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0078a8fd }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0078a8fd: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0078a917 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, byte ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0078a917: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0xe4fd34 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { jmp fn_007d55c0 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_00791130();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x0078e3a0
extern "C" __declspec(naked) void asm_0078e3a0()
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
	__asm { je L_0078e43f }
	__asm { push 0x7911d0 }
	__asm { push 0x12e0d30 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00791130 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0078e405 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_0078e405: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_0078e43f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0078e43f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0078e43f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0078e43f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0078e43f: }
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
extern "C" void fn_007910a0();
// FUNCTION: ROBLOXSTUDIO 0x0078ee40
extern "C" __declspec(naked) void asm_0078ee40()
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
	__asm { je L_0078eea8 }
	__asm { test ebx, ebx }
	__asm { jne L_0078eea8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0078ee97 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0078eea8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0078ee97: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0078eea8: }
	__asm { push 0x7911c0 }
	__asm { push 0x12e0d28 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_007910a0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_0078eee8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_0078ef9d }
	__asm { L_0078eee8: }
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
	__asm { je L_0078ef57 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_0078ef57 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0078ef46 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0078ef57 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0078ef46: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0078ef57: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0078ef6f }
	__asm { add esi, -5 }
	__asm { jmp L_0078ef71 }
	__asm { L_0078ef6f: }
	__asm { xor esi, esi }
	__asm { L_0078ef71: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0078ef9d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0078ef9d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0078ef9d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_0078efda }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0078efda }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0078efda }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0078efda }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0078efda: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" char g_012e0ea0[];
extern "C" char g_012e0ea4[];
extern "C" char g_012e0ea8[];
extern "C" char g_012e0eac[];
extern "C" void fn_004115f0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007943e0
extern "C" __declspec(naked) void asm_007943e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { test eax, eax }
	__asm { jne L_00794408 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00794408: }
	__asm { cmp eax, 0x1fffffff }
	__asm { jbe L_0079441a }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0079441a: }
	__asm { push edi }
	__asm { lea edi, [eax*8] }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00794441 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00794441: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push 0x794a50 }
	__asm { push 0x12e0e98 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e0eac] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0079449e }
	__asm { or eax, 1 }
	__asm { push 0xde1f80 }
	__asm { mov dword ptr [g_012e0eac], eax }
	__asm { mov dword ptr [g_012e0ea0], 0 }
	__asm { mov dword ptr [g_012e0ea4], 0 }
	__asm { mov dword ptr [g_012e0ea8], 0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0079449e: }
	__asm { mov eax, 0x12e0ea0 }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_0048b510();
// FUNCTION: ROBLOXSTUDIO 0x00794a90
extern "C" __declspec(naked) void asm_00794a90()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0048b510 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_00794aae }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_00794ab8 }
	__asm { L_00794aae: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_00794ab8: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00794ae4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00794ae4 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_00794ae4 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00794ae4: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_007aa1a0();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x007a2860
extern "C" __declspec(naked) void asm_007a2860()
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
	__asm { je L_007a28ff }
	__asm { push 0x7aa240 }
	__asm { push 0x12e1898 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_007aa1a0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_007a28c5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_007a28c5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_007a28ff }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_007a28ff }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_007a28ff }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_007a28ff }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_007a28ff: }
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
extern "C" void fn_007aa110();
// FUNCTION: ROBLOXSTUDIO 0x007a5d00
extern "C" __declspec(naked) void asm_007a5d00()
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
	__asm { je L_007a5d68 }
	__asm { test ebx, ebx }
	__asm { jne L_007a5d68 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007a5d57 }
	__asm { push 0x122 }
	__asm { push 0x10045a8 }
	__asm { push 0x10041ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007a5d68 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007a5d57: }
	__asm { movzx eax, al }
	__asm { push 0x1004158 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007a5d68: }
	__asm { push 0x7aa230 }
	__asm { push 0x12e1890 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_007aa110 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { jne L_007a5da8 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { jmp L_007a5e5d }
	__asm { L_007a5da8: }
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
	__asm { je L_007a5e17 }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_007a5e17 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007a5e06 }
	__asm { push 0x136 }
	__asm { push 0x10045a8 }
	__asm { push 0x1004144 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007a5e17 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_007a5e06: }
	__asm { movzx eax, cl }
	__asm { push 0x10040e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007a5e17: }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0041ed20 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_007a5e2f }
	__asm { add esi, -5 }
	__asm { jmp L_007a5e31 }
	__asm { L_007a5e2f: }
	__asm { xor esi, esi }
	__asm { L_007a5e31: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007a5e5d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007a5e5d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_007a5e5d: }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { je L_007a5e9a }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_007a5e9a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_007a5e9a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_007a5e9a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_007a5e9a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
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
extern "C" void fn_00439d80();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x007a7460
extern "C" __declspec(naked) void asm_007a7460()
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
	__asm { je L_007a7498 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_007a7498: }
	__asm { push 0x439e10 }
	__asm { push 0x131b180 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00439d80 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_007a74d4 }
	__asm { push ebx }
	__asm { jmp L_007a74d8 }
	__asm { L_007a74d4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_007a74d8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_007a751a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_007a751a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_007a751a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_007a751a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_007a751a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_007a755d }
	__asm { add esi, 5 }
	__asm { je L_007a752f }
	__asm { add esi, -5 }
	__asm { jmp L_007a7531 }
	__asm { L_007a752f: }
	__asm { xor esi, esi }
	__asm { L_007a7531: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007a755d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007a755d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_007a755d: }
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
extern "C" void fn_00439e20();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x007a7580
extern "C" __declspec(naked) void asm_007a7580()
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
	__asm { je L_007a75b8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_007a75b8: }
	__asm { push 0x439eb0 }
	__asm { push 0x131b178 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00439e20 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_007a75f4 }
	__asm { push ebx }
	__asm { jmp L_007a75f8 }
	__asm { L_007a75f4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_007a75f8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_007a763a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_007a763a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_007a763a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_007a763a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_007a763a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_007a767d }
	__asm { add esi, 5 }
	__asm { je L_007a764f }
	__asm { add esi, -5 }
	__asm { jmp L_007a7651 }
	__asm { L_007a764f: }
	__asm { xor esi, esi }
	__asm { L_007a7651: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007a767d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007a767d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_007a767d: }
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
extern "C" void fn_0043f140();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x007a76a0
extern "C" __declspec(naked) void asm_007a76a0()
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
	__asm { je L_007a76d8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_007a76d8: }
	__asm { push 0x43f130 }
	__asm { push 0x131b198 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043f140 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_007a7714 }
	__asm { push ebx }
	__asm { jmp L_007a7718 }
	__asm { L_007a7714: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_007a7718: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_007a775a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_007a775a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_007a775a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_007a775a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_007a775a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_007a779d }
	__asm { add esi, 5 }
	__asm { je L_007a776f }
	__asm { add esi, -5 }
	__asm { jmp L_007a7771 }
	__asm { L_007a776f: }
	__asm { xor esi, esi }
	__asm { L_007a7771: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007a779d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007a779d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_007a779d: }
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
extern "C" char g_012e1fbc[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0055a310();
// FUNCTION: ROBLOXSTUDIO 0x007b0690
extern "C" __declspec(naked) void asm_007b0690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_0055a310 }
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
	__asm { jne L_007b06d9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_007b06d9 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_007b06d9 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_007b06d9: }
	__asm { add dword ptr [g_012e1fbc], 0x34 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_012e1fc4[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0055a380();
// FUNCTION: ROBLOXSTUDIO 0x007b06f0
extern "C" __declspec(naked) void asm_007b06f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_0055a380 }
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
	__asm { jne L_007b0739 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_007b0739 }
	__asm { lock bts dword ptr [esi], 0x1e }
	__asm { jb L_007b0739 }
	__asm { mov ecx, esi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_007b0739: }
	__asm { add dword ptr [g_012e1fc4], 0x14 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131c6d0[];
extern "C" char g_0131c6d4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007b2800
extern "C" __declspec(naked) void asm_007b2800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fbee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_007b2b7c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_007b2832: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x4cc1b0 }
	__asm { push 0x131c6d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c6d0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007b2899 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c6d0], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007b288d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131c6d4], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_007b289e }
	__asm { L_007b288d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131c6d4], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_007b289e }
	__asm { L_007b2899: }
	__asm { mov eax, dword ptr [g_0131c6d4] }
	__asm { L_007b289e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_007b2925 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_007b28cb }
	__asm { add eax, -5 }
	__asm { jmp L_007b28cd }
	__asm { L_007b28cb: }
	__asm { xor eax, eax }
	__asm { L_007b28cd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007b2922 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_007b2922 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007b2911 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b2922 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007b2911: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b2922: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_007b2925: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_007b2a15 }
	__asm { L_007b2930: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_007b2a15 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_007b29b5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_007b2958 }
	__asm { add eax, -5 }
	__asm { jmp L_007b295a }
	__asm { L_007b2958: }
	__asm { xor eax, eax }
	__asm { L_007b295a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007b29af }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_007b29af }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007b299e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b29af }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007b299e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b29af: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_007b29b5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_007b2a0a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_007b29cc }
	__asm { add ebx, -5 }
	__asm { jmp L_007b29ce }
	__asm { L_007b29cc: }
	__asm { xor ebx, ebx }
	__asm { L_007b29ce: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007b2a04 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007b2a04 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_007b2a0a }
	__asm { L_007b2a04: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_007b2a0a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_007b2930 }
	__asm { L_007b2a15: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_007b2a79 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_007b2a79 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_007b2a79 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_007b2a79 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_007b2a6f }
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
	__asm { je L_007b2a6d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_007b2a6f }
	__asm { L_007b2a6d: }
	__asm { mov esi, edx }
	__asm { L_007b2a6f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_007b2a79: }
	__asm { test esi, esi }
	__asm { je L_007b2ae0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_007b2a89 }
	__asm { add eax, -5 }
	__asm { jmp L_007b2a8b }
	__asm { L_007b2a89: }
	__asm { xor eax, eax }
	__asm { L_007b2a8b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007b2ae0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_007b2ae0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007b2acf }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b2ae0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007b2acf: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b2ae0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_007b2b2f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_007b2af7 }
	__asm { add edi, -5 }
	__asm { jmp L_007b2af9 }
	__asm { L_007b2af7: }
	__asm { xor edi, edi }
	__asm { L_007b2af9: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007b2b29 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007b2b29 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_007b2b2f }
	__asm { L_007b2b29: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_007b2b2f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_007b2b6e }
	__asm { add esi, 5 }
	__asm { je L_007b2b44 }
	__asm { add esi, -5 }
	__asm { jmp L_007b2b46 }
	__asm { L_007b2b44: }
	__asm { xor esi, esi }
	__asm { L_007b2b46: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007b2b6e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007b2b6e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_007b2b6e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_007b2832 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_007b2b7c: }
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
extern "C" char g_0131a244[];
extern "C" char g_0131a248[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007b2b90
extern "C" __declspec(naked) void asm_007b2b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fc1e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_007b2f0c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_007b2bc2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x40eeb0 }
	__asm { push 0x131a24c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131a248] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007b2c29 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a248], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007b2c1d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131a244], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_007b2c2e }
	__asm { L_007b2c1d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131a244], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_007b2c2e }
	__asm { L_007b2c29: }
	__asm { mov eax, dword ptr [g_0131a244] }
	__asm { L_007b2c2e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_007b2cb5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_007b2c5b }
	__asm { add eax, -5 }
	__asm { jmp L_007b2c5d }
	__asm { L_007b2c5b: }
	__asm { xor eax, eax }
	__asm { L_007b2c5d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007b2cb2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_007b2cb2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007b2ca1 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b2cb2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007b2ca1: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b2cb2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_007b2cb5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_007b2da5 }
	__asm { L_007b2cc0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_007b2da5 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_007b2d45 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_007b2ce8 }
	__asm { add eax, -5 }
	__asm { jmp L_007b2cea }
	__asm { L_007b2ce8: }
	__asm { xor eax, eax }
	__asm { L_007b2cea: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007b2d3f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_007b2d3f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007b2d2e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b2d3f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007b2d2e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b2d3f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_007b2d45: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_007b2d9a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_007b2d5c }
	__asm { add ebx, -5 }
	__asm { jmp L_007b2d5e }
	__asm { L_007b2d5c: }
	__asm { xor ebx, ebx }
	__asm { L_007b2d5e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007b2d94 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007b2d94 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_007b2d9a }
	__asm { L_007b2d94: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_007b2d9a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_007b2cc0 }
	__asm { L_007b2da5: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_007b2e09 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_007b2e09 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_007b2e09 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_007b2e09 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_007b2dff }
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
	__asm { je L_007b2dfd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_007b2dff }
	__asm { L_007b2dfd: }
	__asm { mov esi, edx }
	__asm { L_007b2dff: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_007b2e09: }
	__asm { test esi, esi }
	__asm { je L_007b2e70 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_007b2e19 }
	__asm { add eax, -5 }
	__asm { jmp L_007b2e1b }
	__asm { L_007b2e19: }
	__asm { xor eax, eax }
	__asm { L_007b2e1b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007b2e70 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_007b2e70 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007b2e5f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007b2e70 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007b2e5f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007b2e70: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_007b2ebf }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_007b2e87 }
	__asm { add edi, -5 }
	__asm { jmp L_007b2e89 }
	__asm { L_007b2e87: }
	__asm { xor edi, edi }
	__asm { L_007b2e89: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007b2eb9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007b2eb9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_007b2ebf }
	__asm { L_007b2eb9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_007b2ebf: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_007b2efe }
	__asm { add esi, 5 }
	__asm { je L_007b2ed4 }
	__asm { add esi, -5 }
	__asm { jmp L_007b2ed6 }
	__asm { L_007b2ed4: }
	__asm { xor esi, esi }
	__asm { L_007b2ed6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007b2efe }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007b2efe }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_007b2efe: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_007b2bc2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_007b2f0c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_0055a310();
// FUNCTION: ROBLOXSTUDIO 0x007b4090
extern "C" __declspec(naked) void asm_007b4090()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0055a310 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_007b40ae }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_007b40b8 }
	__asm { L_007b40ae: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_007b40b8: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_007b40e4 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_007b40e4 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_007b40e4 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_007b40e4: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040ed30();
extern "C" void fn_0040fb10();
extern "C" void fn_0048af30();
extern "C" void fn_0055a380();
// FUNCTION: ROBLOXSTUDIO 0x007b40f0
extern "C" __declspec(naked) void asm_007b40f0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0055a380 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_0040ed30 }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { test esi, esi }
	__asm { je L_007b410e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { jmp L_007b4118 }
	__asm { L_007b410e: }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_0048af30 }
	__asm { mov esi, eax }
	__asm { L_007b4118: }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [edi], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_007b4144 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_007b4144 }
	__asm { lock bts dword ptr [edi], 0x1e }
	__asm { jb L_007b4144 }
	__asm { mov ecx, edi }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_007b4144: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_004cc120();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x007b4670
extern "C" __declspec(naked) void asm_007b4670()
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
	__asm { je L_007b46a8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_007b46a8: }
	__asm { push 0x4cc1b0 }
	__asm { push 0x131c6d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_004cc120 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_007b46e4 }
	__asm { push ebx }
	__asm { jmp L_007b46e8 }
	__asm { L_007b46e4: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_007b46e8: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_007b472a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_007b472a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_007b472a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_007b472a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_007b472a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_007b476d }
	__asm { add esi, 5 }
	__asm { je L_007b473f }
	__asm { add esi, -5 }
	__asm { jmp L_007b4741 }
	__asm { L_007b473f: }
	__asm { xor esi, esi }
	__asm { L_007b4741: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007b476d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007b476d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_007b476d: }
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

extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_0049a3f0();
extern "C" void fn_004d20f0();
extern "C" void fn_007bb0b0();
extern "C" void fn_007bc660();
extern "C" void fn_007bd960();
extern "C" void fn_007cd560();
extern "C" void fn_00a48380();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x007c0680
extern "C" __declspec(naked) void asm_007c0680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test edi, edi }
	__asm { je L_007c06db }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_007c06a1 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_007c06a3 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_007c06a3 }
	__asm { L_007c06a1: }
	__asm { mov eax, edi }
	__asm { L_007c06a3: }
	__asm { test eax, eax }
	__asm { je L_007c06db }
	__asm { lea ebx, [eax + 0x1c] }
	__asm { test ebx, ebx }
	__asm { je L_007c06db }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_007c06db }
	__asm { lea eax, [ebx - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_007c06db }
	__asm { push edi }
	__asm { call fn_004d20f0 }
	__asm { add esp, 4 }
	__asm { cmp eax, 6 }
	__asm { je L_007c07c2 }
	__asm { L_007c06db: }
	__asm { mov eax, dword ptr [edi + 0x1a0] }
	__asm { cmp eax, 5 }
	__asm { jne L_007c0795 }
	__asm { mov ecx, edi }
	__asm { call fn_007bc660 }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_007c078c }
	__asm { push 0 }
	__asm { push 0x11ece78 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [edi + 0x1a4] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_007c0726 }
	__asm { mov ecx, eax }
	__asm { call fn_00a48380 }
	__asm { mov bl, al }
	__asm { jmp L_007c0728 }
	__asm { L_007c0726: }
	__asm { xor bl, bl }
	__asm { L_007c0728: }
	__asm { mov edx, dword ptr [esi] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { lea eax, [edi + 0xa8] }
	__asm { push eax }
	__asm { lea eax, [edi + 0x78] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { push edi }
	__asm { call eax }
	__asm { push 0 }
	__asm { push 0x11ece78 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [edi + 0x1a4] }
	__asm { mov bh, al }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_007c076f }
	__asm { mov ecx, eax }
	__asm { call fn_00a48380 }
	__asm { jmp L_007c0771 }
	__asm { L_007c076f: }
	__asm { xor al, al }
	__asm { L_007c0771: }
	__asm { mov byte ptr [ebp + 8], al }
	__asm { cmp bl, al }
	__asm { je L_007c0783 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [edi + 0x70] }
	__asm { call fn_0049a3f0 }
	__asm { L_007c0783: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bh }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007c078c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007c0795: }
	__asm { cmp dword ptr [edi + 0x1a4], 0 }
	__asm { je L_007c07c2 }
	__asm { cmp eax, 4 }
	__asm { je L_007c07ad }
	__asm { cmp eax, 1 }
	__asm { je L_007c07ad }
	__asm { cmp eax, 3 }
	__asm { jne L_007c07c2 }
	__asm { L_007c07ad: }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_007bb0b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007c07c2: }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_007bd960 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007bc590();
extern "C" void fn_007bd880();
extern "C" void fn_007c07e0();
extern "C" void fn_009f6450();
// FUNCTION: ROBLOXSTUDIO 0x007c0b60
extern "C" __declspec(naked) void asm_007c0b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_007bc590 }
	__asm { test eax, eax }
	__asm { je L_007c0bea }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov edx, dword ptr [eax] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x80] }
	__asm { call fn_007bd880 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_009f6450 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x10] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_007c07e0 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007c0bea: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e18a0[];
extern "C" char g_012e18a4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007c9680
extern "C" __declspec(naked) void asm_007c9680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20e3e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_007c99fc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_007c96b2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x7aa230 }
	__asm { push 0x12e1890 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e18a4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_007c9719 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e18a4], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007c970d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012e18a0], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_007c971e }
	__asm { L_007c970d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012e18a0], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_007c971e }
	__asm { L_007c9719: }
	__asm { mov eax, dword ptr [g_012e18a0] }
	__asm { L_007c971e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_007c97a5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_007c974b }
	__asm { add eax, -5 }
	__asm { jmp L_007c974d }
	__asm { L_007c974b: }
	__asm { xor eax, eax }
	__asm { L_007c974d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007c97a2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_007c97a2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007c9791 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007c97a2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007c9791: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007c97a2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_007c97a5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_007c9895 }
	__asm { L_007c97b0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_007c9895 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_007c9835 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_007c97d8 }
	__asm { add eax, -5 }
	__asm { jmp L_007c97da }
	__asm { L_007c97d8: }
	__asm { xor eax, eax }
	__asm { L_007c97da: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007c982f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_007c982f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007c981e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007c982f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007c981e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007c982f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_007c9835: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_007c988a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_007c984c }
	__asm { add ebx, -5 }
	__asm { jmp L_007c984e }
	__asm { L_007c984c: }
	__asm { xor ebx, ebx }
	__asm { L_007c984e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007c9884 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007c9884 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_007c988a }
	__asm { L_007c9884: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_007c988a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_007c97b0 }
	__asm { L_007c9895: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_007c98f9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_007c98f9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_007c98f9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_007c98f9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_007c98ef }
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
	__asm { je L_007c98ed }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_007c98ef }
	__asm { L_007c98ed: }
	__asm { mov esi, edx }
	__asm { L_007c98ef: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_007c98f9: }
	__asm { test esi, esi }
	__asm { je L_007c9960 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_007c9909 }
	__asm { add eax, -5 }
	__asm { jmp L_007c990b }
	__asm { L_007c9909: }
	__asm { xor eax, eax }
	__asm { L_007c990b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_007c9960 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_007c9960 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_007c994f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007c9960 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_007c994f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007c9960: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_007c99af }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_007c9977 }
	__asm { add edi, -5 }
	__asm { jmp L_007c9979 }
	__asm { L_007c9977: }
	__asm { xor edi, edi }
	__asm { L_007c9979: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007c99a9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007c99a9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_007c99af }
	__asm { L_007c99a9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_007c99af: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_007c99ee }
	__asm { add esi, 5 }
	__asm { je L_007c99c4 }
	__asm { add esi, -5 }
	__asm { jmp L_007c99c6 }
	__asm { L_007c99c4: }
	__asm { xor esi, esi }
	__asm { L_007c99c6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007c99ee }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_007c99ee }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_007c99ee: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_007c96b2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_007c99fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c7af0();
// FUNCTION: ROBLOXSTUDIO 0x007c9d10
extern "C" __declspec(naked) void asm_007c9d10()
{
	__asm { jmp fn_007c7af0 }
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
	__asm { lea eax, [ecx + 0x9c] }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_00e10528[];
extern "C" char g_012e4468[];
extern "C" char g_012e4484[];
extern "C" void fn_004033d0();
extern "C" void fn_00421eb0();
extern "C" void fn_0044dad0();
extern "C" void fn_00788700();
extern "C" void fn_007cee50();
extern "C" void fn_007d15d0();
extern "C" void fn_007d3420();
extern "C" void fn_007d35a0();
extern "C" void fn_007d3760();
extern "C" void fn_007d3890();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x007d2780
extern "C" __declspec(naked) void asm_007d2780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd21386 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10524] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be320 }
	__asm { je L_007d2886 }
	__asm { push eax }
	__asm { mov ecx, 0x12be320 }
	__asm { call ebx }
	__asm { test al, al }
	__asm { jne L_007d2886 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x11e66c8 }
	__asm { je L_007d27e1 }
	__asm { push eax }
	__asm { mov ecx, 0x11e66c8 }
	__asm { call ebx }
	__asm { test al, al }
	__asm { je L_007d28fb }
	__asm { L_007d27e1: }
	__asm { push edi }
	__asm { lea edi, [esi + 4] }
	__asm { push edi }
	__asm { call fn_007d15d0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007d284d }
	__asm { push 0 }
	__asm { push 0x12bdbf4 }
	__asm { push 0x12bc2e4 }
	__asm { push 0 }
	__asm { push dword ptr [eax] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_007d2837 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], 0xe58a30 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x28], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_007d2837: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { jmp L_007d2865 }
	__asm { L_007d284d: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { L_007d2865: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00788700 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { call fn_0044dad0 }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { jmp L_007d28fb }
	__asm { L_007d2886: }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { lea ecx, [esi + 4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00788700 }
	__asm { mov eax, dword ptr [g_012e4484] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test al, 1 }
	__asm { jne L_007d28f5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e4484], eax }
	__asm { push 0 }
	__asm { push 0xe54b6c }
	__asm { mov ecx, 0x12e4468 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_007cee50 }
	__asm { push 0xde50a0 }
	__asm { mov dword ptr [g_012e4468], 0xe58978 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_007d28f5: }
	__asm { mov dword ptr [esi], 0x12e4468 }
	__asm { L_007d28fb: }
	__asm { add esi, 4 }
	__asm { je L_007d2946 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_007d290a }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d290f }
	__asm { L_007d290a: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d290f: }
	__asm { cmp ecx, 0x12c37f4 }
	__asm { je L_007d292f }
	__asm { test eax, eax }
	__asm { je L_007d291f }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_007d2924 }
	__asm { L_007d291f: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_007d2924: }
	__asm { push 0x12c37f4 }
	__asm { call ebx }
	__asm { test al, al }
	__asm { je L_007d2946 }
	__asm { L_007d292f: }
	__asm { lea eax, [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_007d2946 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007d2946: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x18], 0xe58a30 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x34], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { int 3 }
	__asm { jmp fn_007d3420 }
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
	__asm { jmp fn_007d35a0 }
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
	__asm { jmp fn_007d3760 }
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
	__asm { jmp fn_007d3890 }
}

extern "C" char g_00e10198[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_008245c0();
extern "C" void fn_009cad30();
// FUNCTION: ROBLOXSTUDIO 0x0081ca80
extern "C" __declspec(naked) void asm_0081ca80()
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
	__asm { je L_0081cb1f }
	__asm { push 0x8246d0 }
	__asm { push 0x12f6214 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_008245c0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0081cae5 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_009cad30 }
	__asm { L_0081cae5: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_0081cb1f }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0081cb1f }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0081cb1f }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0081cb1f }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0081cb1f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e101a4[];
extern "C" char g_012de64f[];
extern "C" void fn_00403110();
extern "C" void fn_004038a0();
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004115f0();
extern "C" void fn_0043f5a0();
extern "C" void fn_00480bc0();
extern "C" void fn_0049a240();
extern "C" void fn_005e8b40();
extern "C" void fn_006b8a90();
extern "C" void fn_006b97e0();
extern "C" void fn_006bc950();
extern "C" void fn_006c58f0();
extern "C" void fn_007910a0();
extern "C" void fn_007b5910();
extern "C" void fn_007b5bb0();
extern "C" void fn_0082a3a0();
extern "C" void fn_008378a0();
extern "C" void fn_00839bd0();
extern "C" void fn_0083add0();
extern "C" void fn_00843970();
extern "C" void fn_00847120();
extern "C" void fn_0085e9a0();
extern "C" void fn_00891b30();
extern "C" void fn_00960a00();
extern "C" void fn_00986e40();
extern "C" void fn_00b48e60();
extern "C" void fn_00c6cab0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00846410
extern "C" __declspec(naked) void asm_00846410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd278a3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { call fn_00843970 }
	__asm { mov dword ptr [ebx], 0xe5d114 }
	__asm { mov dword ptr [ebx + 4], 0xe5d18c }
	__asm { mov dword ptr [ebx + 0x18], 0xe5d194 }
	__asm { mov dword ptr [ebx + 0x1c], 0xe5d1a0 }
	__asm { push 0 }
	__asm { lea ecx, [ebx + 0x88] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00960a00 }
	__asm { lea ecx, [ebx + 0xa0] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00986e40 }
	__asm { push 0x12f93f8 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006bc950 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], 0xe5d204 }
	__asm { mov dword ptr [ebx + 4], 0xe5d290 }
	__asm { mov dword ptr [ebx + 0x18], 0xe5d298 }
	__asm { mov dword ptr [ebx + 0x1c], 0xe5d2a4 }
	__asm { mov dword ptr [ebx + 0x88], 0xe5d2b4 }
	__asm { mov dword ptr [ebx + 0x98], 0xe5d2bc }
	__asm { mov dword ptr [ebx + 0x9c], 0xe5d2c8 }
	__asm { mov dword ptr [ebx + 0xa0], 0xe5d2d8 }
	__asm { mov dword ptr [ebx + 0xac0], eax }
	__asm { lea eax, [ebx + 0xac4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_004115f0 }
	__asm { call fn_0043f5a0 }
	__asm { lea eax, [ebx + 0xac8] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x480c50 }
	__asm { push 0x131b6c4 }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_004115f0 }
	__asm { call fn_00480bc0 }
	__asm { lea eax, [ebx + 0xacc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x49a230 }
	__asm { push 0x131c464 }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { call fn_004115f0 }
	__asm { call fn_0049a240 }
	__asm { lea eax, [ebx + 0xad0] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x49a230 }
	__asm { push 0x131c464 }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { call fn_004115f0 }
	__asm { call fn_0049a240 }
	__asm { lea eax, [ebx + 0xad4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov byte ptr [ebp - 4], 0xd }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { call fn_004115f0 }
	__asm { call fn_0043f5a0 }
	__asm { lea eax, [ebx + 0xad8] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x85eb20 }
	__asm { push 0x12f9470 }
	__asm { mov byte ptr [ebp - 4], 0xf }
	__asm { call fn_004115f0 }
	__asm { call fn_0085e9a0 }
	__asm { lea eax, [ebx + 0xadc] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 0x11 }
	__asm { call fn_004115f0 }
	__asm { call fn_0043f5a0 }
	__asm { lea eax, [ebx + 0xae0] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 0x13 }
	__asm { call fn_004115f0 }
	__asm { add esp, 0x44 }
	__asm { call fn_0043f5a0 }
	__asm { lea eax, [ebx + 0xae4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 0x15 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043f5a0 }
	__asm { lea ecx, [ebx + 0xae8] }
	__asm { mov byte ptr [ebp - 4], 0x16 }
	__asm { call fn_00847120 }
	__asm { lea eax, [ebx + 0xb78] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0x17 }
	__asm { mov dword ptr [ebx + 0xb68], 0x127a87c }
	__asm { mov dword ptr [ebx + 0xb6c], 0 }
	__asm { mov dword ptr [ebx + 0xb70], 0 }
	__asm { mov dword ptr [ebx + 0xb74], 0 }
	__asm { call fn_006c58f0 }
	__asm { mov dword ptr [ebx + 0xb80], 0 }
	__asm { mov dword ptr [ebx + 0xb84], 0 }
	__asm { mov dword ptr [ebx + 0xb88], 0 }
	__asm { mov dword ptr [ebx + 0xb8c], 0 }
	__asm { mov dword ptr [ebx + 0xb90], 0 }
	__asm { mov dword ptr [ebx + 0xb94], 0 }
	__asm { mov dword ptr [ebx + 0xb98], 0 }
	__asm { mov dword ptr [ebx + 0xb9c], 0 }
	__asm { lea eax, [ebx + 0xba0] }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0x1b }
	__asm { call fn_00839bd0 }
	__asm { mov dword ptr [ebx + 0xba8], 0 }
	__asm { mov dword ptr [ebx + 0xbac], 0 }
	__asm { mov dword ptr [ebx + 0xbb0], 0 }
	__asm { mov dword ptr [ebx + 0xbb4], 0 }
	__asm { mov dword ptr [ebx + 0xbb8], 0 }
	__asm { mov dword ptr [ebx + 0xbbc], 0 }
	__asm { mov dword ptr [ebx + 0xbc0], 0 }
	__asm { mov dword ptr [ebx + 0xbc4], 0 }
	__asm { lea eax, [ebx + 0xbc8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0x20 }
	__asm { call fn_008378a0 }
	__asm { lea eax, [ebx + 0xbd0] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0x21 }
	__asm { call fn_008378a0 }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [ebx + 0xbd8], 1 }
	__asm { mov dword ptr [ebx + 0xbf0], 0xf }
	__asm { mov dword ptr [ebx + 0xbec], 0 }
	__asm { mov byte ptr [ebx + 0xbdc], 0 }
	__asm { mov dword ptr [ebx + 0xbf4], 0 }
	__asm { mov dword ptr [ebx + 0xbfc], 0 }
	__asm { mov byte ptr [ebx + 0xc00], 0 }
	__asm { mov byte ptr [ebx + 0xc01], 0 }
	__asm { lea ecx, [ebx + 0xc08] }
	__asm { mov byte ptr [ebp - 4], 0x23 }
	__asm { mov byte ptr [ebx + 0xc02], 0 }
	__asm { call fn_00b48e60 }
	__asm { lea eax, [ebx + 0xc80] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0x24 }
	__asm { mov dword ptr [ebx + 0xc60], 0 }
	__asm { mov dword ptr [ebx + 0xc64], 0 }
	__asm { mov dword ptr [ebx + 0xc68], 0 }
	__asm { mov dword ptr [ebx + 0xc6c], 0 }
	__asm { mov byte ptr [ebx + 0xc70], 0 }
	__asm { mov dword ptr [ebx + 0xc74], 0 }
	__asm { mov byte ptr [ebx + 0xc78], 0 }
	__asm { call fn_006c58f0 }
	__asm { mov dword ptr [ebx + 0xc88], 0 }
	__asm { mov dword ptr [ebx + 0xc8c], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea edi, [ebx + 0xc90] }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x14 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00846840 }
	__asm { sub eax, 4 }
	__asm { L_00846840: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0x3f800000 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [ebx + 0xcbc], 0xf }
	__asm { mov dword ptr [ebx + 0xcb8], 0 }
	__asm { mov byte ptr [ebx + 0xca8], 0 }
	__asm { mov dword ptr [ebx + 0xcc0], 0 }
	__asm { lea eax, [ebx + 0xccc] }
	__asm { mov dword ptr [ebx + 0xcc4], 0 }
	__asm { mov dword ptr [ebx + 0xcc8], 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x7911c0 }
	__asm { push 0x12e0d28 }
	__asm { mov byte ptr [ebp - 4], 0x28 }
	__asm { call fn_004115f0 }
	__asm { call fn_007910a0 }
	__asm { mov dword ptr [ebx + 0xcd0], 0 }
	__asm { mov dword ptr [ebx + 0xcf0], 0 }
	__asm { lea eax, [ebx + 0xd10] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 0x2c }
	__asm { call fn_004115f0 }
	__asm { add esp, 0x10 }
	__asm { call fn_0043f5a0 }
	__asm { mov dword ptr [ebx + 0xd14], 0 }
	__asm { mov dword ptr [ebx + 0xd18], 0 }
	__asm { lea esi, [ebx + 0xd20] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 0x2e }
	__asm { mov byte ptr [ebx + 0xd1c], 0 }
	__asm { call dword ptr [g_00e101a4] }
	__asm { mov al, byte ptr [g_012de64f] }
	__asm { test al, al }
	__asm { je L_00846946 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0x100df30 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00846946: }
	__asm { push 0x4033d0 }
	__asm { push 0x421ea0 }
	__asm { push 0xb }
	__asm { lea eax, [ebx + 0xd38] }
	__asm { push 8 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0x2f }
	__asm { call fn_00cf676b }
	__asm { lea esi, [ebx + 0xd90] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 0x30 }
	__asm { call dword ptr [g_00e101a4] }
	__asm { mov al, byte ptr [g_012de64f] }
	__asm { test al, al }
	__asm { je L_00846990 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0x100df30 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00846990: }
	__asm { lea ecx, [ebx + 0xda8] }
	__asm { mov byte ptr [ebp - 4], 0x31 }
	__asm { mov dword ptr [ebx + 0xda8], 0 }
	__asm { mov dword ptr [ebx + 0xdac], 0 }
	__asm { call fn_005e8b40 }
	__asm { mov dword ptr [ebx + 0xda8], eax }
	__asm { mov byte ptr [ebx + 0xdb0], 0 }
	__asm { mov dword ptr [ebx + 0xdc8], 0xf }
	__asm { mov dword ptr [ebx + 0xdc4], 0 }
	__asm { mov byte ptr [ebx + 0xdb4], 0 }
	__asm { mov dword ptr [ebx + 0xde0], 0xf }
	__asm { mov dword ptr [ebx + 0xddc], 0 }
	__asm { mov byte ptr [ebx + 0xdcc], 0 }
	__asm { mov dword ptr [ebx + 0xdf8], 0xf }
	__asm { mov dword ptr [ebx + 0xdf4], 0 }
	__asm { mov byte ptr [ebx + 0xde4], 0 }
	__asm { lea eax, [ebx + 0xe1c] }
	__asm { mov dword ptr [ebx + 0xdfc], 0 }
	__asm { mov word ptr [ebx + 0xe00], 0 }
	__asm { mov dword ptr [ebx + 0xe04], 0 }
	__asm { mov dword ptr [ebx + 0xe08], 0 }
	__asm { mov dword ptr [ebx + 0xe0c], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { lea esi, [eax + 0x10] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0x36 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_0082a3a0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov byte ptr [ebx + 0xe3c], 0 }
	__asm { lea eax, [ebx + 0xc88] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 0x38 }
	__asm { mov dword ptr [ebp - 0x10], 0x800 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0x39 }
	__asm { call fn_0083add0 }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0x38 }
	__asm { je L_00846af1 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00846af1 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00846af1 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00846af1 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00846af1: }
	__asm { push 0 }
	__asm { mov ecx, 0x12f93f4 }
	__asm { call fn_006b97e0 }
	__asm { push 4 }
	__asm { push 0xf13380 }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 0x30], 0xf }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov byte ptr [ebp - 0x44], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 0x3a }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0x38 }
	__asm { jb L_00846b42 }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00846b42: }
	__asm { lea eax, [ebx + 0x48] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp + 0xb], 1 }
	__asm { call fn_00891b30 }
	__asm { lea ecx, [eax + 0x18] }
	__asm { call fn_007b5910 }
	__asm { push ebx }
	__asm { lea ecx, [ebx + 0xe1c] }
	__asm { call fn_00c6cab0 }
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

extern "C" char g_00e10510[];
extern "C" char g_00e10514[];
// FUNCTION: ROBLOXSTUDIO 0x00847d30
extern "C" __declspec(naked) void asm_00847d30()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi], 0xe618b8 }
	__asm { mov dword ptr [esi + 0x14], 0xe618c4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x28], 0xe618cc }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe618a4 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00847d81 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00847d81 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00847d81: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe61360 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00847db9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00847db9 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00847db9: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
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
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe61554 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00847df9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00847df9 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00847df9: }
	__asm { mov dword ptr [esi], 0xe5d3b8 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10514] }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe614e4 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00847e39 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00847e39 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00847e39: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
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
	__asm { int 3 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe618a4 }
	__asm { mov dword ptr [esi + 0x14], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_00847e79 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00847e79 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_00847e79: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [g_00e10510] }
}

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e13084[];
extern "C" char g_00e1308c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
// FUNCTION: ROBLOXSTUDIO 0x0084b3f0
extern "C" __declspec(naked) void asm_0084b3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xe611c8 }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e1308c] }
	__asm { lea eax, [edi + 0xc88] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 0xc], 0 }
	__asm { call fn_0040edb0 }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0xc98], esi }
	__asm { je L_0084b44a }
	__asm { mov ecx, dword ptr [edi + 0xc94] }
	__asm { mov eax, dword ptr [edi + 0xca4] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_0084b442 }
	__asm { add eax, -4 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { jmp L_0084b450 }
	__asm { L_0084b442: }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { lea eax, [ebp - 4] }
	__asm { jmp L_0084b450 }
	__asm { L_0084b44a: }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { lea eax, [ebp - 8] }
	__asm { L_0084b450: }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0084b464 }
	__asm { L_0084b456: }
	__asm { or esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { test eax, eax }
	__asm { je L_0084b464 }
	__asm { add eax, -4 }
	__asm { jne L_0084b456 }
	__asm { L_0084b464: }
	__asm { call dword ptr [g_00e13084] }
	__asm { cmp byte ptr [ebp - 0xc], 0 }
	__asm { je L_0084b4d7 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0084b4d7 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0084b4d7 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0084b4d7 }
	__asm { mov edi, dword ptr [ecx + 4] }
	__asm { push ebx }
	__asm { lea ebx, [ecx + 4] }
	__asm { test edi, edi }
	__asm { jne L_0084b4cf }
	__asm { push edi }
	__asm { push edi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [ebx], ecx }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_0084b4cd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { push edi }
	__asm { call dword ptr [g_00e10198] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0084b4cd: }
	__asm { mov edi, edx }
	__asm { L_0084b4cf: }
	__asm { push edi }
	__asm { call dword ptr [g_00e10198] }
	__asm { pop ebx }
	__asm { L_0084b4d7: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_00e13088[];
extern "C" char g_0121034e[];
extern "C" void fn_00402150();
extern "C" void fn_004028a0();
extern "C" void fn_004032a0();
extern "C" void fn_00403380();
extern "C" void fn_004039a0();
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_004220b0();
extern "C" void fn_00424410();
extern "C" void fn_00426850();
extern "C" void fn_004278c0();
extern "C" void fn_004c9d20();
extern "C" void fn_0067b0c0();
extern "C" void fn_006b8a9c();
extern "C" void fn_006b98c0();
extern "C" void fn_0077ab90();
extern "C" void fn_0083add0();
extern "C" void fn_00846f90();
extern "C" void fn_00848ce0();
extern "C" void fn_00848dc0();
extern "C" void fn_00848ef0();
extern "C" void fn_00886420();
extern "C" void fn_00886510();
extern "C" void fn_00886810();
extern "C" void fn_008d7a10();
extern "C" void fn_008f8510();
extern "C" void fn_008fab50();
extern "C" void fn_0097eee0();
extern "C" void fn_0097ef50();
extern "C" void fn_00c54300();
extern "C" void fn_00c63370();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf6a20();
// FUNCTION: ROBLOXSTUDIO 0x0084bff0
extern "C" __declspec(naked) void asm_0084bff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd28367 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xe4 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 0x40], ebx }
	__asm { call dword ptr [g_00e13088] }
	__asm { shl eax, 0xa }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebx + 0xc88] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call fn_0040edb0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc90] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0083add0 }
	__asm { cmp byte ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, 0x80000000 }
	__asm { je L_0084c099 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0084c099 }
	__asm { cmp eax, edi }
	__asm { jle L_0084c099 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0084c099 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0084c099: }
	__asm { push 1 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_00846f90 }
	__asm { push 7 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0097eee0 }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [eax], 0 }
	__asm { call fn_008f8510 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_0084c3e5 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0084c0ef }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0084c0f1 }
	__asm { L_0084c0ef: }
	__asm { mov eax, esi }
	__asm { L_0084c0f1: }
	__asm { push eax }
	__asm { call fn_00c54300 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_0084c3e5 }
	__asm { mov eax, 5 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x20], 0x1f4 }
	__asm { L_0084c111: }
	__asm { test eax, eax }
	__asm { je L_0084c155 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { jb L_0084c123 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0084c125 }
	__asm { L_0084c123: }
	__asm { mov eax, esi }
	__asm { L_0084c125: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xf0] }
	__asm { call fn_004032a0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xf0] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_0077ab90 }
	__asm { lea ecx, [ebp - 0xf0] }
	__asm { call fn_00402150 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { L_0084c155: }
	__asm { push 1 }
	__asm { call dword ptr [g_00e13088] }
	__asm { shl eax, 0xa }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebx + 0xc88] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc90] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_0083add0 }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { je L_0084c1cd }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { lock xadd dword ptr [ecx], edi }
	__asm { test edi, 0x40000000 }
	__asm { jne L_0084c1cd }
	__asm { cmp edi, 0x80000000 }
	__asm { jle L_0084c1cd }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0084c1cd }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0084c1cd: }
	__asm { lea ecx, [ebp - 0x7c] }
	__asm { call fn_00886420 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { cmovae eax, dword ptr [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x60] }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { call fn_004039a0 }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x98] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { call fn_00886810 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x7c] }
	__asm { mov byte ptr [ebp - 4], 0xb }
	__asm { call fn_00886510 }
	__asm { lea ecx, [ebp - 0x98] }
	__asm { call fn_004220b0 }
	__asm { cmp dword ptr [ebp - 0x4c], 0x10 }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { jb L_0084c231 }
	__asm { push dword ptr [ebp - 0x60] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084c231: }
	__asm { lea eax, [ebp - 0x7c] }
	__asm { push 1 }
	__asm { push eax }
	__asm { call fn_008fab50 }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [ebx + 0xc01], 0 }
	__asm { mov dword ptr [ebp - 4], 8 }
	__asm { je L_0084c3dd }
	__asm { push 0xb }
	__asm { push 0 }
	__asm { push 0xe5f310 }
	__asm { mov ecx, esi }
	__asm { call fn_00426850 }
	__asm { cmp eax, -1 }
	__asm { je L_0084c3c4 }
	__asm { push 0 }
	__asm { push 0x1019028 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_00424410 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { cmovae ecx, dword ptr [ebp - 0x3c] }
	__asm { cmp byte ptr [ecx + eax + 2], 0x7b }
	__asm { jne L_0084c3c4 }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov dword ptr [ebp - 0x58], 0xe5d970 }
	__asm { push -1 }
	__asm { add eax, 2 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x94] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov byte ptr [ebp - 4], 0xf }
	__asm { call fn_004278c0 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 7 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 0x10 }
	__asm { call fn_00c63370 }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00848ce0 }
	__asm { lea ecx, [ebp - 0x7c] }
	__asm { call fn_004220b0 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0097ef50 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00848ef0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { dec eax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { test eax, eax }
	__asm { jle L_0084c37b }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { push 0 }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { push 0x3e8 }
	__asm { push edx }
	__asm { push eax }
	__asm { call fn_00cf6a20 }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x4c], edx }
	__asm { call fn_0067b0c0 }
	__asm { lea eax, [esi + esi] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { add esp, 4 }
	__asm { mov eax, 0x84c361 }
	__asm { ret }
	__asm { mov ebx, dword ptr [ebp - 0x40] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov edi, 0x80000000 }
	__asm { jmp L_0084c111 }
	__asm { L_0084c37b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [eax], 1 }
	__asm { mov eax, 0x84c387 }
	__asm { ret }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0097ef50 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00848ef0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0084c3c4: }
	__asm { mov ecx, ebx }
	__asm { call fn_004c9d20 }
	__asm { push 0x103394c }
	__asm { lea ecx, [ebp - 0x7c] }
	__asm { push ecx }
	__asm { push 7 }
	__asm { mov ecx, eax }
	__asm { call fn_008d7a10 }
	__asm { L_0084c3dd: }
	__asm { lea ecx, [ebp - 0x7c] }
	__asm { call fn_004220b0 }
	__asm { L_0084c3e5: }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { jb L_0084c3f6 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084c3f6: }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0097ef50 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0084c432 }
	__asm { mov ecx, esi }
	__asm { call fn_00848dc0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0084c432: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { cmp byte ptr [g_0121034e], 0 }
	__asm { je L_0084c4a8 }
	__asm { mov ecx, dword ptr [ebp - 0xa0] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00403380 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x94] }
	__asm { push 0xe5f2c8 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0xd }
	__asm { jb L_0084c483 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0084c483: }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_0121034e] }
	__asm { push 0x100dedc }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { mov byte ptr [ebp - 4], 0xc }
	__asm { call fn_004028a0 }
	__asm { L_0084c4a8: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { cmp byte ptr [g_0121034e], 0 }
	__asm { je L_0084c510 }
	__asm { mov ecx, dword ptr [ebp - 0x9c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00403380 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x94] }
	__asm { push 0xe5f2c8 }
	__asm { push eax }
	__asm { call fn_006b98c0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0xe }
	__asm { jb L_0084c4ef }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0084c4ef: }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_0121034e] }
	__asm { push 0x100dedc }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { call fn_004028a0 }
	__asm { L_0084c510: }
	__asm { mov eax, 0x84c516 }
	__asm { ret }
	__asm { lea ecx, [ebp - 0x7c] }
	__asm { mov dword ptr [ebp - 4], 8 }
	__asm { call fn_004220b0 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0097ef50 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00848ef0 }
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
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f9478[];
extern "C" char g_012f947c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0084f680
extern "C" __declspec(naked) void asm_0084f680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2857e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0084f9fc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0084f6b2: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x85eb20 }
	__asm { push 0x12f9470 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012f947c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0084f719 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012f947c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0084f70d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012f9478], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0084f71e }
	__asm { L_0084f70d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012f9478], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0084f71e }
	__asm { L_0084f719: }
	__asm { mov eax, dword ptr [g_012f9478] }
	__asm { L_0084f71e: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0084f7a5 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0084f74b }
	__asm { add eax, -5 }
	__asm { jmp L_0084f74d }
	__asm { L_0084f74b: }
	__asm { xor eax, eax }
	__asm { L_0084f74d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0084f7a2 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0084f7a2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0084f791 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0084f7a2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0084f791: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0084f7a2: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0084f7a5: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0084f895 }
	__asm { L_0084f7b0: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0084f895 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0084f835 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0084f7d8 }
	__asm { add eax, -5 }
	__asm { jmp L_0084f7da }
	__asm { L_0084f7d8: }
	__asm { xor eax, eax }
	__asm { L_0084f7da: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0084f82f }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0084f82f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0084f81e }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0084f82f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0084f81e: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0084f82f: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0084f835: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0084f88a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0084f84c }
	__asm { add ebx, -5 }
	__asm { jmp L_0084f84e }
	__asm { L_0084f84c: }
	__asm { xor ebx, ebx }
	__asm { L_0084f84e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0084f884 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0084f884 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0084f88a }
	__asm { L_0084f884: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0084f88a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0084f7b0 }
	__asm { L_0084f895: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0084f8f9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0084f8f9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0084f8f9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0084f8f9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0084f8ef }
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
	__asm { je L_0084f8ed }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0084f8ef }
	__asm { L_0084f8ed: }
	__asm { mov esi, edx }
	__asm { L_0084f8ef: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0084f8f9: }
	__asm { test esi, esi }
	__asm { je L_0084f960 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0084f909 }
	__asm { add eax, -5 }
	__asm { jmp L_0084f90b }
	__asm { L_0084f909: }
	__asm { xor eax, eax }
	__asm { L_0084f90b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0084f960 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0084f960 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0084f94f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0084f960 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0084f94f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0084f960: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0084f9af }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0084f977 }
	__asm { add edi, -5 }
	__asm { jmp L_0084f979 }
	__asm { L_0084f977: }
	__asm { xor edi, edi }
	__asm { L_0084f979: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0084f9a9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0084f9a9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0084f9af }
	__asm { L_0084f9a9: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0084f9af: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0084f9ee }
	__asm { add esi, 5 }
	__asm { je L_0084f9c4 }
	__asm { add esi, -5 }
	__asm { jmp L_0084f9c6 }
	__asm { L_0084f9c4: }
	__asm { xor esi, esi }
	__asm { L_0084f9c6: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0084f9ee }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0084f9ee }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0084f9ee: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0084f6b2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0084f9fc: }
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
extern "C" char g_012e0d38[];
extern "C" char g_012e0d3c[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0084fa10
extern "C" __declspec(naked) void asm_0084fa10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd285ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0084fd8c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_0084fa42: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x7911c0 }
	__asm { push 0x12e0d28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012e0d3c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0084faa9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0d3c], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0084fa9d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_012e0d38], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0084faae }
	__asm { L_0084fa9d: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_012e0d38], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_0084faae }
	__asm { L_0084faa9: }
	__asm { mov eax, dword ptr [g_012e0d38] }
	__asm { L_0084faae: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_0084fb35 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0084fadb }
	__asm { add eax, -5 }
	__asm { jmp L_0084fadd }
	__asm { L_0084fadb: }
	__asm { xor eax, eax }
	__asm { L_0084fadd: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0084fb32 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0084fb32 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0084fb21 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0084fb32 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0084fb21: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0084fb32: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_0084fb35: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_0084fc25 }
	__asm { L_0084fb40: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_0084fc25 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0084fbc5 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_0084fb68 }
	__asm { add eax, -5 }
	__asm { jmp L_0084fb6a }
	__asm { L_0084fb68: }
	__asm { xor eax, eax }
	__asm { L_0084fb6a: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0084fbbf }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_0084fbbf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0084fbae }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0084fbbf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0084fbae: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0084fbbf: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0084fbc5: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0084fc1a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0084fbdc }
	__asm { add ebx, -5 }
	__asm { jmp L_0084fbde }
	__asm { L_0084fbdc: }
	__asm { xor ebx, ebx }
	__asm { L_0084fbde: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0084fc14 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0084fc14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0084fc1a }
	__asm { L_0084fc14: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0084fc1a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_0084fb40 }
	__asm { L_0084fc25: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_0084fc89 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0084fc89 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0084fc89 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0084fc89 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_0084fc7f }
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
	__asm { je L_0084fc7d }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_0084fc7f }
	__asm { L_0084fc7d: }
	__asm { mov esi, edx }
	__asm { L_0084fc7f: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_0084fc89: }
	__asm { test esi, esi }
	__asm { je L_0084fcf0 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0084fc99 }
	__asm { add eax, -5 }
	__asm { jmp L_0084fc9b }
	__asm { L_0084fc99: }
	__asm { xor eax, eax }
	__asm { L_0084fc9b: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0084fcf0 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_0084fcf0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0084fcdf }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0084fcf0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0084fcdf: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0084fcf0: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0084fd3f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_0084fd07 }
	__asm { add edi, -5 }
	__asm { jmp L_0084fd09 }
	__asm { L_0084fd07: }
	__asm { xor edi, edi }
	__asm { L_0084fd09: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0084fd39 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0084fd39 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0084fd3f }
	__asm { L_0084fd39: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0084fd3f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0084fd7e }
	__asm { add esi, 5 }
	__asm { je L_0084fd54 }
	__asm { add esi, -5 }
	__asm { jmp L_0084fd56 }
	__asm { L_0084fd54: }
	__asm { xor esi, esi }
	__asm { L_0084fd56: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0084fd7e }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0084fd7e }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0084fd7e: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_0084fa42 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_0084fd8c: }
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

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_0040fbf0();
extern "C" void fn_0040fcb0();
extern "C" void fn_004115f0();
extern "C" void fn_00480bc0();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x0085a8a0
extern "C" __declspec(naked) void asm_0085a8a0()
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
	__asm { je L_0085a8d8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0085a8d8: }
	__asm { push 0x480c50 }
	__asm { push 0x131b6c4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_00480bc0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_0085a914 }
	__asm { push ebx }
	__asm { jmp L_0085a918 }
	__asm { L_0085a914: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_0085a918: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_0085a95a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0085a95a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0085a95a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0085a95a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0085a95a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0085a99d }
	__asm { add esi, 5 }
	__asm { je L_0085a96f }
	__asm { add esi, -5 }
	__asm { jmp L_0085a971 }
	__asm { L_0085a96f: }
	__asm { xor esi, esi }
	__asm { L_0085a971: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0085a99d }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0085a99d }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0085a99d: }
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
extern "C" void fn_0085e9a0();
// FUNCTION: ROBLOXSTUDIO 0x0085a9c0
extern "C" __declspec(naked) void asm_0085a9c0()
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
	__asm { je L_0085a9f8 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0085a9f8: }
	__asm { push 0x85eb20 }
	__asm { push 0x12f9470 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0085e9a0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_0085aa34 }
	__asm { push ebx }
	__asm { jmp L_0085aa38 }
	__asm { L_0085aa34: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_0085aa38: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_0085aa7a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0085aa7a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0085aa7a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0085aa7a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0085aa7a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0085aabd }
	__asm { add esi, 5 }
	__asm { je L_0085aa8f }
	__asm { add esi, -5 }
	__asm { jmp L_0085aa91 }
	__asm { L_0085aa8f: }
	__asm { xor esi, esi }
	__asm { L_0085aa91: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0085aabd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0085aabd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0085aabd: }
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
extern "C" void fn_007910a0();
// FUNCTION: ROBLOXSTUDIO 0x0085aae0
extern "C" __declspec(naked) void asm_0085aae0()
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
	__asm { je L_0085ab18 }
	__asm { lea eax, [esi + 5] }
	__asm { push eax }
	__asm { call fn_0040fbf0 }
	__asm { add esp, 4 }
	__asm { L_0085ab18: }
	__asm { push 0x7911c0 }
	__asm { push 0x12e0d28 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_007910a0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, edi }
	__asm { test eax, eax }
	__asm { jne L_0085ab54 }
	__asm { push ebx }
	__asm { jmp L_0085ab58 }
	__asm { L_0085ab54: }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { L_0085ab58: }
	__asm { call fn_0040fcb0 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { setne bl }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_0085ab9a }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_0085ab9a }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_0085ab9a }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_0085ab9a }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_0085ab9a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0085abdd }
	__asm { add esi, 5 }
	__asm { je L_0085abaf }
	__asm { add esi, -5 }
	__asm { jmp L_0085abb1 }
	__asm { L_0085abaf: }
	__asm { xor esi, esi }
	__asm { L_0085abb1: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0085abdd }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_0085abdd }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_0085abdd: }
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

extern "C" char g_00e10290[];
extern "C" char g_00e10294[];
extern "C" char g_00e102ec[];
extern "C" char g_00e102f8[];
extern "C" char g_00e10304[];
extern "C" void fn_00774920();
// FUNCTION: ROBLOXSTUDIO 0x0085f0d0
extern "C" __declspec(naked) void asm_0085f0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { add ebx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { adc esi, dword ptr [ebp + 0x18] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { je L_0085f10a }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { cmp dword ptr [edi + 0x38], eax }
	__asm { jae L_0085f10a }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { L_0085f10a: }
	__asm { mov eax, ebx }
	__asm { and eax, esi }
	__asm { cmp eax, -1 }
	__asm { je L_0085f220 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { test al, 1 }
	__asm { je L_0085f1c4 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { test eax, eax }
	__asm { je L_0085f1c1 }
	__asm { test esi, esi }
	__asm { jl L_0085f211 }
	__asm { jg L_0085f144 }
	__asm { test ebx, ebx }
	__asm { jb L_0085f211 }
	__asm { L_0085f144: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { sub ecx, eax }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { cmp esi, edx }
	__asm { jg L_0085f211 }
	__asm { jl L_0085f166 }
	__asm { cmp ebx, eax }
	__asm { ja L_0085f211 }
	__asm { L_0085f166: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov esi, ebx }
	__asm { mov ecx, edi }
	__asm { sub esi, eax }
	__asm { call dword ptr [g_00e102f8] }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10304] }
	__asm { test byte ptr [ebp + 0x24], 2 }
	__asm { je L_0085f1b4 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { je L_0085f1b4 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102ec] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10294] }
	__asm { sub esi, eax }
	__asm { push esi }
	__asm { L_0085f1ac: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10290] }
	__asm { L_0085f1b4: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { jmp L_0085f230 }
	__asm { L_0085f1c1: }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { L_0085f1c4: }
	__asm { test al, 2 }
	__asm { je L_0085f211 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { test eax, eax }
	__asm { je L_0085f211 }
	__asm { test esi, esi }
	__asm { jl L_0085f211 }
	__asm { jg L_0085f1de }
	__asm { test ebx, ebx }
	__asm { jb L_0085f211 }
	__asm { L_0085f1de: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e102f8] }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { sub ecx, eax }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { cmp esi, edx }
	__asm { jg L_0085f211 }
	__asm { jl L_0085f1f8 }
	__asm { cmp ebx, eax }
	__asm { ja L_0085f211 }
	__asm { L_0085f1f8: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10294] }
	__asm { mov esi, ebx }
	__asm { mov ecx, edi }
	__asm { sub esi, eax }
	__asm { call dword ptr [g_00e102f8] }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { jmp L_0085f1ac }
	__asm { L_0085f211: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { or ebx, 0xffffffff }
	__asm { or ecx, ebx }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { jmp L_0085f230 }
	__asm { L_0085f220: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov dword ptr [eax + 4], 0xffffffff }
	__asm { L_0085f230: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
	__asm { int 3 }
	__asm { int 3 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xf12990 }
	__asm { push 0xe5dd30 }
	__asm { push 0xf13380 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { ret }
}

// (empty)

// (empty)
