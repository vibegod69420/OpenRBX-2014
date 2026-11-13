// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10268[];
extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x008a2fb0
extern "C" __declspec(naked) void asm_008a2fb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp ebx, dword ptr [edi] }
	__asm { jne L_008a2fdf }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jne L_008a2fdf }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_008a2fdf: }
	__asm { cmp ebx, eax }
	__asm { je L_008a3014 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sub ecx, eax }
	__asm { push esi }
	__asm { sar ecx, 2 }
	__asm { lea esi, [ecx*4] }
	__asm { push esi }
	__asm { push eax }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0xc }
	__asm { lea eax, [esi + ebx] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_008a3014: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0079ae50();
extern "C" void fn_0079af60();
extern "C" void fn_0083e550();
extern "C" void fn_008a1a70();
// FUNCTION: ROBLOXSTUDIO 0x008a3020
extern "C" __declspec(naked) void asm_008a3020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0079af60 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x38] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0083e550 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x34] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0079ae50 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add esp, 0x24 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { test edx, edx }
	__asm { je L_008a3069 }
	__asm { add edx, -0x1c }
	__asm { jmp L_008a306b }
	__asm { L_008a3069: }
	__asm { xor edx, edx }
	__asm { L_008a306b: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { push edx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { call fn_008a1a70 }
	__asm { add esp, 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0079ae50();
extern "C" void fn_0079af60();
extern "C" void fn_007d0510();
extern "C" void fn_007d5be0();
extern "C" void fn_0083e550();
// FUNCTION: ROBLOXSTUDIO 0x008a3110
extern "C" __declspec(naked) void asm_008a3110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_0079af60 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x38] }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_0083e550 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x34] }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_0079ae50 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x24 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { test ecx, ecx }
	__asm { je L_008a315a }
	__asm { lea eax, [ecx - 0x1c] }
	__asm { jmp L_008a315c }
	__asm { L_008a315a: }
	__asm { xor eax, eax }
	__asm { L_008a315c: }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov edx, dword ptr [edi + 0x2c] }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [eax + 0x68] }
	__asm { lea edi, [ebp - 0x18] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { add eax, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edx + 0x68] }
	__asm { push edi }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { mov esi, eax }
	__asm { call fn_007d5be0 }
	__asm { push esi }
	__asm { lea ecx, [ebx + 8] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { call fn_007d0510 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007d0510();
extern "C" void fn_007d5be0();
extern "C" void fn_0089e0b0();
// FUNCTION: ROBLOXSTUDIO 0x008a31b0
extern "C" __declspec(naked) void asm_008a31b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { test eax, eax }
	__asm { je L_008a31cd }
	__asm { add eax, -0x1c }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_008a31d4 }
	__asm { L_008a31cd: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_008a31d4: }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_0089e0b0 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov ebx, dword ptr [edi + 0x28] }
	__asm { mov edx, dword ptr [edx + 0x30] }
	__asm { mov edi, dword ptr [edi + 0x2c] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 0x68] }
	__asm { mov eax, dword ptr [eax + edx] }
	__asm { add eax, ecx }
	__asm { lea ecx, [edi + 0x68] }
	__asm { add ecx, eax }
	__asm { call ebx }
	__asm { mov esi, eax }
	__asm { call fn_007d5be0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { add ecx, 8 }
	__asm { call fn_007d0510 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0079ae50();
extern "C" void fn_0079af60();
extern "C" void fn_0083e550();
extern "C" void fn_0089e450();
extern "C" void fn_0089e670();
extern "C" void fn_0089e890();
// FUNCTION: ROBLOXSTUDIO 0x008a3240
extern "C" __declspec(naked) void asm_008a3240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x48] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0089e890 }
	__asm { push 0 }
	__asm { lea ecx, [ebx + 0x44] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_0089e450 }
	__asm { push 0 }
	__asm { lea ecx, [ebx + 0x40] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_0089e670 }
	__asm { push 0 }
	__asm { lea ecx, [ebx + 0x3c] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_0079af60 }
	__asm { push 0 }
	__asm { lea ecx, [ebx + 0x38] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { call fn_0083e550 }
	__asm { push 0 }
	__asm { lea ecx, [ebx + 0x34] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_0079ae50 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 0x48 }
	__asm { test edi, edi }
	__asm { je L_008a32b4 }
	__asm { add edi, -0x1c }
	__asm { jmp L_008a32b6 }
	__asm { L_008a32b4: }
	__asm { xor edi, edi }
	__asm { L_008a32b6: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0x30] }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ebx + 0x2c] }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { add eax, edi }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0079ae50();
extern "C" void fn_0079af60();
extern "C" void fn_0083e550();
extern "C" void fn_0089e9a0();
extern "C" void fn_0089eab0();
// FUNCTION: ROBLOXSTUDIO 0x008a32f0
extern "C" __declspec(naked) void asm_008a32f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { lea eax, [ebx + 0x44] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0089e9a0 }
	__asm { push 0 }
	__asm { lea ecx, [ebx + 0x40] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_0089eab0 }
	__asm { push 0 }
	__asm { lea ecx, [ebx + 0x3c] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_0079af60 }
	__asm { push 0 }
	__asm { lea ecx, [ebx + 0x38] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_0083e550 }
	__asm { push 0 }
	__asm { lea ecx, [ebx + 0x34] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { call fn_0079ae50 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 0x3c }
	__asm { test edi, edi }
	__asm { je L_008a3355 }
	__asm { add edi, -0x1c }
	__asm { jmp L_008a3357 }
	__asm { L_008a3355: }
	__asm { xor edi, edi }
	__asm { L_008a3357: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0x30] }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ebx + 0x2c] }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0x68] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { add eax, edi }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0089df60();
extern "C" void fn_0089e340();
extern "C" void fn_0089e560();
extern "C" void fn_0089e780();
// FUNCTION: ROBLOXSTUDIO 0x008a3520
extern "C" __declspec(naked) void asm_008a3520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x40] }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { call fn_0089e780 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_0089e340 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x38] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { call fn_0089e560 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x24 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test ecx, ecx }
	__asm { je L_008a3570 }
	__asm { lea eax, [ecx - 0x1c] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jmp L_008a3577 }
	__asm { L_008a3570: }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { L_008a3577: }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0089df60 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { add esp, 0x10 }
	__asm { mov edx, dword ptr [edx + 0x30] }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ebx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov edi, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov esi, eax }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx + 0x68] }
	__asm { mov eax, dword ptr [eax + edx] }
	__asm { add eax, ecx }
	__asm { lea ecx, [edi + 0x68] }
	__asm { add ecx, eax }
	__asm { call ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00410d50();
extern "C" void fn_0079ae50();
extern "C" void fn_0079af60();
extern "C" void fn_007d5d30();
extern "C" void fn_0083e550();
// FUNCTION: ROBLOXSTUDIO 0x008a35e0
extern "C" __declspec(naked) void asm_008a35e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x3c] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_0079af60 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x38] }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_0083e550 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x34] }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_0079ae50 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0x24 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { test ecx, ecx }
	__asm { je L_008a362a }
	__asm { lea eax, [ecx - 0x1c] }
	__asm { jmp L_008a362c }
	__asm { L_008a362a: }
	__asm { xor eax, eax }
	__asm { L_008a362c: }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [eax + 0x68] }
	__asm { mov eax, dword ptr [eax + ecx] }
	__asm { add eax, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { call esi }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 8] }
	__asm { call fn_00410d50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e3ad6c[];
extern "C" void fn_00421ea0();
extern "C" void fn_006da0e0();
extern "C" void fn_00a24330();
extern "C" void fn_00b64b90();
// FUNCTION: ROBLOXSTUDIO 0x008a3990
extern "C" __declspec(naked) void asm_008a3990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { cmp dword ptr [ebx], -1 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { jne L_008a39b7 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { L_008a39a6: }
	__asm { call fn_00421ea0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_008a39b7: }
	__asm { test edi, edi }
	__asm { je L_008a39c3 }
	__asm { mov esi, dword ptr [edi + 0xe0] }
	__asm { jmp L_008a39c5 }
	__asm { L_008a39c3: }
	__asm { xor esi, esi }
	__asm { L_008a39c5: }
	__asm { mov esi, dword ptr [esi + 0x100] }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006da0e0 }
	__asm { fld dword ptr [g_00e3ad6c] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x130edb0 }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { fstp dword ptr [esp] }
	__asm { push eax }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0x13] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00b64b90 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp eax, -1 }
	__asm { je L_008a39a6 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a24330 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a3a30
extern "C" __declspec(naked) void asm_008a3a30()
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
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test eax, eax }
	__asm { je L_008a3a61 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_008a3a63 }
	__asm { L_008a3a61: }
	__asm { xor edx, edx }
	__asm { L_008a3a63: }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0xc] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008a3ab5 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a3ab5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0121036b[];
