// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_0078d320();
extern "C" void fn_0078e2f0();
// FUNCTION: ROBLOXSTUDIO 0x007915a0
extern "C" __declspec(naked) void asm_007915a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { cmp al, byte ptr [ecx + 0x91] }
	__asm { je L_007915c6 }
	__asm { mov byte ptr [ecx + 0x91], al }
	__asm { test al, al }
	__asm { je L_007915c1 }
	__asm { call fn_0078d320 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007915c1: }
	__asm { call fn_0078e2f0 }
	__asm { L_007915c6: }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00793800
extern "C" __declspec(naked) void asm_00793800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_00793826 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00793811: }
	__asm { test eax, eax }
	__asm { je L_0079381f }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { L_0079381f: }
	__asm { add eax, 8 }
	__asm { dec edx }
	__asm { jne L_00793811 }
	__asm { pop esi }
	__asm { L_00793826: }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0079656b
extern "C" __declspec(naked) void asm_0079656b()
{
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00796592 }
	__asm { test al, 1 }
	__asm { jne L_00796592 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00796592 }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00796592: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_00797960();
// FUNCTION: ROBLOXSTUDIO 0x00797740
extern "C" __declspec(naked) void asm_00797740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00797960 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00797a30();
// FUNCTION: ROBLOXSTUDIO 0x00797780
extern "C" __declspec(naked) void asm_00797780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00797a30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00797af0();
// FUNCTION: ROBLOXSTUDIO 0x007977c0
extern "C" __declspec(naked) void asm_007977c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00797af0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a0ac0
extern "C" __declspec(naked) void asm_007a0ac0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi], 0 }
	__asm { je L_007a0aee }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_007a0ad9 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a0ad9: }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_007a0aee: }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_007a3000();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a0b00
extern "C" __declspec(naked) void asm_007a0b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_007a0b2e }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_007a3000 }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [edi], 0 }
	__asm { pop esi }
	__asm { L_007a0b2e: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007a1010
extern "C" __declspec(naked) void asm_007a1010()
{
	__asm { push 0x6c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_007a1024 }
	__asm { jmp dword ptr [g_00e1025c] }
	__asm { L_007a1024: }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [eax], eax }
	__asm { test ecx, ecx }
	__asm { je L_007a102f }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007a102f: }
	__asm { lea ecx, [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_007a1038 }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007a1038: }
	__asm { mov word ptr [eax + 0xc], 0x101 }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007a1040
extern "C" __declspec(naked) void asm_007a1040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x54 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_007a1057 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_007a1057: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_007a1064 }
	__asm { mov ecx, eax }
	__asm { mov edx, eax }
	__asm { jmp L_007a1067 }
	__asm { L_007a1064: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_007a1067: }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007a1072 }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_007a1072: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007a1080
