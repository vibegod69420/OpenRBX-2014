// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_009f1160();
extern "C" void fn_00c2cf50();
// FUNCTION: ROBLOXSTUDIO 0x009ec970
extern "C" __declspec(naked) void asm_009ec970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_009ec999 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c2cf50 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_009ec999 }
	__asm { push 0xe9847c }
	__asm { push esi }
	__asm { call fn_009f1160 }
	__asm { add esp, 8 }
	__asm { L_009ec999: }
	__asm { lea eax, [esi + 0x64] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009ef170();
// FUNCTION: ROBLOXSTUDIO 0x009ee770
extern "C" __declspec(naked) void asm_009ee770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009ee793 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009ef170 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009ee793: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12433a8 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009ef2a0();
// FUNCTION: ROBLOXSTUDIO 0x009ee810
extern "C" __declspec(naked) void asm_009ee810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_009ee833 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009ef2a0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_009ee833: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1243100 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_009f1280();
// FUNCTION: ROBLOXSTUDIO 0x009f1250
extern "C" __declspec(naked) void asm_009f1250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { jb L_009f1261 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_009f1261: }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { call fn_009f1280 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380b8[];
extern "C" void fn_007beab0();
// FUNCTION: ROBLOXSTUDIO 0x009f2130
extern "C" __declspec(naked) void asm_009f2130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fsub dword ptr [ebp + 0xc] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_007beab0 }
	__asm { fmul dword ptr [g_010380b8] }
	__asm { fadd dword ptr [ebp + 0xc] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_007beab0 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d20b0();
extern "C" void fn_006d2c10();
// FUNCTION: ROBLOXSTUDIO 0x009f4440
extern "C" __declspec(naked) void asm_009f4440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0x48 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_006d2c10 }
	__asm { mov ecx, eax }
	__asm { call fn_006d20b0 }
	__asm { mov ecx, eax }
	__asm { call fn_006d20b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d20b0();
extern "C" void fn_006d2c10();
// FUNCTION: ROBLOXSTUDIO 0x009f4480
extern "C" __declspec(naked) void asm_009f4480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0x48 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_006d2c10 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_006d20b0 }
	__asm { mov ecx, eax }
	__asm { call fn_006d20b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00892d80();
extern "C" void fn_009f8cf0();
// FUNCTION: ROBLOXSTUDIO 0x009f8e40
extern "C" __declspec(naked) void asm_009f8e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { add ecx, 0xffffff78 }
	__asm { call fn_009f8cf0 }
	__asm { test eax, eax }
	__asm { je L_009f8e63 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { call fn_00892d80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_009f8e63: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009f8f40
extern "C" __declspec(naked) void asm_009f8f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009f8f52 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009f8f54 }
	__asm { L_009f8f52: }
	__asm { xor edx, edx }
	__asm { L_009f8f54: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edx + 0x8c] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x8c }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_009f9970();
// FUNCTION: ROBLOXSTUDIO 0x009f9a60
extern "C" __declspec(naked) void asm_009f9a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { lea eax, [esi + 0xa4] }
	__asm { push eax }
	__asm { call fn_006d19a0 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_009f9970 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x009f9f70
extern "C" __declspec(naked) void asm_009f9f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009f9f82 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009f9f84 }
	__asm { L_009f9f82: }
	__asm { xor edx, edx }
	__asm { L_009f9f84: }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [edx + 0x8c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x8c }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x009f9fb0
extern "C" __declspec(naked) void asm_009f9fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_009f9fc2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_009f9fc4 }
	__asm { L_009f9fc2: }
	__asm { xor edx, edx }
	__asm { L_009f9fc4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx + 0x8c] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x8c }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009fb4e0();
// FUNCTION: ROBLOXSTUDIO 0x009fb9b0
extern "C" __declspec(naked) void asm_009fb9b0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_009fb4e0 }
	__asm { mov dword ptr [esi], 0xe9ab84 }
	__asm { mov dword ptr [esi + 4], 0xe9ac08 }
	__asm { mov dword ptr [esi + 0x18], 0xe9ac10 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9ac1c }
	__asm { mov dword ptr [esi + 0x64], 0xe9ac2c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_009fb5a0();
// FUNCTION: ROBLOXSTUDIO 0x009fb9e0
extern "C" __declspec(naked) void asm_009fb9e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_009fb5a0 }
	__asm { mov dword ptr [esi], 0xe9ad24 }
	__asm { mov dword ptr [esi + 4], 0xe9ada8 }
	__asm { mov dword ptr [esi + 0x18], 0xe9adb0 }
	__asm { mov dword ptr [esi + 0x1c], 0xe9adbc }
	__asm { mov dword ptr [esi + 0x64], 0xe9adcc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_009d9c50();
extern "C" void fn_00c2bee0();
// FUNCTION: ROBLOXSTUDIO 0x009fbff0
extern "C" __declspec(naked) void asm_009fbff0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00c2bee0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_009fc019 }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_009d9c50 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009fc019 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0x78] }
	__asm { L_009fc019: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x009fc620
extern "C" __declspec(naked) void asm_009fc620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { lea esi, [ecx + 0x68] }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a00540();
// FUNCTION: ROBLOXSTUDIO 0x00a003a0
extern "C" __declspec(naked) void asm_00a003a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a003c3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a00540 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a003c3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x1249d60 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124a968[];
extern "C" void fn_006f1040();
// FUNCTION: ROBLOXSTUDIO 0x00a064c0
extern "C" __declspec(naked) void asm_00a064c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov byte ptr [esi + 2], al }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { mov byte ptr [esi + 3], al }
	__asm { mov word ptr [esi], 0x100 }
	__asm { cmp byte ptr [g_0124a968], 0 }
	__asm { je L_00a064f5 }
	__asm { call fn_006f1040 }
	__asm { cmp byte ptr [eax + 0xc], 0 }
	__asm { mov eax, esi }
	__asm { je L_00a064f7 }
	__asm { mov byte ptr [esi], 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00a064f5: }
	__asm { mov eax, esi }
	__asm { L_00a064f7: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b5cfb0();
// FUNCTION: ROBLOXSTUDIO 0x00a0f5d0
extern "C" __declspec(naked) void asm_00a0f5d0()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { call fn_00b5cfb0 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012fc99e[];
extern "C" void fn_006b8a90();
extern "C" void fn_00a0fad0();
// FUNCTION: ROBLOXSTUDIO 0x00a0fb50
extern "C" __declspec(naked) void asm_00a0fb50()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { jne L_00a0fb83 }
	__asm { mov al, byte ptr [g_012fc99e] }
	__asm { test al, al }
	__asm { je L_00a0fb74 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe9e5c0 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00a0fb74: }
	__asm { mov dword ptr [esi + 0xc], 0x1e }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_00a0fad0 }
	__asm { L_00a0fb83: }
	__asm { mov dword ptr [esi + 0xc], 0x1e }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00a10530();
// FUNCTION: ROBLOXSTUDIO 0x00a105e0
extern "C" __declspec(naked) void asm_00a105e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00a10530 }
	__asm { mov eax, dword ptr [esi + 0x9c] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esi + 0xa0] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [esi + 0xa4] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xa8] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10194[];