extern "C" void fn_006b8a90();
extern "C" void fn_00865d20();
extern "C" void fn_00894820();
extern "C" void fn_00968e70();
extern "C" void fn_0096cb20();
// FUNCTION: ROBLOXSTUDIO 0x008a3e40
extern "C" __declspec(naked) void asm_008a3e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_00894820 }
	__asm { mov al, byte ptr [g_0121036b] }
	__asm { test al, al }
	__asm { je L_008a3e6d }
	__asm { push dword ptr [edi + 8] }
	__asm { movzx eax, al }
	__asm { push 0xe6a598 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_008a3e6d: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { test eax, eax }
	__asm { je L_008a3ecb }
	__asm { push eax }
	__asm { call fn_00865d20 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { call fn_00968e70 }
	__asm { test eax, eax }
	__asm { jne L_008a3e9c }
	__asm { mov al, byte ptr [g_0121036b] }
	__asm { test al, al }
	__asm { je L_008a3ec3 }
	__asm { push 0 }
	__asm { push 0xe6a5b8 }
	__asm { jmp L_008a3eb7 }
	__asm { L_008a3e9c: }
	__asm { mov ecx, edi }
	__asm { call fn_00968e70 }
	__asm { cmp eax, esi }
	__asm { je L_008a3ecb }
	__asm { mov al, byte ptr [g_0121036b] }
	__asm { test al, al }
	__asm { je L_008a3ec3 }
	__asm { push 0 }
	__asm { push 0xe6a5e0 }
	__asm { L_008a3eb7: }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_008a3ec3: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0096cb20 }
	__asm { L_008a3ecb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0121036b[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b8aae();
extern "C" void fn_00865d20();
extern "C" void fn_00894b40();
extern "C" void fn_00968e70();
extern "C" void fn_0096cb20();
// FUNCTION: ROBLOXSTUDIO 0x008a3ee0
extern "C" __declspec(naked) void asm_008a3ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { call fn_00894b40 }
	__asm { mov al, byte ptr [g_0121036b] }
	__asm { test al, al }
	__asm { je L_008a3f13 }
	__asm { push 0 }
	__asm { push edi }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe6a534 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_008a3f13: }
	__asm { test edi, edi }
	__asm { jne L_008a3f56 }
	__asm { test esi, esi }
	__asm { je L_008a3f56 }
	__asm { push esi }
	__asm { call fn_00865d20 }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { call fn_00968e70 }
	__asm { cmp eax, ebx }
	__asm { jne L_008a3f56 }
	__asm { mov cl, byte ptr [g_0121036b] }
	__asm { test cl, cl }
	__asm { je L_008a3f4d }
	__asm { push edi }
	__asm { movzx eax, cl }
	__asm { push 0xe6a568 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_008a3f4d: }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_0096cb20 }
	__asm { L_008a3f56: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012f8550[];
extern "C" void fn_00a0a470();
// FUNCTION: ROBLOXSTUDIO 0x008a42b0
extern "C" __declspec(naked) void asm_008a42b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov word ptr [ebp - 0x10], ax }
	__asm { mov word ptr [ebp - 0xe], si }
	__asm { mov word ptr [ebp - 0xc], di }
	__asm { cmp edx, 0x11 }
	__asm { jne L_008a4303 }
	__asm { push edx }
	__asm { mov word ptr [ebp - 8], ax }
	__asm { mov byte ptr [ebp + 8], 0x29 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { add ecx, 0x140 }
	__asm { mov word ptr [ebp - 6], si }
	__asm { mov word ptr [ebp - 4], di }
	__asm { call fn_00a0a470 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_008a4303: }
	__asm { xor al, al }
	__asm { push ebx }
	__asm { test edx, edx }
	__asm { je L_008a432c }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { cmp ebx, 5 }
	__asm { je L_008a432c }
	__asm { mov cl, byte ptr [ebp + 0x1c] }
	__asm { shl cl, 3 }
	__asm { and bl, 7 }
	__asm { or cl, bl }
	__asm { shl cl, 3 }
	__asm { and al, 7 }
	__asm { or cl, al }
	__asm { mov byte ptr [ebp + 8], cl }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { jmp L_008a4339 }
	__asm { L_008a432c: }
	__asm { mov al, byte ptr [g_012f8550] }
	__asm { mov byte ptr [ebp + 8], al }
	__asm { mov edx, 0x11 }
	__asm { L_008a4339: }
	__asm { push edx }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { add ecx, 0x140 }
	__asm { call fn_00a0a470 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4d1c[];
extern "C" char g_0131a8e4[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007af830();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x008a5190
extern "C" __declspec(naked) void asm_008a5190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2cfb6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af830 }
	__asm { mov eax, dword ptr [g_0131a8e4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008a5210 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a8e4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6a9c8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131a8e8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008a5210: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131a8e8 }
	__asm { inc dword ptr [g_012e4d1c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { L_008a5233: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008a528d }
	__asm { push 0 }
	__asm { push 0x11f9cf4 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { jne L_008a528d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008a5278 }
	__asm { push 0x203 }
	__asm { push 0xe6ab08 }
	__asm { push 0xe6ab4c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008a528d }
	__asm { L_008a5278: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe6ab70 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008a528d: }
	__asm { push 0 }
	__asm { push 0x11f9cf4 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_008a52ae }
	__asm { mov esi, eax }
	__asm { jmp L_008a5233 }
	__asm { L_008a52ae: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e0d8c[];
extern "C" void fn_00402fd0();
extern "C" void fn_006b9740();
extern "C" void fn_00792c90();
extern "C" void fn_00792fe0();
extern "C" void fn_007b5260();
extern "C" void fn_007b5290();
// FUNCTION: ROBLOXSTUDIO 0x008a5500
extern "C" __declspec(naked) void asm_008a5500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { push 7 }
	__asm { add ecx, 4 }
	__asm { push 0xe51a48 }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jne L_008a55d7 }
	__asm { push dword ptr [g_012e0d8c] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00792c90 }
	__asm { test eax, eax }
	__asm { jne L_008a5541 }
	__asm { xor al, al }
	__asm { jmp L_008a554d }
	__asm { L_008a5541: }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 8] }
	__asm { call fn_00792fe0 }
	__asm { L_008a554d: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_008a5590 }
	__asm { test al, al }
	__asm { jne L_008a5590 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008a557f }
	__asm { push 0x3b }
	__asm { push 0xe6aa18 }
	__asm { push 0xe6aa5c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008a5590 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_008a557f: }
	__asm { movzx eax, cl }
	__asm { push 0xe6aa70 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008a5590: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { add ecx, 4 }
	__asm { push 0x101890c }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jne L_008a55bc }
	__asm { L_008a55ab: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_007b5260 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008a55bc: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 4 }
	__asm { add ecx, 4 }
	__asm { push 0xe51a40 }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { je L_008a55ab }
	__asm { L_008a55d7: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_007b5290 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de194[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0040bb80();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008a6780();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008a5910
extern "C" __declspec(naked) void asm_008a5910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d056 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008a6780 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012de194] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008a59cf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012de194], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6ac3c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12de068 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde03b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008a59cf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12de068 }
	__asm { call fn_0040bb80 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe6af80 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008a5a4d }
	__asm { push 0x120d3cc }
	__asm { mov ecx, 0x120d3cc }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008a5a4d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008a5a38 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008a5a4d }
	__asm { L_008a5a38: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008a5a4d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

// FUNCTION: ROBLOXSTUDIO 0x008a5a60
extern "C" __declspec(naked) void asm_008a5a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe6b230 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe6b260 }
	__asm { mov dword ptr [esi + 8], 0xe6b270 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008a5b0a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_008a5af6 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008a5af6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008a5b0a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_008a5a60();
extern "C" void fn_008a87b0();
// FUNCTION: ROBLOXSTUDIO 0x008a62d0
extern "C" __declspec(naked) void asm_008a62d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008a631b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_008a631b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008a6344 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_008a5a60 }
	__asm { mov dword ptr [esi], 0xe6b278 }
	__asm { mov dword ptr [esi + 8], 0xe6b288 }
	__asm { jmp L_008a6346 }
	__asm { L_008a6344: }
	__asm { xor esi, esi }
	__asm { L_008a6346: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008a87b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_008a636a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_008a636a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x008a6a00
extern "C" __declspec(naked) void asm_008a6a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f1274 }
	__asm { mov edi, ecx }
	__asm { push 0xe6b044 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59ec8 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0xe6b078 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe6b084 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe6b08c }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004107f0();
extern "C" void fn_006b9740();
extern "C" void fn_0079a070();
extern "C" void fn_008a7290();
// FUNCTION: ROBLOXSTUDIO 0x008a8580
extern "C" __declspec(naked) void asm_008a8580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_008a85ea }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_008a85ea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008a85d9 }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008a85ea }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_008a85d9: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008a85ea: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008a85f6 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_008a85f8 }
	__asm { L_008a85f6: }
	__asm { xor edi, edi }
	__asm { L_008a85f8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_004107f0 }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { fstp dword ptr [esp] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_0079a070 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [eax + 0x28] }
	__asm { add ecx, edi }
	__asm { call fn_008a7290 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012dcb9c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0052c370();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008a98e0();
extern "C" void fn_008a9a60();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008a9390
extern "C" __declspec(naked) void asm_008a9390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d3a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008a98e0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012dcb9c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008a944f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dcb9c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003670 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0052c370 }
	__asm { push eax }
	__asm { mov ecx, 0x12dca70 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddfea0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008a944f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12dca70 }
	__asm { call fn_008a9a60 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe6b45c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008a94cd }
	__asm { push 0x120dedc }
	__asm { mov ecx, 0x120dedc }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008a94cd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008a94b8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008a94cd }
	__asm { L_008a94b8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008a94cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012dcb9c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0052c370();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008841a0();
extern "C" void fn_008a9940();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008a94e0
extern "C" __declspec(naked) void asm_008a94e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d3a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008a9940 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012dcb9c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008a959f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dcb9c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0x1003670 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0052c370 }
	__asm { push eax }
	__asm { mov ecx, 0x12dca70 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddfea0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008a959f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12dca70 }
	__asm { call fn_008841a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe6b4a0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008a961d }
	__asm { push 0x120dedc }
	__asm { mov ecx, 0x120dedc }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008a961d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008a9608 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008a961d }
	__asm { L_008a9608: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008a961d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012fc3b0[];
extern "C" char g_012fc3b4[];
extern "C" char g_012fc3b8[];
extern "C" char g_012fc3bc[];
extern "C" void fn_00403540();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008a9630
extern "C" __declspec(naked) void asm_008a9630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fc3bc] }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, 1 }
	__asm { jne L_008a968c }
	__asm { or eax, 1 }
	__asm { push 0xdee1c0 }
	__asm { mov dword ptr [g_012fc3bc], eax }
	__asm { mov dword ptr [g_012fc3b0], 0x120def8 }
	__asm { mov dword ptr [g_012fc3b8], 0x98cf00 }
	__asm { mov dword ptr [g_012fc3b4], 0x8846b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008a968c: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp ecx, 0x12fc3b0 }
	__asm { jne L_008a96b4 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { lea esi, [edi + 4] }
	__asm { cmp esi, ebx }
	__asm { je L_008a96ac }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_008a96ac: }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { jmp L_008a970a }
	__asm { L_008a96b4: }
	__asm { test ecx, ecx }
	__asm { je L_008a96ca }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_008a96ca: }
	__asm { lea ebx, [edi + 4] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_008a9704 }
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
	__asm { L_008a9704: }
	__asm { mov dword ptr [edi], 0x12fc3b0 }
	__asm { L_008a970a: }
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

extern "C" char g_00e10524[];
extern "C" void fn_00403540();
extern "C" void fn_008a9720();
extern "C" void fn_00b08960();
// FUNCTION: ROBLOXSTUDIO 0x008a97b0
extern "C" __declspec(naked) void asm_008a97b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d3d1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x120def8 }
	__asm { je L_008a988c }
	__asm { push eax }
	__asm { mov ecx, 0x120def8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008a988c }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008a981d }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_008a981d: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00b08960 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov esi, eax }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008a98c0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008a988c: }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call fn_008a9720 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esi, eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { L_008a98c0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00793ca0();
extern "C" void fn_00b09170();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a9a60
extern "C" __declspec(naked) void asm_008a9a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29d6b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b09170 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx], ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00793ca0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi], 0xe6b420 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_008a9af7 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_008a9ae6 }
	__asm { and dword ptr [edi + 0x1c], 0xffffffeb }
	__asm { L_008a9ae6: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_008a9af7 }
	__asm { and dword ptr [edi + 0x1c], 0xfffffff3 }
	__asm { L_008a9af7: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00403040();
extern "C" void fn_00405b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a9d10
extern "C" __declspec(naked) void asm_008a9d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd293c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00405b90 }
	__asm { push esi }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00403040 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_008a9d74 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a9d74: }
	__asm { cmp dword ptr [ebp - 0x30], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jb L_008a9d97 }
	__asm { push dword ptr [ebp - 0x44] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a9d97: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012e4ea4[];
extern "C" char g_0131f174[];
extern "C" void fn_0052e510();
extern "C" void fn_007cbf10();
extern "C" void fn_008ab5d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008ab030
extern "C" __declspec(naked) void asm_008ab030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d5b6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_008ab066 }
	__asm { mov dword ptr [esi + 0x68], 0xe6c8a4 }
	__asm { mov dword ptr [esi + 0xb4], 0xe854c8 }
	__asm { L_008ab066: }
	__asm { push 0 }
	__asm { call fn_008ab5d0 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe6c33c }
	__asm { mov dword ptr [esi + 4], 0xe6c44c }
	__asm { mov dword ptr [esi + 0x18], 0xe6c454 }
	__asm { mov dword ptr [esi + 0x1c], 0xe6c460 }
	__asm { mov dword ptr [esi + 0x64], 0xe6c470 }
	__asm { mov dword ptr [esi + 0x70], 0xe6c478 }
	__asm { mov dword ptr [esi + 0x98], 0xe6c498 }
	__asm { mov dword ptr [esi + 0xb0], 0xe6c4cc }
	__asm { mov dword ptr [esi + 0xc4], 0xe6c4f8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe6c500 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x114] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov eax, dword ptr [g_0131f174] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008ab128 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f174], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6b74c }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0052e510 }
	__asm { push eax }
	__asm { mov ecx, 0x131f178 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde8b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008ab128: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131f178 }
	__asm { inc dword ptr [g_012e4ea4] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4ea0[];
extern "C" char g_0131f044[];
extern "C" void fn_0052e510();
extern "C" void fn_007cbf10();
extern "C" void fn_008ab5d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008ab150
extern "C" __declspec(naked) void asm_008ab150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d5d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_008ab186 }
	__asm { mov dword ptr [esi + 0x68], 0xe6c8a4 }
	__asm { mov dword ptr [esi + 0xb4], 0xe854c8 }
	__asm { L_008ab186: }
	__asm { push 0 }
	__asm { call fn_008ab5d0 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe6bdcc }
	__asm { mov dword ptr [esi + 4], 0xe6bedc }
	__asm { mov dword ptr [esi + 0x18], 0xe6bee4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe6bef0 }
	__asm { mov dword ptr [esi + 0x64], 0xe6bf00 }
	__asm { mov dword ptr [esi + 0x70], 0xe6bf08 }
	__asm { mov dword ptr [esi + 0x98], 0xe6bf28 }
	__asm { mov dword ptr [esi + 0xb0], 0xe6bf5c }
	__asm { mov dword ptr [esi + 0xc4], 0xe6bf88 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe6bf90 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x114] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov eax, dword ptr [g_0131f044] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008ab248 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131f044], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6b730 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0052e510 }
	__asm { push eax }
	__asm { mov ecx, 0x131f048 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008ab248: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131f048 }
	__asm { inc dword ptr [g_012e4ea0] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e4e9c[];
extern "C" char g_0131ef10[];
extern "C" void fn_004199f0();
extern "C" void fn_007cbf10();
extern "C" void fn_008ab390();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008ab270
extern "C" __declspec(naked) void asm_008ab270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d5f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_008ab2a6 }
	__asm { mov dword ptr [esi + 0x68], 0xe9bba8 }
	__asm { mov dword ptr [esi + 0xb4], 0xe780c8 }
	__asm { L_008ab2a6: }
	__asm { push 0 }
	__asm { call fn_008ab390 }
	__asm { mov eax, dword ptr [g_0131ef10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008ab303 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ef10], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6b720 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004199f0 }
	__asm { push eax }
	__asm { mov ecx, 0x131ef18 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde8d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008ab303: }
	__asm { mov dword ptr [esi + 0x28], 0x131ef18 }
	__asm { inc dword ptr [g_012e4e9c] }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe6b92c }
	__asm { mov dword ptr [esi + 4], 0xe6ba38 }
	__asm { mov dword ptr [esi + 0x18], 0xe6ba40 }
	__asm { mov dword ptr [esi + 0x1c], 0xe6ba4c }
	__asm { mov dword ptr [esi + 0x64], 0xe6ba5c }
	__asm { mov dword ptr [esi + 0x70], 0xe6ba64 }
	__asm { mov dword ptr [esi + 0x98], 0xe6ba84 }
	__asm { mov dword ptr [esi + 0xb0], 0xe6bab8 }
	__asm { mov dword ptr [esi + 0xc4], 0xe6bae4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe6baec }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xac] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038080[];
