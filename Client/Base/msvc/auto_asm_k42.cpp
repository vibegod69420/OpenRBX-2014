// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00bccf30();
extern "C" void fn_00bcf410();
extern "C" void fn_00c18390();
extern "C" void fn_00c18650();
extern "C" void fn_00c18f70();
// FUNCTION: ROBLOXSTUDIO 0x00bcdd90
extern "C" __declspec(naked) void asm_00bcdd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00bcf410 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [esi + 0x10], 0x2e }
	__asm { jne L_00bcde39 }
	__asm { L_00bcddb3: }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00c18390 }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [esi + 0x10], 0x11d }
	__asm { je L_00bcddf5 }
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
	__asm { L_00bcddf5: }
	__asm { mov edi, dword ptr [esi + 0x18] }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00c18f70 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], 4 }
	__asm { call fn_00c18650 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [esi + 0x10], 0x2e }
	__asm { je L_00bcddb3 }
	__asm { L_00bcde39: }
	__asm { cmp dword ptr [esi + 0x10], 0x3a }
	__asm { jne L_00bcde73 }
	__asm { mov edi, dword ptr [esi + 0x30] }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00c18390 }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bccf30 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00c18650 }
	__asm { add esp, 0x20 }
	__asm { mov eax, 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcde73: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00bccc70();
extern "C" void fn_00bce690();
extern "C" void fn_00c18b80();
extern "C" void fn_00c18e80();
// FUNCTION: ROBLOXSTUDIO 0x00bce3e0
extern "C" __declspec(naked) void asm_00bce3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [edi + 0x10], 0x11d }
	__asm { mov ebx, dword ptr [edi + 0x30] }
	__asm { je L_00bce41b }
	__asm { push 0x11d }
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
	__asm { L_00bce41b: }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { push edi }
	__asm { call fn_00bc8800 }
	__asm { push 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bce690 }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { push 1 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 8], 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x18], 6 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_00c18b80 }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { inc byte ptr [esi + 0x32] }
	__asm { movzx eax, byte ptr [esi + 0x32] }
	__asm { movzx eax, word ptr [esi + eax*2 + 0xaa] }
	__asm { lea edx, [eax + eax*2] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ecx + edx*4 + 4], eax }
	__asm { push dword ptr [edi + 4] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bccc70 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00c18e80 }
	__asm { movzx eax, byte ptr [ebx + 0x32] }
	__asm { add esp, 0x34 }
	__asm { movzx eax, word ptr [ebx + eax*2 + 0xaa] }
	__asm { pop edi }
	__asm { lea edx, [eax + eax*2] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [ecx + edx*4 + 4], eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8720();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00bcc9d0();
extern "C" void fn_00bcca50();
extern "C" void fn_00bcd510();
extern "C" void fn_00bcedb0();
// FUNCTION: ROBLOXSTUDIO 0x00bce4c0
extern "C" __declspec(naked) void asm_00bce4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor ebx, ebx }
	__asm { push edi }
	__asm { mov edi, edi }
	__asm { L_00bce4d0: }
	__asm { cmp dword ptr [esi + 0x10], 0x11d }
	__asm { je L_00bce4fc }
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
	__asm { L_00bce4fc: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00bc8800 }
	__asm { mov edi, dword ptr [esi + 0x30] }
	__asm { add esp, 4 }
	__asm { movzx eax, byte ptr [edi + 0x32] }
	__asm { inc eax }
	__asm { add eax, ebx }
	__asm { cmp eax, 0xc8 }
	__asm { jle L_00bce560 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0xee205c }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { push 0xc8 }
	__asm { test eax, eax }
	__asm { jne L_00bce541 }
	__asm { push 0xee1fc8 }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00bce552 }
	__asm { L_00bce541: }
	__asm { push eax }
	__asm { push 0xee1fec }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00a457e0 }
	__asm { add esp, 0x14 }
	__asm { L_00bce552: }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_00bc8720 }
	__asm { add esp, 0xc }
	__asm { L_00bce560: }
	__asm { push dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00bcedb0 }
	__asm { movzx ecx, byte ptr [edi + 0x32] }
	__asm { add ecx, ebx }
	__asm { add esp, 8 }
	__asm { mov word ptr [edi + ecx*2 + 0xac], ax }
	__asm { inc ebx }
	__asm { cmp dword ptr [esi + 0x10], 0x2c }
	__asm { jne L_00bce58f }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { jmp L_00bce4d0 }
	__asm { L_00bce58f: }
	__asm { cmp dword ptr [esi + 0x10], 0x3d }
	__asm { pop edi }
	__asm { jne L_00bce5ab }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bcd510 }
	__asm { add esp, 0xc }
	__asm { jmp L_00bce5b4 }
	__asm { L_00bce5ab: }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { xor eax, eax }
	__asm { L_00bce5b4: }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00bcc9d0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00bcca50 }
	__asm { add esp, 0x18 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a457e0();
extern "C" void fn_00bc8800();
extern "C" void fn_00bc8850();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bc8900();
extern "C" void fn_00bc9420();
extern "C" void fn_00bccfa0();
extern "C" void fn_00bcd050();
extern "C" void fn_00bce710();
// FUNCTION: ROBLOXSTUDIO 0x00bce5d0
extern "C" __declspec(naked) void asm_00bce5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x284 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, edx }
	__asm { push esi }
	__asm { lea esi, [eax + 1] }
	__asm { L_00bce5e8: }
	__asm { mov cl, byte ptr [eax] }
	__asm { inc eax }
	__asm { test cl, cl }
	__asm { jne L_00bce5e8 }
	__asm { sub eax, esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push edx }
	__asm { push esi }
	__asm { call fn_00bc9420 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bc8850 }
	__asm { lea eax, [ebp - 0x284] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_00bce710 }
	__asm { mov eax, dword ptr [ebp - 0x284] }
	__asm { mov byte ptr [eax + 0x4a], 2 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_00bc8800 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_00bccfa0 }
	__asm { add esp, 0x2c }
	__asm { cmp dword ptr [ebp - 0x38], 0x11f }
	__asm { pop esi }
	__asm { je L_00bce66c }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push 0x11f }
	__asm { push eax }
	__asm { call fn_00bc8900 }
	__asm { push eax }
	__asm { push 0xee1fb8 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00a457e0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 0x1c }
	__asm { L_00bce66c: }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_00bcd050 }
	__asm { mov eax, dword ptr [ebp - 0x284] }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36700();
extern "C" void fn_00bc67c0();
extern "C" void fn_00bc9ad0();
// FUNCTION: ROBLOXSTUDIO 0x00bce710
extern "C" __declspec(naked) void asm_00bce710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, dword ptr [esi + 0x34] }
	__asm { push ebx }
	__asm { call fn_00bc67c0 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov edx, eax }
	__asm { mov dword ptr [edi], edx }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [edi + 0xc], esi }
	__asm { mov dword ptr [edi + 0x10], ebx }
	__asm { mov dword ptr [esi + 0x30], edi }
	__asm { xor eax, eax }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0xffffffff }
	__asm { mov dword ptr [edi + 0x20], 0xffffffff }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov word ptr [edi + 0x30], ax }
	__asm { mov byte ptr [edi + 0x32], al }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov byte ptr [edx + 0x4b], 2 }
	__asm { call fn_00bc9ad0 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 8], 5 }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { sub eax, dword ptr [ebx + 8] }
	__asm { cmp eax, 0x10 }
	__asm { jg L_00bce7ad }
	__asm { push 1 }
	__asm { push ebx }
	__asm { call fn_00a36700 }
	__asm { add esp, 8 }
	__asm { L_00bce7ad: }
	__asm { add dword ptr [ebx + 8], 0x10 }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 8], 9 }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { sub eax, dword ptr [ebx + 8] }
	__asm { cmp eax, 0x10 }
	__asm { jg L_00bce7d6 }
	__asm { push 1 }
	__asm { push ebx }
	__asm { call fn_00a36700 }
	__asm { add esp, 8 }
	__asm { L_00bce7d6: }
	__asm { add dword ptr [ebx + 8], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc8800();
extern "C" void fn_00bc88e0();
extern "C" void fn_00bcca50();
extern "C" void fn_00bce690();
extern "C" void fn_00c18b80();
// FUNCTION: ROBLOXSTUDIO 0x00bce7e0
extern "C" __declspec(naked) void asm_00bce7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { xor edi, edi }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov byte ptr [ebx + 0x4a], 0 }
	__asm { cmp dword ptr [esi + 0x10], 0x29 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { je L_00bce863 }
	__asm { L_00bce801: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { sub eax, 0x117 }
	__asm { je L_00bce83f }
	__asm { sub eax, 6 }
	__asm { je L_00bce820 }
	__asm { push 0xee20cc }
	__asm { push esi }
	__asm { call fn_00bc88e0 }
	__asm { add esp, 8 }
	__asm { jmp L_00bce84c }
	__asm { L_00bce820: }
	__asm { mov edi, dword ptr [esi + 0x18] }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00bce690 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { inc edi }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { jmp L_00bce84c }
	__asm { L_00bce83f: }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { or byte ptr [ebx + 0x4a], 2 }
	__asm { L_00bce84c: }
	__asm { cmp byte ptr [ebx + 0x4a], 0 }
	__asm { jne L_00bce863 }
	__asm { cmp dword ptr [esi + 0x10], 0x2c }
	__asm { jne L_00bce863 }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { add esp, 4 }
	__asm { jmp L_00bce801 }
	__asm { L_00bce863: }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00bcca50 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov cl, byte ptr [ebx + 0x4a] }
	__asm { mov al, byte ptr [edx + 0x32] }
	__asm { and cl, 1 }
	__asm { sub al, cl }
	__asm { mov byte ptr [ebx + 0x49], al }
	__asm { movzx eax, byte ptr [edx + 0x32] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00c18b80 }
	__asm { add esp, 0x10 }
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
extern "C" void fn_00bccf30();
extern "C" void fn_00bcd4b0();
extern "C" void fn_00bcf6c0();
extern "C" void fn_00bcfaa0();
extern "C" void fn_00c180d0();
extern "C" void fn_00c18280();
// FUNCTION: ROBLOXSTUDIO 0x00bcece0
extern "C" __declspec(naked) void asm_00bcece0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [edi + 0x10], 0x11d }
	__asm { mov ebx, dword ptr [edi + 0x30] }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jne L_00bced29 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 0x1c], 0x7ffffffd }
	__asm { jle L_00bced1d }
	__asm { push 0xee20b4 }
	__asm { push 0x7ffffffd }
	__asm { push ebx }
	__asm { call fn_00bcd4b0 }
	__asm { add esp, 0xc }
	__asm { L_00bced1d: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bccf30 }
	__asm { jmp L_00bced33 }
	__asm { L_00bced29: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bcfaa0 }
	__asm { L_00bced33: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 8 }
	__asm { inc dword ptr [eax + 0x1c] }
	__asm { cmp dword ptr [edi + 0x10], 0x3d }
	__asm { je L_00bced62 }
	__asm { push 0x3d }
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
	__asm { L_00bced62: }
	__asm { push edi }
	__asm { call fn_00bc8800 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00c18280 }
	__asm { mov esi, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00bcf6c0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00c18280 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { push dword ptr [eax + 8] }
	__asm { push 9 }
	__asm { push ebx }
	__asm { call fn_00c180d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x34 }
	__asm { mov dword ptr [ebx + 0x24], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc8720();
extern "C" void fn_00bc8800();
extern "C" void fn_00bcded0();
extern "C" void fn_00bcf1c0();
extern "C" void fn_00c18670();
extern "C" void fn_00c18880();
extern "C" void fn_00c18ae0();
// FUNCTION: ROBLOXSTUDIO 0x00bcf6c0
extern "C" __declspec(naked) void asm_00bcf6c0()
{
	__asm { L_00bcf6c0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, 0xc8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { inc word ptr [eax + 0x34] }
	__asm { cmp word ptr [eax + 0x34], cx }
	__asm { jbe L_00bcf6ee }
	__asm { push 0 }
	__asm { push 0xee2078 }
	__asm { push edi }
	__asm { call fn_00bc8720 }
	__asm { add esp, 0xc }
	__asm { L_00bcf6ee: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { cmp eax, 0x23 }
	__asm { je L_00bcf71c }
	__asm { cmp eax, 0x2d }
	__asm { je L_00bcf718 }
	__asm { cmp eax, 0x10e }
	__asm { jne L_00bcf709 }
	__asm { mov ebx, 1 }
	__asm { jmp L_00bcf721 }
	__asm { L_00bcf709: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bcf1c0 }
	__asm { add esp, 8 }
	__asm { jmp L_00bcf740 }
	__asm { L_00bcf718: }
	__asm { xor ebx, ebx }
	__asm { jmp L_00bcf721 }
	__asm { L_00bcf71c: }
	__asm { mov ebx, 2 }
	__asm { L_00bcf721: }
	__asm { push edi }
	__asm { call fn_00bc8800 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { call L_00bcf6c0 }
	__asm { push esi }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00c18ae0 }
	__asm { add esp, 0x1c }
	__asm { L_00bcf740: }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00bcded0 }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { cmp ebx, 0xf }
	__asm { je L_00bcf7a1 }
	__asm { L_00bcf752: }
	__asm { movzx eax, byte ptr [ebx*2 + 0xee1f98] }
	__asm { cmp eax, dword ptr [ebp + 0x10] }
	__asm { jbe L_00bcf7a1 }
	__asm { push edi }
	__asm { call fn_00bc8800 }
	__asm { push esi }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00c18670 }
	__asm { movzx eax, byte ptr [ebx*2 + 0xee1f99] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { call L_00bcf6c0 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00c18880 }
	__asm { add esp, 0x2c }
	__asm { mov ebx, esi }
	__asm { cmp esi, 0xf }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { jne L_00bcf752 }
	__asm { L_00bcf7a1: }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { pop edi }
	__asm { mov ecx, 0xffff }
	__asm { add word ptr [eax + 0x34], cx }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
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
extern "C" void fn_00c185a0();
extern "C" void fn_00c18860();
// FUNCTION: ROBLOXSTUDIO 0x00bcf7c0
extern "C" __declspec(naked) void asm_00bcf7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bcf6c0 }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { cmp eax, 1 }
	__asm { mov ecx, 3 }
	__asm { cmove eax, ecx }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00c185a0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [esi + 0x10], 0x112 }
	__asm { je L_00bcf829 }
	__asm { push 0x112 }
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
	__asm { L_00bcf829: }
	__asm { push esi }
	__asm { call fn_00bc8800 }
	__asm { mov edi, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ebp - 8], 0xffffffff }
	__asm { mov byte ptr [ebp - 2], 0 }
	__asm { mov al, byte ptr [edi + 0x32] }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { mov byte ptr [ebp - 3], 0 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { call fn_00bccfa0 }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { movzx eax, byte ptr [esi + 8] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0xc] }
	__asm { call fn_00bcee60 }
	__asm { add esp, 0x10 }
	__asm { cmp byte ptr [esi + 9], 0 }
	__asm { je L_00bcf88b }
	__asm { movzx eax, byte ptr [esi + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0x23 }
	__asm { push edi }
	__asm { call fn_00c180d0 }
	__asm { add esp, 0x14 }
	__asm { L_00bcf88b: }
	__asm { movzx eax, byte ptr [edi + 0x32] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push edi }
	__asm { call fn_00c18860 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130f634[];
extern "C" void fn_00407e90();
extern "C" void fn_006b9740();
extern "C" void fn_00b49920();
// FUNCTION: ROBLOXSTUDIO 0x00bcfd30
extern "C" __declspec(naked) void asm_00bcfd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5da88 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00b49920 }
	__asm { mov dword ptr [esi], 0xee24bc }
	__asm { mov dword ptr [esi + 0xcc], 0 }
	__asm { cmp byte ptr [g_0130f634], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00bcfdaf }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 0xc], 0x1307a30 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 0xc], 0xbd11b0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130f634], 1 }
	__asm { L_00bcfdaf: }
	__asm { mov dword ptr [esi], 0xee24f4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bcfe43 }
	__asm { cmp dword ptr [edi + 0x100], 0 }
	__asm { jne L_00bcfdfe }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bcfde9 }
	__asm { push 0x12 }
	__asm { push 0xee25d8 }
	__asm { push 0xee261c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bcfdfe }
	__asm { L_00bcfde9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee2648 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bcfdfe: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bcfe43 }
	__asm { cmp dword ptr [ebx + 0x100], 0 }
	__asm { jne L_00bcfe43 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bcfe2e }
	__asm { push 0x13 }
	__asm { push 0xee25d8 }
	__asm { push 0xee26c8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bcfe43 }
	__asm { L_00bcfe2e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee26f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bcfe43: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a206d0();
extern "C" void fn_00bcfc70();
extern "C" void fn_00bcff70();
// FUNCTION: ROBLOXSTUDIO 0x00bd0f00
extern "C" __declspec(naked) void asm_00bd0f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5dd6b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp dword ptr [ebx + 0x28], 0 }
	__asm { je L_00bd0fb7 }
	__asm { push 0x12c }
	__asm { call fn_00bcff70 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00bd0fb7 }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx + 0x100] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_00a206d0 }
	__asm { mov edx, dword ptr [ebx + 0x10] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [edx + 0x104] }
	__asm { mov edx, dword ptr [ebx + 0xc] }
	__asm { add eax, 4 }
	__asm { mov ebx, dword ptr [edx + 0x104] }
	__asm { lea edx, [edi + 0x14] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push edx }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [eax + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { call fn_00bcfc70 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bd0fb7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bcfe60();
extern "C" void fn_00bcfff0();
// FUNCTION: ROBLOXSTUDIO 0x00bd0fd0
extern "C" __declspec(naked) void asm_00bd0fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d9eb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { cmp dword ptr [ebx + 0x28], 0 }
	__asm { je L_00bd1063 }
	__asm { push 0x120 }
	__asm { call fn_00bcfff0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00bd1063 }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov edx, dword ptr [ebx + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx + 0x100] }
	__asm { mov ebx, dword ptr [edx + 0x104] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x104] }
	__asm { push dword ptr [esi] }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [eax + 0x28] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00bcfe60 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bd1063: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b49950();