extern "C" void fn_006bb4a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a1bc70
extern "C" __declspec(naked) void asm_00a1bc70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi], 0xea3c1c }
	__asm { lea eax, [esi + 0x2c] }
	__asm { xchg dword ptr [eax], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00a1bc8e }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10194] }
	__asm { L_00a1bc8e: }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_006bb4a0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a1bca5 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a1bca5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a24350
extern "C" __declspec(naked) void asm_00a24350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe33a28 }
	__asm { je L_00a24376 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a24376: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a24a60
extern "C" __declspec(naked) void asm_00a24a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a24a72 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a24a74 }
	__asm { L_00a24a72: }
	__asm { xor edx, edx }
	__asm { L_00a24a74: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push 1 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a24aa0
extern "C" __declspec(naked) void asm_00a24aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a24ab2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a24ab4 }
	__asm { L_00a24ab2: }
	__asm { xor edx, edx }
	__asm { L_00a24ab4: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push 2 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a24ae0
extern "C" __declspec(naked) void asm_00a24ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a24af2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a24af4 }
	__asm { L_00a24af2: }
	__asm { xor edx, edx }
	__asm { L_00a24af4: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push 3 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a24b20
extern "C" __declspec(naked) void asm_00a24b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a24b32 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a24b34 }
	__asm { L_00a24b32: }
	__asm { xor edx, edx }
	__asm { L_00a24b34: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push 4 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a24b60
extern "C" __declspec(naked) void asm_00a24b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a24b72 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a24b74 }
	__asm { L_00a24b72: }
	__asm { xor edx, edx }
	__asm { L_00a24b74: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push 5 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a24ba0
extern "C" __declspec(naked) void asm_00a24ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a24bb2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a24bb4 }
	__asm { L_00a24bb2: }
	__asm { xor edx, edx }
	__asm { L_00a24bb4: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007ddd30();
extern "C" void fn_007e9680();
// FUNCTION: ROBLOXSTUDIO 0x00a24be0
extern "C" __declspec(naked) void asm_00a24be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_007e9680 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007ddd30 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007dca10();
extern "C" void fn_008247c0();
// FUNCTION: ROBLOXSTUDIO 0x00a24c10
extern "C" __declspec(naked) void asm_00a24c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_008247c0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007dca10 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a24c40
extern "C" __declspec(naked) void asm_00a24c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, 0x1307378 }
	__asm { jne L_00a24c51 }
	__asm { L_00a24c4d: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a24c51: }
	__asm { cmp eax, 0x1307430 }
	__asm { je L_00a24c4d }
	__asm { cmp eax, 0x13074e8 }
	__asm { je L_00a24c4d }
	__asm { cmp eax, 0x13075a0 }
	__asm { je L_00a24c4d }
	__asm { cmp eax, 0x1307658 }
	__asm { je L_00a24c4d }
	__asm { cmp eax, 0x1307710 }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a25640