extern "C" void fn_004038a0();
extern "C" void fn_00897740();
extern "C" void fn_00897770();
extern "C" void fn_00897cc0();
extern "C" void fn_008988f0();
extern "C" void fn_008ab030();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008ab440
extern "C" __declspec(naked) void asm_008ab440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d610 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_008ab478 }
	__asm { mov dword ptr [esi + 0x68], 0xe6c8a4 }
	__asm { mov dword ptr [esi + 0xb4], 0xe854c8 }
	__asm { L_008ab478: }
	__asm { push 0 }
	__asm { call fn_008ab030 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe6c50c }
	__asm { mov dword ptr [esi + 4], 0xe6c61c }
	__asm { mov dword ptr [esi + 0x18], 0xe6c624 }
	__asm { mov dword ptr [esi + 0x1c], 0xe6c630 }
	__asm { mov dword ptr [esi + 0x64], 0xe6c640 }
	__asm { mov dword ptr [esi + 0x70], 0xe6c648 }
	__asm { mov dword ptr [esi + 0x98], 0xe6c668 }
	__asm { mov dword ptr [esi + 0xb0], 0xe6c69c }
	__asm { mov dword ptr [esi + 0xc4], 0xe6c6c8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe6c6d0 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x114] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe6c6dc }
	__asm { mov dword ptr [esi + 4], 0xe6c7ec }
	__asm { mov dword ptr [esi + 0x18], 0xe6c7f4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe6c800 }
	__asm { mov dword ptr [esi + 0x64], 0xe6c810 }
	__asm { mov dword ptr [esi + 0x70], 0xe6c818 }
	__asm { mov dword ptr [esi + 0x98], 0xe6c838 }
	__asm { mov dword ptr [esi + 0xb0], 0xe6c86c }
	__asm { mov dword ptr [esi + 0xc4], 0xe6c898 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0xc }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe6c8a0 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { push 0xe6c980 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea eax, [ecx - 0x114] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00897cc0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_008ab595 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008ab595: }
	__asm { fld dword ptr [g_01038080] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_008988f0 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00897740 }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00897770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc3f8[];
extern "C" char g_012fe5f0[];
extern "C" char g_01303174[];
extern "C" void fn_00403540();
extern "C" void fn_007b4f50();
extern "C" void fn_008ad020();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008abe20
extern "C" __declspec(naked) void asm_008abe20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d6f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, 0xf }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea ecx, [esi + 0x110] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_008abe73 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { L_008abe73: }
	__asm { push 0x12fc414 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { cmp edi, 0x10 }
	__asm { jb L_008abe8f }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008abe8f: }
	__asm { mov edi, 0xf }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea ecx, [esi + 0x128] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp ecx, eax }
	__asm { je L_008abec3 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { L_008abec3: }
	__asm { push 0x12fc440 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { cmp edi, 0x10 }
	__asm { jb L_008abedf }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008abedf: }
	__asm { mov edi, 0xf }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { lea ecx, [esi + 0x140] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { cmp ecx, eax }
	__asm { je L_008abf13 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { L_008abf13: }
	__asm { push 0x12fc46c }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { cmp byte ptr [g_01303174], 0 }
	__asm { je L_008abf41 }
	__asm { cmp byte ptr [g_012fe5f0], 0 }
	__asm { je L_008abf41 }
	__asm { cmp byte ptr [g_012fc3f8], 0 }
	__asm { je L_008abf41 }
	__asm { mov ecx, esi }
	__asm { call fn_008ad020 }
	__asm { L_008abf41: }
	__asm { cmp edi, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jb L_008abf53 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008abf53: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00487530();
extern "C" void fn_00852410();
extern "C" void fn_0090e5e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008ac880
extern "C" __declspec(naked) void asm_008ac880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00852410 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008ac91a }
	__asm { mov ecx, eax }
	__asm { call fn_00487530 }
	__asm { test eax, eax }
	__asm { je L_008ac91a }
	__asm { lea ecx, [esi + 0x140] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_0090e5e0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008ac93c }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008ac91a: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { L_008ac93c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fe5f0[];
extern "C" void fn_00789df0();
extern "C" void fn_00789ef0();
extern "C" void fn_00894b40();
extern "C" void fn_00902dd0();
extern "C" void fn_00903040();
extern "C" void fn_00903820();
extern "C" void fn_00903a30();
// FUNCTION: ROBLOXSTUDIO 0x008aca10
extern "C" __declspec(naked) void asm_008aca10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00894b40 }
	__asm { cmp byte ptr [g_012fe5f0], 0 }
	__asm { je L_008aca8b }
	__asm { test edi, edi }
	__asm { jne L_008aca64 }
	__asm { test esi, esi }
	__asm { je L_008aca8b }
	__asm { push ebx }
	__asm { call fn_00789df0 }
	__asm { push ebx }
	__asm { mov esi, eax }
	__asm { call fn_00789ef0 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { push 1 }
	__asm { push ebx }
	__asm { mov edi, eax }
	__asm { call fn_00903040 }
	__asm { push 1 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_00903a30 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008aca64: }
	__asm { test esi, esi }
	__asm { jne L_008aca8b }
	__asm { push ebx }
	__asm { call fn_00789df0 }
	__asm { push ebx }
	__asm { mov edi, eax }
	__asm { call fn_00789ef0 }
	__asm { add esp, 8 }
	__asm { mov ecx, edi }
	__asm { push ebx }
	__asm { mov esi, eax }
	__asm { call fn_00902dd0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00903820 }
	__asm { L_008aca8b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131d8f4[];
extern "C" void fn_0041f030();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087b310();
extern "C" void fn_008ad860();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008ad5f0
extern "C" __declspec(naked) void asm_008ad5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d8f6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008ad860 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131d8f4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008ad6ac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d8f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6cbec }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041f030 }
	__asm { push eax }
	__asm { mov ecx, 0x131d8f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008ad6ac: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131d8f8 }
	__asm { call fn_0087b310 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe6cce4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008ad72a }
	__asm { push 0x11ffb7c }
	__asm { mov ecx, 0x11ffb7c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008ad72a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008ad715 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008ad72a }
	__asm { L_008ad715: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008ad72a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" char g_012e4d7c[];
extern "C" char g_0131d8f4[];
extern "C" void fn_0041f030();
extern "C" void fn_007cbf10();
extern "C" void fn_008ad500();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008ad740
extern "C" __declspec(naked) void asm_008ad740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d916 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008ad500 }
	__asm { mov dword ptr [esi], 0xe6cbfc }
	__asm { mov dword ptr [esi + 4], 0xe6cc84 }
	__asm { mov dword ptr [esi + 0x18], 0xe6cc8c }
	__asm { mov dword ptr [esi + 0x1c], 0xe6cc98 }
	__asm { mov dword ptr [esi + 0x64], 0xe6cca8 }
	__asm { mov dword ptr [esi + 0x68], 0xe6ccb0 }
	__asm { mov eax, dword ptr [g_0131d8f4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, 1 }
	__asm { jne L_008ad7e6 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131d8f4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6cbec }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0041f030 }
	__asm { push eax }
	__asm { mov ecx, 0x131d8f8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc3d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008ad7e6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], 0x131d8f8 }
	__asm { inc dword ptr [g_012e4d7c] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x008aeac0
extern "C" __declspec(naked) void asm_008aeac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x10 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { je L_008aeb79 }
	__asm { push esi }
	__asm { lea esi, [edi + 4] }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { cmp esi, eax }
	__asm { je L_008aeb78 }
	__asm { mov eax, 4 }
	__asm { sub eax, edi }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { push ebx }
	__asm { nop }
	__asm { L_008aeaf0: }
	__asm { mov ebx, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { cmp ecx, dword ptr [eax] }
	__asm { jge L_008aeb2f }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { add eax, -4 }
	__asm { add eax, esi }
	__asm { sar eax, 2 }
	__asm { lea ecx, [eax*4] }
	__asm { push ecx }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { add eax, 4 }
	__asm { push edi }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edi], ebx }
	__asm { jmp L_008aeb68 }
	__asm { L_008aeb2f: }
	__asm { mov edi, dword ptr [esi - 4] }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { lea eax, [esi - 4] }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { jge L_008aeb63 }
	__asm { mov esi, edx }
	__asm { L_008aeb44: }
	__asm { mov dword ptr [esi], edi }
	__asm { mov edi, dword ptr [eax - 4] }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov edx, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov esi, eax }
	__asm { sub eax, 4 }
	__asm { cmp ecx, dword ptr [edx] }
	__asm { jl L_008aeb44 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { L_008aeb63: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], ebx }
	__asm { L_008aeb68: }
	__asm { add esi, 4 }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jne L_008aeaf0 }
	__asm { pop ebx }
	__asm { L_008aeb78: }
	__asm { pop esi }
	__asm { L_008aeb79: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008aeea0();
// FUNCTION: ROBLOXSTUDIO 0x008aeb80
extern "C" __declspec(naked) void asm_008aeb80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub ebx, esi }
	__asm { sar ebx, 2 }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov ecx, eax }
	__asm { sar ecx, 1 }
	__asm { test ecx, ecx }
	__asm { jle L_008aec15 }
	__asm { lea edx, [ecx*2 + 2] }
	__asm { push edi }
	__asm { L_008aeba6: }
	__asm { mov eax, dword ptr [esi + ecx*4 - 4] }
	__asm { dec ecx }
	__asm { sub edx, 2 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov edi, ecx }
	__asm { mov eax, edx }
	__asm { cmp edx, ebx }
	__asm { jge L_008aebea }
	__asm { nop }
	__asm { L_008aebc0: }
	__asm { mov ecx, dword ptr [esi + eax*4 - 4] }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { mov ecx, dword ptr [esi + eax*4] }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { cmp ecx, dword ptr [edx] }
	__asm { jge L_008aebd4 }
	__asm { dec eax }
	__asm { L_008aebd4: }
	__asm { mov ecx, dword ptr [esi + eax*4] }
	__asm { mov dword ptr [esi + edi*4], ecx }
	__asm { mov edi, eax }
	__asm { lea eax, [eax*2 + 2] }
	__asm { cmp eax, ebx }
	__asm { jl L_008aebc0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_008aebea: }
	__asm { cmp eax, ebx }
	__asm { jne L_008aebf8 }
	__asm { mov eax, dword ptr [esi + ebx*4 - 4] }
	__asm { mov dword ptr [esi + edi*4], eax }
	__asm { lea edi, [ebx - 1] }
	__asm { L_008aebf8: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_008aeea0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { add esp, 0x14 }
	__asm { test ecx, ecx }
	__asm { jg L_008aeba6 }
	__asm { pop edi }
	__asm { L_008aec15: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" char g_00e10388[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008aee10
extern "C" __declspec(naked) void asm_008aee10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ebx }
	__asm { je L_008aee90 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_008aee23: }
	__asm { cmp esi, edi }
	__asm { je L_008aee7f }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_008aee52 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_008aee52: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { L_008aee7f: }
	__asm { add edi, 0xc }
	__asm { add esi, 0xc }
	__asm { cmp edi, ebx }
	__asm { jne L_008aee23 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008aee90: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" char g_00e10388[];
extern "C" void fn_008ae150();
extern "C" void fn_008ae460();
extern "C" void fn_008b1ab0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008b17e0
extern "C" __declspec(naked) void asm_008b17e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2d9e0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { call fn_008b1ab0 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [edi] }
	__asm { je L_008b1824 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { cmp ecx, dword ptr [eax] }
	__asm { jge L_008b1905 }
	__asm { L_008b1824: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call dword ptr [g_00e10388] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008ae150 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_008ae460 }
	__asm { cmp dword ptr [ebp - 0x24], 0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_008b18e4 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { L_008b18e4: }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_008b1905 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008b1905: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x14] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" char g_00e10500[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008b1af0
extern "C" __declspec(naked) void asm_008b1af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test ebx, ebx }
	__asm { je L_008b1b25 }
	__asm { cmp ebx, 0x3fffffff }
	__asm { ja L_008b1b1f }
	__asm { lea eax, [ebx*4] }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_008b1b25 }
	__asm { L_008b1b1f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_008b1b25: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { and eax, 0xfffffffc }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 2 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_008b1b55 }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008b1b55: }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { lea eax, [esi + ebx*4] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_008ae1d0();
extern "C" void fn_008af1f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008b1b80
extern "C" __declspec(naked) void asm_008b1b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d9f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_008b1bd5 }
	__asm { cmp edi, 0x15555555 }
	__asm { ja L_008b1bcf }
	__asm { lea eax, [edi + edi*2] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_008b1bd5 }
	__asm { L_008b1bcf: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_008b1bd5: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_008af1f0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008b1c32 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_008ae1d0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_008b1c32: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + edi*2] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_008af2c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008b1c80
extern "C" __declspec(naked) void asm_008b1c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2da00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_008b1cd5 }
	__asm { cmp edi, 0x71c71c7 }
	__asm { ja L_008b1ccf }
	__asm { lea eax, [edi + edi*8] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_008b1cd5 }
	__asm { L_008b1ccf: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_008b1cd5: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_008af2c0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008b1d22 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008b1d22: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + edi*8] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*8] }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_008b1b80();