extern "C" void fn_00bd1270();
// FUNCTION: ROBLOXSTUDIO 0x00bd1410
extern "C" __declspec(naked) void asm_00bd1410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5da10 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b49950 }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [edi + 0x108], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { lea esi, [edi + 0x110] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi], 0xee252c }
	__asm { mov dword ptr [edi + 0x10c], eax }
	__asm { call fn_00bd1270 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edi], 0xee29c8 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe4687c }
	__asm { mov dword ptr [edi + 0x130], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [edi + 0x134], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [edi + 0x138], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [edi + 0x13c], eax }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [edi + 0x140], eax }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [edi + 0x144], eax }
	__asm { mov dword ptr [edi + 0x12c], 0xe4687c }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_00b49950();
extern "C" void fn_00bd12c0();
// FUNCTION: ROBLOXSTUDIO 0x00bd1590
extern "C" __declspec(naked) void asm_00bd1590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5da30 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b49950 }
	__asm { mov eax, dword ptr [ebp + 0x54] }
	__asm { mov dword ptr [edi + 0x108], eax }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { lea esi, [edi + 0x110] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi], 0xee252c }
	__asm { mov dword ptr [edi + 0x10c], eax }
	__asm { call fn_00bd12c0 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xee299c }
	__asm { mov dword ptr [esi], 0xe370e4 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { fstp dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x124], 0xe370e4 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edi + 0x128], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edi + 0x12c], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edi + 0x130], eax }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { fstp dword ptr [edi + 0x134] }
	__asm { mov dword ptr [edi + 0x13c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edi + 0x140], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edi + 0x144], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edi + 0x148], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edi + 0x14c], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [edi + 0x150], eax }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x138], 0xe4687c }
	__asm { mov dword ptr [edi + 0x158], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov dword ptr [edi + 0x15c], eax }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { mov dword ptr [edi + 0x160], eax }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [edi + 0x164], eax }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { mov dword ptr [edi + 0x168], eax }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [edi + 0x16c], eax }
	__asm { mov dword ptr [edi + 0x154], 0xe4687c }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_00619440();
extern "C" void fn_00b61fa0();
extern "C" void fn_00bc17f0();
extern "C" void fn_00bd1080();
extern "C" void fn_00bd2e50();
// FUNCTION: ROBLOXSTUDIO 0x00bd1e00
extern "C" __declspec(naked) void asm_00bd1e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x2c }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00619440 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00619440 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 8], 0xffffffff }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { lea edx, [ebp - 0x2c] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { call fn_00bc17f0 }
	__asm { cmp dword ptr [ebp - 4], -1 }
	__asm { je L_00bd1e85 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { call fn_00bd2e50 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { call fn_00bd1080 }
	__asm { L_00bd1e85: }
	__asm { cmp dword ptr [ebp - 8], -1 }
	__asm { je L_00bd1eae }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { call fn_00bd2e50 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea edx, [ebp - 0x14] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { call fn_00bd1080 }
	__asm { L_00bd1eae: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_01210345[];
extern "C" void fn_0098e060();
extern "C" void fn_00bd21f0();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00bd2470
extern "C" __declspec(naked) void asm_00bd2470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0x1233a5c }
	__asm { mov esi, ecx }
	__asm { push 0x12339a4 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push 0 }
	__asm { push dword ptr [eax + 0x100] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00bd2535 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { push 0 }
	__asm { push 0x1233a5c }
	__asm { push 0x12339a4 }
	__asm { push 0 }
	__asm { push dword ptr [eax + 0x100] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00bd2535 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00bd21f0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_0098e060 }
	__asm { mov ecx, dword ptr [esi + 0xd0] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_00bd24e5 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push ebx }
	__asm { call dword ptr [edx + 0x10] }
	__asm { L_00bd24e5: }
	__asm { cmp byte ptr [g_01210345], 0 }
	__asm { je L_00bd2534 }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x12921e4 }
	__asm { push 0x12921c8 }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0xd0] }
	__asm { call fn_00cf67f8 }
	__asm { mov edi, eax }
	__asm { add esp, 0x14 }
	__asm { test edi, edi }
	__asm { je L_00bd2533 }
	__asm { mov ecx, ebx }
	__asm { call fn_0098e060 }
	__asm { cmp eax, dword ptr [ebp + 8] }
	__asm { jne L_00bd2533 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_00bd2533 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov ecx, dword ptr [esi + 0xd0] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { L_00bd2533: }
	__asm { pop edi }
	__asm { L_00bd2534: }
	__asm { pop ebx }
	__asm { L_00bd2535: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00495660();
extern "C" void fn_00b620e0();
extern "C" void fn_00b653b0();
extern "C" void fn_00bd21d0();
extern "C" void fn_00bd30e0();
extern "C" void fn_00bd3b00();
extern "C" void fn_00bd52f0();
extern "C" void fn_00bd5b60();
// FUNCTION: ROBLOXSTUDIO 0x00bd3990
extern "C" __declspec(naked) void asm_00bd3990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 1 }
	__asm { xor edx, edx }
	__asm { mov ecx, 2 }
	__asm { div ecx }
	__asm { mov dword ptr [ebp - 0x20], edx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { call fn_00bd21d0 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { call fn_00bd21d0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { call fn_00bd52f0 }
	__asm { mov ecx, eax }
	__asm { call fn_00495660 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { jmp L_00bd39f5 }
	__asm { L_00bd39ec: }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { add edx, 1 }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { L_00bd39f5: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { call fn_00b653b0 }
	__asm { cmp dword ptr [ebp - 0xc], eax }
	__asm { jae L_00bd3a73 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { call fn_00b620e0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp - 0x1c] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { call fn_00bd5b60 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea edx, [ebp - 0x14] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00bd30e0 }
	__asm { cmp dword ptr [ebp - 0x14], 2 }
	__asm { jne L_00bd3a6a }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp - 0x1c] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov edx, dword ptr [ecx + eax*4 + 4] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov edx, dword ptr [ecx + eax*4 + 4] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { call fn_00bd3b00 }
	__asm { jmp L_00bd3a6e }
	__asm { L_00bd3a6a: }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { L_00bd3a6e: }
	__asm { jmp L_00bd39ec }
	__asm { L_00bd3a73: }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00891b60();
extern "C" void fn_009f3c40();
extern "C" void fn_00b61fa0();
extern "C" void fn_00babde0();
extern "C" void fn_00bd0930();
extern "C" void fn_00bd1080();
extern "C" void fn_00bd1780();
extern "C" void fn_00bd19c0();
extern "C" void fn_00bd2070();
// FUNCTION: ROBLOXSTUDIO 0x00bd3b00
extern "C" __declspec(naked) void asm_00bd3b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5dd2b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { push 0x130 }
	__asm { call fn_00bd19c0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [ebp - 0x10], 0 }
	__asm { je L_00bd3b85 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00bd0930 }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { call fn_00bd0930 }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { call fn_00babde0 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00891b60 }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00891b60 }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { call fn_00bd1780 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { jmp L_00bd3b8c }
	__asm { L_00bd3b85: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { L_00bd3b8c: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edx, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { test eax, eax }
	__asm { je L_00bd3c02 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_00bd2070 }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_009f3c40 }
	__asm { add esp, 4 }
	__asm { movzx ecx, al }
	__asm { test ecx, ecx }
	__asm { je L_00bd3c02 }
	__asm { cmp dword ptr [g_012de694], 0 }
	__asm { je L_00bd3bed }
	__asm { push 0x1e0 }
	__asm { push 0xee29f0 }
	__asm { push 0xee2acc }
	__asm { call dword ptr [g_012de694] }
	__asm { add esp, 0xc }
	__asm { movzx edx, al }
	__asm { test edx, edx }
	__asm { jne L_00bd3c02 }
	__asm { L_00bd3bed: }
	__asm { push 0xee2af8 }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd3c02: }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { call fn_00bd1080 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00619440();
extern "C" void fn_00b61fa0();
extern "C" void fn_00bc17f0();
extern "C" void fn_00bd1080();
extern "C" void fn_00bd4f90();
// FUNCTION: ROBLOXSTUDIO 0x00bd42b0
extern "C" __declspec(naked) void asm_00bd42b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x2c }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00619440 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00619440 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 8], 0xffffffff }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { lea edx, [ebp - 0x2c] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { call fn_00bc17f0 }
	__asm { cmp dword ptr [ebp - 4], -1 }
	__asm { je L_00bd4335 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { call fn_00bd4f90 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { call fn_00bd1080 }
	__asm { L_00bd4335: }
	__asm { cmp dword ptr [ebp - 8], -1 }
	__asm { je L_00bd435e }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { call fn_00bd4f90 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea edx, [ebp - 0x14] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { call fn_00bd1080 }
	__asm { L_00bd435e: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00619440();
extern "C" void fn_00b61fa0();
extern "C" void fn_00babde0();
extern "C" void fn_00babe40();
extern "C" void fn_00bc5d70();
// FUNCTION: ROBLOXSTUDIO 0x00bd5b60
extern "C" __declspec(naked) void asm_00bd5b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { call fn_00619440 }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx], edx }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00babde0 }
	__asm { mov ecx, eax }
	__asm { call fn_00bc5d70 }
	__asm { mov byte ptr [ebp - 2], al }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00babe40 }
	__asm { mov byte ptr [ebp - 1], al }
	__asm { movzx ecx, byte ptr [ebp - 2] }
	__asm { test ecx, ecx }
	__asm { je L_00bd5bd7 }
	__asm { movzx edx, byte ptr [ebp - 1] }
	__asm { test edx, edx }
	__asm { je L_00bd5bce }
	__asm { mov eax, 2 }
	__asm { jmp L_00bd5bea }
	__asm { jmp L_00bd5bd5 }
	__asm { L_00bd5bce: }
	__asm { mov eax, 3 }
	__asm { jmp L_00bd5bea }
	__asm { L_00bd5bd5: }
	__asm { jmp L_00bd5bea }
	__asm { L_00bd5bd7: }
	__asm { movzx eax, byte ptr [ebp - 1] }
	__asm { test eax, eax }
	__asm { je L_00bd5be5 }
	__asm { xor eax, eax }
	__asm { jmp L_00bd5bea }
	__asm { jmp L_00bd5bea }
	__asm { L_00bd5be5: }
	__asm { mov eax, 1 }
	__asm { L_00bd5bea: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00891b60();
extern "C" void fn_009f3c40();
extern "C" void fn_00b61fa0();
extern "C" void fn_00babde0();
extern "C" void fn_00bd0930();
extern "C" void fn_00bd1080();
extern "C" void fn_00bd1780();
extern "C" void fn_00bd19c0();
extern "C" void fn_00bd2070();
// FUNCTION: ROBLOXSTUDIO 0x00bd5bf0
extern "C" __declspec(naked) void asm_00bd5bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5dd2b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { push 0x130 }
	__asm { call fn_00bd19c0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [ebp - 0x10], 0 }
	__asm { je L_00bd5c75 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00bd0930 }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { call fn_00bd0930 }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_00b61fa0 }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { call fn_00babde0 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { add eax, 0xc }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00891b60 }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00891b60 }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { call fn_00bd1780 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { jmp L_00bd5c7c }
	__asm { L_00bd5c75: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { L_00bd5c7c: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edx, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { test eax, eax }
	__asm { je L_00bd5cf2 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_00bd2070 }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_009f3c40 }
	__asm { add esp, 4 }
	__asm { movzx ecx, al }
	__asm { test ecx, ecx }
	__asm { je L_00bd5cf2 }
	__asm { cmp dword ptr [g_012de694], 0 }
	__asm { je L_00bd5cdd }
	__asm { push 0x20f }
	__asm { push 0xee2e38 }
	__asm { push 0xee2acc }
	__asm { call dword ptr [g_012de694] }
	__asm { add esp, 0xc }
	__asm { movzx edx, al }
	__asm { test edx, edx }
	__asm { jne L_00bd5cf2 }
	__asm { L_00bd5cdd: }
	__asm { push 0xee3060 }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd5cf2: }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { call fn_00bd1080 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a206d0();
extern "C" void fn_00bcfc70();
extern "C" void fn_00bcff70();
// FUNCTION: ROBLOXSTUDIO 0x00bd6800
extern "C" __declspec(naked) void asm_00bd6800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5dd6b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { test al, al }
	__asm { je L_00bd6868 }
	__asm { cmp dword ptr [ebx + 0x28], 0 }
	__asm { jne L_00bd6872 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd6857 }
	__asm { push 0xc4 }
	__asm { push 0xee3298 }
	__asm { push 0xee35bc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd6868 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bd6857: }
	__asm { movzx eax, al }
	__asm { push 0xee35d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd6868: }
	__asm { cmp dword ptr [ebx + 0x28], 0 }
	__asm { je L_00bd68fe }
	__asm { L_00bd6872: }
	__asm { push 0x12c }
	__asm { call fn_00bcff70 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00bd68fe }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx + 0x100] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_00a206d0 }
	__asm { mov edx, dword ptr [ebx + 0xc] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [edx + 0x104] }
	__asm { mov edx, dword ptr [ebx + 0x10] }
	__asm { add eax, 4 }
	__asm { mov ebx, dword ptr [edx + 0x104] }
	__asm { lea edx, [edi + 0x14] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push edx }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [eax + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { call fn_00bcfc70 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bd68fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b49af0();
extern "C" void fn_00bd6ef0();
// FUNCTION: ROBLOXSTUDIO 0x00bd6b60
extern "C" __declspec(naked) void asm_00bd6b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47da8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xee371c }
	__asm { lea eax, [esi + 0x34] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bd6ef0 }
	__asm { mov edx, dword ptr [esi + 0x30] }
	__asm { test edx, edx }
	__asm { je L_00bd6bae }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { mov ecx, dword ptr [eax + 0x54] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x38] }
	__asm { L_00bd6bae: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bd6bf5 }
	__asm { cmp dword ptr [esi + 0xd4], 0 }
	__asm { je L_00bd6bf5 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd6be4 }
	__asm { push 0x1f }
	__asm { push 0xee3788 }
	__asm { push 0xee37d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd6bf5 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bd6be4: }
	__asm { movzx eax, al }
	__asm { push 0xee37f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd6bf5: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b49af0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0059d7d0();
// FUNCTION: ROBLOXSTUDIO 0x00bd6da0
extern "C" __declspec(naked) void asm_00bd6da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5dde8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x78 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x30], 0 }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [edx + 0xe0] }
	__asm { mov edi, dword ptr [eax + 0x54] }
	__asm { mov eax, dword ptr [edx + 0x100] }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [eax + 0x100] }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [edx + 0xcc] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { lea eax, [edx + 0x10] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov dword ptr [ebp - 0x34], edx }
	__asm { mov dword ptr [ebp - 0x2c], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x28], 0xffffffff }
	__asm { mov eax, dword ptr [ecx + 0xcc] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ecx + 0x10] }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x10], 0xffffffff }
	__asm { jne L_00bd6e48 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { L_00bd6e48: }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0059d7d0 }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { lea edx, [ebp - 0x5c] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x84] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x24] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 0x84], 0 }
	__asm { mov dword ptr [ebp - 0x80], 0 }
	__asm { mov dword ptr [ebp - 0x7c], 1 }
	__asm { mov dword ptr [ebp - 0x78], 0x3f800000 }
	__asm { mov byte ptr [ebp - 0x74], 1 }
	__asm { mov dword ptr [ebp - 0x70], 0 }
	__asm { mov word ptr [ebp - 0x6c], 0x100 }
	__asm { mov byte ptr [ebp - 0x6a], 1 }
	__asm { mov dword ptr [ebp - 0x68], 0x3d23d70a }
	__asm { mov byte ptr [ebp - 0x64], 0 }
	__asm { mov dword ptr [ebp - 0x60], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x3c] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bd6a70();