extern "C" __declspec(naked) void asm_00a25640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a25652 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a25654 }
	__asm { L_00a25652: }
	__asm { xor edx, edx }
	__asm { L_00a25654: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { push 1 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a256c0
extern "C" __declspec(naked) void asm_00a256c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a256d2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a256d4 }
	__asm { L_00a256d2: }
	__asm { xor edx, edx }
	__asm { L_00a256d4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { push 2 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a25740
extern "C" __declspec(naked) void asm_00a25740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a25752 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a25754 }
	__asm { L_00a25752: }
	__asm { xor edx, edx }
	__asm { L_00a25754: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { push 3 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a257c0
extern "C" __declspec(naked) void asm_00a257c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a257d2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a257d4 }
	__asm { L_00a257d2: }
	__asm { xor edx, edx }
	__asm { L_00a257d4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { push 4 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a25840
extern "C" __declspec(naked) void asm_00a25840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a25852 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a25854 }
	__asm { L_00a25852: }
	__asm { xor edx, edx }
	__asm { L_00a25854: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { push 5 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a258c0
extern "C" __declspec(naked) void asm_00a258c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00a258d2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00a258d4 }
	__asm { L_00a258d2: }
	__asm { xor edx, edx }
	__asm { L_00a258d4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x1c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a27c20();
// FUNCTION: ROBLOXSTUDIO 0x00a28c40
extern "C" __declspec(naked) void asm_00a28c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a27c20 }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a29c40();
extern "C" void fn_00a2d350();
// FUNCTION: ROBLOXSTUDIO 0x00a29440
extern "C" __declspec(naked) void asm_00a29440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00a2d350 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
}

extern "C" void fn_00a29c40();
extern "C" void fn_00a2d390();
// FUNCTION: ROBLOXSTUDIO 0x00a29be0
extern "C" __declspec(naked) void asm_00a29be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00a2d390 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
}

extern "C" void fn_00a29c40();
extern "C" void fn_00a2d3d0();
// FUNCTION: ROBLOXSTUDIO 0x00a29d70
extern "C" __declspec(naked) void asm_00a29d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f5a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00a2d3d0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00a29c40 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00a2bad0
extern "C" __declspec(naked) void asm_00a2bad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi], 0xe844fc }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [edi], 0xea5ac0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a2cb30
extern "C" __declspec(naked) void asm_00a2cb30()
{
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { cmp eax, 1 }
	__asm { jne L_00a2cb4f }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test al, 2 }
	__asm { jne L_00a2cb68 }
	__asm { or eax, 2 }
	__asm { mov dword ptr [ecx + 0x38], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 0x40] }
	__asm { ret }
	__asm { L_00a2cb4f: }
	__asm { cmp eax, 2 }
	__asm { jne L_00a2cb68 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test al, 4 }
	__asm { jne L_00a2cb68 }
	__asm { or eax, 4 }
	__asm { mov dword ptr [ecx + 0x38], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 2 }
	__asm { call dword ptr [eax + 0x40] }
	__asm { L_00a2cb68: }
	__asm { ret }
}

extern "C" char g_00e102c8[];
extern "C" void fn_00a2c100();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2cea0
extern "C" __declspec(naked) void asm_00a2cea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00a2c100 }
	__asm { lea ecx, [esi + 0x28] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a2cec3 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2cec3: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e102c8[];
extern "C" void fn_00a2c1d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a2ced0
extern "C" __declspec(naked) void asm_00a2ced0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00a2c1d0 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { call dword ptr [g_00e102c8] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a2cef3 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a2cef3: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a2ba10();
// FUNCTION: ROBLOXSTUDIO 0x00a2d230
extern "C" __declspec(naked) void asm_00a2d230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 0xea5aa8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0xc], 1 }
	__asm { mov dword ptr [ebp - 8], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2ba10();
// FUNCTION: ROBLOXSTUDIO 0x00a2d350
extern "C" __declspec(naked) void asm_00a2d350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 0xea5a74 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0xc], 1 }
	__asm { mov dword ptr [ebp - 8], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2ba10();
// FUNCTION: ROBLOXSTUDIO 0x00a2d390
extern "C" __declspec(naked) void asm_00a2d390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 0xea5a94 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0xc], 1 }
	__asm { mov dword ptr [ebp - 8], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a2ba10();
// FUNCTION: ROBLOXSTUDIO 0x00a2d3d0
extern "C" __declspec(naked) void asm_00a2d3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push 0xea5a84 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0xc], 1 }
	__asm { mov dword ptr [ebp - 8], 0x12d9714 }
	__asm { call fn_00a2ba10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102e8[];
extern "C" void fn_00a27430();
// FUNCTION: ROBLOXSTUDIO 0x00a2d940
extern "C" __declspec(naked) void asm_00a2d940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jne L_00a2d96f }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e102e8] }
	__asm { mov eax, dword ptr [esi + 0xd0] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { push 1 }
	__asm { lea eax, [ebp + 8] }
	__asm { lea ecx, [esi + 0x40] }
	__asm { push eax }
	__asm { call fn_00a27430 }
	__asm { L_00a2d96f: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104d8[];
// FUNCTION: ROBLOXSTUDIO 0x00a2ef40
extern "C" __declspec(naked) void asm_00a2ef40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ecx + 0xf0], 1 }
	__asm { je L_00a2ef7b }
	__asm { mov ecx, dword ptr [ecx + 0xd0] }
	__asm { test ecx, ecx }
	__asm { je L_00a2ef7b }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e104d8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a2ef7b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00a2ef7b }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00a2ef7b: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104d8[];
// FUNCTION: ROBLOXSTUDIO 0x00a2ef80
extern "C" __declspec(naked) void asm_00a2ef80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ecx + 0x60], 1 }
	__asm { je L_00a2efb5 }
	__asm { mov ecx, dword ptr [ecx + 0x40] }
	__asm { test ecx, ecx }
	__asm { je L_00a2efb5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e104d8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a2efb5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00a2efb5 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00a2efb5: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104d8[];
// FUNCTION: ROBLOXSTUDIO 0x00a2efc0
extern "C" __declspec(naked) void asm_00a2efc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ecx + 0x68], 1 }
	__asm { je L_00a2eff5 }
	__asm { mov ecx, dword ptr [ecx + 0x48] }
	__asm { test ecx, ecx }
	__asm { je L_00a2eff5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e104d8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a2eff5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00a2eff5 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00a2eff5: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10314[];
// FUNCTION: ROBLOXSTUDIO 0x00a2f030
extern "C" __declspec(naked) void asm_00a2f030()
{
	__asm { mov eax, dword ptr [ecx + 0xa0] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2f053 }
	__asm { mov edx, dword ptr [ecx + 0x88] }
	__asm { mov eax, dword ptr [ecx + 0x90] }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push edx }
	__asm { call dword ptr [g_00e10314] }
	__asm { ret }
	__asm { L_00a2f053: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10314] }
	__asm { ret }
}

