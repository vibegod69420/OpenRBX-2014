// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00878c30
extern "C" __declspec(naked) void asm_00878c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00878c42 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00878c44 }
	__asm { L_00878c42: }
	__asm { xor edx, edx }
	__asm { L_00878c44: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, esp }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00878c70
extern "C" __declspec(naked) void asm_00878c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_00878c83 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_00878c85 }
	__asm { L_00878c83: }
	__asm { xor esi, esi }
	__asm { L_00878c85: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { add ecx, esi }
	__asm { call eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0097efd0();
extern "C" void fn_0097f090();
// FUNCTION: ROBLOXSTUDIO 0x00878e40
extern "C" __declspec(naked) void asm_00878e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0097efd0 }
	__asm { push 5 }
	__asm { push dword ptr [eax] }
	__asm { call fn_0097f090 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { je L_00878e66 }
	__asm { test eax, eax }
	__asm { jns L_00878e72 }
	__asm { xor eax, eax }
	__asm { jmp L_00878e7c }
	__asm { L_00878e66: }
	__asm { cmp eax, 1 }
	__asm { jge L_00878e72 }
	__asm { mov eax, 1 }
	__asm { jmp L_00878e7c }
	__asm { L_00878e72: }
	__asm { mov ecx, 0xa }
	__asm { cmp eax, ecx }
	__asm { cmovg eax, ecx }
	__asm { L_00878e7c: }
	__asm { cmp dword ptr [esi + 0xa0], eax }
	__asm { je L_00878e96 }
	__asm { push 0x12f9960 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 0xa0], eax }
	__asm { call fn_007b4f50 }
	__asm { L_00878e96: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008775f0();
// FUNCTION: ROBLOXSTUDIO 0x00878ea0
extern "C" __declspec(naked) void asm_00878ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_00878eb2 }
	__asm { lea edx, [eax + 0x1c] }
	__asm { jmp L_00878eb4 }
	__asm { L_00878eb2: }
	__asm { xor edx, edx }
	__asm { L_00878eb4: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { push edx }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { call fn_008775f0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0087afa0
extern "C" __declspec(naked) void asm_0087afa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087afd3 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe643f0 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087afd5 }
	__asm { L_0087afd3: }
	__asm { xor eax, eax }
	__asm { L_0087afd5: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087aff0
extern "C" __declspec(naked) void asm_0087aff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087b023 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe6442c }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087b025 }
	__asm { L_0087b023: }
	__asm { xor eax, eax }
	__asm { L_0087b025: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087b040
extern "C" __declspec(naked) void asm_0087b040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087b073 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64440 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087b075 }
	__asm { L_0087b073: }
	__asm { xor eax, eax }
	__asm { L_0087b075: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087b090
extern "C" __declspec(naked) void asm_0087b090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087b0c3 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64418 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087b0c5 }
	__asm { L_0087b0c3: }
	__asm { xor eax, eax }
	__asm { L_0087b0c5: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087b0e0
extern "C" __declspec(naked) void asm_0087b0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087b113 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64404 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087b115 }
	__asm { L_0087b113: }
	__asm { xor eax, eax }
	__asm { L_0087b115: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087b130
extern "C" __declspec(naked) void asm_0087b130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087b163 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe6447c }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087b165 }
	__asm { L_0087b163: }
	__asm { xor eax, eax }
	__asm { L_0087b165: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087b180
extern "C" __declspec(naked) void asm_0087b180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087b1b3 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64490 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087b1b5 }
	__asm { L_0087b1b3: }
	__asm { xor eax, eax }
	__asm { L_0087b1b5: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087b1d0
extern "C" __declspec(naked) void asm_0087b1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087b203 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64454 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087b205 }
	__asm { L_0087b203: }
	__asm { xor eax, eax }
	__asm { L_0087b205: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087b220
extern "C" __declspec(naked) void asm_0087b220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087b253 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64468 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087b255 }
	__asm { L_0087b253: }
	__asm { xor eax, eax }
	__asm { L_0087b255: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087b270
extern "C" __declspec(naked) void asm_0087b270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087b29d }
	__asm { mov dword ptr [eax], 0xe644a4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087b29f }
	__asm { L_0087b29d: }
	__asm { xor eax, eax }
	__asm { L_0087b29f: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087b2c0
extern "C" __declspec(naked) void asm_0087b2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087b2ed }
	__asm { mov dword ptr [eax], 0xe644b8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087b2ef }
	__asm { L_0087b2ed: }
	__asm { xor eax, eax }
	__asm { L_0087b2ef: }
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

// FUNCTION: ROBLOXSTUDIO 0x0087bbc0
extern "C" __declspec(naked) void asm_0087bbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_0087bbeb }
	__asm { add eax, -0x1c }
	__asm { je L_0087bbeb }
	__asm { lea ecx, [eax + 0x290] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0087bbeb: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { xor ecx, ecx }
	__asm { call eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0087bc10
extern "C" __declspec(naked) void asm_0087bc10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_0087bc2c }
	__asm { add eax, -0x1c }
	__asm { je L_0087bc2c }
	__asm { lea ecx, [eax + 0x290] }
	__asm { jmp L_0087bc2e }
	__asm { L_0087bc2c: }
	__asm { xor ecx, ecx }
	__asm { L_0087bc2e: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0087b9d0();
// FUNCTION: ROBLOXSTUDIO 0x0087c2e0
extern "C" __declspec(naked) void asm_0087c2e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov bh, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x2d0], bh }
	__asm { je L_0087c32e }
	__asm { call fn_0087b9d0 }
	__asm { push 0x12fa6cc }
	__asm { mov ecx, esi }
	__asm { mov bl, al }
	__asm { mov byte ptr [esi + 0x2d0], bh }
	__asm { call fn_007b4f50 }
	__asm { push 0x12fa7b8 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_0087b9d0 }
	__asm { cmp bl, al }
	__asm { je L_0087c32e }
	__asm { push 0x12fa7e4 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_0087c32e: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0087c390
extern "C" __declspec(naked) void asm_0087c390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_0087c3a2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_0087c3a4 }
	__asm { L_0087c3a2: }
	__asm { xor edx, edx }
	__asm { L_0087c3a4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, esp }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0087b9d0();