// FUNCTION: ROBLOXSTUDIO 0x008b1d70
extern "C" __declspec(naked) void asm_008b1d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_008b1e08 }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul esi }
	__asm { sar edx, 1 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x15555555 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_008b1dbf }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_008b1dbf: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ebx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x15555555 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_008b1df5 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_008b1b80 }
	__asm { L_008b1df5: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_008b1b80 }
	__asm { L_008b1e08: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_008b1c80();
// FUNCTION: ROBLOXSTUDIO 0x008b1e10
extern "C" __declspec(naked) void asm_008b1e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_008b1eab }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul esi }
	__asm { sar edx, 3 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x71c71c7 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_008b1e61 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_008b1e61: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ebx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x71c71c7 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_008b1e98 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_008b1c80 }
	__asm { L_008b1e98: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_008b1c80 }
	__asm { L_008b1eab: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008b3980();
extern "C" void fn_008b4a90();
extern "C" void fn_00b77360();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008b27d0
extern "C" __declspec(naked) void asm_008b27d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2d438 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008b4a90 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { cmovae eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ecx + 0x1c] }
	__asm { call fn_00b77360 }
	__asm { test eax, eax }
	__asm { je L_008b2851 }
	__asm { add eax, 4 }
	__asm { je L_008b2851 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008b2851 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008b3980 }
	__asm { add esp, 0x10 }
	__asm { L_008b2851: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_008b2862 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008b2862: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_008ae1d0();
extern "C" void fn_008aee10();
// FUNCTION: ROBLOXSTUDIO 0x008b2f70
extern "C" __declspec(naked) void asm_008b2f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jne L_008b2fb4 }
	__asm { cmp edx, dword ptr [edi + 4] }
	__asm { jne L_008b2fb4 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_008ae1d0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_008b2fb4: }
	__asm { cmp eax, edx }
	__asm { je L_008b2fee }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push edx }
	__asm { call fn_008aee10 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push esi }
	__asm { call fn_008ae1d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x20 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_008b2fee: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008b3080
extern "C" __declspec(naked) void asm_008b3080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2db1c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_008b30f1 }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_0131a2a4], ecx }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008b30f1: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0131a2a8] }
	__asm { mov edx, edi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_008b3127 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_008b3107: }
	__asm { cmp dword ptr [eax + 0x10], esi }
	__asm { jae L_008b3111 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_008b3115 }
	__asm { L_008b3111: }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008b3115: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_008b3107 }
	__asm { cmp edx, edi }
	__asm { je L_008b3127 }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { cmp esi, dword ptr [edx + 0x10] }
	__asm { jae L_008b312a }
	__asm { L_008b3127: }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { L_008b312a: }
	__asm { lea esi, [ebp - 0x10] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test cl, 1 }
	__asm { jne L_008b317a }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_0131a2a4], ecx }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edi, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { L_008b317a: }
	__asm { cmp esi, edi }
	__asm { je L_008b3191 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b3191: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x008b3200
extern "C" __declspec(naked) void asm_008b3200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { test al, al }
	__asm { je L_008b324e }
	__asm { cmp esi, dword ptr [ebx + 8] }
	__asm { ja L_008b324e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008b323d }
	__asm { push 0x7d }
	__asm { push 0xe6cec8 }
	__asm { push 0xe6cf0c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b324e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008b323d: }
	__asm { movzx eax, al }
	__asm { push 0xe6cf20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b324e: }
	__asm { mov edi, 0x10 }
	__asm { cmp esi, edi }
	__asm { jbe L_008b325d }
	__asm { L_008b3257: }
	__asm { add edi, edi }
	__asm { cmp edi, esi }
	__asm { jb L_008b3257 }
	__asm { L_008b325d: }
	__asm { push edi }
	__asm { call fn_00cf64a0 }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov esi, eax }
	__asm { push dword ptr [ebx] }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov dword ptr [ebx], esi }
	__asm { push ecx }
	__asm { mov dword ptr [ebx + 8], edi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006d19a0();
extern "C" void fn_008b1e10();
// FUNCTION: ROBLOXSTUDIO 0x008b3290
extern "C" __declspec(naked) void asm_008b3290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_008b32fd }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_008b32fd }
	__asm { sub edi, eax }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul edi }
	__asm { sar edx, 3 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_008b32de }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_008b1e10 }
	__asm { L_008b32de: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*8] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008b3325 }
	__asm { push eax }
	__asm { jmp L_008b3320 }
	__asm { L_008b32fd: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_008b330b }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_008b1e10 }
	__asm { L_008b330b: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_008b3325 }
	__asm { push edi }
	__asm { L_008b3320: }
	__asm { call fn_006d19a0 }
	__asm { L_008b3325: }
	__asm { add dword ptr [esi + 4], 0x24 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_008b0520();
extern "C" void fn_009f34d0();
extern "C" void fn_00b6c6c0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008b3340
extern "C" __declspec(naked) void asm_008b3340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { push esi }
	__asm { lea esi, [edx + 1] }
	__asm { cmp esi, dword ptr [ecx + 8] }
	__asm { ja L_008b33af }
	__asm { mov eax, dword ptr [ecx] }
	__asm { add eax, edx }
	__asm { mov al, byte ptr [eax] }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_008b3377 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { movsx eax, al }
	__asm { dec eax }
	__asm { push eax }
	__asm { call fn_009f34d0 }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b3377: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0x3f800000 }
	__asm { call fn_008b0520 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00b6c6c0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b33af: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe6ce94 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006b98f0();
extern "C" void fn_009f34d0();
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x008b33e0
extern "C" __declspec(naked) void asm_008b33e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { lea ecx, [eax + 1] }
	__asm { cmp ecx, edx }
	__asm { ja L_008b343c }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov al, byte ptr [edi + eax] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test al, al }
	__asm { je L_008b341a }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { movsx eax, al }
	__asm { dec eax }
	__asm { push eax }
	__asm { call fn_009f34d0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b341a: }
	__asm { lea eax, [ecx + 0x24] }
	__asm { push 0x24 }
	__asm { cmp eax, edx }
	__asm { ja L_008b343e }
	__asm { lea eax, [edi + ecx] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 4], 0x24 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b343c: }
	__asm { push 1 }
	__asm { L_008b343e: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe6ce94 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0042e3d0();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x008b4a90
extern "C" __declspec(naked) void asm_008b4a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { lea edx, [ecx + 4] }
	__asm { cmp edx, dword ptr [ebx + 8] }
	__asm { ja L_008b4b10 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [eax + ecx] }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { cmp edi, ecx }
	__asm { ja L_008b4ad2 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { jb L_008b4aca }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [eax + edi], 0 }
	__asm { jmp L_008b4ae0 }
	__asm { L_008b4aca: }
	__asm { mov eax, esi }
	__asm { mov byte ptr [eax + edi], 0 }
	__asm { jmp L_008b4ae0 }
	__asm { L_008b4ad2: }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0042e3d0 }
	__asm { L_008b4ae0: }
	__asm { test edi, edi }
	__asm { jle L_008b4b09 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008b4aec }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_008b4aec: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { push edi }
	__asm { lea eax, [ecx + edi] }
	__asm { cmp eax, dword ptr [ebx + 8] }
	__asm { ja L_008b4b12 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { add dword ptr [ebx + 4], edi }
	__asm { L_008b4b09: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b4b10: }
	__asm { push 4 }
	__asm { L_008b4b12: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe6ce94 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_005db470();
extern "C" void fn_008b1750();
extern "C" void fn_008b1d70();
extern "C" void fn_008b2f70();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008b4d10
extern "C" __declspec(naked) void asm_008b4d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2dc40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov edx, esi }
	__asm { sub edx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 1 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add ecx, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp ecx, edi }
	__asm { jbe L_008b4d7c }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { lea eax, [edi + edi*2] }
	__asm { push esi }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008b2f70 }
	__asm { L_008b4d69: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008b4d7c: }
	__asm { jae L_008b4d69 }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008b1d70 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov ecx, edi }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_005db470 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add esp, 0x14 }
	__asm { add eax, edx }
	__asm { sub edi, eax }
	__asm { lea eax, [edi + edi*2] }
	__asm { pop edi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_008b1750 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403160();
extern "C" void fn_00665970();
extern "C" void fn_008b1e10();
extern "C" void fn_008b3000();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008b4e10
extern "C" __declspec(naked) void asm_008b4e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2dc50 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov edx, esi }
	__asm { sub edx, dword ptr [ebx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add ecx, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp ecx, edi }
	__asm { jbe L_008b4e7d }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { lea eax, [edi + edi*8] }
	__asm { push esi }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008b3000 }
	__asm { L_008b4e6a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008b4e7d: }
	__asm { jae L_008b4e6a }
	__asm { mov eax, edi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008b1e10 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov ecx, edi }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00403160 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add esp, 0x14 }
	__asm { add eax, edx }
	__asm { sub edi, eax }
	__asm { lea eax, [edi + edi*8] }
	__asm { pop edi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 4], eax }
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
}

extern "C" void fn_00410ef0();
extern "C" void fn_004d1a60();
extern "C" void fn_00891b30();
extern "C" void fn_008b1920();
extern "C" void fn_008bbcc0();
extern "C" void fn_00b9a6a0();
// FUNCTION: ROBLOXSTUDIO 0x008b50f0
extern "C" __declspec(naked) void asm_008b50f0()
{
	__asm { L_008b50f0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 3 }
	__asm { xor edi, edi }
	__asm { test eax, eax }
	__asm { je L_008b51db }
	__asm { push esi }
	__asm { L_008b5110: }
	__asm { mov esi, dword ptr [ecx + edi*8] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { test esi, esi }
	__asm { je L_008b51c7 }
	__asm { mov ecx, esi }
	__asm { call fn_00891b30 }
	__asm { cmp byte ptr [eax + 0x1a], 0 }
	__asm { je L_008b51c7 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [eax + 0x128] }
	__asm { shr eax, 2 }
	__asm { test al, 1 }
	__asm { je L_008b51c7 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { push dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [eax] }
	__asm { call fn_00b9a6a0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 4], 0 }
	__asm { jne L_008b51c7 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { sub esi, dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { sar esi, 2 }
	__asm { call fn_008b1920 }
	__asm { mov dword ptr [eax], esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008bbcc0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 0x3c }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { je L_008b51bb }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_004d1a60 }
	__asm { push eax }
	__asm { call L_008b50f0 }
	__asm { add esp, 0x10 }
	__asm { L_008b51bb: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_008bbcc0 }
	__asm { L_008b51c7: }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { sub eax, ecx }
	__asm { inc edi }
	__asm { sar eax, 3 }
	__asm { cmp edi, eax }
	__asm { jb L_008b5110 }
	__asm { pop esi }
	__asm { L_008b51db: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b17e0();
extern "C" void fn_00ac80e0();
// FUNCTION: ROBLOXSTUDIO 0x008b51f0
extern "C" __declspec(naked) void asm_008b51f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor ebx, ebx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 2 }
	__asm { test eax, eax }
	__asm { je L_008b529a }
	__asm { push esi }
	__asm { L_008b5210: }
	__asm { mov eax, dword ptr [ecx + ebx*4] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { call fn_008b17e0 }
	__asm { mov esi, eax }
	__asm { lea ecx, [ebp - 4] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp ecx, eax }
	__asm { jae L_008b5268 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea edx, [ebp - 4] }
	__asm { cmp ecx, edx }
	__asm { ja L_008b5268 }
	__asm { mov edi, edx }
	__asm { sub edi, ecx }
	__asm { sar edi, 2 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_008b5255 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ac80e0 }
	__asm { L_008b5255: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_008b5263 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008b5263: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { jmp L_008b5282 }
	__asm { L_008b5268: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_008b5276 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ac80e0 }
	__asm { L_008b5276: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_008b5282 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_008b5282: }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ecx }
	__asm { inc ebx }
	__asm { sar eax, 2 }
	__asm { cmp ebx, eax }
	__asm { jb L_008b5210 }
	__asm { pop esi }
	__asm { L_008b529a: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008b3200();
extern "C" void fn_009f3110();
extern "C" void fn_009f3b10();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x008b65c0
extern "C" __declspec(naked) void asm_008b65c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_009f3b10 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_008b6606 }
	__asm { push edi }
	__asm { call fn_009f3110 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, eax }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { inc ecx }
	__asm { add esp, 4 }
	__asm { inc bl }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jbe L_008b65f7 }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_008b3200 }
	__asm { L_008b65f7: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { mov byte ptr [eax], bl }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b6606: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor bl, bl }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { inc eax }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jbe L_008b661c }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008b3200 }
	__asm { L_008b661c: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, dword ptr [esi] }
	__asm { mov byte ptr [eax], bl }
	__asm { inc dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, 0x24 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jbe L_008b6639 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008b3200 }
	__asm { L_008b6639: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, dword ptr [esi] }
	__asm { push 0x24 }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 4], 0x24 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10518[];