extern "C" char g_00e10314[];
// FUNCTION: ROBLOXSTUDIO 0x00a2f060
extern "C" __declspec(naked) void asm_00a2f060()
{
	__asm { mov eax, dword ptr [ecx + 0xf0] }
	__asm { shr eax, 1 }
	__asm { test al, 1 }
	__asm { je L_00a2f083 }
	__asm { mov edx, dword ptr [ecx + 0xd8] }
	__asm { mov eax, dword ptr [ecx + 0xe0] }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push edx }
	__asm { call dword ptr [g_00e10314] }
	__asm { ret }
	__asm { L_00a2f083: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10314] }
	__asm { ret }
}

extern "C" char g_00e104dc[];
// FUNCTION: ROBLOXSTUDIO 0x00a2f240
extern "C" __declspec(naked) void asm_00a2f240()
{
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { jne L_00a2f25e }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add ecx, 8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { call dword ptr [g_00e104dc] }
	__asm { ret }
	__asm { L_00a2f25e: }
	__asm { mov eax, dword ptr [eax] }
	__asm { add ecx, 8 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { call dword ptr [g_00e104dc] }
	__asm { ret }
}

extern "C" char g_00e104dc[];
// FUNCTION: ROBLOXSTUDIO 0x00a2f280
extern "C" __declspec(naked) void asm_00a2f280()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { jne L_00a2f29e }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add ecx, 8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { call dword ptr [g_00e104dc] }
	__asm { ret }
	__asm { L_00a2f29e: }
	__asm { mov eax, dword ptr [eax] }
	__asm { add ecx, 8 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add ecx, eax }
	__asm { call dword ptr [g_00e104dc] }
	__asm { ret }
}

extern "C" void fn_0052dc90();
// FUNCTION: ROBLOXSTUDIO 0x00a315e0
extern "C" __declspec(naked) void asm_00a315e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 0x34] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [eax + 0x30] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_0052dc90 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104d8[];
// FUNCTION: ROBLOXSTUDIO 0x00a33450
extern "C" __declspec(naked) void asm_00a33450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ecx + 0x60], 1 }
	__asm { je L_00a33485 }
	__asm { mov ecx, dword ptr [ecx + 0x44] }
	__asm { test ecx, ecx }
	__asm { je L_00a33485 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e104d8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00a33485 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00a33485 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_00a33485: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a365b0();
// FUNCTION: ROBLOXSTUDIO 0x00a34d20
extern "C" __declspec(naked) void asm_00a34d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { lea ecx, [ecx + 1] }
	__asm { shl ecx, 4 }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a365b0 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp + 0x10], -1 }
	__asm { jne L_00a34d56 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { cmp ecx, dword ptr [eax + 8] }
	__asm { jb L_00a34d56 }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { L_00a34d56: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bcab60();
// FUNCTION: ROBLOXSTUDIO 0x00a34e90
extern "C" __declspec(naked) void asm_00a34e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp dword ptr [eax - 8], 6 }
	__asm { jne L_00a34ebe }
	__asm { mov eax, dword ptr [eax - 0x10] }
	__asm { cmp byte ptr [eax + 6], 0 }
	__asm { jne L_00a34ebe }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [eax + 0x10] }
	__asm { push ecx }
	__asm { call fn_00bcab60 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a34ebe: }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00bcc670();
// FUNCTION: ROBLOXSTUDIO 0x00a35120
extern "C" __declspec(naked) void asm_00a35120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { add ecx, -0x10 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bcc670 }
	__asm { add esp, 0x18 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
// FUNCTION: ROBLOXSTUDIO 0x00a35220
extern "C" __declspec(naked) void asm_00a35220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a34c10 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [eax + 8], 6 }
	__asm { jne L_00a35246 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp byte ptr [eax + 6], 0 }
	__asm { je L_00a35246 }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a35246: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00bcc910();
// FUNCTION: ROBLOXSTUDIO 0x00a35250
extern "C" __declspec(naked) void asm_00a35250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a34c10 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [eax + 8], 3 }
	__asm { je L_00a3527f }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00bcc910 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00a3527f }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3527f: }
	__asm { mov eax, 1 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
// FUNCTION: ROBLOXSTUDIO 0x00a35290
extern "C" __declspec(naked) void asm_00a35290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a34c10 }
	__asm { add esp, 8 }
	__asm { cmp eax, 0xea7e68 }
	__asm { je L_00a352bc }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { cmp eax, 4 }
	__asm { je L_00a352b5 }
	__asm { cmp eax, 3 }
	__asm { jne L_00a352bc }
	__asm { L_00a352b5: }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a352bc: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36a80();