// FUNCTION: ROBLOXSTUDIO 0x0087c400
extern "C" __declspec(naked) void asm_0087c400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x2d4], edi }
	__asm { je L_0087c450 }
	__asm { push ebx }
	__asm { call fn_0087b9d0 }
	__asm { push 0x12fa750 }
	__asm { mov ecx, esi }
	__asm { mov bl, al }
	__asm { mov dword ptr [esi + 0x2d4], edi }
	__asm { call fn_007b4f50 }
	__asm { push 0x12fa7b8 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_0087b9d0 }
	__asm { cmp bl, al }
	__asm { pop ebx }
	__asm { je L_0087c450 }
	__asm { push 0x12fa7e4 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_0087c450: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0087b9d0();
// FUNCTION: ROBLOXSTUDIO 0x0087c460
extern "C" __declspec(naked) void asm_0087c460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x2d8], edi }
	__asm { je L_0087c4b0 }
	__asm { push ebx }
	__asm { call fn_0087b9d0 }
	__asm { push 0x12fa784 }
	__asm { mov ecx, esi }
	__asm { mov bl, al }
	__asm { mov dword ptr [esi + 0x2d8], edi }
	__asm { call fn_007b4f50 }
	__asm { push 0x12fa7b8 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_0087b9d0 }
	__asm { cmp bl, al }
	__asm { pop ebx }
	__asm { je L_0087c4b0 }
	__asm { push 0x12fa7e4 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_0087c4b0: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0087d700
extern "C" __declspec(naked) void asm_0087d700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087d72d }
	__asm { mov dword ptr [eax], 0xe64ba8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087d72f }
	__asm { L_0087d72d: }
	__asm { xor eax, eax }
	__asm { L_0087d72f: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087d750
extern "C" __declspec(naked) void asm_0087d750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087d77d }
	__asm { mov dword ptr [eax], 0xe64bbc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087d77f }
	__asm { L_0087d77d: }
	__asm { xor eax, eax }
	__asm { L_0087d77f: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087d7a0
extern "C" __declspec(naked) void asm_0087d7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087d7d3 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64af4 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087d7d5 }
	__asm { L_0087d7d3: }
	__asm { xor eax, eax }
	__asm { L_0087d7d5: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087d7f0
extern "C" __declspec(naked) void asm_0087d7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087d823 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64b30 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087d825 }
	__asm { L_0087d823: }
	__asm { xor eax, eax }
	__asm { L_0087d825: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087d840
extern "C" __declspec(naked) void asm_0087d840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087d873 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64b44 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087d875 }
	__asm { L_0087d873: }
	__asm { xor eax, eax }
	__asm { L_0087d875: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087d890
extern "C" __declspec(naked) void asm_0087d890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087d8c3 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64b1c }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087d8c5 }
	__asm { L_0087d8c3: }
	__asm { xor eax, eax }
	__asm { L_0087d8c5: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087d8e0
extern "C" __declspec(naked) void asm_0087d8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087d913 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64b08 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087d915 }
	__asm { L_0087d913: }
	__asm { xor eax, eax }
	__asm { L_0087d915: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087d930
extern "C" __declspec(naked) void asm_0087d930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087d963 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64b80 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087d965 }
	__asm { L_0087d963: }
	__asm { xor eax, eax }
	__asm { L_0087d965: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087d980
extern "C" __declspec(naked) void asm_0087d980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087d9b3 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64b94 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087d9b5 }
	__asm { L_0087d9b3: }
	__asm { xor eax, eax }
	__asm { L_0087d9b5: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087d9d0
extern "C" __declspec(naked) void asm_0087d9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087da03 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64b58 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087da05 }
	__asm { L_0087da03: }
	__asm { xor eax, eax }
	__asm { L_0087da05: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087da20
extern "C" __declspec(naked) void asm_0087da20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087da53 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe64b6c }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087da55 }
	__asm { L_0087da53: }
	__asm { xor eax, eax }
	__asm { L_0087da55: }
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

// FUNCTION: ROBLOXSTUDIO 0x0087e060
extern "C" __declspec(naked) void asm_0087e060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_0087e08b }
	__asm { add eax, -0x1c }
	__asm { je L_0087e08b }
	__asm { lea ecx, [eax + 0x3ac] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0087e08b: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { xor ecx, ecx }
	__asm { call eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0087deb0();
// FUNCTION: ROBLOXSTUDIO 0x0087e700
extern "C" __declspec(naked) void asm_0087e700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov bh, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x3ec], bh }
	__asm { je L_0087e74e }
	__asm { call fn_0087deb0 }
	__asm { push 0x12fa984 }
	__asm { mov ecx, esi }
	__asm { mov bl, al }
	__asm { mov byte ptr [esi + 0x3ec], bh }
	__asm { call fn_007b4f50 }
	__asm { push 0x12faa70 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_0087deb0 }
	__asm { cmp bl, al }
	__asm { je L_0087e74e }
	__asm { push 0x12faa9c }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_0087e74e: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0087deb0();
// FUNCTION: ROBLOXSTUDIO 0x0087e7b0
extern "C" __declspec(naked) void asm_0087e7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x3f0], edi }
	__asm { je L_0087e800 }
	__asm { push ebx }
	__asm { call fn_0087deb0 }
	__asm { push 0x12faa08 }
	__asm { mov ecx, esi }
	__asm { mov bl, al }
	__asm { mov dword ptr [esi + 0x3f0], edi }
	__asm { call fn_007b4f50 }
	__asm { push 0x12faa70 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_0087deb0 }
	__asm { cmp bl, al }
	__asm { pop ebx }
	__asm { je L_0087e800 }
	__asm { push 0x12faa9c }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_0087e800: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_0087deb0();
// FUNCTION: ROBLOXSTUDIO 0x0087e810
extern "C" __declspec(naked) void asm_0087e810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x3f4], edi }
	__asm { je L_0087e860 }
	__asm { push ebx }
	__asm { call fn_0087deb0 }
	__asm { push 0x12faa3c }
	__asm { mov ecx, esi }
	__asm { mov bl, al }
	__asm { mov dword ptr [esi + 0x3f4], edi }
	__asm { call fn_007b4f50 }
	__asm { push 0x12faa70 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_0087deb0 }
	__asm { cmp bl, al }
	__asm { pop ebx }
	__asm { je L_0087e860 }
	__asm { push 0x12faa9c }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_0087e860: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0087fd50