extern "C" void fn_00841fd0();
extern "C" void fn_008b7f20();
// FUNCTION: ROBLOXSTUDIO 0x008b8af0
extern "C" __declspec(naked) void asm_008b8af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3ade8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x14 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_008b8b18 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_008b8b1a }
	__asm { L_008b8b18: }
	__asm { mov ecx, eax }
	__asm { L_008b8b1a: }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { lea edx, [ecx + eax] }
	__asm { cmp ecx, edx }
	__asm { je L_008b8b54 }
	__asm { mov al, byte ptr [ecx] }
	__asm { push ebx }
	__asm { xor bl, bl }
	__asm { cmp al, 0x2d }
	__asm { jne L_008b8b31 }
	__asm { mov bl, 1 }
	__asm { jmp L_008b8b35 }
	__asm { L_008b8b31: }
	__asm { cmp al, 0x2b }
	__asm { jne L_008b8b36 }
	__asm { L_008b8b35: }
	__asm { inc ecx }
	__asm { L_008b8b36: }
	__asm { push edx }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_008b7f20 }
	__asm { add esp, 0xc }
	__asm { mov cl, al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test bl, bl }
	__asm { pop ebx }
	__asm { je L_008b8b50 }
	__asm { neg eax }
	__asm { L_008b8b50: }
	__asm { test cl, cl }
	__asm { jne L_008b8b87 }
	__asm { L_008b8b54: }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x20], 0xe5d3b8 }
	__asm { mov dword ptr [ebp - 0x14], 0x12be0b8 }
	__asm { mov dword ptr [ebp - 0x10], 0x120f194 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00841fd0 }
	__asm { L_008b8b87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012eb20c[];
extern "C" void fn_004118e0();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008ba170();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008b8cd0
extern "C" __declspec(naked) void asm_008b8cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e096 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008ba170 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012eb20c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008b8d8f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb20c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d304 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb0e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008b8d8f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12eb0e0 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe6d76c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008b8e0d }
	__asm { push 0x120f1a0 }
	__asm { mov ecx, 0x120f1a0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008b8e0d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b8df8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b8e0d }
	__asm { L_008b8df8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b8e0d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012eb20c[];
extern "C" void fn_004118e0();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008ba1d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008b8e20
extern "C" __declspec(naked) void asm_008b8e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e096 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008ba1d0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012eb20c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008b8edf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb20c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d304 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb0e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008b8edf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12eb0e0 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe6d76c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008b8f5d }
	__asm { push 0x120f1a0 }
	__asm { mov ecx, 0x120f1a0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008b8f5d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b8f48 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b8f5d }
	__asm { L_008b8f48: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b8f5d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012eb20c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0087b310();
extern "C" void fn_008ba230();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008b8f70
extern "C" __declspec(naked) void asm_008b8f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ded6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008ba230 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012eb20c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008b902f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb20c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d304 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb0e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008b902f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12eb0e0 }
	__asm { call fn_0087b310 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe6d810 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008b90ad }
	__asm { push 0x120f1a0 }
	__asm { mov ecx, 0x120f1a0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008b90ad }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b9098 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b90ad }
	__asm { L_008b9098: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b90ad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012eb20c[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_008ba470();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008b9b10
extern "C" __declspec(naked) void asm_008b9b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e096 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, ecx }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx], eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008ba470 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012eb20c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_008b9bcf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb20c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d304 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb0e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_008b9bcf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12eb0e0 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe6d7bc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008b9c4d }
	__asm { push 0x120f1a0 }
	__asm { mov ecx, 0x120f1a0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008b9c4d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008b9c38 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008b9c4d }
	__asm { L_008b9c38: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008b9c4d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00825140();
extern "C" void fn_008bae20();
extern "C" void fn_008bb6c0();
// FUNCTION: ROBLOXSTUDIO 0x008ba4d0
extern "C" __declspec(naked) void asm_008ba4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e0e6 }
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
	__asm { call fn_008bae20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe6d74c }
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
	__asm { call fn_008bb6c0 }
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
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
extern "C" void fn_008bae20();
// FUNCTION: ROBLOXSTUDIO 0x008ba580
extern "C" __declspec(naked) void asm_008ba580()
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
	__asm { call fn_008bae20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe6d720 }
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
	__asm { call fn_007d5d30 }
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
	__asm { je L_008ba62e }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008ba62e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x008ba710
extern "C" __declspec(naked) void asm_008ba710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f10a4 }
	__asm { mov edi, ecx }
	__asm { push 0xe6da24 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59dc0 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0xe39978 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe56800 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe56840 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_007cb250();
extern "C" void fn_008b1920();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x008ba850
extern "C" __declspec(naked) void asm_008ba850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd33950 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f1034 }
	__asm { mov edi, ecx }
	__asm { push 0xe6d56c }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59d90 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0xe6d94c }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe6d95c }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { call fn_008b1920 }
	__asm { push 0xe56840 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [eax], 1 }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007939d0();
extern "C" void fn_008b19b0();
extern "C" void fn_00af37b0();
// FUNCTION: ROBLOXSTUDIO 0x008bab60
extern "C" __declspec(naked) void asm_008bab60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22f30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x11f10d4 }
	__asm { mov edi, ecx }
	__asm { push 0xe6d624 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe59dd8 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x30], eax }
	__asm { lea ecx, [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { call fn_008b19b0 }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov dword ptr [edi + 0x58], 0 }
	__asm { mov dword ptr [edi + 0x5c], 0 }
	__asm { mov dword ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x64], 0 }
	__asm { mov dword ptr [edi + 0x68], 0 }
	__asm { mov dword ptr [edi + 0x6c], 0 }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { push 0xe39978 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe6da38 }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe6da44 }
	__asm { push 2 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d5d30();
extern "C" void fn_008251b0();
extern "C" void fn_008bad70();
// FUNCTION: ROBLOXSTUDIO 0x008baca0
extern "C" __declspec(naked) void asm_008baca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008bad70 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe6d8a8 }
	__asm { call fn_007d5d30 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_008bad32 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_008bad32: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_008bad55 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008bad55: }
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

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012eb20c[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008bae20
extern "C" __declspec(naked) void asm_008bae20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e126 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012eb20c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_008bae9a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012eb20c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6d304 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12eb0e0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7860 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008bae9a: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12eb0e0 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe6d714 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008baf12 }
	__asm { push 0x120f1a0 }
	__asm { mov ecx, 0x120f1a0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008baf12 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008baefd }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008baf12 }
	__asm { L_008baefd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008baf12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e6d304[];
extern "C" char g_0131ab80[];
extern "C" void fn_004038a0();
extern "C" void fn_006b98f0();
extern "C" void fn_007b5bb0();
extern "C" void fn_008ba650();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008baf30
extern "C" __declspec(naked) void asm_008baf30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e140 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_008ba650 }
	__asm { mov byte ptr [esi + 0x64], 1 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [esi], 0xe6d3c4 }
	__asm { mov dword ptr [esi + 4], 0xe6d444 }
	__asm { mov dword ptr [esi + 0x18], 0xe6d44c }
	__asm { mov dword ptr [esi + 0x1c], 0xe6d458 }
	__asm { cmp byte ptr [g_00e6d304], cl }
	__asm { mov eax, 0x10 }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { push 0xe6d304 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_008bafd0 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bafd0: }
	__asm { cmp dword ptr [g_0131ab80], 0 }
	__asm { je L_008baffd }
	__asm { push 0xe6d304 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0xf13560 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_008baffd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [g_0131ab80], esi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_00513a40();
extern "C" void fn_008b9cd0();
extern "C" void fn_008b9d00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008bb390
extern "C" __declspec(naked) void asm_008bb390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3dd98 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_008bb3df }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_008bb3cd }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008bb3cd: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_008bb439 }
	__asm { L_008bb3df: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008b9cd0 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008b9d00 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { jb L_008bb439 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bb439: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x28] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x008bb6c0
extern "C" __declspec(naked) void asm_008bb6c0()
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
	__asm { call fn_007d5d30 }
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
	__asm { je L_008bb73d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008bb73d: }
	__asm { mov eax, dword ptr [ebp + 0x58] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008bb757 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x5c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008bb757: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x90 }
}

extern "C" char g_00e10528[];
extern "C" void fn_004028a0();
extern "C" void fn_00426850();
extern "C" void fn_00513910();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008bbba0
extern "C" __declspec(naked) void asm_008bbba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0x2c }
	__asm { call fn_00426850 }
	__asm { cmp eax, -1 }
	__asm { je L_008bbc07 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x14], 0xe6dac0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x20], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_008bbc07: }
	__asm { cmp dword ptr [ebp + 0x18], 1 }
	__asm { jae L_008bbc36 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x14], 0xe6dae4 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x20], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_008bbc36: }
	__asm { cmp byte ptr [esi + 0xa8], 0 }
	__asm { je L_008bbc63 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_008bbc50 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bbc50: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_008bbc63: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xa0] }
	__asm { call fn_00513910 }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebp + 8] }
	__asm { cmp eax, dword ptr [esi + 0xa0] }
	__asm { jne L_008bbc9b }
	__asm { call fn_004028a0 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_008bbc9b: }
	__asm { push ebx }
	__asm { mov bl, byte ptr [eax + 0x28] }
	__asm { call fn_004028a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e105a8[];
extern "C" void fn_00774920();
// FUNCTION: ROBLOXSTUDIO 0x008bbd30
extern "C" __declspec(naked) void asm_008bbd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x100 }
	__asm { mov eax, 0xe6db14 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e105a8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test bl, bl }
	__asm { mov edx, dword ptr [edi + 0x78] }
	__asm { mov ecx, 0xe6db0c }
	__asm { cmove eax, ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x100] }
	__asm { dec edx }
	__asm { je L_008bbd74 }
	__asm { dec edx }
	__asm { je L_008bbd6d }
	__asm { push 0xe6db54 }
	__asm { jmp L_008bbd79 }
	__asm { L_008bbd6d: }
	__asm { push 0xe6db38 }
	__asm { jmp L_008bbd79 }
	__asm { L_008bbd74: }
	__asm { push 0xe6db1c }
	__asm { L_008bbd79: }
	__asm { push 0x100 }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x100] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0xe6db70 }
	__asm { push 0xf13380 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { test bl, bl }
	__asm { je L_008bbdf5 }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { dec eax }
	__asm { je L_008bbdc2 }
	__asm { dec eax }
	__asm { lea eax, [ebp - 0x100] }
	__asm { je L_008bbdbb }
	__asm { push 0xe6db88 }
	__asm { jmp L_008bbdcd }
	__asm { L_008bbdbb: }
	__asm { push 0xe6daa8 }
	__asm { jmp L_008bbdcd }
	__asm { L_008bbdc2: }
	__asm { push 0xe6da8c }
	__asm { lea eax, [ebp - 0x100] }
	__asm { L_008bbdcd: }
	__asm { push 0x100 }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x100] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push 0xe6dba4 }
	__asm { push 0xf13380 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { L_008bbdf5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00412c00();
extern "C" void fn_007b4f50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008bbe00
extern "C" __declspec(naked) void asm_008bbe00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x70], 0 }
	__asm { je L_008bbe20 }
	__asm { push 0x12fc5f0 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { call fn_007b4f50 }
	__asm { L_008bbe20: }
	__asm { cmp dword ptr [esi + 0x74], 0 }
	__asm { je L_008bbe39 }
	__asm { push 0x12fc6c0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { call fn_007b4f50 }
	__asm { L_008bbe39: }
	__asm { cmp dword ptr [esi + 0x84], 1 }
	__asm { mov word ptr [esi + 0x80], 0x101 }
	__asm { mov byte ptr [esi + 0x82], 0 }
	__asm { je L_008bbe68 }
	__asm { push 0x12fc68c }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x84], 1 }
	__asm { call fn_007b4f50 }
	__asm { L_008bbe68: }
	__asm { cmp dword ptr [esi + 0x88], 1 }
	__asm { je L_008bbe87 }
	__asm { push 0x12fc8f8 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x88], 1 }
	__asm { call fn_007b4f50 }
	__asm { L_008bbe87: }
	__asm { add esi, 0xac }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xf }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { cmp esi, eax }
	__asm { je L_008bbee3 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_008bbeb6 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bbeb6: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00412c00 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { jb L_008bbee3 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bbee3: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00426850();
extern "C" void fn_004278c0();
extern "C" void fn_008bb390();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008bbf70
extern "C" __declspec(naked) void asm_008bbf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd32150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 1 }
	__asm { xor edi, edi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0x2c }
	__asm { call fn_00426850 }
	__asm { mov esi, eax }
	__asm { cmp esi, -1 }
	__asm { je L_008bc011 }
	__asm { mov byte ptr [ebp - 0x10], 0x2c }
	__asm { L_008bbfb7: }
	__asm { mov ecx, esi }
	__asm { sub ecx, edi }
	__asm { test ecx, ecx }
	__asm { jle L_008bbff8 }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_004278c0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xa0] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008bb390 }
	__asm { mov byte ptr [eax], 1 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_008bbff8 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bbff8: }
	__asm { push 1 }
	__asm { lea edi, [esi + 1] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00426850 }
	__asm { mov esi, eax }
	__asm { cmp esi, -1 }
	__asm { jne L_008bbfb7 }
	__asm { L_008bc011: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_008bc025 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bc025: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00403540();
extern "C" void fn_007b4f50();
extern "C" void fn_008bb390();
extern "C" void fn_008bbba0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008bc1d0
extern "C" __declspec(naked) void asm_008bc1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0xa8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_008bc24b }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, esi }
	__asm { call fn_008bbba0 }
	__asm { mov bl, byte ptr [ebp + 0x20] }
	__asm { cmp al, bl }
	__asm { je L_008bc24b }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xa0] }
	__asm { call fn_008bb390 }
	__asm { push 0x12fc6f4 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [eax], bl }
	__asm { call fn_007b4f50 }
	__asm { L_008bc24b: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_008bc25c }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bc25c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_012fc984[];