extern "C" void fn_00bca5b0();
// FUNCTION: ROBLOXSTUDIO 0x00a35310
extern "C" __declspec(naked) void asm_00a35310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x14 }
	__asm { test eax, eax }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov edi, 0x101eb04 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { cmovne edi, eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bca5b0 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a36a80 }
	__asm { add esp, 0x1c }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00bc9b40();
// FUNCTION: ROBLOXSTUDIO 0x00a35440
extern "C" __declspec(naked) void asm_00a35440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { sub ecx, 0x10 }
	__asm { push ecx }
	__asm { push dword ptr [eax] }
	__asm { push esi }
	__asm { call fn_00bc9b40 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00a3546d }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3546d: }
	__asm { add dword ptr [esi + 8], -0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a45800();
extern "C" void fn_00bc7100();
// FUNCTION: ROBLOXSTUDIO 0x00a35620
extern "C" __declspec(naked) void asm_00a35620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { cmp eax, dword ptr [ecx + 0x40] }
	__asm { jb L_00a3563b }
	__asm { push esi }
	__asm { call fn_00bc7100 }
	__asm { add esp, 4 }
	__asm { L_00a3563b: }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a45800 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
// FUNCTION: ROBLOXSTUDIO 0x00a357b0
extern "C" __declspec(naked) void asm_00a357b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a45800();
extern "C" void fn_00bc7100();
// FUNCTION: ROBLOXSTUDIO 0x00a357e0
extern "C" __declspec(naked) void asm_00a357e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { cmp eax, dword ptr [ecx + 0x40] }
	__asm { jb L_00a357fb }
	__asm { push esi }
	__asm { call fn_00bc7100 }
	__asm { add esp, 4 }
	__asm { L_00a357fb: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a45800 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00bc98e0();
// FUNCTION: ROBLOXSTUDIO 0x00a35850
extern "C" __declspec(naked) void asm_00a35850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { sub ecx, 0x10 }
	__asm { push ecx }
	__asm { push dword ptr [eax] }
	__asm { call fn_00bc98e0 }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx - 0x10], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [edx - 0xc], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx - 8], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00bc9a00();
// FUNCTION: ROBLOXSTUDIO 0x00a35890
extern "C" __declspec(naked) void asm_00a35890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00bc9a00 }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { add dword ptr [esi + 8], 0x10 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00bcc7e0();
// FUNCTION: ROBLOXSTUDIO 0x00a35ce0
extern "C" __declspec(naked) void asm_00a35ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a34c10 }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { lea ecx, [edx - 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [edx - 0x20] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bcc7e0 }
	__asm { add esp, 0x18 }
	__asm { add dword ptr [esi + 8], -0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
// FUNCTION: ROBLOXSTUDIO 0x00a35df0
extern "C" __declspec(naked) void asm_00a35df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a34c10 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add esp, 8 }
	__asm { test ecx, ecx }
	__asm { je L_00a35e19 }
	__asm { cmp ecx, 1 }
	__asm { jne L_00a35e12 }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_00a35e19 }
	__asm { L_00a35e12: }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a35e19: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
extern "C" void fn_00bcc910();
// FUNCTION: ROBLOXSTUDIO 0x00a35fd0
extern "C" __declspec(naked) void asm_00a35fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a34c10 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [eax + 8], 3 }
	__asm { je L_00a36001 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00bcc910 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00a36001 }
	__asm { fldz }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a36001: }
	__asm { fld qword ptr [eax] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a34c10();
// FUNCTION: ROBLOXSTUDIO 0x00a360a0
extern "C" __declspec(naked) void asm_00a360a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a34c10 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { add esp, 8 }
	__asm { sub ecx, 2 }
	__asm { je L_00a360c9 }
	__asm { sub ecx, 5 }
	__asm { je L_00a360c2 }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a360c2: }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, 0x18 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a360c9: }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36c30();
// FUNCTION: ROBLOXSTUDIO 0x00a36700
extern "C" __declspec(naked) void asm_00a36700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { cmp edx, eax }
	__asm { jg L_00a3671e }
	__asm { add eax, eax }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { pop ebp }
	__asm { jmp fn_00a36c30 }
	__asm { L_00a3671e: }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { pop ebp }
	__asm { jmp fn_00a36c30 }
}

extern "C" void fn_00a379c0();
// FUNCTION: ROBLOXSTUDIO 0x00a36e40
extern "C" __declspec(naked) void asm_00a36e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ax, word ptr [esi + 0x34] }
	__asm { cmp ax, word ptr [esi + 0x36] }
	__asm { jbe L_00a36e5f }
	__asm { push 0xea6f44 }
	__asm { push esi }
	__asm { call fn_00a379c0 }
	__asm { add esp, 8 }
	__asm { L_00a36e5f: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { shl ecx, 4 }
	__asm { sub eax, ecx }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov byte ptr [esi + 6], 1 }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a37800