extern "C" __declspec(naked) void asm_007a1080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0x24 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_007a1097 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_007a1097: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_007a10a4 }
	__asm { mov ecx, eax }
	__asm { mov edx, eax }
	__asm { jmp L_007a10a7 }
	__asm { L_007a10a4: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_007a10a7: }
	__asm { mov dword ptr [eax], ecx }
	__asm { lea ecx, [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007a10b2 }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_007a10b2: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007a10c0
extern "C" __declspec(naked) void asm_007a10c0()
{
	__asm { push esi }
	__asm { push 0x6c }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_007a10d9 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_007a10d9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edx + 4] }
	__asm { mov dword ptr [edx], eax }
	__asm { test ecx, ecx }
	__asm { je L_007a10e8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007a10e8: }
	__asm { lea ecx, [edx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_007a10f3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_007a10f3: }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a2910
extern "C" __declspec(naked) void asm_007a2910()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x10], 0 }
	__asm { je L_007a2940 }
	__asm { cmp dword ptr [esi + 0x28], 0x10 }
	__asm { jb L_007a292a }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007a292a: }
	__asm { mov dword ptr [esi + 0x28], 0xf }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov byte ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { L_007a2940: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007a3000();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007a2950
extern "C" __declspec(naked) void asm_007a2950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi + 0x10], 0 }
	__asm { je L_007a2980 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { call fn_007a3000 }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [edi + 0x10], 0 }
	__asm { pop esi }
	__asm { L_007a2980: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a1a90();
// FUNCTION: ROBLOXSTUDIO 0x007a36b0
extern "C" __declspec(naked) void asm_007a36b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_007a36bf }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_007a36c1 }
	__asm { L_007a36bf: }
	__asm { xor edx, edx }
	__asm { L_007a36c1: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x2c] }
	__asm { push dword ptr [ecx + 0x28] }
	__asm { push edx }
	__asm { call fn_007a1a90 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x007a4fa0
extern "C" __declspec(naked) void asm_007a4fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 0x20] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007a54c0
extern "C" __declspec(naked) void asm_007a54c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x11e7558 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_007a54e0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a54e0: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007a54f0
extern "C" __declspec(naked) void asm_007a54f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x11e6958 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_007a5510 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a5510: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007a5520
extern "C" __declspec(naked) void asm_007a5520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x11e68c0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_007a5540 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a5540: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007a5550
extern "C" __declspec(naked) void asm_007a5550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x11e6aa8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_007a5570 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007a5570: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007a59f0
extern "C" __declspec(naked) void asm_007a59f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { test eax, eax }
	__asm { je L_007a59ff }
	__asm { cmp eax, dword ptr [ebp + 8] }
	__asm { jne L_007a5a11 }
	__asm { L_007a59ff: }
	__asm { cmp byte ptr [ecx + 8], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { jne L_007a5a17 }
	__asm { cmp dword ptr [eax], 2 }
	__asm { sete al }
	__asm { mov byte ptr [ecx + 8], al }
	__asm { L_007a5a11: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007a5a17: }
	__asm { cmp dword ptr [eax], 2 }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x007a5c60
extern "C" __declspec(naked) void asm_007a5c60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ecfe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x007a6080
extern "C" __declspec(naked) void asm_007a6080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { push dword ptr [eax + 0x1c] }
	__asm { push dword ptr [eax + 0x18] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { add esp, 0x24 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x007a60c0
extern "C" __declspec(naked) void asm_007a60c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { push dword ptr [eax + 0x18] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { add esp, 0x20 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007978e0();
// FUNCTION: ROBLOXSTUDIO 0x007a6120
extern "C" __declspec(naked) void asm_007a6120()
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
	__asm { call fn_007978e0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0043db60();
// FUNCTION: ROBLOXSTUDIO 0x007a61f0
extern "C" __declspec(naked) void asm_007a61f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { movzx eax, byte ptr [ecx + 0x134] }
	__asm { add ecx, 0x134 }
	__asm { inc eax }
	__asm { add eax, ecx }
	__asm { je L_007a6209 }
	__asm { inc eax }
	__asm { jmp L_007a620b }
	__asm { L_007a6209: }
	__asm { xor eax, eax }
	__asm { L_007a620b: }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_0043db60 }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { setne al }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007a6a10();
// FUNCTION: ROBLOXSTUDIO 0x007a6440
extern "C" __declspec(naked) void asm_007a6440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007a6463 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007a6a10 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a6463: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e6b28 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a6b90();
// FUNCTION: ROBLOXSTUDIO 0x007a64e0
extern "C" __declspec(naked) void asm_007a64e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007a6503 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007a6b90 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a6503: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e73e0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a6ce0();
// FUNCTION: ROBLOXSTUDIO 0x007a6520
extern "C" __declspec(naked) void asm_007a6520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007a6543 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007a6ce0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a6543: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e7850 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a6e60();
// FUNCTION: ROBLOXSTUDIO 0x007a6560
extern "C" __declspec(naked) void asm_007a6560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007a6583 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007a6e60 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a6583: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e75c0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a6fe0();
// FUNCTION: ROBLOXSTUDIO 0x007a65a0
extern "C" __declspec(naked) void asm_007a65a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007a65c3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007a6fe0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a65c3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e7f78 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a7160();
// FUNCTION: ROBLOXSTUDIO 0x007a65e0
extern "C" __declspec(naked) void asm_007a65e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007a6603 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007a7160 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a6603: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e6f90 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a72e0();
// FUNCTION: ROBLOXSTUDIO 0x007a6620
extern "C" __declspec(naked) void asm_007a6620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007a6643 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007a72e0 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007a6643: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11e70e0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007a1690();
extern "C" void fn_007b4970();
// FUNCTION: ROBLOXSTUDIO 0x007a79d0
extern "C" __declspec(naked) void asm_007a79d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { call fn_007b4970 }
	__asm { cmp dword ptr [esi], 0x12e10c4 }
	__asm { jne L_007a79f5 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_007a1690 }
	__asm { L_007a79f5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007a3980();
extern "C" void fn_007a5810();
// FUNCTION: ROBLOXSTUDIO 0x007a7e50
extern "C" __declspec(naked) void asm_007a7e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007a3980 }
	__asm { test eax, eax }
	__asm { je L_007a7e7d }
	__asm { mov edx, dword ptr [eax + 0x110] }
	__asm { test edx, edx }
	__asm { je L_007a7e75 }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [edx + 8], ecx }
	__asm { sete cl }
	__asm { test cl, cl }
	__asm { je L_007a7e7d }
	__asm { L_007a7e75: }
	__asm { mov ecx, eax }
	__asm { pop ebp }
	__asm { jmp fn_007a5810 }
	__asm { L_007a7e7d: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007ac2e0
extern "C" __declspec(naked) void asm_007ac2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xe5285c }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007ad3b0();
// FUNCTION: ROBLOXSTUDIO 0x007ad370
extern "C" __declspec(naked) void asm_007ad370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { add ecx, 4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_007ad3b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b14c0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007adc70
extern "C" __declspec(naked) void asm_007adc70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007adc97 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007b14c0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007adc97 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007adc97: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b15c0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007adca0
extern "C" __declspec(naked) void asm_007adca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007adcc7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007b15c0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007adcc7 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007adcc7: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b1640();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007adcd0
extern "C" __declspec(naked) void asm_007adcd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007adcf7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007b1640 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007adcf7 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007adcf7: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b16c0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007add00
extern "C" __declspec(naked) void asm_007add00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007add27 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007b16c0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007add27 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007add27: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b17c0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007add30
extern "C" __declspec(naked) void asm_007add30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007add57 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007b17c0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007add57 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007add57: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b1840();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007add60
extern "C" __declspec(naked) void asm_007add60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007add87 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007b1840 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007add87 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007add87: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b18c0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007add90
extern "C" __declspec(naked) void asm_007add90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007addb7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007b18c0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007addb7 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007addb7: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b19c0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007addc0
extern "C" __declspec(naked) void asm_007addc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007adde7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007b19c0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007adde7 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007adde7: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007addf0
extern "C" __declspec(naked) void asm_007addf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp ecx, eax }
	__asm { je L_007ade0d }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_007ade02: }
	__asm { cmp dword ptr [ecx], edx }
	__asm { je L_007ade0d }
	__asm { add ecx, 8 }
	__asm { cmp ecx, eax }
	__asm { jne L_007ade02 }
	__asm { L_007ade0d: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007ad940();
// FUNCTION: ROBLOXSTUDIO 0x007b1bb0
extern "C" __declspec(naked) void asm_007b1bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007b1bde }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_007ad940 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_007b1bde: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_007ad9f0();
// FUNCTION: ROBLOXSTUDIO 0x007b1bf0
extern "C" __declspec(naked) void asm_007b1bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007b1c1e }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_007ad9f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_007b1c1e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0079a4d0();
extern "C" void fn_009ec9b0();
// FUNCTION: ROBLOXSTUDIO 0x007b1c30
extern "C" __declspec(naked) void asm_007b1c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { je L_007b1c61 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { add edx, -0x1c }
	__asm { push dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { call fn_009ec9b0 }
	__asm { mov ecx, eax }
	__asm { call fn_0079a4d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_007b1c61: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00492fa0();
// FUNCTION: ROBLOXSTUDIO 0x007b27a0
extern "C" __declspec(naked) void asm_007b27a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_007b27bb }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { add eax, -0x1c }
	__asm { add ecx, eax }
	__asm { call fn_00492fa0 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007b27bb: }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { xor eax, eax }
	__asm { add ecx, eax }
	__asm { call fn_00492fa0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f1d0();
// FUNCTION: ROBLOXSTUDIO 0x007b27d0
extern "C" __declspec(naked) void asm_007b27d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_007b27e1 }
	__asm { add eax, -0x1c }
	__asm { jmp L_007b27e3 }
	__asm { L_007b27e1: }
	__asm { xor eax, eax }
	__asm { L_007b27e3: }
	__asm { mov ecx, dword ptr [edx + 0x2c] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 0x28] }
	__asm { push 0 }
	__asm { call eax }
	__asm { test eax, eax }
	__asm { je L_007b27fa }
	__asm { mov ecx, eax }
	__asm { call fn_0043f1d0 }
	__asm { L_007b27fa: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00963670();
// FUNCTION: ROBLOXSTUDIO 0x007b3b40
extern "C" __declspec(naked) void asm_007b3b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp - 4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0xc], 0x7b1b30 }
	__asm { call fn_00963670 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b4510();
// FUNCTION: ROBLOXSTUDIO 0x007b4180
extern "C" __declspec(naked) void asm_007b4180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 4 }
	__asm { je L_007b41a3 }
	__asm { mov byte ptr [ebp + 0x10], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007b4510 }
	__asm { add esp, 0x10 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b41a3: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x11eb6f0 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007b5260
extern "C" __declspec(naked) void asm_007b5260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { mov edi, ecx }
	__asm { test esi, esi }
	__asm { je L_007b5285 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { L_007b5275: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x70] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { jne L_007b5275 }
	__asm { pop ebx }
	__asm { L_007b5285: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_007b5910();
// FUNCTION: ROBLOXSTUDIO 0x007b5b70
extern "C" __declspec(naked) void asm_007b5b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { lea edx, [esi + 0x48] }
	__asm { mov al, byte ptr [ecx + 0x1a] }
	__asm { add ecx, 0x1a }
	__asm { cmp al, byte ptr [ebp + 8] }
	__asm { je L_007b5b9d }
	__asm { push edx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007b5910 }
	__asm { push 0x12e18fc }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_007b5b9d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_007b5910();
// FUNCTION: ROBLOXSTUDIO 0x007b6490
extern "C" __declspec(naked) void asm_007b6490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x48] }
	__asm { lea edx, [esi + 0x48] }
	__asm { mov al, byte ptr [ecx + 0x19] }
	__asm { add ecx, 0x19 }
	__asm { cmp al, byte ptr [ebp + 8] }
	__asm { je L_007b64bd }
	__asm { push edx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007b5910 }
	__asm { push 0x12e1e3c }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_007b64bd: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007ae440();
// FUNCTION: ROBLOXSTUDIO 0x007b6940
extern "C" __declspec(naked) void asm_007b6940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0x7b0ca8 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { call fn_007ae440 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007bb2a0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x007b83d0
extern "C" __declspec(naked) void asm_007b83d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_007b83f7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007bb2a0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_007b83f7 }
	__asm { lea eax, [edi - 0x1c] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007b83f7: }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007bacb0
extern "C" __declspec(naked) void asm_007bacb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { test eax, eax }
	__asm { je L_007bacde }
	__asm { cmp eax, 0x2aaaaaa }
	__asm { ja L_007bacd8 }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 5 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_007bacde }
	__asm { L_007bacd8: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_007bacde: }
	__asm { mov eax, ecx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10264[];
// FUNCTION: ROBLOXSTUDIO 0x007bad40
extern "C" __declspec(naked) void asm_007bad40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, ecx }
	__asm { ja L_007bad6e }
	__asm { push 0x1017a80 }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_007bad6e: }
	__asm { lea eax, [ecx + ecx*2] }
	__asm { shl eax, 5 }
	__asm { add eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b79d0();
extern "C" void fn_007e89d0();
// FUNCTION: ROBLOXSTUDIO 0x007bb430
extern "C" __declspec(naked) void asm_007bb430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_007bb449 }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_007bb44b }
	__asm { L_007bb449: }
	__asm { xor bl, bl }
	__asm { L_007bb44b: }
	__asm { call fn_007e89d0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007b79d0 }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b7a60();