extern "C" void fn_005e8b40();
extern "C" void fn_008bcf30();
// FUNCTION: ROBLOXSTUDIO 0x008bc2a0
extern "C" __declspec(naked) void asm_008bc2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe6dc74 }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { call fn_005e8b40 }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi], 0xe6dc80 }
	__asm { mov dword ptr [edi + 0x34], 0xf }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0xf }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov byte ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x74], 0xf }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov byte ptr [edi + 0x60], 0 }
	__asm { mov dword ptr [edi + 0x8c], 0xf }
	__asm { mov dword ptr [edi + 0x88], 0 }
	__asm { mov byte ptr [edi + 0x78], 0 }
	__asm { mov dword ptr [edi + 0xac], 0xf }
	__asm { mov dword ptr [edi + 0xa8], 0 }
	__asm { mov byte ptr [edi + 0x98], 0 }
	__asm { mov dword ptr [edi + 0xc4], 0xf }
	__asm { mov dword ptr [edi + 0xc0], 0 }
	__asm { mov byte ptr [edi + 0xb0], 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov dword ptr [g_012fc984], edi }
	__asm { call fn_008bcf30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b69050();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008bc3a0
extern "C" __declspec(naked) void asm_008bc3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe6dc80 }
	__asm { cmp dword ptr [esi + 0xc4], 0x10 }
	__asm { jb L_008bc3c4 }
	__asm { push dword ptr [esi + 0xb0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bc3c4: }
	__asm { mov dword ptr [esi + 0xc4], 0xf }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov byte ptr [esi + 0xb0], 0 }
	__asm { cmp dword ptr [esi + 0xac], 0x10 }
	__asm { jb L_008bc3f6 }
	__asm { push dword ptr [esi + 0x98] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bc3f6: }
	__asm { mov dword ptr [esi + 0xac], 0xf }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { mov byte ptr [esi + 0x98], 0 }
	__asm { cmp dword ptr [esi + 0x8c], 0x10 }
	__asm { jb L_008bc425 }
	__asm { push dword ptr [esi + 0x78] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bc425: }
	__asm { mov dword ptr [esi + 0x8c], 0xf }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov byte ptr [esi + 0x78], 0 }
	__asm { cmp dword ptr [esi + 0x74], 0x10 }
	__asm { jb L_008bc44e }
	__asm { push dword ptr [esi + 0x60] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bc44e: }
	__asm { mov dword ptr [esi + 0x74], 0xf }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov byte ptr [esi + 0x60], 0 }
	__asm { cmp dword ptr [esi + 0x4c], 0x10 }
	__asm { jb L_008bc471 }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bc471: }
	__asm { mov dword ptr [esi + 0x4c], 0xf }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov byte ptr [esi + 0x38], 0 }
	__asm { cmp dword ptr [esi + 0x34], 0x10 }
	__asm { jb L_008bc494 }
	__asm { push dword ptr [esi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bc494: }
	__asm { mov dword ptr [esi + 0x34], 0xf }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi], 0xe6dc74 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00b69050 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
extern "C" void fn_00402fd0();
extern "C" void fn_00513a40();
extern "C" void fn_008b9d00();
extern "C" void fn_00b67f70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008bc4d0
extern "C" __declspec(naked) void asm_008bc4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3dd98 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_008bc523 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_008bc50d }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_008bc50d: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_008bc5b8 }
	__asm { L_008bc523: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jae L_008bc552 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { inc eax }
	__asm { je L_008bc55d }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push edi }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_008bc55d }
	__asm { L_008bc552: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_008bc55d: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b67f70 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_008b9d00 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { jb L_008bc5b8 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bc5b8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x28] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10548[];
extern "C" char g_00e10580[];
extern "C" void fn_0042ea80();
extern "C" void fn_0042ee70();
// FUNCTION: ROBLOXSTUDIO 0x008bded0
extern "C" __declspec(naked) void asm_008bded0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov edx, ecx }
	__asm { sub edx, eax }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov edx, dword ptr [eax - 0xc] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { test eax, eax }
	__asm { js L_008bdf79 }
	__asm { test ecx, ecx }
	__asm { jne L_008bdf00 }
	__asm { xor ebx, ebx }
	__asm { jmp L_008bdf10 }
	__asm { L_008bdf00: }
	__asm { push eax }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10580] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { mov ebx, eax }
	__asm { L_008bdf10: }
	__asm { mov ecx, 0x7fffffff }
	__asm { sub ecx, ebx }
	__asm { cmp ecx, edx }
	__asm { jl L_008bdf83 }
	__asm { lea esi, [edx + ebx] }
	__asm { test esi, esi }
	__asm { js L_008bdf8d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, 1 }
	__asm { sub ecx, dword ptr [eax - 4] }
	__asm { mov eax, dword ptr [eax - 8] }
	__asm { sub eax, esi }
	__asm { or ecx, eax }
	__asm { jge L_008bdf40 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0042ea80 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { L_008bdf40: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, edx }
	__asm { ja L_008bdf4d }
	__asm { add eax, ecx }
	__asm { jmp L_008bdf50 }
	__asm { L_008bdf4d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_008bdf50: }
	__asm { push ebx }
	__asm { push eax }
	__asm { lea eax, [ecx + edx] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10548] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 0x10 }
	__asm { cmp esi, dword ptr [eax - 8] }
	__asm { jg L_008bdf79 }
	__asm { mov dword ptr [eax - 0xc], esi }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov byte ptr [esi + eax], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008bdf79: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
	__asm { L_008bdf83: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
	__asm { L_008bdf8d: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
}

extern "C" char g_00e10588[];
extern "C" void fn_0042ebb0();
extern "C" void fn_0042ee70();
extern "C" void fn_00460390();
// FUNCTION: ROBLOXSTUDIO 0x008bdfa0
extern "C" __declspec(naked) void asm_008bdfa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { xor eax, eax }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { cmovs edx, eax }
	__asm { test esi, esi }
	__asm { cmovs esi, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax - 0xc] }
	__asm { mov eax, 0x7fffffff }
	__asm { sub eax, esi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { cmp eax, edx }
	__asm { jl L_008be046 }
	__asm { lea eax, [edx + esi] }
	__asm { cmp eax, edi }
	__asm { jle L_008bdfd9 }
	__asm { mov esi, edi }
	__asm { sub esi, edx }
	__asm { L_008bdfd9: }
	__asm { test esi, esi }
	__asm { jle L_008be02f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, edi }
	__asm { sub edi, edx }
	__asm { sub edi, esi }
	__asm { sub ebx, esi }
	__asm { inc edi }
	__asm { cmp dword ptr [eax - 4], 1 }
	__asm { jle L_008bdffd }
	__asm { push dword ptr [eax - 0xc] }
	__asm { call fn_0042ebb0 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_008bdffd: }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { add ecx, edx }
	__asm { push edi }
	__asm { lea eax, [ecx + esi] }
	__asm { push eax }
	__asm { push edi }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10588] }
	__asm { push eax }
	__asm { call fn_00460390 }
	__asm { add esp, 0x14 }
	__asm { test ebx, ebx }
	__asm { js L_008be03c }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp ebx, dword ptr [eax - 8] }
	__asm { jg L_008be03c }
	__asm { mov dword ptr [eax - 0xc], ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [ebx + eax], 0 }
	__asm { pop ebx }
	__asm { L_008be02f: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax - 0xc] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008be03c: }
	__asm { push 0x80070057 }
	__asm { call fn_0042ee70 }
	__asm { L_008be046: }
	__asm { push 0x80070216 }
	__asm { call fn_0042ee70 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x008bed10
extern "C" __declspec(naked) void asm_008bed10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd211e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x12105f0 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008bedb9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_008bedb9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008beda4 }
	__asm { push 0x47 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008bedb9 }
	__asm { L_008beda4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe521a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008bedb9: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
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
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x008bede0
extern "C" __declspec(naked) void asm_008bede0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd211e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x1210668 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008bee89 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_008bee89 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008bee74 }
	__asm { push 0x47 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008bee89 }
	__asm { L_008bee74: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe521a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008bee89: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
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
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x008beeb0
extern "C" __declspec(naked) void asm_008beeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd211e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00412590 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { mov dword ptr [esi + 0x10], 0x12c32a4 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_008bef59 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_008bef59 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008bef44 }
	__asm { push 0x47 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008bef59 }
	__asm { L_008bef44: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe521a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008bef59: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012fa594[];
extern "C" char g_012fa598[];
extern "C" char g_012fa59c[];
extern "C" char g_012fa5a0[];
extern "C" void fn_008bff30();
extern "C" void fn_008c0610();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008bef80
extern "C" __declspec(naked) void asm_008bef80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e211 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012fa5a0] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_008befda }
	__asm { or eax, 1 }
	__asm { push 0xdeb860 }
	__asm { mov dword ptr [g_012fa5a0], eax }
	__asm { mov dword ptr [g_012fa594], 0x12c32a4 }
	__asm { mov dword ptr [g_012fa59c], 0x86e970 }
	__asm { mov dword ptr [g_012fa598], 0x86efa0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_008befda: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x12fa594 }
	__asm { jne L_008bf002 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_008c0610 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008bf002: }
	__asm { test ecx, ecx }
	__asm { je L_008bf018 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_008bf018: }
	__asm { lea ecx, [esi + 4] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008bf034 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008bff30 }
	__asm { L_008bf034: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0x12fa594 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_00e10528[];
extern "C" char g_012fcdd0[];
extern "C" char g_012fcdec[];
extern "C" void fn_0043fa00();
extern "C" void fn_006bc950();
extern "C" void fn_008beeb0();
extern "C" void fn_008bef80();
extern "C" void fn_008c04d0();
extern "C" void fn_00cf6609();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008bf580
extern "C" __declspec(naked) void asm_008bf580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd2e696 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { cmp eax, 0x12be320 }
	__asm { je L_008bf5be }
	__asm { push eax }
	__asm { mov ecx, 0x12be320 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_008bf66c }
	__asm { L_008bf5be: }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_0043fa00 }
	__asm { push 0x131b1b0 }
	__asm { call fn_006bc950 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0xe61960 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { lea ecx, [esi + 4] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008bef80 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c04d0 }
	__asm { mov eax, dword ptr [g_012fcdec] }
	__asm { test al, 1 }
	__asm { jne L_008bf666 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012fcdec], eax }
	__asm { push 0 }
	__asm { push 0x1032f48 }
	__asm { mov ecx, 0x12fcdd0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_008beeb0 }
	__asm { push 0xdefa70 }
	__asm { mov dword ptr [g_012fcdd0], 0xe6f1d4 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008bf666: }
	__asm { mov dword ptr [esi], 0x12fcdd0 }
	__asm { L_008bf66c: }
	__asm { add esi, 4 }
	__asm { je L_008bf6ac }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_008bf67b }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_008bf680 }
	__asm { L_008bf67b: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_008bf680: }
	__asm { cmp ecx, 0x12c32a4 }
	__asm { je L_008bf6a4 }
	__asm { test eax, eax }
	__asm { je L_008bf690 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_008bf695 }
	__asm { L_008bf690: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_008bf695: }
	__asm { push 0x12c32a4 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_008bf6ac }
	__asm { L_008bf6a4: }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { jne L_008bf6d5 }
	__asm { L_008bf6ac: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 0xe6f1d8 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_008bf6d5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fcdb8[];
extern "C" void fn_006b9740();
extern "C" void fn_006bc950();
extern "C" void fn_008bfc00();
extern "C" void fn_008d8680();
extern "C" void fn_00a35780();
extern "C" void fn_00a36120();
extern "C" void fn_00a39190();
// FUNCTION: ROBLOXSTUDIO 0x008bfe40
extern "C" __declspec(naked) void asm_008bfe40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e79b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_008bfc00 }
	__asm { push 0x12fcdcc }
	__asm { call fn_006bc950 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_008bfec3 }
	__asm { test ecx, ecx }
	__asm { jne L_008bfec3 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008bfeb2 }
	__asm { push 0x1a2 }
	__asm { push 0xe6eef0 }
	__asm { push 0xe6f17c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008bfec3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008bfeb2: }
	__asm { movzx eax, al }
	__asm { push 0xe6f180 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008bfec3: }
	__asm { cmp byte ptr [g_012fcdb8], 0 }
	__asm { jne L_008bfee6 }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00a35780 }
	__asm { push 0xffffd8f0 }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00a39190 }
	__asm { add esp, 0xc }
	__asm { jmp L_008bff13 }
	__asm { L_008bfee6: }
	__asm { push esi }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_008d8680 }
	__asm { push dword ptr [edi + 8] }
	__asm { mov esi, eax }
	__asm { call fn_00a35780 }
	__asm { push 1 }
	__asm { push esi }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00a36120 }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a39190 }
	__asm { add esp, 0x1c }
	__asm { pop esi }
	__asm { L_008bff13: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fcdb8[];
extern "C" void fn_008c00e0();
extern "C" void fn_008d8680();
extern "C" void fn_00a35890();
extern "C" void fn_00a39190();
// FUNCTION: ROBLOXSTUDIO 0x008bff30
extern "C" __declspec(naked) void asm_008bff30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e808 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_008c00e0 }
	__asm { mov dword ptr [edi], 0xe61960 }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008c0024 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 8], eax }
	__asm { sete al }
	__asm { test al, al }
	__asm { jne L_008c0024 }
	__asm { cmp byte ptr [g_012fcdb8], 0 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { jne L_008bffdc }
	__asm { test eax, eax }
	__asm { je L_008bff96 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_008bff98 }
	__asm { L_008bff96: }
	__asm { xor eax, eax }
	__asm { L_008bff98: }
	__asm { push dword ptr [ebx + 0x1c] }
	__asm { push 0xffffd8f0 }
	__asm { push eax }
	__asm { call fn_00a35890 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_008bffb5 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_008bffb7 }
	__asm { L_008bffb5: }
	__asm { xor eax, eax }
	__asm { L_008bffb7: }
	__asm { push 0xffffd8f0 }
	__asm { push eax }
	__asm { call fn_00a39190 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008bffdc: }
	__asm { test eax, eax }
	__asm { je L_008bffe5 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_008bffe7 }
	__asm { L_008bffe5: }
	__asm { xor eax, eax }
	__asm { L_008bffe7: }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_008d8680 }
	__asm { push dword ptr [ebx + 0x1c] }
	__asm { mov esi, eax }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35890 }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a39190 }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { pop esi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008c0024: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fcdb8[];
extern "C" void fn_008c0180();
extern "C" void fn_008d8680();
extern "C" void fn_00a357b0();
extern "C" void fn_00a36120();
extern "C" void fn_00a39190();
// FUNCTION: ROBLOXSTUDIO 0x008c0040
extern "C" __declspec(naked) void asm_008c0040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e808 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_008c0180 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push ebx }
	__asm { mov dword ptr [edi], 0xe61960 }
	__asm { call fn_00a357b0 }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [g_012fcdb8], 0 }
	__asm { jne L_008c009b }
	__asm { push 0xffffd8f0 }
	__asm { push ebx }
	__asm { call fn_00a39190 }
	__asm { add esp, 8 }
	__asm { jmp L_008c00bc }
	__asm { L_008c009b: }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_008d8680 }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00a36120 }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a39190 }
	__asm { add esp, 0x18 }
	__asm { pop esi }
	__asm { L_008c00bc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012fcdc8[];
extern "C" void fn_0043fa70();
extern "C" void fn_0049a1e0();
extern "C" void fn_006b97e0();
extern "C" void fn_008c0ac0();
extern "C" void fn_008c1880();
// FUNCTION: ROBLOXSTUDIO 0x008c0750
extern "C" __declspec(naked) void asm_008c0750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd46528 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0x14] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_008c0783 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { L_008c0783: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { test eax, eax }
	__asm { je L_008c0799 }
	__asm { push eax }
	__asm { call fn_0043fa70 }
	__asm { add esp, 4 }
	__asm { L_008c0799: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { cmp eax, dword ptr [ebx + 0x18] }
	__asm { je L_008c07db }
	__asm { push 0x12fcdc8 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], 0x12fcdc8 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c1880 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_008c0ac0 }
	__asm { mov byte ptr [g_012fcdc8], 0 }
	__asm { L_008c07db: }
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

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc96e[];
extern "C" void fn_0043fa70();
extern "C" void fn_006b8aae();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_008bfe40();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008c09d0
extern "C" __declspec(naked) void asm_008c09d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd30f5b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_008c0a30 }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { je L_008c0a30 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008c0a1f }
	__asm { push 0x6f }
	__asm { push 0xe6eef0 }
	__asm { push 0xe6ef30 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c0a30 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008c0a1f: }
	__asm { movzx eax, al }
	__asm { push 0xe6ef40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c0a30: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_008c0aa4 }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008c0a5b }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_008bfe40 }
	__asm { mov edi, eax }
	__asm { jmp L_008c0a5d }
	__asm { L_008c0a5b: }
	__asm { xor edi, edi }
	__asm { L_008c0a5d: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_008c0a71 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { L_008c0a71: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { test eax, eax }
	__asm { je L_008c0a84 }
	__asm { push eax }
	__asm { call fn_0043fa70 }
	__asm { add esp, 4 }
	__asm { L_008c0a84: }
	__asm { mov al, byte ptr [g_012fc96e] }
	__asm { test al, al }
	__asm { je L_008c0aa4 }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { movzx eax, al }
	__asm { push esi }
	__asm { push 0xe6ef9c }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_008c0aa4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10264[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009e42e0();
extern "C" void fn_00a35150();
extern "C" void fn_00a44ad0();
// FUNCTION: ROBLOXSTUDIO 0x008c1070
extern "C" __declspec(naked) void asm_008c1070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd58d49 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_00a35150 }
	__asm { mov ebx, eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_009e42e0 }
	__asm { add esp, 0xc }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { test ebx, ebx }
	__asm { jle L_008c1159 }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { L_008c10d2: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x78787879 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { jbe L_008c116c }
	__asm { push 0 }
	__asm { lea eax, [edi + ebx] }
	__asm { push eax }
	__asm { inc esi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00a44ad0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { add esp, 0x10 }
	__asm { test cl, cl }
	__asm { je L_008c114c }
	__asm { test al, al }
	__asm { jne L_008c114c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008c113b }
	__asm { push 0x93 }
	__asm { push 0xe6edb0 }
	__asm { push 0xe4f0b0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c114c }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_008c113b: }
	__asm { movzx eax, cl }
	__asm { push 0xe6edf8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c114c: }
	__asm { add edi, 0x44 }
	__asm { cmp esi, dword ptr [ebp - 0x10] }
	__asm { jl L_008c10d2 }
	__asm { pop edi }
	__asm { L_008c1159: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008c116c: }
	__asm { push 0x1017a80 }
	__asm { call dword ptr [g_00e10264] }
}

extern "C" char g_012fcdb8[];
extern "C" void fn_008c0180();
extern "C" void fn_008d8680();
extern "C" void fn_00a357b0();
extern "C" void fn_00a36120();
extern "C" void fn_00a39190();
// FUNCTION: ROBLOXSTUDIO 0x008c13d0
extern "C" __declspec(naked) void asm_008c13d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2e908 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_008c0180 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push ebx }
	__asm { mov dword ptr [edi], 0xe61960 }
	__asm { call fn_00a357b0 }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [g_012fcdb8], 0 }
	__asm { jne L_008c1432 }
	__asm { push 0xffffd8f0 }
	__asm { push ebx }
	__asm { call fn_00a39190 }
	__asm { add esp, 8 }
	__asm { jmp L_008c1453 }
	__asm { L_008c1432: }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_008d8680 }
	__asm { mov esi, eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00a36120 }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a39190 }
	__asm { add esp, 0x18 }
	__asm { pop esi }
	__asm { L_008c1453: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc96e[];
extern "C" void fn_006b8a90();
extern "C" void fn_00a455d0();
// FUNCTION: ROBLOXSTUDIO 0x008c1850
extern "C" __declspec(naked) void asm_008c1850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov esi, dword ptr [esi] }
	__asm { xor ebx, ebx }
	__asm { cmp esi, edi }
	__asm { je L_008c1879 }
	__asm { L_008c1864: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00a455d0 }
	__asm { add esi, 0x44 }
	__asm { add esp, 8 }
	__asm { add ebx, eax }
	__asm { cmp esi, edi }
	__asm { jne L_008c1864 }
	__asm { L_008c1879: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_008c18e2 }
	__asm { mov al, byte ptr [g_012fc96e] }
	__asm { test al, al }
	__asm { je L_008c18a5 }
	__asm { push ecx }
	__asm { movzx eax, al }
	__asm { push 0xe6eec4 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_008c18a5: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_008c18b2 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_008c18b2: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_008c18bf }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { L_008c18bf: }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { cmp dword ptr [ecx + 4], esi }
	__asm { jne L_008c18cd }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_008c18cd: }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { L_008c18e2: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012fc96e[];
extern "C" char g_012fcdb8[];
extern "C" void fn_0043fa70();
extern "C" void fn_006b8a90();
extern "C" void fn_006b8aae();
extern "C" void fn_008d8680();
extern "C" void fn_00a392a0();
// FUNCTION: ROBLOXSTUDIO 0x008c18f0
extern "C" __declspec(naked) void asm_008c18f0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x1c], 0 }
	__asm { je L_008c1980 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_008c1980 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 8], eax }
	__asm { sete al }
	__asm { test al, al }
	__asm { jne L_008c1980 }
	__asm { mov al, byte ptr [g_012fc96e] }
	__asm { test al, al }
	__asm { je L_008c192d }
	__asm { push dword ptr [esi + 0x18] }
	__asm { movzx eax, al }
	__asm { push 0xe6f150 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_008c192d: }
	__asm { cmp byte ptr [g_012fcdb8], 0 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { jne L_008c1957 }
	__asm { test eax, eax }
	__asm { je L_008c1942 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_008c1944 }
	__asm { L_008c1942: }
	__asm { xor eax, eax }
	__asm { L_008c1944: }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push 0xffffd8f0 }
	__asm { push eax }
	__asm { call fn_00a392a0 }
	__asm { add esp, 0xc }
	__asm { jmp L_008c1979 }
	__asm { L_008c1957: }
	__asm { test eax, eax }
	__asm { je L_008c1960 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_008c1962 }
	__asm { L_008c1960: }
	__asm { xor eax, eax }
	__asm { L_008c1962: }
	__asm { push eax }
	__asm { call fn_008d8680 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push 0xffffd8f0 }
	__asm { push eax }
	__asm { call fn_00a392a0 }
	__asm { add esp, 0x10 }
	__asm { L_008c1979: }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { L_008c1980: }
	__asm { mov al, byte ptr [g_012fc96e] }
	__asm { test al, al }
	__asm { je L_008c19a0 }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x18] }
	__asm { movzx eax, al }
	__asm { push esi }
	__asm { push 0xe6efc4 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_008c19a0: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_008c19b6 }
	__asm { push eax }
	__asm { call fn_0043fa70 }
	__asm { pop ecx }
	__asm { L_008c19b6: }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008c1a60