extern "C" __declspec(naked) void asm_00a37800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, 0x100 }
	__asm { je L_00a3782b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { and ecx, 0xfffffeff }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { add ecx, ecx }
	__asm { cmp dword ptr [eax + ecx*8 + 8], 4 }
	__asm { jne L_00a3782b }
	__asm { mov eax, dword ptr [eax + ecx*8] }
	__asm { add eax, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3782b: }
	__asm { mov eax, 0x101eb04 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a379f0();
extern "C" void fn_00bcc910();
// FUNCTION: ROBLOXSTUDIO 0x00a37840
extern "C" __declspec(naked) void asm_00a37840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00bcc910 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { cmove ecx, dword ptr [ebp + 0xc] }
	__asm { push 0xea7000 }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a379f0 }
	__asm { add esp, 0x14 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a37130();
extern "C" void fn_00a378d0();
extern "C" void fn_00a45800();
// FUNCTION: ROBLOXSTUDIO 0x00a379c0
extern "C" __declspec(naked) void asm_00a379c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a45800 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a37130 }
	__asm { push esi }
	__asm { call fn_00a378d0 }
	__asm { add esp, 0x18 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a37c30
extern "C" __declspec(naked) void asm_00a37c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00a37c41 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { test edx, edx }
	__asm { jne L_00a37c45 }
	__asm { L_00a37c41: }
	__asm { xor edx, edx }
	__asm { xor eax, eax }
	__asm { L_00a37c45: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x44], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0x3c], eax }
	__asm { mov dword ptr [ecx + 0x40], eax }
	__asm { mov byte ptr [ecx + 0x38], dl }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" char g_00e10638[];
