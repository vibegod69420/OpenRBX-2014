// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00c6c440();
extern "C" void fn_00c6cfe0();
// FUNCTION: ROBLOXSTUDIO 0x00c6c1a0
extern "C" __declspec(naked) void asm_00c6c1a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00c6c440 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { push 0x20 }
	__asm { test al, al }
	__asm { je L_00c6c1dd }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [edx + 3] }
	__asm { mov byte ptr [ebp + 8], al }
	__asm { mov al, byte ptr [edx + 2] }
	__asm { mov byte ptr [ebp + 9], al }
	__asm { mov al, byte ptr [edx + 1] }
	__asm { mov byte ptr [ebp + 0xa], al }
	__asm { mov al, byte ptr [edx] }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c6cfe0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c6c1dd: }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6cfe0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6c350();
// FUNCTION: ROBLOXSTUDIO 0x00c6cae0
extern "C" __declspec(naked) void asm_00c6cae0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { push 1 }
	__asm { mov esi, ecx }
	__asm { call fn_00c6c350 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { shr ecx, 3 }
	__asm { and edi, 7 }
	__asm { jne L_00c6cb03 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { pop edi }
	__asm { mov byte ptr [ecx + eax], 0x80 }
	__asm { inc dword ptr [esi] }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00c6cb03: }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { add edx, ecx }
	__asm { mov ecx, edi }
	__asm { mov eax, 0x80 }
	__asm { sar eax, cl }
	__asm { pop edi }
	__asm { or byte ptr [edx], al }
	__asm { inc dword ptr [esi] }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00c6c350();
extern "C" void fn_00c6c440();
// FUNCTION: ROBLOXSTUDIO 0x00c6cd10
extern "C" __declspec(naked) void asm_00c6cd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x10 }
	__asm { mov edi, ecx }
	__asm { call fn_00c6c350 }
	__asm { call fn_00c6c440 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { shr edx, 3 }
	__asm { test al, al }
	__asm { je L_00c6cd3c }
	__asm { mov al, byte ptr [esi + 1] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { mov al, byte ptr [esi] }
	__asm { jmp L_00c6cd44 }
	__asm { L_00c6cd3c: }
	__asm { mov al, byte ptr [esi] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { mov al, byte ptr [esi + 1] }
	__asm { L_00c6cd44: }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { shr edx, 3 }
	__asm { mov byte ptr [edx + ecx + 1], al }
	__asm { add dword ptr [edi], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c70800();
// FUNCTION: ROBLOXSTUDIO 0x00c6e500
extern "C" __declspec(naked) void asm_00c6e500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00c70800 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_00c6e564 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { mov dword ptr [edx + 0xc], 0 }
	__asm { mov dword ptr [edx + 0x10], 0 }
	__asm { mov eax, esi }
	__asm { L_00c6e564: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008b13e0();
extern "C" void fn_00c6d460();
extern "C" void fn_00c6d640();
// FUNCTION: ROBLOXSTUDIO 0x00c6f260
extern "C" __declspec(naked) void asm_00c6f260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { xor eax, eax }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { call fn_00c6d640 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c6d460 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ax, word ptr [ebp - 4] }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { je L_00c6f2a8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_008b13e0 }
	__asm { L_00c6f2a8: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c6f360
extern "C" __declspec(naked) void asm_00c6f360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00c6f384 }
	__asm { nop }
	__asm { L_00c6f370: }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { add ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { call dword ptr [ebp + 0x14] }
	__asm { add esi, 0xc }
	__asm { cmp esi, edi }
	__asm { jne L_00c6f370 }
	__asm { L_00c6f384: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x20] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6e570();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c70840
extern "C" __declspec(naked) void asm_00c70840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { test eax, eax }
	__asm { je L_00c7087e }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push eax }
	__asm { call fn_00c6e570 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_00c7087e: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c70cf0();
// FUNCTION: ROBLOXSTUDIO 0x00c70e30
extern "C" __declspec(naked) void asm_00c70e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { push dword ptr [edi + 0x28] }
	__asm { call fn_00c70cf0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { add esp, 0x10 }
	__asm { test ecx, ecx }
	__asm { je L_00c70e68 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { L_00c70e68: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c72550
extern "C" __declspec(naked) void asm_00c72550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00c7255f }
	__asm { lea edx, [eax + 0x1c] }
	__asm { jmp L_00c72561 }
	__asm { L_00c7255f: }
	__asm { xor edx, edx }
	__asm { L_00c72561: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { test eax, eax }
	__asm { je L_00c7257d }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { lea esi, [eax + 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push esi }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c7257d: }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { xor esi, esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push esi }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c6c7a0();
// FUNCTION: ROBLOXSTUDIO 0x00c75850
extern "C" __declspec(naked) void asm_00c75850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_00c75864: }
	__asm { push 1 }
	__asm { push 5 }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp + 0xf], 0 }
	__asm { call fn_00c6c7a0 }
	__asm { movzx eax, byte ptr [ebp + 0xf] }
	__asm { and eax, 0xf }
	__asm { mov ecx, esi }
	__asm { shl eax, cl }
	__asm { add esi, 4 }
	__asm { or dword ptr [edi], eax }
	__asm { test byte ptr [ebp + 0xf], 0x10 }
	__asm { jne L_00c75864 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c78ca0
extern "C" __declspec(naked) void asm_00c78ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c78ccd }
	__asm { mov dword ptr [eax], 0xef99e8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c78ccf }
	__asm { L_00c78ccd: }
	__asm { xor eax, eax }
	__asm { L_00c78ccf: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c78cf0
extern "C" __declspec(naked) void asm_00c78cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c78d1d }
	__asm { mov dword ptr [eax], 0xef99d4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c78d1f }
	__asm { L_00c78d1d: }
	__asm { xor eax, eax }
	__asm { L_00c78d1f: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c7dfa0
extern "C" __declspec(naked) void asm_00c7dfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp esi, edi }
	__asm { je L_00c7dff5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00c7dfd1 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00c7dfd1: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { L_00c7dff5: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102e0[];
extern "C" char g_00e103a8[];
extern "C" char g_00e103b4[];
extern "C" char g_00e103b8[];
extern "C" void fn_00c7c840();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c7e840
extern "C" __declspec(naked) void asm_00c7e840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { lea edi, [ecx - 0x78] }
	__asm { lea esi, [edi + 0x78] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e102e0] }
	__asm { lea ecx, [esi - 0x78] }
	__asm { call fn_00c7c840 }
	__asm { mov eax, dword ptr [g_00e103b8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_00e103b4] }
	__asm { push esi }
	__asm { mov dword ptr [esi], eax }
	__asm { call dword ptr [g_00e103a8] }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c7e882 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7e882: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403160();
extern "C" void fn_00c75270();
// FUNCTION: ROBLOXSTUDIO 0x00c819f0
extern "C" __declspec(naked) void asm_00c819f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, 1 }
	__asm { jne L_00c81a16 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_00c81a16: }
	__asm { add ecx, 0x3c }
	__asm { cmp edx, 3 }
	__asm { jne L_00c81a2b }
	__asm { push ecx }
	__asm { call fn_00c75270 }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c81a2b: }
	__asm { cmp edx, 1 }
	__asm { jne L_00c81a39 }
	__asm { push ecx }
	__asm { call fn_00403160 }
	__asm { add esp, 4 }
	__asm { L_00c81a39: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c84b30
extern "C" __declspec(naked) void asm_00c84b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [edx + 6] }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { cmp eax, esi }
	__asm { je L_00c84b5d }
	__asm { L_00c84b44: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov cx, word ptr [eax + 4] }
	__asm { add eax, 6 }
	__asm { mov word ptr [edx + 4], cx }
	__asm { lea edx, [edx + 6] }
	__asm { cmp eax, esi }
	__asm { jne L_00c84b44 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00c84b5d: }
	__asm { add dword ptr [edi + 4], -6 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0042ba60();
// FUNCTION: ROBLOXSTUDIO 0x00c85440
extern "C" __declspec(naked) void asm_00c85440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_0042ba60 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { jne L_00c85468 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00c85468: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c85520
extern "C" __declspec(naked) void asm_00c85520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ecx + 0xea8], 0 }
	__asm { je L_00c8557c }
	__asm { lea edx, [ecx + 0x1e90] }
	__asm { test edx, edx }
	__asm { je L_00c8557c }
	__asm { cmp byte ptr [edx + 0x88], 0 }
	__asm { je L_00c8554e }
	__asm { mov eax, dword ptr [ecx + 0x21c0] }
	__asm { cmp byte ptr [eax + 0xf4], 0 }
	__asm { jne L_00c8557c }
	__asm { L_00c8554e: }
	__asm { cmp byte ptr [edx + 0x78], 0 }
	__asm { je L_00c85563 }
	__asm { mov eax, dword ptr [ecx + 0x21c0] }
	__asm { cmp byte ptr [eax + 0xf5], 0 }
	__asm { jne L_00c8557c }
	__asm { L_00c85563: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub ecx, dword ptr [edx + eax*4 + 0x98] }
	__asm { mov eax, 0 }
	__asm { cmovns eax, ecx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00c8557c: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c86460
extern "C" __declspec(naked) void asm_00c86460()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0xa0] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { je L_00c86490 }
	__asm { mov edx, dword ptr [esi + 0x88] }
	__asm { mov ecx, dword ptr [esi + 0x90] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { add ecx, edx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { sub ecx, edx }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00c86490: }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c864b0
extern "C" __declspec(naked) void asm_00c864b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x60] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { je L_00c864d7 }
	__asm { mov edx, dword ptr [esi + 0x48] }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { add ecx, edx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { sub ecx, edx }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00c864d7: }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c86770
extern "C" __declspec(naked) void asm_00c86770()
{
	__asm { cmp dword ptr [ecx + 0x20c0], 0 }
	__asm { je L_00c86795 }
	__asm { mov edx, dword ptr [ecx + 0x209c] }
	__asm { sub edx, dword ptr [ecx + 0x2098] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { jmp L_00c8679b }
	__asm { L_00c86795: }
	__asm { mov eax, dword ptr [ecx + 0x2094] }
	__asm { L_00c8679b: }
	__asm { cmp dword ptr [ecx + 0x2050], 0 }
	__asm { je L_00c867bd }
	__asm { test eax, eax }
	__asm { je L_00c867bd }
	__asm { xor al, al }
	__asm { cmp dword ptr [ecx + 0x20f8], 0 }
	__asm { movzx eax, al }
	__asm { mov edx, 1 }
	__asm { cmovne eax, edx }
	__asm { ret }
	__asm { L_00c867bd: }
	__asm { cmp dword ptr [ecx + 0x20f8], 0 }
	__asm { mov al, 1 }
	__asm { movzx eax, al }
	__asm { mov edx, 1 }
	__asm { cmovne eax, edx }
	__asm { ret }
}

extern "C" void fn_00532480();
// FUNCTION: ROBLOXSTUDIO 0x00c867e0
extern "C" __declspec(naked) void asm_00c867e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x90] }
	__asm { test eax, eax }
	__asm { je L_00c86814 }
	__asm { mov edx, dword ptr [eax + 0x64] }
	__asm { test edx, edx }
	__asm { je L_00c86814 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { cmp edx, ecx }
	__asm { je L_00c8680e }
	__asm { test ecx, ecx }
	__asm { je L_00c86814 }
	__asm { push edx }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { je L_00c86814 }
	__asm { L_00c8680e: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c86814: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00794a20();
extern "C" void fn_00c78af0();
// FUNCTION: ROBLOXSTUDIO 0x00c86aa0
extern "C" __declspec(naked) void asm_00c86aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movzx eax, byte ptr [ecx + 0x212c] }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x212c] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_00c86ab9 }
	__asm { inc eax }
	__asm { jmp L_00c86abb }
	__asm { L_00c86ab9: }
	__asm { xor eax, eax }
	__asm { L_00c86abb: }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_00794a20 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00c78af0 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { pop esi }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c78a40();
// FUNCTION: ROBLOXSTUDIO 0x00c86af0
extern "C" __declspec(naked) void asm_00c86af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { movzx eax, byte ptr [ecx + 0x2038] }
	__asm { add ecx, 0x2038 }
	__asm { inc eax }
	__asm { add eax, ecx }
	__asm { je L_00c86b09 }
	__asm { inc eax }
	__asm { jmp L_00c86b0b }
	__asm { L_00c86b09: }
	__asm { xor eax, eax }
	__asm { L_00c86b0b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { shr edx, 3 }
	__asm { add edx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push edx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00c78a40 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { setne al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102e8[];
// FUNCTION: ROBLOXSTUDIO 0x00c898c0
extern "C" __declspec(naked) void asm_00c898c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x44], 0 }
	__asm { je L_00c898d0 }
	__asm { mov byte ptr [esi + 0x44], 0 }
	__asm { L_00c898d0: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov byte ptr [esi + 0x44], 1 }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x4c], ecx }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { call dword ptr [g_00e102e8] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [eax], 0 }
	__asm { and dword ptr [esi + 0x38], 0xfffffff9 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" void fn_00c84b70();
// FUNCTION: ROBLOXSTUDIO 0x00c8d4e0
extern "C" __declspec(naked) void asm_00c8d4e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea esi, [edi + 0x2144] }
	__asm { push esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov eax, dword ptr [edi + 0x2050] }
	__asm { test eax, eax }
	__asm { je L_00c8d514 }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { jne L_00c8d514 }
	__asm { cmp byte ptr [edi + 0x20a4], 0 }
	__asm { jne L_00c8d514 }
	__asm { mov byte ptr [edi + 0x20aa], 1 }
	__asm { L_00c8d514: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x215c] }
	__asm { call fn_00c84b70 }
	__asm { test eax, eax }
	__asm { push esi }
	__asm { setne bl }
	__asm { call dword ptr [g_00e101b0] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cc7530();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c8f850
extern "C" __declspec(naked) void asm_00c8f850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 0x28 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00c8f899 }
	__asm { fldz }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { mov dword ptr [edx + 0xc], 0 }
	__asm { mov dword ptr [edx + 0x10], esi }
	__asm { fstp qword ptr [edx + 0x18] }
	__asm { push edx }
	__asm { lea ecx, [esi + 0x2108] }
	__asm { mov dword ptr [edx], 0xef72d4 }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { call fn_00cc7530 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c8f899: }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { lea ecx, [esi + 0x2108] }
	__asm { call fn_00cc7530 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c99e80
extern "C" __declspec(naked) void asm_00c99e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00c99ead }
	__asm { mov dword ptr [eax], 0xefb1e8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00c99eaf }
	__asm { L_00c99ead: }
	__asm { xor eax, eax }
	__asm { L_00c99eaf: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007cd560();
extern "C" void fn_00c53930();
// FUNCTION: ROBLOXSTUDIO 0x00c9c140
extern "C" __declspec(naked) void asm_00c9c140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00c9c175 }
	__asm { add edi, 0x1c }
	__asm { je L_00c9c175 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00c53930 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c9c175 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c9c175: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c9c650
extern "C" __declspec(naked) void asm_00c9c650()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00c9c685 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00c9c66b }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9c66b: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9c685: }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_00c9c696 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9c696: }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { pop edi }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_012a11a8[];
extern "C" char g_012a11b8[];
extern "C" char g_012a11bc[];
extern "C" char g_012fc964[];
extern "C" void fn_004038a0();
extern "C" void fn_00c6b400();
extern "C" void fn_00c9f720();
// FUNCTION: ROBLOXSTUDIO 0x00c9dbf0
extern "C" __declspec(naked) void asm_00c9dbf0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { call fn_00c9f720 }
	__asm { mov ecx, dword ptr [edi + 0xab8] }
	__asm { call fn_00c6b400 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 0x80 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x1c] }
	__asm { cmp byte ptr [g_012fc964], 0 }
	__asm { mov esi, 0x12a11a8 }
	__asm { je L_00c9dc2c }
	__asm { push 4 }
	__asm { push 0xefa434 }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { L_00c9dc2c: }
	__asm { mov ecx, dword ptr [edi + 0xab8] }
	__asm { call fn_00c6b400 }
	__asm { cmp dword ptr [g_012a11bc], 0x10 }
	__asm { push dword ptr [g_012a11b8] }
	__asm { cmovae esi, dword ptr [g_012a11a8] }
	__asm { mov edx, dword ptr [eax] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x28] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007cd560();