extern "C" __declspec(naked) void asm_0087fd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087fd83 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe65548 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087fd85 }
	__asm { L_0087fd83: }
	__asm { xor eax, eax }
	__asm { L_0087fd85: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087fda0
extern "C" __declspec(naked) void asm_0087fda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087fdd3 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe65584 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087fdd5 }
	__asm { L_0087fdd3: }
	__asm { xor eax, eax }
	__asm { L_0087fdd5: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087fdf0
extern "C" __declspec(naked) void asm_0087fdf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087fe23 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe65598 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087fe25 }
	__asm { L_0087fe23: }
	__asm { xor eax, eax }
	__asm { L_0087fe25: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087fe40
extern "C" __declspec(naked) void asm_0087fe40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087fe73 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe65570 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087fe75 }
	__asm { L_0087fe73: }
	__asm { xor eax, eax }
	__asm { L_0087fe75: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087fe90
extern "C" __declspec(naked) void asm_0087fe90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087fec3 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe6555c }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087fec5 }
	__asm { L_0087fec3: }
	__asm { xor eax, eax }
	__asm { L_0087fec5: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087fee0
extern "C" __declspec(naked) void asm_0087fee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087ff13 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe655d4 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087ff15 }
	__asm { L_0087ff13: }
	__asm { xor eax, eax }
	__asm { L_0087ff15: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087ff30
extern "C" __declspec(naked) void asm_0087ff30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087ff63 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe655e8 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087ff65 }
	__asm { L_0087ff63: }
	__asm { xor eax, eax }
	__asm { L_0087ff65: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087ff80
extern "C" __declspec(naked) void asm_0087ff80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0087ffb3 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe655ac }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0087ffb5 }
	__asm { L_0087ffb3: }
	__asm { xor eax, eax }
	__asm { L_0087ffb5: }
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
// FUNCTION: ROBLOXSTUDIO 0x0087ffd0
extern "C" __declspec(naked) void asm_0087ffd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00880003 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe655c0 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00880005 }
	__asm { L_00880003: }
	__asm { xor eax, eax }
	__asm { L_00880005: }
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
// FUNCTION: ROBLOXSTUDIO 0x00880020
extern "C" __declspec(naked) void asm_00880020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0088004d }
	__asm { mov dword ptr [eax], 0xe655fc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0088004f }
	__asm { L_0088004d: }
	__asm { xor eax, eax }
	__asm { L_0088004f: }
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
// FUNCTION: ROBLOXSTUDIO 0x00880070
extern "C" __declspec(naked) void asm_00880070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0088009d }
	__asm { mov dword ptr [eax], 0xe65610 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0088009f }
	__asm { L_0088009d: }
	__asm { xor eax, eax }
	__asm { L_0088009f: }
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
// FUNCTION: ROBLOXSTUDIO 0x008800c0
extern "C" __declspec(naked) void asm_008800c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008800fb }
	__asm { mov dword ptr [edx], 0xe65534 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008800fd }
	__asm { L_008800fb: }
	__asm { xor edx, edx }
	__asm { L_008800fd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008818e0
extern "C" __declspec(naked) void asm_008818e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_008818f4 }
	__asm { add eax, -0x1c }
	__asm { jmp L_008818f6 }
	__asm { L_008818f4: }
	__asm { xor eax, eax }
	__asm { L_008818f6: }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
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
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x008819d0
extern "C" __declspec(naked) void asm_008819d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_008819fb }
	__asm { add eax, -0x1c }
	__asm { je L_008819fb }
	__asm { lea ecx, [eax + 0x298] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008819fb: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { xor ecx, ecx }
	__asm { call eax }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00881a20
extern "C" __declspec(naked) void asm_00881a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_00881a3c }
	__asm { add eax, -0x1c }
	__asm { je L_00881a3c }
	__asm { lea ecx, [eax + 0x298] }
	__asm { jmp L_00881a3e }
	__asm { L_00881a3c: }
	__asm { xor ecx, ecx }
	__asm { L_00881a3e: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00881620();
// FUNCTION: ROBLOXSTUDIO 0x008835e0
extern "C" __declspec(naked) void asm_008835e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov bh, byte ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x2d8], bh }
	__asm { je L_0088362e }
	__asm { call fn_00881620 }
	__asm { push 0x12fad08 }
	__asm { mov ecx, esi }
	__asm { mov bl, al }
	__asm { mov byte ptr [esi + 0x2d8], bh }
	__asm { call fn_007b4f50 }
	__asm { push 0x12fadf4 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_00881620 }
	__asm { cmp bl, al }
	__asm { je L_0088362e }
	__asm { push 0x12fae20 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_0088362e: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00883690
extern "C" __declspec(naked) void asm_00883690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test eax, eax }
	__asm { je L_008836a3 }
	__asm { lea esi, [eax - 0x1c] }
	__asm { jmp L_008836a5 }
	__asm { L_008836a3: }
	__asm { xor esi, esi }
	__asm { L_008836a5: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { add ecx, esi }
	__asm { call eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00881620();
// FUNCTION: ROBLOXSTUDIO 0x008836e0
extern "C" __declspec(naked) void asm_008836e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x2dc], edi }
	__asm { je L_00883730 }
	__asm { push ebx }
	__asm { call fn_00881620 }
	__asm { push 0x12fad8c }
	__asm { mov ecx, esi }
	__asm { mov bl, al }
	__asm { mov dword ptr [esi + 0x2dc], edi }
	__asm { call fn_007b4f50 }
	__asm { push 0x12fadf4 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_00881620 }
	__asm { cmp bl, al }
	__asm { pop ebx }
	__asm { je L_00883730 }
	__asm { push 0x12fae20 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00883730: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00881620();
// FUNCTION: ROBLOXSTUDIO 0x00883740
extern "C" __declspec(naked) void asm_00883740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x2e0], edi }
	__asm { je L_00883790 }
	__asm { push ebx }
	__asm { call fn_00881620 }
	__asm { push 0x12fadc0 }
	__asm { mov ecx, esi }
	__asm { mov bl, al }
	__asm { mov dword ptr [esi + 0x2e0], edi }
	__asm { call fn_007b4f50 }
	__asm { push 0x12fadf4 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { mov ecx, esi }
	__asm { call fn_00881620 }
	__asm { cmp bl, al }
	__asm { pop ebx }
	__asm { je L_00883790 }
	__asm { push 0x12fae20 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00883790: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00884060
extern "C" __declspec(naked) void asm_00884060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00884093 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe65b58 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00884095 }
	__asm { L_00884093: }
	__asm { xor eax, eax }
	__asm { L_00884095: }
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
// FUNCTION: ROBLOXSTUDIO 0x008840b0
extern "C" __declspec(naked) void asm_008840b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008840e3 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe65b1c }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008840e5 }
	__asm { L_008840e3: }
	__asm { xor eax, eax }
	__asm { L_008840e5: }
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
// FUNCTION: ROBLOXSTUDIO 0x00884100
extern "C" __declspec(naked) void asm_00884100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00884133 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe65b30 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00884135 }
	__asm { L_00884133: }
	__asm { xor eax, eax }
	__asm { L_00884135: }
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
// FUNCTION: ROBLOXSTUDIO 0x00884150
extern "C" __declspec(naked) void asm_00884150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00884183 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe65b44 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00884185 }
	__asm { L_00884183: }
	__asm { xor eax, eax }
	__asm { L_00884185: }
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

// FUNCTION: ROBLOXSTUDIO 0x008847d0
extern "C" __declspec(naked) void asm_008847d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_008847ec }
	__asm { add eax, -0x1c }
	__asm { je L_008847ec }
	__asm { lea ecx, [eax + 0x3ac] }
	__asm { jmp L_008847ee }
	__asm { L_008847ec: }
	__asm { xor ecx, ecx }
	__asm { L_008847ee: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x008848c0
extern "C" __declspec(naked) void asm_008848c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_008848dc }
	__asm { add eax, -0x1c }
	__asm { je L_008848dc }
	__asm { lea ecx, [eax + 0x3ac] }
	__asm { jmp L_008848de }
	__asm { L_008848dc: }
	__asm { xor ecx, ecx }
	__asm { L_008848de: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00885470
extern "C" __declspec(naked) void asm_00885470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008854a3 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe65ff0 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008854a5 }
	__asm { L_008854a3: }
	__asm { xor eax, eax }
	__asm { L_008854a5: }
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
// FUNCTION: ROBLOXSTUDIO 0x008854c0
extern "C" __declspec(naked) void asm_008854c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008854f3 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe65fb4 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008854f5 }
	__asm { L_008854f3: }
	__asm { xor eax, eax }
	__asm { L_008854f5: }
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
// FUNCTION: ROBLOXSTUDIO 0x00885510
extern "C" __declspec(naked) void asm_00885510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00885543 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe65fc8 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00885545 }
	__asm { L_00885543: }
	__asm { xor eax, eax }
	__asm { L_00885545: }
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
// FUNCTION: ROBLOXSTUDIO 0x00885560
extern "C" __declspec(naked) void asm_00885560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00885593 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0xe65fdc }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00885595 }
	__asm { L_00885593: }
	__asm { xor eax, eax }
	__asm { L_00885595: }
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