extern "C" __declspec(naked) void asm_008c1a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe6f598 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe6f5d8 }
	__asm { mov dword ptr [esi + 8], 0xe6f5e8 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008c1b0a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_008c1af6 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008c1af6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c1b0a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x008c1b20
extern "C" __declspec(naked) void asm_008c1b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe6f590 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe6f5a8 }
	__asm { mov dword ptr [esi + 8], 0xe6f5b8 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008c1bca }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_008c1bb6 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008c1bb6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c1bca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_008c1a60();
extern "C" void fn_008c5910();
// FUNCTION: ROBLOXSTUDIO 0x008c23c0
extern "C" __declspec(naked) void asm_008c23c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008c240b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_008c240b: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008c2434 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_008c1a60 }
	__asm { mov dword ptr [esi], 0xe6f5f0 }
	__asm { mov dword ptr [esi + 8], 0xe6f600 }
	__asm { jmp L_008c2436 }
	__asm { L_008c2434: }
	__asm { xor esi, esi }
	__asm { L_008c2436: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c5910 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_008c245a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_008c245a: }
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
extern "C" void fn_008c1b20();
extern "C" void fn_008c5ac0();
// FUNCTION: ROBLOXSTUDIO 0x008c2470
extern "C" __declspec(naked) void asm_008c2470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e08c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_008c24bb }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_008c24bb: }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008c24e4 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_008c1b20 }
	__asm { mov dword ptr [esi], 0xe6f5c0 }
	__asm { mov dword ptr [esi + 8], 0xe6f5d0 }
	__asm { jmp L_008c24e6 }
	__asm { L_008c24e4: }
	__asm { xor esi, esi }
	__asm { L_008c24e6: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c5ac0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_008c250a }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_008c250a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00797c50();
extern "C" void fn_007cb250();
extern "C" void fn_007d54e0();
extern "C" void fn_008251b0();
extern "C" void fn_008c2cf0();
// FUNCTION: ROBLOXSTUDIO 0x008c2ad0
extern "C" __declspec(naked) void asm_008c2ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd40150 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008c2cf0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe6f418 }
	__asm { call fn_007d54e0 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_008251b0 }
	__asm { mov ebx, dword ptr [esi + 0x20] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00797c50 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, 0x30c30c2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_008c2b62 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_008c2b62: }
	__asm { inc eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { test eax, eax }
	__asm { je L_008c2b85 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_008c2b85: }
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

extern "C" char g_012e5564[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00825860();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008c2da0
extern "C" __declspec(naked) void asm_008c2da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ea0e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012e5564] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_008c2e15 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5564], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6f218 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5438 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008c2e15: }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push 0x12e5438 }
	__asm { call fn_00825860 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e5564[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x008c2e50
extern "C" __declspec(naked) void asm_008c2e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2ea36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e5564] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_008c2eca }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e5564], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe6f218 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x11 }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e5438 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7d00 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_008c2eca: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e5438 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe6f468 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_008c2f42 }
	__asm { push 0x12109bc }
	__asm { mov ecx, 0x12109bc }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_008c2f42 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008c2f2d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c2f42 }
	__asm { L_008c2f2d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c2f42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00478ac0();
extern "C" void fn_006b9740();
extern "C" void fn_008c3ec0();
// FUNCTION: ROBLOXSTUDIO 0x008c5570
extern "C" __declspec(naked) void asm_008c5570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test bl, bl }
	__asm { je L_008c55dc }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 2 }
	__asm { je L_008c55dc }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008c55cb }
	__asm { push 0x14a }
	__asm { push 0xe52268 }
	__asm { push 0xe55d80 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c55dc }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_008c55cb: }
	__asm { movzx eax, bl }
	__asm { push 0xe55d98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c55dc: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008c55e8 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_008c55ea }
	__asm { L_008c55e8: }
	__asm { xor edi, edi }
	__asm { L_008c55ea: }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 0x48 }
	__asm { push eax }
	__asm { call fn_00478ac0 }
	__asm { fld qword ptr [eax] }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 4 }
	__asm { fstp qword ptr [ebp - 0xc] }
	__asm { push eax }
	__asm { call fn_00478ac0 }
	__asm { fld qword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { fld qword ptr [ebp - 0xc] }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { fstp qword ptr [esp + 8] }
	__asm { add ecx, edi }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_008c3ec0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043f040();
extern "C" void fn_006b9740();
extern "C" void fn_009ec9b0();
// FUNCTION: ROBLOXSTUDIO 0x008c5630
extern "C" __declspec(naked) void asm_008c5630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test bl, bl }
	__asm { je L_008c5694 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { sub edx, dword ptr [eax] }
	__asm { mov eax, 0x78787879 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { je L_008c5694 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008c5683 }
	__asm { push 0x114 }
	__asm { push 0xe52268 }
	__asm { push 0xe541b4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c5694 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_008c5683: }
	__asm { movzx eax, bl }
	__asm { push 0xe541c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c5694: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_008c56a0 }
	__asm { add eax, -0x1c }
	__asm { jmp L_008c56a2 }
	__asm { L_008c56a0: }
	__asm { xor eax, eax }
	__asm { L_008c56a2: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009ec9b0 }
	__asm { mov ecx, eax }
	__asm { call fn_0043f040 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" char g_012fce31[];
extern "C" void fn_004033d0();
extern "C" void fn_00773930();
extern "C" void fn_007739a0();
extern "C" void fn_00c307f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008c5830
extern "C" __declspec(naked) void asm_008c5830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_008c58c4 }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00c307f0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_008c58c4 }
	__asm { cmp byte ptr [g_012fce31], al }
	__asm { je L_008c5894 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp + 8], 0xe6f554 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x20], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_008c5894: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { push 0xe6f554 }
	__asm { push 3 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00773930 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { L_008c58c4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 0xb8] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x008c7050
extern "C" __declspec(naked) void asm_008c7050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe72878 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe72a6c }
	__asm { mov dword ptr [esi + 8], 0xe72a7c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008c70fa }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_008c70e6 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008c70e6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c70fa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x008c7110