extern "C" void fn_00c2ccd0();
// FUNCTION: ROBLOXSTUDIO 0x00c9f5b0
extern "C" __declspec(naked) void asm_00c9f5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00c9f5e5 }
	__asm { add edi, 0x1c }
	__asm { je L_00c9f5e5 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00c2ccd0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00c9f5e5 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c9f5e5: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ca0120
extern "C" __declspec(naked) void asm_00ca0120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { test edx, edx }
	__asm { je L_00ca015a }
	__asm { cmp byte ptr [edx], 0 }
	__asm { je L_00ca015a }
	__asm { mov eax, edx }
	__asm { push esi }
	__asm { lea esi, [eax + 1] }
	__asm { L_00ca0135: }
	__asm { mov cl, byte ptr [eax] }
	__asm { inc eax }
	__asm { test cl, cl }
	__asm { jne L_00ca0135 }
	__asm { sub eax, esi }
	__asm { pop esi }
	__asm { mov cl, byte ptr [eax + edx - 1] }
	__asm { cmp cl, 0x5c }
	__asm { jne L_00ca014f }
	__asm { mov byte ptr [eax + edx - 1], 0x2f }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ca014f: }
	__asm { cmp cl, 0x2f }
	__asm { je L_00ca015a }
	__asm { mov word ptr [eax + edx], 0x2f }
	__asm { L_00ca015a: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ca5740();
// FUNCTION: ROBLOXSTUDIO 0x00ca0b50
extern "C" __declspec(naked) void asm_00ca0b50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00ca5740 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_00ca0b99 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], 0 }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { mov eax, esi }
	__asm { L_00ca0b99: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ca0fa0
extern "C" __declspec(naked) void asm_00ca0fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00ca0ffc }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_00ca0fd0 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { L_00ca0fd0: }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_00ca0fe1 }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ca0fe1: }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ca0ffc: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ca1000
extern "C" __declspec(naked) void asm_00ca1000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00ca105a }
	__asm { cmp dword ptr [esi + 0x38], 0x10 }
	__asm { jb L_00ca101c }
	__asm { push dword ptr [esi + 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ca101c: }
	__asm { mov dword ptr [esi + 0x38], 0xf }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov byte ptr [esi + 0x24], 0 }
	__asm { cmp dword ptr [esi + 0x1c], 0x10 }
	__asm { jb L_00ca103f }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ca103f: }
	__asm { mov dword ptr [esi + 0x1c], 0xf }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ca105a: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c70e30();