// FUNCTION: ROBLOXSTUDIO 0x008858d0
extern "C" __declspec(naked) void asm_008858d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_008858ec }
	__asm { add eax, -0x1c }
	__asm { je L_008858ec }
	__asm { lea ecx, [eax + 0x290] }
	__asm { jmp L_008858ee }
	__asm { L_008858ec: }
	__asm { xor ecx, ecx }
	__asm { L_008858ee: }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00995010();
extern "C" void fn_0099f890();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00887050
extern "C" __declspec(naked) void asm_00887050()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi], 0xe66044 }
	__asm { mov dword ptr [esi + 4], 0xe660cc }
	__asm { mov dword ptr [esi + 0x18], 0xe660d4 }
	__asm { mov dword ptr [esi + 0x1c], 0xe660e0 }
	__asm { mov dword ptr [esi + 0x64], 0xe660f0 }
	__asm { mov dword ptr [esi + 0x6c], 0xe660f8 }
	__asm { mov dword ptr [esi + 0x84], 0xe6612c }
	__asm { mov dword ptr [esi + 0x98], 0xe66158 }
	__asm { mov dword ptr [esi + 0x128], 0xe66160 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x68], 0xe66174 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xe8] }
	__asm { mov dword ptr [ecx + esi + 0x64], eax }
	__asm { mov edi, dword ptr [esi + 0x148] }
	__asm { test edi, edi }
	__asm { je L_008870d3 }
	__asm { mov ecx, edi }
	__asm { call fn_00995010 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008870d3: }
	__asm { pop edi }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_0099f890 }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_012fb0dc[];
extern "C" void fn_006b9b20();
extern "C" void fn_00888d80();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008870e0
extern "C" __declspec(naked) void asm_008870e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00888d80 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_008870fb }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_00887119 }
	__asm { jmp L_00887114 }
	__asm { L_008870fb: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_012fb0dc] }
	__asm { cmp edx, eax }
	__asm { ja L_0088710e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_012fb0dc], eax }
	__asm { L_0088710e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00887114: }
	__asm { call fn_006b9b20 }
	__asm { L_00887119: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0088bd90
extern "C" __declspec(naked) void asm_0088bd90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0088bdc5 }
	__asm { mov dword ptr [edx], 0xe68d70 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { jmp L_0088bdc7 }
	__asm { L_0088bdc5: }
	__asm { xor edx, edx }
	__asm { L_0088bdc7: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
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
// FUNCTION: ROBLOXSTUDIO 0x0088bea0
extern "C" __declspec(naked) void asm_0088bea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0088bed5 }
	__asm { mov dword ptr [edx], 0xe68dfc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { jmp L_0088bed7 }
	__asm { L_0088bed5: }
	__asm { xor edx, edx }
	__asm { L_0088bed7: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
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
// FUNCTION: ROBLOXSTUDIO 0x0088c130
extern "C" __declspec(naked) void asm_0088c130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0088c165 }
	__asm { mov dword ptr [edx], 0xe68e10 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { jmp L_0088c167 }
	__asm { L_0088c165: }
	__asm { xor edx, edx }
	__asm { L_0088c167: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
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
// FUNCTION: ROBLOXSTUDIO 0x0088c180
extern "C" __declspec(naked) void asm_0088c180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0088c1b5 }
	__asm { mov dword ptr [edx], 0xe68d5c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { jmp L_0088c1b7 }
	__asm { L_0088c1b5: }
	__asm { xor edx, edx }
	__asm { L_0088c1b7: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_012fba18[];
extern "C" void fn_006b9b20();
extern "C" void fn_00894240();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0088eb20
extern "C" __declspec(naked) void asm_0088eb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_00894240 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_0088eb3b }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_0088eb59 }
	__asm { jmp L_0088eb54 }
	__asm { L_0088eb3b: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_012fba18] }
	__asm { cmp edx, eax }
	__asm { ja L_0088eb4e }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_012fba18], eax }
	__asm { L_0088eb4e: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0088eb54: }
	__asm { call fn_006b9b20 }
	__asm { L_0088eb59: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10598[];
extern "C" char g_011dcc11[];
extern "C" char g_012fba24[];
extern "C" void fn_006b9b20();
extern "C" void fn_008942a0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0088eb90
extern "C" __declspec(naked) void asm_0088eb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_008942a0 }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { jne L_0088ebab }
	__asm { cmp byte ptr [g_011dcc11], al }
	__asm { je L_0088ebc9 }
	__asm { jmp L_0088ebc4 }
	__asm { L_0088ebab: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_012fba24] }
	__asm { cmp edx, eax }
	__asm { ja L_0088ebbe }
	__asm { sub eax, edx }
	__asm { mov dword ptr [g_012fba24], eax }
	__asm { L_0088ebbe: }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0088ebc4: }
	__asm { call fn_006b9b20 }
	__asm { L_0088ebc9: }
	__asm { push 1 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { push 0x1179f5c }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe1815c }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0088f110
extern "C" __declspec(naked) void asm_0088f110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_0088f152 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0088f152: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00532170();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x0088fb20
extern "C" __declspec(naked) void asm_0088fb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0088fb55 }
	__asm { add edi, 0x1c }
	__asm { je L_0088fb55 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_00532170 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_0088fb55 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0088fb55: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0088b580();
// FUNCTION: ROBLOXSTUDIO 0x00890530
extern "C" __declspec(naked) void asm_00890530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0089056b }
	__asm { mov edx, dword ptr [eax + 0x4c] }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [edx + ecx] }
	__asm { add ecx, dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { add eax, 0x4c }
	__asm { add ecx, eax }
	__asm { call fn_0088b580 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0089056b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0043f1d0();
// FUNCTION: ROBLOXSTUDIO 0x00890da0
extern "C" __declspec(naked) void asm_00890da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00890db2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00890db4 }
	__asm { L_00890db2: }
	__asm { xor edx, edx }
	__asm { L_00890db4: }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00890dd8 }
	__asm { mov ecx, eax }
	__asm { call fn_0043f1d0 }
	__asm { L_00890dd8: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0043f630();
// FUNCTION: ROBLOXSTUDIO 0x00890e10
extern "C" __declspec(naked) void asm_00890e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00890e22 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00890e24 }
	__asm { L_00890e22: }
	__asm { xor edx, edx }
	__asm { L_00890e24: }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ecx + eax] }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { add ecx, 0x68 }
	__asm { add ecx, dword ptr [esi + 0x2c] }
	__asm { add ecx, edx }
	__asm { call eax }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00890e48 }
	__asm { mov ecx, eax }
	__asm { call fn_0043f630 }
	__asm { L_00890e48: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0088fcb0();
// FUNCTION: ROBLOXSTUDIO 0x008912c0
extern "C" __declspec(naked) void asm_008912c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_008912d2 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_008912d4 }
	__asm { L_008912d2: }
	__asm { xor edx, edx }
	__asm { L_008912d4: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 4 }
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
	__asm { call fn_0088fcb0 }
	__asm { add esp, 0x14 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0088d950();
extern "C" void fn_0088ecc0();
// FUNCTION: ROBLOXSTUDIO 0x00893350
extern "C" __declspec(naked) void asm_00893350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x68 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x68], 0 }
	__asm { je L_0089337a }
	__asm { mov ecx, dword ptr [esi + 0x74] }
	__asm { add ecx, dword ptr [esi + 0x6c] }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { call eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0088ecc0 }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { L_0089337a: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_0088d950 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00893430
extern "C" __declspec(naked) void asm_00893430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00893445 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00893447 }
	__asm { L_00893445: }
	__asm { xor edx, edx }
	__asm { L_00893447: }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { call eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00893480
extern "C" __declspec(naked) void asm_00893480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test eax, eax }
	__asm { je L_00893492 }
	__asm { lea edx, [eax - 0x1c] }
	__asm { jmp L_00893494 }
	__asm { L_00893492: }
	__asm { xor edx, edx }
	__asm { L_00893494: }
	__asm { mov ecx, dword ptr [edx + 0x68] }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { lea ecx, [edx + 0x68] }
	__asm { add ecx, eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { call eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b1a40();
extern "C" void fn_007b3c70();
extern "C" void fn_007cd560();
extern "C" void fn_009d9c50();
// FUNCTION: ROBLOXSTUDIO 0x00893880
extern "C" __declspec(naked) void asm_00893880()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { test esi, esi }
	__asm { je L_008938c1 }
	__asm { push esi }
	__asm { call fn_009d9c50 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008938c1 }
	__asm { add esi, 0x1c }
	__asm { je L_008938b1 }
	__asm { mov esi, dword ptr [esi + 0xc] }
	__asm { call fn_007b1a40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { jne L_008938c1 }
	__asm { L_008938b1: }
	__asm { or dword ptr [edi + 0xe8], 2 }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jmp fn_007b3c70 }
	__asm { L_008938c1: }
	__asm { and dword ptr [edi + 0xe8], 0xfffffffd }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jmp fn_007b3c70 }
}