extern "C" void fn_00bd6c20();
// FUNCTION: ROBLOXSTUDIO 0x00bd7570
extern "C" __declspec(naked) void asm_00bd7570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5de36 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { je L_00bd761b }
	__asm { push 0x124 }
	__asm { call fn_00bd6c20 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [ebp + 0x1c], 0 }
	__asm { mov dword ptr [ebp + 0x1c], eax }
	__asm { jne L_00bd75d3 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00bd761b }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [ecx + 0x104] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { jmp L_00bd75f9 }
	__asm { L_00bd75d3: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00bd761b }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [ecx + 0x104] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { L_00bd75f9: }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push edx }
	__asm { push dword ptr [ecx + 0x104] }
	__asm { mov ecx, eax }
	__asm { call fn_00bd6a70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00bd761b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b53cd0();
extern "C" void fn_00b8c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00bd7800
extern "C" __declspec(naked) void asm_00bd7800()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [ebx + 0xd4], esi }
	__asm { jbe L_00bd78e5 }
	__asm { L_00bd7815: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bd7859 }
	__asm { cmp esi, dword ptr [ebx + 0xd4] }
	__asm { jb L_00bd7859 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bd7844 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd7859 }
	__asm { L_00bd7844: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd7859: }
	__asm { mov eax, dword ptr [ebx + esi*4 + 0x34] }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { jge L_00bd787b }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jge L_00bd787b }
	__asm { cmp dword ptr [eax + 0xc], 0 }
	__asm { jge L_00bd787b }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { jge L_00bd787b }
	__asm { cmp dword ptr [eax + 0x14], 0 }
	__asm { jl L_00bd78d8 }
	__asm { L_00bd787b: }
	__asm { test edi, edi }
	__asm { jne L_00bd7888 }
	__asm { mov ecx, ebx }
	__asm { call fn_00b8c1b0 }
	__asm { mov edi, eax }
	__asm { L_00bd7888: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bd78cd }
	__asm { cmp esi, dword ptr [ebx + 0xd4] }
	__asm { jb L_00bd78cd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd78b8 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd78cd }
	__asm { L_00bd78b8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd78cd: }
	__asm { push dword ptr [ebx + esi*4 + 0x34] }
	__asm { mov ecx, edi }
	__asm { call fn_00b53cd0 }
	__asm { L_00bd78d8: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebx + 0xd4] }
	__asm { jb L_00bd7815 }
	__asm { L_00bd78e5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00594c70();
extern "C" void fn_006b9740();
extern "C" void fn_00bd7fa0();
extern "C" void fn_00c1acb0();
// FUNCTION: ROBLOXSTUDIO 0x00bd7c90
extern "C" __declspec(naked) void asm_00bd7c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ddd6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xee3b38 }
	__asm { lea eax, [esi + 0x244] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00bd7fa0 }
	__asm { mov edx, dword ptr [esi + 0xe0] }
	__asm { test edx, edx }
	__asm { je L_00bd7ce4 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push edx }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { mov ecx, dword ptr [eax + 0x54] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x38] }
	__asm { L_00bd7ce4: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bd7d2b }
	__asm { cmp dword ptr [esi + 0x2e4], 0 }
	__asm { je L_00bd7d2b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd7d1a }
	__asm { push 0x34 }
	__asm { push 0xee3ba0 }
	__asm { push 0xee37d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd7d2b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bd7d1a: }
	__asm { movzx eax, al }
	__asm { push 0xee3bf0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd7d2b: }
	__asm { lea ecx, [esi + 0xf0] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00594c70 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c1acb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0059d7d0();
// FUNCTION: ROBLOXSTUDIO 0x00bd7e40
extern "C" __declspec(naked) void asm_00bd7e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5dde8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x78 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0xe0], 0 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { lea edx, [edi + 0xf0] }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { mov ecx, dword ptr [eax + 0x54] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov eax, dword ptr [eax + 0x100] }
	__asm { mov esi, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [edx + 0xcc] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { lea eax, [edx + 0x10] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov dword ptr [ebp - 0x34], edx }
	__asm { mov dword ptr [ebp - 0x2c], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x28], 0xffffffff }
	__asm { mov eax, dword ptr [esi + 0xcc] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x10], 0xffffffff }
	__asm { jne L_00bd7ee9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0 }
	__asm { lea edx, [ebp - 0x24] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x3c] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0xe0], eax }
	__asm { L_00bd7ee9: }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { call fn_0059d7d0 }
	__asm { mov ecx, dword ptr [edi + 0xe0] }
	__asm { lea edx, [ebp - 0x5c] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x84] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x24] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 0x84], 0 }
	__asm { mov dword ptr [ebp - 0x80], 0 }
	__asm { mov dword ptr [ebp - 0x7c], 1 }
	__asm { mov dword ptr [ebp - 0x78], 0x3f800000 }
	__asm { mov byte ptr [ebp - 0x74], 1 }
	__asm { mov dword ptr [ebp - 0x70], 0 }
	__asm { mov word ptr [ebp - 0x6c], 0x100 }
	__asm { mov byte ptr [ebp - 0x6a], 1 }
	__asm { mov dword ptr [ebp - 0x68], 0x3d23d70a }
	__asm { mov byte ptr [ebp - 0x64], 0 }
	__asm { mov dword ptr [ebp - 0x60], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x3c] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [edi + 0xe0] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bd6a70();
extern "C" void fn_00bd6c20();
// FUNCTION: ROBLOXSTUDIO 0x00bd85d0
extern "C" __declspec(naked) void asm_00bd85d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5de36 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x28], 0 }
	__asm { je L_00bd869f }
	__asm { push 0x124 }
	__asm { call fn_00bd6c20 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [ebp + 0x1c], 0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 0x1c], esi }
	__asm { jne L_00bd8674 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00bd865e }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [edi + 0x28] }
	__asm { push dword ptr [eax + 0x104] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { L_00bd8637: }
	__asm { push dword ptr [eax + 0x104] }
	__asm { mov ecx, esi }
	__asm { call fn_00bd6a70 }
	__asm { mov dword ptr [esi], 0xee3b70 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00bd865e: }
	__asm { xor esi, esi }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00bd8674: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00bd865e }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [edi + 0x28] }
	__asm { push dword ptr [eax + 0x104] }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { jmp L_00bd8637 }
	__asm { L_00bd869f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b53cd0();
extern "C" void fn_00b8c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00bd8830
extern "C" __declspec(naked) void asm_00bd8830()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [ebx + 0x2e4], esi }
	__asm { jbe L_00bd891b }
	__asm { L_00bd8845: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bd8889 }
	__asm { cmp esi, dword ptr [ebx + 0x2e4] }
	__asm { jb L_00bd8889 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bd8874 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd8889 }
	__asm { L_00bd8874: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd8889: }
	__asm { mov eax, dword ptr [ebx + esi*4 + 0x244] }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { jge L_00bd88ae }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jge L_00bd88ae }
	__asm { cmp dword ptr [eax + 0xc], 0 }
	__asm { jge L_00bd88ae }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { jge L_00bd88ae }
	__asm { cmp dword ptr [eax + 0x14], 0 }
	__asm { jl L_00bd890e }
	__asm { L_00bd88ae: }
	__asm { test edi, edi }
	__asm { jne L_00bd88bb }
	__asm { mov ecx, ebx }
	__asm { call fn_00b8c1b0 }
	__asm { mov edi, eax }
	__asm { L_00bd88bb: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bd8900 }
	__asm { cmp esi, dword ptr [ebx + 0x2e4] }
	__asm { jb L_00bd8900 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd88eb }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd8900 }
	__asm { L_00bd88eb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd8900: }
	__asm { push dword ptr [ebx + esi*4 + 0x244] }
	__asm { mov ecx, edi }
	__asm { call fn_00b53cd0 }
	__asm { L_00bd890e: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebx + 0x2e4] }
	__asm { jb L_00bd8845 }
	__asm { L_00bd891b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006dea00();
extern "C" void fn_00b4ba50();
extern "C" void fn_00c1ba20();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bd98c0
extern "C" __declspec(naked) void asm_00bd98c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x138 }
	__asm { mov edi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00bd991f }
	__asm { call fn_006dea00 }
	__asm { push eax }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00b4ba50 }
	__asm { push eax }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_00b4ba50 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c1ba20 }
	__asm { mov esi, eax }
	__asm { jmp L_00bd9921 }
	__asm { L_00bd991f: }
	__asm { xor esi, esi }
	__asm { L_00bd9921: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test al, al }
	__asm { je L_00bd996c }
	__asm { cmp dword ptr [edi + 0x4c], 8 }
	__asm { jb L_00bd996c }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bd995b }
	__asm { push 0x1a }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca80c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bd996c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bd995b: }
	__asm { movzx eax, al }
	__asm { push 0xeca818 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bd996c: }
	__asm { mov eax, dword ptr [edi + 0x4c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + eax*4 + 0x2c], esi }
	__asm { inc dword ptr [edi + 0x4c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b533d0();
extern "C" void fn_00b8c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00bda820
extern "C" __declspec(naked) void asm_00bda820()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00b8c1b0 }
	__asm { xor esi, esi }
	__asm { mov ebx, eax }
	__asm { cmp dword ptr [edi + 0x4c], esi }
	__asm { jbe L_00bda8f0 }
	__asm { L_00bda837: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bda878 }
	__asm { cmp esi, dword ptr [edi + 0x4c] }
	__asm { jb L_00bda878 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bda863 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bda878 }
	__asm { L_00bda863: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bda878: }
	__asm { mov eax, dword ptr [edi + esi*4 + 0x2c] }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { jge L_00bda8e6 }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jge L_00bda8e6 }
	__asm { cmp dword ptr [eax + 0xc], 0 }
	__asm { jge L_00bda8e6 }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { jge L_00bda8e6 }
	__asm { cmp dword ptr [eax + 0x14], 0 }
	__asm { jge L_00bda8e6 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bda8db }
	__asm { cmp esi, dword ptr [edi + 0x4c] }
	__asm { jb L_00bda8db }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bda8c6 }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bda8db }
	__asm { L_00bda8c6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bda8db: }
	__asm { push dword ptr [edi + esi*4 + 0x2c] }
	__asm { mov ecx, ebx }
	__asm { call fn_00b533d0 }
	__asm { L_00bda8e6: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x4c] }
	__asm { jb L_00bda837 }
	__asm { L_00bda8f0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b53cd0();
extern "C" void fn_00b8c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00bda900
extern "C" __declspec(naked) void asm_00bda900()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [ebx + 0x4c], esi }
	__asm { jbe L_00bda9d9 }
	__asm { L_00bda912: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bda953 }
	__asm { cmp esi, dword ptr [ebx + 0x4c] }
	__asm { jb L_00bda953 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bda93e }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bda953 }
	__asm { L_00bda93e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bda953: }
	__asm { mov eax, dword ptr [ebx + esi*4 + 0x2c] }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { jge L_00bda975 }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jge L_00bda975 }
	__asm { cmp dword ptr [eax + 0xc], 0 }
	__asm { jge L_00bda975 }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { jge L_00bda975 }
	__asm { cmp dword ptr [eax + 0x14], 0 }
	__asm { jl L_00bda9cf }
	__asm { L_00bda975: }
	__asm { test edi, edi }
	__asm { jne L_00bda982 }
	__asm { mov ecx, ebx }
	__asm { call fn_00b8c1b0 }
	__asm { mov edi, eax }
	__asm { L_00bda982: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bda9c4 }
	__asm { cmp esi, dword ptr [ebx + 0x4c] }
	__asm { jb L_00bda9c4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bda9af }
	__asm { push 0x31 }
	__asm { push 0xeca7c8 }
	__asm { push 0xeca874 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bda9c4 }
	__asm { L_00bda9af: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeca948 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bda9c4: }
	__asm { push dword ptr [ebx + esi*4 + 0x2c] }
	__asm { mov ecx, edi }
	__asm { call fn_00b53cd0 }
	__asm { L_00bda9cf: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebx + 0x4c] }
	__asm { jb L_00bda912 }
	__asm { L_00bda9d9: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00bdd8e0
extern "C" __declspec(naked) void asm_00bdd8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e130 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov byte ptr [ebx], 0 }
	__asm { call fn_00403540 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { lea esi, [ebx + 0x18] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test ecx, ecx }
	__asm { je L_00bdd950 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00bdd950: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea ecx, [esi + 0x44] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x44] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x60], eax }
	__asm { mov eax, dword ptr [edi + 0x64] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_008c04d0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bdd9a0
extern "C" __declspec(naked) void asm_00bdd9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e048 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x34 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00bdda00 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xee65f4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov byte ptr [eax + 0x10], 0 }
	__asm { jmp L_00bdda02 }
	__asm { L_00bdda00: }
	__asm { xor eax, eax }
	__asm { L_00bdda02: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00bdda19 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_008c04d0 }
	__asm { L_00bdda19: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00bdda40 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_008c04d0 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { L_00bdda40: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bddb80
extern "C" __declspec(naked) void asm_00bddb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e098 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x34 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00bddbe0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xee65bc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov byte ptr [eax + 0x10], 0 }
	__asm { jmp L_00bddbe2 }
	__asm { L_00bddbe0: }
	__asm { xor eax, eax }
	__asm { L_00bddbe2: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00bddbfc }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00bddbfc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00bddc26 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call dword ptr [eax + 4] }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { L_00bddc26: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_0130f978[];
extern "C" char g_0130fbdc[];
extern "C" void fn_00403540();
extern "C" void fn_007cbf10();
extern "C" void fn_00bdde40();
extern "C" void fn_00be64e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bddc30
extern "C" __declspec(naked) void asm_00bddc30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e0de }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { lea eax, [ebp + 0x20] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 0x38], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00bdde40 }
	__asm { mov eax, dword ptr [g_0130fbdc] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test al, 1 }
	__asm { jne L_00bddd06 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fbdc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xee4e10 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_00be64e0 }
	__asm { push eax }
	__asm { mov ecx, 0x130fab0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08580 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bddd06: }
	__asm { mov dword ptr [esi + 0x28], 0x130fab0 }
	__asm { inc dword ptr [g_0130f978] }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00bddd24 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bddd24: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_00bddd47 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bddd47: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" void fn_00403540();