extern "C" void fn_00ca7230();
// FUNCTION: ROBLOXSTUDIO 0x00ca56b0
extern "C" __declspec(naked) void asm_00ca56b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edx }
	__asm { push dword ptr [eax + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ca7230 }
	__asm { test al, al }
	__asm { je L_00ca56e9 }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00c70e30 }
	__asm { add esp, 0xc }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ca56e9: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c72250();
extern "C" void fn_00ca7230();
// FUNCTION: ROBLOXSTUDIO 0x00ca5700
extern "C" __declspec(naked) void asm_00ca5700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edx }
	__asm { push dword ptr [eax + 0x28] }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { call fn_00ca7230 }
	__asm { test al, al }
	__asm { je L_00ca5736 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00c72250 }
	__asm { add esp, 0xc }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ca5736: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cad650
extern "C" __declspec(naked) void asm_00cad650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00cad671 }
	__asm { nop }
	__asm { L_00cad660: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { call dword ptr [ebp + 0x14] }
	__asm { add esi, 0x44 }
	__asm { add esp, 8 }
	__asm { cmp esi, edi }
	__asm { jne L_00cad660 }
	__asm { L_00cad671: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cb33f0
extern "C" __declspec(naked) void asm_00cb33f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { xor esi, esi }
	__asm { nop }
	__asm { L_00cb3400: }
	__asm { test eax, eax }
	__asm { je L_00cb3409 }
	__asm { lea ecx, [eax - 0x28] }
	__asm { jmp L_00cb340b }
	__asm { L_00cb3409: }
	__asm { xor ecx, ecx }
	__asm { L_00cb340b: }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { push ecx }
	__asm { mov dword ptr [edi], eax }
	__asm { call fn_00cf6522 }
	__asm { dec dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { inc esi }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_00cb3400 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004254f0();
extern "C" void fn_0044dae0();
extern "C" void fn_00cb6260();
// FUNCTION: ROBLOXSTUDIO 0x00cb3ad0
extern "C" __declspec(naked) void asm_00cb3ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call fn_004254f0 }
	__asm { cmp eax, 1 }
	__asm { jne L_00cb3aeb }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cb3aeb: }
	__asm { test esi, esi }
	__asm { je L_00cb3af4 }
	__asm { add esi, 0x1c }
	__asm { jmp L_00cb3af6 }
	__asm { L_00cb3af4: }
	__asm { xor esi, esi }
	__asm { L_00cb3af6: }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { push esi }
	__asm { push 0x12fb10c }
	__asm { call fn_0044dae0 }
	__asm { lea ecx, [edi + 0x4610] }
	__asm { call fn_00cb6260 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007c9370();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x00cb5b30
extern "C" __declspec(naked) void asm_00cb5b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00cb5b62 }
	__asm { add edi, 0x1c }
	__asm { je L_00cb5b62 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007c9370 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_00cb5b62 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00cb5b62 }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cb5b62: }
	__asm { xor al, al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006ded80();
extern "C" void fn_00892440();
// FUNCTION: ROBLOXSTUDIO 0x00cb6c60
extern "C" __declspec(naked) void asm_00cb6c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { call dword ptr [eax + 0x90] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00cb6ca3 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00cb6ca3 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_00892440 }
	__asm { lea ecx, [eax + 0x24] }
	__asm { call fn_006ded80 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [esi + 0xd0] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { L_00cb6ca3: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b2deb0();
// FUNCTION: ROBLOXSTUDIO 0x00cb7ec0
extern "C" __declspec(naked) void asm_00cb7ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_00cb7ed3 }
	__asm { add esi, -0x1c }
	__asm { jmp L_00cb7ed5 }
	__asm { L_00cb7ed3: }
	__asm { xor esi, esi }
	__asm { L_00cb7ed5: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, esi }
	__asm { call fn_00b2deb0 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test eax, eax }
	__asm { je L_00cb7ef0 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { add ecx, esi }
	__asm { call eax }
	__asm { L_00cb7ef0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cbb8d0
extern "C" __declspec(naked) void asm_00cbb8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x870] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { sub esi, edx }
	__asm { mov eax, 0 }
	__asm { sbb eax, edi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jne L_00cbb8f7 }
	__asm { cmp esi, 0x2710 }
	__asm { jbe L_00cbb916 }
	__asm { L_00cbb8f7: }
	__asm { sub edx, dword ptr [ecx + 0x870] }
	__asm { sbb edi, 0 }
	__asm { test edi, edi }
	__asm { jb L_00cbb916 }
	__asm { ja L_00cbb90e }
	__asm { cmp edx, dword ptr [ecx + 0x8c0] }
	__asm { jbe L_00cbb916 }
	__asm { L_00cbb90e: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cbb916: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cbb9c0
extern "C" __declspec(naked) void asm_00cbb9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00cbb9d7 }
	__asm { cmp eax, 1 }
	__asm { je L_00cbb9d7 }
	__asm { cmp eax, 5 }
	__asm { jne L_00cbba0c }
	__asm { L_00cbb9d7: }
	__asm { mov eax, dword ptr [ecx + 0x86c] }
	__asm { test eax, eax }
	__asm { jne L_00cbb9f1 }
	__asm { mov dword ptr [edx + 0x5c], edx }
	__asm { mov dword ptr [edx + 0x58], edx }
	__asm { mov dword ptr [ecx + 0x86c], edx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cbb9f1: }
	__asm { mov dword ptr [edx + 0x5c], eax }
	__asm { mov eax, dword ptr [ecx + 0x86c] }
	__asm { mov eax, dword ptr [eax + 0x58] }
	__asm { mov dword ptr [edx + 0x58], eax }
	__asm { mov dword ptr [eax + 0x5c], edx }
	__asm { mov eax, dword ptr [ecx + 0x86c] }
	__asm { mov dword ptr [eax + 0x58], edx }
	__asm { L_00cbba0c: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00cbbe60
extern "C" __declspec(naked) void asm_00cbbe60()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test eax, eax }
	__asm { je L_00cbbea9 }
	__asm { cmp eax, 0x200 }
	__asm { jbe L_00cbbea2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00cbbe95 }
	__asm { push esi }
	__asm { push 0x403160 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 8 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00cbbe95: }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_00cbbea2: }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { L_00cbbea9: }
	__asm { pop edi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cbf5f0
extern "C" __declspec(naked) void asm_00cbf5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { inc dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { cmp eax, edx }
	__asm { cmove eax, esi }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { jne L_00cbf617 }
	__asm { shl edx, 4 }
	__asm { add edx, dword ptr [ecx] }
	__asm { jmp L_00cbf61e }
	__asm { L_00cbf617: }
	__asm { mov edx, dword ptr [ecx] }
	__asm { shl esi, 4 }
	__asm { add edx, esi }
	__asm { L_00cbf61e: }
	__asm { mov ecx, dword ptr [edx - 0x10] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx - 0xc] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx - 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx - 4] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cbffd0
extern "C" __declspec(naked) void asm_00cbffd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { cmp eax, edx }
	__asm { jae L_00cc0001 }
	__asm { dec edx }
	__asm { cmp eax, edx }
	__asm { jae L_00cbfffe }
	__asm { L_00cbffe5: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea edx, [ecx + eax*8] }
	__asm { inc eax }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { dec ecx }
	__asm { cmp eax, ecx }
	__asm { jb L_00cbffe5 }
	__asm { L_00cbfffe: }
	__asm { dec dword ptr [esi + 4] }
	__asm { L_00cc0001: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00cc02e0
extern "C" __declspec(naked) void asm_00cc02e0()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00cc0344 }
	__asm { cmp eax, 0x20 }
	__asm { jbe L_00cc0336 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00cc032f }
	__asm { push esi }
	__asm { push 0x403160 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00cc032f: }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { L_00cc0336: }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { L_00cc0344: }
	__asm { pop edi }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00cc74d0
extern "C" __declspec(naked) void asm_00cc74d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00cc751a }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { cmp eax, dword ptr [ebp + 8] }
	__asm { je L_00cc751a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cc7505 }
	__asm { push 0x45 }
	__asm { push 0xefffb4 }
	__asm { push 0xf00048 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cc751a }
	__asm { L_00cc7505: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf00058 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cc751a: }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cc8b80
extern "C" __declspec(naked) void asm_00cc8b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00cc8bd8 }
	__asm { cmp dword ptr [esi + 0x2c], 0x10 }
	__asm { jb L_00cc8b9c }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cc8b9c: }
	__asm { mov dword ptr [esi + 0x2c], 0xf }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00cc8bbe }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cc8bbe: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cc8bd8: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cc9600();