// FUNCTION: ROBLOXSTUDIO 0x00893f80
extern "C" __declspec(naked) void asm_00893f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_00893fad }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 1 }
	__asm { je L_00893fa8 }
	__asm { cmp eax, 3 }
	__asm { je L_00893fa8 }
	__asm { cmp eax, 2 }
	__asm { jne L_00893fad }
	__asm { L_00893fa8: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00893fad: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00894060
extern "C" __declspec(naked) void asm_00894060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { test eax, eax }
	__asm { jne L_0089408d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x18] }
	__asm { cmp eax, 6 }
	__asm { jl L_00894083 }
	__asm { cmp eax, 9 }
	__asm { jle L_00894088 }
	__asm { L_00894083: }
	__asm { cmp eax, 0xa }
	__asm { jne L_0089408d }
	__asm { L_00894088: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0089408d: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099e490();
// FUNCTION: ROBLOXSTUDIO 0x00894980
extern "C" __declspec(naked) void asm_00894980()
{
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test dl, dl }
	__asm { je L_008949ce }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { cmp dword ptr [eax + 0x4c], 0 }
	__asm { je L_008949ce }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_008949bd }
	__asm { push 0x1bb }
	__asm { push 0xe67530 }
	__asm { push 0xe678e4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008949ce }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_008949bd: }
	__asm { movzx eax, dl }
	__asm { push 0xe67900 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008949ce: }
	__asm { mov ecx, dword ptr [esi + 0xdc] }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { call fn_0099e490 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007b4990();
extern "C" void fn_0088b8c0();
// FUNCTION: ROBLOXSTUDIO 0x00896b40
extern "C" __declspec(naked) void asm_00896b40()
{
	__asm { push esi }
	__asm { lea esi, [ecx - 0x70] }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { je L_00896b69 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { cmp dword ptr [eax + 0x28], 0 }
	__asm { jne L_00896b90 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { cmp dword ptr [eax + 0x40], 0 }
	__asm { jne L_00896b90 }
	__asm { L_00896b69: }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { je L_00896b81 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { cmp dword ptr [eax + 0x20], 0 }
	__asm { jne L_00896b90 }
	__asm { L_00896b81: }
	__asm { mov ecx, esi }
	__asm { call fn_0088b8c0 }
	__asm { test eax, eax }
	__asm { jne L_00896b90 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00896b90: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_007b4990();
extern "C" void fn_007b49a0();
extern "C" void fn_007b4f50();
extern "C" void fn_0099ea70();
extern "C" void fn_00a249c0();
extern "C" void fn_00d09250();
// FUNCTION: ROBLOXSTUDIO 0x008987e0
extern "C" __declspec(naked) void asm_008987e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0xe0] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ecx + edi*4 + 0x120] }
	__asm { je L_00898838 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0099ea70 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { je L_0089881c }
	__asm { mov ecx, esi }
	__asm { call fn_007b49a0 }
	__asm { mov byte ptr [eax + 0xb0], 1 }
	__asm { L_0089881c: }
	__asm { lea ecx, [esi + 0x98] }
	__asm { call fn_00d09250 }
	__asm { push edi }
	__asm { call fn_00a249c0 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_007b4f50 }
	__asm { L_00898838: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x0089b260
extern "C" __declspec(naked) void asm_0089b260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov edx, dword ptr [edi + 0x74] }
	__asm { mov eax, dword ptr [edi + 0x70] }
	__asm { cmp eax, edx }
	__asm { je L_0089b280 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_0089b274: }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_0089b27f }
	__asm { add eax, 4 }
	__asm { cmp eax, edx }
	__asm { jne L_0089b274 }
	__asm { L_0089b27f: }
	__asm { pop esi }
	__asm { L_0089b280: }
	__asm { mov ecx, dword ptr [edi + 0x74] }
	__asm { lea edx, [eax + 4] }
	__asm { sub ecx, edx }
	__asm { and ecx, 0xfffffffc }
	__asm { push ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { add dword ptr [edi + 0x74], -4 }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0089ebc0
extern "C" __declspec(naked) void asm_0089ebc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0089ebf5 }
	__asm { mov dword ptr [edx], 0xe6a914 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { jmp L_0089ebf7 }
	__asm { L_0089ebf5: }
	__asm { xor edx, edx }
	__asm { L_0089ebf7: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
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
// FUNCTION: ROBLOXSTUDIO 0x0089ec70
extern "C" __declspec(naked) void asm_0089ec70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_0089eca5 }
	__asm { mov dword ptr [edx], 0xe6a93c }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { jmp L_0089eca7 }
	__asm { L_0089eca5: }
	__asm { xor edx, edx }
	__asm { L_0089eca7: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a0c50
extern "C" __declspec(naked) void asm_008a0c50()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x14], 0 }
	__asm { je L_008a0c83 }
	__asm { lea ecx, [edi + 0x14] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { L_008a0c83: }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { je L_008a0cb2 }
	__asm { lea ecx, [edi + 8] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { L_008a0cb2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_008a2cc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a0cc0
extern "C" __declspec(naked) void asm_008a0cc0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x1c], 0 }
	__asm { je L_008a0cf3 }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { L_008a0cf3: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_008a0d29 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_008a0d10 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_008a2cc0 }
	__asm { L_008a0d10: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_008a0d29: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a0fa0
extern "C" __declspec(naked) void asm_008a0fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x44] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x40] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_008a0ffa }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a0ffa: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a1040
extern "C" __declspec(naked) void asm_008a1040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x40] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_008a1092 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a1092: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008a10a0
extern "C" __declspec(naked) void asm_008a10a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00493600 }
	__asm { push dword ptr [edi + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { mov dword ptr [edi], 0xe33a28 }
	__asm { je L_008a10ea }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008a10ea: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008a52c0
extern "C" __declspec(naked) void asm_008a52c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008a52f5 }
	__asm { mov dword ptr [edx], 0xe6abf0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { jmp L_008a52f7 }
	__asm { L_008a52f5: }
	__asm { xor edx, edx }
	__asm { L_008a52f7: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00865d20();
extern "C" void fn_00889410();
// FUNCTION: ROBLOXSTUDIO 0x008a5440
extern "C" __declspec(naked) void asm_008a5440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00865d20 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_008a5476 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 1 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push esi }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00889410 }
	__asm { L_008a5476: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00865d20();
extern "C" void fn_00889410();
// FUNCTION: ROBLOXSTUDIO 0x008a5480
extern "C" __declspec(naked) void asm_008a5480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00865d20 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_008a54b6 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 2 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push esi }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00889410 }
	__asm { L_008a54b6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00865d20();
extern "C" void fn_00889410();
// FUNCTION: ROBLOXSTUDIO 0x008a54c0
extern "C" __declspec(naked) void asm_008a54c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00865d20 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_008a54f6 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { push esi }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { call fn_00889410 }
	__asm { L_008a54f6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008a6720
extern "C" __declspec(naked) void asm_008a6720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008a675b }
	__asm { mov dword ptr [edx], 0xe6b2a4 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008a675d }
	__asm { L_008a675b: }
	__asm { xor edx, edx }
	__asm { L_008a675d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
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
// FUNCTION: ROBLOXSTUDIO 0x008a6780
extern "C" __declspec(naked) void asm_008a6780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008a67bb }
	__asm { mov dword ptr [edx], 0xe6b290 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008a67bd }
	__asm { L_008a67bb: }
	__asm { xor edx, edx }
	__asm { L_008a67bd: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
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
// FUNCTION: ROBLOXSTUDIO 0x008a98e0
extern "C" __declspec(naked) void asm_008a98e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008a991b }
	__asm { mov dword ptr [edx], 0xe6b4e8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008a991d }
	__asm { L_008a991b: }
	__asm { xor edx, edx }
	__asm { L_008a991d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
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
// FUNCTION: ROBLOXSTUDIO 0x008a9940
extern "C" __declspec(naked) void asm_008a9940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008a997b }
	__asm { mov dword ptr [edx], 0xe6b4fc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008a997d }
	__asm { L_008a997b: }
	__asm { xor edx, edx }
	__asm { L_008a997d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_0044e490();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008a9e80
extern "C" __declspec(naked) void asm_008a9e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea esi, [ebx + 0xac] }
	__asm { push esi }
	__asm { call fn_0044e490 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_008a9ec1 }
	__asm { cmp esi, edi }
	__asm { je L_008a9eaf }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_008a9eaf: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { push 0x12fc358 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_007b4f50 }
	__asm { L_008a9ec1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_0044e490();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008a9ed0
extern "C" __declspec(naked) void asm_008a9ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea esi, [ebx + 0x90] }
	__asm { push esi }
	__asm { call fn_0044e490 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_008a9f11 }
	__asm { cmp esi, edi }
	__asm { je L_008a9eff }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00403540 }
	__asm { L_008a9eff: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { push 0x12fc384 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_007b4f50 }
	__asm { L_008a9f11: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008aa1d0
extern "C" __declspec(naked) void asm_008aa1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008aa20b }
	__asm { mov dword ptr [edx], 0xe6b710 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008aa20d }
	__asm { L_008aa20b: }
	__asm { xor edx, edx }
	__asm { L_008aa20d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fc3f8[];
extern "C" char g_012fe5f0[];
extern "C" char g_01303174[];
extern "C" void fn_00403540();
extern "C" void fn_007b4f50();
extern "C" void fn_008ad020();
// FUNCTION: ROBLOXSTUDIO 0x008acfb0
extern "C" __declspec(naked) void asm_008acfb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x140] }
	__asm { cmp ecx, eax }
	__asm { je L_008acfcd }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_008acfcd: }
	__asm { push 0x12fc46c }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { cmp byte ptr [g_01303174], 0 }
	__asm { je L_008acffb }
	__asm { cmp byte ptr [g_012fe5f0], 0 }
	__asm { je L_008acffb }
	__asm { cmp byte ptr [g_012fc3f8], 0 }
	__asm { je L_008acffb }
	__asm { mov ecx, esi }
	__asm { call fn_008ad020 }
	__asm { L_008acffb: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008ad860
extern "C" __declspec(naked) void asm_008ad860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008ad88d }
	__asm { mov dword ptr [eax], 0xe6ce44 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008ad88f }
	__asm { L_008ad88d: }
	__asm { xor eax, eax }
	__asm { L_008ad88f: }
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