extern "C" void fn_00bddc30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bddd60
extern "C" __declspec(naked) void asm_00bddd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e108 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { lea eax, [ebp + 0x20] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp + 0x38], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00bddc30 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov dword ptr [esi], 0xee5034 }
	__asm { mov dword ptr [esi + 4], 0xee50b4 }
	__asm { mov dword ptr [esi + 0x18], 0xee50bc }
	__asm { mov dword ptr [esi + 0x1c], 0xee50c8 }
	__asm { jb L_00bdde0a }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bdde0a: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_00bdde2d }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bdde2d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00bddee0
extern "C" __declspec(naked) void asm_00bddee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e130 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jae L_00bddf2f }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_00bddf39 }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00bddf39 }
	__asm { L_00bddf2f: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00bddf39: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { lea ebx, [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { test ecx, ecx }
	__asm { je L_00bddf86 }
	__asm { lea eax, [ebx + 8] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00bddf86: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { lea ecx, [ebx + 0x44] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x5c] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi + 0x78] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebx + 0x60], eax }
	__asm { mov eax, dword ptr [esi + 0x7c] }
	__asm { mov dword ptr [ebx + 0x64], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00bdfff0();
extern "C" void fn_00be34d0();
extern "C" void fn_00c285f0();
// FUNCTION: ROBLOXSTUDIO 0x00bde140
extern "C" __declspec(naked) void asm_00bde140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x48 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00be34d0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bdfff0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00bde1c0 }
	__asm { test al, 1 }
	__asm { jne L_00bde1b9 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bde1b9 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bde1b9: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_00bde1c0: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_00bde140();
extern "C" void fn_00be34d0();
extern "C" void fn_00c285f0();
// FUNCTION: ROBLOXSTUDIO 0x00bde1f0
extern "C" __declspec(naked) void asm_00bde1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x48 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00be34d0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bde140 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00bde26d }
	__asm { test al, 1 }
	__asm { jne L_00bde266 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bde266 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bde266: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_00bde26d: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_00be0210();
extern "C" void fn_00be4860();
extern "C" void fn_00be54e0();
// FUNCTION: ROBLOXSTUDIO 0x00bde290
extern "C" __declspec(naked) void asm_00bde290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e190 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x70 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00be4860 }
	__asm { mov ecx, esi }
	__asm { call fn_00be0210 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00bde310 }
	__asm { test al, 1 }
	__asm { jne L_00bde309 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bde309 }
	__asm { lea ecx, [ebp + 0x60] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bde309: }
	__asm { mov dword ptr [ebp + 0x58], 0 }
	__asm { L_00bde310: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be54e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x74 }
}

extern "C" void fn_00bde290();
extern "C" void fn_00be4860();
extern "C" void fn_00be54e0();
// FUNCTION: ROBLOXSTUDIO 0x00bde340
extern "C" __declspec(naked) void asm_00bde340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e190 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x70 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00be4860 }
	__asm { mov ecx, esi }
	__asm { call fn_00bde290 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00bde3bd }
	__asm { test al, 1 }
	__asm { jne L_00bde3b6 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bde3b6 }
	__asm { lea ecx, [ebp + 0x60] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bde3b6: }
	__asm { mov dword ptr [ebp + 0x58], 0 }
	__asm { L_00bde3bd: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be54e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x74 }
}

extern "C" void fn_0095c240();
extern "C" void fn_00be02c0();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x00bde3e0
extern "C" __declspec(naked) void asm_00bde3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39240 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095c240 }
	__asm { mov ecx, esi }
	__asm { call fn_00be02c0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00bde460 }
	__asm { test al, 1 }
	__asm { jne L_00bde459 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bde459 }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bde459: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_00bde460: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_0095c240();
extern "C" void fn_00bde3e0();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x00bde490
extern "C" __declspec(naked) void asm_00bde490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39240 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095c240 }
	__asm { mov ecx, esi }
	__asm { call fn_00bde3e0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00bde50d }
	__asm { test al, 1 }
	__asm { jne L_00bde506 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bde506 }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bde506: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_00bde50d: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x54 }
}

extern "C" void fn_00be04e0();
extern "C" void fn_00be4860();
extern "C" void fn_00be54e0();
// FUNCTION: ROBLOXSTUDIO 0x00bde5d0
extern "C" __declspec(naked) void asm_00bde5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e190 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x70 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00be4860 }
	__asm { mov ecx, esi }
	__asm { call fn_00be04e0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00bde650 }
	__asm { test al, 1 }
	__asm { jne L_00bde649 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bde649 }
	__asm { lea ecx, [ebp + 0x60] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bde649: }
	__asm { mov dword ptr [ebp + 0x58], 0 }
	__asm { L_00bde650: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be54e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x74 }
}

extern "C" void fn_00bde5d0();
extern "C" void fn_00be4860();
extern "C" void fn_00be54e0();
// FUNCTION: ROBLOXSTUDIO 0x00bde680
extern "C" __declspec(naked) void asm_00bde680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e190 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x70 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00be4860 }
	__asm { mov ecx, esi }
	__asm { call fn_00bde5d0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00bde6fd }
	__asm { test al, 1 }
	__asm { jne L_00bde6f6 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bde6f6 }
	__asm { lea ecx, [ebp + 0x60] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bde6f6: }
	__asm { mov dword ptr [ebp + 0x58], 0 }
	__asm { L_00bde6fd: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be54e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x74 }
}

extern "C" void fn_00b33fa0();
extern "C" void fn_00bde530();
extern "C" void fn_00be45b0();
extern "C" void fn_00be5590();
// FUNCTION: ROBLOXSTUDIO 0x00bde850
extern "C" __declspec(naked) void asm_00bde850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e1e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x70 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00be45b0 }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_00bde530 }
	__asm { mov edi, eax }
	__asm { cmp esi, edi }
	__asm { je L_00bde8f5 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b33fa0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b33fa0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b33fa0 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00bde8f5 }
	__asm { test al, 1 }
	__asm { jne L_00bde8ee }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bde8ee }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bde8ee: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00bde8f5: }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00bde920 }
	__asm { test al, 1 }
	__asm { jne L_00bde919 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bde919 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bde919: }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { L_00bde920: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5590 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x70 }
}

extern "C" char g_0130fd60[];
extern "C" char g_0130fd64[];
extern "C" char g_0130fd68[];
extern "C" char g_0130fd6c[];
extern "C" void fn_0043eb10();
extern "C" void fn_006b9b80();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00bdea80
extern "C" __declspec(naked) void asm_00bdea80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130fd6c] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00bdeada }
	__asm { or eax, 1 }
	__asm { push 0xe08900 }
	__asm { mov dword ptr [g_0130fd6c], eax }
	__asm { mov dword ptr [g_0130fd60], 0x11efd20 }
	__asm { mov dword ptr [g_0130fd68], 0xbe71b0 }
	__asm { mov dword ptr [g_0130fd64], 0xbe7ce0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00bdeada: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x130fd60 }
	__asm { jne L_00bdeb02 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_006b9b80 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bdeb02: }
	__asm { test ecx, ecx }
	__asm { je L_00bdeb18 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00bdeb18: }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00bdeb34 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0043eb10 }
	__asm { L_00bdeb34: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x130fd60 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00bdeb50
extern "C" __declspec(naked) void asm_00bdeb50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4d268 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x50], edx }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_00bdeb9b }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { call eax }
	__asm { mov edx, dword ptr [ebp - 0x50] }
	__asm { add esp, 8 }
	__asm { L_00bdeb9b: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { test ecx, ecx }
	__asm { je L_00bdebd0 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0x4c] }
	__asm { add esp, 8 }
	__asm { L_00bdebd0: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00bdebf6 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00bdebf6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
extern "C" void fn_00bdf190();
// FUNCTION: ROBLOXSTUDIO 0x00bdec10
extern "C" __declspec(naked) void asm_00bdec10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41938 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { test ecx, ecx }
	__asm { je L_00bdec84 }
	__asm { mov dword ptr [edx], ecx }
	__asm { test cl, 1 }
	__asm { je L_00bdec70 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_00bdec84 }
	__asm { L_00bdec70: }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 0x28] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bdec84: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00bdf190 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00bdf4f0();
// FUNCTION: ROBLOXSTUDIO 0x00bdee10
extern "C" __declspec(naked) void asm_00bdee10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41938 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { sub esp, 0x20 }
	__asm { mov esi, ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { test edx, edx }
	__asm { je L_00bdee84 }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_00bdee70 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { jmp L_00bdee84 }
	__asm { L_00bdee70: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bdee84: }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { test edx, edx }
	__asm { je L_00bdeede }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_00bdeeca }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { jmp L_00bdeede }
	__asm { L_00bdeeca: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bdeede: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push esi }
	__asm { call fn_00bdf4f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00be1020();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bdf320
extern "C" __declspec(naked) void asm_00bdf320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5e2f8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00be1020 }
	__asm { cmp dword ptr [ebp + 0x28], 0x10 }
	__asm { jb L_00bdf372 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bdf372: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp + 0x28], 0xf }
	__asm { mov dword ptr [ebp + 0x24], 0 }
	__asm { mov byte ptr [ebp + 0x14], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00bdf3af }
	__asm { test al, 1 }
	__asm { jne L_00bdf3a8 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bdf3a8 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bdf3a8: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_00bdf3af: }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00bdf3d6 }
	__asm { test al, 1 }
	__asm { jne L_00bdf3d6 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bdf3d6 }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bdf3d6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x68 }
}

extern "C" void fn_00be14d0();
// FUNCTION: ROBLOXSTUDIO 0x00bdf4f0
extern "C" __declspec(naked) void asm_00bdf4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5e350 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { lea eax, [ebp + 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00be14d0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00bdf554 }
	__asm { test al, 1 }
	__asm { jne L_00bdf54d }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bdf54d }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bdf54d: }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { L_00bdf554: }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00bdf57b }
	__asm { test al, 1 }
	__asm { jne L_00bdf57b }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bdf57b }
	__asm { lea ecx, [ebp + 0x3c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bdf57b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_00be34d0();
extern "C" void fn_00c285f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bdfc60
extern "C" __declspec(naked) void asm_00bdfc60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e3bb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x48 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00bdfcb1 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00be34d0 }
	__asm { jmp L_00bdfcb3 }
	__asm { L_00bdfcb1: }
	__asm { xor esi, esi }
	__asm { L_00bdfcb3: }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [eax], esi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x50], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00bdfced }
	__asm { test al, 1 }
	__asm { jne L_00bdfce6 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bdfce6 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bdfce6: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_00bdfced: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_00be4860();
extern "C" void fn_00be54e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bdfd10
extern "C" __declspec(naked) void asm_00bdfd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e3eb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00bdfd61 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00be4860 }
	__asm { jmp L_00bdfd63 }
	__asm { L_00bdfd61: }
	__asm { xor esi, esi }
	__asm { L_00bdfd63: }
	__asm { mov eax, dword ptr [ebp + 0x78] }
	__asm { mov dword ptr [eax], esi }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x78], eax }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00bdfd9d }
	__asm { test al, 1 }
	__asm { jne L_00bdfd96 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bdfd96 }
	__asm { lea ecx, [ebp + 0x60] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bdfd96: }
	__asm { mov dword ptr [ebp + 0x58], 0 }
	__asm { L_00bdfd9d: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be54e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x78 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00bdfc60();
extern "C" void fn_00be34d0();
extern "C" void fn_00c285f0();
// FUNCTION: ROBLOXSTUDIO 0x00bdfe80
extern "C" __declspec(naked) void asm_00bdfe80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e410 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00bdfee5 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x50] }
	__asm { sub esp, 0x48 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00be34d0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bdfc60 }
	__asm { mov bl, 1 }
	__asm { jmp L_00bdfee7 }
	__asm { L_00bdfee5: }
	__asm { xor bl, bl }
	__asm { L_00bdfee7: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x50], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00bdff1b }
	__asm { test al, 1 }
	__asm { jne L_00bdff14 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bdff14 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bdff14: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_00bdff1b: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_00bdfe80();
extern "C" void fn_00be34d0();
extern "C" void fn_00c285f0();
// FUNCTION: ROBLOXSTUDIO 0x00bdff40
extern "C" __declspec(naked) void asm_00bdff40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e410 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x50] }
	__asm { sub esp, 0x48 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00be34d0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bdfe80 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x50], eax }
	__asm { mov ecx, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00bdffc9 }
	__asm { test cl, 1 }
	__asm { jne L_00bdffc2 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00bdffc2 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bdffc2: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_00bdffc9: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x4c }
}

extern "C" void fn_00bdff40();
extern "C" void fn_00be34d0();
extern "C" void fn_00c285f0();
// FUNCTION: ROBLOXSTUDIO 0x00bdfff0
extern "C" __declspec(naked) void asm_00bdfff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e150 }
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
	__asm { sub esp, 0x48 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00be34d0 }
	__asm { mov esi, 0xee65b0 }
	__asm { mov ecx, esi }
	__asm { call fn_00bdff40 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00be007e }
	__asm { test al, 1 }
	__asm { jne L_00be0077 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00be0077 }
	__asm { lea ecx, [ebp + 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be0077: }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { L_00be007e: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c285f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00bdfd10();
extern "C" void fn_00be4860();
extern "C" void fn_00be54e0();
// FUNCTION: ROBLOXSTUDIO 0x00be00a0
extern "C" __declspec(naked) void asm_00be00a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e430 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00be0105 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x78] }
	__asm { sub esp, 0x70 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00be4860 }
	__asm { mov ecx, esi }
	__asm { call fn_00bdfd10 }
	__asm { mov bl, 1 }
	__asm { jmp L_00be0107 }
	__asm { L_00be0105: }
	__asm { xor bl, bl }
	__asm { L_00be0107: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x78], eax }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00be013b }
	__asm { test al, 1 }
	__asm { jne L_00be0134 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00be0134 }
	__asm { lea ecx, [ebp + 0x60] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be0134: }
	__asm { mov dword ptr [ebp + 0x58], 0 }
	__asm { L_00be013b: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be54e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x78 }
}

extern "C" void fn_00be00a0();
extern "C" void fn_00be4860();
extern "C" void fn_00be54e0();
// FUNCTION: ROBLOXSTUDIO 0x00be0160
extern "C" __declspec(naked) void asm_00be0160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e430 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x78] }
	__asm { sub esp, 0x70 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00be4860 }
	__asm { mov ecx, esi }
	__asm { call fn_00be00a0 }
	__asm { mov bl, al }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x78], eax }
	__asm { mov ecx, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00be01e9 }
	__asm { test cl, 1 }
	__asm { jne L_00be01e2 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_00be01e2 }
	__asm { lea ecx, [ebp + 0x60] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be01e2: }
	__asm { mov dword ptr [ebp + 0x58], 0 }
	__asm { L_00be01e9: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be54e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x74 }
}