// FUNCTION: ROBLOXSTUDIO 0x00a38350
extern "C" __declspec(naked) void asm_00a38350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { jne L_00a3836a }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3836a: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e10638] }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a360d0();
extern "C" void fn_00a385a0();
// FUNCTION: ROBLOXSTUDIO 0x00a38710
extern "C" __declspec(naked) void asm_00a38710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { cmp eax, -1 }
	__asm { jne L_00a38739 }
	__asm { push 0xea710c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0xc }
	__asm { L_00a38739: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a360d0();
extern "C" void fn_00a38740();
// FUNCTION: ROBLOXSTUDIO 0x00a39050
extern "C" __declspec(naked) void asm_00a39050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jg L_00a3906a }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a3906a: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38740 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a360d0();
extern "C" void fn_00a38810();
// FUNCTION: ROBLOXSTUDIO 0x00a390e0
extern "C" __declspec(naked) void asm_00a390e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a360d0 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jg L_00a390fa }
	__asm { fld qword ptr [ebp + 0x10] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a390fa: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a38810 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35690();
extern "C" void fn_00a381e0();
// FUNCTION: ROBLOXSTUDIO 0x00a39110
extern "C" __declspec(naked) void asm_00a39110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { sub eax, edi }
	__asm { sub eax, 0xc }
	__asm { je L_00a3913d }
	__asm { push esi }
	__asm { push eax }
	__asm { lea esi, [edi + 0xc] }
	__asm { push esi }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00a35690 }
	__asm { inc dword ptr [edi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00a381e0 }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { L_00a3913d: }
	__asm { lea eax, [edi + 0xc] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35620();
extern "C" void fn_00a360d0();
extern "C" void fn_00a36100();
extern "C" void fn_00a385a0();
// FUNCTION: ROBLOXSTUDIO 0x00a39260
extern "C" __declspec(naked) void asm_00a39260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a360d0 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a36100 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push 0xea70c4 }
	__asm { push esi }
	__asm { call fn_00a35620 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a385a0 }
	__asm { add esp, 0x2c }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10644[];
extern "C" char g_00e106d4[];
extern "C" void fn_00a35e70();
// FUNCTION: ROBLOXSTUDIO 0x00a39370
extern "C" __declspec(naked) void asm_00a39370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push -1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a35e70 }
	__asm { add esp, 0xc }
	__asm { push eax }
	__asm { push 0xea717c }
	__asm { call dword ptr [g_00e106d4] }
	__asm { add eax, 0x40 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10644] }
	__asm { add esp, 0xc }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac8[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a416f0
extern "C" __declspec(naked) void asm_00a416f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea71d0 }
	__asm { push dword ptr [g_0124eac8] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead0[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a41720
extern "C" __declspec(naked) void asm_00a41720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea71e0 }
	__asm { push dword ptr [g_0124ead0] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead4[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a41750
extern "C" __declspec(naked) void asm_00a41750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea7278 }
	__asm { push dword ptr [g_0124ead4] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb28[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a41780
extern "C" __declspec(naked) void asm_00a41780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea7308 }
	__asm { push dword ptr [g_0124eb28] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eacc[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a417b0
extern "C" __declspec(naked) void asm_00a417b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea7250 }
	__asm { push dword ptr [g_0124eacc] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eac4[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a417e0
extern "C" __declspec(naked) void asm_00a417e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea71c0 }
	__asm { push dword ptr [g_0124eac4] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb1c[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a41810
extern "C" __declspec(naked) void asm_00a41810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea72d8 }
	__asm { push dword ptr [g_0124eb1c] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124ead8[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a41840
extern "C" __declspec(naked) void asm_00a41840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea7288 }
	__asm { push dword ptr [g_0124ead8] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eadc[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a41870
extern "C" __declspec(naked) void asm_00a41870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea7298 }
	__asm { push dword ptr [g_0124eadc] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb30[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a418a0
extern "C" __declspec(naked) void asm_00a418a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea71b0 }
	__asm { push dword ptr [g_0124eb30] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb2c[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a418d0
extern "C" __declspec(naked) void asm_00a418d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea7318 }
	__asm { push dword ptr [g_0124eb2c] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb20[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a41900
extern "C" __declspec(naked) void asm_00a41900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea72e8 }
	__asm { push dword ptr [g_0124eb20] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb24[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a41930
extern "C" __declspec(naked) void asm_00a41930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea72f8 }
	__asm { push dword ptr [g_0124eb24] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb14[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a41960
extern "C" __declspec(naked) void asm_00a41960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea72a8 }
	__asm { push dword ptr [g_0124eb14] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0124eb18[];
extern "C" void fn_00a35cc0();
extern "C" void fn_00a35d10();
extern "C" void fn_00a39240();
// FUNCTION: ROBLOXSTUDIO 0x00a41990
extern "C" __declspec(naked) void asm_00a41990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xea72c8 }
	__asm { push dword ptr [g_0124eb18] }
	__asm { push esi }
	__asm { call fn_00a39240 }
	__asm { push 1 }
	__asm { push -1 }
	__asm { push esi }
	__asm { call fn_00a35cc0 }
	__asm { push -2 }
	__asm { push esi }
	__asm { call fn_00a35d10 }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a35690();
// FUNCTION: ROBLOXSTUDIO 0x00a44290
extern "C" __declspec(naked) void asm_00a44290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { jb L_00a442a7 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a442a7: }
	__asm { push edx }
	__asm { push eax }
	__asm { push dword ptr [ecx] }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403a30();
extern "C" void fn_00a35690();
// FUNCTION: ROBLOXSTUDIO 0x00a442c0
extern "C" __declspec(naked) void asm_00a442c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00403a30 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { jb L_00a442d9 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00a442d9: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { call fn_00a35690 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00a455a0
extern "C" __declspec(naked) void asm_00a455a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x124eb38 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_00a455c0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a455c0: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043ed80();
extern "C" void fn_00825140();
extern "C" void fn_00a43960();
// FUNCTION: ROBLOXSTUDIO 0x00a455e0
extern "C" __declspec(naked) void asm_00a455e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { call fn_00825140 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { je L_00a455fd }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a455fd: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a43960 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a51240
extern "C" __declspec(naked) void asm_00a51240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0xeaa350 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov dword ptr [ecx], 0xeaa3b0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a51280
extern "C" __declspec(naked) void asm_00a51280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0xeaa350 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov dword ptr [ecx], 0xeaa390 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a512c0
extern "C" __declspec(naked) void asm_00a512c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0xeaa350 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov dword ptr [ecx], 0xeaa3a0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a51450
extern "C" __declspec(naked) void asm_00a51450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0xeaa350 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov dword ptr [ecx], 0xeaa3c0 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a51490
extern "C" __declspec(naked) void asm_00a51490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0xeaa350 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov dword ptr [ecx], 0xeaa370 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a51520
extern "C" __declspec(naked) void asm_00a51520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], 0xeaa350 }
	__asm { mov dword ptr [ecx + 0x14], 0 }
	__asm { mov dword ptr [ecx + 0x18], 0 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov dword ptr [ecx], 0xeaa380 }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00a53950
extern "C" __declspec(naked) void asm_00a53950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push 0 }
	__asm { push 0x11f9cd4 }
	__asm { push 0x11f9cf4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00a53981 }
	__asm { mov eax, dword ptr [eax + 0xe0] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a53981: }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00d08c90();
// FUNCTION: ROBLOXSTUDIO 0x00a53ba0
extern "C" __declspec(naked) void asm_00a53ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x1c], 0 }
	__asm { jne L_00a53bc8 }
	__asm { cmp byte ptr [esi + 0x19], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x1c], ecx }
	__asm { jne L_00a53bc8 }
	__asm { mov ecx, dword ptr [ecx + 0x178] }
	__asm { push esi }
	__asm { call fn_00d08c90 }
	__asm { mov byte ptr [esi + 0x19], 1 }
	__asm { L_00a53bc8: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00a56030
extern "C" __declspec(naked) void asm_00a56030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub eax, 0 }
	__asm { je L_00a56056 }
	__asm { dec eax }
	__asm { je L_00a5604f }
	__asm { dec eax }
	__asm { je L_00a56048 }
	__asm { mov eax, 6 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a56048: }
	__asm { mov eax, 2 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a5604f: }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a56056: }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00a57770
extern "C" __declspec(naked) void asm_00a57770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_00a57781 }
	__asm { add eax, -0x1c }
	__asm { jmp L_00a57783 }
	__asm { L_00a57781: }
	__asm { xor eax, eax }
	__asm { L_00a57783: }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00a58050
extern "C" __declspec(naked) void asm_00a58050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0xe8] }
	__asm { mov dl, byte ptr [ebp + 8] }
	__asm { cmp byte ptr [eax + 0x98], dl }
	__asm { je L_00a58077 }
	__asm { mov byte ptr [eax + 0x98], dl }
	__asm { mov dword ptr [ebp + 8], 0x1307d14 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00a58077: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00d09250();
// FUNCTION: ROBLOXSTUDIO 0x00a58080
extern "C" __declspec(naked) void asm_00a58080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x120], al }
	__asm { je L_00a580a9 }
	__asm { push 0x1307cbc }
	__asm { mov byte ptr [esi + 0x120], al }
	__asm { call fn_007b4f50 }
	__asm { lea ecx, [esi + 0x68] }
	__asm { call fn_00d09250 }
	__asm { L_00a580a9: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008d1da0();
// FUNCTION: ROBLOXSTUDIO 0x00a58d60
extern "C" __declspec(naked) void asm_00a58d60()
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
	__asm { je L_00a58d88 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov al, byte ptr [edx + 4] }
	__asm { mov byte ptr [edi + 4], al }
	__asm { mov eax, esi }
	__asm { L_00a58d88: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f040();
extern "C" void fn_009c4650();
// FUNCTION: ROBLOXSTUDIO 0x00a59890
extern "C" __declspec(naked) void asm_00a59890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009c4650 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008ff0a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a5af20
extern "C" __declspec(naked) void asm_00a5af20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push esi }
	__asm { lea esi, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008ff0a0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00a5b520
extern "C" __declspec(naked) void asm_00a5b520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x18 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00a5b537 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00a5b537: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_00a5b544 }
	__asm { mov ecx, eax }
	__asm { mov edx, eax }
	__asm { jmp L_00a5b547 }
	__asm { L_00a5b544: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00a5b547: }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00a5b552 }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_00a5b552: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a59890();
// FUNCTION: ROBLOXSTUDIO 0x00a5bca0
extern "C" __declspec(naked) void asm_00a5bca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a5bcce }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a59890 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a5bcce: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a58a50();
// FUNCTION: ROBLOXSTUDIO 0x00a5c530
extern "C" __declspec(naked) void asm_00a5c530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 8 }
	__asm { call fn_00a58a50 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a58b80();
// FUNCTION: ROBLOXSTUDIO 0x00a5c570
extern "C" __declspec(naked) void asm_00a5c570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 8 }
	__asm { call fn_00a58b80 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a5d3c0();
// FUNCTION: ROBLOXSTUDIO 0x00a5d340
extern "C" __declspec(naked) void asm_00a5d340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a5d363 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a5d3c0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a5d363: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12504b0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a5d500();
// FUNCTION: ROBLOXSTUDIO 0x00a5d380
extern "C" __declspec(naked) void asm_00a5d380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_00a5d3a3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a5d500 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00a5d3a3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12506d0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a5de40();
// FUNCTION: ROBLOXSTUDIO 0x00a5de10
extern "C" __declspec(naked) void asm_00a5de10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a5de40 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a5de10();
// FUNCTION: ROBLOXSTUDIO 0x00a5f180
extern "C" __declspec(naked) void asm_00a5f180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a5f1ae }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a5de10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a5f1ae: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a5f550();
// FUNCTION: ROBLOXSTUDIO 0x00a5f520
extern "C" __declspec(naked) void asm_00a5f520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a5f53b }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a5f550 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a5f53b: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00a5f550 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f1d0();
// FUNCTION: ROBLOXSTUDIO 0x00a60ed0
extern "C" __declspec(naked) void asm_00a60ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00a60eeb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_0043f1d0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00a60eeb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_0043f1d0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0079a4d0();
// FUNCTION: ROBLOXSTUDIO 0x00a624f0
extern "C" __declspec(naked) void asm_00a624f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a6251e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_0079a4d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a6251e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00b7f8d0();
// FUNCTION: ROBLOXSTUDIO 0x00a62c30
extern "C" __declspec(naked) void asm_00a62c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b7f8d0 }
	__asm { lea esi, [eax + 8] }
	__asm { test esi, esi }
	__asm { je L_00a62c60 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { L_00a62c60: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_009cf000();
// FUNCTION: ROBLOXSTUDIO 0x00a63220
extern "C" __declspec(naked) void asm_00a63220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a6324e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_009cf000 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a6324e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007ab9f0();
extern "C" void fn_0092b790();
// FUNCTION: ROBLOXSTUDIO 0x00a63a90
extern "C" __declspec(naked) void asm_00a63a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_00a63aa7 }
	__asm { add eax, 0x1c }
	__asm { jmp L_00a63aa9 }
	__asm { L_00a63aa7: }
	__asm { xor eax, eax }
	__asm { L_00a63aa9: }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_0092b790 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ecx + 0x10] }
	__asm { call fn_007ab9f0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009f13a0();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x00a63f40
extern "C" __declspec(naked) void asm_00a63f40()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_009f13a0 }
	__asm { push 0x200 }
	__asm { lea eax, [esi + 0x38] }
	__asm { mov dword ptr [esi], 0xeaca04 }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [esi + 0x238], 0 }
	__asm { mov dword ptr [esi + 0x23c], 0 }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a66b10();