extern "C" void fn_0041ed90();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x008adbe0
extern "C" __declspec(naked) void asm_008adbe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_008adc15 }
	__asm { add edi, 0x1c }
	__asm { je L_008adc15 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_008adc15 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008adc15: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008ae1d0
extern "C" __declspec(naked) void asm_008ae1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_008ae212 }
	__asm { nop }
	__asm { L_008ae1e0: }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_008ae20b }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_008ae20b: }
	__asm { add esi, 0xc }
	__asm { cmp esi, edi }
	__asm { jne L_008ae1e0 }
	__asm { L_008ae212: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008b0470
extern "C" __declspec(naked) void asm_008b0470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { lea eax, [ecx + 1] }
	__asm { cmp eax, dword ptr [edx + 8] }
	__asm { ja L_008b0495 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov cl, byte ptr [eax + ecx] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [eax], cl }
	__asm { inc dword ptr [edx + 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b0495: }
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
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008b04c0
extern "C" __declspec(naked) void asm_008b04c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea eax, [ecx + 8] }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { ja L_008b04ef }
	__asm { mov edx, dword ptr [esi] }
	__asm { add edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b04ef: }
	__asm { push 8 }
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
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008b0580
extern "C" __declspec(naked) void asm_008b0580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx + 4] }
	__asm { lea eax, [esi + 4] }
	__asm { cmp eax, dword ptr [edx + 8] }
	__asm { ja L_008b05a8 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ecx + esi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { add dword ptr [edx + 4], 4 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b05a8: }
	__asm { push 4 }
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
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008b0630
extern "C" __declspec(naked) void asm_008b0630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea eax, [ecx + 6] }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { ja L_008b0661 }
	__asm { mov edx, dword ptr [esi] }
	__asm { add edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ax, word ptr [edx + 4] }
	__asm { mov word ptr [ecx + 4], ax }
	__asm { add dword ptr [esi + 4], 6 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008b0661: }
	__asm { push 6 }
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