extern "C" __declspec(naked) void asm_008c7110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd29818 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 8], 0xe72880 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe72a3c }
	__asm { mov dword ptr [esi + 8], 0xe72a4c }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008c71ba }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_008c71a6 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008c71a6: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c71ba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00403540();
extern "C" void fn_005290b0();
// FUNCTION: ROBLOXSTUDIO 0x008c7410
extern "C" __declspec(naked) void asm_008c7410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5a5e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0x14], 0xf }
	__asm { mov dword ptr [ebx + 0x10], 0 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { jae L_008c745f }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { inc eax }
	__asm { je L_008c7469 }
	__asm { push eax }
	__asm { push esi }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_008c7469 }
	__asm { L_008c745f: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_008c7469: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebx + 0x14], eax }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { lea edi, [ebx + 0x18] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { add esi, 0x18 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [esi + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_005290b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008caf00();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x008c74e0
extern "C" __declspec(naked) void asm_008c74e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00b25b30 }
	__asm { mov ecx, esi }
	__asm { call fn_008caf00 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008c755b }
	__asm { test al, 1 }
	__asm { jne L_008c7554 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008c7554 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c7554: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_008c755b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008c7582 }
	__asm { test al, 1 }
	__asm { jne L_008c7582 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008c7582 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c7582: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_008cafd0();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x008c75a0
extern "C" __declspec(naked) void asm_008c75a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00b25b30 }
	__asm { mov ecx, esi }
	__asm { call fn_008cafd0 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008c761b }
	__asm { test al, 1 }
	__asm { jne L_008c7614 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008c7614 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c7614: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_008c761b: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008c7642 }
	__asm { test al, 1 }
	__asm { jne L_008c7642 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008c7642 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c7642: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_008c00e0();
extern "C" void fn_008c0570();
extern "C" void fn_008cb630();
// FUNCTION: ROBLOXSTUDIO 0x008c7a50
extern "C" __declspec(naked) void asm_008c7a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f040 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c00e0 }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { add ecx, 0xc }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008c00e0 }
	__asm { mov ecx, esi }
	__asm { call fn_008cb630 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008c0570 }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x2c }
}

extern "C" void fn_008c74e0();
extern "C" void fn_00b25b30();
extern "C" void fn_00b33fa0();
// FUNCTION: ROBLOXSTUDIO 0x008c8370
extern "C" __declspec(naked) void asm_008c8370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f0f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_008c74e0 }
	__asm { mov edi, eax }
	__asm { cmp esi, edi }
	__asm { je L_008c8406 }
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
	__asm { je L_008c8406 }
	__asm { test al, 1 }
	__asm { jne L_008c83ff }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008c83ff }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c83ff: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_008c8406: }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008c8431 }
	__asm { test al, 1 }
	__asm { jne L_008c842a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008c842a }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c842a: }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { L_008c8431: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008c8458 }
	__asm { test al, 1 }
	__asm { jne L_008c8458 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008c8458 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c8458: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_008c75a0();
extern "C" void fn_00b25b30();
extern "C" void fn_00b33fa0();
// FUNCTION: ROBLOXSTUDIO 0x008c8470
extern "C" __declspec(naked) void asm_008c8470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f0f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_008c75a0 }
	__asm { mov edi, eax }
	__asm { cmp esi, edi }
	__asm { je L_008c8506 }
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
	__asm { je L_008c8506 }
	__asm { test al, 1 }
	__asm { jne L_008c84ff }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008c84ff }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c84ff: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_008c8506: }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008c8531 }
	__asm { test al, 1 }
	__asm { jne L_008c852a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008c852a }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c852a: }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { L_008c8531: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008c8558 }
	__asm { test al, 1 }
	__asm { jne L_008c8558 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008c8558 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c8558: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_008c00e0();
extern "C" void fn_008c0570();
extern "C" void fn_008c7a50();
extern "C" void fn_00b33fa0();
// FUNCTION: ROBLOXSTUDIO 0x008c87d0
extern "C" __declspec(naked) void asm_008c87d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f128 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x44 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { add ecx, 0xc }
	__asm { mov dword ptr [ecx - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008c00e0 }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_008c7a50 }
	__asm { mov edi, eax }
	__asm { cmp esi, edi }
	__asm { je L_008c887b }
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
	__asm { je L_008c887b }
	__asm { test al, 1 }
	__asm { jne L_008c8874 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008c8874 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c8874: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_008c887b: }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008c88a6 }
	__asm { test al, 1 }
	__asm { jne L_008c889f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008c889f }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008c889f: }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { L_008c88a6: }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x008c8c40
extern "C" __declspec(naked) void asm_008c8c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, ebx }
	__asm { je L_008c8cc4 }
	__asm { push edi }
	__asm { L_008c8c50: }
	__asm { mov edi, dword ptr [esi] }
	__asm { test edi, edi }
	__asm { je L_008c8cbc }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { add edi, 4 }
	__asm { test al, al }
	__asm { je L_008c8c9f }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jg L_008c8c9f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008c8c8e }
	__asm { push 0x9b }
	__asm { push 0x10027e0 }
	__asm { push 0x1007e84 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008c8c9f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008c8c8e: }
	__asm { movzx eax, al }
	__asm { push 0x1007e90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008c8c9f: }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_008c8cbc }
	__asm { test edi, edi }
	__asm { je L_008c8cbc }
	__asm { lea ecx, [edi - 4] }
	__asm { test ecx, ecx }
	__asm { je L_008c8cbc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { L_008c8cbc: }
	__asm { add esi, 0x18 }
	__asm { cmp esi, ebx }
	__asm { jne L_008c8c50 }
	__asm { pop edi }
	__asm { L_008c8cc4: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00833c40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008cae20
extern "C" __declspec(naked) void asm_008cae20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ab10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, esp }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, 0xe72aa8 }
	__asm { mov ecx, esi }
	__asm { call fn_00833c40 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov bl, al }
	__asm { jb L_008caec9 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008caec9: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { mov dword ptr [edi], esi }
	__asm { jb L_008caee3 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008caee3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00aec810();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x008caf00
extern "C" __declspec(naked) void asm_008caf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00b25b30 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b25b30 }
	__asm { mov esi, 0xe72b68 }
	__asm { mov ecx, esi }
	__asm { call fn_00aec810 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008caf8a }
	__asm { test cl, 1 }
	__asm { jne L_008caf83 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_008caf83 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008caf83: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_008caf8a: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008cafba }
	__asm { test al, 1 }
	__asm { jne L_008cafba }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008cafba }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008cafba: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00aec810();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x008cafd0
extern "C" __declspec(naked) void asm_008cafd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_00b25b30 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push esi }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00b25b30 }
	__asm { mov esi, 0xe72b60 }
	__asm { mov ecx, esi }
	__asm { call fn_00aec810 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_008cb05a }
	__asm { test cl, 1 }
	__asm { jne L_008cb053 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_008cb053 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008cb053: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_008cb05a: }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_008cb08a }
	__asm { test al, 1 }
	__asm { jne L_008cb08a }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008cb08a }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008cb08a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_0040c260();
extern "C" void fn_008ce8a0();
extern "C" void fn_008cffc0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008cb380
extern "C" __declspec(naked) void asm_008cb380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f2eb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_008cb40b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_008ce8a0 }
	__asm { push 0x30 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_008cb3f4 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { push eax }
	__asm { call fn_008ce8a0 }
	__asm { jmp L_008cb3f6 }
	__asm { L_008cb3f4: }
	__asm { xor esi, esi }
	__asm { L_008cb3f6: }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008cffc0 }
	__asm { mov bl, 1 }
	__asm { jmp L_008cb40d }
	__asm { L_008cb40b: }
	__asm { xor bl, bl }
	__asm { L_008cb40d: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008cffc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" void fn_008cb380();
extern "C" void fn_008ce8a0();
extern "C" void fn_008cffc0();
// FUNCTION: ROBLOXSTUDIO 0x008cb430
extern "C" __declspec(naked) void asm_008cb430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f310 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_008ce8a0 }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x30 }
	__asm { mov ecx, esp }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_008ce8a0 }
	__asm { mov esi, 0xe72b48 }
	__asm { mov ecx, esi }
	__asm { call fn_008cb380 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008cffc0 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008cffc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_0040c260();
extern "C" void fn_008c00e0();
extern "C" void fn_008c0570();
extern "C" void fn_008cada0();
// FUNCTION: ROBLOXSTUDIO 0x008cb5a0
extern "C" __declspec(naked) void asm_008cb5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f328 }
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
	__asm { jne L_008cb60b }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { add ecx, 0xc }
	__asm { mov dword ptr [ecx - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { call fn_008c00e0 }
	__asm { mov ecx, esi }
	__asm { call fn_008cada0 }
	__asm { mov bl, 1 }
	__asm { jmp L_008cb60d }
	__asm { L_008cb60b: }
	__asm { xor bl, bl }
	__asm { L_008cb60d: }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_008c00e0();
extern "C" void fn_008c0570();
extern "C" void fn_008cb5a0();
// FUNCTION: ROBLOXSTUDIO 0x008cb630
extern "C" __declspec(naked) void asm_008cb630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f040 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 8] }
	__asm { call fn_008c00e0 }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push esi }
	__asm { sub esp, 0x28 }
	__asm { mov ecx, esp }
	__asm { add ecx, 0xc }
	__asm { mov dword ptr [ecx - 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_008c00e0 }
	__asm { mov esi, 0xe72b70 }
	__asm { mov ecx, esi }
	__asm { call fn_008cb5a0 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008c0570 }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { cmove esi, eax }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { mov dword ptr [edi], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_008c0570 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00403540();
extern "C" void fn_008ce270();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008cb870
extern "C" __declspec(naked) void asm_008cb870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f350 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_008ce270 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea ecx, [esi + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_008cb906 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008cb906: }
	__asm { cmp dword ptr [ebp + 0x2c], 0x10 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { jb L_008cb929 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008cb929: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008ce110();
extern "C" void fn_00af9300();
// FUNCTION: ROBLOXSTUDIO 0x008cb940
extern "C" __declspec(naked) void asm_008cb940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f389 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x20 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_008cb9bf }
	__asm { mov dword ptr [edx], eax }
	__asm { test al, 1 }
	__asm { je L_008cb9a8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { jmp L_008cb9bf }
	__asm { L_008cb9a8: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { lea eax, [edx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008cb9bf: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_008ce110 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00af9300 }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_008cba0e }
	__asm { test al, 1 }
	__asm { jne L_008cba07 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008cba07 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008cba07: }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { L_008cba0e: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_008cba32 }
	__asm { test al, 1 }
	__asm { jne L_008cba32 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008cba32 }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008cba32: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008ce310();
extern "C" void fn_008cf770();
extern "C" void fn_008d01b0();
// FUNCTION: ROBLOXSTUDIO 0x008cbd90
extern "C" __declspec(naked) void asm_008cbd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2f42f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x78 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { sub esp, 0x68 }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_008cf770 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea ecx, [ebp - 0x84] }
	__asm { call fn_008ce310 }
	__asm { mov edx, eax }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [edx + 8] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008cf770 }
	__asm { lea eax, [ebp - 0x7c] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_008cbe3b }
	__asm { test al, 1 }
	__asm { jne L_008cbe34 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008cbe34 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008cbe34: }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { L_008cbe3b: }
	__asm { lea ecx, [ebp - 0x74] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008d01b0 }
	__asm { mov eax, dword ptr [ebp + 0x64] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { test eax, eax }
	__asm { je L_008cbe75 }
	__asm { test al, 1 }
	__asm { jne L_008cbe6e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_008cbe6e }
	__asm { lea ecx, [ebp + 0x6c] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_008cbe6e: }
	__asm { mov dword ptr [ebp + 0x64], 0 }
	__asm { L_008cbe75: }
	__asm { lea ecx, [ebp + 0x24] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_008d01b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