// FUNCTION: ROBLOXSTUDIO 0x00cc96d0
extern "C" __declspec(naked) void asm_00cc96d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_00cc96f1 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { cmp eax, dword ptr [esi + 0x14] }
	__asm { jb L_00cc96f1 }
	__asm { L_00cc96ea: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00cc96f1: }
	__asm { call fn_00cc9600 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00cc96ea }
	__asm { mov byte ptr [esi + 0x18], 1 }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00c5e9d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ccb6e0
extern "C" __declspec(naked) void asm_00ccb6e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], 0xf004ec }
	__asm { mov dword ptr [esi + 4], 0xf00564 }
	__asm { mov dword ptr [esi + 0x18], 0xf0056c }
	__asm { mov dword ptr [esi + 0x1c], 0xf00578 }
	__asm { mov dword ptr [esi + 0x64], 0xf00588 }
	__asm { mov ecx, dword ptr [esi + 0x80] }
	__asm { test ecx, ecx }
	__asm { je L_00ccb746 }
	__asm { cmp dword ptr [esi + 0x74], 0 }
	__asm { je L_00ccb727 }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x6c] }
	__asm { call fn_00c5e9d0 }
	__asm { L_00ccb727: }
	__asm { push dword ptr [esi + 0x80] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { L_00ccb746: }
	__asm { pop edi }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_007b00e0 }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