extern "C" void fn_00be0160();
extern "C" void fn_00be4860();
extern "C" void fn_00be54e0();
// FUNCTION: ROBLOXSTUDIO 0x00be0210
extern "C" __declspec(naked) void asm_00be0210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e190 }
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
	__asm { sub esp, 0x70 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00be4860 }
	__asm { mov esi, 0xee65d0 }
	__asm { mov ecx, esi }
	__asm { call fn_00be0160 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00be029e }
	__asm { test al, 1 }
	__asm { jne L_00be0297 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00be0297 }
	__asm { lea ecx, [ebp + 0x60] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be0297: }
	__asm { mov dword ptr [ebp + 0x58], 0 }
	__asm { L_00be029e: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be54e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x70 }
}

extern "C" void fn_009599d0();
extern "C" void fn_0095c240();
extern "C" void fn_00be5350();
// FUNCTION: ROBLOXSTUDIO 0x00be02c0
extern "C" __declspec(naked) void asm_00be02c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39240 }
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
	__asm { sub esp, 0x50 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0095c240 }
	__asm { mov esi, 0xee6640 }
	__asm { mov ecx, esi }
	__asm { call fn_009599d0 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00be034e }
	__asm { test al, 1 }
	__asm { jne L_00be0347 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00be0347 }
	__asm { lea ecx, [ebp + 0x40] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be0347: }
	__asm { mov dword ptr [ebp + 0x38], 0 }
	__asm { L_00be034e: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x50 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00be45b0();
extern "C" void fn_00be5590();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00be0370
extern "C" __declspec(naked) void asm_00be0370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e45b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x74 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00be0407 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x80], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x7c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { call fn_00be45b0 }
	__asm { push 0x70 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00be03f0 }
	__asm { mov ecx, dword ptr [ebp - 0x80] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x7c] }
	__asm { lea eax, [ebp - 0x78] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00be45b0 }
	__asm { jmp L_00be03f2 }
	__asm { L_00be03f0: }
	__asm { xor esi, esi }
	__asm { L_00be03f2: }
	__asm { mov eax, dword ptr [ebp + 0x78] }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00be5590 }
	__asm { mov bl, 1 }
	__asm { jmp L_00be0409 }
	__asm { L_00be0407: }
	__asm { xor bl, bl }
	__asm { L_00be0409: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5590 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x78 }
}

extern "C" void fn_00be0370();
extern "C" void fn_00be45b0();
extern "C" void fn_00be5590();
// FUNCTION: ROBLOXSTUDIO 0x00be0430
extern "C" __declspec(naked) void asm_00be0430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e170 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x74 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x80], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x7c], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00be45b0 }
	__asm { mov eax, dword ptr [ebp - 0x80] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x70 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x7c] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x78] }
	__asm { push eax }
	__asm { call fn_00be45b0 }
	__asm { mov esi, 0xee6630 }
	__asm { mov ecx, esi }
	__asm { call fn_00be0370 }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00be5590 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be5590 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x70 }
}

extern "C" void fn_00be0160();
extern "C" void fn_00be4860();
extern "C" void fn_00be54e0();
// FUNCTION: ROBLOXSTUDIO 0x00be04e0
extern "C" __declspec(naked) void asm_00be04e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e190 }
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
	__asm { sub esp, 0x70 }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00be4860 }
	__asm { mov esi, 0xee6638 }
	__asm { mov ecx, esi }
	__asm { call fn_00be0160 }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmove esi, ecx }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00be056e }
	__asm { test al, 1 }
	__asm { jne L_00be0567 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00be0567 }
	__asm { lea ecx, [ebp + 0x60] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be0567: }
	__asm { mov dword ptr [ebp + 0x58], 0 }
	__asm { L_00be056e: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00be54e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x70 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00be1160
extern "C" __declspec(naked) void asm_00be1160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41938 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { test esi, esi }
	__asm { je L_00be11d6 }
	__asm { mov dword ptr [edx], esi }
	__asm { test byte ptr [edx], 1 }
	__asm { je L_00be11c2 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_00be11d6 }
	__asm { L_00be11c2: }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea eax, [edi + 8] }
	__asm { and esi, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be11d6: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { add ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_0130fd48[];
extern "C" char g_0130fd4c[];
extern "C" char g_0130fd50[];
extern "C" char g_0130fd54[];
extern "C" char g_0130fd58[];
extern "C" char g_0130fd5c[];
extern "C" char g_0130fd78[];
extern "C" char g_0130fd7c[];
extern "C" void fn_007cb250();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00be15e0
extern "C" __declspec(naked) void asm_00be15e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5f4fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130fd5c] }
	__asm { test al, 1 }
	__asm { jne L_00be1622 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fd5c], eax }
	__asm { push 0xee4df8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130fd58], eax }
	__asm { L_00be1622: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5e6ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130fd4c] }
	__asm { test al, 1 }
	__asm { jne L_00be1672 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fd4c], eax }
	__asm { push 0xee4dfc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130fd48], eax }
	__asm { L_00be1672: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5f4de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130fd54] }
	__asm { test al, 1 }
	__asm { jne L_00be16c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fd54], eax }
	__asm { push 0xee4df4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130fd50], eax }
	__asm { L_00be16c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5e70e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0130fd7c] }
	__asm { test al, 1 }
	__asm { jne L_00be170a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fd7c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0130fd78], eax }
	__asm { L_00be170a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00be2ba0();
extern "C" void fn_00bea0c0();
// FUNCTION: ROBLOXSTUDIO 0x00be1720
extern "C" __declspec(naked) void asm_00be1720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x28 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00be176b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00be176b: }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_00be1786 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00be2ba0 }
	__asm { mov esi, eax }
	__asm { jmp L_00be1788 }
	__asm { L_00be1786: }
	__asm { xor esi, esi }
	__asm { L_00be1788: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00bea0c0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00be17a5 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00be17a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00825140();
extern "C" void fn_00be2870();
extern "C" void fn_00be7490();
// FUNCTION: ROBLOXSTUDIO 0x00be20f0
extern "C" __declspec(naked) void asm_00be20f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e8d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00be2870 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xee5510 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x1c], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00be7490 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00825140();
extern "C" void fn_00be2980();
extern "C" void fn_00be7540();
// FUNCTION: ROBLOXSTUDIO 0x00be21a0
extern "C" __declspec(naked) void asm_00be21a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e8d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00be2980 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xee54bc }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x1c], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00be7540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_008250d0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_00be2980();
// FUNCTION: ROBLOXSTUDIO 0x00be2250
extern "C" __declspec(naked) void asm_00be2250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a7ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00be2980 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xee5498 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008250d0 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00be22fe }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00be22fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_0131a54c[];
extern "C" char g_0131a550[];
extern "C" char g_0131a554[];
extern "C" char g_0131a558[];
extern "C" void fn_007d5390();
extern "C" void fn_00825140();
extern "C" void fn_00be2980();
extern "C" void fn_00be75f0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00be2320
extern "C" __declspec(naked) void asm_00be2320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e906 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00be2980 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xee54e8 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { push 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov ebx, dword ptr [ebp + 0x1c] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00be238b }
	__asm { mov dword ptr [eax], ebx }
	__asm { jmp L_00be238d }
	__asm { L_00be238b: }
	__asm { xor eax, eax }
	__asm { L_00be238d: }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x20], esp }
	__asm { mov esi, esp }
	__asm { call fn_007d5390 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00be23b3 }
	__asm { mov dword ptr [eax], ebx }
	__asm { L_00be23b3: }
	__asm { mov eax, dword ptr [g_0131a54c] }
	__asm { test al, 1 }
	__asm { jne L_00be23ef }
	__asm { or eax, 1 }
	__asm { push 0xddc180 }
	__asm { mov dword ptr [g_0131a54c], eax }
	__asm { mov dword ptr [g_0131a550], 0x12be4a4 }
	__asm { mov dword ptr [g_0131a558], 0x40d810 }
	__asm { mov dword ptr [g_0131a554], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00be23ef: }
	__asm { mov dword ptr [esi + 4], 0x131a550 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00be75f0 }
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

extern "C" void fn_00825140();
extern "C" void fn_00be2980();
extern "C" void fn_00be76a0();
// FUNCTION: ROBLOXSTUDIO 0x00be2440
extern "C" __declspec(naked) void asm_00be2440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37536 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00be2980 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xee54a4 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { sub esp, 0x44 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp + 0x1c], esp }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { call fn_00825140 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00be76a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130faac[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00be2870
extern "C" __declspec(naked) void asm_00be2870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5e9f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0130faac] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00be28ea }
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
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00be28ea: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x130f980 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xee5504 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00be2962 }
	__asm { push 0x1292a08 }
	__asm { mov ecx, 0x1292a08 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00be2962 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00be294d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00be2962 }
	__asm { L_00be294d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00be2962: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130faac[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00be2980
extern "C" __declspec(naked) void asm_00be2980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ea16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0130faac] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00be29fa }
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
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00be29fa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x130f980 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xee548c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00be2a72 }
	__asm { push 0x1292a08 }
	__asm { mov ecx, 0x1292a08 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00be2a72 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00be2a5d }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00be2a72 }
	__asm { L_00be2a5d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00be2a72: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130fbdc[];
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b930();
extern "C" void fn_00be64e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00be2a90
extern "C" __declspec(naked) void asm_00be2a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ea36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_0130fbdc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_00be2b0a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fbdc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xee4e10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_00be64e0 }
	__asm { push eax }
	__asm { mov ecx, 0x130fab0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xe08580 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00be2b0a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x130fab0 }
	__asm { call fn_0092b930 }
	__asm { mov dword ptr [esi], 0xee5528 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00be2b82 }
	__asm { push 0x1292a24 }
	__asm { mov ecx, 0x1292a24 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00be2b82 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00be2b6d }
	__asm { push 0x662 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00be2b82 }
	__asm { L_00be2b6d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe55e00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00be2b82: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00be40a0();
// FUNCTION: ROBLOXSTUDIO 0x00be45b0
extern "C" __declspec(naked) void asm_00be45b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ed78 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00be40a0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov ecx, dword ptr [edi + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00be4642 }
	__asm { mov dword ptr [esi + 0x48], ecx }
	__asm { test cl, 1 }
	__asm { je L_00be462e }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov eax, dword ptr [edi + 0x54] }
	__asm { mov dword ptr [esi + 0x54], eax }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { mov dword ptr [esi + 0x58], eax }
	__asm { mov eax, dword ptr [edi + 0x5c] }
	__asm { mov dword ptr [esi + 0x5c], eax }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { mov dword ptr [esi + 0x60], eax }
	__asm { mov eax, dword ptr [edi + 0x64] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00be462e: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x50] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x50] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be4642: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00be4300();
// FUNCTION: ROBLOXSTUDIO 0x00be4860
extern "C" __declspec(naked) void asm_00be4860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ef98 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00be4300 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov ecx, dword ptr [edi + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00be48f2 }
	__asm { mov dword ptr [esi + 0x48], ecx }
	__asm { test cl, 1 }
	__asm { je L_00be48de }
	__asm { mov eax, dword ptr [edi + 0x50] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov eax, dword ptr [edi + 0x54] }
	__asm { mov dword ptr [esi + 0x54], eax }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { mov dword ptr [esi + 0x58], eax }
	__asm { mov eax, dword ptr [edi + 0x5c] }
	__asm { mov dword ptr [esi + 0x5c], eax }
	__asm { mov eax, dword ptr [edi + 0x60] }
	__asm { mov dword ptr [esi + 0x60], eax }
	__asm { mov eax, dword ptr [edi + 0x64] }
	__asm { mov dword ptr [esi + 0x64], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00be48de: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x50] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [edi + 0x50] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be48f2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_00be26f0();
extern "C" void fn_00be5e00();
extern "C" void fn_00c679a0();
// FUNCTION: ROBLOXSTUDIO 0x00be4b60
extern "C" __declspec(naked) void asm_00be4b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ee57 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00be26f0 }
	__asm { mov al, byte ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xee4edc }
	__asm { mov dword ptr [edi + 4], 0xee4f5c }
	__asm { mov dword ptr [edi + 0x18], 0xee4f64 }
	__asm { mov dword ptr [edi + 0x1c], 0xee4f70 }
	__asm { mov byte ptr [edi + 0x64], al }
	__asm { lea ecx, [edi + 0x68] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { call fn_00be5e00 }
	__asm { mov dword ptr [edi + 0x68], eax }
	__asm { lea ecx, [edi + 0x70] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { call fn_00c679a0 }
	__asm { mov dword ptr [edi + 0x70], eax }
	__asm { mov byte ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x90], 0xf }
	__asm { mov dword ptr [edi + 0x8c], 0 }
	__asm { mov byte ptr [edi + 0x7c], 0 }
	__asm { push -1 }
	__asm { lea ecx, [edi + 0x94] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push -1 }
	__asm { lea ecx, [edi + 0xac] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0xd8], 0xf }
	__asm { mov dword ptr [edi + 0xd4], 0 }
	__asm { mov byte ptr [edi + 0xc4], 0 }
	__asm { mov dword ptr [edi + 0xf0], 0xf }
	__asm { mov dword ptr [edi + 0xec], 0 }
	__asm { mov byte ptr [edi + 0xdc], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00be4ec0
extern "C" __declspec(naked) void asm_00be4ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4aa33 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov esi, dword ptr [edi + 0x34] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00be4f0a }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00be4f01 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00be4f01: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be4f0a: }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { test esi, esi }
	__asm { je L_00be4f3b }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00be4f21 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be4f21: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be4f3b: }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00be8210();