extern "C" void fn_008b3830();
// FUNCTION: ROBLOXSTUDIO 0x008b37f0
extern "C" __declspec(naked) void asm_008b37f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008b3830 }
	__asm { add esp, 0xc }
	__asm { xor edx, edx }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { je L_008b3820 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { L_008b3812: }
	__asm { add dword ptr [ecx + eax*4], edx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { inc eax }
	__asm { mov edx, dword ptr [ecx + eax*4 - 4] }
	__asm { cmp eax, edi }
	__asm { jb L_008b3812 }
	__asm { L_008b3820: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_008b1c80();
// FUNCTION: ROBLOXSTUDIO 0x008b4cc0
extern "C" __declspec(naked) void asm_008b4cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { sub edx, dword ptr [esi] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, ecx }
	__asm { jae L_008b4cfe }
	__asm { cmp ecx, 0x71c71c7 }
	__asm { jbe L_008b4cf6 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_008b4cf6: }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_008b1c80 }
	__asm { L_008b4cfe: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008ba170
extern "C" __declspec(naked) void asm_008ba170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008ba1ab }
	__asm { mov dword ptr [edx], 0xe6dc60 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008ba1ad }
	__asm { L_008ba1ab: }
	__asm { xor edx, edx }
	__asm { L_008ba1ad: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
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
// FUNCTION: ROBLOXSTUDIO 0x008ba1d0
extern "C" __declspec(naked) void asm_008ba1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008ba20b }
	__asm { mov dword ptr [edx], 0xe6dc24 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008ba20d }
	__asm { L_008ba20b: }
	__asm { xor edx, edx }
	__asm { L_008ba20d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
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
// FUNCTION: ROBLOXSTUDIO 0x008ba350
extern "C" __declspec(naked) void asm_008ba350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008ba38b }
	__asm { mov dword ptr [edx], 0xe6dc10 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008ba38d }
	__asm { L_008ba38b: }
	__asm { xor edx, edx }
	__asm { L_008ba38d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
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
// FUNCTION: ROBLOXSTUDIO 0x008ba3b0
extern "C" __declspec(naked) void asm_008ba3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008ba3eb }
	__asm { mov dword ptr [edx], 0xe6dbe8 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008ba3ed }
	__asm { L_008ba3eb: }
	__asm { xor edx, edx }
	__asm { L_008ba3ed: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
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
// FUNCTION: ROBLOXSTUDIO 0x008ba410
extern "C" __declspec(naked) void asm_008ba410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008ba44b }
	__asm { mov dword ptr [edx], 0xe6dbfc }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008ba44d }
	__asm { L_008ba44b: }
	__asm { xor edx, edx }
	__asm { L_008ba44d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
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
// FUNCTION: ROBLOXSTUDIO 0x008ba470
extern "C" __declspec(naked) void asm_008ba470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_008ba4ab }
	__asm { mov dword ptr [edx], 0xe6dc38 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_008ba4ad }
	__asm { L_008ba4ab: }
	__asm { xor edx, edx }
	__asm { L_008ba4ad: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi], edx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00410d50();
extern "C" void fn_007d5d30();
// FUNCTION: ROBLOXSTUDIO 0x008bb770
extern "C" __declspec(naked) void asm_008bb770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_008bb781 }
	__asm { lea edi, [eax - 0x1c] }
	__asm { jmp L_008bb783 }
	__asm { L_008bb781: }
	__asm { xor edi, edi }
	__asm { L_008bb783: }
	__asm { mov edx, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edi + ecx] }
	__asm { call edx }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { call fn_007d5d30 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00410d50 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00774920();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008bbf20
extern "C" __declspec(naked) void asm_008bbf20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x78], edi }
	__asm { je L_008bbf65 }
	__asm { push 0 }
	__asm { mov ecx, 0xe6da5c }
	__asm { mov eax, 0xe6da74 }
	__asm { cmp edi, 1 }
	__asm { push 0 }
	__asm { cmovne eax, ecx }
	__asm { push eax }
	__asm { push 0xe6da24 }
	__asm { push 0xf13380 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, esi }
	__asm { push 0x12fc624 }
	__asm { mov dword ptr [esi + 0x78], edi }
	__asm { call fn_007b4f50 }
	__asm { L_008bbf65: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00774920();
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x008bc180
extern "C" __declspec(naked) void asm_008bc180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x7c], edi }
	__asm { je L_008bc1c5 }
	__asm { push 0 }
	__asm { mov ecx, 0xe6da8c }
	__asm { mov eax, 0xe6daa8 }
	__asm { cmp edi, 2 }
	__asm { push 0 }
	__asm { cmovne eax, ecx }
	__asm { push eax }
	__asm { push 0xe6d624 }
	__asm { push 0xf13380 }
	__asm { call fn_00774920 }
	__asm { add esp, 0x14 }
	__asm { mov ecx, esi }
	__asm { push 0x12fc658 }
	__asm { mov dword ptr [esi + 0x7c], edi }
	__asm { call fn_007b4f50 }
	__asm { L_008bc1c5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b69050();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008bc600
extern "C" __declspec(naked) void asm_008bc600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi], 0xe6dc74 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_00b69050 }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_008bc63a }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008bc63a: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x008bfc00
extern "C" __declspec(naked) void asm_008bfc00()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_008bfc4f }
	__asm { test bl, 3 }
	__asm { je L_008bfc4f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_008bfc3e }
	__asm { push 0x130 }
	__asm { push 0x10042f8 }
	__asm { push 0x1004338 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_008bfc4f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_008bfc3e: }
	__asm { movzx eax, al }
	__asm { push 0x1004360 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_008bfc4f: }
	__asm { mov eax, ebx }
	__asm { mov dword ptr [ebx], 0 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_012fc96e[];
extern "C" void fn_006b8a90();
// FUNCTION: ROBLOXSTUDIO 0x008c0ac0
extern "C" __declspec(naked) void asm_008c0ac0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_008c0b18 }
	__asm { mov al, byte ptr [g_012fc96e] }
	__asm { test al, al }
	__asm { je L_008c0ae5 }
	__asm { push ecx }
	__asm { movzx eax, al }
	__asm { push 0xe6ee9c }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_008c0ae5: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { test eax, eax }
	__asm { je L_008c0b04 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { pop esi }
	__asm { ret }
	__asm { L_008c0b04: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { L_008c0b18: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012fcdb8[];
extern "C" void fn_008d8680();
extern "C" void fn_00a35890();
extern "C" void fn_00a36120();
// FUNCTION: ROBLOXSTUDIO 0x008c1210
extern "C" __declspec(naked) void asm_008c1210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012fcdb8], 0 }
	__asm { jne L_008c1234 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [eax + 0x1c] }
	__asm { push 0xffffd8f0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a35890 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008c1234: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_008d8680 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { push dword ptr [ecx + 0x1c] }
	__asm { push 0xffffd8f0 }
	__asm { push esi }
	__asm { call fn_00a35890 }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00a36120 }
	__asm { add esp, 0x1c }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008d4210();
// FUNCTION: ROBLOXSTUDIO 0x008cc5c0
extern "C" __declspec(naked) void asm_008cc5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_008d4210 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_008cc5dc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_008cc5dc: }
	__asm { lea eax, [ecx + 4] }
	__asm { test eax, eax }
	__asm { je L_008cc61a }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { mov dword ptr [eax + 0x14], 0 }
	__asm { mov dword ptr [eax + 0x18], 0 }
	__asm { mov dword ptr [eax + 0x1c], 0 }
	__asm { L_008cc61a: }
	__asm { mov byte ptr [esi + 9], 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_008c8c40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008cfdd0
extern "C" __declspec(naked) void asm_008cfdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { test edi, edi }
	__asm { je L_008cfe29 }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { push esi }
	__asm { je L_008cfe1f }
	__asm { lea ecx, [edi + 4] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 8] }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_008c8c40 }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { L_008cfe1f: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_008cfe29: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008d1500
extern "C" __declspec(naked) void asm_008d1500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx] }
	__asm { cmp eax, esi }
	__asm { jne L_008d1526 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov esi, dword ptr [edx + 4] }
	__asm { cmp eax, esi }
	__asm { jne L_008d1526 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov esi, dword ptr [edx + 8] }
	__asm { cmp eax, esi }
	__asm { je L_008d152f }
	__asm { L_008d1526: }
	__asm { sbb eax, eax }
	__asm { neg eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008d152f: }
	__asm { mov ecx, dword ptr [ecx + 0xc] }
	__asm { xor eax, eax }
	__asm { cmp ecx, dword ptr [edx + 0xc] }
	__asm { pop esi }
	__asm { setl al }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008d1e60