// FUNCTION: ROBLOXSTUDIO 0x00a66ae0
extern "C" __declspec(naked) void asm_00a66ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a66b10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a66cc0();
// FUNCTION: ROBLOXSTUDIO 0x00a66c90
extern "C" __declspec(naked) void asm_00a66c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a66cc0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a66e80();
// FUNCTION: ROBLOXSTUDIO 0x00a66e50
extern "C" __declspec(naked) void asm_00a66e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a66e80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_00a66f60();
// FUNCTION: ROBLOXSTUDIO 0x00a66f30
extern "C" __declspec(naked) void asm_00a66f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_0043f040 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a66f60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a69e50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a685e0
extern "C" __declspec(naked) void asm_00a685e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00a69e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00a68600 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a68600: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a66da0();
// FUNCTION: ROBLOXSTUDIO 0x00a69900
extern "C" __declspec(naked) void asm_00a69900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a6992e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a66da0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a6992e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a66e50();
// FUNCTION: ROBLOXSTUDIO 0x00a69940
extern "C" __declspec(naked) void asm_00a69940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a6996e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a66e50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a6996e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00915ca0();
// FUNCTION: ROBLOXSTUDIO 0x00a69980
extern "C" __declspec(naked) void asm_00a69980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a699ae }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00915ca0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a699ae: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00a66f30();
// FUNCTION: ROBLOXSTUDIO 0x00a699c0
extern "C" __declspec(naked) void asm_00a699c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00a699ee }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00a66f30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00a699ee: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}