extern "C" void fn_00be82d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00be5670
extern "C" __declspec(naked) void asm_00be5670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0xf0], 0x10 }
	__asm { jb L_00be568f }
	__asm { push dword ptr [edi + 0xdc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be568f: }
	__asm { mov dword ptr [edi + 0xf0], 0xf }
	__asm { mov dword ptr [edi + 0xec], 0 }
	__asm { mov byte ptr [edi + 0xdc], 0 }
	__asm { cmp dword ptr [edi + 0xd8], 0x10 }
	__asm { jb L_00be56c1 }
	__asm { push dword ptr [edi + 0xc4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be56c1: }
	__asm { mov dword ptr [edi + 0xd8], 0xf }
	__asm { mov dword ptr [edi + 0xd4], 0 }
	__asm { mov byte ptr [edi + 0xc4], 0 }
	__asm { cmp dword ptr [edi + 0xc0], 0x10 }
	__asm { jb L_00be56f3 }
	__asm { push dword ptr [edi + 0xac] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be56f3: }
	__asm { mov dword ptr [edi + 0xc0], 0xf }
	__asm { mov dword ptr [edi + 0xbc], 0 }
	__asm { mov byte ptr [edi + 0xac], 0 }
	__asm { cmp dword ptr [edi + 0xa8], 0x10 }
	__asm { jb L_00be5725 }
	__asm { push dword ptr [edi + 0x94] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be5725: }
	__asm { mov dword ptr [edi + 0xa8], 0xf }
	__asm { mov dword ptr [edi + 0xa4], 0 }
	__asm { mov byte ptr [edi + 0x94], 0 }
	__asm { cmp dword ptr [edi + 0x90], 0x10 }
	__asm { jb L_00be5754 }
	__asm { push dword ptr [edi + 0x7c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be5754: }
	__asm { mov dword ptr [edi + 0x90], 0xf }
	__asm { mov dword ptr [edi + 0x8c], 0 }
	__asm { mov byte ptr [edi + 0x7c], 0 }
	__asm { mov eax, dword ptr [edi + 0x70] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x70] }
	__asm { call fn_00be8210 }
	__asm { push dword ptr [edi + 0x70] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x68] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00be82d0 }
	__asm { push dword ptr [edi + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { call fn_007b00e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00be5ff0
extern "C" __declspec(naked) void asm_00be5ff0()
{
	__asm { L_00be5ff0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd12008 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { cmp byte ptr [ebx + 0xd], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov edi, ebx }
	__asm { jne L_00be60b0 }
	__asm { push esi }
	__asm { L_00be6020: }
	__asm { push dword ptr [edi + 8] }
	__asm { mov ecx, eax }
	__asm { call L_00be5ff0 }
	__asm { mov edi, dword ptr [edi] }
	__asm { lea esi, [ebx + 0x10] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { cmp dword ptr [esi + 0x70], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_00be604a }
	__asm { push dword ptr [esi + 0x5c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be604a: }
	__asm { mov dword ptr [esi + 0x70], 0xf }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov byte ptr [esi + 0x5c], 0 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00be606f }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00be606f: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00be6086 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be6086: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov ebx, edi }
	__asm { je L_00be6020 }
	__asm { pop esi }
	__asm { L_00be60b0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10384[];
extern "C" char g_01292958[];
extern "C" void fn_00426140();
extern "C" void fn_00426760();
extern "C" void fn_004270c0();
extern "C" void fn_00be6b50();
extern "C" void fn_00bee480();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00be60d0
extern "C" __declspec(naked) void asm_00be60d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd675e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, ecx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test edi, edi }
	__asm { je L_00be60ff }
	__asm { lea ebx, [edi + 0x10] }
	__asm { jmp L_00be6101 }
	__asm { L_00be60ff: }
	__asm { xor ebx, ebx }
	__asm { L_00be6101: }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00be6b50 }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004270c0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00be613d }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be613d: }
	__asm { inc dword ptr [esi] }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, dword ptr [g_01292958] }
	__asm { jne L_00be61b0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push edi }
	__asm { call fn_00bee480 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00426140 }
	__asm { push dword ptr [edi + 0x54] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push 0 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x18] }
	__asm { call fn_00426760 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00be61a2 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be61a2: }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10384] }
	__asm { L_00be61b0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_004226b0();
extern "C" void fn_007d5cc0();
extern "C" void fn_008bff30();
extern "C" void fn_00bdea80();
// FUNCTION: ROBLOXSTUDIO 0x00be61d0
extern "C" __declspec(naked) void asm_00be61d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5f090 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { call fn_008bff30 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_007d5cc0 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_00bdea80 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00be626f }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00be626f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0129295c[];
extern "C" char g_0130f7da[];
extern "C" void fn_004039a0();
extern "C" void fn_00427010();
// FUNCTION: ROBLOXSTUDIO 0x00be62f0
extern "C" __declspec(naked) void asm_00be62f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_0130f7da], 0 }
	__asm { push esi }
	__asm { jne L_00be6321 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00be631a }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0xee557c }
	__asm { call fn_004039a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00427010 }
	__asm { L_00be631a: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00be6321: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00be634f }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00be631a }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0xee5590 }
	__asm { call fn_004039a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00427010 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00be634f: }
	__asm { cmp eax, dword ptr [g_0129295c] }
	__asm { jb L_00be637b }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00be631a }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0xee55a8 }
	__asm { call fn_004039a0 }
	__asm { mov ecx, esi }
	__asm { call fn_00427010 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00be637b: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012f86a8[];
extern "C" void fn_004039a0();
extern "C" void fn_00427010();
extern "C" void fn_006b9740();
extern "C" void fn_008523c0();
// FUNCTION: ROBLOXSTUDIO 0x00be6390
extern "C" __declspec(naked) void asm_00be6390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1f468 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { cmp byte ptr [g_012f86a8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00be6409 }
	__asm { push ecx }
	__asm { call fn_008523c0 }
	__asm { mov ecx, eax }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_00be6445 }
	__asm { test ecx, ecx }
	__asm { jne L_00be6449 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00be63f8 }
	__asm { push 0x68 }
	__asm { push 0xee55c0 }
	__asm { push 0xeba37c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00be6409 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00be63f8: }
	__asm { movzx eax, al }
	__asm { push 0xee5608 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00be6409: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov bl, 1 }
	__asm { L_00be640e: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00be6432 }
	__asm { test al, 1 }
	__asm { jne L_00be6432 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00be6432 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00be6432: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
	__asm { L_00be6445: }
	__asm { test ecx, ecx }
	__asm { je L_00be6409 }
	__asm { L_00be6449: }
	__asm { mov al, byte ptr [ecx + 0xe3c] }
	__asm { mov byte ptr [ebp - 0xd], 1 }
	__asm { test al, al }
	__asm { je L_00be645f }
	__asm { add ecx, 0xe3d }
	__asm { jmp L_00be6462 }
	__asm { L_00be645f: }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { L_00be6462: }
	__asm { mov al, byte ptr [ecx] }
	__asm { test al, al }
	__asm { jne L_00be6409 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00be6489 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0xee5660 }
	__asm { call fn_004039a0 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00427010 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_00be6489: }
	__asm { xor bl, bl }
	__asm { jmp L_00be640e }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5cc0();
extern "C" void fn_00825670();
extern "C" void fn_008bf7d0();
// FUNCTION: ROBLOXSTUDIO 0x00be7490
extern "C" __declspec(naked) void asm_00be7490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5f250 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_007d5cc0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_008bf7d0 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00be750d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00be750d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00be7527 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00be7527: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d55c0();
extern "C" void fn_00825670();
extern "C" void fn_008bf7d0();
// FUNCTION: ROBLOXSTUDIO 0x00be7540
extern "C" __declspec(naked) void asm_00be7540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5f250 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_007d55c0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_008bf7d0 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00be75bd }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00be75bd: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00be75d7 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00be75d7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5390();
extern "C" void fn_007d5550();
extern "C" void fn_008250d0();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00be75f0
extern "C" __declspec(naked) void asm_00be75f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5f250 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_008250d0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_007d5390 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00be766d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00be766d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00be7687 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00be7687: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_008250d0();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x00be76a0
extern "C" __declspec(naked) void asm_00be76a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5f250 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { lea esi, [ecx + 0x1c] }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_007d5550 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { call fn_008250d0 }
	__asm { lea ecx, [ebp + 0x54] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x50] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00825670 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00be771d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00be771d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00be7737 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00be7737: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" char g_00e104f4[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9800();
extern "C" void fn_00be7db0();
// FUNCTION: ROBLOXSTUDIO 0x00be7c50
extern "C" __declspec(naked) void asm_00be7c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4cfb8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_00be7cd1 }
	__asm { push esi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00be7db0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00be7ccd }
	__asm { add esi, 5 }
	__asm { je L_00be7c9d }
	__asm { add esi, -5 }
	__asm { jmp L_00be7c9f }
	__asm { L_00be7c9d: }
	__asm { xor esi, esi }
	__asm { L_00be7c9f: }
	__asm { push ebx }
	__asm { lea ebx, [esi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00be7ccc }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00be7ccc }
	__asm { push ebx }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00be7ccc: }
	__asm { pop ebx }
	__asm { L_00be7ccd: }
	__asm { mov byte ptr [edi], 0 }
	__asm { pop esi }
	__asm { L_00be7cd1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00be7cf8 }
	__asm { add eax, 5 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_004226b0 }
	__asm { L_00be7cf8: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0078a6b0();
extern "C" void fn_008c04d0();
extern "C" void fn_00b2b4d0();
extern "C" void fn_00be61d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00be8680
extern "C" __declspec(naked) void asm_00be8680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5f310 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00b2b4d0 }
	__asm { mov ebx, eax }
	__asm { push 0 }
	__asm { lea ecx, [esi + 0x30] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0078a6b0 }
	__asm { add esp, 0x20 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00be86df }
	__asm { add ecx, -0x1c }
	__asm { jmp L_00be86e1 }
	__asm { L_00be86df: }
	__asm { xor ecx, ecx }
	__asm { L_00be86e1: }
	__asm { push ebx }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push ecx }
	__asm { call fn_00be61d0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_00be870a }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00be870a: }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { mov dword ptr [ebp - 0x10], 0xf }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00be94f0
extern "C" __declspec(naked) void asm_00be94f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd59cd8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { je L_00be9550 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x44 }
	__asm { mov esi, esp }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00be9545 }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { L_00be9545: }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { lea ecx, [edi + 8] }
	__asm { call dword ptr [eax] }
	__asm { L_00be9550: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00be956a }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_00be956a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f7d9[];
extern "C" void fn_004278c0();
extern "C" void fn_006b8a90();
extern "C" void fn_006b8aa8();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bea410
extern "C" __declspec(naked) void asm_00bea410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_0130f7d9] }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_00bea44a }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xee5720 }
	__asm { push eax }
	__asm { call fn_006b8aa8 }
	__asm { add esp, 0xc }
	__asm { L_00bea44a: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, 0xc8 }
	__asm { jbe L_00bea4ba }
	__asm { push -1 }
	__asm { add eax, 0xffffff38 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { mov al, byte ptr [g_0130f7d9] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00bea4a9 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { movzx eax, al }
	__asm { push 0xee572c }
	__asm { push eax }
	__asm { call fn_006b8aa8 }
	__asm { mov al, byte ptr [g_0130f7d9] }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00bea4a9 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { movzx eax, al }
	__asm { push 0xee573c }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00bea4a9: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00bea4ba }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bea4ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f7d9[];
extern "C" void fn_006b8aa8();
extern "C" void fn_006c58f0();
extern "C" void fn_007b0970();
extern "C" void fn_00be57c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bed940
extern "C" __declspec(naked) void asm_00bed940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5f9d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov al, byte ptr [g_0130f7d9] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_00bed984 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { movzx eax, al }
	__asm { push 0xee56fc }
	__asm { push eax }
	__asm { call fn_006b8aa8 }
	__asm { add esp, 0xc }
	__asm { L_00bed984: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x68] }
	__asm { call fn_00be57c0 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_006c58f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x60], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x64], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub esp, 0x40 }
	__asm { mov edi, esp }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00bed9cd }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00bed9cd: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { call fn_007b0970 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00bed9ec }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bed9ec: }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00beda25 }
	__asm { test al, 1 }
	__asm { jne L_00beda25 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00beda25 }
	__asm { lea ecx, [ebp + 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00beda25: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_006dea00();
extern "C" void fn_006deb40();
// FUNCTION: ROBLOXSTUDIO 0x00befae0
extern "C" __declspec(naked) void asm_00befae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5fcee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 4], 0xffffffff }
	__asm { mov dword ptr [esi + 8], 0xffffffff }
	__asm { mov dword ptr [esi + 0xc], 0xffffffff }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi], 0xee68b0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { mov dword ptr [esi + 0x64], 0xffffffff }
	__asm { call fn_006deb40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x68], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x6c], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x70], eax }
	__asm { call fn_006deb40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x74], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x78], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x7c], eax }
	__asm { call fn_006deb40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x80], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x84], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { mov dword ptr [esi + 0x8c], 0xe461dc }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x90], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x94], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x98], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x9c], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0xa0], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xa4], eax }
	__asm { mov dword ptr [esi + 0xb0], 0 }
	__asm { mov dword ptr [esi + 0xb4], 0 }
	__asm { mov dword ptr [esi + 0xb8], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bf2430
extern "C" __declspec(naked) void asm_00bf2430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_00bf247d }
	__asm { cmp esi, dword ptr [ecx + 0x2c] }
	__asm { jne L_00bf247d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bf246c }
	__asm { push 0x16a }
	__asm { push 0xee68e0 }
	__asm { push 0xee72e8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bf247d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bf246c: }
	__asm { movzx eax, al }
	__asm { push 0xee72f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bf247d: }
	__asm { test esi, esi }
	__asm { je L_00bf24b9 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { xor eax, eax }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { test edx, edx }
	__asm { jle L_00bf249f }
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov ecx, edi }
	__asm { L_00bf2493: }
	__asm { cmp dword ptr [ecx], esi }
	__asm { je L_00bf24b4 }
	__asm { inc eax }
	__asm { add ecx, 4 }
	__asm { cmp eax, edx }
	__asm { jl L_00bf2493 }
	__asm { L_00bf249f: }
	__asm { mov edi, dword ptr [ebx] }
	__asm { lea ecx, [edi + edx*4] }
	__asm { L_00bf24a4: }
	__asm { lea eax, [edi + edx*4] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { cmp ecx, eax }
	__asm { jne L_00bf24b9 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00bf24b4: }
	__asm { lea ecx, [edi + eax*4] }
	__asm { jmp L_00bf24a4 }
	__asm { L_00bf24b9: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006dea00();
extern "C" void fn_006deb40();
// FUNCTION: ROBLOXSTUDIO 0x00bf3910
extern "C" __declspec(naked) void asm_00bf3910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5fe64 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 4], 0xffffffff }
	__asm { mov dword ptr [esi + 8], 0xffffffff }
	__asm { mov dword ptr [esi + 0xc], 0xffffffff }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi], 0xee7518 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov byte ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 6 }
	__asm { mov dword ptr [esi + 0x84], 0xffffffff }
	__asm { call fn_006deb40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x88], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x8c], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x90], eax }
	__asm { call fn_006deb40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x94], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x98], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x9c], eax }
	__asm { mov dword ptr [esi + 0xa0], 0xe461dc }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0xa4], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0xa8], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0xac], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0xb0], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0xb4], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0xb8], eax }
	__asm { mov dword ptr [esi + 0xc4], 0 }
	__asm { mov dword ptr [esi + 0xc8], 0 }
	__asm { mov dword ptr [esi + 0xcc], 0 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { mov byte ptr [esi + 0xdc], 1 }
	__asm { mov dword ptr [esi + 0xe0], 0 }
	__asm { mov byte ptr [esi + 0xe4], 1 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bf6280
extern "C" __declspec(naked) void asm_00bf6280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_00bf62cd }
	__asm { cmp esi, dword ptr [ecx + 0x48] }
	__asm { jne L_00bf62cd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bf62bc }
	__asm { push 0x1be }
	__asm { push 0xee759c }
	__asm { push 0xee72e8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bf62cd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bf62bc: }
	__asm { movzx eax, al }
	__asm { push 0xee7c50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bf62cd: }
	__asm { test esi, esi }
	__asm { je L_00bf6309 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { xor eax, eax }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { test edx, edx }
	__asm { jle L_00bf62ef }
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov ecx, edi }
	__asm { L_00bf62e3: }
	__asm { cmp dword ptr [ecx], esi }
	__asm { je L_00bf6304 }
	__asm { inc eax }
	__asm { add ecx, 4 }
	__asm { cmp eax, edx }
	__asm { jl L_00bf62e3 }
	__asm { L_00bf62ef: }
	__asm { mov edi, dword ptr [ebx] }
	__asm { lea ecx, [edi + edx*4] }
	__asm { L_00bf62f4: }
	__asm { lea eax, [edi + edx*4] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { cmp ecx, eax }
	__asm { jne L_00bf6309 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00bf6304: }
	__asm { lea ecx, [edi + eax*4] }
	__asm { jmp L_00bf62f4 }
	__asm { L_00bf6309: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00bf8370();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bf8230
extern "C" __declspec(naked) void asm_00bf8230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60103 }
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
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp edi, esi }
	__asm { je L_00bf8272 }
	__asm { L_00bf8261: }
	__asm { push dword ptr [edi] }
	__asm { call fn_00bf8370 }
	__asm { add edi, 4 }
	__asm { add esp, 4 }
	__asm { cmp edi, esi }
	__asm { jne L_00bf8261 }
	__asm { L_00bf8272: }
	__asm { cmp dword ptr [ebx + 0x20], 0x10 }
	__asm { jb L_00bf8283 }
	__asm { push dword ptr [ebx + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bf8283: }
	__asm { mov dword ptr [ebx + 0x20], 0xf }
	__asm { mov dword ptr [ebx + 0x1c], 0 }
	__asm { mov byte ptr [ebx + 0xc], 0 }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00bf82c7 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { L_00bf82c7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0042d740();
extern "C" void fn_0042e6e0();
extern "C" void fn_0043ee40();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00bf8c50
extern "C" __declspec(naked) void asm_00bf8c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60220 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test edi, edi }
	__asm { je L_00bf8c93 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00bf8c8f }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00bf8c95 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00bf8c95 }
	__asm { L_00bf8c8f: }
	__asm { mov eax, edi }
	__asm { jmp L_00bf8c95 }
	__asm { L_00bf8c93: }
	__asm { xor eax, eax }
	__asm { L_00bf8c95: }
	__asm { push 0 }
	__asm { push 0x12d36b4 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00bf8d3c }
	__asm { mov edx, dword ptr [eax] }
	__asm { lea ecx, [edi + 0xbc] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 4] }
	__asm { push 0x1009354 }
	__asm { lea eax, [edi + 0x78] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0042d740 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0042e6e0 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00bf8d05 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bf8d05: }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jb L_00bf8d5f }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bf8d3c: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x78] }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { L_00bf8d5f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00bf9dd0
extern "C" __declspec(naked) void asm_00bf9dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp edi, esi }
	__asm { je L_00bf9e3d }
	__asm { nop }
	__asm { L_00bf9de0: }
	__asm { dec esi }
	__asm { mov dword ptr [ebp + 0x14], esi }
	__asm { cmp edi, esi }
	__asm { je L_00bf9e3d }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, esi }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { shr eax, 1 }
	__asm { dec edx }
	__asm { and edx, eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { and esi, 1 }
	__asm { dec edx }
	__asm { lea esi, [eax + esi*8] }
	__asm { mov eax, edi }
	__asm { shr eax, 1 }
	__asm { and edx, eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { and edi, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov ecx, dword ptr [eax + edi*8] }
	__asm { lea edx, [eax + edi*8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { inc edi }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { cmp edi, esi }
	__asm { jne L_00bf9de0 }
	__asm { L_00bf9e3d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00bff380();
// FUNCTION: ROBLOXSTUDIO 0x00bfa960
extern "C" __declspec(naked) void asm_00bfa960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00bfa9ab }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00bfa9ab: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00bfa9fe }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xee8454 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xee845c }
	__asm { mov dword ptr [esi + 8], 0xee846c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xee8474 }
	__asm { mov dword ptr [esi + 8], 0xee8484 }
	__asm { jmp L_00bfaa00 }
	__asm { L_00bfa9fe: }
	__asm { xor esi, esi }
	__asm { L_00bfaa00: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00bff380 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00bfaa1d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00bfaa1d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_008d9f20();
// FUNCTION: ROBLOXSTUDIO 0x00bfaa40
extern "C" __declspec(naked) void asm_00bfaa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00bfaa8b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00bfaa8b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00bfaade }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe729d4 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xee8424 }
	__asm { mov dword ptr [esi + 8], 0xee8434 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xee843c }
	__asm { mov dword ptr [esi + 8], 0xee844c }
	__asm { jmp L_00bfaae0 }
	__asm { L_00bfaade: }
	__asm { xor esi, esi }
	__asm { L_00bfaae0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_008d9f20 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00bfaafd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00bfaafd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00a5fe20();
// FUNCTION: ROBLOXSTUDIO 0x00bfab50
extern "C" __declspec(naked) void asm_00bfab50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd119f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x30 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00bfab9b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00bfab9b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00bfabee }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xeac0d8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xee848c }
	__asm { mov dword ptr [esi + 8], 0xee849c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xee84a4 }
	__asm { mov dword ptr [esi + 8], 0xee84b4 }
	__asm { jmp L_00bfabf0 }
	__asm { L_00bfabee: }
	__asm { xor esi, esi }
	__asm { L_00bfabf0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00a5fe20 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00bfac0d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00bfac0d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
extern "C" void fn_00bf9dd0();
// FUNCTION: ROBLOXSTUDIO 0x00bfafb0
extern "C" __declspec(naked) void asm_00bfafb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00bfafd8 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00bfb011 }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 4] }
	__asm { call dword ptr [g_00e10348] }
	__asm { lea ecx, [ebp - 4] }
	__asm { call dword ptr [g_00e10344] }
	__asm { L_00bfafd8: }
	__asm { xor eax, eax }
	__asm { L_00bfafda: }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00bfafff }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00bfb01b }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 4] }
	__asm { call dword ptr [g_00e10348] }
	__asm { lea ecx, [ebp - 4] }
	__asm { call dword ptr [g_00e10344] }
	__asm { L_00bfafff: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { call fn_00bf9dd0 }
	__asm { add esp, 0x14 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bfb011: }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bfafd8 }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_00bfafda }
	__asm { L_00bfb01b: }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bfafff }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push eax }
	__asm { call fn_00bf9dd0 }
	__asm { add esp, 0x14 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bfb1c0
extern "C" __declspec(naked) void asm_00bfb1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { push edi }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_00bfb1d4 }
	__asm { mov esi, dword ptr [eax] }
	__asm { jmp L_00bfb1d6 }
	__asm { L_00bfb1d4: }
	__asm { mov esi, eax }
	__asm { L_00bfb1d6: }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_00bfb1df }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00bfb1e1 }
	__asm { L_00bfb1df: }
	__asm { mov ecx, eax }
	__asm { L_00bfb1e1: }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { add eax, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push ebx }
	__asm { lea ebx, [edi + 1] }
	__asm { nop }
	__asm { L_00bfb1f0: }
	__asm { mov dl, byte ptr [edi] }
	__asm { inc edi }
	__asm { test dl, dl }
	__asm { jne L_00bfb1f0 }
	__asm { sub edi, ebx }
	__asm { add edi, ecx }
	__asm { pop ebx }
	__asm { cmp esi, eax }
	__asm { je L_00bfb215 }
	__asm { sub esi, ecx }
	__asm { L_00bfb202: }
	__asm { cmp ecx, edi }
	__asm { je L_00bfb215 }
	__asm { mov dl, byte ptr [esi + ecx] }
	__asm { cmp dl, byte ptr [ecx] }
	__asm { jne L_00bfb220 }
	__asm { inc ecx }
	__asm { lea edx, [esi + ecx] }
	__asm { cmp edx, eax }
	__asm { jne L_00bfb202 }
	__asm { L_00bfb215: }
	__asm { xor eax, eax }
	__asm { cmp ecx, edi }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bfb220: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