extern "C" __declspec(naked) void asm_008d1e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0x3c], 0x10 }
	__asm { jb L_008d1e78 }
	__asm { push dword ptr [esi + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d1e78: }
	__asm { mov dword ptr [esi + 0x3c], 0xf }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov byte ptr [esi + 0x28], 0 }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { jb L_008d1e9b }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008d1e9b: }
	__asm { mov dword ptr [esi + 0x24], 0xf }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_006b9b10();
extern "C" void fn_0097efd0();
extern "C" void fn_0097f090();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x008d4280
extern "C" __declspec(naked) void asm_008d4280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { call fn_0097efd0 }
	__asm { push 3 }
	__asm { push dword ptr [eax] }
	__asm { call fn_0097f090 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_008d42ae }
	__asm { push 0xe702a4 }
	__asm { call fn_006b9b10 }
	__asm { add esp, 4 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_008d42ae: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xf12f2d }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xe18168 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x008d9c50
extern "C" __declspec(naked) void asm_008d9c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x90] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { mov edx, eax }
	__asm { jne L_008d9c7c }
	__asm { L_008d9c68: }
	__asm { cmp dword ptr [ecx + 0x10], esi }
	__asm { jae L_008d9c72 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { jmp L_008d9c76 }
	__asm { L_008d9c72: }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_008d9c76: }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { je L_008d9c68 }
	__asm { L_008d9c7c: }
	__asm { cmp edx, eax }
	__asm { je L_008d9c88 }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { cmp esi, dword ptr [edx + 0x10] }
	__asm { jae L_008d9c8b }
	__asm { L_008d9c88: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_008d9c8b: }
	__asm { lea edx, [ebp + 8] }
	__asm { xor ecx, ecx }
	__asm { cmp dword ptr [edx], eax }
	__asm { pop esi }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_008c8c40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e1fd0
extern "C" __declspec(naked) void asm_008e1fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test edi, edi }
	__asm { je L_008e202b }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { push esi }
	__asm { je L_008e2021 }
	__asm { lea ecx, [edi + 4] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [edi + 8] }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_008c8c40 }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { L_008e2021: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_008e202b: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007c92f0();
extern "C" void fn_007cd560();
// FUNCTION: ROBLOXSTUDIO 0x008e3480
extern "C" __declspec(naked) void asm_008e3480()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_008e34b5 }
	__asm { add edi, 0x1c }
	__asm { je L_008e34b5 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_007c92f0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { je L_008e34b5 }
	__asm { add edi, -0x1c }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008e34b5: }
	__asm { xor edi, edi }
	__asm { xor eax, eax }
	__asm { test edi, edi }
	__asm { setne al }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006f1b90();
extern "C" void fn_00a356f0();
// FUNCTION: ROBLOXSTUDIO 0x008e5850
extern "C" __declspec(naked) void asm_008e5850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { call fn_006f1b90 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_008e587f }
	__asm { lea eax, [ecx - 0x2c] }
	__asm { jmp L_008e5881 }
	__asm { L_008e587f: }
	__asm { xor eax, eax }
	__asm { L_008e5881: }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 0xb8] }
	__asm { fld qword ptr [eax + 0x80] }
	__asm { fstp qword ptr [esp] }
	__asm { push ecx }
	__asm { call fn_00a356f0 }
	__asm { add esp, 0xc }
	__asm { mov eax, 1 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006b44a0();
// FUNCTION: ROBLOXSTUDIO 0x008e7370
extern "C" __declspec(naked) void asm_008e7370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [esi], 0 }
	__asm { jne L_008e738d }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_006b44a0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_008e738d: }
	__asm { mov edx, esi }
	__asm { push edi }
	__asm { lea edi, [edx + 1] }
	__asm { L_008e7393: }
	__asm { mov al, byte ptr [edx] }
	__asm { inc edx }
	__asm { test al, al }
	__asm { jne L_008e7393 }
	__asm { sub edx, edi }
	__asm { pop edi }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_006b44a0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x008e73b0
extern "C" __declspec(naked) void asm_008e73b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, edi }
	__asm { je L_008e73ed }
	__asm { add esi, 0x2c }
	__asm { L_008e73c2: }
	__asm { cmp dword ptr [esi], 0x10 }
	__asm { jb L_008e73d2 }
	__asm { push dword ptr [esi - 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_008e73d2: }
	__asm { mov dword ptr [esi], 0xf }
	__asm { mov dword ptr [esi - 4], 0 }
	__asm { mov byte ptr [esi - 0x14], 0 }
	__asm { add esi, 0x30 }
	__asm { lea eax, [esi - 0x2c] }
	__asm { cmp eax, edi }
	__asm { jne L_008e73c2 }
	__asm { L_008e73ed: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x008f1f00
extern "C" __declspec(naked) void asm_008f1f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edx, dword ptr [esi] }
	__asm { sub eax, dword ptr [edx] }
	__asm { jns L_008f1f18 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008f1f18: }
	__asm { test eax, eax }
	__asm { jle L_008f1f23 }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_008f1f23: }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { xor eax, eax }
	__asm { cmp ecx, dword ptr [esi + 4] }
	__asm { pop esi }
	__asm { setl al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x008f3890
extern "C" __declspec(naked) void asm_008f3890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008f38bd }
	__asm { mov dword ptr [eax], 0xe74b00 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008f38bf }
	__asm { L_008f38bd: }
	__asm { xor eax, eax }
	__asm { L_008f38bf: }
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
// FUNCTION: ROBLOXSTUDIO 0x008f38e0
extern "C" __declspec(naked) void asm_008f38e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_008f390d }
	__asm { mov dword ptr [eax], 0xe74b14 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_008f390f }
	__asm { L_008f390d: }
	__asm { xor eax, eax }
	__asm { L_008f390f: }
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