// FUNCTION: ROBLOXSTUDIO 0x00ccbd60
extern "C" __declspec(naked) void asm_00ccbd60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test ecx, ecx }
	__asm { jne L_00ccbd9b }
	__asm { push 3 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10348] }
	__asm { lea ecx, [ebp + 8] }
	__asm { call dword ptr [g_00e10344] }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00ccbd9b: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { mov dword ptr [esi], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ccce20
extern "C" __declspec(naked) void asm_00ccce20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { xor esi, esi }
	__asm { nop }
	__asm { L_00ccce30: }
	__asm { test eax, eax }
	__asm { je L_00ccce39 }
	__asm { lea ecx, [eax - 0xc] }
	__asm { jmp L_00ccce3b }
	__asm { L_00ccce39: }
	__asm { xor ecx, ecx }
	__asm { L_00ccce3b: }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { push ecx }
	__asm { mov dword ptr [edi], eax }
	__asm { call fn_00cf6522 }
	__asm { dec dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { inc esi }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_00ccce30 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00849320();
extern "C" void fn_008493d0();
// FUNCTION: ROBLOXSTUDIO 0x00cd9770
extern "C" __declspec(naked) void asm_00cd9770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp eax, esi }
	__asm { je L_00cd97a1 }
	__asm { L_00cd9782: }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_00849320 }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { add ecx, dword ptr [ebp + 0x18] }
	__asm { push eax }
	__asm { call dword ptr [ebp + 0x14] }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_008493d0 }
	__asm { cmp dword ptr [ebp - 4], esi }
	__asm { jne L_00cd9782 }
	__asm { L_00cd97a1: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00ce31f0
extern "C" __declspec(naked) void asm_00ce31f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, edi }
	__asm { je L_00ce3220 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00ce3202: }
	__asm { test esi, esi }
	__asm { je L_00ce3210 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { L_00ce3210: }
	__asm { add ecx, 8 }
	__asm { add esi, 8 }
	__asm { cmp ecx, edi }
	__asm { jne L_00ce3202 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ce3220: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce4600
extern "C" __declspec(naked) void asm_00ce4600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { xor esi, esi }
	__asm { nop }
	__asm { L_00ce4610: }
	__asm { test eax, eax }
	__asm { je L_00ce4619 }
	__asm { lea ecx, [eax - 0x20] }
	__asm { jmp L_00ce461b }
	__asm { L_00ce4619: }
	__asm { xor ecx, ecx }
	__asm { L_00ce461b: }
	__asm { mov eax, dword ptr [ecx + 0x20] }
	__asm { push ecx }
	__asm { mov dword ptr [edi], eax }
	__asm { call fn_00cf6522 }
	__asm { dec dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { inc esi }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_00ce4610 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf4e70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce69d0
extern "C" __declspec(naked) void asm_00ce69d0()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { test eax, eax }
	__asm { je L_00ce6a06 }
	__asm { dec dword ptr [eax] }
	__asm { jne L_00ce6a06 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_00ce69f5 }
	__asm { mov ecx, esi }
	__asm { call fn_00cf4e70 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce69f5: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00ce6a06 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce6a06: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00ce9780
extern "C" __declspec(naked) void asm_00ce9780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { jne L_00ce979a }
	__asm { movzx ecx, byte ptr [ecx + 0x228] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce979a: }
	__asm { push esi }
	__asm { movzx esi, byte ptr [ecx + 0x228] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jle L_00ce97a8 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00ce97a8: }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { jle L_00ce97c0 }
	__asm { push eax }
	__asm { lea eax, [ecx + 0x128] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { L_00ce97c0: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c68cf0();
extern "C" void fn_00cc4810();
// FUNCTION: ROBLOXSTUDIO 0x00ce9b90
extern "C" __declspec(naked) void asm_00ce9b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00ce9bb0 }
	__asm { lea eax, [esi + 0x498] }
	__asm { push eax }
	__asm { call fn_00cc4810 }
	__asm { add esp, 4 }
	__asm { L_00ce9bb0: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x7c }
	__asm { lea eax, [eax + eax*4] }
	__asm { push 0x1316200 }
	__asm { lea eax, [eax + 0x126] }
	__asm { push 0 }
	__asm { lea ecx, [esi + eax*4] }
	__asm { call fn_00c68cf0 }
	__asm { mov eax, 0x1316200 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ce9e70
extern "C" __declspec(naked) void asm_00ce9e70()
{
	__asm { cmp dword ptr [ecx + 0x22c], 0 }
	__asm { je L_00ce9eb7 }
	__asm { cmp byte ptr [ecx + 4], 1 }
	__asm { je L_00ce9eb7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x234] }
	__asm { xor edx, edx }
	__asm { test esi, esi }
	__asm { je L_00ce9eb2 }
	__asm { mov ecx, dword ptr [ecx + 0x230] }
	__asm { L_00ce9e92: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax], 0 }
	__asm { je L_00ce9eac }
	__asm { cmp dword ptr [eax + 0x1200], 7 }
	__asm { jne L_00ce9eac }
	__asm { cmp byte ptr [eax + 0x1160], 0 }
	__asm { jne L_00ce9eac }
	__asm { inc edx }
	__asm { L_00ce9eac: }
	__asm { add ecx, 4 }
	__asm { dec esi }
	__asm { jne L_00ce9e92 }
	__asm { L_00ce9eb2: }
	__asm { mov ax, dx }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00ce9eb7: }
	__asm { xor eax, eax }
	__asm { ret }
}

extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00ceeee0
extern "C" __declspec(naked) void asm_00ceeee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { je L_00ceef25 }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00ceef11 }
	__asm { push esi }
	__asm { push 0xce69d0 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 8 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ceef11: }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { L_00ceef25: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00cf20c0
extern "C" __declspec(naked) void asm_00cf20c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov eax, 0xff }
	__asm { cmp ebx, eax }
	__asm { cmovg ebx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { jne L_00cf20e7 }
	__asm { mov byte ptr [esi + 0x228], al }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cf20e7: }
	__asm { test ebx, ebx }
	__asm { jle L_00cf20fc }
	__asm { push ebx }
	__asm { push eax }
	__asm { lea eax, [esi + 0x128] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { L_00cf20fc: }
	__asm { mov byte ptr [esi + 0x228], bl }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf4e70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cf2130
extern "C" __declspec(naked) void asm_00cf2130()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00cf2166 }
	__asm { dec dword ptr [eax] }
	__asm { jne L_00cf2166 }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { test edi, edi }
	__asm { je L_00cf2155 }
	__asm { mov ecx, edi }
	__asm { call fn_00cf4e70 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cf2155: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_00cf2166 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cf2166: }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00c6ca60();
extern "C" void fn_00c6cc40();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00cf2190
extern "C" __declspec(naked) void asm_00cf2190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x26c] }
	__asm { call fn_00cf40a0 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00c6ca60 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00cf21c2 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00cf21c2 }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00c6cc40 }
	__asm { L_00cf21c2: }
	__asm { lea ecx, [esi + 0x26c] }
	__asm { call fn_00cf40b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cf3480
extern "C" __declspec(naked) void asm_00cf3480()
{
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00cf34c6 }
	__asm { cmp eax, 1 }
	__asm { jne L_00cf349b }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_00cf34b2 }
	__asm { L_00cf349b: }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { nop }
	__asm { L_00cf34a0: }
	__asm { push esi }
	__asm { mov esi, dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jne L_00cf34a0 }
	__asm { pop esi }
	__asm { L_00cf34b2: }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { L_00cf34c6: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" char g_013164d8[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cf64a0
extern "C" __declspec(naked) void asm_00cf64a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp fn_00cf661e }
	__asm { L_00cf64a9: }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00cf64bd }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00cf64bd: }
	__asm { ret }
	__asm { push esi }
	__asm { jmp L_00cf64d6 }
	__asm { L_00cf64c1: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [g_013164d8], eax }
	__asm { call L_00cf64a9 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { L_00cf64d6: }
	__asm { mov esi, dword ptr [g_013164d8] }
	__asm { test esi, esi }
	__asm { jne L_00cf64c1 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10078[];
extern "C" char g_00e10420[];
extern "C" char g_00e10508[];
extern "C" char g_00e10780[];
extern "C" char g_01320a0c[];
extern "C" char g_01320a10[];
// FUNCTION: ROBLOXSTUDIO 0x00cf651c
extern "C" __declspec(naked) void asm_00cf651c()
{
	__asm { jmp dword ptr [g_00e10420] }
	__asm { jmp dword ptr [g_00e10508] }
	__asm { cmp dword ptr [g_01320a10], 0 }
	__asm { je L_00cf6534 }
	__asm { xor eax, eax }
	__asm { ret }
	__asm { L_00cf6534: }
	__asm { push esi }
	__asm { push 4 }
	__asm { push 0x20 }
	__asm { call dword ptr [g_00e10780] }
	__asm { pop ecx }
	__asm { pop ecx }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e10078] }
	__asm { mov dword ptr [g_01320a10], eax }
	__asm { mov dword ptr [g_01320a0c], eax }
	__asm { test esi, esi }
	__asm { jne L_00cf655d }
	__asm { push 0x18 }
	__asm { pop eax }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00cf655d: }
	__asm { and dword ptr [esi], 0 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf669e();
extern "C" void fn_00cf702c();
// FUNCTION: ROBLOXSTUDIO 0x00cf6624
extern "C" __declspec(naked) void asm_00cf6624()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 2 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00cf6655 }
	__asm { push edi }
	__asm { push 0xcf702c }
	__asm { lea edi, [esi - 4] }
	__asm { push dword ptr [edi] }
	__asm { push 0xc }
	__asm { push esi }
	__asm { call fn_00cf669e }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00cf6650 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { L_00cf6650: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { jmp L_00cf6669 }
	__asm { L_00cf6655: }
	__asm { call fn_00cf702c }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00cf6667 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { L_00cf6667: }
	__asm { mov eax, esi }
	__asm { L_00cf6669: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6fb0();
extern "C" void fn_00cf6ff5();
extern "C" void fn_00cf7032();
// FUNCTION: ROBLOXSTUDIO 0x00cf670d
extern "C" __declspec(naked) void asm_00cf670d()
{
	__asm { push 0x14 }
	__asm { push 0x1178d30 }
	__asm { call fn_00cf6fb0 }
	__asm { and dword ptr [ebp - 4], 0 }
	__asm { L_00cf671d: }
	__asm { dec dword ptr [ebp + 0x10] }
	__asm { js L_00cf675c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { call dword ptr [ebp + 0x14] }
	__asm { jmp L_00cf671d }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { cmp dword ptr [eax], 0xe06d7363 }
	__asm { je L_00cf6754 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { ret }
	__asm { L_00cf6754: }
	__asm { call fn_00cf7032 }
	__asm { mov esp, dword ptr [ebp - 0x18] }
	__asm { L_00cf675c: }
	__asm { mov dword ptr [ebp - 4], 0xfffffffe }
	__asm { call fn_00cf6ff5 }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00d00180
extern "C" __declspec(naked) void asm_00d00180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0x16bc] }
	__asm { cmp eax, 8 }
	__asm { jle L_00d001b4 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { movzx eax, byte ptr [esi + 0x16b8] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { movzx eax, byte ptr [esi + 0x16b9] }
	__asm { jmp L_00d001c4 }
	__asm { L_00d001b4: }
	__asm { test eax, eax }
	__asm { jle L_00d001ca }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov al, byte ptr [esi + 0x16b8] }
	__asm { L_00d001c4: }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { L_00d001ca: }
	__asm { xor eax, eax }
	__asm { mov word ptr [esi + 0x16b8], ax }
	__asm { mov dword ptr [esi + 0x16bc], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00d02490
extern "C" __declspec(naked) void asm_00d02490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xf10df0 }
	__asm { mov dword ptr [esi + 0x18], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00d024bc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00d024bc }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { L_00d024bc: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00d024d3 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d024d3: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cfd260();
extern "C" void fn_00cfd590();
extern "C" void fn_00cff670();
extern "C" void fn_00cff860();
// FUNCTION: ROBLOXSTUDIO 0x00d02750
extern "C" __declspec(naked) void asm_00d02750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { push eax }
	__asm { je L_00d02787 }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_00d02776 }
	__asm { call fn_00cfd590 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00d02776: }
	__asm { call fn_00cff860 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00d02787: }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_00d0279e }
	__asm { call fn_00cfd260 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00d0279e: }
	__asm { call fn_00cff670 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_011dc520[];
extern "C" char g_011dc530[];
extern "C" char g_011dc534[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0980
extern "C" __declspec(naked) void asm_00de0980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011dc534], 8 }
	__asm { jb L_00de09bb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011dc520] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11dc520 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de09bb: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_011dc534], 7 }
	__asm { mov dword ptr [g_011dc530], 0 }
	__asm { mov word ptr [g_011dc520], ax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011dc5f8[];
extern "C" char g_011dc608[];
extern "C" char g_011dc60c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0a60
extern "C" __declspec(naked) void asm_00de0a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011dc60c], 8 }
	__asm { jb L_00de0a9b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011dc5f8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11dc5f8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de0a9b: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_011dc60c], 7 }
	__asm { mov dword ptr [g_011dc608], 0 }
	__asm { mov word ptr [g_011dc5f8], ax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