extern "C" void fn_0042ba60();
extern "C" void fn_006a41d0();
extern "C" void fn_00b86090();
extern "C" void fn_00bfad70();
extern "C" void fn_00c7fc70();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bfb2f0
extern "C" __declspec(naked) void asm_00bfb2f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60428 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x11] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, ecx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { call fn_006a41d0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x1c], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b86090 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 0x20], esp }
	__asm { push eax }
	__asm { call fn_0042ba60 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0042ba60 }
	__asm { sub esp, 0xc }
	__asm { mov esi, esp }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test eax, eax }
	__asm { je L_00bfb391 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00bfb38d }
	__asm { push 3 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10348] }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10344] }
	__asm { jmp L_00bfb391 }
	__asm { L_00bfb38d: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00bfb391: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00bfad70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_00c7fc70 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_01294750[];
extern "C" char g_0130fe14[];
extern "C" void fn_00403540();
extern "C" void fn_004278c0();
extern "C" void fn_0043ee70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bfdbd0
extern "C" __declspec(naked) void asm_00bfdbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [g_0130fe14] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp dword ptr [eax + 0x10], ecx }
	__asm { jbe L_00bfdc4d }
	__asm { push ecx }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_004278c0 }
	__asm { push dword ptr [g_01294750] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0043ee70 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_00bfdc6d }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00bfdc4d: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { L_00bfdc6d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" void fn_00bfb290();
extern "C" void fn_00bfd9c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bff650
extern "C" __declspec(naked) void asm_00bff650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jne L_00bff68a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x20 }
	__asm { mov esi, dword ptr [eax] }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00bff680 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00bfb290 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bff680: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bff68a: }
	__asm { cmp eax, 1 }
	__asm { jne L_00bff6a2 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bff6a2: }
	__asm { cmp eax, 2 }
	__asm { jne L_00bff6c0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00bff6b7 }
	__asm { push 1 }
	__asm { call fn_00bfd9c0 }
	__asm { L_00bff6b7: }
	__asm { mov dword ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bff6c0: }
	__asm { cmp eax, 3 }
	__asm { jne L_00bff6e3 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x1294758 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00bff6b7 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bff6e3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0x1294758 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" void fn_00bfb750();
extern "C" void fn_00bfd9c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bff700
extern "C" __declspec(naked) void asm_00bff700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { test eax, eax }
	__asm { jne L_00bff75f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov esi, dword ptr [eax] }
	__asm { push 0x38 }
	__asm { call fn_00cf661e }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { test ebx, ebx }
	__asm { je L_00bff754 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { push esi }
	__asm { lea ecx, [ebx + 8] }
	__asm { call fn_00bfb750 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebx + 0x2c], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebx + 0x34], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ebx }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bff754: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [eax], ebx }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bff75f: }
	__asm { cmp eax, 1 }
	__asm { jne L_00bff777 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bff777: }
	__asm { cmp eax, 2 }
	__asm { jne L_00bff795 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_00bff78c }
	__asm { push 1 }
	__asm { call fn_00bfd9c0 }
	__asm { L_00bff78c: }
	__asm { mov dword ptr [esi], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bff795: }
	__asm { cmp eax, 3 }
	__asm { jne L_00bff7b8 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x12948a8 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00bff78c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bff7b8: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0x12948a8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10338[];
extern "C" void fn_0084aca0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c00060
extern "C" __declspec(naked) void asm_00c00060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10338] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { add eax, ecx }
	__asm { test al, 1 }
	__asm { jne L_00c0008b }
	__asm { lea eax, [ecx + 2] }
	__asm { shr eax, 1 }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { ja L_00c0008b }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0084aca0 }
	__asm { L_00c0008b: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push ebx }
	__asm { lea eax, [ecx*2 - 1] }
	__asm { and dword ptr [esi + 0xc], eax }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { add edi, dword ptr [esi + 0xc] }
	__asm { dec ecx }
	__asm { mov eax, edi }
	__asm { shr eax, 1 }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ebx, [ecx*4] }
	__asm { cmp dword ptr [ebx + eax], 0 }
	__asm { jne L_00c000d3 }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00c000cd }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00c000cd: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebx + eax], ecx }
	__asm { L_00c000d3: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { and edi, 1 }
	__asm { mov eax, dword ptr [eax + ebx] }
	__asm { lea edx, [eax + edi*8] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { test edx, edx }
	__asm { je L_00c00106 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [ecx], 0 }
	__asm { L_00c00106: }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00c02e60();
extern "C" void fn_00c03040();
// FUNCTION: ROBLOXSTUDIO 0x00c036a0
extern "C" __declspec(naked) void asm_00c036a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { mov edi, esi }
	__asm { sub edi, dword ptr [ebx] }
	__asm { mov eax, 0x92492493 }
	__asm { imul edi }
	__asm { add edx, edi }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, ecx }
	__asm { jbe L_00c0370b }
	__asm { lea eax, [ecx*8] }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { lea eax, [ecx + eax*4] }
	__asm { cmp eax, ecx }
	__asm { jne L_00c036ef }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c036ef: }
	__asm { cmp eax, esi }
	__asm { je L_00c0371f }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_00c02e60 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c0370b: }
	__asm { jae L_00c0371f }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { sub ecx, eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00c03040 }
	__asm { L_00c0371f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c03b90
extern "C" __declspec(naked) void asm_00c03b90()
{
	__asm { L_00c03b90: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test edi, edi }
	__asm { je L_00c03ba0 }
	__asm { lea eax, [edi - 8] }
	__asm { jmp L_00c03ba2 }
	__asm { L_00c03ba0: }
	__asm { xor eax, eax }
	__asm { L_00c03ba2: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x10], esi }
	__asm { jle L_00c03c11 }
	__asm { L_00c03bb0: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c03bfa }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_00c03bfa }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c03be9 }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c03bfa }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c03be9: }
	__asm { movzx eax, cl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c03bfa: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + esi*4] }
	__asm { call L_00c03b90 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x10] }
	__asm { jl L_00c03bb0 }
	__asm { L_00c03c11: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0130fe40[];
extern "C" void fn_00407e90();
extern "C" void fn_00b6b7e0();
// FUNCTION: ROBLOXSTUDIO 0x00c042b0
extern "C" __declspec(naked) void asm_00c042b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60c26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_0130fe40], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { jne L_00c0430b }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp - 0x10], 0x130ee44 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp - 0x10], 0xc04810 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130fe40], 1 }
	__asm { L_00c0430b: }
	__asm { lea edx, [esi + 8] }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b6b7e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { add esp, 0x10 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5b160();
// FUNCTION: ROBLOXSTUDIO 0x00c048f0
extern "C" __declspec(naked) void asm_00c048f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60c7b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00c049e0 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00c0495c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c04947 }
	__asm { push 0x12 }
	__asm { push 0xee8824 }
	__asm { push 0xee8864 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c0495c }
	__asm { L_00c04947: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee8880 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c0495c: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c049e0 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00c0499e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c04989 }
	__asm { push 0x13 }
	__asm { push 0xee8824 }
	__asm { push 0xee88e4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c0499e }
	__asm { L_00c04989: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee88f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c0499e: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c049e0 }
	__asm { cmp dword ptr [esi + 8], -1 }
	__asm { je L_00c049e0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c049cb }
	__asm { push 0x14 }
	__asm { push 0xee8824 }
	__asm { push 0xee8944 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c049e0 }
	__asm { L_00c049cb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee8950 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c049e0: }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b5b160 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x00c04a00
extern "C" __declspec(naked) void asm_00c04a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00c04a8c }
	__asm { test esi, esi }
	__asm { jne L_00c04a4a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c04a35 }
	__asm { push 0x3c }
	__asm { push 0xe68c50 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c04a4a }
	__asm { L_00c04a35: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fc38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c04a4a: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c04a8c }
	__asm { cmp dword ptr [esi + 8], -1 }
	__asm { je L_00c04a8c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c04a77 }
	__asm { push 0x3d }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c04a8c }
	__asm { L_00c04a77: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c04a8c: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0088fab0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00896d00();
// FUNCTION: ROBLOXSTUDIO 0x00c04ab0
extern "C" __declspec(naked) void asm_00c04ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00c04b41 }
	__asm { test esi, esi }
	__asm { jns L_00c04afe }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c04ae9 }
	__asm { push 0x4a }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c04afe }
	__asm { L_00c04ae9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fd28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c04afe: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c04b41 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00c04b41 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c04b2c }
	__asm { push 0x4b }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c04b41 }
	__asm { L_00c04b2c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fda8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c04b41: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + eax*4 - 4] }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 8], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c04a00();