extern "C" void fn_007e8a40();
// FUNCTION: ROBLOXSTUDIO 0x007bb470
extern "C" __declspec(naked) void asm_007bb470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_007bb489 }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_007bb48b }
	__asm { L_007bb489: }
	__asm { xor bl, bl }
	__asm { L_007bb48b: }
	__asm { call fn_007e8a40 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007b7a60 }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b7af0();
extern "C" void fn_007e8ab0();
// FUNCTION: ROBLOXSTUDIO 0x007bb4b0
extern "C" __declspec(naked) void asm_007bb4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_007bb4c9 }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_007bb4cb }
	__asm { L_007bb4c9: }
	__asm { xor bl, bl }
	__asm { L_007bb4cb: }
	__asm { call fn_007e8ab0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007b7af0 }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007bc570();
// FUNCTION: ROBLOXSTUDIO 0x007bb540
extern "C" __declspec(naked) void asm_007bb540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { call fn_007bc570 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [edx + 0xc] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b78e0();
extern "C" void fn_0088bd20();
// FUNCTION: ROBLOXSTUDIO 0x007bccc0
extern "C" __declspec(naked) void asm_007bccc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { sub esp, 0x30 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x30] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { call fn_0088bd20 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_007b78e0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x007bcde0
extern "C" __declspec(naked) void asm_007bcde0()
{
	__asm { cmp dword ptr [ecx + 0x1a4], 0 }
	__asm { je L_007bce06 }
	__asm { mov eax, dword ptr [ecx + 0x1a0] }
	__asm { cmp eax, 4 }
	__asm { je L_007bce03 }
	__asm { cmp eax, 1 }
	__asm { je L_007bce03 }
	__asm { cmp eax, 3 }
	__asm { je L_007bce03 }
	__asm { cmp eax, 5 }
	__asm { jne L_007bce06 }
	__asm { L_007bce03: }
	__asm { mov al, 1 }
	__asm { ret }
	__asm { L_007bce06: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_00a48380();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x007bce10
extern "C" __declspec(naked) void asm_007bce10()
{
	__asm { push 0 }
	__asm { push 0x11ece78 }
	__asm { push 0x12bdbf4 }
	__asm { push 0 }
	__asm { push dword ptr [ecx + 0x1a4] }
	__asm { call fn_00cf67f8 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_007bce37 }
	__asm { mov ecx, eax }
	__asm { jmp fn_00a48380 }
	__asm { L_007bce37: }
	__asm { xor al, al }
	__asm { ret }
}

extern "C" void fn_007b7ff0();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x007bd6d0
extern "C" __declspec(naked) void asm_007bd6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007b7ff0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b7f60();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x007bd700
extern "C" __declspec(naked) void asm_007bd700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007b7f60 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b8080();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x007bd730
extern "C" __declspec(naked) void asm_007bd730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007b8080 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0044dfa0();
// FUNCTION: ROBLOXSTUDIO 0x007bf640
extern "C" __declspec(naked) void asm_007bf640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { push eax }
	__asm { call fn_0044dfa0 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edi + 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007c62d0
extern "C" __declspec(naked) void asm_007c62d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x11edfa8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_007c62f0 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007c62f0: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007c6540
extern "C" __declspec(naked) void asm_007c6540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20940 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

// FUNCTION: ROBLOXSTUDIO 0x007c65f0
extern "C" __declspec(naked) void asm_007c65f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd20940 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
}

extern "C" void fn_004115f0();
extern "C" void fn_007c5c70();
// FUNCTION: ROBLOXSTUDIO 0x007c6b40
extern "C" __declspec(naked) void asm_007c6b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x7c6540 }
	__asm { push 0x12e36a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007c5c70 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004115f0();
extern "C" void fn_007c5d00();
// FUNCTION: ROBLOXSTUDIO 0x007c6b70
extern "C" __declspec(naked) void asm_007c6b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x7c65f0 }
	__asm { push 0x12e36bc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007c5d00 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007c9b10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c8c20
extern "C" __declspec(naked) void asm_007c8c20()
{
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
	__asm { call fn_007c9b10 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007c9190
extern "C" __declspec(naked) void asm_007c9190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [esi], 0xe33a28 }
	__asm { je L_007c91b6 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007c91b6: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00886380();
// FUNCTION: ROBLOXSTUDIO 0x007c9ea0
extern "C" __declspec(naked) void asm_007c9ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_007c9eb9 }
	__asm { add eax, -0x1c }
	__asm { jmp L_007c9ebb }
	__asm { L_007c9eb9: }
	__asm { xor eax, eax }
	__asm { L_007c9ebb: }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00886380 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008e0460();
// FUNCTION: ROBLOXSTUDIO 0x007ca520
extern "C" __declspec(naked) void asm_007ca520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { je L_007ca545 }
	__asm { mov eax, dword ptr [ecx + 0x80] }
	__asm { test eax, eax }
	__asm { je L_007ca545 }
	__asm { mov dword ptr [ecx + 0x80], 0 }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_008e0460 }
	__asm { L_007ca545: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007c9470();
extern "C" void fn_008e0460();
extern "C" void fn_008e2cc0();
// FUNCTION: ROBLOXSTUDIO 0x007ca820
extern "C" __declspec(naked) void asm_007ca820()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { call fn_007c9470 }
	__asm { mov ecx, dword ptr [esi + 0x80] }
	__asm { mov edi, eax }
	__asm { cmp ecx, edi }
	__asm { je L_007ca85b }
	__asm { test ecx, ecx }
	__asm { je L_007ca849 }
	__asm { push esi }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { call fn_008e0460 }
	__asm { L_007ca849: }
	__asm { mov dword ptr [esi + 0x80], edi }
	__asm { test edi, edi }
	__asm { je L_007ca85b }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_008e2cc0 }
	__asm { L_007ca85b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007cd560
extern "C" __declspec(naked) void asm_007cd560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { cmp dword ptr [ecx + 0xc], eax }
	__asm { je L_007cd57f }
	__asm { mov edi, edi }
	__asm { L_007cd570: }
	__asm { mov ecx, dword ptr [ecx + 0x124] }
	__asm { test ecx, ecx }
	__asm { je L_007cd585 }
	__asm { cmp dword ptr [ecx + 0xc], eax }
	__asm { jne L_007cd570 }
	__asm { L_007cd57f: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007cd585: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x007d6ac0
extern "C" __declspec(naked) void asm_007d6ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_007d6af7 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx], 0xe461dc }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { L_007d6af7: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007d0660();
extern "C" void fn_007e9290();
// FUNCTION: ROBLOXSTUDIO 0x007d6c10
extern "C" __declspec(naked) void asm_007d6c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_007d6c29 }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_007d6c2b }
	__asm { L_007d6c29: }
	__asm { xor bl, bl }
	__asm { L_007d6c2b: }
	__asm { call fn_007e9290 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_007d0660 }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00405b90();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007d6e50
extern "C" __declspec(naked) void asm_007d6e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00405b90 }
	__asm { cmp dword ptr [ebp - 4], 0x10 }
	__asm { mov esi, dword ptr [eax + 0x10] }
	__asm { jb L_007d6e77 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007d6e77: }
	__asm { lea eax, [esi + 0x18] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008b8200();
// FUNCTION: ROBLOXSTUDIO 0x007d6ef0
extern "C" __declspec(naked) void asm_007d6ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008b8200 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008b8380();
// FUNCTION: ROBLOXSTUDIO 0x007d6f30
extern "C" __declspec(naked) void asm_007d6f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { fstp dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008b8380 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008b8450();
// FUNCTION: ROBLOXSTUDIO 0x007d6f70
extern "C" __declspec(naked) void asm_007d6f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { fstp qword ptr [ebp - 0xc] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008b8450 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00a56060();
// FUNCTION: ROBLOXSTUDIO 0x007d6fd0
extern "C" __declspec(naked) void asm_007d6fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a56060 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008e6410();
// FUNCTION: ROBLOXSTUDIO 0x007d7090
extern "C" __declspec(naked) void asm_007d7090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008e6410 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009004f0();
// FUNCTION: ROBLOXSTUDIO 0x007d70d0
extern "C" __declspec(naked) void asm_007d70d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_009004f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008e6790();
// FUNCTION: ROBLOXSTUDIO 0x007d7170
extern "C" __declspec(naked) void asm_007d7170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008e6790 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008eacc0();
// FUNCTION: ROBLOXSTUDIO 0x007d71b0
extern "C" __declspec(naked) void asm_007d71b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x14] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008eacc0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008e6830();
// FUNCTION: ROBLOXSTUDIO 0x007d71f0
extern "C" __declspec(naked) void asm_007d71f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008e6830 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008e68d0();
// FUNCTION: ROBLOXSTUDIO 0x007d7230
extern "C" __declspec(naked) void asm_007d7230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008e68d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008e6980();
// FUNCTION: ROBLOXSTUDIO 0x007d7270
extern "C" __declspec(naked) void asm_007d7270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008e6980 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008e6a70();
// FUNCTION: ROBLOXSTUDIO 0x007d72b0
extern "C" __declspec(naked) void asm_007d72b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0xa] }
	__asm { push edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0xa] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008e6a70 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008b8520();
// FUNCTION: ROBLOXSTUDIO 0x007d72f0
extern "C" __declspec(naked) void asm_007d72f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { lea eax, [ebp + 0xf] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008b8520 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x007d7330
extern "C" __declspec(naked) void asm_007d7330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x11efda0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { je L_007d7350 }
	__asm { lea eax, [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007d7350: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00408320();
extern "C" void fn_007d11c0();
// FUNCTION: ROBLOXSTUDIO 0x007d7360
extern "C" __declspec(naked) void asm_007d7360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007d11c0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00408320 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00792b60();
// FUNCTION: ROBLOXSTUDIO 0x007d82c0
extern "C" __declspec(naked) void asm_007d82c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov edi, eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792b60 }
	__asm { mov dword ptr [esi + 0x18], edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x14], 5 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00792b60();
// FUNCTION: ROBLOXSTUDIO 0x007d82f0
extern "C" __declspec(naked) void asm_007d82f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { fstp dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792b60 }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x14], 7 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00792b60();
// FUNCTION: ROBLOXSTUDIO 0x007d8330
extern "C" __declspec(naked) void asm_007d8330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { fstp qword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792b60 }
	__asm { fld qword ptr [ebp - 8] }
	__asm { fstp qword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x14], 9 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00792b60();
// FUNCTION: ROBLOXSTUDIO 0x007d8520
extern "C" __declspec(naked) void asm_007d8520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea edx, [ebp + 8] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792b60 }
	__asm { mov dword ptr [esi + 0x18], edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x14], 5 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007d6710();
// FUNCTION: ROBLOXSTUDIO 0x007d8ca0
extern "C" __declspec(naked) void asm_007d8ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_007d6710 }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00792b60();
// FUNCTION: ROBLOXSTUDIO 0x007d8e30
extern "C" __declspec(naked) void asm_007d8e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov bl, al }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00792b60 }
	__asm { mov byte ptr [esi + 0x18], bl }
	__asm { mov dword ptr [esi + 0x14], 4 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b3b40();
// FUNCTION: ROBLOXSTUDIO 0x00820a80
extern "C" __declspec(naked) void asm_00820a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, 0x51eb851f }
	__asm { mul dword ptr [ecx + 0x8c] }
	__asm { push esi }
	__asm { mov esi, edx }
	__asm { shr esi, 5 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp - 8], 1 }
	__asm { call fn_007b3b40 }
	__asm { cmp esi, 1 }
	__asm { lea ecx, [ebp - 4] }
	__asm { lea edx, [ebp - 8] }
	__asm { cmovle ecx, edx }
	__asm { pop esi }
	__asm { add eax, dword ptr [ecx] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007de9c0();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00822de0
extern "C" __declspec(naked) void asm_00822de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007de9c0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007dea50();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00822e10
extern "C" __declspec(naked) void asm_00822e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007dea50 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00814560();
extern "C" void fn_00a55d30();
// FUNCTION: ROBLOXSTUDIO 0x00822e40
extern "C" __declspec(naked) void asm_00822e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00a55d30 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007deae0();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00822e70
extern "C" __declspec(naked) void asm_00822e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007deae0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007deb70();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00822ea0
extern "C" __declspec(naked) void asm_00822ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007deb70 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007dec00();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00822ed0
extern "C" __declspec(naked) void asm_00822ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007dec00 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007dec90();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00822f00
extern "C" __declspec(naked) void asm_00822f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007dec90 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007ded20();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00822f30
extern "C" __declspec(naked) void asm_00822f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007ded20 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007dedb0();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00822f60
extern "C" __declspec(naked) void asm_00822f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007dedb0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00814560();
extern "C" void fn_0089cd20();
// FUNCTION: ROBLOXSTUDIO 0x00822f90
extern "C" __declspec(naked) void asm_00822f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_0089cd20 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00814560();
extern "C" void fn_00af63c0();
// FUNCTION: ROBLOXSTUDIO 0x00822fc0
extern "C" __declspec(naked) void asm_00822fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00af63c0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00814560();
extern "C" void fn_00a5dcc0();
// FUNCTION: ROBLOXSTUDIO 0x00822ff0
extern "C" __declspec(naked) void asm_00822ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00a5dcc0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007dee40();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823020
extern "C" __declspec(naked) void asm_00823020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007dee40 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007deed0();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823050
extern "C" __declspec(naked) void asm_00823050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007deed0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007def60();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823080
extern "C" __declspec(naked) void asm_00823080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007def60 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007deff0();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x008230b0
extern "C" __declspec(naked) void asm_008230b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007deff0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007df080();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x008230e0
extern "C" __declspec(naked) void asm_008230e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007df080 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007df110();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823110
extern "C" __declspec(naked) void asm_00823110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007df110 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007df1a0();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823140
extern "C" __declspec(naked) void asm_00823140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007df1a0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007df230();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823170
extern "C" __declspec(naked) void asm_00823170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007df230 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007df2c0();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x008231a0
extern "C" __declspec(naked) void asm_008231a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007df2c0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007df350();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x008231d0
extern "C" __declspec(naked) void asm_008231d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007df350 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007df3e0();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823200
extern "C" __declspec(naked) void asm_00823200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007df3e0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007df470();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823230
extern "C" __declspec(naked) void asm_00823230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007df470 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007df500();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823260
extern "C" __declspec(naked) void asm_00823260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007df500 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007df590();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823290
extern "C" __declspec(naked) void asm_00823290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007df590 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00814560();
extern "C" void fn_008333f0();
// FUNCTION: ROBLOXSTUDIO 0x008232f0
extern "C" __declspec(naked) void asm_008232f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_008333f0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00814560();
extern "C" void fn_00833480();
// FUNCTION: ROBLOXSTUDIO 0x00823350
extern "C" __declspec(naked) void asm_00823350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00833480 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007df7d0();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x008233b0
extern "C" __declspec(naked) void asm_008233b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007df7d0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007df860();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x008233e0
extern "C" __declspec(naked) void asm_008233e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007df860 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007df8f0();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823410
extern "C" __declspec(naked) void asm_00823410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007df8f0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007df980();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823440
extern "C" __declspec(naked) void asm_00823440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007df980 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007dfa10();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823470
extern "C" __declspec(naked) void asm_00823470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007dfa10 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007dfaa0();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x008234a0
extern "C" __declspec(naked) void asm_008234a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007dfaa0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007dfb30();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x008234d0
extern "C" __declspec(naked) void asm_008234d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007dfb30 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007dfbc0();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823500
extern "C" __declspec(naked) void asm_00823500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007dfbc0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007dfc50();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823530
extern "C" __declspec(naked) void asm_00823530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007dfc50 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007dfce0();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823560
extern "C" __declspec(naked) void asm_00823560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007dfce0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007dfd70();
extern "C" void fn_00814560();
// FUNCTION: ROBLOXSTUDIO 0x00823590
extern "C" __declspec(naked) void asm_00823590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_007dfd70 }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00814560 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}