extern "C" void fn_00c04ab0();
// FUNCTION: ROBLOXSTUDIO 0x00c04b70
extern "C" __declspec(naked) void asm_00c04b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { je L_00c04c00 }
	__asm { test edi, edi }
	__asm { je L_00c04bc0 }
	__asm { cmp dword ptr [edi + 4], esi }
	__asm { jne L_00c04bc0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c04bab }
	__asm { push 0x2b }
	__asm { push 0xee8824 }
	__asm { push 0xee89a8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c04bc0 }
	__asm { L_00c04bab: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee89d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c04bc0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c04c00 }
	__asm { cmp edi, esi }
	__asm { jne L_00c04c00 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c04beb }
	__asm { push 0x2c }
	__asm { push 0xee8824 }
	__asm { push 0xee8a50 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c04c00 }
	__asm { L_00c04beb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee8a68 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c04c00: }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { cmp ebx, edi }
	__asm { je L_00c04c5b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00c04c2f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push esi }
	__asm { add ecx, 0xc }
	__asm { call fn_00c04ab0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x14] }
	__asm { L_00c04c2f: }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { test edi, edi }
	__asm { je L_00c04c53 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push esi }
	__asm { add ecx, 0xc }
	__asm { call fn_00c04a00 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00c04c53: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00c04c5b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00407e90();
extern "C" void fn_00933fa0();
extern "C" void fn_009341c0();
extern "C" void fn_00a53dd0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c05470
extern "C" __declspec(naked) void asm_00c05470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60cf8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { call fn_009341c0 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_00c05596 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00933fa0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test eax, eax }
	__asm { jne L_00c05528 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { cmp dword ptr [ebp - 0x20], eax }
	__asm { je L_00c05514 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c05514: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c05528: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call fn_00407e90 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00a53dd0 }
	__asm { add esp, 0x20 }
	__asm { cmp dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00c05514 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c05596: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004038a0();
extern "C" void fn_00412550();
extern "C" void fn_009341c0();
extern "C" void fn_00c05ee0();
// FUNCTION: ROBLOXSTUDIO 0x00c061a0
extern "C" __declspec(naked) void asm_00c061a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp word ptr [eax + 0x88], 0 }
	__asm { je L_00c0622b }
	__asm { cmp word ptr [eax + 0x8a], 0 }
	__asm { je L_00c0622b }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_009341c0 }
	__asm { test eax, eax }
	__asm { jne L_00c061fd }
	__asm { push 0xe }
	__asm { push 0xed7080 }
	__asm { lea ecx, [esi + 0x40] }
	__asm { call fn_004038a0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c061fd: }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c05ee0 }
	__asm { lea ecx, [esi + 0x40] }
	__asm { test al, al }
	__asm { jne L_00c06221 }
	__asm { push 0xe57074 }
	__asm { call fn_00412550 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c06221: }
	__asm { push 0xe57154 }
	__asm { call fn_00412550 }
	__asm { L_00c0622b: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc98e[];
extern "C" void fn_004038a0();
extern "C" void fn_006b8a90();
extern "C" void fn_006dea00();
extern "C" void fn_009332f0();
// FUNCTION: ROBLOXSTUDIO 0x00c06290
extern "C" __declspec(naked) void asm_00c06290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd60df6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009332f0 }
	__asm { mov dword ptr [esi], 0xe8592c }
	__asm { mov dword ptr [esi + 4], 0xe85988 }
	__asm { mov dword ptr [esi + 0x1c], 0xe859bc }
	__asm { mov byte ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00c062f8 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe859c0 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00c062f8: }
	__asm { mov dword ptr [esi], 0xee8e64 }
	__asm { mov dword ptr [esi + 4], 0xee8ec8 }
	__asm { mov dword ptr [esi + 0x1c], 0xee8efc }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { lea ecx, [esi + 0x4c] }
	__asm { push 0xb }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe57074 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov byte ptr [esi + 0x64], 0 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x66], eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [esi + 0x6c], 0xe461dc }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x70], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x74], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x78], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0x7c], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x80], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x84], eax }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_007c2890();
extern "C" void fn_007c37e0();
extern "C" void fn_00c063c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c06720
extern "C" __declspec(naked) void asm_00c06720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd529c8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_007c37e0 }
	__asm { mov al, byte ptr [esi + 0x28] }
	__asm { test al, al }
	__asm { je L_00c0676d }
	__asm { push 0xa }
	__asm { lea ecx, [esi + 0x4c] }
	__asm { push 0xe57154 }
	__asm { call fn_004038a0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c0676d: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_00c063c0 }
	__asm { test al, al }
	__asm { je L_00c067b8 }
	__asm { push 0xc }
	__asm { lea ecx, [esi + 0x4c] }
	__asm { push 0xee8f00 }
	__asm { call fn_004038a0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c067b8: }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007c2890 }
	__asm { lea ecx, [esi + 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_00c067db }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00c067db: }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_00c067ec }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c067ec: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_007c2820();
extern "C" void fn_007c37e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c08020
extern "C" __declspec(naked) void asm_00c08020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd255e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_007c37e0 }
	__asm { cmp byte ptr [esi + 0xac], 0 }
	__asm { jne L_00c080e0 }
	__asm { mov al, byte ptr [esi + 0x28] }
	__asm { test al, al }
	__asm { je L_00c0807d }
	__asm { push 0xe }
	__asm { lea ecx, [esi + 0xec] }
	__asm { push 0xee4c00 }
	__asm { call fn_004038a0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c0807d: }
	__asm { cmp byte ptr [esi + 0x8c], 0 }
	__asm { je L_00c080a9 }
	__asm { push 0x14 }
	__asm { lea ecx, [esi + 0xec] }
	__asm { push 0xe57364 }
	__asm { call fn_004038a0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c080a9: }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007c2820 }
	__asm { lea ecx, [esi + 0xec] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_00c080cf }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00c080cf: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_00c080e0 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c080e0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004038a0();
extern "C" void fn_006d19a0();
extern "C" void fn_006d6760();
extern "C" void fn_006dea00();
extern "C" void fn_009646c0();
extern "C" void fn_00bfdcb0();
// FUNCTION: ROBLOXSTUDIO 0x00c0a720
extern "C" __declspec(naked) void asm_00c0a720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61000 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_009646c0 }
	__asm { mov dword ptr [edi], 0xed64fc }
	__asm { mov dword ptr [edi + 4], 0xed6570 }
	__asm { mov dword ptr [edi + 0x1c], 0xed65a4 }
	__asm { mov byte ptr [edi + 0x84], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x88], 0xe461dc }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x8c], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0x90], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0x94], eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x98], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0x9c], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0xa0], eax }
	__asm { lea ecx, [edi + 0xb0] }
	__asm { push 0x11 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe57060 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov dword ptr [edi + 0xc8], 6 }
	__asm { mov dword ptr [edi + 0xcc], 0 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [edi + 0xd0], eax }
	__asm { mov dword ptr [edi + 0xd4], eax }
	__asm { mov dword ptr [edi + 0xd8], eax }
	__asm { mov dword ptr [edi + 0xdc], eax }
	__asm { lea ecx, [edi + 0xe0] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [edi + 0xe0], eax }
	__asm { mov dword ptr [edi + 0xe4], eax }
	__asm { call fn_00bfdcb0 }
	__asm { mov dword ptr [edi + 0xe0], eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_006d6760 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0xe8] }
	__asm { call fn_006d19a0 }
	__asm { call fn_006dea00 }
	__asm { mov esi, eax }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x10c], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0x110], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0x114], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x118], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + 0x11c], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 0x120], eax }
	__asm { mov byte ptr [edi + 0x124], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_007c2820();
extern "C" void fn_007c37e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c0c6d0
extern "C" __declspec(naked) void asm_00c0c6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd529c8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_007c37e0 }
	__asm { cmp byte ptr [esi + 0x84], 0 }
	__asm { jne L_00c0c7b4 }
	__asm { mov al, byte ptr [esi + 0x28] }
	__asm { test al, al }
	__asm { je L_00c0c72d }
	__asm { push 0xe }
	__asm { lea ecx, [esi + 0xb0] }
	__asm { push 0xee4c00 }
	__asm { call fn_004038a0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c0c72d: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov eax, dword ptr [eax + 0x64] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00c0c77d }
	__asm { push 0x14 }
	__asm { lea ecx, [esi + 0xb0] }
	__asm { push 0xe57364 }
	__asm { call fn_004038a0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c0c77d: }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007c2820 }
	__asm { lea ecx, [esi + 0xb0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_00c0c7a3 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_00c0c7a3: }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_00c0c7b4 }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c0c7b4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099a700();
extern "C" void fn_0099af80();
extern "C" void fn_00bf1500();
extern "C" void fn_00c0ede0();
// FUNCTION: ROBLOXSTUDIO 0x00c0ef70
extern "C" __declspec(naked) void asm_00c0ef70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00c0efbd }
	__asm { mov al, byte ptr [esi + 0x28] }
	__asm { test al, al }
	__asm { jne L_00c0efbd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c0efac }
	__asm { push 0x33 }
	__asm { push 0xee9870 }
	__asm { push 0xee49d0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c0efbd }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00c0efac: }
	__asm { movzx eax, cl }
	__asm { push 0xee9900 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c0efbd: }
	__asm { cmp byte ptr [esi + 0x58], 0 }
	__asm { jne L_00c0eff6 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { call fn_0099a700 }
	__asm { test al, al }
	__asm { je L_00c0eff6 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { mov byte ptr [esi + 0x58], 1 }
	__asm { call fn_0099af80 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { lea eax, [esi + 0x6c] }
	__asm { push eax }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_00c0ede0 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { call fn_00bf1500 }
	__asm { L_00c0eff6: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0xc] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c0f930
extern "C" __declspec(naked) void asm_00c0f930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6127b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00c0f9dd }
	__asm { cmp dword ptr [esi + 0x18], 0 }
	__asm { je L_00c0f998 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c0f983 }
	__asm { push 0x6b }
	__asm { push 0xee9b40 }
	__asm { push 0xee9ff8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c0f998 }
	__asm { L_00c0f983: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeea008 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c0f998: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c0f9dd }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp dword ptr [eax + 0x64], 0 }
	__asm { je L_00c0f9dd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c0f9c8 }
	__asm { push 0x6c }
	__asm { push 0xee9b40 }
	__asm { push 0xee9f60 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c0f9dd }
	__asm { L_00c0f9c8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeea068 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c0f9dd: }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00c0fa13 }
	__asm { lea ecx, [esi + 8] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00c0fa13: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c0f700();
// FUNCTION: ROBLOXSTUDIO 0x00c0fbf0
extern "C" __declspec(naked) void asm_00c0fbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00c0fcce }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { test dl, dl }
	__asm { je L_00c0fc59 }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { cmp eax, ecx }
	__asm { je L_00c0fc24 }
	__asm { L_00c0fc15: }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00c0fc20 }
	__asm { add eax, 4 }
	__asm { cmp eax, ecx }
	__asm { jne L_00c0fc15 }
	__asm { L_00c0fc20: }
	__asm { cmp eax, ecx }
	__asm { jne L_00c0fc59 }
	__asm { L_00c0fc24: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c0fc48 }
	__asm { push 0x29 }
	__asm { push 0xee9b40 }
	__asm { push 0xee9b7c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c0fc59 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00c0fc48: }
	__asm { movzx eax, dl }
	__asm { push 0xee9b98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c0fc59: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_00c0f700 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { add esp, 8 }
	__asm { test dl, dl }
	__asm { je L_00c0fcc8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { cmp eax, ecx }
	__asm { je L_00c0fcc8 }
	__asm { L_00c0fc84: }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00c0fc8f }
	__asm { add eax, 4 }
	__asm { cmp eax, ecx }
	__asm { jne L_00c0fc84 }
	__asm { L_00c0fc8f: }
	__asm { cmp eax, ecx }
	__asm { je L_00c0fcc8 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c0fcb7 }
	__asm { push 0x2d }
	__asm { push 0xee9b40 }
	__asm { push 0xee9bfc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c0fcc8 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00c0fcb7: }
	__asm { movzx eax, dl }
	__asm { push 0xee9c18 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c0fcc8: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00c0fcce: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c0fb00();
// FUNCTION: ROBLOXSTUDIO 0x00c0fd50
extern "C" __declspec(naked) void asm_00c0fd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { je L_00c0fddb }
	__asm { test esi, esi }
	__asm { jne L_00c0fd9b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c0fd86 }
	__asm { push 0x56 }
	__asm { push 0xee9b40 }
	__asm { push 0xee9e9c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c0fd9b }
	__asm { L_00c0fd86: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee9ea8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c0fd9b: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c0fddb }
	__asm { cmp esi, edi }
	__asm { jne L_00c0fddb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c0fdc6 }
	__asm { push 0x57 }
	__asm { push 0xee9b40 }
	__asm { push 0xee9ef8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c0fddb }
	__asm { L_00c0fdc6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee9f08 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c0fddb: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp eax, dword ptr [esi + 0xc] }
	__asm { je L_00c0fdf7 }
	__asm { L_00c0fde3: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ecx - 4] }
	__asm { call fn_00c0fb00 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp eax, dword ptr [esi + 0xc] }
	__asm { jne L_00c0fde3 }
	__asm { L_00c0fdf7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cc9b40();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00c0fe00
extern "C" __declspec(naked) void asm_00c0fe00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd61290 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { jne L_00c0fe6c }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov bl, byte ptr [ebp + 0xc] }
	__asm { L_00c0fe44: }
	__asm { mov esi, eax }
	__asm { test bl, bl }
	__asm { je L_00c0fe52 }
	__asm { cmp dword ptr [eax + 0x10], edx }
	__asm { setae cl }
	__asm { jmp L_00c0fe58 }
	__asm { L_00c0fe52: }
	__asm { cmp edx, dword ptr [eax + 0x10] }
	__asm { setb cl }
	__asm { L_00c0fe58: }
	__asm { mov byte ptr [ebp - 0x14], cl }
	__asm { test cl, cl }
	__asm { je L_00c0fe63 }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_00c0fe66 }
	__asm { L_00c0fe63: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { L_00c0fe66: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00c0fe44 }
	__asm { L_00c0fe6c: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00cc9b40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov dword ptr fs:[0], ecx }
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
}

extern "C" void fn_008b19b0();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b5cfb0();
extern "C" void fn_00ba1880();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c0ff80
extern "C" __declspec(naked) void asm_00c0ff80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd612d4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00c0ffca }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00ba1880 }
	__asm { mov ecx, eax }
	__asm { jmp L_00c0ffcc }
	__asm { L_00c0ffca: }
	__asm { xor ecx, ecx }
	__asm { L_00c0ffcc: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [edi + 0xc], esi }
	__asm { mov dword ptr [edi], 0xeea2fc }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x28], 0xf }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { mov byte ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_00b5cfb0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { lea ecx, [edi + 0x40] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { call fn_00b5cfb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00408d90();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c102b0
extern "C" __declspec(naked) void asm_00c102b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00c10305 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp esi, dword ptr [edx + 0xc] }
	__asm { je L_00c10305 }
	__asm { cmp esi, dword ptr [edx + 0x10] }
	__asm { je L_00c10305 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c102f4 }
	__asm { push 0x46 }
	__asm { push 0xeea314 }
	__asm { push 0xe91298 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c10305 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c102f4: }
	__asm { movzx eax, al }
	__asm { push 0xeea5c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c10305: }
	__asm { test esi, esi }
	__asm { je L_00c10328 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x40] }
	__asm { call fn_00408d90 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi + 0x40] }
	__asm { je L_00c10328 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c10328: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c360();
extern "C" void fn_00c102b0();
extern "C" void fn_00c10330();
extern "C" void fn_00c10c50();
// FUNCTION: ROBLOXSTUDIO 0x00c103b0
extern "C" __declspec(naked) void asm_00c103b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00c1040d }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00c103d5 }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { test edx, edx }
	__asm { je L_00c103d5 }
	__asm { cmp ecx, edx }
	__asm { jne L_00c1040d }
	__asm { L_00c103d5: }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c103fc }
	__asm { push 0xab }
	__asm { push 0xeea314 }
	__asm { push 0xeea990 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c1040d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c103fc: }
	__asm { movzx eax, al }
	__asm { push 0xeea9e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c1040d: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c360 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00c1044c }
	__asm { push dword ptr [esi + 0xc] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00c102b0 }
	__asm { test al, al }
	__asm { je L_00c1043e }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00c102b0 }
	__asm { test al, al }
	__asm { jne L_00c104a9 }
	__asm { L_00c1043e: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c10c50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c1044c: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00c104a9 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00c102b0 }
	__asm { test al, al }
	__asm { je L_00c10473 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00c102b0 }
	__asm { test al, al }
	__asm { jne L_00c104a9 }
	__asm { L_00c10473: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00c10494 }
	__asm { push 0xb9 }
	__asm { push 0xeea314 }
	__asm { push 0xeea4d0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c104a9 }
	__asm { L_00c10494: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeeaa90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c104a9: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00c10330 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}
