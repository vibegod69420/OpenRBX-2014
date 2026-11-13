// Bundled inline-assembly functions (merged from the recursion output).

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_005e4850();
extern "C" void fn_005e48e0();
// FUNCTION: ROBLOXSTUDIO 0x005e3d20
extern "C" __declspec(naked) void asm_005e3d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x38], 0 }
	__asm { jne L_005e3d7e }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x44] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_005e3d52 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_005e3d52: }
	__asm { call fn_005e48e0 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { test eax, eax }
	__asm { jne L_005e3d7e }
	__asm { push dword ptr [esi + 0x34] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push dword ptr [esi + 0x30] }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push dword ptr [eax + 0x14] }
	__asm { call fn_005e4850 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { L_005e3d7e: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005e49f0();
extern "C" void fn_005e4b50();
extern "C" void fn_005eb960();
extern "C" void fn_005eb9b0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005e3df0
extern "C" __declspec(naked) void asm_005e3df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e763 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x54 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_005eb9b0 }
	__asm { lea eax, [esi + 0x34] }
	__asm { mov dword ptr [esi], 0xe19ce0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test al, al }
	__asm { je L_005e3ea3 }
	__asm { test ebx, ebx }
	__asm { je L_005e3e6e }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { test ecx, ecx }
	__asm { jne L_005e3ea3 }
	__asm { L_005e3e6e: }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e3e92 }
	__asm { push 0x7b }
	__asm { push 0xe19d10 }
	__asm { push 0xe19e80 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e3ea3 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005e3e92: }
	__asm { movzx eax, al }
	__asm { push 0xe19ea0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e3ea3: }
	__asm { xor eax, eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push ecx }
	__asm { push ebx }
	__asm { call dword ptr [eax + 0x30] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { xor eax, eax }
	__asm { lea edx, [ebp - 0x60] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { mov dword ptr [ebp - 0x48], eax }
	__asm { mov dword ptr [ebp - 0x44], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push ecx }
	__asm { call dword ptr [eax + 0x30] }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_005e3f40 }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { cmp eax, dword ptr [ebp - 0x48] }
	__asm { jne L_005e3f08 }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { cmp eax, dword ptr [ebp - 0x44] }
	__asm { je L_005e3f40 }
	__asm { L_005e3f08: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e3f2f }
	__asm { push 0x83 }
	__asm { push 0xe19d10 }
	__asm { push 0xe19f1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e3f40 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_005e3f2f: }
	__asm { movzx eax, cl }
	__asm { push 0xe19f58 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e3f40: }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { push 0x48 }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test edi, edi }
	__asm { je L_005e3f97 }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push 3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005eb960 }
	__asm { mov dword ptr [edi], 0xe19cd0 }
	__asm { mov dword ptr [edi + 0x38], ebx }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 7 }
	__asm { jmp L_005e3f99 }
	__asm { L_005e3f97: }
	__asm { xor edi, edi }
	__asm { L_005e3f99: }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_005e49f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { mov dword ptr [eax], 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x34] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_005e4b50 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edi, edi }
	__asm { je L_005e4000 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_005e4000 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_005e4000 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005e4000: }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_005e402f }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_005e402f }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_005e402f }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005e402f: }
	__asm { push 0x48 }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test edi, edi }
	__asm { je L_005e407d }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push 0xd }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005eb960 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi], 0xe19cd0 }
	__asm { mov dword ptr [edi + 0x38], ecx }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 7 }
	__asm { jmp L_005e407f }
	__asm { L_005e407d: }
	__asm { xor edi, edi }
	__asm { L_005e407f: }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_005e49f0 }
	__asm { mov ecx, dword ptr [esi + 0x40] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [esi + 0x40], edx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [esi + 0x44], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { test edi, edi }
	__asm { je L_005e40cc }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_005e40cc }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_005e40cc }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005e40cc: }
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

extern "C" void fn_0041fe80();
extern "C" void fn_005eb9a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e4500
extern "C" __declspec(naked) void asm_005e4500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e7a8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0xe19ce0 }
	__asm { mov edi, dword ptr [esi + 0x44] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_005e455e }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_005e455d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_005e455d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005e455d: }
	__asm { pop ebx }
	__asm { L_005e455e: }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_005e4599 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x38] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { L_005e4599: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005eb9a0 }
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
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005e48e0
extern "C" __declspec(naked) void asm_005e48e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e7ba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { jne L_005e490d }
	__asm { xor esi, esi }
	__asm { jmp L_005e498b }
	__asm { L_005e490d: }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { test edx, edx }
	__asm { js L_005e494a }
	__asm { cmp edx, 5 }
	__asm { jle L_005e4937 }
	__asm { cmp edx, 6 }
	__asm { jne L_005e494a }
	__asm { mov eax, dword ptr [eax + 0x4c] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x48] }
	__asm { jmp L_005e4988 }
	__asm { L_005e4937: }
	__asm { mov eax, dword ptr [eax + 0x4c] }
	__asm { lea esi, [ebp - 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edx }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x48] }
	__asm { jmp L_005e4988 }
	__asm { L_005e494a: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_005e4988 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e4977 }
	__asm { push 0x34 }
	__asm { push 0xe19d10 }
	__asm { push 0xe19d60 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e4988 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005e4977: }
	__asm { movzx eax, al }
	__asm { push 0xe19d88 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e4988: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { L_005e498b: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_005e49d3 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_005e49c0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_005e49c0 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_005e49c0: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005e49d3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403160();
extern "C" void fn_005e2bf0();
// FUNCTION: ROBLOXSTUDIO 0x005e49f0
extern "C" __declspec(naked) void asm_005e49f0()
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
	__asm { call fn_005e2bf0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_005e4a67 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_005e4a66 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_005e4a66 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005e4a66: }
	__asm { pop ebx }
	__asm { L_005e4a67: }
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

extern "C" void fn_005e49f0();
// FUNCTION: ROBLOXSTUDIO 0x005e4a90
extern "C" __declspec(naked) void asm_005e4a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_005e49f0 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [edi], esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { test esi, esi }
	__asm { je L_005e4ae6 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_005e4ae6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_005e4ae6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005e4ae6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005ebab0();
extern "C" void fn_006b9740();
extern "C" void fn_006b98f0();
extern "C" void fn_00c7fbf0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e4bf0
extern "C" __declspec(naked) void asm_005e4bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0e7e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { call fn_005ebab0 }
	__asm { lea eax, [ebx + 0x34] }
	__asm { mov dword ptr [ebx], 0xe1a9c0 }
	__asm { xor edi, edi }
	__asm { xor esi, esi }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebp - 0x38], edi }
	__asm { mov dword ptr [ebp - 0x34], esi }
	__asm { mov dword ptr [ebp - 0x30], ebx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { sub ecx, eax }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { add eax, edx }
	__asm { je L_005e4da5 }
	__asm { xor ecx, ecx }
	__asm { mov byte ptr [ebp - 0x1f], bl }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { L_005e4c76: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { movzx eax, word ptr [ecx + edx] }
	__asm { mov word ptr [ebp - 0x24], ax }
	__asm { movzx eax, word ptr [ecx + edx + 4] }
	__asm { mov word ptr [ebp - 0x22], ax }
	__asm { mov eax, dword ptr [ecx + edx + 8] }
	__asm { mov cl, byte ptr [eax*4 + 0xe1a95c] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 0x20], cl }
	__asm { mov eax, dword ptr [eax + edx + 0xc] }
	__asm { mov dl, byte ptr [eax*4 + 0xe1a97c] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov edi, dword ptr [ebp - 0x38] }
	__asm { mov al, byte ptr [ebx + eax + 0x10] }
	__asm { mov ebx, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 0x1d], al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 0x1e], dl }
	__asm { cmp byte ptr [eax + 0x1e], 0 }
	__asm { je L_005e4d12 }
	__asm { cmp cl, 5 }
	__asm { jne L_005e4d12 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_005e4d0e }
	__asm { cmp dl, cl }
	__asm { je L_005e4d0e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e4cf9 }
	__asm { push 0x6b }
	__asm { push 0xe1aa58 }
	__asm { push 0xe1aaa4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e4d0e }
	__asm { L_005e4cf9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1aac8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e4d0e: }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { L_005e4d12: }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmp eax, esi }
	__asm { jae L_005e4d48 }
	__asm { cmp edi, eax }
	__asm { ja L_005e4d48 }
	__asm { mov ebx, eax }
	__asm { sub ebx, edi }
	__asm { sar ebx, 3 }
	__asm { cmp esi, dword ptr [ebp - 0x30] }
	__asm { jne L_005e4d39 }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_00c7fbf0 }
	__asm { mov esi, dword ptr [ebp - 0x34] }
	__asm { mov edi, dword ptr [ebp - 0x38] }
	__asm { L_005e4d39: }
	__asm { test esi, esi }
	__asm { je L_005e4d6b }
	__asm { mov eax, dword ptr [edi + ebx*8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + ebx*8 + 4] }
	__asm { jmp L_005e4d68 }
	__asm { L_005e4d48: }
	__asm { cmp esi, ebx }
	__asm { jne L_005e4d5c }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_00c7fbf0 }
	__asm { mov esi, dword ptr [ebp - 0x34] }
	__asm { mov edi, dword ptr [ebp - 0x38] }
	__asm { L_005e4d5c: }
	__asm { test esi, esi }
	__asm { je L_005e4d6b }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { L_005e4d68: }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_005e4d6b: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add dword ptr [ebp - 0x10], 0x14 }
	__asm { sub ecx, eax }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { inc ebx }
	__asm { add esi, 8 }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x34], esi }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp ebx, eax }
	__asm { jb L_005e4c76 }
	__asm { mov ebx, dword ptr [ebp - 0x30] }
	__asm { L_005e4da5: }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x2c], 0xff }
	__asm { mov dword ptr [ebp - 0x28], 0x11 }
	__asm { cmp eax, esi }
	__asm { jae L_005e4dee }
	__asm { cmp edi, eax }
	__asm { ja L_005e4dee }
	__asm { mov ecx, eax }
	__asm { sub ecx, edi }
	__asm { sar ecx, 3 }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { cmp esi, ebx }
	__asm { jne L_005e4ddf }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_00c7fbf0 }
	__asm { mov esi, dword ptr [ebp - 0x34] }
	__asm { mov edi, dword ptr [ebp - 0x38] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_005e4ddf: }
	__asm { test esi, esi }
	__asm { je L_005e4e11 }
	__asm { mov eax, dword ptr [edi + ecx*8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + ecx*8 + 4] }
	__asm { jmp L_005e4e0e }
	__asm { L_005e4dee: }
	__asm { cmp esi, ebx }
	__asm { jne L_005e4e02 }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_00c7fbf0 }
	__asm { mov esi, dword ptr [ebp - 0x34] }
	__asm { mov edi, dword ptr [ebp - 0x38] }
	__asm { L_005e4e02: }
	__asm { test esi, esi }
	__asm { je L_005e4e11 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { L_005e4e0e: }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_005e4e11: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esi, 8 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x34], esi }
	__asm { call dword ptr [ecx + 0x158] }
	__asm { test eax, eax }
	__asm { jns L_005e4e4e }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push 0xe1ab48 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_005e4e4e: }
	__asm { test edi, edi }
	__asm { je L_005e4e5b }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e4e5b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e31c18[];
extern "C" char g_00e31c1c[];
extern "C" char g_00e31c20[];
extern "C" char g_00e31c24[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005e5e30
extern "C" __declspec(naked) void asm_005e5e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x44 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { test ebx, ebx }
	__asm { je L_005e5efe }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 0x2c] }
	__asm { mov edi, dword ptr [eax + 0x14] }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { test edx, edx }
	__asm { js L_005e5e9d }
	__asm { mov eax, dword ptr [g_00e31c18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, 0xc }
	__asm { lea edi, [ebp - 0x44] }
	__asm { rep movsd }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [g_00e31c1c] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_00e31c20] }
	__asm { push 4 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [g_00e31c24] }
	__asm { lea ecx, [ebp - 0x44] }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push edx }
	__asm { push edi }
	__asm { call dword ptr [eax + 0x178] }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { L_005e5e9d: }
	__asm { cmp dword ptr [esi + 0x30], 0 }
	__asm { jl L_005e5efc }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_005e5ee9 }
	__asm { cmp ebx, dword ptr [esi + 0x34] }
	__asm { jbe L_005e5ee9 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e5ed8 }
	__asm { push 0x150 }
	__asm { push 0xe1aef8 }
	__asm { push 0xe1b1ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e5ee9 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005e5ed8: }
	__asm { movzx eax, al }
	__asm { push 0xe1b1d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e5ee9: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { lea eax, [ebx + ebx*2] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [esi + 0x30] }
	__asm { push edi }
	__asm { call dword ptr [ecx + 0x178] }
	__asm { L_005e5efc: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_005e5efe: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005e5f10
extern "C" __declspec(naked) void asm_005e5f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test esi, esi }
	__asm { js L_005e60d7 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 0x14] }
	__asm { push edi }
	__asm { movzx edi, si }
	__asm { sar esi, 0x10 }
	__asm { dec esi }
	__asm { dec edi }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { js L_005e600a }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ebx, dword ptr [ecx + 0x28] }
	__asm { je L_005e5f99 }
	__asm { mov ecx, dword ptr [ebx + 0x3c] }
	__asm { sub ecx, dword ptr [ebx + 0x38] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp edi, eax }
	__asm { jb L_005e5f99 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e5f84 }
	__asm { push 0x164 }
	__asm { push 0xe1aef8 }
	__asm { push 0xe1b260 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e5f99 }
	__asm { L_005e5f84: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1b290 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e5f99: }
	__asm { mov eax, dword ptr [ebx + 0x38] }
	__asm { lea ecx, [edi + edi*8] }
	__asm { lea edi, [eax + ecx*4] }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_005e6004 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_005e5fed }
	__asm { cmp dword ptr [ebp + 0x10], eax }
	__asm { jae L_005e5fed }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e5fd8 }
	__asm { push 0x169 }
	__asm { push 0xe1aef8 }
	__asm { push 0xe1b31c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e5fed }
	__asm { L_005e5fd8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1b340 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e5fed: }
	__asm { push dword ptr [edi + 0x20] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push dword ptr [edi + 0x1c] }
	__asm { push ebx }
	__asm { call dword ptr [eax + 0x178] }
	__asm { jmp L_005e6007 }
	__asm { L_005e6004: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { L_005e6007: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { L_005e600a: }
	__asm { test esi, esi }
	__asm { js L_005e60d5 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, dword ptr [ecx + 0x30] }
	__asm { je L_005e606f }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { sub ecx, dword ptr [edi + 0x30] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp esi, eax }
	__asm { jb L_005e606f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e605a }
	__asm { push 0x173 }
	__asm { push 0xe1aef8 }
	__asm { push 0xe1b3bc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e606f }
	__asm { L_005e605a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1b3f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e606f: }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { lea ecx, [esi + esi*8] }
	__asm { lea esi, [eax + ecx*4] }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_005e60d5 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_005e60c3 }
	__asm { cmp dword ptr [ebp + 0x10], eax }
	__asm { jae L_005e60c3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e60ae }
	__asm { push 0x178 }
	__asm { push 0xe1aef8 }
	__asm { push 0xe1b31c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e60c3 }
	__asm { L_005e60ae: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1b480 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e60c3: }
	__asm { push dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { push ebx }
	__asm { call dword ptr [eax + 0x1b4] }
	__asm { L_005e60d5: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_005e60d7: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00412c00();
extern "C" void fn_0042d740();
extern "C" void fn_0043ee70();
extern "C" void fn_005e9220();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e6930
extern "C" __declspec(naked) void asm_005e6930()
{
	__asm { L_005e6930: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0ea06 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x88 }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [ebp + 0x14], edi }
	__asm { jbe L_005e6b3a }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x1c] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_005e6962: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call dword ptr [eax + 0x20] }
	__asm { lea edx, [ebp - 0x34] }
	__asm { push edx }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0x94] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push edx }
	__asm { push esi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x34], 1 }
	__asm { call dword ptr [ecx + 0x18] }
	__asm { mov eax, dword ptr [ebp - 0x94] }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [eax], 0x24 }
	__asm { sete cl }
	__asm { add ecx, eax }
	__asm { cmp dword ptr [ebp - 0x84], 5 }
	__asm { jne L_005e6a27 }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call fn_0042d740 }
	__asm { push 0x100d138 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0043ee70 }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp - 0x70] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call L_005e6930 }
	__asm { add esp, 0x30 }
	__asm { cmp dword ptr [ebp - 0x50], 0x10 }
	__asm { jb L_005e69f4 }
	__asm { push dword ptr [ebp - 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e69f4: }
	__asm { cmp dword ptr [ebp - 0x38], 0x10 }
	__asm { mov dword ptr [ebp - 0x50], 0xf }
	__asm { mov dword ptr [ebp - 0x54], 0 }
	__asm { mov byte ptr [ebp - 0x64], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_005e6b2e }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { jmp L_005e6b2e }
	__asm { L_005e6a27: }
	__asm { cmp dword ptr [ebp - 0x90], 3 }
	__asm { jne L_005e6a44 }
	__asm { mov ecx, dword ptr [ebp - 0x8c] }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { or dword ptr [ebx], eax }
	__asm { jmp L_005e6b2b }
	__asm { L_005e6a44: }
	__asm { cmp dword ptr [ebp - 0x88], 0 }
	__asm { jbe L_005e6b2b }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_0042d740 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { add esp, 0xc }
	__asm { cmp eax, esi }
	__asm { je L_005e6aaf }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_005e6a94 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e6a94: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { call fn_00412c00 }
	__asm { L_005e6aaf: }
	__asm { cmp dword ptr [ebp - 0x38], 0x10 }
	__asm { jb L_005e6ac0 }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e6ac0: }
	__asm { mov ecx, dword ptr [ebp - 0x90] }
	__asm { test ecx, ecx }
	__asm { jne L_005e6ad3 }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { jmp L_005e6ae3 }
	__asm { L_005e6ad3: }
	__asm { xor eax, eax }
	__asm { cmp ecx, 1 }
	__asm { mov ecx, 2 }
	__asm { cmove eax, ecx }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { L_005e6ae3: }
	__asm { mov eax, dword ptr [ebp - 0x8c] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 0x88] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_005e9220 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_005e6b19 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e6b19: }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { L_005e6b2b: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_005e6b2e: }
	__asm { inc edi }
	__asm { cmp edi, dword ptr [ebp + 0x14] }
	__asm { jb L_005e6962 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_005e6b3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005e6c20();
extern "C" void fn_005e6d00();
extern "C" void fn_005e6eb0();
extern "C" void fn_005e6f10();
extern "C" void fn_005e8500();
extern "C" void fn_005e8b70();
extern "C" void fn_006b9740();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e70e0
extern "C" __declspec(naked) void asm_005e70e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0ea66 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { test al, al }
	__asm { je L_005e714e }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { sub ecx, dword ptr [esi] }
	__asm { je L_005e7116 }
	__asm { test cl, 3 }
	__asm { je L_005e714e }
	__asm { L_005e7116: }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e713d }
	__asm { push 0xab }
	__asm { push 0xe1aef8 }
	__asm { push 0xe1af44 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e714e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005e713d: }
	__asm { movzx eax, al }
	__asm { push 0xe1af80 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e714e: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_005e6c20 }
	__asm { add esp, 0xc }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_005e8500 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_005e7199 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_005e8b70 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e7199: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebx + 0x64] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x60] }
	__asm { push edi }
	__asm { call fn_005e6d00 }
	__asm { push 0xe1b018 }
	__asm { push edi }
	__asm { call fn_005e6f10 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { js L_005e71e6 }
	__asm { lea ecx, [eax + eax*8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea edx, [eax + ecx*4] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [eax], 1 }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { mov dword ptr [edx + 0x10], 0 }
	__asm { jb L_005e71e3 }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_005e71e3: }
	__asm { mov byte ptr [edx], 0 }
	__asm { L_005e71e6: }
	__asm { push 0xe1b024 }
	__asm { push edi }
	__asm { call fn_005e6f10 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { js L_005e7282 }
	__asm { lea ecx, [eax + eax*8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea esi, [eax + ecx*4] }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_005e7259 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { xor edx, edx }
	__asm { mov dword ptr [ebp + 8], 3 }
	__asm { div dword ptr [ebp + 8] }
	__asm { test edx, edx }
	__asm { je L_005e7259 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e7248 }
	__asm { push 0xc4 }
	__asm { push 0xe1aef8 }
	__asm { push 0xe1b038 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e7259 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_005e7248: }
	__asm { movzx eax, cl }
	__asm { push 0xe1b058 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e7259: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, 0xaaaaaaab }
	__asm { mul dword ptr [esi + 0x20] }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { shr edx, 1 }
	__asm { mov dword ptr [eax], edx }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { jb L_005e727f }
	__asm { mov esi, dword ptr [esi] }
	__asm { L_005e727f: }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_005e7282: }
	__asm { push edi }
	__asm { call fn_005e6eb0 }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { add esp, 4 }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 0x16c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { jns L_005e72cc }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push 0xe1b0cc }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_005e72cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005e6c20();
extern "C" void fn_005e6d00();
extern "C" void fn_005e6eb0();
extern "C" void fn_005e8500();
extern "C" void fn_005e8b70();
extern "C" void fn_006b9740();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e72e0
extern "C" __declspec(naked) void asm_005e72e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0ea78 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { test al, al }
	__asm { je L_005e734e }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { sub ecx, dword ptr [esi] }
	__asm { je L_005e7316 }
	__asm { test cl, 3 }
	__asm { je L_005e734e }
	__asm { L_005e7316: }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e733d }
	__asm { push 0xdb }
	__asm { push 0xe1aef8 }
	__asm { push 0xe1af44 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e734e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005e733d: }
	__asm { movzx eax, al }
	__asm { push 0xe1b0f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e734e: }
	__asm { mov ebx, dword ptr [esi] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_005e6c20 }
	__asm { add esp, 0xc }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_005e8500 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_005e7396 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_005e8b70 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e7396: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [esi + 0x64] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x60] }
	__asm { push edi }
	__asm { call fn_005e6d00 }
	__asm { push edi }
	__asm { call fn_005e6eb0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { add esp, 0x10 }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { push ecx }
	__asm { call dword ptr [eax + 0x1a8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { jns L_005e73ee }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xe1b188 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_005e73ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" char g_012d97c4[];
extern "C" char g_012de657[];
extern "C" void fn_004038a0();
extern "C" void fn_004039a0();
extern "C" void fn_005e7950();
extern "C" void fn_0060f7a0();
extern "C" void fn_006b8a90();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e74f0
extern "C" __declspec(naked) void asm_005e74f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0eab3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x40 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { js L_005e7658 }
	__asm { test edi, edi }
	__asm { je L_005e75e9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push edi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax + 8] }
	__asm { mov al, byte ptr [g_012d97c4] }
	__asm { test al, al }
	__asm { je L_005e7585 }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xe1b770 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_005e7585: }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { cmovae eax, dword ptr [ebp - 0x34] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { call fn_004039a0 }
	__asm { movzx eax, byte ptr [g_012d97c4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0060f7a0 }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [ebp - 0x38], 0x10 }
	__asm { jb L_005e75c2 }
	__asm { push dword ptr [ebp - 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e75c2: }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_005e75d7 }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e75d7: }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { L_005e75e9: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { je L_005e75fb }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push ebx }
	__asm { call dword ptr [eax + 0x10] }
	__asm { L_005e75fb: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push ebx }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push ebx }
	__asm { mov esi, eax }
	__asm { call dword ptr [ecx + 0xc] }
	__asm { add esi, eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push ebx }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { call fn_005e7950 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005e7658: }
	__asm { test edi, edi }
	__asm { je L_005e76c3 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push edi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [ecx + 0xc] }
	__asm { push esi }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 0x38], 0xf }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov byte ptr [ebp - 0x4c], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call dword ptr [eax + 8] }
	__asm { cmp dword ptr [ebp - 0x38], 0x10 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { cmovae eax, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_005e76c3: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0xe1b79c }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e1026c[];
extern "C" char g_00e103c0[];
extern "C" char g_00e103c4[];
extern "C" char g_00e103c8[];
extern "C" char g_00e103cc[];
extern "C" void fn_0042e3d0();
extern "C" void fn_005e8290();
// FUNCTION: ROBLOXSTUDIO 0x005e7760
extern "C" __declspec(naked) void asm_005e7760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ead8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor edi, edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor bl, bl }
	__asm { mov ecx, dword ptr [eax + esi + 0x38] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { mov byte ptr [ebp - 0x11], bl }
	__asm { mov dword ptr [ebp - 0x28], esi }
	__asm { test ecx, ecx }
	__asm { je L_005e77a3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { L_005e77a3: }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e103cc] }
	__asm { mov byte ptr [ebp - 0x24], al }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_005e78b9 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, esi }
	__asm { call dword ptr [g_00e103c0] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_005e8290 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_005e7803 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { je L_005e7803 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_005e7803: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { jb L_005e7815 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_005e7815: }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx + esi + 0x24] }
	__asm { mov ebx, dword ptr [ecx + esi + 0x20] }
	__asm { test eax, eax }
	__asm { jl L_005e7840 }
	__asm { jg L_005e7833 }
	__asm { test ebx, ebx }
	__asm { je L_005e7840 }
	__asm { L_005e7833: }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { cmp ebx, -2 }
	__asm { jae L_005e7840 }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { jmp L_005e7845 }
	__asm { L_005e7840: }
	__asm { mov ebx, 0xfffffffe }
	__asm { L_005e7845: }
	__asm { mov ecx, dword ptr [ecx + esi + 0x38] }
	__asm { call dword ptr [g_00e103c4] }
	__asm { L_005e784f: }
	__asm { mov edx, eax }
	__asm { test ebx, ebx }
	__asm { je L_005e78af }
	__asm { cmp edx, -1 }
	__asm { jne L_005e785f }
	__asm { or edi, 1 }
	__asm { jmp L_005e78af }
	__asm { L_005e785f: }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { movzx ecx, dl }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { test byte ptr [eax + ecx*2], 0x48 }
	__asm { jne L_005e78af }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { push 1 }
	__asm { call fn_0042e3d0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 0x11], 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec ebx }
	__asm { mov ecx, dword ptr [eax + esi + 0x38] }
	__asm { call dword ptr [g_00e103c8] }
	__asm { jmp L_005e784f }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { mov eax, dword ptr [edx] }
	__asm { push 4 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, edx }
	__asm { call dword ptr [g_00e1026c] }
	__asm { mov eax, 0x5e78a9 }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { L_005e78af: }
	__asm { mov bl, byte ptr [ebp - 0x11] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { L_005e78b9: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0 }
	__asm { mov dword ptr [eax + esi + 0x24], 0 }
	__asm { test bl, bl }
	__asm { jne L_005e78d5 }
	__asm { or edi, 2 }
	__asm { L_005e78d5: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push edi }
	__asm { add ecx, esi }
	__asm { call dword ptr [g_00e1026c] }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ecx + eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_005e7901 }
	__asm { mov edx, dword ptr [ecx] }
	__asm { call dword ptr [edx + 8] }
	__asm { L_005e7901: }
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

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" char g_00e10500[];
extern "C" void fn_005e8100();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005e79b0
extern "C" __declspec(naked) void asm_005e79b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { sub edi, edx }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { mov dword ptr [ebp + 0x10], edi }
	__asm { je L_005e7ad1 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 8] }
	__asm { mov eax, ebx }
	__asm { sub eax, ecx }
	__asm { cmp eax, edi }
	__asm { jae L_005e7aa1 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { dec eax }
	__asm { cmp eax, edi }
	__asm { jae L_005e79f7 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_005e79f7: }
	__asm { sub ecx, edx }
	__asm { sub ebx, edx }
	__asm { mov edx, ebx }
	__asm { shr edx, 1 }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, edx }
	__asm { add ecx, edi }
	__asm { cmp eax, ebx }
	__asm { jae L_005e7a0e }
	__asm { xor ebx, ebx }
	__asm { jmp L_005e7a10 }
	__asm { L_005e7a0e: }
	__asm { add ebx, edx }
	__asm { L_005e7a10: }
	__asm { cmp ebx, ecx }
	__asm { cmovb ebx, ecx }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test ebx, ebx }
	__asm { je L_005e7a3b }
	__asm { cmp ebx, -1 }
	__asm { ja L_005e7a35 }
	__asm { push ebx }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test ecx, ecx }
	__asm { jne L_005e7a3b }
	__asm { L_005e7a35: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_005e7a3b: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [g_00e10500] }
	__asm { sub esi, eax }
	__asm { push esi }
	__asm { push eax }
	__asm { push ecx }
	__asm { call edi }
	__asm { add eax, esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call edi }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add eax, esi }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { sub edx, ecx }
	__asm { push edx }
	__asm { push ecx }
	__asm { push eax }
	__asm { call edi }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { sub eax, ecx }
	__asm { add esp, 0x24 }
	__asm { add edi, eax }
	__asm { test ecx, ecx }
	__asm { je L_005e7a87 }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e7a87: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [esi], ecx }
	__asm { lea eax, [ecx + ebx] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop ebx }
	__asm { lea eax, [ecx + edi] }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005e7aa1: }
	__asm { push edi }
	__asm { push edx }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { lea edx, [ecx + edi] }
	__asm { cmp eax, ecx }
	__asm { je L_005e7acd }
	__asm { cmp ecx, edx }
	__asm { je L_005e7acd }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edx }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_005e8100 }
	__asm { add esp, 0x14 }
	__asm { L_005e7acd: }
	__asm { add dword ptr [esi + 4], edi }
	__asm { pop ebx }
	__asm { L_005e7ad1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00409af0();
extern "C" void fn_0040d6f0();
extern "C" void fn_005e7ae0();
extern "C" void fn_005e7f20();
extern "C" void fn_0068a1e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e7d10
extern "C" __declspec(naked) void asm_005e7d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0eb00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 4], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_005e7d6b }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebx] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_005e7ae0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005e7d6b: }
	__asm { mov edi, dword ptr [ebx] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp esi, dword ptr [edi] }
	__asm { jne L_005e7da9 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jae L_005e7eeb }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_005e7ae0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005e7da9: }
	__asm { cmp esi, edi }
	__asm { jne L_005e7de5 }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jae L_005e7eeb }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { push edx }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_005e7ae0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005e7de5: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { cmp ecx, eax }
	__asm { jbe L_005e7e64 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_0040d6f0 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [eax + 0x10], ecx }
	__asm { jae L_005e7e5d }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, ebx }
	__asm { je L_005e7e3c }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_005e7ae0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005e7e3c: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_005e7ae0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005e7e5d: }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { cmp ecx, eax }
	__asm { L_005e7e64: }
	__asm { jae L_005e7eeb }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00409af0 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { cmp eax, edi }
	__asm { je L_005e7e84 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { cmp ecx, dword ptr [eax + 0x10] }
	__asm { jae L_005e7eeb }
	__asm { L_005e7e84: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, ebx }
	__asm { je L_005e7eb6 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_005e7ae0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005e7eb6: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_005e7ae0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { call fn_0068a1e0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_005e7eeb: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005e7f20 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0040d6f0();
extern "C" void fn_005e7ae0();
extern "C" void fn_0068a1e0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005e7f20
extern "C" __declspec(naked) void asm_005e7f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0eb10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, edx }
	__asm { mov dl, 1 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x14], dl }
	__asm { jne L_005e7f90 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov dh, byte ptr [ebp + 0xc] }
	__asm { L_005e7f65: }
	__asm { mov edi, eax }
	__asm { test dh, dh }
	__asm { je L_005e7f73 }
	__asm { cmp dword ptr [eax + 0x10], ecx }
	__asm { setae dl }
	__asm { jmp L_005e7f79 }
	__asm { L_005e7f73: }
	__asm { cmp ecx, dword ptr [eax + 0x10] }
	__asm { setb dl }
	__asm { L_005e7f79: }
	__asm { mov byte ptr [ebp - 0x14], dl }
	__asm { test dl, dl }
	__asm { je L_005e7f84 }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_005e7f87 }
	__asm { L_005e7f84: }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { L_005e7f87: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_005e7f65 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { L_005e7f90: }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { test dl, dl }
	__asm { je L_005e7fd8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp edi, dword ptr [eax] }
	__asm { jne L_005e7fcd }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push 1 }
	__asm { L_005e7fa6: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_005e7ae0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005e7fcd: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_0040d6f0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { L_005e7fd8: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, dword ptr [ebx] }
	__asm { jae L_005e8000 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { jmp L_005e7fa6 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_0068a1e0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_005e8000: }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [edi + 0x28], 0x10 }
	__asm { jb L_005e8014 }
	__asm { push dword ptr [edi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e8014: }
	__asm { mov dword ptr [edi + 0x28], 0xf }
	__asm { mov dword ptr [edi + 0x24], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi + 0x14], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10264[];
extern "C" void fn_004096e0();
extern "C" void fn_00409740();
extern "C" void fn_00409af0();
extern "C" void fn_00409b40();
extern "C" void fn_00409b60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e8e70
extern "C" __declspec(naked) void asm_005e8e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { cmp byte ptr [ebx + 0xd], 0 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { je L_005e8e8f }
	__asm { push 0xf142cc }
	__asm { call dword ptr [g_00e10264] }
	__asm { L_005e8e8f: }
	__asm { push edi }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00409af0 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { je L_005e8ea5 }
	__asm { mov edi, dword ptr [ebx + 8] }
	__asm { jmp L_005e8ebf }
	__asm { L_005e8ea5: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_005e8eb2 }
	__asm { mov edi, edx }
	__asm { jmp L_005e8ebf }
	__asm { L_005e8eb2: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov edi, dword ptr [ecx + 8] }
	__asm { cmp ecx, ebx }
	__asm { jne L_005e8f3d }
	__asm { L_005e8ebf: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { jne L_005e8ecb }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { L_005e8ecb: }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp dword ptr [eax + 4], ebx }
	__asm { jne L_005e8eda }
	__asm { mov dword ptr [eax + 4], edi }
	__asm { jmp L_005e8ee5 }
	__asm { L_005e8eda: }
	__asm { cmp dword ptr [esi], ebx }
	__asm { jne L_005e8ee2 }
	__asm { mov dword ptr [esi], edi }
	__asm { jmp L_005e8ee5 }
	__asm { L_005e8ee2: }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { L_005e8ee5: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { cmp dword ptr [eax], ebx }
	__asm { jne L_005e8f0b }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { je L_005e8ef8 }
	__asm { mov ecx, esi }
	__asm { jmp L_005e8f09 }
	__asm { L_005e8ef8: }
	__asm { push edi }
	__asm { call fn_00409b60 }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { add esp, 4 }
	__asm { L_005e8f09: }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_005e8f0b: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { cmp dword ptr [eax + 8], ebx }
	__asm { jne L_005e8f9c }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { je L_005e8f29 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov eax, esi }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { jmp L_005e8f9c }
	__asm { L_005e8f29: }
	__asm { push edi }
	__asm { call fn_00409b40 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { jmp L_005e8f9c }
	__asm { L_005e8f3d: }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { cmp ecx, dword ptr [ebx + 8] }
	__asm { jne L_005e8f4d }
	__asm { mov esi, ecx }
	__asm { jmp L_005e8f67 }
	__asm { L_005e8f4d: }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { jne L_005e8f59 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { L_005e8f59: }
	__asm { mov dword ptr [esi], edi }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { L_005e8f67: }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp dword ptr [eax + 4], ebx }
	__asm { jne L_005e8f76 }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { jmp L_005e8f84 }
	__asm { L_005e8f76: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { cmp dword ptr [eax], ebx }
	__asm { jne L_005e8f81 }
	__asm { mov dword ptr [eax], ecx }
	__asm { jmp L_005e8f84 }
	__asm { L_005e8f81: }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { L_005e8f84: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov al, byte ptr [ebx + 0xc] }
	__asm { mov cl, byte ptr [ecx + 0xc] }
	__asm { mov byte ptr [edx + 0xc], al }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov byte ptr [ebx + 0xc], cl }
	__asm { L_005e8f9c: }
	__asm { cmp byte ptr [ebx + 0xc], 1 }
	__asm { jne L_005e90cb }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp edi, dword ptr [eax + 4] }
	__asm { je L_005e9084 }
	__asm { L_005e8fb1: }
	__asm { cmp byte ptr [edi + 0xc], 1 }
	__asm { jne L_005e9084 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp edi, ecx }
	__asm { jne L_005e903e }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { jne L_005e8fe0 }
	__asm { mov byte ptr [ecx + 0xc], 1 }
	__asm { push esi }
	__asm { mov ecx, edx }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { call fn_004096e0 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { L_005e8fe0: }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_005e9074 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xc], 1 }
	__asm { jne L_005e8ffb }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xc], 1 }
	__asm { je L_005e9070 }
	__asm { L_005e8ffb: }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xc], 1 }
	__asm { jne L_005e9019 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { mov byte ptr [eax + 0xc], 1 }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { mov ecx, edx }
	__asm { call fn_00409740 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { L_005e9019: }
	__asm { mov al, byte ptr [esi + 0xc] }
	__asm { mov byte ptr [ecx + 0xc], al }
	__asm { mov byte ptr [esi + 0xc], 1 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [eax + 0xc], 1 }
	__asm { call fn_004096e0 }
	__asm { mov byte ptr [edi + 0xc], 1 }
	__asm { jmp L_005e90ce }
	__asm { L_005e903e: }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { jne L_005e9059 }
	__asm { mov byte ptr [ecx + 0xc], 1 }
	__asm { push esi }
	__asm { mov ecx, edx }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { call fn_00409740 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { L_005e9059: }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_005e9074 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xc], 1 }
	__asm { jne L_005e908d }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xc], 1 }
	__asm { jne L_005e908d }
	__asm { L_005e9070: }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { L_005e9074: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov edi, esi }
	__asm { mov esi, dword ptr [esi + 4] }
	__asm { cmp edi, dword ptr [eax + 4] }
	__asm { jne L_005e8fb1 }
	__asm { L_005e9084: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov byte ptr [edi + 0xc], 1 }
	__asm { jmp L_005e90ce }
	__asm { L_005e908d: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xc], 1 }
	__asm { jne L_005e90aa }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { push ecx }
	__asm { mov byte ptr [eax + 0xc], 1 }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { mov ecx, edx }
	__asm { call fn_004096e0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { L_005e90aa: }
	__asm { mov al, byte ptr [esi + 0xc] }
	__asm { mov byte ptr [ecx + 0xc], al }
	__asm { mov byte ptr [esi + 0xc], 1 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [eax + 0xc], 1 }
	__asm { call fn_00409740 }
	__asm { mov byte ptr [edi + 0xc], 1 }
	__asm { jmp L_005e90ce }
	__asm { L_005e90cb: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { L_005e90ce: }
	__asm { cmp dword ptr [ebx + 0x28], 0x10 }
	__asm { pop edi }
	__asm { jb L_005e90e0 }
	__asm { push dword ptr [ebx + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_005e90e0: }
	__asm { mov dword ptr [ebx + 0x28], 0xf }
	__asm { mov dword ptr [ebx + 0x24], 0 }
	__asm { push ebx }
	__asm { mov byte ptr [ebx + 0x14], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_005e9106 }
	__asm { dec eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_005e9106: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005df3e0();
extern "C" void fn_005eb040();
extern "C" void fn_006106a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005e9400
extern "C" __declspec(naked) void asm_005e9400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ec16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe1b810 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 0x3c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_005df3e0 }
	__asm { mov ecx, dword ptr [edi + 0x4c] }
	__asm { test ecx, ecx }
	__asm { je L_005e9447 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005e9447: }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { test ecx, ecx }
	__asm { je L_005e9454 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005e9454: }
	__asm { mov eax, dword ptr [edi + 0x58] }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x58] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_005eb040 }
	__asm { push dword ptr [edi + 0x58] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [edi + 0x48] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_005e9493 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_005e9493 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005e9493: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006106a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005ea1f0();
extern "C" void fn_005ea450();
extern "C" void fn_005ea5a0();
extern "C" void fn_006106e0();
extern "C" void fn_00610820();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005e94b0
extern "C" __declspec(naked) void asm_005e94b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00610820 }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x34] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00610820 }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x38] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_00610820 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x18 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { je L_005e9677 }
	__asm { cmp ebx, dword ptr [edi + 0x3c] }
	__asm { jb L_005e9531 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e951c }
	__asm { push 0x11c }
	__asm { push 0xe1b838 }
	__asm { push 0xe1be7c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e9531 }
	__asm { L_005e951c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1be90 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e9531: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { je L_005e967a }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, dword ptr [esi + 0xc] }
	__asm { cmp eax, ebx }
	__asm { jbe L_005e9580 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e956b }
	__asm { push 0x11d }
	__asm { push 0xe1b838 }
	__asm { push 0xe1befc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e9580 }
	__asm { L_005e956b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1bf20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e9580: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_005e967a }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, dword ptr [ebp - 8] }
	__asm { jbe L_005e95ce }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e95b9 }
	__asm { push 0x11e }
	__asm { push 0xe1b838 }
	__asm { push 0xe1bfa0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e95ce }
	__asm { L_005e95b9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1bfc8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e95ce: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_005e967a }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, dword ptr [ebp - 0xc] }
	__asm { jbe L_005e961c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e9607 }
	__asm { push 0x11f }
	__asm { push 0xe1b838 }
	__asm { push 0xe1c04c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e961c }
	__asm { L_005e9607: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1c070 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e961c: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_005e967a }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { call fn_006106e0 }
	__asm { imul eax, dword ptr [esi + 0x14] }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp + 0x18], eax }
	__asm { je L_005e967a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e9660 }
	__asm { push 0x121 }
	__asm { push 0xe1b838 }
	__asm { push 0xe1c0f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e967a }
	__asm { L_005e9660: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1c140 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { jmp L_005e967a }
	__asm { L_005e9677: }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { L_005e967a: }
	__asm { cmp dword ptr [esi + 0xc], ebx }
	__asm { jne L_005e9693 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { cmp dword ptr [esi + 0x10], eax }
	__asm { jne L_005e9693 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { cmp dword ptr [esi + 0x14], eax }
	__asm { jne L_005e9693 }
	__asm { xor cl, cl }
	__asm { jmp L_005e9695 }
	__asm { L_005e9693: }
	__asm { mov cl, 1 }
	__asm { L_005e9695: }
	__asm { mov ebx, dword ptr [edi + 0x50] }
	__asm { test ebx, ebx }
	__asm { jne L_005e969f }
	__asm { mov ebx, dword ptr [edi + 0x4c] }
	__asm { L_005e969f: }
	__asm { push 0 }
	__asm { push dword ptr [edi + 0x28] }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { cmovne eax, esi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_005ea1f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [ebp + 0x18], ecx }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_006106e0 }
	__asm { add esp, 0x28 }
	__asm { cmp dword ptr [edi + 0x28], 1 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { jne L_005e96f9 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { call fn_006106e0 }
	__asm { add esp, 0xc }
	__asm { jmp L_005e96fb }
	__asm { L_005e96f9: }
	__asm { xor eax, eax }
	__asm { L_005e96fb: }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { push dword ptr [esi + 0x14] }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { push dword ptr [ebp - 8] }
	__asm { call fn_005ea5a0 }
	__asm { push dword ptr [edi + 0x28] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { call fn_005ea450 }
	__asm { mov edx, dword ptr [edi + 0x50] }
	__asm { add esp, 0x38 }
	__asm { test edx, edx }
	__asm { je L_005e9758 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp dword ptr [eax + 0x38], 1 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { jne L_005e9754 }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { push ecx }
	__asm { call dword ptr [eax + 0x7c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_005e9754: }
	__asm { mov byte ptr [edi + 0x54], 1 }
	__asm { L_005e9758: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005ea1f0();
extern "C" void fn_005ea450();
extern "C" void fn_005ea5a0();
extern "C" void fn_006106e0();
extern "C" void fn_00610820();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005e9770
extern "C" __declspec(naked) void asm_005e9770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { cmp dword ptr [eax*8 + 0xe1b7b0], 1 }
	__asm { je L_005e978f }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005e978f: }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00610820 }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x34] }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { call fn_00610820 }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x38] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_00610820 }
	__asm { add esp, 0x18 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { je L_005e985d }
	__asm { cmp edi, dword ptr [esi + 0x3c] }
	__asm { jb L_005e9806 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e97f1 }
	__asm { push 0x13c }
	__asm { push 0xe1b838 }
	__asm { push 0xe1be7c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e9806 }
	__asm { L_005e97f1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1c1e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e9806: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_005e985d }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_006106e0 }
	__asm { imul eax, dword ptr [ebp - 8] }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp + 0x14], eax }
	__asm { je L_005e985d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e9848 }
	__asm { push 0x13d }
	__asm { push 0xe1b838 }
	__asm { push 0xe1c254 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e985d }
	__asm { L_005e9848: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1c298 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e985d: }
	__asm { mov ebx, dword ptr [esi + 0x50] }
	__asm { test ebx, ebx }
	__asm { jne L_005e9867 }
	__asm { mov ebx, dword ptr [esi + 0x4c] }
	__asm { L_005e9867: }
	__asm { push 0x10 }
	__asm { push dword ptr [esi + 0x28] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_005ea1f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 1 }
	__asm { push dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebp + 0x14], ecx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_006106e0 }
	__asm { add esp, 0x28 }
	__asm { cmp dword ptr [esi + 0x28], 1 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { jne L_005e98b9 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_006106e0 }
	__asm { add esp, 0xc }
	__asm { jmp L_005e98bb }
	__asm { L_005e98b9: }
	__asm { xor eax, eax }
	__asm { L_005e98bb: }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [ebp - 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp - 0xc] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_005ea5a0 }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { call fn_005ea450 }
	__asm { add esp, 0x38 }
	__asm { mov al, 1 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005ea1f0();
extern "C" void fn_00610820();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005e9910
extern "C" __declspec(naked) void asm_005e9910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00610820 }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x34] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00610820 }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x38] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_00610820 }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { add esp, 0x18 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { je L_005e9a94 }
	__asm { cmp ebx, dword ptr [edi + 0x3c] }
	__asm { jb L_005e9991 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e997c }
	__asm { push 0x158 }
	__asm { push 0xe1b838 }
	__asm { push 0xe1be7c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e9991 }
	__asm { L_005e997c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1c330 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e9991: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_005e9a78 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { add eax, dword ptr [esi] }
	__asm { cmp eax, dword ptr [ebp - 4] }
	__asm { jbe L_005e99de }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e99c9 }
	__asm { push 0x159 }
	__asm { push 0xe1b838 }
	__asm { push 0xe1befc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e99de }
	__asm { L_005e99c9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1c3a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e99de: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_005e9a78 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { add eax, dword ptr [esi + 4] }
	__asm { cmp eax, dword ptr [ebp - 8] }
	__asm { jbe L_005e9a2c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e9a17 }
	__asm { push 0x15a }
	__asm { push 0xe1b838 }
	__asm { push 0xe1bfa0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e9a2c }
	__asm { L_005e9a17: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1c420 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e9a2c: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { je L_005e9a7b }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { add eax, dword ptr [esi + 8] }
	__asm { cmp eax, ecx }
	__asm { jbe L_005e9a7b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005e9a63 }
	__asm { push 0x15b }
	__asm { push 0xe1b838 }
	__asm { push 0xe1c04c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e9a78 }
	__asm { L_005e9a63: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe1c4a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e9a78: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { L_005e9a7b: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { cmp dword ptr [esi + 0xc], eax }
	__asm { jne L_005e9a98 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { cmp dword ptr [esi + 0x10], eax }
	__asm { jne L_005e9a98 }
	__asm { cmp dword ptr [esi + 0x14], ecx }
	__asm { jne L_005e9a98 }
	__asm { xor dl, dl }
	__asm { jmp L_005e9a9a }
	__asm { L_005e9a94: }
	__asm { mov ecx, eax }
	__asm { jmp L_005e9a7b }
	__asm { L_005e9a98: }
	__asm { mov dl, 1 }
	__asm { L_005e9a9a: }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { test ecx, ecx }
	__asm { jne L_005e9aa4 }
	__asm { mov ecx, dword ptr [edi + 0x4c] }
	__asm { L_005e9aa4: }
	__asm { push 0 }
	__asm { push dword ptr [edi + 0x28] }
	__asm { xor eax, eax }
	__asm { test dl, dl }
	__asm { cmovne eax, esi }
	__asm { push eax }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_005ea1f0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x1c }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00421e70();
extern "C" void fn_005e3a90();
extern "C" void fn_005e4a90();
extern "C" void fn_005eae50();
extern "C" void fn_006b9740();
extern "C" void fn_00a5d310();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x005e9b30
extern "C" __declspec(naked) void asm_005e9b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ec4c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_005e9ba0 }
	__asm { cmp esi, dword ptr [edi + 0x3c] }
	__asm { jb L_005e9ba0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e9b8f }
	__asm { push 0x173 }
	__asm { push 0xe1b838 }
	__asm { push 0xe1be7c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e9ba0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005e9b8f: }
	__asm { movzx eax, al }
	__asm { push 0xe1c528 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e9ba0: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x58] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { call fn_005eae50 }
	__asm { mov ebx, eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { call fn_00a5d310 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { jne L_005e9d6d }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { sub eax, 0 }
	__asm { je L_005e9c8d }
	__asm { sub eax, 2 }
	__asm { je L_005e9c94 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_005e9c30 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e9c1f }
	__asm { push 0x17f }
	__asm { push 0xe1b838 }
	__asm { push 0xe1c598 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e9c30 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005e9c1f: }
	__asm { movzx eax, al }
	__asm { push 0xe1c5e0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e9c30: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_005e9c78 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_005e9c78 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_005e9c78 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_005e9c78: }
	__asm { mov eax, ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_005e9c8d: }
	__asm { mov dword ptr [ebp + 0xc], 6 }
	__asm { L_005e9c94: }
	__asm { push 0x48 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_005e9cc5 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [edi + 0x44] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_00421e70 }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_005e3a90 }
	__asm { jmp L_005e9cc7 }
	__asm { L_005e9cc5: }
	__asm { xor eax, eax }
	__asm { L_005e9cc7: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_005e4a90 }
	__asm { mov edx, dword ptr [ebp - 0x1c] }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebx], edx }
	__asm { mov ebx, dword ptr [ebp - 0x18] }
	__asm { cmp ebx, dword ptr [edi + 4] }
	__asm { je L_005e9d0e }
	__asm { test ebx, ebx }
	__asm { je L_005e9cf4 }
	__asm { lea eax, [ebx + 8] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_005e9cf4: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_005e9d0b }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_005e9d0b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005e9d0b: }
	__asm { mov dword ptr [edi + 4], ebx }
	__asm { L_005e9d0e: }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { L_005e9d11: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov edi, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], ebx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_005e9d58 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_005e9d58 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_005e9d55 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_005e9d55: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_005e9d58: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, edx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_005e9d6d: }
	__asm { mov ebx, dword ptr [ebp - 0x18] }
	__asm { jmp L_005e9d11 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005ea6c0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005e9d80
extern "C" __declspec(naked) void asm_005e9d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { mov edx, dword ptr [ecx + 0x3c] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { cmp edx, 1 }
	__asm { jbe L_005e9f3e }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { push esi }
	__asm { cmp dword ptr [eax + 0x28], 2 }
	__asm { mov ecx, 1 }
	__asm { mov esi, 6 }
	__asm { cmove ecx, esi }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { test ecx, ecx }
	__asm { je L_005e9f3c }
	__asm { push edi }
	__asm { L_005e9dc2: }
	__asm { mov edi, 1 }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { cmp edx, edi }
	__asm { jbe L_005e9f32 }
	__asm { L_005e9dd2: }
	__asm { mov esi, dword ptr [eax + 0x4c] }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub eax, 0 }
	__asm { je L_005e9e8d }
	__asm { sub eax, 2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { je L_005e9e3b }
	__asm { test al, al }
	__asm { je L_005e9ee0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e9e25 }
	__asm { push 0x110 }
	__asm { push 0xe1b838 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e9ee0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005e9e25: }
	__asm { movzx eax, al }
	__asm { push 0xe1be18 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { jmp L_005e9ee0 }
	__asm { L_005e9e3b: }
	__asm { test al, al }
	__asm { je L_005e9e7c }
	__asm { cmp ebx, 6 }
	__asm { jb L_005e9e7c }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e9e6b }
	__asm { push 0x10b }
	__asm { push 0xe1b838 }
	__asm { push 0xe1b978 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e9e7c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005e9e6b: }
	__asm { movzx eax, al }
	__asm { push 0xe1bdb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e9e7c: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [edi - 1] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { call dword ptr [ecx + 0x48] }
	__asm { jmp L_005e9ee0 }
	__asm { L_005e9e8d: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_005e9ed2 }
	__asm { test ebx, ebx }
	__asm { je L_005e9ed2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005e9ec1 }
	__asm { push 0x106 }
	__asm { push 0xe1b838 }
	__asm { push 0xe1b904 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005e9ed2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005e9ec1: }
	__asm { movzx eax, al }
	__asm { push 0xe1bd48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005e9ed2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [edi - 1] }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [ecx + 0x48] }
	__asm { L_005e9ee0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { push dword ptr [ecx + 0x28] }
	__asm { push dword ptr [ebp - 8] }
	__asm { push ebx }
	__asm { push dword ptr [ecx + 0x4c] }
	__asm { call fn_005ea6c0 }
	__asm { add esp, 0x10 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push 2 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 0 }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x88] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push edi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { inc edi }
	__asm { mov edx, dword ptr [eax + 0x3c] }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { cmp edi, edx }
	__asm { jb L_005e9dd2 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { L_005e9f32: }
	__asm { inc ebx }
	__asm { cmp ebx, ecx }
	__asm { jb L_005e9dc2 }
	__asm { pop edi }
	__asm { L_005e9f3c: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_005e9f3e: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012d97c4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b8a90();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005ea1f0
extern "C" __declspec(naked) void asm_005ea1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x48 }
	__asm { xor eax, eax }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov edi, 0x8876086b }
	__asm { sub eax, 0 }
	__asm { je L_005ea38b }
	__asm { dec eax }
	__asm { je L_005ea2f9 }
	__asm { dec eax }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { je L_005ea26e }
	__asm { test al, al }
	__asm { je L_005ea423 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005ea258 }
	__asm { push 0xbd }
	__asm { push 0xe1b838 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005ea423 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005ea258: }
	__asm { movzx eax, al }
	__asm { push 0xe1ba58 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { jmp L_005ea423 }
	__asm { L_005ea26e: }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { test al, al }
	__asm { je L_005ea2b2 }
	__asm { cmp edi, 6 }
	__asm { jb L_005ea2b2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005ea2a1 }
	__asm { push 0xa5 }
	__asm { push 0xe1b838 }
	__asm { push 0xe1b978 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005ea2b2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005ea2a1: }
	__asm { movzx eax, al }
	__asm { push 0xe1b988 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005ea2b2: }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { test edx, edx }
	__asm { je L_005ea2d7 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea edx, [ebp - 0x20] }
	__asm { L_005ea2d7: }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x4c] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { jmp L_005ea413 }
	__asm { L_005ea2f9: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_005ea340 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { je L_005ea340 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005ea32f }
	__asm { push 0xb3 }
	__asm { push 0xe1b838 }
	__asm { push 0xe1b904 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005ea340 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005ea32f: }
	__asm { movzx eax, al }
	__asm { push 0xe1b9f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005ea340: }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { test edx, edx }
	__asm { je L_005ea373 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebp - 0x48], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [ebp - 0x44], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x38], ecx }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { lea edx, [ebp - 0x48] }
	__asm { L_005ea373: }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x4c] }
	__asm { mov edi, eax }
	__asm { jmp L_005ea41f }
	__asm { L_005ea38b: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_005ea3d2 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { je L_005ea3d2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005ea3c1 }
	__asm { push 0x97 }
	__asm { push 0xe1b838 }
	__asm { push 0xe1b904 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005ea3d2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005ea3c1: }
	__asm { movzx eax, al }
	__asm { push 0xe1b910 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005ea3d2: }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { test edx, edx }
	__asm { je L_005ea3f7 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebp - 0x30], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea edx, [ebp - 0x30] }
	__asm { L_005ea3f7: }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x4c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov edi, eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { L_005ea413: }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { L_005ea41f: }
	__asm { test edi, edi }
	__asm { jns L_005ea445 }
	__asm { L_005ea423: }
	__asm { mov al, byte ptr [g_012d97c4] }
	__asm { test al, al }
	__asm { je L_005ea43e }
	__asm { push edi }
	__asm { movzx ecx, al }
	__asm { push 0xe1babc }
	__asm { push ecx }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_005ea43e: }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_005ea445: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005ea450
extern "C" __declspec(naked) void asm_005ea450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { sub eax, 0 }
	__asm { je L_005ea544 }
	__asm { dec eax }
	__asm { je L_005ea507 }
	__asm { dec eax }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { je L_005ea4b4 }
	__asm { test al, al }
	__asm { je L_005ea597 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005ea4a1 }
	__asm { push 0xdd }
	__asm { push 0xe1b838 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005ea597 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005ea4a1: }
	__asm { movzx eax, al }
	__asm { push 0xe1bc10 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005ea4b4: }
	__asm { test al, al }
	__asm { je L_005ea4f6 }
	__asm { cmp dword ptr [ebp + 0xc], 6 }
	__asm { jb L_005ea4f6 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005ea4e5 }
	__asm { push 0xd3 }
	__asm { push 0xe1b838 }
	__asm { push 0xe1b978 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005ea4f6 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005ea4e5: }
	__asm { movzx eax, al }
	__asm { push 0xe1bb40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005ea4f6: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x50] }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005ea507: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_005ea58b }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { je L_005ea58b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005ea53d }
	__asm { push 0xd8 }
	__asm { push 0xe1b838 }
	__asm { push 0xe1b904 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005ea58b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005ea53d: }
	__asm { push 0xe1bba8 }
	__asm { jmp L_005ea57f }
	__asm { L_005ea544: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_005ea58b }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { je L_005ea58b }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005ea57a }
	__asm { push 0xce }
	__asm { push 0xe1b838 }
	__asm { push 0xe1b904 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005ea58b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005ea57a: }
	__asm { push 0xe1bad8 }
	__asm { L_005ea57f: }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005ea58b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x50] }
	__asm { L_005ea597: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005ea6c0
extern "C" __declspec(naked) void asm_005ea6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub eax, 0 }
	__asm { je L_005ea78a }
	__asm { sub eax, 2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { je L_005ea72e }
	__asm { test al, al }
	__asm { je L_005ea728 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005ea710 }
	__asm { push 0x110 }
	__asm { push 0xe1b838 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005ea7e1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005ea710: }
	__asm { movzx eax, al }
	__asm { push 0xe1be18 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005ea728: }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005ea72e: }
	__asm { test al, al }
	__asm { je L_005ea770 }
	__asm { cmp dword ptr [ebp + 0xc], 6 }
	__asm { jb L_005ea770 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005ea75f }
	__asm { push 0x10b }
	__asm { push 0xe1b838 }
	__asm { push 0xe1b978 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005ea770 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005ea75f: }
	__asm { movzx eax, al }
	__asm { push 0xe1bdb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005ea770: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x48] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005ea78a: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_005ea7d1 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { je L_005ea7d1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005ea7c0 }
	__asm { push 0x106 }
	__asm { push 0xe1b838 }
	__asm { push 0xe1b904 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005ea7d1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005ea7c0: }
	__asm { movzx eax, al }
	__asm { push 0xe1bd48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005ea7d1: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x48] }
	__asm { L_005ea7e1: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10260[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005ea840
extern "C" __declspec(naked) void asm_005ea840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp eax, 0x7fffffe }
	__asm { jb L_005ea881 }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_005ea86d }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_005ea86d }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005ea86d: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0xf13d5c }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_005ea881: }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, ecx }
	__asm { jne L_005ea8a2 }
	__asm { mov dword ptr [ecx + 4], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax + 8], ebx }
	__asm { jmp L_005ea8c1 }
	__asm { L_005ea8a2: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_005ea8b4 }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_005ea8c1 }
	__asm { mov dword ptr [ecx], ebx }
	__asm { jmp L_005ea8c1 }
	__asm { L_005ea8b4: }
	__asm { mov dword ptr [eax + 8], ebx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_005ea8c1 }
	__asm { mov dword ptr [ecx + 8], ebx }
	__asm { L_005ea8c1: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, ebx }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { jne L_005eaa4a }
	__asm { L_005ea8d0: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, dword ptr [esi] }
	__asm { cmp ecx, edx }
	__asm { jne L_005ea98b }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { cmp byte ptr [edx + 0xc], 0 }
	__asm { je L_005ea991 }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_005ea92c }
	__asm { mov eax, ecx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_005ea907 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_005ea907: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_005ea919 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { jmp L_005ea927 }
	__asm { L_005ea919: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_005ea924 }
	__asm { mov dword ptr [ecx], edx }
	__asm { jmp L_005ea927 }
	__asm { L_005ea924: }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { L_005ea927: }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_005ea92c: }
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
	__asm { jne L_005ea956 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { L_005ea956: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { jne L_005ea96e }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_005eaa3a }
	__asm { L_005ea96e: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp edx, dword ptr [ecx + 8] }
	__asm { jne L_005ea981 }
	__asm { mov dword ptr [ecx + 8], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_005eaa3a }
	__asm { L_005ea981: }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_005eaa3a }
	__asm { L_005ea98b: }
	__asm { cmp byte ptr [edx + 0xc], 0 }
	__asm { jne L_005ea9ae }
	__asm { L_005ea991: }
	__asm { mov byte ptr [ecx + 0xc], 1 }
	__asm { mov byte ptr [edx + 0xc], 1 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { jmp L_005eaa3d }
	__asm { L_005ea9ae: }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_005ea9ee }
	__asm { mov eax, ecx }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_005ea9c7 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_005ea9c7: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_005ea9d9 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { jmp L_005ea9e8 }
	__asm { L_005ea9d9: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_005ea9e6 }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { jmp L_005ea9e8 }
	__asm { L_005ea9e6: }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_005ea9e8: }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_005ea9ee: }
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
	__asm { jne L_005eaa18 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { L_005eaa18: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { jne L_005eaa2a }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { jmp L_005eaa38 }
	__asm { L_005eaa2a: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { jne L_005eaa35 }
	__asm { mov dword ptr [ecx], esi }
	__asm { jmp L_005eaa38 }
	__asm { L_005eaa35: }
	__asm { mov dword ptr [ecx + 8], esi }
	__asm { L_005eaa38: }
	__asm { mov dword ptr [esi], edx }
	__asm { L_005eaa3a: }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { L_005eaa3d: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { je L_005ea8d0 }
	__asm { L_005eaa4a: }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 0xc], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00409af0();
extern "C" void fn_0040d6f0();
extern "C" void fn_005ea840();
extern "C" void fn_005eaca0();
extern "C" void fn_005eaf20();
extern "C" void fn_005eaf80();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005eaa60
extern "C" __declspec(naked) void asm_005eaa60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ec60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_005eaab9 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ecx] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_005ea840 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005eaab9: }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { cmp esi, dword ptr [edi] }
	__asm { jne L_005eab07 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { cmp eax, edx }
	__asm { jb L_005eaae2 }
	__asm { cmp edx, eax }
	__asm { jb L_005eac68 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { cmp eax, dword ptr [esi + 0x14] }
	__asm { jae L_005eac68 }
	__asm { L_005eaae2: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { L_005eaae6: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_005ea840 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005eab07: }
	__asm { cmp esi, edi }
	__asm { jne L_005eab50 }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { cmp eax, esi }
	__asm { jb L_005eab2b }
	__asm { cmp esi, eax }
	__asm { jb L_005eac68 }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { cmp eax, dword ptr [ebx + 4] }
	__asm { jae L_005eac68 }
	__asm { L_005eab2b: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push edx }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_005ea840 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005eab50: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { cmp eax, edx }
	__asm { jb L_005eab68 }
	__asm { cmp edx, eax }
	__asm { jb L_005eabc5 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jae L_005eabc5 }
	__asm { L_005eab68: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { call fn_0040d6f0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { push eax }
	__asm { call fn_005eaf20 }
	__asm { test al, al }
	__asm { je L_005eabbf }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { je L_005eaae6 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_005ea840 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005eabbf: }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { L_005eabc5: }
	__asm { push ebx }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { call fn_005eaf20 }
	__asm { test al, al }
	__asm { je L_005eac65 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { call fn_00409af0 }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { cmp ebx, edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { je L_005eabfd }
	__asm { lea eax, [ebx + 0x10] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { call fn_005eaf20 }
	__asm { test al, al }
	__asm { je L_005eac63 }
	__asm { L_005eabfd: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { je L_005eac2e }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_005ea840 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005eac2e: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_005ea840 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_005eaf80 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_005eac63: }
	__asm { mov ebx, edi }
	__asm { L_005eac65: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { L_005eac68: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005eaca0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0040d6f0();
extern "C" void fn_005ea840();
extern "C" void fn_005eaf80();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x005eaca0
extern "C" __declspec(naked) void asm_005eaca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ec70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov ebx, eax }
	__asm { mov al, 1 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { jne L_005ead3e }
	__asm { mov ecx, dword ptr [edi] }
	__asm { L_005eace2: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov ebx, edx }
	__asm { je L_005ead14 }
	__asm { cmp eax, ecx }
	__asm { jb L_005ead01 }
	__asm { cmp ecx, eax }
	__asm { jb L_005eacfd }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jb L_005ead01 }
	__asm { L_005eacfd: }
	__asm { xor eax, eax }
	__asm { jmp L_005ead06 }
	__asm { L_005ead01: }
	__asm { mov eax, 1 }
	__asm { L_005ead06: }
	__asm { test al, al }
	__asm { sete al }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { test al, al }
	__asm { je L_005ead29 }
	__asm { jmp L_005ead33 }
	__asm { L_005ead14: }
	__asm { cmp ecx, eax }
	__asm { jb L_005ead2e }
	__asm { cmp eax, ecx }
	__asm { jb L_005ead24 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp eax, dword ptr [edx + 0x14] }
	__asm { jb L_005ead2e }
	__asm { L_005ead24: }
	__asm { xor al, al }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { L_005ead29: }
	__asm { mov edx, dword ptr [edx + 8] }
	__asm { jmp L_005ead35 }
	__asm { L_005ead2e: }
	__asm { mov al, 1 }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { L_005ead33: }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_005ead35: }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { je L_005eace2 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { L_005ead3e: }
	__asm { mov esi, ebx }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { test al, al }
	__asm { je L_005ead86 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp ebx, dword ptr [eax] }
	__asm { jne L_005ead7b }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push 1 }
	__asm { L_005ead54: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_005ea840 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005ead7b: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_0040d6f0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { L_005ead86: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, ecx }
	__asm { jb L_005eaddb }
	__asm { cmp ecx, eax }
	__asm { jb L_005ead9b }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jb L_005eaddb }
	__asm { L_005ead9b: }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_005eadb6 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_005eadb6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005eadb6: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005eaddb: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { jmp L_005ead54 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_005eaf80 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_005ea7f0();
extern "C" void fn_005eaa60();
extern "C" void fn_005eb000();
// FUNCTION: ROBLOXSTUDIO 0x005eae50
extern "C" __declspec(naked) void asm_005eae50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0ec90 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_005eb000 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_005eae94 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { cmp eax, ecx }
	__asm { jb L_005eae94 }
	__asm { cmp ecx, eax }
	__asm { jb L_005eaf01 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp eax, dword ptr [esi + 0x14] }
	__asm { jae L_005eaf01 }
	__asm { L_005eae94: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_005ea7f0 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_005eaa60 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_005eaf01 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_005eaf01 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005eaf01: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x18] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005eafb0
extern "C" __declspec(naked) void asm_005eafb0()
{
	__asm { L_005eafb0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { mov esi, edi }
	__asm { jne L_005eaff8 }
	__asm { L_005eafc3: }
	__asm { push dword ptr [esi + 8] }
	__asm { mov ecx, ebx }
	__asm { call L_005eafb0 }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_005eafe7 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_005eafe7 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005eafe7: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { mov edi, esi }
	__asm { je L_005eafc3 }
	__asm { L_005eaff8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c21d0();
// FUNCTION: ROBLOXSTUDIO 0x005eb810
extern "C" __declspec(naked) void asm_005eb810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_005eb84f }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_005eb84f }
	__asm { sub edi, ecx }
	__asm { sar edi, 3 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_005eb83a }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006c21d0 }
	__asm { L_005eb83a: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea edx, [eax + edi*8] }
	__asm { test ecx, ecx }
	__asm { je L_005eb87e }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { jmp L_005eb86b }
	__asm { L_005eb84f: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_005eb85d }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006c21d0 }
	__asm { L_005eb85d: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_005eb87e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { L_005eb86b: }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_005eb87e }
	__asm { mov ecx, 1 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_005eb87e: }
	__asm { add dword ptr [esi + 4], 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0041fe80();
extern "C" void fn_0060f500();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x005ebbb0
extern "C" __declspec(naked) void asm_005ebbb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ed20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0xe1cad0 }
	__asm { mov edi, dword ptr [esi + 0x40] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_005ebc0e }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_005ebc0e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_005ebc0e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005ebc0e: }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_005ebc49 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x34] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { L_005ebc49: }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_005ebc77 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_005ebc77 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_005ebc77 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_005ebc77: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f500 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005ebff0();
extern "C" void fn_0060f3f0();
// FUNCTION: ROBLOXSTUDIO 0x005ebca0
extern "C" __declspec(naked) void asm_005ebca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ed3d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0060f3f0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], 0xe1cad0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov edi, 1 }
	__asm { test eax, eax }
	__asm { je L_005ebcf5 }
	__asm { add eax, 4 }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_005ebcf5: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x30] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_005ebff0 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { test eax, eax }
	__asm { je L_005ebd1e }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { inc edi }
	__asm { L_005ebd1e: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005ec1b0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005ebd40
extern "C" __declspec(naked) void asm_005ebd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ed4f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_005ebd7e }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_005ebd7e: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, bl }
	__asm { je L_005ebdf7 }
	__asm { cmp dword ptr [edx], 0 }
	__asm { je L_005ebdc2 }
	__asm { push edi }
	__asm { push ecx }
	__asm { call fn_005ec1b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_005ebdf7 }
	__asm { L_005ebdc2: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005ebde6 }
	__asm { push 0x52 }
	__asm { push 0xe1cae0 }
	__asm { push 0xe1cb24 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005ebdf7 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_005ebde6: }
	__asm { movzx eax, bl }
	__asm { push 0xe1cb50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005ebdf7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005ec1b0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x005ebe10
extern "C" __declspec(naked) void asm_005ebe10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ed61 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_005ebe4e }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_005ebe4e: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, bl }
	__asm { je L_005ebecc }
	__asm { cmp dword ptr [edx], 0 }
	__asm { je L_005ebe97 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { call fn_005ec1b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_005ebe97 }
	__asm { cmp edi, dword ptr [ebp + 0x1c] }
	__asm { jbe L_005ebecc }
	__asm { L_005ebe97: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_005ebebb }
	__asm { push 0x5d }
	__asm { push 0xe1cae0 }
	__asm { push 0xe1cbd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005ebecc }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_005ebebb: }
	__asm { movzx eax, bl }
	__asm { push 0xe1cc20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005ebecc: }
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

extern "C" char g_00e108b8[];
extern "C" char g_012d9db0[];
extern "C" char g_012d9dc0[];
extern "C" char g_012d9dc8[];
extern "C" char g_012d9ddc[];
extern "C" char g_012d9de0[];
extern "C" char g_012d9df0[];
extern "C" char g_012d9dfc[];
extern "C" char g_012d9e0c[];
extern "C" char g_012d9e14[];
extern "C" char g_012d9e1c[];
extern "C" char g_012d9e2c[];
extern "C" char g_012d9e3c[];
extern "C" char g_012d9e48[];
extern "C" char g_012d9e4c[];
extern "C" char g_012d9e58[];
extern "C" char g_012d9e68[];
extern "C" char g_012d9e70[];
extern "C" char g_012d9e7c[];
extern "C" char g_012d9e90[];
extern "C" char g_012d9e98[];
extern "C" char g_012d9ea0[];
extern "C" char g_012d9eac[];
extern "C" char g_012d9ec0[];
extern "C" char g_012d9ecc[];
extern "C" char g_012d9ed0[];
extern "C" char g_012d9edc[];
extern "C" char g_012d9eec[];
extern "C" char g_012d9ef8[];
extern "C" char g_012d9f08[];
extern "C" char g_012d9f0c[];
extern "C" char g_012d9f20[];
extern "C" char g_012d9f2c[];
extern "C" char g_012d9f30[];
extern "C" char g_012d9f44[];
extern "C" char g_012d9f50[];
extern "C" char g_012d9f5c[];
extern "C" char g_012d9f60[];
extern "C" char g_012d9f6c[];
extern "C" char g_012d9f80[];
extern "C" char g_012d9f8c[];
extern "C" char g_012d9f94[];
extern "C" char g_012d9fa4[];
extern "C" char g_012d9fb0[];
extern "C" char g_012d9fbc[];
extern "C" char g_012d9fc8[];
extern "C" char g_012d9fcc[];
// FUNCTION: ROBLOXSTUDIO 0x005f2970
extern "C" __declspec(naked) void asm_005f2970()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1cd0c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1cd1c }
	__asm { mov dword ptr [g_012d9db0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9dc0], eax }
	__asm { test eax, eax }
	__asm { je L_005f299d }
	__asm { test bl, bl }
	__asm { je L_005f299f }
	__asm { L_005f299d: }
	__asm { mov bl, 1 }
	__asm { L_005f299f: }
	__asm { push 0xe1cd34 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9dc8], eax }
	__asm { test eax, eax }
	__asm { je L_005f29b3 }
	__asm { test bl, bl }
	__asm { je L_005f29b5 }
	__asm { L_005f29b3: }
	__asm { mov bl, 1 }
	__asm { L_005f29b5: }
	__asm { push 0xe1cd4c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ddc], eax }
	__asm { test eax, eax }
	__asm { je L_005f29c9 }
	__asm { test bl, bl }
	__asm { je L_005f29cb }
	__asm { L_005f29c9: }
	__asm { mov bl, 1 }
	__asm { L_005f29cb: }
	__asm { push 0xe1cd64 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9de0], eax }
	__asm { test eax, eax }
	__asm { je L_005f29df }
	__asm { test bl, bl }
	__asm { je L_005f29e1 }
	__asm { L_005f29df: }
	__asm { mov bl, 1 }
	__asm { L_005f29e1: }
	__asm { push 0xe1cd7c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9df0], eax }
	__asm { test eax, eax }
	__asm { je L_005f29f5 }
	__asm { test bl, bl }
	__asm { je L_005f29f7 }
	__asm { L_005f29f5: }
	__asm { mov bl, 1 }
	__asm { L_005f29f7: }
	__asm { push 0xe1cd98 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9dfc], eax }
	__asm { test eax, eax }
	__asm { je L_005f2a0b }
	__asm { test bl, bl }
	__asm { je L_005f2a0d }
	__asm { L_005f2a0b: }
	__asm { mov bl, 1 }
	__asm { L_005f2a0d: }
	__asm { push 0xe1cdb4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e0c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2a21 }
	__asm { test bl, bl }
	__asm { je L_005f2a23 }
	__asm { L_005f2a21: }
	__asm { mov bl, 1 }
	__asm { L_005f2a23: }
	__asm { push 0xe1cdd0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e14], eax }
	__asm { test eax, eax }
	__asm { je L_005f2a37 }
	__asm { test bl, bl }
	__asm { je L_005f2a39 }
	__asm { L_005f2a37: }
	__asm { mov bl, 1 }
	__asm { L_005f2a39: }
	__asm { push 0xe1cde8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e1c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2a4d }
	__asm { test bl, bl }
	__asm { je L_005f2a4f }
	__asm { L_005f2a4d: }
	__asm { mov bl, 1 }
	__asm { L_005f2a4f: }
	__asm { push 0xe1ce00 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e2c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2a63 }
	__asm { test bl, bl }
	__asm { je L_005f2a65 }
	__asm { L_005f2a63: }
	__asm { mov bl, 1 }
	__asm { L_005f2a65: }
	__asm { push 0xe1ce18 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e3c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2a79 }
	__asm { test bl, bl }
	__asm { je L_005f2a7b }
	__asm { L_005f2a79: }
	__asm { mov bl, 1 }
	__asm { L_005f2a7b: }
	__asm { push 0xe1ce30 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e48], eax }
	__asm { test eax, eax }
	__asm { je L_005f2a8f }
	__asm { test bl, bl }
	__asm { je L_005f2a91 }
	__asm { L_005f2a8f: }
	__asm { mov bl, 1 }
	__asm { L_005f2a91: }
	__asm { push 0xe1ce48 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e4c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2aa5 }
	__asm { test bl, bl }
	__asm { je L_005f2aa7 }
	__asm { L_005f2aa5: }
	__asm { mov bl, 1 }
	__asm { L_005f2aa7: }
	__asm { push 0xe1ce5c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e58], eax }
	__asm { test eax, eax }
	__asm { je L_005f2abb }
	__asm { test bl, bl }
	__asm { je L_005f2abd }
	__asm { L_005f2abb: }
	__asm { mov bl, 1 }
	__asm { L_005f2abd: }
	__asm { push 0xe1ce70 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e68], eax }
	__asm { test eax, eax }
	__asm { je L_005f2ad1 }
	__asm { test bl, bl }
	__asm { je L_005f2ad3 }
	__asm { L_005f2ad1: }
	__asm { mov bl, 1 }
	__asm { L_005f2ad3: }
	__asm { push 0xe1ce84 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e70], eax }
	__asm { test eax, eax }
	__asm { je L_005f2ae7 }
	__asm { test bl, bl }
	__asm { je L_005f2ae9 }
	__asm { L_005f2ae7: }
	__asm { mov bl, 1 }
	__asm { L_005f2ae9: }
	__asm { push 0xe1ce98 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e7c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2afd }
	__asm { test bl, bl }
	__asm { je L_005f2aff }
	__asm { L_005f2afd: }
	__asm { mov bl, 1 }
	__asm { L_005f2aff: }
	__asm { push 0xe1ceac }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e90], eax }
	__asm { test eax, eax }
	__asm { je L_005f2b13 }
	__asm { test bl, bl }
	__asm { je L_005f2b15 }
	__asm { L_005f2b13: }
	__asm { mov bl, 1 }
	__asm { L_005f2b15: }
	__asm { push 0xe1cec0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e98], eax }
	__asm { test eax, eax }
	__asm { je L_005f2b29 }
	__asm { test bl, bl }
	__asm { je L_005f2b2b }
	__asm { L_005f2b29: }
	__asm { mov bl, 1 }
	__asm { L_005f2b2b: }
	__asm { push 0xe1ced4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ea0], eax }
	__asm { test eax, eax }
	__asm { je L_005f2b3f }
	__asm { test bl, bl }
	__asm { je L_005f2b41 }
	__asm { L_005f2b3f: }
	__asm { mov bl, 1 }
	__asm { L_005f2b41: }
	__asm { push 0xe1cee8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9eac], eax }
	__asm { test eax, eax }
	__asm { je L_005f2b55 }
	__asm { test bl, bl }
	__asm { je L_005f2b57 }
	__asm { L_005f2b55: }
	__asm { mov bl, 1 }
	__asm { L_005f2b57: }
	__asm { push 0xe1cefc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ec0], eax }
	__asm { test eax, eax }
	__asm { je L_005f2b6b }
	__asm { test bl, bl }
	__asm { je L_005f2b6d }
	__asm { L_005f2b6b: }
	__asm { mov bl, 1 }
	__asm { L_005f2b6d: }
	__asm { push 0xe1cf10 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ecc], eax }
	__asm { test eax, eax }
	__asm { je L_005f2b81 }
	__asm { test bl, bl }
	__asm { je L_005f2b83 }
	__asm { L_005f2b81: }
	__asm { mov bl, 1 }
	__asm { L_005f2b83: }
	__asm { push 0xe1cf24 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ed0], eax }
	__asm { test eax, eax }
	__asm { je L_005f2b97 }
	__asm { test bl, bl }
	__asm { je L_005f2b99 }
	__asm { L_005f2b97: }
	__asm { mov bl, 1 }
	__asm { L_005f2b99: }
	__asm { push 0xe1cf38 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9edc], eax }
	__asm { test eax, eax }
	__asm { je L_005f2bad }
	__asm { test bl, bl }
	__asm { je L_005f2baf }
	__asm { L_005f2bad: }
	__asm { mov bl, 1 }
	__asm { L_005f2baf: }
	__asm { push 0xe1cf4c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9eec], eax }
	__asm { test eax, eax }
	__asm { je L_005f2bc3 }
	__asm { test bl, bl }
	__asm { je L_005f2bc5 }
	__asm { L_005f2bc3: }
	__asm { mov bl, 1 }
	__asm { L_005f2bc5: }
	__asm { push 0xe1cf60 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ef8], eax }
	__asm { test eax, eax }
	__asm { je L_005f2bd9 }
	__asm { test bl, bl }
	__asm { je L_005f2bdb }
	__asm { L_005f2bd9: }
	__asm { mov bl, 1 }
	__asm { L_005f2bdb: }
	__asm { push 0xe1cf74 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f08], eax }
	__asm { test eax, eax }
	__asm { je L_005f2bef }
	__asm { test bl, bl }
	__asm { je L_005f2bf1 }
	__asm { L_005f2bef: }
	__asm { mov bl, 1 }
	__asm { L_005f2bf1: }
	__asm { push 0xe1cf88 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f0c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2c05 }
	__asm { test bl, bl }
	__asm { je L_005f2c07 }
	__asm { L_005f2c05: }
	__asm { mov bl, 1 }
	__asm { L_005f2c07: }
	__asm { push 0xe1cf9c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f20], eax }
	__asm { test eax, eax }
	__asm { je L_005f2c1b }
	__asm { test bl, bl }
	__asm { je L_005f2c1d }
	__asm { L_005f2c1b: }
	__asm { mov bl, 1 }
	__asm { L_005f2c1d: }
	__asm { push 0xe1cfb0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f2c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2c31 }
	__asm { test bl, bl }
	__asm { je L_005f2c33 }
	__asm { L_005f2c31: }
	__asm { mov bl, 1 }
	__asm { L_005f2c33: }
	__asm { push 0xe1cfc4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f30], eax }
	__asm { test eax, eax }
	__asm { je L_005f2c47 }
	__asm { test bl, bl }
	__asm { je L_005f2c49 }
	__asm { L_005f2c47: }
	__asm { mov bl, 1 }
	__asm { L_005f2c49: }
	__asm { push 0xe1cfd8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f44], eax }
	__asm { test eax, eax }
	__asm { je L_005f2c5d }
	__asm { test bl, bl }
	__asm { je L_005f2c5f }
	__asm { L_005f2c5d: }
	__asm { mov bl, 1 }
	__asm { L_005f2c5f: }
	__asm { push 0xe1cfec }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f50], eax }
	__asm { test eax, eax }
	__asm { je L_005f2c73 }
	__asm { test bl, bl }
	__asm { je L_005f2c75 }
	__asm { L_005f2c73: }
	__asm { mov bl, 1 }
	__asm { L_005f2c75: }
	__asm { push 0xe1d000 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f5c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2c89 }
	__asm { test bl, bl }
	__asm { je L_005f2c8b }
	__asm { L_005f2c89: }
	__asm { mov bl, 1 }
	__asm { L_005f2c8b: }
	__asm { push 0xe1d014 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f60], eax }
	__asm { test eax, eax }
	__asm { je L_005f2c9f }
	__asm { test bl, bl }
	__asm { je L_005f2ca1 }
	__asm { L_005f2c9f: }
	__asm { mov bl, 1 }
	__asm { L_005f2ca1: }
	__asm { push 0xe1d028 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f6c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2cb5 }
	__asm { test bl, bl }
	__asm { je L_005f2cb7 }
	__asm { L_005f2cb5: }
	__asm { mov bl, 1 }
	__asm { L_005f2cb7: }
	__asm { push 0xe1d03c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f80], eax }
	__asm { test eax, eax }
	__asm { je L_005f2ccb }
	__asm { test bl, bl }
	__asm { je L_005f2ccd }
	__asm { L_005f2ccb: }
	__asm { mov bl, 1 }
	__asm { L_005f2ccd: }
	__asm { push 0xe1d050 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f8c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2ce1 }
	__asm { test bl, bl }
	__asm { je L_005f2ce3 }
	__asm { L_005f2ce1: }
	__asm { mov bl, 1 }
	__asm { L_005f2ce3: }
	__asm { push 0xe1d064 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f94], eax }
	__asm { test eax, eax }
	__asm { je L_005f2cf7 }
	__asm { test bl, bl }
	__asm { je L_005f2cf9 }
	__asm { L_005f2cf7: }
	__asm { mov bl, 1 }
	__asm { L_005f2cf9: }
	__asm { push 0xe1d078 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9fa4], eax }
	__asm { test eax, eax }
	__asm { je L_005f2d0d }
	__asm { test bl, bl }
	__asm { je L_005f2d0f }
	__asm { L_005f2d0d: }
	__asm { mov bl, 1 }
	__asm { L_005f2d0f: }
	__asm { push 0xe1d08c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9fb0], eax }
	__asm { test eax, eax }
	__asm { je L_005f2d23 }
	__asm { test bl, bl }
	__asm { je L_005f2d25 }
	__asm { L_005f2d23: }
	__asm { mov bl, 1 }
	__asm { L_005f2d25: }
	__asm { push 0xe1d0a0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9fbc], eax }
	__asm { test eax, eax }
	__asm { je L_005f2d39 }
	__asm { test bl, bl }
	__asm { je L_005f2d3b }
	__asm { L_005f2d39: }
	__asm { mov bl, 1 }
	__asm { L_005f2d3b: }
	__asm { push 0xe1d0b4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9fc8], eax }
	__asm { test eax, eax }
	__asm { je L_005f2d4f }
	__asm { test bl, bl }
	__asm { je L_005f2d51 }
	__asm { L_005f2d4f: }
	__asm { mov bl, 1 }
	__asm { L_005f2d51: }
	__asm { push 0xe1d0c8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9fcc], eax }
	__asm { test eax, eax }
	__asm { je L_005f2d6a }
	__asm { test bl, bl }
	__asm { jne L_005f2d6a }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f2d6a: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9fe0[];
extern "C" char g_012d9fec[];
extern "C" char g_012d9ff4[];
extern "C" char g_012da004[];
extern "C" char g_012da010[];
extern "C" char g_012da018[];
extern "C" char g_012da024[];
extern "C" char g_012da034[];
extern "C" char g_012da038[];
extern "C" char g_012da044[];
extern "C" char g_012da054[];
extern "C" char g_012da05c[];
extern "C" char g_012da070[];
extern "C" char g_012da07c[];
extern "C" char g_012da080[];
extern "C" char g_012da090[];
extern "C" char g_012da09c[];
extern "C" char g_012da0a8[];
extern "C" char g_012da0b8[];
extern "C" char g_012da0bc[];
extern "C" char g_012da0d0[];
extern "C" char g_012da0d8[];
extern "C" char g_012da0e8[];
extern "C" char g_012da0f4[];
extern "C" char g_012da0fc[];
extern "C" char g_012da108[];
extern "C" char g_012da118[];
extern "C" char g_012da120[];
extern "C" char g_012da130[];
extern "C" char g_012da138[];
extern "C" char g_012da140[];
extern "C" char g_012da154[];
extern "C" char g_012da158[];
extern "C" char g_012da164[];
extern "C" char g_012da170[];
extern "C" char g_012da180[];
extern "C" char g_012da188[];
extern "C" char g_012da198[];
extern "C" char g_012da1a4[];
extern "C" char g_012da1b4[];
extern "C" char g_012da1b8[];
extern "C" char g_012da1c4[];
extern "C" char g_012da1d8[];
extern "C" char g_012da1e0[];
extern "C" char g_012da1e8[];
extern "C" char g_012da1f8[];
extern "C" char g_012da204[];
// FUNCTION: ROBLOXSTUDIO 0x005f2d70
extern "C" __declspec(naked) void asm_005f2d70()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1d0dc }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1d0ec }
	__asm { mov dword ptr [g_012d9fe0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9fec], eax }
	__asm { test eax, eax }
	__asm { je L_005f2d9d }
	__asm { test bl, bl }
	__asm { je L_005f2d9f }
	__asm { L_005f2d9d: }
	__asm { mov bl, 1 }
	__asm { L_005f2d9f: }
	__asm { push 0xe1d0fc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ff4], eax }
	__asm { test eax, eax }
	__asm { je L_005f2db3 }
	__asm { test bl, bl }
	__asm { je L_005f2db5 }
	__asm { L_005f2db3: }
	__asm { mov bl, 1 }
	__asm { L_005f2db5: }
	__asm { push 0xe1d110 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da004], eax }
	__asm { test eax, eax }
	__asm { je L_005f2dc9 }
	__asm { test bl, bl }
	__asm { je L_005f2dcb }
	__asm { L_005f2dc9: }
	__asm { mov bl, 1 }
	__asm { L_005f2dcb: }
	__asm { push 0xe1d124 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da010], eax }
	__asm { test eax, eax }
	__asm { je L_005f2ddf }
	__asm { test bl, bl }
	__asm { je L_005f2de1 }
	__asm { L_005f2ddf: }
	__asm { mov bl, 1 }
	__asm { L_005f2de1: }
	__asm { push 0xe1d130 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da018], eax }
	__asm { test eax, eax }
	__asm { je L_005f2df5 }
	__asm { test bl, bl }
	__asm { je L_005f2df7 }
	__asm { L_005f2df5: }
	__asm { mov bl, 1 }
	__asm { L_005f2df7: }
	__asm { push 0xe1d140 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da024], eax }
	__asm { test eax, eax }
	__asm { je L_005f2e0b }
	__asm { test bl, bl }
	__asm { je L_005f2e0d }
	__asm { L_005f2e0b: }
	__asm { mov bl, 1 }
	__asm { L_005f2e0d: }
	__asm { push 0xe1d14c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da034], eax }
	__asm { test eax, eax }
	__asm { je L_005f2e21 }
	__asm { test bl, bl }
	__asm { je L_005f2e23 }
	__asm { L_005f2e21: }
	__asm { mov bl, 1 }
	__asm { L_005f2e23: }
	__asm { push 0xe1d15c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da038], eax }
	__asm { test eax, eax }
	__asm { je L_005f2e37 }
	__asm { test bl, bl }
	__asm { je L_005f2e39 }
	__asm { L_005f2e37: }
	__asm { mov bl, 1 }
	__asm { L_005f2e39: }
	__asm { push 0xe1d170 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da044], eax }
	__asm { test eax, eax }
	__asm { je L_005f2e4d }
	__asm { test bl, bl }
	__asm { je L_005f2e4f }
	__asm { L_005f2e4d: }
	__asm { mov bl, 1 }
	__asm { L_005f2e4f: }
	__asm { push 0xe1d184 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da054], eax }
	__asm { test eax, eax }
	__asm { je L_005f2e63 }
	__asm { test bl, bl }
	__asm { je L_005f2e65 }
	__asm { L_005f2e63: }
	__asm { mov bl, 1 }
	__asm { L_005f2e65: }
	__asm { push 0xe1d198 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da05c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2e79 }
	__asm { test bl, bl }
	__asm { je L_005f2e7b }
	__asm { L_005f2e79: }
	__asm { mov bl, 1 }
	__asm { L_005f2e7b: }
	__asm { push 0xe1d1ac }
	__asm { call esi }
	__asm { mov dword ptr [g_012da070], eax }
	__asm { test eax, eax }
	__asm { je L_005f2e8f }
	__asm { test bl, bl }
	__asm { je L_005f2e91 }
	__asm { L_005f2e8f: }
	__asm { mov bl, 1 }
	__asm { L_005f2e91: }
	__asm { push 0xe1d1c0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da07c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2ea5 }
	__asm { test bl, bl }
	__asm { je L_005f2ea7 }
	__asm { L_005f2ea5: }
	__asm { mov bl, 1 }
	__asm { L_005f2ea7: }
	__asm { push 0xe1d1d4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da080], eax }
	__asm { test eax, eax }
	__asm { je L_005f2ebb }
	__asm { test bl, bl }
	__asm { je L_005f2ebd }
	__asm { L_005f2ebb: }
	__asm { mov bl, 1 }
	__asm { L_005f2ebd: }
	__asm { push 0xe1d1e8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da090], eax }
	__asm { test eax, eax }
	__asm { je L_005f2ed1 }
	__asm { test bl, bl }
	__asm { je L_005f2ed3 }
	__asm { L_005f2ed1: }
	__asm { mov bl, 1 }
	__asm { L_005f2ed3: }
	__asm { push 0xe1d1fc }
	__asm { call esi }
	__asm { mov dword ptr [g_012da09c], eax }
	__asm { test eax, eax }
	__asm { je L_005f2ee7 }
	__asm { test bl, bl }
	__asm { je L_005f2ee9 }
	__asm { L_005f2ee7: }
	__asm { mov bl, 1 }
	__asm { L_005f2ee9: }
	__asm { push 0xe1d210 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da0a8], eax }
	__asm { test eax, eax }
	__asm { je L_005f2efd }
	__asm { test bl, bl }
	__asm { je L_005f2eff }
	__asm { L_005f2efd: }
	__asm { mov bl, 1 }
	__asm { L_005f2eff: }
	__asm { push 0xe1d224 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da0b8], eax }
	__asm { test eax, eax }
	__asm { je L_005f2f13 }
	__asm { test bl, bl }
	__asm { je L_005f2f15 }
	__asm { L_005f2f13: }
	__asm { mov bl, 1 }
	__asm { L_005f2f15: }
	__asm { push 0xe1d238 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da0bc], eax }
	__asm { test eax, eax }
	__asm { je L_005f2f29 }
	__asm { test bl, bl }
	__asm { je L_005f2f2b }
	__asm { L_005f2f29: }
	__asm { mov bl, 1 }
	__asm { L_005f2f2b: }
	__asm { push 0xe1d24c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da0d0], eax }
	__asm { test eax, eax }
	__asm { je L_005f2f3f }
	__asm { test bl, bl }
	__asm { je L_005f2f41 }
	__asm { L_005f2f3f: }
	__asm { mov bl, 1 }
	__asm { L_005f2f41: }
	__asm { push 0xe1d260 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da0d8], eax }
	__asm { test eax, eax }
	__asm { je L_005f2f55 }
	__asm { test bl, bl }
	__asm { je L_005f2f57 }
	__asm { L_005f2f55: }
	__asm { mov bl, 1 }
	__asm { L_005f2f57: }
	__asm { push 0xe1d274 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da0e8], eax }
	__asm { test eax, eax }
	__asm { je L_005f2f6b }
	__asm { test bl, bl }
	__asm { je L_005f2f6d }
	__asm { L_005f2f6b: }
	__asm { mov bl, 1 }
	__asm { L_005f2f6d: }
	__asm { push 0xe1d288 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da0f4], eax }
	__asm { test eax, eax }
	__asm { je L_005f2f81 }
	__asm { test bl, bl }
	__asm { je L_005f2f83 }
	__asm { L_005f2f81: }
	__asm { mov bl, 1 }
	__asm { L_005f2f83: }
	__asm { push 0xe1d29c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da0fc], eax }
	__asm { test eax, eax }
	__asm { je L_005f2f97 }
	__asm { test bl, bl }
	__asm { je L_005f2f99 }
	__asm { L_005f2f97: }
	__asm { mov bl, 1 }
	__asm { L_005f2f99: }
	__asm { push 0xe1d2b0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da108], eax }
	__asm { test eax, eax }
	__asm { je L_005f2fad }
	__asm { test bl, bl }
	__asm { je L_005f2faf }
	__asm { L_005f2fad: }
	__asm { mov bl, 1 }
	__asm { L_005f2faf: }
	__asm { push 0xe1d2c8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da118], eax }
	__asm { test eax, eax }
	__asm { je L_005f2fc3 }
	__asm { test bl, bl }
	__asm { je L_005f2fc5 }
	__asm { L_005f2fc3: }
	__asm { mov bl, 1 }
	__asm { L_005f2fc5: }
	__asm { push 0xe1d2dc }
	__asm { call esi }
	__asm { mov dword ptr [g_012da120], eax }
	__asm { test eax, eax }
	__asm { je L_005f2fd9 }
	__asm { test bl, bl }
	__asm { je L_005f2fdb }
	__asm { L_005f2fd9: }
	__asm { mov bl, 1 }
	__asm { L_005f2fdb: }
	__asm { push 0xe1d2f4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da130], eax }
	__asm { test eax, eax }
	__asm { je L_005f2fef }
	__asm { test bl, bl }
	__asm { je L_005f2ff1 }
	__asm { L_005f2fef: }
	__asm { mov bl, 1 }
	__asm { L_005f2ff1: }
	__asm { push 0xe1d308 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da138], eax }
	__asm { test eax, eax }
	__asm { je L_005f3005 }
	__asm { test bl, bl }
	__asm { je L_005f3007 }
	__asm { L_005f3005: }
	__asm { mov bl, 1 }
	__asm { L_005f3007: }
	__asm { push 0xe1d320 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da140], eax }
	__asm { test eax, eax }
	__asm { je L_005f301b }
	__asm { test bl, bl }
	__asm { je L_005f301d }
	__asm { L_005f301b: }
	__asm { mov bl, 1 }
	__asm { L_005f301d: }
	__asm { push 0xe1d338 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da154], eax }
	__asm { test eax, eax }
	__asm { je L_005f3031 }
	__asm { test bl, bl }
	__asm { je L_005f3033 }
	__asm { L_005f3031: }
	__asm { mov bl, 1 }
	__asm { L_005f3033: }
	__asm { push 0xe1d348 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da158], eax }
	__asm { test eax, eax }
	__asm { je L_005f3047 }
	__asm { test bl, bl }
	__asm { je L_005f3049 }
	__asm { L_005f3047: }
	__asm { mov bl, 1 }
	__asm { L_005f3049: }
	__asm { push 0xe1d358 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da164], eax }
	__asm { test eax, eax }
	__asm { je L_005f305d }
	__asm { test bl, bl }
	__asm { je L_005f305f }
	__asm { L_005f305d: }
	__asm { mov bl, 1 }
	__asm { L_005f305f: }
	__asm { push 0xe1d368 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da170], eax }
	__asm { test eax, eax }
	__asm { je L_005f3073 }
	__asm { test bl, bl }
	__asm { je L_005f3075 }
	__asm { L_005f3073: }
	__asm { mov bl, 1 }
	__asm { L_005f3075: }
	__asm { push 0xe1d378 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da180], eax }
	__asm { test eax, eax }
	__asm { je L_005f3089 }
	__asm { test bl, bl }
	__asm { je L_005f308b }
	__asm { L_005f3089: }
	__asm { mov bl, 1 }
	__asm { L_005f308b: }
	__asm { push 0xe1d388 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da188], eax }
	__asm { test eax, eax }
	__asm { je L_005f309f }
	__asm { test bl, bl }
	__asm { je L_005f30a1 }
	__asm { L_005f309f: }
	__asm { mov bl, 1 }
	__asm { L_005f30a1: }
	__asm { push 0xe1d398 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da198], eax }
	__asm { test eax, eax }
	__asm { je L_005f30b5 }
	__asm { test bl, bl }
	__asm { je L_005f30b7 }
	__asm { L_005f30b5: }
	__asm { mov bl, 1 }
	__asm { L_005f30b7: }
	__asm { push 0xe1d3a8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da1a4], eax }
	__asm { test eax, eax }
	__asm { je L_005f30cb }
	__asm { test bl, bl }
	__asm { je L_005f30cd }
	__asm { L_005f30cb: }
	__asm { mov bl, 1 }
	__asm { L_005f30cd: }
	__asm { push 0xe1d3b8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da1b4], eax }
	__asm { test eax, eax }
	__asm { je L_005f30e1 }
	__asm { test bl, bl }
	__asm { je L_005f30e3 }
	__asm { L_005f30e1: }
	__asm { mov bl, 1 }
	__asm { L_005f30e3: }
	__asm { push 0xe1d3c8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da1b8], eax }
	__asm { test eax, eax }
	__asm { je L_005f30f7 }
	__asm { test bl, bl }
	__asm { je L_005f30f9 }
	__asm { L_005f30f7: }
	__asm { mov bl, 1 }
	__asm { L_005f30f9: }
	__asm { push 0xe1d3d8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da1c4], eax }
	__asm { test eax, eax }
	__asm { je L_005f310d }
	__asm { test bl, bl }
	__asm { je L_005f310f }
	__asm { L_005f310d: }
	__asm { mov bl, 1 }
	__asm { L_005f310f: }
	__asm { push 0xe1d3e8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da1d8], eax }
	__asm { test eax, eax }
	__asm { je L_005f3123 }
	__asm { test bl, bl }
	__asm { je L_005f3125 }
	__asm { L_005f3123: }
	__asm { mov bl, 1 }
	__asm { L_005f3125: }
	__asm { push 0xe1d3f8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da1e0], eax }
	__asm { test eax, eax }
	__asm { je L_005f3139 }
	__asm { test bl, bl }
	__asm { je L_005f313b }
	__asm { L_005f3139: }
	__asm { mov bl, 1 }
	__asm { L_005f313b: }
	__asm { push 0xe1d408 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da1e8], eax }
	__asm { test eax, eax }
	__asm { je L_005f314f }
	__asm { test bl, bl }
	__asm { je L_005f3151 }
	__asm { L_005f314f: }
	__asm { mov bl, 1 }
	__asm { L_005f3151: }
	__asm { push 0xe1d418 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da1f8], eax }
	__asm { test eax, eax }
	__asm { je L_005f3165 }
	__asm { test bl, bl }
	__asm { je L_005f3167 }
	__asm { L_005f3165: }
	__asm { mov bl, 1 }
	__asm { L_005f3167: }
	__asm { push 0xe1d428 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da204], eax }
	__asm { test eax, eax }
	__asm { je L_005f3180 }
	__asm { test bl, bl }
	__asm { jne L_005f3180 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f3180: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012da20c[];
extern "C" char g_012da218[];
extern "C" char g_012da228[];
extern "C" char g_012da230[];
extern "C" char g_012da23c[];
extern "C" char g_012da24c[];
extern "C" char g_012da258[];
extern "C" char g_012da264[];
extern "C" char g_012da26c[];
extern "C" char g_012da280[];
extern "C" char g_012da28c[];
extern "C" char g_012da294[];
extern "C" char g_012da29c[];
extern "C" char g_012da2ac[];
extern "C" char g_012da2bc[];
extern "C" char g_012da2c4[];
extern "C" char g_012da2d0[];
extern "C" char g_012da2dc[];
extern "C" char g_012da2e4[];
// FUNCTION: ROBLOXSTUDIO 0x005f3190
extern "C" __declspec(naked) void asm_005f3190()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1d438 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1d448 }
	__asm { mov dword ptr [g_012da20c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012da218], eax }
	__asm { test eax, eax }
	__asm { je L_005f31bd }
	__asm { test bl, bl }
	__asm { je L_005f31bf }
	__asm { L_005f31bd: }
	__asm { mov bl, 1 }
	__asm { L_005f31bf: }
	__asm { push 0xe1d458 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da228], eax }
	__asm { test eax, eax }
	__asm { je L_005f31d3 }
	__asm { test bl, bl }
	__asm { je L_005f31d5 }
	__asm { L_005f31d3: }
	__asm { mov bl, 1 }
	__asm { L_005f31d5: }
	__asm { push 0xe1d468 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da230], eax }
	__asm { test eax, eax }
	__asm { je L_005f31e9 }
	__asm { test bl, bl }
	__asm { je L_005f31eb }
	__asm { L_005f31e9: }
	__asm { mov bl, 1 }
	__asm { L_005f31eb: }
	__asm { push 0xe1d478 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da23c], eax }
	__asm { test eax, eax }
	__asm { je L_005f31ff }
	__asm { test bl, bl }
	__asm { je L_005f3201 }
	__asm { L_005f31ff: }
	__asm { mov bl, 1 }
	__asm { L_005f3201: }
	__asm { push 0xe1d488 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da24c], eax }
	__asm { test eax, eax }
	__asm { je L_005f3215 }
	__asm { test bl, bl }
	__asm { je L_005f3217 }
	__asm { L_005f3215: }
	__asm { mov bl, 1 }
	__asm { L_005f3217: }
	__asm { push 0xe1d498 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da258], eax }
	__asm { test eax, eax }
	__asm { je L_005f322b }
	__asm { test bl, bl }
	__asm { je L_005f322d }
	__asm { L_005f322b: }
	__asm { mov bl, 1 }
	__asm { L_005f322d: }
	__asm { push 0xe1d4a4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da264], eax }
	__asm { test eax, eax }
	__asm { je L_005f3241 }
	__asm { test bl, bl }
	__asm { je L_005f3243 }
	__asm { L_005f3241: }
	__asm { mov bl, 1 }
	__asm { L_005f3243: }
	__asm { push 0xe1d4b4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da26c], eax }
	__asm { test eax, eax }
	__asm { je L_005f3257 }
	__asm { test bl, bl }
	__asm { je L_005f3259 }
	__asm { L_005f3257: }
	__asm { mov bl, 1 }
	__asm { L_005f3259: }
	__asm { push 0xe1d4c4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da280], eax }
	__asm { test eax, eax }
	__asm { je L_005f326d }
	__asm { test bl, bl }
	__asm { je L_005f326f }
	__asm { L_005f326d: }
	__asm { mov bl, 1 }
	__asm { L_005f326f: }
	__asm { push 0xe1d4dc }
	__asm { call esi }
	__asm { mov dword ptr [g_012da28c], eax }
	__asm { test eax, eax }
	__asm { je L_005f3283 }
	__asm { test bl, bl }
	__asm { je L_005f3285 }
	__asm { L_005f3283: }
	__asm { mov bl, 1 }
	__asm { L_005f3285: }
	__asm { push 0xe1d4f0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da294], eax }
	__asm { test eax, eax }
	__asm { je L_005f3299 }
	__asm { test bl, bl }
	__asm { je L_005f329b }
	__asm { L_005f3299: }
	__asm { mov bl, 1 }
	__asm { L_005f329b: }
	__asm { push 0xe1d504 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da29c], eax }
	__asm { test eax, eax }
	__asm { je L_005f32af }
	__asm { test bl, bl }
	__asm { je L_005f32b1 }
	__asm { L_005f32af: }
	__asm { mov bl, 1 }
	__asm { L_005f32b1: }
	__asm { push 0xe1d518 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da2ac], eax }
	__asm { test eax, eax }
	__asm { je L_005f32c5 }
	__asm { test bl, bl }
	__asm { je L_005f32c7 }
	__asm { L_005f32c5: }
	__asm { mov bl, 1 }
	__asm { L_005f32c7: }
	__asm { push 0xe1d52c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da2bc], eax }
	__asm { test eax, eax }
	__asm { je L_005f32db }
	__asm { test bl, bl }
	__asm { je L_005f32dd }
	__asm { L_005f32db: }
	__asm { mov bl, 1 }
	__asm { L_005f32dd: }
	__asm { push 0xe1d53c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da2c4], eax }
	__asm { test eax, eax }
	__asm { je L_005f32f1 }
	__asm { test bl, bl }
	__asm { je L_005f32f3 }
	__asm { L_005f32f1: }
	__asm { mov bl, 1 }
	__asm { L_005f32f3: }
	__asm { push 0xe1d548 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da2d0], eax }
	__asm { test eax, eax }
	__asm { je L_005f3307 }
	__asm { test bl, bl }
	__asm { je L_005f3309 }
	__asm { L_005f3307: }
	__asm { mov bl, 1 }
	__asm { L_005f3309: }
	__asm { push 0xe1d554 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da2dc], eax }
	__asm { test eax, eax }
	__asm { je L_005f331d }
	__asm { test bl, bl }
	__asm { je L_005f331f }
	__asm { L_005f331d: }
	__asm { mov bl, 1 }
	__asm { L_005f331f: }
	__asm { push 0xe1d560 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da2e4], eax }
	__asm { test eax, eax }
	__asm { je L_005f3338 }
	__asm { test bl, bl }
	__asm { jne L_005f3338 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f3338: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dac14[];
extern "C" char g_012dac1c[];
extern "C" char g_012dac24[];
extern "C" char g_012dac2c[];
extern "C" char g_012dac3c[];
extern "C" char g_012dac40[];
extern "C" char g_012dac48[];
extern "C" char g_012dac50[];
extern "C" char g_012dac60[];
extern "C" char g_012dac68[];
extern "C" char g_012dac6c[];
extern "C" char g_012dac78[];
extern "C" char g_012dac80[];
extern "C" char g_012dac88[];
extern "C" char g_012dac94[];
extern "C" char g_012dac98[];
// FUNCTION: ROBLOXSTUDIO 0x005f4b80
extern "C" __declspec(naked) void asm_005f4b80()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1eb68 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1eb7c }
	__asm { mov dword ptr [g_012dac14], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac1c], eax }
	__asm { test eax, eax }
	__asm { je L_005f4bad }
	__asm { test bl, bl }
	__asm { je L_005f4baf }
	__asm { L_005f4bad: }
	__asm { mov bl, 1 }
	__asm { L_005f4baf: }
	__asm { push 0xe1eb94 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac24], eax }
	__asm { test eax, eax }
	__asm { je L_005f4bc3 }
	__asm { test bl, bl }
	__asm { je L_005f4bc5 }
	__asm { L_005f4bc3: }
	__asm { mov bl, 1 }
	__asm { L_005f4bc5: }
	__asm { push 0xe1ebb4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac2c], eax }
	__asm { test eax, eax }
	__asm { je L_005f4bd9 }
	__asm { test bl, bl }
	__asm { je L_005f4bdb }
	__asm { L_005f4bd9: }
	__asm { mov bl, 1 }
	__asm { L_005f4bdb: }
	__asm { push 0xe1ebd0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac3c], eax }
	__asm { test eax, eax }
	__asm { je L_005f4bef }
	__asm { test bl, bl }
	__asm { je L_005f4bf1 }
	__asm { L_005f4bef: }
	__asm { mov bl, 1 }
	__asm { L_005f4bf1: }
	__asm { push 0xe1ebec }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac40], eax }
	__asm { test eax, eax }
	__asm { je L_005f4c05 }
	__asm { test bl, bl }
	__asm { je L_005f4c07 }
	__asm { L_005f4c05: }
	__asm { mov bl, 1 }
	__asm { L_005f4c07: }
	__asm { push 0xe1ec0c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac48], eax }
	__asm { test eax, eax }
	__asm { je L_005f4c1b }
	__asm { test bl, bl }
	__asm { je L_005f4c1d }
	__asm { L_005f4c1b: }
	__asm { mov bl, 1 }
	__asm { L_005f4c1d: }
	__asm { push 0xe1ec2c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac50], eax }
	__asm { test eax, eax }
	__asm { je L_005f4c31 }
	__asm { test bl, bl }
	__asm { je L_005f4c33 }
	__asm { L_005f4c31: }
	__asm { mov bl, 1 }
	__asm { L_005f4c33: }
	__asm { push 0xe1ec4c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac60], eax }
	__asm { test eax, eax }
	__asm { je L_005f4c47 }
	__asm { test bl, bl }
	__asm { je L_005f4c49 }
	__asm { L_005f4c47: }
	__asm { mov bl, 1 }
	__asm { L_005f4c49: }
	__asm { push 0xe1ec70 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac68], eax }
	__asm { test eax, eax }
	__asm { je L_005f4c5d }
	__asm { test bl, bl }
	__asm { je L_005f4c5f }
	__asm { L_005f4c5d: }
	__asm { mov bl, 1 }
	__asm { L_005f4c5f: }
	__asm { push 0xe1ec90 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac6c], eax }
	__asm { test eax, eax }
	__asm { je L_005f4c73 }
	__asm { test bl, bl }
	__asm { je L_005f4c75 }
	__asm { L_005f4c73: }
	__asm { mov bl, 1 }
	__asm { L_005f4c75: }
	__asm { push 0xe1ecb0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac78], eax }
	__asm { test eax, eax }
	__asm { je L_005f4c89 }
	__asm { test bl, bl }
	__asm { je L_005f4c8b }
	__asm { L_005f4c89: }
	__asm { mov bl, 1 }
	__asm { L_005f4c8b: }
	__asm { push 0xe1ecd0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac80], eax }
	__asm { test eax, eax }
	__asm { je L_005f4c9f }
	__asm { test bl, bl }
	__asm { je L_005f4ca1 }
	__asm { L_005f4c9f: }
	__asm { mov bl, 1 }
	__asm { L_005f4ca1: }
	__asm { push 0xe1ece8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac88], eax }
	__asm { test eax, eax }
	__asm { je L_005f4cb5 }
	__asm { test bl, bl }
	__asm { je L_005f4cb7 }
	__asm { L_005f4cb5: }
	__asm { mov bl, 1 }
	__asm { L_005f4cb7: }
	__asm { push 0xe1ed00 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac94], eax }
	__asm { test eax, eax }
	__asm { je L_005f4ccb }
	__asm { test bl, bl }
	__asm { je L_005f4ccd }
	__asm { L_005f4ccb: }
	__asm { mov bl, 1 }
	__asm { L_005f4ccd: }
	__asm { push 0xe1ed18 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac98], eax }
	__asm { test eax, eax }
	__asm { je L_005f4ce6 }
	__asm { test bl, bl }
	__asm { jne L_005f4ce6 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f4ce6: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dadec[];
extern "C" char g_012dadf0[];
extern "C" char g_012dadf8[];
extern "C" char g_012dae08[];
extern "C" char g_012dae0c[];
extern "C" char g_012dae14[];
extern "C" char g_012dae1c[];
extern "C" char g_012dae2c[];
extern "C" char g_012dae30[];
extern "C" char g_012dae38[];
extern "C" char g_012dae44[];
extern "C" char g_012dae4c[];
extern "C" char g_012dae54[];
extern "C" char g_012dae60[];
extern "C" char g_012dae68[];
extern "C" char g_012dae70[];
extern "C" char g_012dae7c[];
extern "C" char g_012dae84[];
extern "C" char g_012dae88[];
extern "C" char g_012dae90[];
// FUNCTION: ROBLOXSTUDIO 0x005f5120
extern "C" __declspec(naked) void asm_005f5120()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1f0bc }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1f0d0 }
	__asm { mov dword ptr [g_012dadec], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dadf0], eax }
	__asm { test eax, eax }
	__asm { je L_005f514d }
	__asm { test bl, bl }
	__asm { je L_005f514f }
	__asm { L_005f514d: }
	__asm { mov bl, 1 }
	__asm { L_005f514f: }
	__asm { push 0xe1f0e4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dadf8], eax }
	__asm { test eax, eax }
	__asm { je L_005f5163 }
	__asm { test bl, bl }
	__asm { je L_005f5165 }
	__asm { L_005f5163: }
	__asm { mov bl, 1 }
	__asm { L_005f5165: }
	__asm { push 0xe1f0f8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae08], eax }
	__asm { test eax, eax }
	__asm { je L_005f5179 }
	__asm { test bl, bl }
	__asm { je L_005f517b }
	__asm { L_005f5179: }
	__asm { mov bl, 1 }
	__asm { L_005f517b: }
	__asm { push 0xe1f114 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae0c], eax }
	__asm { test eax, eax }
	__asm { je L_005f518f }
	__asm { test bl, bl }
	__asm { je L_005f5191 }
	__asm { L_005f518f: }
	__asm { mov bl, 1 }
	__asm { L_005f5191: }
	__asm { push 0xe1f12c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae14], eax }
	__asm { test eax, eax }
	__asm { je L_005f51a5 }
	__asm { test bl, bl }
	__asm { je L_005f51a7 }
	__asm { L_005f51a5: }
	__asm { mov bl, 1 }
	__asm { L_005f51a7: }
	__asm { push 0xe1f144 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae1c], eax }
	__asm { test eax, eax }
	__asm { je L_005f51bb }
	__asm { test bl, bl }
	__asm { je L_005f51bd }
	__asm { L_005f51bb: }
	__asm { mov bl, 1 }
	__asm { L_005f51bd: }
	__asm { push 0xe1f160 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae2c], eax }
	__asm { test eax, eax }
	__asm { je L_005f51d1 }
	__asm { test bl, bl }
	__asm { je L_005f51d3 }
	__asm { L_005f51d1: }
	__asm { mov bl, 1 }
	__asm { L_005f51d3: }
	__asm { push 0xe1f178 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae30], eax }
	__asm { test eax, eax }
	__asm { je L_005f51e7 }
	__asm { test bl, bl }
	__asm { je L_005f51e9 }
	__asm { L_005f51e7: }
	__asm { mov bl, 1 }
	__asm { L_005f51e9: }
	__asm { push 0xe1f190 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae38], eax }
	__asm { test eax, eax }
	__asm { je L_005f51fd }
	__asm { test bl, bl }
	__asm { je L_005f51ff }
	__asm { L_005f51fd: }
	__asm { mov bl, 1 }
	__asm { L_005f51ff: }
	__asm { push 0xe1f1a8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae44], eax }
	__asm { test eax, eax }
	__asm { je L_005f5213 }
	__asm { test bl, bl }
	__asm { je L_005f5215 }
	__asm { L_005f5213: }
	__asm { mov bl, 1 }
	__asm { L_005f5215: }
	__asm { push 0xe1f1c4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae4c], eax }
	__asm { test eax, eax }
	__asm { je L_005f5229 }
	__asm { test bl, bl }
	__asm { je L_005f522b }
	__asm { L_005f5229: }
	__asm { mov bl, 1 }
	__asm { L_005f522b: }
	__asm { push 0xe1f1d8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae54], eax }
	__asm { test eax, eax }
	__asm { je L_005f523f }
	__asm { test bl, bl }
	__asm { je L_005f5241 }
	__asm { L_005f523f: }
	__asm { mov bl, 1 }
	__asm { L_005f5241: }
	__asm { push 0xe1f1ec }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae60], eax }
	__asm { test eax, eax }
	__asm { je L_005f5255 }
	__asm { test bl, bl }
	__asm { je L_005f5257 }
	__asm { L_005f5255: }
	__asm { mov bl, 1 }
	__asm { L_005f5257: }
	__asm { push 0xe1f200 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae68], eax }
	__asm { test eax, eax }
	__asm { je L_005f526b }
	__asm { test bl, bl }
	__asm { je L_005f526d }
	__asm { L_005f526b: }
	__asm { mov bl, 1 }
	__asm { L_005f526d: }
	__asm { push 0xe1f228 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae70], eax }
	__asm { test eax, eax }
	__asm { je L_005f5281 }
	__asm { test bl, bl }
	__asm { je L_005f5283 }
	__asm { L_005f5281: }
	__asm { mov bl, 1 }
	__asm { L_005f5283: }
	__asm { push 0xe1f248 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae7c], eax }
	__asm { test eax, eax }
	__asm { je L_005f5297 }
	__asm { test bl, bl }
	__asm { je L_005f5299 }
	__asm { L_005f5297: }
	__asm { mov bl, 1 }
	__asm { L_005f5299: }
	__asm { push 0xe1f258 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae84], eax }
	__asm { test eax, eax }
	__asm { je L_005f52ad }
	__asm { test bl, bl }
	__asm { je L_005f52af }
	__asm { L_005f52ad: }
	__asm { mov bl, 1 }
	__asm { L_005f52af: }
	__asm { push 0xe1f26c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae88], eax }
	__asm { test eax, eax }
	__asm { je L_005f52c3 }
	__asm { test bl, bl }
	__asm { je L_005f52c5 }
	__asm { L_005f52c3: }
	__asm { mov bl, 1 }
	__asm { L_005f52c5: }
	__asm { push 0xe1f284 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae90], eax }
	__asm { test eax, eax }
	__asm { je L_005f52de }
	__asm { test bl, bl }
	__asm { jne L_005f52de }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f52de: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daedc[];
extern "C" char g_012daee4[];
extern "C" char g_012daeec[];
extern "C" char g_012daef4[];
extern "C" char g_012daefc[];
extern "C" char g_012daf08[];
extern "C" char g_012daf14[];
extern "C" char g_012daf1c[];
extern "C" char g_012daf20[];
extern "C" char g_012daf30[];
extern "C" char g_012daf38[];
extern "C" char g_012daf40[];
extern "C" char g_012daf4c[];
extern "C" char g_012daf54[];
extern "C" char g_012daf5c[];
extern "C" char g_012daf64[];
extern "C" char g_012daf6c[];
extern "C" char g_012daf78[];
// FUNCTION: ROBLOXSTUDIO 0x005f53b0
extern "C" __declspec(naked) void asm_005f53b0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1f34c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1f35c }
	__asm { mov dword ptr [g_012daedc], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012daee4], eax }
	__asm { test eax, eax }
	__asm { je L_005f53dd }
	__asm { test bl, bl }
	__asm { je L_005f53df }
	__asm { L_005f53dd: }
	__asm { mov bl, 1 }
	__asm { L_005f53df: }
	__asm { push 0xe1f368 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daeec], eax }
	__asm { test eax, eax }
	__asm { je L_005f53f3 }
	__asm { test bl, bl }
	__asm { je L_005f53f5 }
	__asm { L_005f53f3: }
	__asm { mov bl, 1 }
	__asm { L_005f53f5: }
	__asm { push 0xe1f378 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daef4], eax }
	__asm { test eax, eax }
	__asm { je L_005f5409 }
	__asm { test bl, bl }
	__asm { je L_005f540b }
	__asm { L_005f5409: }
	__asm { mov bl, 1 }
	__asm { L_005f540b: }
	__asm { push 0xe1f384 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daefc], eax }
	__asm { test eax, eax }
	__asm { je L_005f541f }
	__asm { test bl, bl }
	__asm { je L_005f5421 }
	__asm { L_005f541f: }
	__asm { mov bl, 1 }
	__asm { L_005f5421: }
	__asm { push 0xe1f394 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf08], eax }
	__asm { test eax, eax }
	__asm { je L_005f5435 }
	__asm { test bl, bl }
	__asm { je L_005f5437 }
	__asm { L_005f5435: }
	__asm { mov bl, 1 }
	__asm { L_005f5437: }
	__asm { push 0xe1f3a0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf14], eax }
	__asm { test eax, eax }
	__asm { je L_005f544b }
	__asm { test bl, bl }
	__asm { je L_005f544d }
	__asm { L_005f544b: }
	__asm { mov bl, 1 }
	__asm { L_005f544d: }
	__asm { push 0xe1f3b0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf1c], eax }
	__asm { test eax, eax }
	__asm { je L_005f5461 }
	__asm { test bl, bl }
	__asm { je L_005f5463 }
	__asm { L_005f5461: }
	__asm { mov bl, 1 }
	__asm { L_005f5463: }
	__asm { push 0xe1f3bc }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf20], eax }
	__asm { test eax, eax }
	__asm { je L_005f5477 }
	__asm { test bl, bl }
	__asm { je L_005f5479 }
	__asm { L_005f5477: }
	__asm { mov bl, 1 }
	__asm { L_005f5479: }
	__asm { push 0xe1f3cc }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf30], eax }
	__asm { test eax, eax }
	__asm { je L_005f548d }
	__asm { test bl, bl }
	__asm { je L_005f548f }
	__asm { L_005f548d: }
	__asm { mov bl, 1 }
	__asm { L_005f548f: }
	__asm { push 0xe1f3e0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf38], eax }
	__asm { test eax, eax }
	__asm { je L_005f54a3 }
	__asm { test bl, bl }
	__asm { je L_005f54a5 }
	__asm { L_005f54a3: }
	__asm { mov bl, 1 }
	__asm { L_005f54a5: }
	__asm { push 0xe1f3f8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf40], eax }
	__asm { test eax, eax }
	__asm { je L_005f54b9 }
	__asm { test bl, bl }
	__asm { je L_005f54bb }
	__asm { L_005f54b9: }
	__asm { mov bl, 1 }
	__asm { L_005f54bb: }
	__asm { push 0xe1f410 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf4c], eax }
	__asm { test eax, eax }
	__asm { je L_005f54cf }
	__asm { test bl, bl }
	__asm { je L_005f54d1 }
	__asm { L_005f54cf: }
	__asm { mov bl, 1 }
	__asm { L_005f54d1: }
	__asm { push 0xe1f424 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf54], eax }
	__asm { test eax, eax }
	__asm { je L_005f54e5 }
	__asm { test bl, bl }
	__asm { je L_005f54e7 }
	__asm { L_005f54e5: }
	__asm { mov bl, 1 }
	__asm { L_005f54e7: }
	__asm { push 0xe1f43c }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf5c], eax }
	__asm { test eax, eax }
	__asm { je L_005f54fb }
	__asm { test bl, bl }
	__asm { je L_005f54fd }
	__asm { L_005f54fb: }
	__asm { mov bl, 1 }
	__asm { L_005f54fd: }
	__asm { push 0xe1f454 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf64], eax }
	__asm { test eax, eax }
	__asm { je L_005f5511 }
	__asm { test bl, bl }
	__asm { je L_005f5513 }
	__asm { L_005f5511: }
	__asm { mov bl, 1 }
	__asm { L_005f5513: }
	__asm { push 0xe1f468 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf6c], eax }
	__asm { test eax, eax }
	__asm { je L_005f5527 }
	__asm { test bl, bl }
	__asm { je L_005f5529 }
	__asm { L_005f5527: }
	__asm { mov bl, 1 }
	__asm { L_005f5529: }
	__asm { push 0xe1f480 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf78], eax }
	__asm { test eax, eax }
	__asm { je L_005f5542 }
	__asm { test bl, bl }
	__asm { jne L_005f5542 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f5542: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9fec[];
extern "C" char g_012daf80[];
extern "C" char g_012daf88[];
extern "C" char g_012daf8c[];
extern "C" char g_012daf9c[];
extern "C" char g_012dafa4[];
extern "C" char g_012dafa8[];
extern "C" char g_012dafb8[];
extern "C" char g_012dafc0[];
extern "C" char g_012dafc8[];
extern "C" char g_012dafcc[];
extern "C" char g_012dafdc[];
extern "C" char g_012dafe0[];
extern "C" char g_012dafec[];
extern "C" char g_012daff0[];
extern "C" char g_012db000[];
extern "C" char g_012db008[];
extern "C" char g_012db00c[];
extern "C" char g_012db014[];
extern "C" char g_012db01c[];
extern "C" char g_012db02c[];
extern "C" char g_012db030[];
extern "C" char g_012db038[];
extern "C" char g_012db044[];
extern "C" char g_012db050[];
extern "C" char g_012db054[];
extern "C" char g_012db05c[];
extern "C" char g_012db06c[];
extern "C" char g_012db074[];
extern "C" char g_012db07c[];
extern "C" char g_012db084[];
extern "C" char g_012db090[];
extern "C" char g_012db098[];
// FUNCTION: ROBLOXSTUDIO 0x005f5550
extern "C" __declspec(naked) void asm_005f5550()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1d0ec }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1f498 }
	__asm { mov dword ptr [g_012d9fec], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf80], eax }
	__asm { test eax, eax }
	__asm { je L_005f557d }
	__asm { test bl, bl }
	__asm { je L_005f557f }
	__asm { L_005f557d: }
	__asm { mov bl, 1 }
	__asm { L_005f557f: }
	__asm { push 0xe1f4a8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf88], eax }
	__asm { test eax, eax }
	__asm { je L_005f5593 }
	__asm { test bl, bl }
	__asm { je L_005f5595 }
	__asm { L_005f5593: }
	__asm { mov bl, 1 }
	__asm { L_005f5595: }
	__asm { push 0xe1f4b8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf8c], eax }
	__asm { test eax, eax }
	__asm { je L_005f55a9 }
	__asm { test bl, bl }
	__asm { je L_005f55ab }
	__asm { L_005f55a9: }
	__asm { mov bl, 1 }
	__asm { L_005f55ab: }
	__asm { push 0xe1f4d0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf9c], eax }
	__asm { test eax, eax }
	__asm { je L_005f55bf }
	__asm { test bl, bl }
	__asm { je L_005f55c1 }
	__asm { L_005f55bf: }
	__asm { mov bl, 1 }
	__asm { L_005f55c1: }
	__asm { push 0xe1f4e8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafa4], eax }
	__asm { test eax, eax }
	__asm { je L_005f55d5 }
	__asm { test bl, bl }
	__asm { je L_005f55d7 }
	__asm { L_005f55d5: }
	__asm { mov bl, 1 }
	__asm { L_005f55d7: }
	__asm { push 0xe1f500 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafa8], eax }
	__asm { test eax, eax }
	__asm { je L_005f55eb }
	__asm { test bl, bl }
	__asm { je L_005f55ed }
	__asm { L_005f55eb: }
	__asm { mov bl, 1 }
	__asm { L_005f55ed: }
	__asm { push 0xe1f518 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafb8], eax }
	__asm { test eax, eax }
	__asm { je L_005f5601 }
	__asm { test bl, bl }
	__asm { je L_005f5603 }
	__asm { L_005f5601: }
	__asm { mov bl, 1 }
	__asm { L_005f5603: }
	__asm { push 0xe1f530 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafc0], eax }
	__asm { test eax, eax }
	__asm { je L_005f5617 }
	__asm { test bl, bl }
	__asm { je L_005f5619 }
	__asm { L_005f5617: }
	__asm { mov bl, 1 }
	__asm { L_005f5619: }
	__asm { push 0xe1f54c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafc8], eax }
	__asm { test eax, eax }
	__asm { je L_005f562d }
	__asm { test bl, bl }
	__asm { je L_005f562f }
	__asm { L_005f562d: }
	__asm { mov bl, 1 }
	__asm { L_005f562f: }
	__asm { push 0xe1f564 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafcc], eax }
	__asm { test eax, eax }
	__asm { je L_005f5643 }
	__asm { test bl, bl }
	__asm { je L_005f5645 }
	__asm { L_005f5643: }
	__asm { mov bl, 1 }
	__asm { L_005f5645: }
	__asm { push 0xe1f580 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafdc], eax }
	__asm { test eax, eax }
	__asm { je L_005f5659 }
	__asm { test bl, bl }
	__asm { je L_005f565b }
	__asm { L_005f5659: }
	__asm { mov bl, 1 }
	__asm { L_005f565b: }
	__asm { push 0xe1f594 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafe0], eax }
	__asm { test eax, eax }
	__asm { je L_005f566f }
	__asm { test bl, bl }
	__asm { je L_005f5671 }
	__asm { L_005f566f: }
	__asm { mov bl, 1 }
	__asm { L_005f5671: }
	__asm { push 0xe1f5a8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafec], eax }
	__asm { test eax, eax }
	__asm { je L_005f5685 }
	__asm { test bl, bl }
	__asm { je L_005f5687 }
	__asm { L_005f5685: }
	__asm { mov bl, 1 }
	__asm { L_005f5687: }
	__asm { push 0xe1f5c4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daff0], eax }
	__asm { test eax, eax }
	__asm { je L_005f569b }
	__asm { test bl, bl }
	__asm { je L_005f569d }
	__asm { L_005f569b: }
	__asm { mov bl, 1 }
	__asm { L_005f569d: }
	__asm { push 0xe1f5e0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db000], eax }
	__asm { test eax, eax }
	__asm { je L_005f56b1 }
	__asm { test bl, bl }
	__asm { je L_005f56b3 }
	__asm { L_005f56b1: }
	__asm { mov bl, 1 }
	__asm { L_005f56b3: }
	__asm { push 0xe1f5f0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db008], eax }
	__asm { test eax, eax }
	__asm { je L_005f56c7 }
	__asm { test bl, bl }
	__asm { je L_005f56c9 }
	__asm { L_005f56c7: }
	__asm { mov bl, 1 }
	__asm { L_005f56c9: }
	__asm { push 0xe1f60c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db00c], eax }
	__asm { test eax, eax }
	__asm { je L_005f56dd }
	__asm { test bl, bl }
	__asm { je L_005f56df }
	__asm { L_005f56dd: }
	__asm { mov bl, 1 }
	__asm { L_005f56df: }
	__asm { push 0xe1f628 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db014], eax }
	__asm { test eax, eax }
	__asm { je L_005f56f3 }
	__asm { test bl, bl }
	__asm { je L_005f56f5 }
	__asm { L_005f56f3: }
	__asm { mov bl, 1 }
	__asm { L_005f56f5: }
	__asm { push 0xe1f640 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db01c], eax }
	__asm { test eax, eax }
	__asm { je L_005f5709 }
	__asm { test bl, bl }
	__asm { je L_005f570b }
	__asm { L_005f5709: }
	__asm { mov bl, 1 }
	__asm { L_005f570b: }
	__asm { push 0xe1f65c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db02c], eax }
	__asm { test eax, eax }
	__asm { je L_005f571f }
	__asm { test bl, bl }
	__asm { je L_005f5721 }
	__asm { L_005f571f: }
	__asm { mov bl, 1 }
	__asm { L_005f5721: }
	__asm { push 0xe1f678 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db030], eax }
	__asm { test eax, eax }
	__asm { je L_005f5735 }
	__asm { test bl, bl }
	__asm { je L_005f5737 }
	__asm { L_005f5735: }
	__asm { mov bl, 1 }
	__asm { L_005f5737: }
	__asm { push 0xe1f688 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db038], eax }
	__asm { test eax, eax }
	__asm { je L_005f574b }
	__asm { test bl, bl }
	__asm { je L_005f574d }
	__asm { L_005f574b: }
	__asm { mov bl, 1 }
	__asm { L_005f574d: }
	__asm { push 0xe1f6a4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db044], eax }
	__asm { test eax, eax }
	__asm { je L_005f5761 }
	__asm { test bl, bl }
	__asm { je L_005f5763 }
	__asm { L_005f5761: }
	__asm { mov bl, 1 }
	__asm { L_005f5763: }
	__asm { push 0xe1f6c0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db050], eax }
	__asm { test eax, eax }
	__asm { je L_005f5777 }
	__asm { test bl, bl }
	__asm { je L_005f5779 }
	__asm { L_005f5777: }
	__asm { mov bl, 1 }
	__asm { L_005f5779: }
	__asm { push 0xe1f6cc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db054], eax }
	__asm { test eax, eax }
	__asm { je L_005f578d }
	__asm { test bl, bl }
	__asm { je L_005f578f }
	__asm { L_005f578d: }
	__asm { mov bl, 1 }
	__asm { L_005f578f: }
	__asm { push 0xe1f6e4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db05c], eax }
	__asm { test eax, eax }
	__asm { je L_005f57a3 }
	__asm { test bl, bl }
	__asm { je L_005f57a5 }
	__asm { L_005f57a3: }
	__asm { mov bl, 1 }
	__asm { L_005f57a5: }
	__asm { push 0xe1f6fc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db06c], eax }
	__asm { test eax, eax }
	__asm { je L_005f57b9 }
	__asm { test bl, bl }
	__asm { je L_005f57bb }
	__asm { L_005f57b9: }
	__asm { mov bl, 1 }
	__asm { L_005f57bb: }
	__asm { push 0xe1f714 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db074], eax }
	__asm { test eax, eax }
	__asm { je L_005f57cf }
	__asm { test bl, bl }
	__asm { je L_005f57d1 }
	__asm { L_005f57cf: }
	__asm { mov bl, 1 }
	__asm { L_005f57d1: }
	__asm { push 0xe1f720 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db07c], eax }
	__asm { test eax, eax }
	__asm { je L_005f57e5 }
	__asm { test bl, bl }
	__asm { je L_005f57e7 }
	__asm { L_005f57e5: }
	__asm { mov bl, 1 }
	__asm { L_005f57e7: }
	__asm { push 0xe1f72c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db084], eax }
	__asm { test eax, eax }
	__asm { je L_005f57fb }
	__asm { test bl, bl }
	__asm { je L_005f57fd }
	__asm { L_005f57fb: }
	__asm { mov bl, 1 }
	__asm { L_005f57fd: }
	__asm { push 0xe1f740 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db090], eax }
	__asm { test eax, eax }
	__asm { je L_005f5811 }
	__asm { test bl, bl }
	__asm { je L_005f5813 }
	__asm { L_005f5811: }
	__asm { mov bl, 1 }
	__asm { L_005f5813: }
	__asm { push 0xe1f750 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db098], eax }
	__asm { test eax, eax }
	__asm { je L_005f582c }
	__asm { test bl, bl }
	__asm { jne L_005f582c }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f582c: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db1a0[];
extern "C" char g_012db1ac[];
extern "C" char g_012db1b8[];
extern "C" char g_012db1bc[];
extern "C" char g_012db1c4[];
extern "C" char g_012db1d4[];
extern "C" char g_012db1d8[];
extern "C" char g_012db1e0[];
extern "C" char g_012db1e8[];
extern "C" char g_012db1f4[];
extern "C" char g_012db200[];
extern "C" char g_012db204[];
extern "C" char g_012db20c[];
extern "C" char g_012db218[];
extern "C" char g_012db224[];
extern "C" char g_012db22c[];
extern "C" char g_012db234[];
extern "C" char g_012db238[];
extern "C" char g_012db244[];
extern "C" char g_012db24c[];
extern "C" char g_012db258[];
extern "C" char g_012db260[];
extern "C" char g_012db268[];
extern "C" char g_012db270[];
extern "C" char g_012db27c[];
extern "C" char g_012db284[];
extern "C" char g_012db28c[];
extern "C" char g_012db294[];
extern "C" char g_012db2a0[];
extern "C" char g_012db2a4[];
extern "C" char g_012db2b4[];
extern "C" char g_012db2bc[];
extern "C" char g_012db2c0[];
extern "C" char g_012db2d0[];
// FUNCTION: ROBLOXSTUDIO 0x005f5b50
extern "C" __declspec(naked) void asm_005f5b50()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe1fa24 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe1fa38 }
	__asm { mov dword ptr [g_012db1a0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1ac], eax }
	__asm { test eax, eax }
	__asm { je L_005f5b7d }
	__asm { test bl, bl }
	__asm { je L_005f5b7f }
	__asm { L_005f5b7d: }
	__asm { mov bl, 1 }
	__asm { L_005f5b7f: }
	__asm { push 0xe1fa54 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1b8], eax }
	__asm { test eax, eax }
	__asm { je L_005f5b93 }
	__asm { test bl, bl }
	__asm { je L_005f5b95 }
	__asm { L_005f5b93: }
	__asm { mov bl, 1 }
	__asm { L_005f5b95: }
	__asm { push 0xe1fa6c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1bc], eax }
	__asm { test eax, eax }
	__asm { je L_005f5ba9 }
	__asm { test bl, bl }
	__asm { je L_005f5bab }
	__asm { L_005f5ba9: }
	__asm { mov bl, 1 }
	__asm { L_005f5bab: }
	__asm { push 0xe1fa84 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1c4], eax }
	__asm { test eax, eax }
	__asm { je L_005f5bbf }
	__asm { test bl, bl }
	__asm { je L_005f5bc1 }
	__asm { L_005f5bbf: }
	__asm { mov bl, 1 }
	__asm { L_005f5bc1: }
	__asm { push 0xe1fa9c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1d4], eax }
	__asm { test eax, eax }
	__asm { je L_005f5bd5 }
	__asm { test bl, bl }
	__asm { je L_005f5bd7 }
	__asm { L_005f5bd5: }
	__asm { mov bl, 1 }
	__asm { L_005f5bd7: }
	__asm { push 0xe1fab4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1d8], eax }
	__asm { test eax, eax }
	__asm { je L_005f5beb }
	__asm { test bl, bl }
	__asm { je L_005f5bed }
	__asm { L_005f5beb: }
	__asm { mov bl, 1 }
	__asm { L_005f5bed: }
	__asm { push 0xe1facc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1e0], eax }
	__asm { test eax, eax }
	__asm { je L_005f5c01 }
	__asm { test bl, bl }
	__asm { je L_005f5c03 }
	__asm { L_005f5c01: }
	__asm { mov bl, 1 }
	__asm { L_005f5c03: }
	__asm { push 0xe1fae4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1e8], eax }
	__asm { test eax, eax }
	__asm { je L_005f5c17 }
	__asm { test bl, bl }
	__asm { je L_005f5c19 }
	__asm { L_005f5c17: }
	__asm { mov bl, 1 }
	__asm { L_005f5c19: }
	__asm { push 0xe1fafc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1f4], eax }
	__asm { test eax, eax }
	__asm { je L_005f5c2d }
	__asm { test bl, bl }
	__asm { je L_005f5c2f }
	__asm { L_005f5c2d: }
	__asm { mov bl, 1 }
	__asm { L_005f5c2f: }
	__asm { push 0xe1fb14 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db200], eax }
	__asm { test eax, eax }
	__asm { je L_005f5c43 }
	__asm { test bl, bl }
	__asm { je L_005f5c45 }
	__asm { L_005f5c43: }
	__asm { mov bl, 1 }
	__asm { L_005f5c45: }
	__asm { push 0xe1fb2c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db204], eax }
	__asm { test eax, eax }
	__asm { je L_005f5c59 }
	__asm { test bl, bl }
	__asm { je L_005f5c5b }
	__asm { L_005f5c59: }
	__asm { mov bl, 1 }
	__asm { L_005f5c5b: }
	__asm { push 0xe1fb44 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db20c], eax }
	__asm { test eax, eax }
	__asm { je L_005f5c6f }
	__asm { test bl, bl }
	__asm { je L_005f5c71 }
	__asm { L_005f5c6f: }
	__asm { mov bl, 1 }
	__asm { L_005f5c71: }
	__asm { push 0xe1fb5c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db218], eax }
	__asm { test eax, eax }
	__asm { je L_005f5c85 }
	__asm { test bl, bl }
	__asm { je L_005f5c87 }
	__asm { L_005f5c85: }
	__asm { mov bl, 1 }
	__asm { L_005f5c87: }
	__asm { push 0xe1fb74 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db224], eax }
	__asm { test eax, eax }
	__asm { je L_005f5c9b }
	__asm { test bl, bl }
	__asm { je L_005f5c9d }
	__asm { L_005f5c9b: }
	__asm { mov bl, 1 }
	__asm { L_005f5c9d: }
	__asm { push 0xe1fb8c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db22c], eax }
	__asm { test eax, eax }
	__asm { je L_005f5cb1 }
	__asm { test bl, bl }
	__asm { je L_005f5cb3 }
	__asm { L_005f5cb1: }
	__asm { mov bl, 1 }
	__asm { L_005f5cb3: }
	__asm { push 0xe1fba4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db234], eax }
	__asm { test eax, eax }
	__asm { je L_005f5cc7 }
	__asm { test bl, bl }
	__asm { je L_005f5cc9 }
	__asm { L_005f5cc7: }
	__asm { mov bl, 1 }
	__asm { L_005f5cc9: }
	__asm { push 0xe1fbbc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db238], eax }
	__asm { test eax, eax }
	__asm { je L_005f5cdd }
	__asm { test bl, bl }
	__asm { je L_005f5cdf }
	__asm { L_005f5cdd: }
	__asm { mov bl, 1 }
	__asm { L_005f5cdf: }
	__asm { push 0xe1fbd4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db244], eax }
	__asm { test eax, eax }
	__asm { je L_005f5cf3 }
	__asm { test bl, bl }
	__asm { je L_005f5cf5 }
	__asm { L_005f5cf3: }
	__asm { mov bl, 1 }
	__asm { L_005f5cf5: }
	__asm { push 0xe1fbec }
	__asm { call esi }
	__asm { mov dword ptr [g_012db24c], eax }
	__asm { test eax, eax }
	__asm { je L_005f5d09 }
	__asm { test bl, bl }
	__asm { je L_005f5d0b }
	__asm { L_005f5d09: }
	__asm { mov bl, 1 }
	__asm { L_005f5d0b: }
	__asm { push 0xe1fc04 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db258], eax }
	__asm { test eax, eax }
	__asm { je L_005f5d1f }
	__asm { test bl, bl }
	__asm { je L_005f5d21 }
	__asm { L_005f5d1f: }
	__asm { mov bl, 1 }
	__asm { L_005f5d21: }
	__asm { push 0xe1fc1c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db260], eax }
	__asm { test eax, eax }
	__asm { je L_005f5d35 }
	__asm { test bl, bl }
	__asm { je L_005f5d37 }
	__asm { L_005f5d35: }
	__asm { mov bl, 1 }
	__asm { L_005f5d37: }
	__asm { push 0xe1fc34 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db268], eax }
	__asm { test eax, eax }
	__asm { je L_005f5d4b }
	__asm { test bl, bl }
	__asm { je L_005f5d4d }
	__asm { L_005f5d4b: }
	__asm { mov bl, 1 }
	__asm { L_005f5d4d: }
	__asm { push 0xe1fc4c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db270], eax }
	__asm { test eax, eax }
	__asm { je L_005f5d61 }
	__asm { test bl, bl }
	__asm { je L_005f5d63 }
	__asm { L_005f5d61: }
	__asm { mov bl, 1 }
	__asm { L_005f5d63: }
	__asm { push 0xe1fc64 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db27c], eax }
	__asm { test eax, eax }
	__asm { je L_005f5d77 }
	__asm { test bl, bl }
	__asm { je L_005f5d79 }
	__asm { L_005f5d77: }
	__asm { mov bl, 1 }
	__asm { L_005f5d79: }
	__asm { push 0xe1fc7c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db284], eax }
	__asm { test eax, eax }
	__asm { je L_005f5d8d }
	__asm { test bl, bl }
	__asm { je L_005f5d8f }
	__asm { L_005f5d8d: }
	__asm { mov bl, 1 }
	__asm { L_005f5d8f: }
	__asm { push 0xe1fc94 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db28c], eax }
	__asm { test eax, eax }
	__asm { je L_005f5da3 }
	__asm { test bl, bl }
	__asm { je L_005f5da5 }
	__asm { L_005f5da3: }
	__asm { mov bl, 1 }
	__asm { L_005f5da5: }
	__asm { push 0xe1fcac }
	__asm { call esi }
	__asm { mov dword ptr [g_012db294], eax }
	__asm { test eax, eax }
	__asm { je L_005f5db9 }
	__asm { test bl, bl }
	__asm { je L_005f5dbb }
	__asm { L_005f5db9: }
	__asm { mov bl, 1 }
	__asm { L_005f5dbb: }
	__asm { push 0xe1fcc4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db2a0], eax }
	__asm { test eax, eax }
	__asm { je L_005f5dcf }
	__asm { test bl, bl }
	__asm { je L_005f5dd1 }
	__asm { L_005f5dcf: }
	__asm { mov bl, 1 }
	__asm { L_005f5dd1: }
	__asm { push 0xe1fcdc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db2a4], eax }
	__asm { test eax, eax }
	__asm { je L_005f5de5 }
	__asm { test bl, bl }
	__asm { je L_005f5de7 }
	__asm { L_005f5de5: }
	__asm { mov bl, 1 }
	__asm { L_005f5de7: }
	__asm { push 0xe1fcf4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db2b4], eax }
	__asm { test eax, eax }
	__asm { je L_005f5dfb }
	__asm { test bl, bl }
	__asm { je L_005f5dfd }
	__asm { L_005f5dfb: }
	__asm { mov bl, 1 }
	__asm { L_005f5dfd: }
	__asm { push 0xe1fd0c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db2bc], eax }
	__asm { test eax, eax }
	__asm { je L_005f5e11 }
	__asm { test bl, bl }
	__asm { je L_005f5e13 }
	__asm { L_005f5e11: }
	__asm { mov bl, 1 }
	__asm { L_005f5e13: }
	__asm { push 0xe1fd24 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db2c0], eax }
	__asm { test eax, eax }
	__asm { je L_005f5e27 }
	__asm { test bl, bl }
	__asm { je L_005f5e29 }
	__asm { L_005f5e27: }
	__asm { mov bl, 1 }
	__asm { L_005f5e29: }
	__asm { push 0xe1fd3c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db2d0], eax }
	__asm { test eax, eax }
	__asm { je L_005f5e42 }
	__asm { test bl, bl }
	__asm { jne L_005f5e42 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f5e42: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db430[];
extern "C" char g_012db440[];
extern "C" char g_012db44c[];
extern "C" char g_012db454[];
extern "C" char g_012db45c[];
extern "C" char g_012db474[];
extern "C" char g_012db478[];
extern "C" char g_012db48c[];
extern "C" char g_012db498[];
extern "C" char g_012db4a8[];
extern "C" char g_012db4ac[];
extern "C" char g_012db4bc[];
extern "C" char g_012db4c4[];
extern "C" char g_012db4dc[];
// FUNCTION: ROBLOXSTUDIO 0x005f61f0
extern "C" __declspec(naked) void asm_005f61f0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2009c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe200ac }
	__asm { mov dword ptr [g_012db430], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db440], eax }
	__asm { test eax, eax }
	__asm { je L_005f621d }
	__asm { test bl, bl }
	__asm { je L_005f621f }
	__asm { L_005f621d: }
	__asm { mov bl, 1 }
	__asm { L_005f621f: }
	__asm { push 0xe200c0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db44c], eax }
	__asm { test eax, eax }
	__asm { je L_005f6233 }
	__asm { test bl, bl }
	__asm { je L_005f6235 }
	__asm { L_005f6233: }
	__asm { mov bl, 1 }
	__asm { L_005f6235: }
	__asm { push 0xe200d0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db454], eax }
	__asm { test eax, eax }
	__asm { je L_005f6249 }
	__asm { test bl, bl }
	__asm { je L_005f624b }
	__asm { L_005f6249: }
	__asm { mov bl, 1 }
	__asm { L_005f624b: }
	__asm { push 0xe200ec }
	__asm { call esi }
	__asm { mov dword ptr [g_012db45c], eax }
	__asm { test eax, eax }
	__asm { je L_005f625f }
	__asm { test bl, bl }
	__asm { je L_005f6261 }
	__asm { L_005f625f: }
	__asm { mov bl, 1 }
	__asm { L_005f6261: }
	__asm { push 0xe20108 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db474], eax }
	__asm { test eax, eax }
	__asm { je L_005f6275 }
	__asm { test bl, bl }
	__asm { je L_005f6277 }
	__asm { L_005f6275: }
	__asm { mov bl, 1 }
	__asm { L_005f6277: }
	__asm { push 0xe20120 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db478], eax }
	__asm { test eax, eax }
	__asm { je L_005f628b }
	__asm { test bl, bl }
	__asm { je L_005f628d }
	__asm { L_005f628b: }
	__asm { mov bl, 1 }
	__asm { L_005f628d: }
	__asm { push 0xe20138 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db48c], eax }
	__asm { test eax, eax }
	__asm { je L_005f62a1 }
	__asm { test bl, bl }
	__asm { je L_005f62a3 }
	__asm { L_005f62a1: }
	__asm { mov bl, 1 }
	__asm { L_005f62a3: }
	__asm { push 0xe20144 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db498], eax }
	__asm { test eax, eax }
	__asm { je L_005f62b7 }
	__asm { test bl, bl }
	__asm { je L_005f62b9 }
	__asm { L_005f62b7: }
	__asm { mov bl, 1 }
	__asm { L_005f62b9: }
	__asm { push 0xe2015c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db4a8], eax }
	__asm { test eax, eax }
	__asm { je L_005f62cd }
	__asm { test bl, bl }
	__asm { je L_005f62cf }
	__asm { L_005f62cd: }
	__asm { mov bl, 1 }
	__asm { L_005f62cf: }
	__asm { push 0xe20174 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db4ac], eax }
	__asm { test eax, eax }
	__asm { je L_005f62e3 }
	__asm { test bl, bl }
	__asm { je L_005f62e5 }
	__asm { L_005f62e3: }
	__asm { mov bl, 1 }
	__asm { L_005f62e5: }
	__asm { push 0xe20188 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db4bc], eax }
	__asm { test eax, eax }
	__asm { je L_005f62f9 }
	__asm { test bl, bl }
	__asm { je L_005f62fb }
	__asm { L_005f62f9: }
	__asm { mov bl, 1 }
	__asm { L_005f62fb: }
	__asm { push 0xe201a0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db4c4], eax }
	__asm { test eax, eax }
	__asm { je L_005f630f }
	__asm { test bl, bl }
	__asm { je L_005f6311 }
	__asm { L_005f630f: }
	__asm { mov bl, 1 }
	__asm { L_005f6311: }
	__asm { push 0xe201b4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db4dc], eax }
	__asm { test eax, eax }
	__asm { je L_005f632a }
	__asm { test bl, bl }
	__asm { jne L_005f632a }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f632a: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d99d8[];
extern "C" char g_012d99e4[];
extern "C" char g_012d99e8[];
extern "C" char g_012d99f4[];
extern "C" char g_012d99fc[];
extern "C" char g_012d9a00[];
extern "C" char g_012d9a08[];
extern "C" char g_012d9a14[];
extern "C" char g_012d9a1c[];
extern "C" char g_012d9a24[];
extern "C" char g_012d9a2c[];
extern "C" char g_012d9a34[];
extern "C" char g_012d9a38[];
extern "C" char g_012d9a40[];
extern "C" char g_012d9a4c[];
extern "C" char g_012d9a50[];
extern "C" char g_012d9a5c[];
extern "C" char g_012d9a64[];
extern "C" char g_012d9a68[];
extern "C" char g_012d9a74[];
extern "C" char g_012d9a7c[];
extern "C" char g_012d9a80[];
extern "C" char g_012d9a88[];
extern "C" char g_012d9a94[];
extern "C" char g_012d9a9c[];
extern "C" char g_012d9aa4[];
extern "C" char g_012d9aac[];
extern "C" char g_012d9ab0[];
extern "C" char g_012d9ab8[];
extern "C" char g_012d9ac0[];
extern "C" char g_012d9acc[];
extern "C" char g_012d9ad4[];
extern "C" char g_012d9ad8[];
extern "C" char g_012d9ae0[];
extern "C" char g_012d9aec[];
extern "C" char g_012d9af4[];
extern "C" char g_012d9afc[];
extern "C" char g_012d9b04[];
// FUNCTION: ROBLOXSTUDIO 0x005f7e20
extern "C" __declspec(naked) void asm_005f7e20()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe21b94 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe21ba0 }
	__asm { mov dword ptr [g_012d99d8], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d99e4], eax }
	__asm { test eax, eax }
	__asm { je L_005f7e4d }
	__asm { test bl, bl }
	__asm { je L_005f7e4f }
	__asm { L_005f7e4d: }
	__asm { mov bl, 1 }
	__asm { L_005f7e4f: }
	__asm { push 0xe21bb0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d99e8], eax }
	__asm { test eax, eax }
	__asm { je L_005f7e63 }
	__asm { test bl, bl }
	__asm { je L_005f7e65 }
	__asm { L_005f7e63: }
	__asm { mov bl, 1 }
	__asm { L_005f7e65: }
	__asm { push 0xe21bbc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d99f4], eax }
	__asm { test eax, eax }
	__asm { je L_005f7e79 }
	__asm { test bl, bl }
	__asm { je L_005f7e7b }
	__asm { L_005f7e79: }
	__asm { mov bl, 1 }
	__asm { L_005f7e7b: }
	__asm { push 0xe21bcc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d99fc], eax }
	__asm { test eax, eax }
	__asm { je L_005f7e8f }
	__asm { test bl, bl }
	__asm { je L_005f7e91 }
	__asm { L_005f7e8f: }
	__asm { mov bl, 1 }
	__asm { L_005f7e91: }
	__asm { push 0xe21be0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a00], eax }
	__asm { test eax, eax }
	__asm { je L_005f7ea5 }
	__asm { test bl, bl }
	__asm { je L_005f7ea7 }
	__asm { L_005f7ea5: }
	__asm { mov bl, 1 }
	__asm { L_005f7ea7: }
	__asm { push 0xe21bf8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a08], eax }
	__asm { test eax, eax }
	__asm { je L_005f7ebb }
	__asm { test bl, bl }
	__asm { je L_005f7ebd }
	__asm { L_005f7ebb: }
	__asm { mov bl, 1 }
	__asm { L_005f7ebd: }
	__asm { push 0xe21c0c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a14], eax }
	__asm { test eax, eax }
	__asm { je L_005f7ed1 }
	__asm { test bl, bl }
	__asm { je L_005f7ed3 }
	__asm { L_005f7ed1: }
	__asm { mov bl, 1 }
	__asm { L_005f7ed3: }
	__asm { push 0xe21c24 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a1c], eax }
	__asm { test eax, eax }
	__asm { je L_005f7ee7 }
	__asm { test bl, bl }
	__asm { je L_005f7ee9 }
	__asm { L_005f7ee7: }
	__asm { mov bl, 1 }
	__asm { L_005f7ee9: }
	__asm { push 0xe21c38 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a24], eax }
	__asm { test eax, eax }
	__asm { je L_005f7efd }
	__asm { test bl, bl }
	__asm { je L_005f7eff }
	__asm { L_005f7efd: }
	__asm { mov bl, 1 }
	__asm { L_005f7eff: }
	__asm { push 0xe21c50 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a2c], eax }
	__asm { test eax, eax }
	__asm { je L_005f7f13 }
	__asm { test bl, bl }
	__asm { je L_005f7f15 }
	__asm { L_005f7f13: }
	__asm { mov bl, 1 }
	__asm { L_005f7f15: }
	__asm { push 0xe21c64 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a34], eax }
	__asm { test eax, eax }
	__asm { je L_005f7f29 }
	__asm { test bl, bl }
	__asm { je L_005f7f2b }
	__asm { L_005f7f29: }
	__asm { mov bl, 1 }
	__asm { L_005f7f2b: }
	__asm { push 0xe21c7c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a38], eax }
	__asm { test eax, eax }
	__asm { je L_005f7f3f }
	__asm { test bl, bl }
	__asm { je L_005f7f41 }
	__asm { L_005f7f3f: }
	__asm { mov bl, 1 }
	__asm { L_005f7f41: }
	__asm { push 0xe21c8c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a40], eax }
	__asm { test eax, eax }
	__asm { je L_005f7f55 }
	__asm { test bl, bl }
	__asm { je L_005f7f57 }
	__asm { L_005f7f55: }
	__asm { mov bl, 1 }
	__asm { L_005f7f57: }
	__asm { push 0xe21c9c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a4c], eax }
	__asm { test eax, eax }
	__asm { je L_005f7f6b }
	__asm { test bl, bl }
	__asm { je L_005f7f6d }
	__asm { L_005f7f6b: }
	__asm { mov bl, 1 }
	__asm { L_005f7f6d: }
	__asm { push 0xe21cb4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a50], eax }
	__asm { test eax, eax }
	__asm { je L_005f7f81 }
	__asm { test bl, bl }
	__asm { je L_005f7f83 }
	__asm { L_005f7f81: }
	__asm { mov bl, 1 }
	__asm { L_005f7f83: }
	__asm { push 0xe21ccc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a5c], eax }
	__asm { test eax, eax }
	__asm { je L_005f7f97 }
	__asm { test bl, bl }
	__asm { je L_005f7f99 }
	__asm { L_005f7f97: }
	__asm { mov bl, 1 }
	__asm { L_005f7f99: }
	__asm { push 0xe21cdc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a64], eax }
	__asm { test eax, eax }
	__asm { je L_005f7fad }
	__asm { test bl, bl }
	__asm { je L_005f7faf }
	__asm { L_005f7fad: }
	__asm { mov bl, 1 }
	__asm { L_005f7faf: }
	__asm { push 0xe21cec }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a68], eax }
	__asm { test eax, eax }
	__asm { je L_005f7fc3 }
	__asm { test bl, bl }
	__asm { je L_005f7fc5 }
	__asm { L_005f7fc3: }
	__asm { mov bl, 1 }
	__asm { L_005f7fc5: }
	__asm { push 0xe21cfc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a74], eax }
	__asm { test eax, eax }
	__asm { je L_005f7fd9 }
	__asm { test bl, bl }
	__asm { je L_005f7fdb }
	__asm { L_005f7fd9: }
	__asm { mov bl, 1 }
	__asm { L_005f7fdb: }
	__asm { push 0xe21d0c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a7c], eax }
	__asm { test eax, eax }
	__asm { je L_005f7fef }
	__asm { test bl, bl }
	__asm { je L_005f7ff1 }
	__asm { L_005f7fef: }
	__asm { mov bl, 1 }
	__asm { L_005f7ff1: }
	__asm { push 0xe21d1c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a80], eax }
	__asm { test eax, eax }
	__asm { je L_005f8005 }
	__asm { test bl, bl }
	__asm { je L_005f8007 }
	__asm { L_005f8005: }
	__asm { mov bl, 1 }
	__asm { L_005f8007: }
	__asm { push 0xe21d2c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a88], eax }
	__asm { test eax, eax }
	__asm { je L_005f801b }
	__asm { test bl, bl }
	__asm { je L_005f801d }
	__asm { L_005f801b: }
	__asm { mov bl, 1 }
	__asm { L_005f801d: }
	__asm { push 0xe21d3c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a94], eax }
	__asm { test eax, eax }
	__asm { je L_005f8031 }
	__asm { test bl, bl }
	__asm { je L_005f8033 }
	__asm { L_005f8031: }
	__asm { mov bl, 1 }
	__asm { L_005f8033: }
	__asm { push 0xe21d4c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9a9c], eax }
	__asm { test eax, eax }
	__asm { je L_005f8047 }
	__asm { test bl, bl }
	__asm { je L_005f8049 }
	__asm { L_005f8047: }
	__asm { mov bl, 1 }
	__asm { L_005f8049: }
	__asm { push 0xe21d60 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9aa4], eax }
	__asm { test eax, eax }
	__asm { je L_005f805d }
	__asm { test bl, bl }
	__asm { je L_005f805f }
	__asm { L_005f805d: }
	__asm { mov bl, 1 }
	__asm { L_005f805f: }
	__asm { push 0xe21d74 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9aac], eax }
	__asm { test eax, eax }
	__asm { je L_005f8073 }
	__asm { test bl, bl }
	__asm { je L_005f8075 }
	__asm { L_005f8073: }
	__asm { mov bl, 1 }
	__asm { L_005f8075: }
	__asm { push 0xe21d88 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ab0], eax }
	__asm { test eax, eax }
	__asm { je L_005f8089 }
	__asm { test bl, bl }
	__asm { je L_005f808b }
	__asm { L_005f8089: }
	__asm { mov bl, 1 }
	__asm { L_005f808b: }
	__asm { push 0xe21d9c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ab8], eax }
	__asm { test eax, eax }
	__asm { je L_005f809f }
	__asm { test bl, bl }
	__asm { je L_005f80a1 }
	__asm { L_005f809f: }
	__asm { mov bl, 1 }
	__asm { L_005f80a1: }
	__asm { push 0xe21db0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ac0], eax }
	__asm { test eax, eax }
	__asm { je L_005f80b5 }
	__asm { test bl, bl }
	__asm { je L_005f80b7 }
	__asm { L_005f80b5: }
	__asm { mov bl, 1 }
	__asm { L_005f80b7: }
	__asm { push 0xe21dc4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9acc], eax }
	__asm { test eax, eax }
	__asm { je L_005f80cb }
	__asm { test bl, bl }
	__asm { je L_005f80cd }
	__asm { L_005f80cb: }
	__asm { mov bl, 1 }
	__asm { L_005f80cd: }
	__asm { push 0xe21dd8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ad4], eax }
	__asm { test eax, eax }
	__asm { je L_005f80e1 }
	__asm { test bl, bl }
	__asm { je L_005f80e3 }
	__asm { L_005f80e1: }
	__asm { mov bl, 1 }
	__asm { L_005f80e3: }
	__asm { push 0xe21dec }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ad8], eax }
	__asm { test eax, eax }
	__asm { je L_005f80f7 }
	__asm { test bl, bl }
	__asm { je L_005f80f9 }
	__asm { L_005f80f7: }
	__asm { mov bl, 1 }
	__asm { L_005f80f9: }
	__asm { push 0xe21dfc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ae0], eax }
	__asm { test eax, eax }
	__asm { je L_005f810d }
	__asm { test bl, bl }
	__asm { je L_005f810f }
	__asm { L_005f810d: }
	__asm { mov bl, 1 }
	__asm { L_005f810f: }
	__asm { push 0xe21e0c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9aec], eax }
	__asm { test eax, eax }
	__asm { je L_005f8123 }
	__asm { test bl, bl }
	__asm { je L_005f8125 }
	__asm { L_005f8123: }
	__asm { mov bl, 1 }
	__asm { L_005f8125: }
	__asm { push 0xe21e1c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9af4], eax }
	__asm { test eax, eax }
	__asm { je L_005f8139 }
	__asm { test bl, bl }
	__asm { je L_005f813b }
	__asm { L_005f8139: }
	__asm { mov bl, 1 }
	__asm { L_005f813b: }
	__asm { push 0xe21e2c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9afc], eax }
	__asm { test eax, eax }
	__asm { je L_005f814f }
	__asm { test bl, bl }
	__asm { je L_005f8151 }
	__asm { L_005f814f: }
	__asm { mov bl, 1 }
	__asm { L_005f8151: }
	__asm { push 0xe21e3c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9b04], eax }
	__asm { test eax, eax }
	__asm { je L_005f816a }
	__asm { test bl, bl }
	__asm { jne L_005f816a }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f816a: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9c1c[];
extern "C" char g_012d9c24[];
extern "C" char g_012d9c28[];
extern "C" char g_012d9c34[];
extern "C" char g_012d9c3c[];
extern "C" char g_012d9c40[];
extern "C" char g_012d9c4c[];
extern "C" char g_012d9c54[];
extern "C" char g_012d9c5c[];
extern "C" char g_012d9c60[];
extern "C" char g_012d9c68[];
extern "C" char g_012d9c74[];
extern "C" char g_012d9c78[];
extern "C" char g_012d9c84[];
// FUNCTION: ROBLOXSTUDIO 0x005f84b0
extern "C" __declspec(naked) void asm_005f84b0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2210c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe22124 }
	__asm { mov dword ptr [g_012d9c1c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c24], eax }
	__asm { test eax, eax }
	__asm { je L_005f84dd }
	__asm { test bl, bl }
	__asm { je L_005f84df }
	__asm { L_005f84dd: }
	__asm { mov bl, 1 }
	__asm { L_005f84df: }
	__asm { push 0xe2213c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c28], eax }
	__asm { test eax, eax }
	__asm { je L_005f84f3 }
	__asm { test bl, bl }
	__asm { je L_005f84f5 }
	__asm { L_005f84f3: }
	__asm { mov bl, 1 }
	__asm { L_005f84f5: }
	__asm { push 0xe22154 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c34], eax }
	__asm { test eax, eax }
	__asm { je L_005f8509 }
	__asm { test bl, bl }
	__asm { je L_005f850b }
	__asm { L_005f8509: }
	__asm { mov bl, 1 }
	__asm { L_005f850b: }
	__asm { push 0xe22170 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c3c], eax }
	__asm { test eax, eax }
	__asm { je L_005f851f }
	__asm { test bl, bl }
	__asm { je L_005f8521 }
	__asm { L_005f851f: }
	__asm { mov bl, 1 }
	__asm { L_005f8521: }
	__asm { push 0xe22188 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c40], eax }
	__asm { test eax, eax }
	__asm { je L_005f8535 }
	__asm { test bl, bl }
	__asm { je L_005f8537 }
	__asm { L_005f8535: }
	__asm { mov bl, 1 }
	__asm { L_005f8537: }
	__asm { push 0xe221a0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c4c], eax }
	__asm { test eax, eax }
	__asm { je L_005f854b }
	__asm { test bl, bl }
	__asm { je L_005f854d }
	__asm { L_005f854b: }
	__asm { mov bl, 1 }
	__asm { L_005f854d: }
	__asm { push 0xe221b8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c54], eax }
	__asm { test eax, eax }
	__asm { je L_005f8561 }
	__asm { test bl, bl }
	__asm { je L_005f8563 }
	__asm { L_005f8561: }
	__asm { mov bl, 1 }
	__asm { L_005f8563: }
	__asm { push 0xe221d0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c5c], eax }
	__asm { test eax, eax }
	__asm { je L_005f8577 }
	__asm { test bl, bl }
	__asm { je L_005f8579 }
	__asm { L_005f8577: }
	__asm { mov bl, 1 }
	__asm { L_005f8579: }
	__asm { push 0xe221ec }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c60], eax }
	__asm { test eax, eax }
	__asm { je L_005f858d }
	__asm { test bl, bl }
	__asm { je L_005f858f }
	__asm { L_005f858d: }
	__asm { mov bl, 1 }
	__asm { L_005f858f: }
	__asm { push 0xe22204 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c68], eax }
	__asm { test eax, eax }
	__asm { je L_005f85a3 }
	__asm { test bl, bl }
	__asm { je L_005f85a5 }
	__asm { L_005f85a3: }
	__asm { mov bl, 1 }
	__asm { L_005f85a5: }
	__asm { push 0xe2221c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c74], eax }
	__asm { test eax, eax }
	__asm { je L_005f85b9 }
	__asm { test bl, bl }
	__asm { je L_005f85bb }
	__asm { L_005f85b9: }
	__asm { mov bl, 1 }
	__asm { L_005f85bb: }
	__asm { push 0xe22230 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c78], eax }
	__asm { test eax, eax }
	__asm { je L_005f85cf }
	__asm { test bl, bl }
	__asm { je L_005f85d1 }
	__asm { L_005f85cf: }
	__asm { mov bl, 1 }
	__asm { L_005f85d1: }
	__asm { push 0xe22240 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c84], eax }
	__asm { test eax, eax }
	__asm { je L_005f85ea }
	__asm { test bl, bl }
	__asm { jne L_005f85ea }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f85ea: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9cb8[];
extern "C" char g_012d9cc4[];
extern "C" char g_012d9cc8[];
extern "C" char g_012d9cd4[];
extern "C" char g_012d9cd8[];
extern "C" char g_012d9ce4[];
extern "C" char g_012d9cec[];
extern "C" char g_012d9cf4[];
extern "C" char g_012d9cfc[];
extern "C" char g_012d9d00[];
extern "C" char g_012d9d08[];
extern "C" char g_012d9d14[];
// FUNCTION: ROBLOXSTUDIO 0x005f86b0
extern "C" __declspec(naked) void asm_005f86b0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe222ec }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe22300 }
	__asm { mov dword ptr [g_012d9cb8], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cc4], eax }
	__asm { test eax, eax }
	__asm { je L_005f86dd }
	__asm { test bl, bl }
	__asm { je L_005f86df }
	__asm { L_005f86dd: }
	__asm { mov bl, 1 }
	__asm { L_005f86df: }
	__asm { push 0xe22318 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cc8], eax }
	__asm { test eax, eax }
	__asm { je L_005f86f3 }
	__asm { test bl, bl }
	__asm { je L_005f86f5 }
	__asm { L_005f86f3: }
	__asm { mov bl, 1 }
	__asm { L_005f86f5: }
	__asm { push 0xe22330 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cd4], eax }
	__asm { test eax, eax }
	__asm { je L_005f8709 }
	__asm { test bl, bl }
	__asm { je L_005f870b }
	__asm { L_005f8709: }
	__asm { mov bl, 1 }
	__asm { L_005f870b: }
	__asm { push 0xe22348 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cd8], eax }
	__asm { test eax, eax }
	__asm { je L_005f871f }
	__asm { test bl, bl }
	__asm { je L_005f8721 }
	__asm { L_005f871f: }
	__asm { mov bl, 1 }
	__asm { L_005f8721: }
	__asm { push 0xe22360 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ce4], eax }
	__asm { test eax, eax }
	__asm { je L_005f8735 }
	__asm { test bl, bl }
	__asm { je L_005f8737 }
	__asm { L_005f8735: }
	__asm { mov bl, 1 }
	__asm { L_005f8737: }
	__asm { push 0xe22378 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cec], eax }
	__asm { test eax, eax }
	__asm { je L_005f874b }
	__asm { test bl, bl }
	__asm { je L_005f874d }
	__asm { L_005f874b: }
	__asm { mov bl, 1 }
	__asm { L_005f874d: }
	__asm { push 0xe22398 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cf4], eax }
	__asm { test eax, eax }
	__asm { je L_005f8761 }
	__asm { test bl, bl }
	__asm { je L_005f8763 }
	__asm { L_005f8761: }
	__asm { mov bl, 1 }
	__asm { L_005f8763: }
	__asm { push 0xe223b8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cfc], eax }
	__asm { test eax, eax }
	__asm { je L_005f8777 }
	__asm { test bl, bl }
	__asm { je L_005f8779 }
	__asm { L_005f8777: }
	__asm { mov bl, 1 }
	__asm { L_005f8779: }
	__asm { push 0xe223cc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d00], eax }
	__asm { test eax, eax }
	__asm { je L_005f878d }
	__asm { test bl, bl }
	__asm { je L_005f878f }
	__asm { L_005f878d: }
	__asm { mov bl, 1 }
	__asm { L_005f878f: }
	__asm { push 0xe223e4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d08], eax }
	__asm { test eax, eax }
	__asm { je L_005f87a3 }
	__asm { test bl, bl }
	__asm { je L_005f87a5 }
	__asm { L_005f87a3: }
	__asm { mov bl, 1 }
	__asm { L_005f87a5: }
	__asm { push 0xe223fc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d14], eax }
	__asm { test eax, eax }
	__asm { je L_005f87be }
	__asm { test bl, bl }
	__asm { jne L_005f87be }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f87be: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9d34[];
extern "C" char g_012d9d3c[];
extern "C" char g_012d9d40[];
extern "C" char g_012d9d4c[];
extern "C" char g_012d9d54[];
extern "C" char g_012d9d58[];
extern "C" char g_012d9d64[];
extern "C" char g_012d9d6c[];
extern "C" char g_012d9d70[];
extern "C" char g_012d9d78[];
extern "C" char g_012d9d80[];
extern "C" char g_012d9d90[];
extern "C" char g_012d9d98[];
extern "C" char g_012d9da4[];
extern "C" char g_012d9db4[];
extern "C" char g_012d9dbc[];
extern "C" char g_012d9dcc[];
extern "C" char g_012d9dd8[];
extern "C" char g_012d9de8[];
extern "C" char g_012d9dec[];
extern "C" char g_012d9df8[];
extern "C" char g_012d9e04[];
extern "C" char g_012d9e18[];
extern "C" char g_012d9e20[];
extern "C" char g_012d9e28[];
extern "C" char g_012d9e34[];
extern "C" char g_012d9e44[];
extern "C" char g_012d9e54[];
extern "C" char g_012d9e60[];
extern "C" char g_012d9e6c[];
extern "C" char g_012d9e78[];
extern "C" char g_012d9e80[];
extern "C" char g_012d9e88[];
extern "C" char g_012d9e94[];
extern "C" char g_012d9ea8[];
extern "C" char g_012d9eb4[];
extern "C" char g_012d9eb8[];
extern "C" char g_012d9ec4[];
extern "C" char g_012d9ed8[];
extern "C" char g_012d9ee4[];
extern "C" char g_012d9ee8[];
extern "C" char g_012d9ef4[];
extern "C" char g_012d9f04[];
extern "C" char g_012d9f14[];
extern "C" char g_012d9f18[];
// FUNCTION: ROBLOXSTUDIO 0x005f8820
extern "C" __declspec(naked) void asm_005f8820()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2247c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe2249c }
	__asm { mov dword ptr [g_012d9d34], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d3c], eax }
	__asm { test eax, eax }
	__asm { je L_005f884d }
	__asm { test bl, bl }
	__asm { je L_005f884f }
	__asm { L_005f884d: }
	__asm { mov bl, 1 }
	__asm { L_005f884f: }
	__asm { push 0xe224b0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d40], eax }
	__asm { test eax, eax }
	__asm { je L_005f8863 }
	__asm { test bl, bl }
	__asm { je L_005f8865 }
	__asm { L_005f8863: }
	__asm { mov bl, 1 }
	__asm { L_005f8865: }
	__asm { push 0xe224c8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d4c], eax }
	__asm { test eax, eax }
	__asm { je L_005f8879 }
	__asm { test bl, bl }
	__asm { je L_005f887b }
	__asm { L_005f8879: }
	__asm { mov bl, 1 }
	__asm { L_005f887b: }
	__asm { push 0xe224dc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d54], eax }
	__asm { test eax, eax }
	__asm { je L_005f888f }
	__asm { test bl, bl }
	__asm { je L_005f8891 }
	__asm { L_005f888f: }
	__asm { mov bl, 1 }
	__asm { L_005f8891: }
	__asm { push 0xe224f4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d58], eax }
	__asm { test eax, eax }
	__asm { je L_005f88a5 }
	__asm { test bl, bl }
	__asm { je L_005f88a7 }
	__asm { L_005f88a5: }
	__asm { mov bl, 1 }
	__asm { L_005f88a7: }
	__asm { push 0xe22508 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d64], eax }
	__asm { test eax, eax }
	__asm { je L_005f88bb }
	__asm { test bl, bl }
	__asm { je L_005f88bd }
	__asm { L_005f88bb: }
	__asm { mov bl, 1 }
	__asm { L_005f88bd: }
	__asm { push 0xe22520 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d6c], eax }
	__asm { test eax, eax }
	__asm { je L_005f88d1 }
	__asm { test bl, bl }
	__asm { je L_005f88d3 }
	__asm { L_005f88d1: }
	__asm { mov bl, 1 }
	__asm { L_005f88d3: }
	__asm { push 0xe22534 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d70], eax }
	__asm { test eax, eax }
	__asm { je L_005f88e7 }
	__asm { test bl, bl }
	__asm { je L_005f88e9 }
	__asm { L_005f88e7: }
	__asm { mov bl, 1 }
	__asm { L_005f88e9: }
	__asm { push 0xe2254c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d78], eax }
	__asm { test eax, eax }
	__asm { je L_005f88fd }
	__asm { test bl, bl }
	__asm { je L_005f88ff }
	__asm { L_005f88fd: }
	__asm { mov bl, 1 }
	__asm { L_005f88ff: }
	__asm { push 0xe22560 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d80], eax }
	__asm { test eax, eax }
	__asm { je L_005f8913 }
	__asm { test bl, bl }
	__asm { je L_005f8915 }
	__asm { L_005f8913: }
	__asm { mov bl, 1 }
	__asm { L_005f8915: }
	__asm { push 0xe22578 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d90], eax }
	__asm { test eax, eax }
	__asm { je L_005f8929 }
	__asm { test bl, bl }
	__asm { je L_005f892b }
	__asm { L_005f8929: }
	__asm { mov bl, 1 }
	__asm { L_005f892b: }
	__asm { push 0xe22590 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d98], eax }
	__asm { test eax, eax }
	__asm { je L_005f893f }
	__asm { test bl, bl }
	__asm { je L_005f8941 }
	__asm { L_005f893f: }
	__asm { mov bl, 1 }
	__asm { L_005f8941: }
	__asm { push 0xe225a8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9da4], eax }
	__asm { test eax, eax }
	__asm { je L_005f8955 }
	__asm { test bl, bl }
	__asm { je L_005f8957 }
	__asm { L_005f8955: }
	__asm { mov bl, 1 }
	__asm { L_005f8957: }
	__asm { push 0xe225bc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9db4], eax }
	__asm { test eax, eax }
	__asm { je L_005f896b }
	__asm { test bl, bl }
	__asm { je L_005f896d }
	__asm { L_005f896b: }
	__asm { mov bl, 1 }
	__asm { L_005f896d: }
	__asm { push 0xe225d4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9dbc], eax }
	__asm { test eax, eax }
	__asm { je L_005f8981 }
	__asm { test bl, bl }
	__asm { je L_005f8983 }
	__asm { L_005f8981: }
	__asm { mov bl, 1 }
	__asm { L_005f8983: }
	__asm { push 0xe225e8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9dcc], eax }
	__asm { test eax, eax }
	__asm { je L_005f8997 }
	__asm { test bl, bl }
	__asm { je L_005f8999 }
	__asm { L_005f8997: }
	__asm { mov bl, 1 }
	__asm { L_005f8999: }
	__asm { push 0xe22600 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9dd8], eax }
	__asm { test eax, eax }
	__asm { je L_005f89ad }
	__asm { test bl, bl }
	__asm { je L_005f89af }
	__asm { L_005f89ad: }
	__asm { mov bl, 1 }
	__asm { L_005f89af: }
	__asm { push 0xe22614 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9de8], eax }
	__asm { test eax, eax }
	__asm { je L_005f89c3 }
	__asm { test bl, bl }
	__asm { je L_005f89c5 }
	__asm { L_005f89c3: }
	__asm { mov bl, 1 }
	__asm { L_005f89c5: }
	__asm { push 0xe2262c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9dec], eax }
	__asm { test eax, eax }
	__asm { je L_005f89d9 }
	__asm { test bl, bl }
	__asm { je L_005f89db }
	__asm { L_005f89d9: }
	__asm { mov bl, 1 }
	__asm { L_005f89db: }
	__asm { push 0xe22640 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9df8], eax }
	__asm { test eax, eax }
	__asm { je L_005f89ef }
	__asm { test bl, bl }
	__asm { je L_005f89f1 }
	__asm { L_005f89ef: }
	__asm { mov bl, 1 }
	__asm { L_005f89f1: }
	__asm { push 0xe22658 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e04], eax }
	__asm { test eax, eax }
	__asm { je L_005f8a05 }
	__asm { test bl, bl }
	__asm { je L_005f8a07 }
	__asm { L_005f8a05: }
	__asm { mov bl, 1 }
	__asm { L_005f8a07: }
	__asm { push 0xe2266c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e18], eax }
	__asm { test eax, eax }
	__asm { je L_005f8a1b }
	__asm { test bl, bl }
	__asm { je L_005f8a1d }
	__asm { L_005f8a1b: }
	__asm { mov bl, 1 }
	__asm { L_005f8a1d: }
	__asm { push 0xe22684 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e20], eax }
	__asm { test eax, eax }
	__asm { je L_005f8a31 }
	__asm { test bl, bl }
	__asm { je L_005f8a33 }
	__asm { L_005f8a31: }
	__asm { mov bl, 1 }
	__asm { L_005f8a33: }
	__asm { push 0xe22698 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e28], eax }
	__asm { test eax, eax }
	__asm { je L_005f8a47 }
	__asm { test bl, bl }
	__asm { je L_005f8a49 }
	__asm { L_005f8a47: }
	__asm { mov bl, 1 }
	__asm { L_005f8a49: }
	__asm { push 0xe226b0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e34], eax }
	__asm { test eax, eax }
	__asm { je L_005f8a5d }
	__asm { test bl, bl }
	__asm { je L_005f8a5f }
	__asm { L_005f8a5d: }
	__asm { mov bl, 1 }
	__asm { L_005f8a5f: }
	__asm { push 0xe226c4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e44], eax }
	__asm { test eax, eax }
	__asm { je L_005f8a73 }
	__asm { test bl, bl }
	__asm { je L_005f8a75 }
	__asm { L_005f8a73: }
	__asm { mov bl, 1 }
	__asm { L_005f8a75: }
	__asm { push 0xe226dc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e54], eax }
	__asm { test eax, eax }
	__asm { je L_005f8a89 }
	__asm { test bl, bl }
	__asm { je L_005f8a8b }
	__asm { L_005f8a89: }
	__asm { mov bl, 1 }
	__asm { L_005f8a8b: }
	__asm { push 0xe226f0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e60], eax }
	__asm { test eax, eax }
	__asm { je L_005f8a9f }
	__asm { test bl, bl }
	__asm { je L_005f8aa1 }
	__asm { L_005f8a9f: }
	__asm { mov bl, 1 }
	__asm { L_005f8aa1: }
	__asm { push 0xe22708 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e6c], eax }
	__asm { test eax, eax }
	__asm { je L_005f8ab5 }
	__asm { test bl, bl }
	__asm { je L_005f8ab7 }
	__asm { L_005f8ab5: }
	__asm { mov bl, 1 }
	__asm { L_005f8ab7: }
	__asm { push 0xe2271c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e78], eax }
	__asm { test eax, eax }
	__asm { je L_005f8acb }
	__asm { test bl, bl }
	__asm { je L_005f8acd }
	__asm { L_005f8acb: }
	__asm { mov bl, 1 }
	__asm { L_005f8acd: }
	__asm { push 0xe22734 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e80], eax }
	__asm { test eax, eax }
	__asm { je L_005f8ae1 }
	__asm { test bl, bl }
	__asm { je L_005f8ae3 }
	__asm { L_005f8ae1: }
	__asm { mov bl, 1 }
	__asm { L_005f8ae3: }
	__asm { push 0xe22748 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e88], eax }
	__asm { test eax, eax }
	__asm { je L_005f8af7 }
	__asm { test bl, bl }
	__asm { je L_005f8af9 }
	__asm { L_005f8af7: }
	__asm { mov bl, 1 }
	__asm { L_005f8af9: }
	__asm { push 0xe22760 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9e94], eax }
	__asm { test eax, eax }
	__asm { je L_005f8b0d }
	__asm { test bl, bl }
	__asm { je L_005f8b0f }
	__asm { L_005f8b0d: }
	__asm { mov bl, 1 }
	__asm { L_005f8b0f: }
	__asm { push 0xe22774 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ea8], eax }
	__asm { test eax, eax }
	__asm { je L_005f8b23 }
	__asm { test bl, bl }
	__asm { je L_005f8b25 }
	__asm { L_005f8b23: }
	__asm { mov bl, 1 }
	__asm { L_005f8b25: }
	__asm { push 0xe2278c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9eb4], eax }
	__asm { test eax, eax }
	__asm { je L_005f8b39 }
	__asm { test bl, bl }
	__asm { je L_005f8b3b }
	__asm { L_005f8b39: }
	__asm { mov bl, 1 }
	__asm { L_005f8b3b: }
	__asm { push 0xe227a0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9eb8], eax }
	__asm { test eax, eax }
	__asm { je L_005f8b4f }
	__asm { test bl, bl }
	__asm { je L_005f8b51 }
	__asm { L_005f8b4f: }
	__asm { mov bl, 1 }
	__asm { L_005f8b51: }
	__asm { push 0xe227b8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ec4], eax }
	__asm { test eax, eax }
	__asm { je L_005f8b65 }
	__asm { test bl, bl }
	__asm { je L_005f8b67 }
	__asm { L_005f8b65: }
	__asm { mov bl, 1 }
	__asm { L_005f8b67: }
	__asm { push 0xe227cc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ed8], eax }
	__asm { test eax, eax }
	__asm { je L_005f8b7b }
	__asm { test bl, bl }
	__asm { je L_005f8b7d }
	__asm { L_005f8b7b: }
	__asm { mov bl, 1 }
	__asm { L_005f8b7d: }
	__asm { push 0xe227e4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ee4], eax }
	__asm { test eax, eax }
	__asm { je L_005f8b91 }
	__asm { test bl, bl }
	__asm { je L_005f8b93 }
	__asm { L_005f8b91: }
	__asm { mov bl, 1 }
	__asm { L_005f8b93: }
	__asm { push 0xe227f8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ee8], eax }
	__asm { test eax, eax }
	__asm { je L_005f8ba7 }
	__asm { test bl, bl }
	__asm { je L_005f8ba9 }
	__asm { L_005f8ba7: }
	__asm { mov bl, 1 }
	__asm { L_005f8ba9: }
	__asm { push 0xe22810 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ef4], eax }
	__asm { test eax, eax }
	__asm { je L_005f8bbd }
	__asm { test bl, bl }
	__asm { je L_005f8bbf }
	__asm { L_005f8bbd: }
	__asm { mov bl, 1 }
	__asm { L_005f8bbf: }
	__asm { push 0xe22824 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f04], eax }
	__asm { test eax, eax }
	__asm { je L_005f8bd3 }
	__asm { test bl, bl }
	__asm { je L_005f8bd5 }
	__asm { L_005f8bd3: }
	__asm { mov bl, 1 }
	__asm { L_005f8bd5: }
	__asm { push 0xe2283c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f14], eax }
	__asm { test eax, eax }
	__asm { je L_005f8be9 }
	__asm { test bl, bl }
	__asm { je L_005f8beb }
	__asm { L_005f8be9: }
	__asm { mov bl, 1 }
	__asm { L_005f8beb: }
	__asm { push 0xe22850 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9f18], eax }
	__asm { test eax, eax }
	__asm { je L_005f8c04 }
	__asm { test bl, bl }
	__asm { jne L_005f8c04 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f8c04: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9fac[];
extern "C" char g_012d9fb8[];
extern "C" char g_012d9fc4[];
extern "C" char g_012d9fd0[];
extern "C" char g_012d9fd8[];
extern "C" char g_012d9fe8[];
extern "C" char g_012d9ff0[];
extern "C" char g_012d9ffc[];
extern "C" char g_012da00c[];
extern "C" char g_012da014[];
extern "C" char g_012da020[];
extern "C" char g_012da030[];
extern "C" char g_012da040[];
// FUNCTION: ROBLOXSTUDIO 0x005f8d60
extern "C" __declspec(naked) void asm_005f8d60()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe22958 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe22974 }
	__asm { mov dword ptr [g_012d9fac], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9fb8], eax }
	__asm { test eax, eax }
	__asm { je L_005f8d8d }
	__asm { test bl, bl }
	__asm { je L_005f8d8f }
	__asm { L_005f8d8d: }
	__asm { mov bl, 1 }
	__asm { L_005f8d8f: }
	__asm { push 0xe22990 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9fc4], eax }
	__asm { test eax, eax }
	__asm { je L_005f8da3 }
	__asm { test bl, bl }
	__asm { je L_005f8da5 }
	__asm { L_005f8da3: }
	__asm { mov bl, 1 }
	__asm { L_005f8da5: }
	__asm { push 0xe229ac }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9fd0], eax }
	__asm { test eax, eax }
	__asm { je L_005f8db9 }
	__asm { test bl, bl }
	__asm { je L_005f8dbb }
	__asm { L_005f8db9: }
	__asm { mov bl, 1 }
	__asm { L_005f8dbb: }
	__asm { push 0xe229c8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9fd8], eax }
	__asm { test eax, eax }
	__asm { je L_005f8dcf }
	__asm { test bl, bl }
	__asm { je L_005f8dd1 }
	__asm { L_005f8dcf: }
	__asm { mov bl, 1 }
	__asm { L_005f8dd1: }
	__asm { push 0xe229e4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9fe8], eax }
	__asm { test eax, eax }
	__asm { je L_005f8de5 }
	__asm { test bl, bl }
	__asm { je L_005f8de7 }
	__asm { L_005f8de5: }
	__asm { mov bl, 1 }
	__asm { L_005f8de7: }
	__asm { push 0xe22a00 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ff0], eax }
	__asm { test eax, eax }
	__asm { je L_005f8dfb }
	__asm { test bl, bl }
	__asm { je L_005f8dfd }
	__asm { L_005f8dfb: }
	__asm { mov bl, 1 }
	__asm { L_005f8dfd: }
	__asm { push 0xe22a20 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ffc], eax }
	__asm { test eax, eax }
	__asm { je L_005f8e11 }
	__asm { test bl, bl }
	__asm { je L_005f8e13 }
	__asm { L_005f8e11: }
	__asm { mov bl, 1 }
	__asm { L_005f8e13: }
	__asm { push 0xe22a40 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da00c], eax }
	__asm { test eax, eax }
	__asm { je L_005f8e27 }
	__asm { test bl, bl }
	__asm { je L_005f8e29 }
	__asm { L_005f8e27: }
	__asm { mov bl, 1 }
	__asm { L_005f8e29: }
	__asm { push 0xe22a5c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da014], eax }
	__asm { test eax, eax }
	__asm { je L_005f8e3d }
	__asm { test bl, bl }
	__asm { je L_005f8e3f }
	__asm { L_005f8e3d: }
	__asm { mov bl, 1 }
	__asm { L_005f8e3f: }
	__asm { push 0xe22a7c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da020], eax }
	__asm { test eax, eax }
	__asm { je L_005f8e53 }
	__asm { test bl, bl }
	__asm { je L_005f8e55 }
	__asm { L_005f8e53: }
	__asm { mov bl, 1 }
	__asm { L_005f8e55: }
	__asm { push 0xe22a9c }
	__asm { call esi }
	__asm { mov dword ptr [g_012da030], eax }
	__asm { test eax, eax }
	__asm { je L_005f8e69 }
	__asm { test bl, bl }
	__asm { je L_005f8e6b }
	__asm { L_005f8e69: }
	__asm { mov bl, 1 }
	__asm { L_005f8e6b: }
	__asm { push 0xe22ab4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da040], eax }
	__asm { test eax, eax }
	__asm { je L_005f8e84 }
	__asm { test bl, bl }
	__asm { jne L_005f8e84 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005f8e84: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daa24[];
extern "C" char g_012daa2c[];
extern "C" char g_012daa34[];
extern "C" char g_012daa44[];
extern "C" char g_012daa4c[];
extern "C" char g_012daa50[];
extern "C" char g_012daa60[];
extern "C" char g_012daa64[];
extern "C" char g_012daa6c[];
extern "C" char g_012daa74[];
extern "C" char g_012daa84[];
extern "C" char g_012daa8c[];
extern "C" char g_012daa94[];
extern "C" char g_012daa9c[];
extern "C" char g_012daaa0[];
extern "C" char g_012daab0[];
extern "C" char g_012daab4[];
// FUNCTION: ROBLOXSTUDIO 0x005fa5b0
extern "C" __declspec(naked) void asm_005fa5b0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe24674 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe2468c }
	__asm { mov dword ptr [g_012daa24], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa2c], eax }
	__asm { test eax, eax }
	__asm { je L_005fa5dd }
	__asm { test bl, bl }
	__asm { je L_005fa5df }
	__asm { L_005fa5dd: }
	__asm { mov bl, 1 }
	__asm { L_005fa5df: }
	__asm { push 0xe246a4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa34], eax }
	__asm { test eax, eax }
	__asm { je L_005fa5f3 }
	__asm { test bl, bl }
	__asm { je L_005fa5f5 }
	__asm { L_005fa5f3: }
	__asm { mov bl, 1 }
	__asm { L_005fa5f5: }
	__asm { push 0xe246c0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa44], eax }
	__asm { test eax, eax }
	__asm { je L_005fa609 }
	__asm { test bl, bl }
	__asm { je L_005fa60b }
	__asm { L_005fa609: }
	__asm { mov bl, 1 }
	__asm { L_005fa60b: }
	__asm { push 0xe246d8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa4c], eax }
	__asm { test eax, eax }
	__asm { je L_005fa61f }
	__asm { test bl, bl }
	__asm { je L_005fa621 }
	__asm { L_005fa61f: }
	__asm { mov bl, 1 }
	__asm { L_005fa621: }
	__asm { push 0xe246f4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa50], eax }
	__asm { test eax, eax }
	__asm { je L_005fa635 }
	__asm { test bl, bl }
	__asm { je L_005fa637 }
	__asm { L_005fa635: }
	__asm { mov bl, 1 }
	__asm { L_005fa637: }
	__asm { push 0xe24714 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa60], eax }
	__asm { test eax, eax }
	__asm { je L_005fa64b }
	__asm { test bl, bl }
	__asm { je L_005fa64d }
	__asm { L_005fa64b: }
	__asm { mov bl, 1 }
	__asm { L_005fa64d: }
	__asm { push 0xe24730 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa64], eax }
	__asm { test eax, eax }
	__asm { je L_005fa661 }
	__asm { test bl, bl }
	__asm { je L_005fa663 }
	__asm { L_005fa661: }
	__asm { mov bl, 1 }
	__asm { L_005fa663: }
	__asm { push 0xe2474c }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa6c], eax }
	__asm { test eax, eax }
	__asm { je L_005fa677 }
	__asm { test bl, bl }
	__asm { je L_005fa679 }
	__asm { L_005fa677: }
	__asm { mov bl, 1 }
	__asm { L_005fa679: }
	__asm { push 0xe24768 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa74], eax }
	__asm { test eax, eax }
	__asm { je L_005fa68d }
	__asm { test bl, bl }
	__asm { je L_005fa68f }
	__asm { L_005fa68d: }
	__asm { mov bl, 1 }
	__asm { L_005fa68f: }
	__asm { push 0xe24780 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa84], eax }
	__asm { test eax, eax }
	__asm { je L_005fa6a3 }
	__asm { test bl, bl }
	__asm { je L_005fa6a5 }
	__asm { L_005fa6a3: }
	__asm { mov bl, 1 }
	__asm { L_005fa6a5: }
	__asm { push 0xe24798 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa8c], eax }
	__asm { test eax, eax }
	__asm { je L_005fa6b9 }
	__asm { test bl, bl }
	__asm { je L_005fa6bb }
	__asm { L_005fa6b9: }
	__asm { mov bl, 1 }
	__asm { L_005fa6bb: }
	__asm { push 0xe247ac }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa94], eax }
	__asm { test eax, eax }
	__asm { je L_005fa6cf }
	__asm { test bl, bl }
	__asm { je L_005fa6d1 }
	__asm { L_005fa6cf: }
	__asm { mov bl, 1 }
	__asm { L_005fa6d1: }
	__asm { push 0xe247d8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daa9c], eax }
	__asm { test eax, eax }
	__asm { je L_005fa6e5 }
	__asm { test bl, bl }
	__asm { je L_005fa6e7 }
	__asm { L_005fa6e5: }
	__asm { mov bl, 1 }
	__asm { L_005fa6e7: }
	__asm { push 0xe247f8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daaa0], eax }
	__asm { test eax, eax }
	__asm { je L_005fa6fb }
	__asm { test bl, bl }
	__asm { je L_005fa6fd }
	__asm { L_005fa6fb: }
	__asm { mov bl, 1 }
	__asm { L_005fa6fd: }
	__asm { push 0xe2480c }
	__asm { call esi }
	__asm { mov dword ptr [g_012daab0], eax }
	__asm { test eax, eax }
	__asm { je L_005fa711 }
	__asm { test bl, bl }
	__asm { je L_005fa713 }
	__asm { L_005fa711: }
	__asm { mov bl, 1 }
	__asm { L_005fa713: }
	__asm { push 0xe24820 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daab4], eax }
	__asm { test eax, eax }
	__asm { je L_005fa72c }
	__asm { test bl, bl }
	__asm { jne L_005fa72c }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fa72c: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daae8[];
extern "C" char g_012daaf8[];
extern "C" char g_012daafc[];
extern "C" char g_012dab04[];
extern "C" char g_012dab10[];
extern "C" char g_012dab1c[];
extern "C" char g_012dab20[];
extern "C" char g_012dab28[];
extern "C" char g_012dab30[];
extern "C" char g_012dab40[];
extern "C" char g_012dab48[];
extern "C" char g_012dab50[];
extern "C" char g_012dab58[];
extern "C" char g_012dab60[];
extern "C" char g_012dab68[];
extern "C" char g_012dab70[];
extern "C" char g_012dab78[];
extern "C" char g_012dab88[];
extern "C" char g_012dab8c[];
extern "C" char g_012dab94[];
extern "C" char g_012dab9c[];
extern "C" char g_012daba8[];
extern "C" char g_012dabb4[];
extern "C" char g_012dabb8[];
extern "C" char g_012dabc4[];
extern "C" char g_012dabd0[];
extern "C" char g_012dabd8[];
extern "C" char g_012dabdc[];
extern "C" char g_012dabe8[];
extern "C" char g_012dabf4[];
extern "C" char g_012dabf8[];
extern "C" char g_012dac04[];
extern "C" char g_012dac08[];
extern "C" char g_012dac18[];
// FUNCTION: ROBLOXSTUDIO 0x005fa7d0
extern "C" __declspec(naked) void asm_005fa7d0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe248c8 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe248e4 }
	__asm { mov dword ptr [g_012daae8], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012daaf8], eax }
	__asm { test eax, eax }
	__asm { je L_005fa7fd }
	__asm { test bl, bl }
	__asm { je L_005fa7ff }
	__asm { L_005fa7fd: }
	__asm { mov bl, 1 }
	__asm { L_005fa7ff: }
	__asm { push 0xe24900 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daafc], eax }
	__asm { test eax, eax }
	__asm { je L_005fa813 }
	__asm { test bl, bl }
	__asm { je L_005fa815 }
	__asm { L_005fa813: }
	__asm { mov bl, 1 }
	__asm { L_005fa815: }
	__asm { push 0xe24914 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab04], eax }
	__asm { test eax, eax }
	__asm { je L_005fa829 }
	__asm { test bl, bl }
	__asm { je L_005fa82b }
	__asm { L_005fa829: }
	__asm { mov bl, 1 }
	__asm { L_005fa82b: }
	__asm { push 0xe2492c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab10], eax }
	__asm { test eax, eax }
	__asm { je L_005fa83f }
	__asm { test bl, bl }
	__asm { je L_005fa841 }
	__asm { L_005fa83f: }
	__asm { mov bl, 1 }
	__asm { L_005fa841: }
	__asm { push 0xe24948 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab1c], eax }
	__asm { test eax, eax }
	__asm { je L_005fa855 }
	__asm { test bl, bl }
	__asm { je L_005fa857 }
	__asm { L_005fa855: }
	__asm { mov bl, 1 }
	__asm { L_005fa857: }
	__asm { push 0xe24958 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab20], eax }
	__asm { test eax, eax }
	__asm { je L_005fa86b }
	__asm { test bl, bl }
	__asm { je L_005fa86d }
	__asm { L_005fa86b: }
	__asm { mov bl, 1 }
	__asm { L_005fa86d: }
	__asm { push 0xe2496c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab28], eax }
	__asm { test eax, eax }
	__asm { je L_005fa881 }
	__asm { test bl, bl }
	__asm { je L_005fa883 }
	__asm { L_005fa881: }
	__asm { mov bl, 1 }
	__asm { L_005fa883: }
	__asm { push 0xe2497c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab30], eax }
	__asm { test eax, eax }
	__asm { je L_005fa897 }
	__asm { test bl, bl }
	__asm { je L_005fa899 }
	__asm { L_005fa897: }
	__asm { mov bl, 1 }
	__asm { L_005fa899: }
	__asm { push 0xe24990 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab40], eax }
	__asm { test eax, eax }
	__asm { je L_005fa8ad }
	__asm { test bl, bl }
	__asm { je L_005fa8af }
	__asm { L_005fa8ad: }
	__asm { mov bl, 1 }
	__asm { L_005fa8af: }
	__asm { push 0xe249a0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab48], eax }
	__asm { test eax, eax }
	__asm { je L_005fa8c3 }
	__asm { test bl, bl }
	__asm { je L_005fa8c5 }
	__asm { L_005fa8c3: }
	__asm { mov bl, 1 }
	__asm { L_005fa8c5: }
	__asm { push 0xe249b4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab50], eax }
	__asm { test eax, eax }
	__asm { je L_005fa8d9 }
	__asm { test bl, bl }
	__asm { je L_005fa8db }
	__asm { L_005fa8d9: }
	__asm { mov bl, 1 }
	__asm { L_005fa8db: }
	__asm { push 0xe249c4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab58], eax }
	__asm { test eax, eax }
	__asm { je L_005fa8ef }
	__asm { test bl, bl }
	__asm { je L_005fa8f1 }
	__asm { L_005fa8ef: }
	__asm { mov bl, 1 }
	__asm { L_005fa8f1: }
	__asm { push 0xe249d8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab60], eax }
	__asm { test eax, eax }
	__asm { je L_005fa905 }
	__asm { test bl, bl }
	__asm { je L_005fa907 }
	__asm { L_005fa905: }
	__asm { mov bl, 1 }
	__asm { L_005fa907: }
	__asm { push 0xe249f0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab68], eax }
	__asm { test eax, eax }
	__asm { je L_005fa91b }
	__asm { test bl, bl }
	__asm { je L_005fa91d }
	__asm { L_005fa91b: }
	__asm { mov bl, 1 }
	__asm { L_005fa91d: }
	__asm { push 0xe24a08 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab70], eax }
	__asm { test eax, eax }
	__asm { je L_005fa931 }
	__asm { test bl, bl }
	__asm { je L_005fa933 }
	__asm { L_005fa931: }
	__asm { mov bl, 1 }
	__asm { L_005fa933: }
	__asm { push 0xe24a20 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab78], eax }
	__asm { test eax, eax }
	__asm { je L_005fa947 }
	__asm { test bl, bl }
	__asm { je L_005fa949 }
	__asm { L_005fa947: }
	__asm { mov bl, 1 }
	__asm { L_005fa949: }
	__asm { push 0xe24a38 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab88], eax }
	__asm { test eax, eax }
	__asm { je L_005fa95d }
	__asm { test bl, bl }
	__asm { je L_005fa95f }
	__asm { L_005fa95d: }
	__asm { mov bl, 1 }
	__asm { L_005fa95f: }
	__asm { push 0xe24a50 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab8c], eax }
	__asm { test eax, eax }
	__asm { je L_005fa973 }
	__asm { test bl, bl }
	__asm { je L_005fa975 }
	__asm { L_005fa973: }
	__asm { mov bl, 1 }
	__asm { L_005fa975: }
	__asm { push 0xe24a68 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab94], eax }
	__asm { test eax, eax }
	__asm { je L_005fa989 }
	__asm { test bl, bl }
	__asm { je L_005fa98b }
	__asm { L_005fa989: }
	__asm { mov bl, 1 }
	__asm { L_005fa98b: }
	__asm { push 0xe24a80 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dab9c], eax }
	__asm { test eax, eax }
	__asm { je L_005fa99f }
	__asm { test bl, bl }
	__asm { je L_005fa9a1 }
	__asm { L_005fa99f: }
	__asm { mov bl, 1 }
	__asm { L_005fa9a1: }
	__asm { push 0xe24a98 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daba8], eax }
	__asm { test eax, eax }
	__asm { je L_005fa9b5 }
	__asm { test bl, bl }
	__asm { je L_005fa9b7 }
	__asm { L_005fa9b5: }
	__asm { mov bl, 1 }
	__asm { L_005fa9b7: }
	__asm { push 0xe24ab0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabb4], eax }
	__asm { test eax, eax }
	__asm { je L_005fa9cb }
	__asm { test bl, bl }
	__asm { je L_005fa9cd }
	__asm { L_005fa9cb: }
	__asm { mov bl, 1 }
	__asm { L_005fa9cd: }
	__asm { push 0xe24ac8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabb8], eax }
	__asm { test eax, eax }
	__asm { je L_005fa9e1 }
	__asm { test bl, bl }
	__asm { je L_005fa9e3 }
	__asm { L_005fa9e1: }
	__asm { mov bl, 1 }
	__asm { L_005fa9e3: }
	__asm { push 0xe24ae0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabc4], eax }
	__asm { test eax, eax }
	__asm { je L_005fa9f7 }
	__asm { test bl, bl }
	__asm { je L_005fa9f9 }
	__asm { L_005fa9f7: }
	__asm { mov bl, 1 }
	__asm { L_005fa9f9: }
	__asm { push 0xe24af8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabd0], eax }
	__asm { test eax, eax }
	__asm { je L_005faa0d }
	__asm { test bl, bl }
	__asm { je L_005faa0f }
	__asm { L_005faa0d: }
	__asm { mov bl, 1 }
	__asm { L_005faa0f: }
	__asm { push 0xe24b10 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabd8], eax }
	__asm { test eax, eax }
	__asm { je L_005faa23 }
	__asm { test bl, bl }
	__asm { je L_005faa25 }
	__asm { L_005faa23: }
	__asm { mov bl, 1 }
	__asm { L_005faa25: }
	__asm { push 0xe24b28 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabdc], eax }
	__asm { test eax, eax }
	__asm { je L_005faa39 }
	__asm { test bl, bl }
	__asm { je L_005faa3b }
	__asm { L_005faa39: }
	__asm { mov bl, 1 }
	__asm { L_005faa3b: }
	__asm { push 0xe24b40 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabe8], eax }
	__asm { test eax, eax }
	__asm { je L_005faa4f }
	__asm { test bl, bl }
	__asm { je L_005faa51 }
	__asm { L_005faa4f: }
	__asm { mov bl, 1 }
	__asm { L_005faa51: }
	__asm { push 0xe24b58 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabf4], eax }
	__asm { test eax, eax }
	__asm { je L_005faa65 }
	__asm { test bl, bl }
	__asm { je L_005faa67 }
	__asm { L_005faa65: }
	__asm { mov bl, 1 }
	__asm { L_005faa67: }
	__asm { push 0xe24b70 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dabf8], eax }
	__asm { test eax, eax }
	__asm { je L_005faa7b }
	__asm { test bl, bl }
	__asm { je L_005faa7d }
	__asm { L_005faa7b: }
	__asm { mov bl, 1 }
	__asm { L_005faa7d: }
	__asm { push 0xe24b88 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac04], eax }
	__asm { test eax, eax }
	__asm { je L_005faa91 }
	__asm { test bl, bl }
	__asm { je L_005faa93 }
	__asm { L_005faa91: }
	__asm { mov bl, 1 }
	__asm { L_005faa93: }
	__asm { push 0xe24ba0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac08], eax }
	__asm { test eax, eax }
	__asm { je L_005faaa7 }
	__asm { test bl, bl }
	__asm { je L_005faaa9 }
	__asm { L_005faaa7: }
	__asm { mov bl, 1 }
	__asm { L_005faaa9: }
	__asm { push 0xe24bb8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dac18], eax }
	__asm { test eax, eax }
	__asm { je L_005faac2 }
	__asm { test bl, bl }
	__asm { jne L_005faac2 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005faac2: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dad5c[];
extern "C" char g_012dad64[];
extern "C" char g_012dad6c[];
extern "C" char g_012dad70[];
extern "C" char g_012dad7c[];
extern "C" char g_012dad84[];
extern "C" char g_012dad8c[];
extern "C" char g_012dad94[];
extern "C" char g_012dada4[];
extern "C" char g_012dada8[];
extern "C" char g_012dadb0[];
extern "C" char g_012dadb8[];
extern "C" char g_012dadc8[];
extern "C" char g_012dadd0[];
extern "C" char g_012dadd4[];
extern "C" char g_012dade0[];
extern "C" char g_012dade8[];
// FUNCTION: ROBLOXSTUDIO 0x005fae90
extern "C" __declspec(naked) void asm_005fae90()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe24f14 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe24f2c }
	__asm { mov dword ptr [g_012dad5c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dad64], eax }
	__asm { test eax, eax }
	__asm { je L_005faebd }
	__asm { test bl, bl }
	__asm { je L_005faebf }
	__asm { L_005faebd: }
	__asm { mov bl, 1 }
	__asm { L_005faebf: }
	__asm { push 0xe24f44 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dad6c], eax }
	__asm { test eax, eax }
	__asm { je L_005faed3 }
	__asm { test bl, bl }
	__asm { je L_005faed5 }
	__asm { L_005faed3: }
	__asm { mov bl, 1 }
	__asm { L_005faed5: }
	__asm { push 0xe24f5c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dad70], eax }
	__asm { test eax, eax }
	__asm { je L_005faee9 }
	__asm { test bl, bl }
	__asm { je L_005faeeb }
	__asm { L_005faee9: }
	__asm { mov bl, 1 }
	__asm { L_005faeeb: }
	__asm { push 0xe24f74 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dad7c], eax }
	__asm { test eax, eax }
	__asm { je L_005faeff }
	__asm { test bl, bl }
	__asm { je L_005faf01 }
	__asm { L_005faeff: }
	__asm { mov bl, 1 }
	__asm { L_005faf01: }
	__asm { push 0xe24f8c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dad84], eax }
	__asm { test eax, eax }
	__asm { je L_005faf15 }
	__asm { test bl, bl }
	__asm { je L_005faf17 }
	__asm { L_005faf15: }
	__asm { mov bl, 1 }
	__asm { L_005faf17: }
	__asm { push 0xe24fa4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dad8c], eax }
	__asm { test eax, eax }
	__asm { je L_005faf2b }
	__asm { test bl, bl }
	__asm { je L_005faf2d }
	__asm { L_005faf2b: }
	__asm { mov bl, 1 }
	__asm { L_005faf2d: }
	__asm { push 0xe24fbc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dad94], eax }
	__asm { test eax, eax }
	__asm { je L_005faf41 }
	__asm { test bl, bl }
	__asm { je L_005faf43 }
	__asm { L_005faf41: }
	__asm { mov bl, 1 }
	__asm { L_005faf43: }
	__asm { push 0xe24fd4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dada4], eax }
	__asm { test eax, eax }
	__asm { je L_005faf57 }
	__asm { test bl, bl }
	__asm { je L_005faf59 }
	__asm { L_005faf57: }
	__asm { mov bl, 1 }
	__asm { L_005faf59: }
	__asm { push 0xe24fec }
	__asm { call esi }
	__asm { mov dword ptr [g_012dada8], eax }
	__asm { test eax, eax }
	__asm { je L_005faf6d }
	__asm { test bl, bl }
	__asm { je L_005faf6f }
	__asm { L_005faf6d: }
	__asm { mov bl, 1 }
	__asm { L_005faf6f: }
	__asm { push 0xe25004 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dadb0], eax }
	__asm { test eax, eax }
	__asm { je L_005faf83 }
	__asm { test bl, bl }
	__asm { je L_005faf85 }
	__asm { L_005faf83: }
	__asm { mov bl, 1 }
	__asm { L_005faf85: }
	__asm { push 0xe2501c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dadb8], eax }
	__asm { test eax, eax }
	__asm { je L_005faf99 }
	__asm { test bl, bl }
	__asm { je L_005faf9b }
	__asm { L_005faf99: }
	__asm { mov bl, 1 }
	__asm { L_005faf9b: }
	__asm { push 0xe25034 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dadc8], eax }
	__asm { test eax, eax }
	__asm { je L_005fafaf }
	__asm { test bl, bl }
	__asm { je L_005fafb1 }
	__asm { L_005fafaf: }
	__asm { mov bl, 1 }
	__asm { L_005fafb1: }
	__asm { push 0xe2504c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dadd0], eax }
	__asm { test eax, eax }
	__asm { je L_005fafc5 }
	__asm { test bl, bl }
	__asm { je L_005fafc7 }
	__asm { L_005fafc5: }
	__asm { mov bl, 1 }
	__asm { L_005fafc7: }
	__asm { push 0xe25064 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dadd4], eax }
	__asm { test eax, eax }
	__asm { je L_005fafdb }
	__asm { test bl, bl }
	__asm { je L_005fafdd }
	__asm { L_005fafdb: }
	__asm { mov bl, 1 }
	__asm { L_005fafdd: }
	__asm { push 0xe2507c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dade0], eax }
	__asm { test eax, eax }
	__asm { je L_005faff1 }
	__asm { test bl, bl }
	__asm { je L_005faff3 }
	__asm { L_005faff1: }
	__asm { mov bl, 1 }
	__asm { L_005faff3: }
	__asm { push 0xe25094 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dade8], eax }
	__asm { test eax, eax }
	__asm { je L_005fb00c }
	__asm { test bl, bl }
	__asm { jne L_005fb00c }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fb00c: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dafd0[];
extern "C" char g_012dafd4[];
extern "C" char g_012dafe4[];
extern "C" char g_012dafe8[];
extern "C" char g_012daff4[];
extern "C" char g_012daffc[];
extern "C" char g_012db004[];
extern "C" char g_012db010[];
extern "C" char g_012db018[];
extern "C" char g_012db020[];
extern "C" char g_012db028[];
extern "C" char g_012db034[];
extern "C" char g_012db03c[];
extern "C" char g_012db040[];
extern "C" char g_012db04c[];
extern "C" char g_012db058[];
extern "C" char g_012db060[];
extern "C" char g_012db064[];
extern "C" char g_012db070[];
extern "C" char g_012db078[];
extern "C" char g_012db080[];
extern "C" char g_012db08c[];
extern "C" char g_012db094[];
extern "C" char g_012db0a0[];
extern "C" char g_012db0a4[];
extern "C" char g_012db0b0[];
extern "C" char g_012db0bc[];
extern "C" char g_012db0c4[];
extern "C" char g_012db0c8[];
extern "C" char g_012db0d4[];
extern "C" char g_012db0dc[];
extern "C" char g_012db0e4[];
extern "C" char g_012db0f0[];
extern "C" char g_012db0fc[];
extern "C" char g_012db104[];
extern "C" char g_012db108[];
extern "C" char g_012db114[];
extern "C" char g_012db118[];
extern "C" char g_012db124[];
extern "C" char g_012db12c[];
extern "C" char g_012db138[];
extern "C" char g_012db13c[];
// FUNCTION: ROBLOXSTUDIO 0x005fb570
extern "C" __declspec(naked) void asm_005fb570()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe25588 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe255a0 }
	__asm { mov dword ptr [g_012dafd0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafd4], eax }
	__asm { test eax, eax }
	__asm { je L_005fb59d }
	__asm { test bl, bl }
	__asm { je L_005fb59f }
	__asm { L_005fb59d: }
	__asm { mov bl, 1 }
	__asm { L_005fb59f: }
	__asm { push 0xe255b8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafe4], eax }
	__asm { test eax, eax }
	__asm { je L_005fb5b3 }
	__asm { test bl, bl }
	__asm { je L_005fb5b5 }
	__asm { L_005fb5b3: }
	__asm { mov bl, 1 }
	__asm { L_005fb5b5: }
	__asm { push 0xe255d4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafe8], eax }
	__asm { test eax, eax }
	__asm { je L_005fb5c9 }
	__asm { test bl, bl }
	__asm { je L_005fb5cb }
	__asm { L_005fb5c9: }
	__asm { mov bl, 1 }
	__asm { L_005fb5cb: }
	__asm { push 0xe255e8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daff4], eax }
	__asm { test eax, eax }
	__asm { je L_005fb5df }
	__asm { test bl, bl }
	__asm { je L_005fb5e1 }
	__asm { L_005fb5df: }
	__asm { mov bl, 1 }
	__asm { L_005fb5e1: }
	__asm { push 0xe25604 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daffc], eax }
	__asm { test eax, eax }
	__asm { je L_005fb5f5 }
	__asm { test bl, bl }
	__asm { je L_005fb5f7 }
	__asm { L_005fb5f5: }
	__asm { mov bl, 1 }
	__asm { L_005fb5f7: }
	__asm { push 0xe25624 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db004], eax }
	__asm { test eax, eax }
	__asm { je L_005fb60b }
	__asm { test bl, bl }
	__asm { je L_005fb60d }
	__asm { L_005fb60b: }
	__asm { mov bl, 1 }
	__asm { L_005fb60d: }
	__asm { push 0xe2563c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db010], eax }
	__asm { test eax, eax }
	__asm { je L_005fb621 }
	__asm { test bl, bl }
	__asm { je L_005fb623 }
	__asm { L_005fb621: }
	__asm { mov bl, 1 }
	__asm { L_005fb623: }
	__asm { push 0xe25654 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db018], eax }
	__asm { test eax, eax }
	__asm { je L_005fb637 }
	__asm { test bl, bl }
	__asm { je L_005fb639 }
	__asm { L_005fb637: }
	__asm { mov bl, 1 }
	__asm { L_005fb639: }
	__asm { push 0xe25674 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db020], eax }
	__asm { test eax, eax }
	__asm { je L_005fb64d }
	__asm { test bl, bl }
	__asm { je L_005fb64f }
	__asm { L_005fb64d: }
	__asm { mov bl, 1 }
	__asm { L_005fb64f: }
	__asm { push 0xe25694 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db028], eax }
	__asm { test eax, eax }
	__asm { je L_005fb663 }
	__asm { test bl, bl }
	__asm { je L_005fb665 }
	__asm { L_005fb663: }
	__asm { mov bl, 1 }
	__asm { L_005fb665: }
	__asm { push 0xe256ac }
	__asm { call esi }
	__asm { mov dword ptr [g_012db034], eax }
	__asm { test eax, eax }
	__asm { je L_005fb679 }
	__asm { test bl, bl }
	__asm { je L_005fb67b }
	__asm { L_005fb679: }
	__asm { mov bl, 1 }
	__asm { L_005fb67b: }
	__asm { push 0xe256c4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db03c], eax }
	__asm { test eax, eax }
	__asm { je L_005fb68f }
	__asm { test bl, bl }
	__asm { je L_005fb691 }
	__asm { L_005fb68f: }
	__asm { mov bl, 1 }
	__asm { L_005fb691: }
	__asm { push 0xe256d4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db040], eax }
	__asm { test eax, eax }
	__asm { je L_005fb6a5 }
	__asm { test bl, bl }
	__asm { je L_005fb6a7 }
	__asm { L_005fb6a5: }
	__asm { mov bl, 1 }
	__asm { L_005fb6a7: }
	__asm { push 0xe256ec }
	__asm { call esi }
	__asm { mov dword ptr [g_012db04c], eax }
	__asm { test eax, eax }
	__asm { je L_005fb6bb }
	__asm { test bl, bl }
	__asm { je L_005fb6bd }
	__asm { L_005fb6bb: }
	__asm { mov bl, 1 }
	__asm { L_005fb6bd: }
	__asm { push 0xe25708 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db058], eax }
	__asm { test eax, eax }
	__asm { je L_005fb6d1 }
	__asm { test bl, bl }
	__asm { je L_005fb6d3 }
	__asm { L_005fb6d1: }
	__asm { mov bl, 1 }
	__asm { L_005fb6d3: }
	__asm { push 0xe25720 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db060], eax }
	__asm { test eax, eax }
	__asm { je L_005fb6e7 }
	__asm { test bl, bl }
	__asm { je L_005fb6e9 }
	__asm { L_005fb6e7: }
	__asm { mov bl, 1 }
	__asm { L_005fb6e9: }
	__asm { push 0xe2573c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db064], eax }
	__asm { test eax, eax }
	__asm { je L_005fb6fd }
	__asm { test bl, bl }
	__asm { je L_005fb6ff }
	__asm { L_005fb6fd: }
	__asm { mov bl, 1 }
	__asm { L_005fb6ff: }
	__asm { push 0xe2575c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db070], eax }
	__asm { test eax, eax }
	__asm { je L_005fb713 }
	__asm { test bl, bl }
	__asm { je L_005fb715 }
	__asm { L_005fb713: }
	__asm { mov bl, 1 }
	__asm { L_005fb715: }
	__asm { push 0xe25778 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db078], eax }
	__asm { test eax, eax }
	__asm { je L_005fb729 }
	__asm { test bl, bl }
	__asm { je L_005fb72b }
	__asm { L_005fb729: }
	__asm { mov bl, 1 }
	__asm { L_005fb72b: }
	__asm { push 0xe25798 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db080], eax }
	__asm { test eax, eax }
	__asm { je L_005fb73f }
	__asm { test bl, bl }
	__asm { je L_005fb741 }
	__asm { L_005fb73f: }
	__asm { mov bl, 1 }
	__asm { L_005fb741: }
	__asm { push 0xe257b0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db08c], eax }
	__asm { test eax, eax }
	__asm { je L_005fb755 }
	__asm { test bl, bl }
	__asm { je L_005fb757 }
	__asm { L_005fb755: }
	__asm { mov bl, 1 }
	__asm { L_005fb757: }
	__asm { push 0xe257c8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db094], eax }
	__asm { test eax, eax }
	__asm { je L_005fb76b }
	__asm { test bl, bl }
	__asm { je L_005fb76d }
	__asm { L_005fb76b: }
	__asm { mov bl, 1 }
	__asm { L_005fb76d: }
	__asm { push 0xe257e0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db0a0], eax }
	__asm { test eax, eax }
	__asm { je L_005fb781 }
	__asm { test bl, bl }
	__asm { je L_005fb783 }
	__asm { L_005fb781: }
	__asm { mov bl, 1 }
	__asm { L_005fb783: }
	__asm { push 0xe257f8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db0a4], eax }
	__asm { test eax, eax }
	__asm { je L_005fb797 }
	__asm { test bl, bl }
	__asm { je L_005fb799 }
	__asm { L_005fb797: }
	__asm { mov bl, 1 }
	__asm { L_005fb799: }
	__asm { push 0xe25810 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db0b0], eax }
	__asm { test eax, eax }
	__asm { je L_005fb7ad }
	__asm { test bl, bl }
	__asm { je L_005fb7af }
	__asm { L_005fb7ad: }
	__asm { mov bl, 1 }
	__asm { L_005fb7af: }
	__asm { push 0xe25828 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db0bc], eax }
	__asm { test eax, eax }
	__asm { je L_005fb7c3 }
	__asm { test bl, bl }
	__asm { je L_005fb7c5 }
	__asm { L_005fb7c3: }
	__asm { mov bl, 1 }
	__asm { L_005fb7c5: }
	__asm { push 0xe2583c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db0c4], eax }
	__asm { test eax, eax }
	__asm { je L_005fb7d9 }
	__asm { test bl, bl }
	__asm { je L_005fb7db }
	__asm { L_005fb7d9: }
	__asm { mov bl, 1 }
	__asm { L_005fb7db: }
	__asm { push 0xe25854 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db0c8], eax }
	__asm { test eax, eax }
	__asm { je L_005fb7ef }
	__asm { test bl, bl }
	__asm { je L_005fb7f1 }
	__asm { L_005fb7ef: }
	__asm { mov bl, 1 }
	__asm { L_005fb7f1: }
	__asm { push 0xe25864 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db0d4], eax }
	__asm { test eax, eax }
	__asm { je L_005fb805 }
	__asm { test bl, bl }
	__asm { je L_005fb807 }
	__asm { L_005fb805: }
	__asm { mov bl, 1 }
	__asm { L_005fb807: }
	__asm { push 0xe25874 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db0dc], eax }
	__asm { test eax, eax }
	__asm { je L_005fb81b }
	__asm { test bl, bl }
	__asm { je L_005fb81d }
	__asm { L_005fb81b: }
	__asm { mov bl, 1 }
	__asm { L_005fb81d: }
	__asm { push 0xe25884 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db0e4], eax }
	__asm { test eax, eax }
	__asm { je L_005fb831 }
	__asm { test bl, bl }
	__asm { je L_005fb833 }
	__asm { L_005fb831: }
	__asm { mov bl, 1 }
	__asm { L_005fb833: }
	__asm { push 0xe25894 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db0f0], eax }
	__asm { test eax, eax }
	__asm { je L_005fb847 }
	__asm { test bl, bl }
	__asm { je L_005fb849 }
	__asm { L_005fb847: }
	__asm { mov bl, 1 }
	__asm { L_005fb849: }
	__asm { push 0xe258a8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db0fc], eax }
	__asm { test eax, eax }
	__asm { je L_005fb85d }
	__asm { test bl, bl }
	__asm { je L_005fb85f }
	__asm { L_005fb85d: }
	__asm { mov bl, 1 }
	__asm { L_005fb85f: }
	__asm { push 0xe258b8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db104], eax }
	__asm { test eax, eax }
	__asm { je L_005fb873 }
	__asm { test bl, bl }
	__asm { je L_005fb875 }
	__asm { L_005fb873: }
	__asm { mov bl, 1 }
	__asm { L_005fb875: }
	__asm { push 0xe258c8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db108], eax }
	__asm { test eax, eax }
	__asm { je L_005fb889 }
	__asm { test bl, bl }
	__asm { je L_005fb88b }
	__asm { L_005fb889: }
	__asm { mov bl, 1 }
	__asm { L_005fb88b: }
	__asm { push 0xe258d8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db114], eax }
	__asm { test eax, eax }
	__asm { je L_005fb89f }
	__asm { test bl, bl }
	__asm { je L_005fb8a1 }
	__asm { L_005fb89f: }
	__asm { mov bl, 1 }
	__asm { L_005fb8a1: }
	__asm { push 0xe258e8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db118], eax }
	__asm { test eax, eax }
	__asm { je L_005fb8b5 }
	__asm { test bl, bl }
	__asm { je L_005fb8b7 }
	__asm { L_005fb8b5: }
	__asm { mov bl, 1 }
	__asm { L_005fb8b7: }
	__asm { push 0xe258f8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db124], eax }
	__asm { test eax, eax }
	__asm { je L_005fb8cb }
	__asm { test bl, bl }
	__asm { je L_005fb8cd }
	__asm { L_005fb8cb: }
	__asm { mov bl, 1 }
	__asm { L_005fb8cd: }
	__asm { push 0xe25908 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db12c], eax }
	__asm { test eax, eax }
	__asm { je L_005fb8e1 }
	__asm { test bl, bl }
	__asm { je L_005fb8e3 }
	__asm { L_005fb8e1: }
	__asm { mov bl, 1 }
	__asm { L_005fb8e3: }
	__asm { push 0xe25918 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db138], eax }
	__asm { test eax, eax }
	__asm { je L_005fb8f7 }
	__asm { test bl, bl }
	__asm { je L_005fb8f9 }
	__asm { L_005fb8f7: }
	__asm { mov bl, 1 }
	__asm { L_005fb8f9: }
	__asm { push 0xe25928 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db13c], eax }
	__asm { test eax, eax }
	__asm { je L_005fb912 }
	__asm { test bl, bl }
	__asm { jne L_005fb912 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fb912: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db2f4[];
extern "C" char g_012db2fc[];
extern "C" char g_012db300[];
extern "C" char g_012db30c[];
extern "C" char g_012db314[];
extern "C" char g_012db31c[];
extern "C" char g_012db328[];
extern "C" char g_012db330[];
extern "C" char g_012db338[];
extern "C" char g_012db340[];
extern "C" char g_012db34c[];
extern "C" char g_012db354[];
extern "C" char g_012db360[];
extern "C" char g_012db364[];
extern "C" char g_012db370[];
extern "C" char g_012db374[];
extern "C" char g_012db380[];
extern "C" char g_012db38c[];
extern "C" char g_012db390[];
extern "C" char g_012db39c[];
extern "C" char g_012db3a8[];
extern "C" char g_012db3b0[];
extern "C" char g_012db3b4[];
extern "C" char g_012db3c0[];
// FUNCTION: ROBLOXSTUDIO 0x005fbdf0
extern "C" __declspec(naked) void asm_005fbdf0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe25db0 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe25dc4 }
	__asm { mov dword ptr [g_012db2f4], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db2fc], eax }
	__asm { test eax, eax }
	__asm { je L_005fbe1d }
	__asm { test bl, bl }
	__asm { je L_005fbe1f }
	__asm { L_005fbe1d: }
	__asm { mov bl, 1 }
	__asm { L_005fbe1f: }
	__asm { push 0xe25dd8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db300], eax }
	__asm { test eax, eax }
	__asm { je L_005fbe33 }
	__asm { test bl, bl }
	__asm { je L_005fbe35 }
	__asm { L_005fbe33: }
	__asm { mov bl, 1 }
	__asm { L_005fbe35: }
	__asm { push 0xe25dec }
	__asm { call esi }
	__asm { mov dword ptr [g_012db30c], eax }
	__asm { test eax, eax }
	__asm { je L_005fbe49 }
	__asm { test bl, bl }
	__asm { je L_005fbe4b }
	__asm { L_005fbe49: }
	__asm { mov bl, 1 }
	__asm { L_005fbe4b: }
	__asm { push 0xe25e00 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db314], eax }
	__asm { test eax, eax }
	__asm { je L_005fbe5f }
	__asm { test bl, bl }
	__asm { je L_005fbe61 }
	__asm { L_005fbe5f: }
	__asm { mov bl, 1 }
	__asm { L_005fbe61: }
	__asm { push 0xe25e14 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db31c], eax }
	__asm { test eax, eax }
	__asm { je L_005fbe75 }
	__asm { test bl, bl }
	__asm { je L_005fbe77 }
	__asm { L_005fbe75: }
	__asm { mov bl, 1 }
	__asm { L_005fbe77: }
	__asm { push 0xe25e28 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db328], eax }
	__asm { test eax, eax }
	__asm { je L_005fbe8b }
	__asm { test bl, bl }
	__asm { je L_005fbe8d }
	__asm { L_005fbe8b: }
	__asm { mov bl, 1 }
	__asm { L_005fbe8d: }
	__asm { push 0xe25e3c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db330], eax }
	__asm { test eax, eax }
	__asm { je L_005fbea1 }
	__asm { test bl, bl }
	__asm { je L_005fbea3 }
	__asm { L_005fbea1: }
	__asm { mov bl, 1 }
	__asm { L_005fbea3: }
	__asm { push 0xe25e50 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db338], eax }
	__asm { test eax, eax }
	__asm { je L_005fbeb7 }
	__asm { test bl, bl }
	__asm { je L_005fbeb9 }
	__asm { L_005fbeb7: }
	__asm { mov bl, 1 }
	__asm { L_005fbeb9: }
	__asm { push 0xe25e64 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db340], eax }
	__asm { test eax, eax }
	__asm { je L_005fbecd }
	__asm { test bl, bl }
	__asm { je L_005fbecf }
	__asm { L_005fbecd: }
	__asm { mov bl, 1 }
	__asm { L_005fbecf: }
	__asm { push 0xe25e78 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db34c], eax }
	__asm { test eax, eax }
	__asm { je L_005fbee3 }
	__asm { test bl, bl }
	__asm { je L_005fbee5 }
	__asm { L_005fbee3: }
	__asm { mov bl, 1 }
	__asm { L_005fbee5: }
	__asm { push 0xe25e8c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db354], eax }
	__asm { test eax, eax }
	__asm { je L_005fbef9 }
	__asm { test bl, bl }
	__asm { je L_005fbefb }
	__asm { L_005fbef9: }
	__asm { mov bl, 1 }
	__asm { L_005fbefb: }
	__asm { push 0xe25ea0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db360], eax }
	__asm { test eax, eax }
	__asm { je L_005fbf0f }
	__asm { test bl, bl }
	__asm { je L_005fbf11 }
	__asm { L_005fbf0f: }
	__asm { mov bl, 1 }
	__asm { L_005fbf11: }
	__asm { push 0xe25eb4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db364], eax }
	__asm { test eax, eax }
	__asm { je L_005fbf25 }
	__asm { test bl, bl }
	__asm { je L_005fbf27 }
	__asm { L_005fbf25: }
	__asm { mov bl, 1 }
	__asm { L_005fbf27: }
	__asm { push 0xe25ec8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db370], eax }
	__asm { test eax, eax }
	__asm { je L_005fbf3b }
	__asm { test bl, bl }
	__asm { je L_005fbf3d }
	__asm { L_005fbf3b: }
	__asm { mov bl, 1 }
	__asm { L_005fbf3d: }
	__asm { push 0xe25edc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db374], eax }
	__asm { test eax, eax }
	__asm { je L_005fbf51 }
	__asm { test bl, bl }
	__asm { je L_005fbf53 }
	__asm { L_005fbf51: }
	__asm { mov bl, 1 }
	__asm { L_005fbf53: }
	__asm { push 0xe25ef0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db380], eax }
	__asm { test eax, eax }
	__asm { je L_005fbf67 }
	__asm { test bl, bl }
	__asm { je L_005fbf69 }
	__asm { L_005fbf67: }
	__asm { mov bl, 1 }
	__asm { L_005fbf69: }
	__asm { push 0xe25f04 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db38c], eax }
	__asm { test eax, eax }
	__asm { je L_005fbf7d }
	__asm { test bl, bl }
	__asm { je L_005fbf7f }
	__asm { L_005fbf7d: }
	__asm { mov bl, 1 }
	__asm { L_005fbf7f: }
	__asm { push 0xe25f18 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db390], eax }
	__asm { test eax, eax }
	__asm { je L_005fbf93 }
	__asm { test bl, bl }
	__asm { je L_005fbf95 }
	__asm { L_005fbf93: }
	__asm { mov bl, 1 }
	__asm { L_005fbf95: }
	__asm { push 0xe25f2c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db39c], eax }
	__asm { test eax, eax }
	__asm { je L_005fbfa9 }
	__asm { test bl, bl }
	__asm { je L_005fbfab }
	__asm { L_005fbfa9: }
	__asm { mov bl, 1 }
	__asm { L_005fbfab: }
	__asm { push 0xe25f40 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db3a8], eax }
	__asm { test eax, eax }
	__asm { je L_005fbfbf }
	__asm { test bl, bl }
	__asm { je L_005fbfc1 }
	__asm { L_005fbfbf: }
	__asm { mov bl, 1 }
	__asm { L_005fbfc1: }
	__asm { push 0xe25f54 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db3b0], eax }
	__asm { test eax, eax }
	__asm { je L_005fbfd5 }
	__asm { test bl, bl }
	__asm { je L_005fbfd7 }
	__asm { L_005fbfd5: }
	__asm { mov bl, 1 }
	__asm { L_005fbfd7: }
	__asm { push 0xe25f68 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db3b4], eax }
	__asm { test eax, eax }
	__asm { je L_005fbfeb }
	__asm { test bl, bl }
	__asm { je L_005fbfed }
	__asm { L_005fbfeb: }
	__asm { mov bl, 1 }
	__asm { L_005fbfed: }
	__asm { push 0xe25f7c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db3c0], eax }
	__asm { test eax, eax }
	__asm { je L_005fc006 }
	__asm { test bl, bl }
	__asm { jne L_005fc006 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fc006: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db3e8[];
extern "C" char g_012db3f4[];
extern "C" char g_012db400[];
extern "C" char g_012db404[];
extern "C" char g_012db414[];
extern "C" char g_012db41c[];
extern "C" char g_012db420[];
extern "C" char g_012db42c[];
extern "C" char g_012db434[];
extern "C" char g_012db444[];
extern "C" char g_012db450[];
extern "C" char g_012db464[];
extern "C" char g_012db470[];
// FUNCTION: ROBLOXSTUDIO 0x005fc090
extern "C" __declspec(naked) void asm_005fc090()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe26014 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe26028 }
	__asm { mov dword ptr [g_012db3e8], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db3f4], eax }
	__asm { test eax, eax }
	__asm { je L_005fc0bd }
	__asm { test bl, bl }
	__asm { je L_005fc0bf }
	__asm { L_005fc0bd: }
	__asm { mov bl, 1 }
	__asm { L_005fc0bf: }
	__asm { push 0xe26040 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db400], eax }
	__asm { test eax, eax }
	__asm { je L_005fc0d3 }
	__asm { test bl, bl }
	__asm { je L_005fc0d5 }
	__asm { L_005fc0d3: }
	__asm { mov bl, 1 }
	__asm { L_005fc0d5: }
	__asm { push 0xe2605c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db404], eax }
	__asm { test eax, eax }
	__asm { je L_005fc0e9 }
	__asm { test bl, bl }
	__asm { je L_005fc0eb }
	__asm { L_005fc0e9: }
	__asm { mov bl, 1 }
	__asm { L_005fc0eb: }
	__asm { push 0xe26078 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db414], eax }
	__asm { test eax, eax }
	__asm { je L_005fc0ff }
	__asm { test bl, bl }
	__asm { je L_005fc101 }
	__asm { L_005fc0ff: }
	__asm { mov bl, 1 }
	__asm { L_005fc101: }
	__asm { push 0xe26094 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db41c], eax }
	__asm { test eax, eax }
	__asm { je L_005fc115 }
	__asm { test bl, bl }
	__asm { je L_005fc117 }
	__asm { L_005fc115: }
	__asm { mov bl, 1 }
	__asm { L_005fc117: }
	__asm { push 0xe260b4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db420], eax }
	__asm { test eax, eax }
	__asm { je L_005fc12b }
	__asm { test bl, bl }
	__asm { je L_005fc12d }
	__asm { L_005fc12b: }
	__asm { mov bl, 1 }
	__asm { L_005fc12d: }
	__asm { push 0xe260d0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db42c], eax }
	__asm { test eax, eax }
	__asm { je L_005fc141 }
	__asm { test bl, bl }
	__asm { je L_005fc143 }
	__asm { L_005fc141: }
	__asm { mov bl, 1 }
	__asm { L_005fc143: }
	__asm { push 0xe260f4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db434], eax }
	__asm { test eax, eax }
	__asm { je L_005fc157 }
	__asm { test bl, bl }
	__asm { je L_005fc159 }
	__asm { L_005fc157: }
	__asm { mov bl, 1 }
	__asm { L_005fc159: }
	__asm { push 0xe26114 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db444], eax }
	__asm { test eax, eax }
	__asm { je L_005fc16d }
	__asm { test bl, bl }
	__asm { je L_005fc16f }
	__asm { L_005fc16d: }
	__asm { mov bl, 1 }
	__asm { L_005fc16f: }
	__asm { push 0xe26134 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db450], eax }
	__asm { test eax, eax }
	__asm { je L_005fc183 }
	__asm { test bl, bl }
	__asm { je L_005fc185 }
	__asm { L_005fc183: }
	__asm { mov bl, 1 }
	__asm { L_005fc185: }
	__asm { push 0xe26154 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db464], eax }
	__asm { test eax, eax }
	__asm { je L_005fc199 }
	__asm { test bl, bl }
	__asm { je L_005fc19b }
	__asm { L_005fc199: }
	__asm { mov bl, 1 }
	__asm { L_005fc19b: }
	__asm { push 0xe2616c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db470], eax }
	__asm { test eax, eax }
	__asm { je L_005fc1b4 }
	__asm { test bl, bl }
	__asm { jne L_005fc1b4 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fc1b4: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db644[];
extern "C" char g_012db654[];
extern "C" char g_012db660[];
extern "C" char g_012db668[];
extern "C" char g_012db670[];
extern "C" char g_012db67c[];
extern "C" char g_012db688[];
extern "C" char g_012db694[];
extern "C" char g_012db6ac[];
extern "C" char g_012db6bc[];
extern "C" char g_012db6c4[];
extern "C" char g_012db6d0[];
// FUNCTION: ROBLOXSTUDIO 0x005fc580
extern "C" __declspec(naked) void asm_005fc580()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe264c0 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe264dc }
	__asm { mov dword ptr [g_012db644], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db654], eax }
	__asm { test eax, eax }
	__asm { je L_005fc5ad }
	__asm { test bl, bl }
	__asm { je L_005fc5af }
	__asm { L_005fc5ad: }
	__asm { mov bl, 1 }
	__asm { L_005fc5af: }
	__asm { push 0xe264f8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db660], eax }
	__asm { test eax, eax }
	__asm { je L_005fc5c3 }
	__asm { test bl, bl }
	__asm { je L_005fc5c5 }
	__asm { L_005fc5c3: }
	__asm { mov bl, 1 }
	__asm { L_005fc5c5: }
	__asm { push 0xe26514 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db668], eax }
	__asm { test eax, eax }
	__asm { je L_005fc5d9 }
	__asm { test bl, bl }
	__asm { je L_005fc5db }
	__asm { L_005fc5d9: }
	__asm { mov bl, 1 }
	__asm { L_005fc5db: }
	__asm { push 0xe26534 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db670], eax }
	__asm { test eax, eax }
	__asm { je L_005fc5ef }
	__asm { test bl, bl }
	__asm { je L_005fc5f1 }
	__asm { L_005fc5ef: }
	__asm { mov bl, 1 }
	__asm { L_005fc5f1: }
	__asm { push 0xe26554 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db67c], eax }
	__asm { test eax, eax }
	__asm { je L_005fc605 }
	__asm { test bl, bl }
	__asm { je L_005fc607 }
	__asm { L_005fc605: }
	__asm { mov bl, 1 }
	__asm { L_005fc607: }
	__asm { push 0xe26574 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db688], eax }
	__asm { test eax, eax }
	__asm { je L_005fc61b }
	__asm { test bl, bl }
	__asm { je L_005fc61d }
	__asm { L_005fc61b: }
	__asm { mov bl, 1 }
	__asm { L_005fc61d: }
	__asm { push 0xe26594 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db694], eax }
	__asm { test eax, eax }
	__asm { je L_005fc631 }
	__asm { test bl, bl }
	__asm { je L_005fc633 }
	__asm { L_005fc631: }
	__asm { mov bl, 1 }
	__asm { L_005fc633: }
	__asm { push 0xe265b4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db6ac], eax }
	__asm { test eax, eax }
	__asm { je L_005fc647 }
	__asm { test bl, bl }
	__asm { je L_005fc649 }
	__asm { L_005fc647: }
	__asm { mov bl, 1 }
	__asm { L_005fc649: }
	__asm { push 0xe265d4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db6bc], eax }
	__asm { test eax, eax }
	__asm { je L_005fc65d }
	__asm { test bl, bl }
	__asm { je L_005fc65f }
	__asm { L_005fc65d: }
	__asm { mov bl, 1 }
	__asm { L_005fc65f: }
	__asm { push 0xe265f4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db6c4], eax }
	__asm { test eax, eax }
	__asm { je L_005fc673 }
	__asm { test bl, bl }
	__asm { je L_005fc675 }
	__asm { L_005fc673: }
	__asm { mov bl, 1 }
	__asm { L_005fc675: }
	__asm { push 0xe26614 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db6d0], eax }
	__asm { test eax, eax }
	__asm { je L_005fc68e }
	__asm { test bl, bl }
	__asm { jne L_005fc68e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fc68e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db6dc[];
extern "C" char g_012db6e8[];
extern "C" char g_012db6f4[];
extern "C" char g_012db704[];
extern "C" char g_012db710[];
extern "C" char g_012db718[];
extern "C" char g_012db724[];
extern "C" char g_012db730[];
extern "C" char g_012db73c[];
extern "C" char g_012db748[];
extern "C" char g_012db750[];
extern "C" char g_012db75c[];
extern "C" char g_012db770[];
extern "C" char g_012db774[];
extern "C" char g_012db784[];
extern "C" char g_012db78c[];
extern "C" char g_012db7a0[];
extern "C" char g_012db7ac[];
extern "C" char g_012db7b4[];
extern "C" char g_012db7c4[];
extern "C" char g_012db7d0[];
extern "C" char g_012db7d8[];
extern "C" char g_012db7e8[];
extern "C" char g_012db7f4[];
extern "C" char g_012db7f8[];
extern "C" char g_012db804[];
extern "C" char g_012db814[];
extern "C" char g_012db81c[];
extern "C" char g_012db828[];
extern "C" char g_012db83c[];
extern "C" char g_012db840[];
extern "C" char g_012db84c[];
extern "C" char g_012db860[];
extern "C" char g_012db868[];
// FUNCTION: ROBLOXSTUDIO 0x005fc6a0
extern "C" __declspec(naked) void asm_005fc6a0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe26634 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe26648 }
	__asm { mov dword ptr [g_012db6dc], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db6e8], eax }
	__asm { test eax, eax }
	__asm { je L_005fc6cd }
	__asm { test bl, bl }
	__asm { je L_005fc6cf }
	__asm { L_005fc6cd: }
	__asm { mov bl, 1 }
	__asm { L_005fc6cf: }
	__asm { push 0xe2665c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db6f4], eax }
	__asm { test eax, eax }
	__asm { je L_005fc6e3 }
	__asm { test bl, bl }
	__asm { je L_005fc6e5 }
	__asm { L_005fc6e3: }
	__asm { mov bl, 1 }
	__asm { L_005fc6e5: }
	__asm { push 0xe26674 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db704], eax }
	__asm { test eax, eax }
	__asm { je L_005fc6f9 }
	__asm { test bl, bl }
	__asm { je L_005fc6fb }
	__asm { L_005fc6f9: }
	__asm { mov bl, 1 }
	__asm { L_005fc6fb: }
	__asm { push 0xe2668c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db710], eax }
	__asm { test eax, eax }
	__asm { je L_005fc70f }
	__asm { test bl, bl }
	__asm { je L_005fc711 }
	__asm { L_005fc70f: }
	__asm { mov bl, 1 }
	__asm { L_005fc711: }
	__asm { push 0xe266a4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db718], eax }
	__asm { test eax, eax }
	__asm { je L_005fc725 }
	__asm { test bl, bl }
	__asm { je L_005fc727 }
	__asm { L_005fc725: }
	__asm { mov bl, 1 }
	__asm { L_005fc727: }
	__asm { push 0xe266c0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db724], eax }
	__asm { test eax, eax }
	__asm { je L_005fc73b }
	__asm { test bl, bl }
	__asm { je L_005fc73d }
	__asm { L_005fc73b: }
	__asm { mov bl, 1 }
	__asm { L_005fc73d: }
	__asm { push 0xe266d8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db730], eax }
	__asm { test eax, eax }
	__asm { je L_005fc751 }
	__asm { test bl, bl }
	__asm { je L_005fc753 }
	__asm { L_005fc751: }
	__asm { mov bl, 1 }
	__asm { L_005fc753: }
	__asm { push 0xe266f0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db73c], eax }
	__asm { test eax, eax }
	__asm { je L_005fc767 }
	__asm { test bl, bl }
	__asm { je L_005fc769 }
	__asm { L_005fc767: }
	__asm { mov bl, 1 }
	__asm { L_005fc769: }
	__asm { push 0xe26708 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db748], eax }
	__asm { test eax, eax }
	__asm { je L_005fc77d }
	__asm { test bl, bl }
	__asm { je L_005fc77f }
	__asm { L_005fc77d: }
	__asm { mov bl, 1 }
	__asm { L_005fc77f: }
	__asm { push 0xe26724 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db750], eax }
	__asm { test eax, eax }
	__asm { je L_005fc793 }
	__asm { test bl, bl }
	__asm { je L_005fc795 }
	__asm { L_005fc793: }
	__asm { mov bl, 1 }
	__asm { L_005fc795: }
	__asm { push 0xe2673c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db75c], eax }
	__asm { test eax, eax }
	__asm { je L_005fc7a9 }
	__asm { test bl, bl }
	__asm { je L_005fc7ab }
	__asm { L_005fc7a9: }
	__asm { mov bl, 1 }
	__asm { L_005fc7ab: }
	__asm { push 0xe26754 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db770], eax }
	__asm { test eax, eax }
	__asm { je L_005fc7bf }
	__asm { test bl, bl }
	__asm { je L_005fc7c1 }
	__asm { L_005fc7bf: }
	__asm { mov bl, 1 }
	__asm { L_005fc7c1: }
	__asm { push 0xe2676c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db774], eax }
	__asm { test eax, eax }
	__asm { je L_005fc7d5 }
	__asm { test bl, bl }
	__asm { je L_005fc7d7 }
	__asm { L_005fc7d5: }
	__asm { mov bl, 1 }
	__asm { L_005fc7d7: }
	__asm { push 0xe26788 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db784], eax }
	__asm { test eax, eax }
	__asm { je L_005fc7eb }
	__asm { test bl, bl }
	__asm { je L_005fc7ed }
	__asm { L_005fc7eb: }
	__asm { mov bl, 1 }
	__asm { L_005fc7ed: }
	__asm { push 0xe267a0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db78c], eax }
	__asm { test eax, eax }
	__asm { je L_005fc801 }
	__asm { test bl, bl }
	__asm { je L_005fc803 }
	__asm { L_005fc801: }
	__asm { mov bl, 1 }
	__asm { L_005fc803: }
	__asm { push 0xe267b8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db7a0], eax }
	__asm { test eax, eax }
	__asm { je L_005fc817 }
	__asm { test bl, bl }
	__asm { je L_005fc819 }
	__asm { L_005fc817: }
	__asm { mov bl, 1 }
	__asm { L_005fc819: }
	__asm { push 0xe267d0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db7ac], eax }
	__asm { test eax, eax }
	__asm { je L_005fc82d }
	__asm { test bl, bl }
	__asm { je L_005fc82f }
	__asm { L_005fc82d: }
	__asm { mov bl, 1 }
	__asm { L_005fc82f: }
	__asm { push 0xe267ec }
	__asm { call esi }
	__asm { mov dword ptr [g_012db7b4], eax }
	__asm { test eax, eax }
	__asm { je L_005fc843 }
	__asm { test bl, bl }
	__asm { je L_005fc845 }
	__asm { L_005fc843: }
	__asm { mov bl, 1 }
	__asm { L_005fc845: }
	__asm { push 0xe267fc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db7c4], eax }
	__asm { test eax, eax }
	__asm { je L_005fc859 }
	__asm { test bl, bl }
	__asm { je L_005fc85b }
	__asm { L_005fc859: }
	__asm { mov bl, 1 }
	__asm { L_005fc85b: }
	__asm { push 0xe26810 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db7d0], eax }
	__asm { test eax, eax }
	__asm { je L_005fc86f }
	__asm { test bl, bl }
	__asm { je L_005fc871 }
	__asm { L_005fc86f: }
	__asm { mov bl, 1 }
	__asm { L_005fc871: }
	__asm { push 0xe26824 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db7d8], eax }
	__asm { test eax, eax }
	__asm { je L_005fc885 }
	__asm { test bl, bl }
	__asm { je L_005fc887 }
	__asm { L_005fc885: }
	__asm { mov bl, 1 }
	__asm { L_005fc887: }
	__asm { push 0xe26838 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db7e8], eax }
	__asm { test eax, eax }
	__asm { je L_005fc89b }
	__asm { test bl, bl }
	__asm { je L_005fc89d }
	__asm { L_005fc89b: }
	__asm { mov bl, 1 }
	__asm { L_005fc89d: }
	__asm { push 0xe26848 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db7f4], eax }
	__asm { test eax, eax }
	__asm { je L_005fc8b1 }
	__asm { test bl, bl }
	__asm { je L_005fc8b3 }
	__asm { L_005fc8b1: }
	__asm { mov bl, 1 }
	__asm { L_005fc8b3: }
	__asm { push 0xe2685c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db7f8], eax }
	__asm { test eax, eax }
	__asm { je L_005fc8c7 }
	__asm { test bl, bl }
	__asm { je L_005fc8c9 }
	__asm { L_005fc8c7: }
	__asm { mov bl, 1 }
	__asm { L_005fc8c9: }
	__asm { push 0xe26870 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db804], eax }
	__asm { test eax, eax }
	__asm { je L_005fc8dd }
	__asm { test bl, bl }
	__asm { je L_005fc8df }
	__asm { L_005fc8dd: }
	__asm { mov bl, 1 }
	__asm { L_005fc8df: }
	__asm { push 0xe26884 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db814], eax }
	__asm { test eax, eax }
	__asm { je L_005fc8f3 }
	__asm { test bl, bl }
	__asm { je L_005fc8f5 }
	__asm { L_005fc8f3: }
	__asm { mov bl, 1 }
	__asm { L_005fc8f5: }
	__asm { push 0xe26894 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db81c], eax }
	__asm { test eax, eax }
	__asm { je L_005fc909 }
	__asm { test bl, bl }
	__asm { je L_005fc90b }
	__asm { L_005fc909: }
	__asm { mov bl, 1 }
	__asm { L_005fc90b: }
	__asm { push 0xe268a8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db828], eax }
	__asm { test eax, eax }
	__asm { je L_005fc91f }
	__asm { test bl, bl }
	__asm { je L_005fc921 }
	__asm { L_005fc91f: }
	__asm { mov bl, 1 }
	__asm { L_005fc921: }
	__asm { push 0xe268bc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db83c], eax }
	__asm { test eax, eax }
	__asm { je L_005fc935 }
	__asm { test bl, bl }
	__asm { je L_005fc937 }
	__asm { L_005fc935: }
	__asm { mov bl, 1 }
	__asm { L_005fc937: }
	__asm { push 0xe268d0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db840], eax }
	__asm { test eax, eax }
	__asm { je L_005fc94b }
	__asm { test bl, bl }
	__asm { je L_005fc94d }
	__asm { L_005fc94b: }
	__asm { mov bl, 1 }
	__asm { L_005fc94d: }
	__asm { push 0xe268e0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db84c], eax }
	__asm { test eax, eax }
	__asm { je L_005fc961 }
	__asm { test bl, bl }
	__asm { je L_005fc963 }
	__asm { L_005fc961: }
	__asm { mov bl, 1 }
	__asm { L_005fc963: }
	__asm { push 0xe268f4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db860], eax }
	__asm { test eax, eax }
	__asm { je L_005fc977 }
	__asm { test bl, bl }
	__asm { je L_005fc979 }
	__asm { L_005fc977: }
	__asm { mov bl, 1 }
	__asm { L_005fc979: }
	__asm { push 0xe26908 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db868], eax }
	__asm { test eax, eax }
	__asm { je L_005fc992 }
	__asm { test bl, bl }
	__asm { jne L_005fc992 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fc992: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db874[];
extern "C" char g_012db884[];
extern "C" char g_012db890[];
extern "C" char g_012db898[];
extern "C" char g_012db8a0[];
extern "C" char g_012db8b4[];
extern "C" char g_012db8b8[];
extern "C" char g_012db8cc[];
extern "C" char g_012db8d4[];
extern "C" char g_012db8dc[];
extern "C" char g_012db8ec[];
extern "C" char g_012db8f8[];
extern "C" char g_012db904[];
extern "C" char g_012db910[];
extern "C" char g_012db920[];
extern "C" char g_012db928[];
extern "C" char g_012db938[];
extern "C" char g_012db93c[];
extern "C" char g_012db950[];
extern "C" char g_012db958[];
extern "C" char g_012db968[];
extern "C" char g_012db974[];
extern "C" char g_012db97c[];
extern "C" char g_012db984[];
extern "C" char g_012db994[];
extern "C" char g_012db9a0[];
extern "C" char g_012db9b0[];
extern "C" char g_012db9bc[];
extern "C" char g_012db9c4[];
extern "C" char g_012db9cc[];
extern "C" char g_012db9dc[];
extern "C" char g_012db9e8[];
extern "C" char g_012db9f0[];
extern "C" char g_012db9f4[];
extern "C" char g_012db9fc[];
extern "C" char g_012dba0c[];
extern "C" char g_012dba14[];
extern "C" char g_012dba18[];
extern "C" char g_012dba20[];
extern "C" char g_012dba30[];
extern "C" char g_012dba34[];
extern "C" char g_012dba3c[];
extern "C" char g_012dba4c[];
extern "C" char g_012dba50[];
extern "C" char g_012dba58[];
extern "C" char g_012dba64[];
// FUNCTION: ROBLOXSTUDIO 0x005fc9a0
extern "C" __declspec(naked) void asm_005fc9a0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2691c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe26928 }
	__asm { mov dword ptr [g_012db874], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db884], eax }
	__asm { test eax, eax }
	__asm { je L_005fc9cd }
	__asm { test bl, bl }
	__asm { je L_005fc9cf }
	__asm { L_005fc9cd: }
	__asm { mov bl, 1 }
	__asm { L_005fc9cf: }
	__asm { push 0xe26938 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db890], eax }
	__asm { test eax, eax }
	__asm { je L_005fc9e3 }
	__asm { test bl, bl }
	__asm { je L_005fc9e5 }
	__asm { L_005fc9e3: }
	__asm { mov bl, 1 }
	__asm { L_005fc9e5: }
	__asm { push 0xe26944 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db898], eax }
	__asm { test eax, eax }
	__asm { je L_005fc9f9 }
	__asm { test bl, bl }
	__asm { je L_005fc9fb }
	__asm { L_005fc9f9: }
	__asm { mov bl, 1 }
	__asm { L_005fc9fb: }
	__asm { push 0xe26954 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db8a0], eax }
	__asm { test eax, eax }
	__asm { je L_005fca0f }
	__asm { test bl, bl }
	__asm { je L_005fca11 }
	__asm { L_005fca0f: }
	__asm { mov bl, 1 }
	__asm { L_005fca11: }
	__asm { push 0xe26964 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db8b4], eax }
	__asm { test eax, eax }
	__asm { je L_005fca25 }
	__asm { test bl, bl }
	__asm { je L_005fca27 }
	__asm { L_005fca25: }
	__asm { mov bl, 1 }
	__asm { L_005fca27: }
	__asm { push 0xe26974 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db8b8], eax }
	__asm { test eax, eax }
	__asm { je L_005fca3b }
	__asm { test bl, bl }
	__asm { je L_005fca3d }
	__asm { L_005fca3b: }
	__asm { mov bl, 1 }
	__asm { L_005fca3d: }
	__asm { push 0xe26988 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db8cc], eax }
	__asm { test eax, eax }
	__asm { je L_005fca51 }
	__asm { test bl, bl }
	__asm { je L_005fca53 }
	__asm { L_005fca51: }
	__asm { mov bl, 1 }
	__asm { L_005fca53: }
	__asm { push 0xe269a0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db8d4], eax }
	__asm { test eax, eax }
	__asm { je L_005fca67 }
	__asm { test bl, bl }
	__asm { je L_005fca69 }
	__asm { L_005fca67: }
	__asm { mov bl, 1 }
	__asm { L_005fca69: }
	__asm { push 0xe269b4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db8dc], eax }
	__asm { test eax, eax }
	__asm { je L_005fca7d }
	__asm { test bl, bl }
	__asm { je L_005fca7f }
	__asm { L_005fca7d: }
	__asm { mov bl, 1 }
	__asm { L_005fca7f: }
	__asm { push 0xe269cc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db8ec], eax }
	__asm { test eax, eax }
	__asm { je L_005fca93 }
	__asm { test bl, bl }
	__asm { je L_005fca95 }
	__asm { L_005fca93: }
	__asm { mov bl, 1 }
	__asm { L_005fca95: }
	__asm { push 0xe269e0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db8f8], eax }
	__asm { test eax, eax }
	__asm { je L_005fcaa9 }
	__asm { test bl, bl }
	__asm { je L_005fcaab }
	__asm { L_005fcaa9: }
	__asm { mov bl, 1 }
	__asm { L_005fcaab: }
	__asm { push 0xe269f8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db904], eax }
	__asm { test eax, eax }
	__asm { je L_005fcabf }
	__asm { test bl, bl }
	__asm { je L_005fcac1 }
	__asm { L_005fcabf: }
	__asm { mov bl, 1 }
	__asm { L_005fcac1: }
	__asm { push 0xe26a0c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db910], eax }
	__asm { test eax, eax }
	__asm { je L_005fcad5 }
	__asm { test bl, bl }
	__asm { je L_005fcad7 }
	__asm { L_005fcad5: }
	__asm { mov bl, 1 }
	__asm { L_005fcad7: }
	__asm { push 0xe26a24 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db920], eax }
	__asm { test eax, eax }
	__asm { je L_005fcaeb }
	__asm { test bl, bl }
	__asm { je L_005fcaed }
	__asm { L_005fcaeb: }
	__asm { mov bl, 1 }
	__asm { L_005fcaed: }
	__asm { push 0xe26a34 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db928], eax }
	__asm { test eax, eax }
	__asm { je L_005fcb01 }
	__asm { test bl, bl }
	__asm { je L_005fcb03 }
	__asm { L_005fcb01: }
	__asm { mov bl, 1 }
	__asm { L_005fcb03: }
	__asm { push 0xe26a44 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db938], eax }
	__asm { test eax, eax }
	__asm { je L_005fcb17 }
	__asm { test bl, bl }
	__asm { je L_005fcb19 }
	__asm { L_005fcb17: }
	__asm { mov bl, 1 }
	__asm { L_005fcb19: }
	__asm { push 0xe26a5c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db93c], eax }
	__asm { test eax, eax }
	__asm { je L_005fcb2d }
	__asm { test bl, bl }
	__asm { je L_005fcb2f }
	__asm { L_005fcb2d: }
	__asm { mov bl, 1 }
	__asm { L_005fcb2f: }
	__asm { push 0xe26a74 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db950], eax }
	__asm { test eax, eax }
	__asm { je L_005fcb43 }
	__asm { test bl, bl }
	__asm { je L_005fcb45 }
	__asm { L_005fcb43: }
	__asm { mov bl, 1 }
	__asm { L_005fcb45: }
	__asm { push 0xe26a84 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db958], eax }
	__asm { test eax, eax }
	__asm { je L_005fcb59 }
	__asm { test bl, bl }
	__asm { je L_005fcb5b }
	__asm { L_005fcb59: }
	__asm { mov bl, 1 }
	__asm { L_005fcb5b: }
	__asm { push 0xe26a94 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db968], eax }
	__asm { test eax, eax }
	__asm { je L_005fcb6f }
	__asm { test bl, bl }
	__asm { je L_005fcb71 }
	__asm { L_005fcb6f: }
	__asm { mov bl, 1 }
	__asm { L_005fcb71: }
	__asm { push 0xe26aa4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db974], eax }
	__asm { test eax, eax }
	__asm { je L_005fcb85 }
	__asm { test bl, bl }
	__asm { je L_005fcb87 }
	__asm { L_005fcb85: }
	__asm { mov bl, 1 }
	__asm { L_005fcb87: }
	__asm { push 0xe26ab4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db97c], eax }
	__asm { test eax, eax }
	__asm { je L_005fcb9b }
	__asm { test bl, bl }
	__asm { je L_005fcb9d }
	__asm { L_005fcb9b: }
	__asm { mov bl, 1 }
	__asm { L_005fcb9d: }
	__asm { push 0xe26ac4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db984], eax }
	__asm { test eax, eax }
	__asm { je L_005fcbb1 }
	__asm { test bl, bl }
	__asm { je L_005fcbb3 }
	__asm { L_005fcbb1: }
	__asm { mov bl, 1 }
	__asm { L_005fcbb3: }
	__asm { push 0xe26ad4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db994], eax }
	__asm { test eax, eax }
	__asm { je L_005fcbc7 }
	__asm { test bl, bl }
	__asm { je L_005fcbc9 }
	__asm { L_005fcbc7: }
	__asm { mov bl, 1 }
	__asm { L_005fcbc9: }
	__asm { push 0xe26ae4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9a0], eax }
	__asm { test eax, eax }
	__asm { je L_005fcbdd }
	__asm { test bl, bl }
	__asm { je L_005fcbdf }
	__asm { L_005fcbdd: }
	__asm { mov bl, 1 }
	__asm { L_005fcbdf: }
	__asm { push 0xe26af4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9b0], eax }
	__asm { test eax, eax }
	__asm { je L_005fcbf3 }
	__asm { test bl, bl }
	__asm { je L_005fcbf5 }
	__asm { L_005fcbf3: }
	__asm { mov bl, 1 }
	__asm { L_005fcbf5: }
	__asm { push 0xe26b04 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9bc], eax }
	__asm { test eax, eax }
	__asm { je L_005fcc09 }
	__asm { test bl, bl }
	__asm { je L_005fcc0b }
	__asm { L_005fcc09: }
	__asm { mov bl, 1 }
	__asm { L_005fcc0b: }
	__asm { push 0xe26b14 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9c4], eax }
	__asm { test eax, eax }
	__asm { je L_005fcc1f }
	__asm { test bl, bl }
	__asm { je L_005fcc21 }
	__asm { L_005fcc1f: }
	__asm { mov bl, 1 }
	__asm { L_005fcc21: }
	__asm { push 0xe26b24 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9cc], eax }
	__asm { test eax, eax }
	__asm { je L_005fcc35 }
	__asm { test bl, bl }
	__asm { je L_005fcc37 }
	__asm { L_005fcc35: }
	__asm { mov bl, 1 }
	__asm { L_005fcc37: }
	__asm { push 0xe26b34 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9dc], eax }
	__asm { test eax, eax }
	__asm { je L_005fcc4b }
	__asm { test bl, bl }
	__asm { je L_005fcc4d }
	__asm { L_005fcc4b: }
	__asm { mov bl, 1 }
	__asm { L_005fcc4d: }
	__asm { push 0xe26b44 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9e8], eax }
	__asm { test eax, eax }
	__asm { je L_005fcc61 }
	__asm { test bl, bl }
	__asm { je L_005fcc63 }
	__asm { L_005fcc61: }
	__asm { mov bl, 1 }
	__asm { L_005fcc63: }
	__asm { push 0xe26b54 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9f0], eax }
	__asm { test eax, eax }
	__asm { je L_005fcc77 }
	__asm { test bl, bl }
	__asm { je L_005fcc79 }
	__asm { L_005fcc77: }
	__asm { mov bl, 1 }
	__asm { L_005fcc79: }
	__asm { push 0xe26b68 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9f4], eax }
	__asm { test eax, eax }
	__asm { je L_005fcc8d }
	__asm { test bl, bl }
	__asm { je L_005fcc8f }
	__asm { L_005fcc8d: }
	__asm { mov bl, 1 }
	__asm { L_005fcc8f: }
	__asm { push 0xe26b7c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9fc], eax }
	__asm { test eax, eax }
	__asm { je L_005fcca3 }
	__asm { test bl, bl }
	__asm { je L_005fcca5 }
	__asm { L_005fcca3: }
	__asm { mov bl, 1 }
	__asm { L_005fcca5: }
	__asm { push 0xe26b90 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba0c], eax }
	__asm { test eax, eax }
	__asm { je L_005fccb9 }
	__asm { test bl, bl }
	__asm { je L_005fccbb }
	__asm { L_005fccb9: }
	__asm { mov bl, 1 }
	__asm { L_005fccbb: }
	__asm { push 0xe26ba4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba14], eax }
	__asm { test eax, eax }
	__asm { je L_005fcccf }
	__asm { test bl, bl }
	__asm { je L_005fccd1 }
	__asm { L_005fcccf: }
	__asm { mov bl, 1 }
	__asm { L_005fccd1: }
	__asm { push 0xe26bb8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba18], eax }
	__asm { test eax, eax }
	__asm { je L_005fcce5 }
	__asm { test bl, bl }
	__asm { je L_005fcce7 }
	__asm { L_005fcce5: }
	__asm { mov bl, 1 }
	__asm { L_005fcce7: }
	__asm { push 0xe26bcc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba20], eax }
	__asm { test eax, eax }
	__asm { je L_005fccfb }
	__asm { test bl, bl }
	__asm { je L_005fccfd }
	__asm { L_005fccfb: }
	__asm { mov bl, 1 }
	__asm { L_005fccfd: }
	__asm { push 0xe26be0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba30], eax }
	__asm { test eax, eax }
	__asm { je L_005fcd11 }
	__asm { test bl, bl }
	__asm { je L_005fcd13 }
	__asm { L_005fcd11: }
	__asm { mov bl, 1 }
	__asm { L_005fcd13: }
	__asm { push 0xe26bf4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba34], eax }
	__asm { test eax, eax }
	__asm { je L_005fcd27 }
	__asm { test bl, bl }
	__asm { je L_005fcd29 }
	__asm { L_005fcd27: }
	__asm { mov bl, 1 }
	__asm { L_005fcd29: }
	__asm { push 0xe26c0c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba3c], eax }
	__asm { test eax, eax }
	__asm { je L_005fcd3d }
	__asm { test bl, bl }
	__asm { je L_005fcd3f }
	__asm { L_005fcd3d: }
	__asm { mov bl, 1 }
	__asm { L_005fcd3f: }
	__asm { push 0xe26c24 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba4c], eax }
	__asm { test eax, eax }
	__asm { je L_005fcd53 }
	__asm { test bl, bl }
	__asm { je L_005fcd55 }
	__asm { L_005fcd53: }
	__asm { mov bl, 1 }
	__asm { L_005fcd55: }
	__asm { push 0xe26c3c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba50], eax }
	__asm { test eax, eax }
	__asm { je L_005fcd69 }
	__asm { test bl, bl }
	__asm { je L_005fcd6b }
	__asm { L_005fcd69: }
	__asm { mov bl, 1 }
	__asm { L_005fcd6b: }
	__asm { push 0xe26c54 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba58], eax }
	__asm { test eax, eax }
	__asm { je L_005fcd7f }
	__asm { test bl, bl }
	__asm { je L_005fcd81 }
	__asm { L_005fcd7f: }
	__asm { mov bl, 1 }
	__asm { L_005fcd81: }
	__asm { push 0xe26c68 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba64], eax }
	__asm { test eax, eax }
	__asm { je L_005fcd9a }
	__asm { test bl, bl }
	__asm { jne L_005fcd9a }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fcd9a: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbac8[];
extern "C" char g_012dbacc[];
extern "C" char g_012dbad8[];
extern "C" char g_012dbae4[];
extern "C" char g_012dbaec[];
extern "C" char g_012dbaf0[];
extern "C" char g_012dbaf8[];
extern "C" char g_012dbb08[];
extern "C" char g_012dbb10[];
extern "C" char g_012dbb18[];
extern "C" char g_012dbb24[];
extern "C" char g_012dbb28[];
extern "C" char g_012dbb30[];
extern "C" char g_012dbb3c[];
extern "C" char g_012dbb40[];
extern "C" char g_012dbb50[];
extern "C" char g_012dbb58[];
extern "C" char g_012dbb5c[];
extern "C" char g_012dbb68[];
extern "C" char g_012dbb74[];
extern "C" char g_012dbb78[];
extern "C" char g_012dbb84[];
extern "C" char g_012dbb8c[];
extern "C" char g_012dbb94[];
extern "C" char g_012dbb9c[];
extern "C" char g_012dbba4[];
extern "C" char g_012dbbac[];
extern "C" char g_012dbbb4[];
extern "C" char g_012dbbbc[];
extern "C" char g_012dbbc4[];
extern "C" char g_012dbbd0[];
extern "C" char g_012dbbd4[];
extern "C" char g_012dbbe0[];
extern "C" char g_012dbbe8[];
extern "C" char g_012dbbf0[];
extern "C" char g_012dbbf8[];
extern "C" char g_012dbc00[];
extern "C" char g_012dbc04[];
extern "C" char g_012dbc0c[];
extern "C" char g_012dbc18[];
extern "C" char g_012dbc1c[];
extern "C" char g_012dbc24[];
extern "C" char g_012dbc2c[];
extern "C" char g_012dbc38[];
extern "C" char g_012dbc40[];
extern "C" char g_012dbc44[];
extern "C" char g_012dbc4c[];
extern "C" char g_012dbc54[];
extern "C" char g_012dbc60[];
// FUNCTION: ROBLOXSTUDIO 0x005fcea0
extern "C" __declspec(naked) void asm_005fcea0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe26d8c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe26d9c }
	__asm { mov dword ptr [g_012dbac8], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbacc], eax }
	__asm { test eax, eax }
	__asm { je L_005fcecd }
	__asm { test bl, bl }
	__asm { je L_005fcecf }
	__asm { L_005fcecd: }
	__asm { mov bl, 1 }
	__asm { L_005fcecf: }
	__asm { push 0xe26db8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbad8], eax }
	__asm { test eax, eax }
	__asm { je L_005fcee3 }
	__asm { test bl, bl }
	__asm { je L_005fcee5 }
	__asm { L_005fcee3: }
	__asm { mov bl, 1 }
	__asm { L_005fcee5: }
	__asm { push 0xe26dcc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbae4], eax }
	__asm { test eax, eax }
	__asm { je L_005fcef9 }
	__asm { test bl, bl }
	__asm { je L_005fcefb }
	__asm { L_005fcef9: }
	__asm { mov bl, 1 }
	__asm { L_005fcefb: }
	__asm { push 0xe26dec }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbaec], eax }
	__asm { test eax, eax }
	__asm { je L_005fcf0f }
	__asm { test bl, bl }
	__asm { je L_005fcf11 }
	__asm { L_005fcf0f: }
	__asm { mov bl, 1 }
	__asm { L_005fcf11: }
	__asm { push 0xe26e00 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbaf0], eax }
	__asm { test eax, eax }
	__asm { je L_005fcf25 }
	__asm { test bl, bl }
	__asm { je L_005fcf27 }
	__asm { L_005fcf25: }
	__asm { mov bl, 1 }
	__asm { L_005fcf27: }
	__asm { push 0xe26e10 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbaf8], eax }
	__asm { test eax, eax }
	__asm { je L_005fcf3b }
	__asm { test bl, bl }
	__asm { je L_005fcf3d }
	__asm { L_005fcf3b: }
	__asm { mov bl, 1 }
	__asm { L_005fcf3d: }
	__asm { push 0xe26e20 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb08], eax }
	__asm { test eax, eax }
	__asm { je L_005fcf51 }
	__asm { test bl, bl }
	__asm { je L_005fcf53 }
	__asm { L_005fcf51: }
	__asm { mov bl, 1 }
	__asm { L_005fcf53: }
	__asm { push 0xe26e38 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb10], eax }
	__asm { test eax, eax }
	__asm { je L_005fcf67 }
	__asm { test bl, bl }
	__asm { je L_005fcf69 }
	__asm { L_005fcf67: }
	__asm { mov bl, 1 }
	__asm { L_005fcf69: }
	__asm { push 0xe26e50 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb18], eax }
	__asm { test eax, eax }
	__asm { je L_005fcf7d }
	__asm { test bl, bl }
	__asm { je L_005fcf7f }
	__asm { L_005fcf7d: }
	__asm { mov bl, 1 }
	__asm { L_005fcf7f: }
	__asm { push 0xe26e64 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb24], eax }
	__asm { test eax, eax }
	__asm { je L_005fcf93 }
	__asm { test bl, bl }
	__asm { je L_005fcf95 }
	__asm { L_005fcf93: }
	__asm { mov bl, 1 }
	__asm { L_005fcf95: }
	__asm { push 0xe26e78 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb28], eax }
	__asm { test eax, eax }
	__asm { je L_005fcfa9 }
	__asm { test bl, bl }
	__asm { je L_005fcfab }
	__asm { L_005fcfa9: }
	__asm { mov bl, 1 }
	__asm { L_005fcfab: }
	__asm { push 0xe26e90 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb30], eax }
	__asm { test eax, eax }
	__asm { je L_005fcfbf }
	__asm { test bl, bl }
	__asm { je L_005fcfc1 }
	__asm { L_005fcfbf: }
	__asm { mov bl, 1 }
	__asm { L_005fcfc1: }
	__asm { push 0xe26ea4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb3c], eax }
	__asm { test eax, eax }
	__asm { je L_005fcfd5 }
	__asm { test bl, bl }
	__asm { je L_005fcfd7 }
	__asm { L_005fcfd5: }
	__asm { mov bl, 1 }
	__asm { L_005fcfd7: }
	__asm { push 0xe26ebc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb40], eax }
	__asm { test eax, eax }
	__asm { je L_005fcfeb }
	__asm { test bl, bl }
	__asm { je L_005fcfed }
	__asm { L_005fcfeb: }
	__asm { mov bl, 1 }
	__asm { L_005fcfed: }
	__asm { push 0xe26ed0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb50], eax }
	__asm { test eax, eax }
	__asm { je L_005fd001 }
	__asm { test bl, bl }
	__asm { je L_005fd003 }
	__asm { L_005fd001: }
	__asm { mov bl, 1 }
	__asm { L_005fd003: }
	__asm { push 0xe26ee8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb58], eax }
	__asm { test eax, eax }
	__asm { je L_005fd017 }
	__asm { test bl, bl }
	__asm { je L_005fd019 }
	__asm { L_005fd017: }
	__asm { mov bl, 1 }
	__asm { L_005fd019: }
	__asm { push 0xe26f00 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb5c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd02d }
	__asm { test bl, bl }
	__asm { je L_005fd02f }
	__asm { L_005fd02d: }
	__asm { mov bl, 1 }
	__asm { L_005fd02f: }
	__asm { push 0xe26f14 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb68], eax }
	__asm { test eax, eax }
	__asm { je L_005fd043 }
	__asm { test bl, bl }
	__asm { je L_005fd045 }
	__asm { L_005fd043: }
	__asm { mov bl, 1 }
	__asm { L_005fd045: }
	__asm { push 0xe26f28 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb74], eax }
	__asm { test eax, eax }
	__asm { je L_005fd059 }
	__asm { test bl, bl }
	__asm { je L_005fd05b }
	__asm { L_005fd059: }
	__asm { mov bl, 1 }
	__asm { L_005fd05b: }
	__asm { push 0xe26f3c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb78], eax }
	__asm { test eax, eax }
	__asm { je L_005fd06f }
	__asm { test bl, bl }
	__asm { je L_005fd071 }
	__asm { L_005fd06f: }
	__asm { mov bl, 1 }
	__asm { L_005fd071: }
	__asm { push 0xe26f54 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb84], eax }
	__asm { test eax, eax }
	__asm { je L_005fd085 }
	__asm { test bl, bl }
	__asm { je L_005fd087 }
	__asm { L_005fd085: }
	__asm { mov bl, 1 }
	__asm { L_005fd087: }
	__asm { push 0xe26f60 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb8c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd09b }
	__asm { test bl, bl }
	__asm { je L_005fd09d }
	__asm { L_005fd09b: }
	__asm { mov bl, 1 }
	__asm { L_005fd09d: }
	__asm { push 0xe26f78 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb94], eax }
	__asm { test eax, eax }
	__asm { je L_005fd0b1 }
	__asm { test bl, bl }
	__asm { je L_005fd0b3 }
	__asm { L_005fd0b1: }
	__asm { mov bl, 1 }
	__asm { L_005fd0b3: }
	__asm { push 0xe26f90 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbb9c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd0c7 }
	__asm { test bl, bl }
	__asm { je L_005fd0c9 }
	__asm { L_005fd0c7: }
	__asm { mov bl, 1 }
	__asm { L_005fd0c9: }
	__asm { push 0xe26fa4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbba4], eax }
	__asm { test eax, eax }
	__asm { je L_005fd0dd }
	__asm { test bl, bl }
	__asm { je L_005fd0df }
	__asm { L_005fd0dd: }
	__asm { mov bl, 1 }
	__asm { L_005fd0df: }
	__asm { push 0xe26fb8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbac], eax }
	__asm { test eax, eax }
	__asm { je L_005fd0f3 }
	__asm { test bl, bl }
	__asm { je L_005fd0f5 }
	__asm { L_005fd0f3: }
	__asm { mov bl, 1 }
	__asm { L_005fd0f5: }
	__asm { push 0xe26fc8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbb4], eax }
	__asm { test eax, eax }
	__asm { je L_005fd109 }
	__asm { test bl, bl }
	__asm { je L_005fd10b }
	__asm { L_005fd109: }
	__asm { mov bl, 1 }
	__asm { L_005fd10b: }
	__asm { push 0xe26fe0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbbc], eax }
	__asm { test eax, eax }
	__asm { je L_005fd11f }
	__asm { test bl, bl }
	__asm { je L_005fd121 }
	__asm { L_005fd11f: }
	__asm { mov bl, 1 }
	__asm { L_005fd121: }
	__asm { push 0xe26ff4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbc4], eax }
	__asm { test eax, eax }
	__asm { je L_005fd135 }
	__asm { test bl, bl }
	__asm { je L_005fd137 }
	__asm { L_005fd135: }
	__asm { mov bl, 1 }
	__asm { L_005fd137: }
	__asm { push 0xe27004 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbd0], eax }
	__asm { test eax, eax }
	__asm { je L_005fd14b }
	__asm { test bl, bl }
	__asm { je L_005fd14d }
	__asm { L_005fd14b: }
	__asm { mov bl, 1 }
	__asm { L_005fd14d: }
	__asm { push 0xe27018 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbd4], eax }
	__asm { test eax, eax }
	__asm { je L_005fd161 }
	__asm { test bl, bl }
	__asm { je L_005fd163 }
	__asm { L_005fd161: }
	__asm { mov bl, 1 }
	__asm { L_005fd163: }
	__asm { push 0xe27028 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbe0], eax }
	__asm { test eax, eax }
	__asm { je L_005fd177 }
	__asm { test bl, bl }
	__asm { je L_005fd179 }
	__asm { L_005fd177: }
	__asm { mov bl, 1 }
	__asm { L_005fd179: }
	__asm { push 0xe2703c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbe8], eax }
	__asm { test eax, eax }
	__asm { je L_005fd18d }
	__asm { test bl, bl }
	__asm { je L_005fd18f }
	__asm { L_005fd18d: }
	__asm { mov bl, 1 }
	__asm { L_005fd18f: }
	__asm { push 0xe27050 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbf0], eax }
	__asm { test eax, eax }
	__asm { je L_005fd1a3 }
	__asm { test bl, bl }
	__asm { je L_005fd1a5 }
	__asm { L_005fd1a3: }
	__asm { mov bl, 1 }
	__asm { L_005fd1a5: }
	__asm { push 0xe27064 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbbf8], eax }
	__asm { test eax, eax }
	__asm { je L_005fd1b9 }
	__asm { test bl, bl }
	__asm { je L_005fd1bb }
	__asm { L_005fd1b9: }
	__asm { mov bl, 1 }
	__asm { L_005fd1bb: }
	__asm { push 0xe27078 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc00], eax }
	__asm { test eax, eax }
	__asm { je L_005fd1cf }
	__asm { test bl, bl }
	__asm { je L_005fd1d1 }
	__asm { L_005fd1cf: }
	__asm { mov bl, 1 }
	__asm { L_005fd1d1: }
	__asm { push 0xe27094 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc04], eax }
	__asm { test eax, eax }
	__asm { je L_005fd1e5 }
	__asm { test bl, bl }
	__asm { je L_005fd1e7 }
	__asm { L_005fd1e5: }
	__asm { mov bl, 1 }
	__asm { L_005fd1e7: }
	__asm { push 0xe270a8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc0c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd1fb }
	__asm { test bl, bl }
	__asm { je L_005fd1fd }
	__asm { L_005fd1fb: }
	__asm { mov bl, 1 }
	__asm { L_005fd1fd: }
	__asm { push 0xe270b8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc18], eax }
	__asm { test eax, eax }
	__asm { je L_005fd211 }
	__asm { test bl, bl }
	__asm { je L_005fd213 }
	__asm { L_005fd211: }
	__asm { mov bl, 1 }
	__asm { L_005fd213: }
	__asm { push 0xe270cc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc1c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd227 }
	__asm { test bl, bl }
	__asm { je L_005fd229 }
	__asm { L_005fd227: }
	__asm { mov bl, 1 }
	__asm { L_005fd229: }
	__asm { push 0xe270e0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc24], eax }
	__asm { test eax, eax }
	__asm { je L_005fd23d }
	__asm { test bl, bl }
	__asm { je L_005fd23f }
	__asm { L_005fd23d: }
	__asm { mov bl, 1 }
	__asm { L_005fd23f: }
	__asm { push 0xe270f0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc2c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd253 }
	__asm { test bl, bl }
	__asm { je L_005fd255 }
	__asm { L_005fd253: }
	__asm { mov bl, 1 }
	__asm { L_005fd255: }
	__asm { push 0xe27104 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc38], eax }
	__asm { test eax, eax }
	__asm { je L_005fd269 }
	__asm { test bl, bl }
	__asm { je L_005fd26b }
	__asm { L_005fd269: }
	__asm { mov bl, 1 }
	__asm { L_005fd26b: }
	__asm { push 0xe27124 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc40], eax }
	__asm { test eax, eax }
	__asm { je L_005fd27f }
	__asm { test bl, bl }
	__asm { je L_005fd281 }
	__asm { L_005fd27f: }
	__asm { mov bl, 1 }
	__asm { L_005fd281: }
	__asm { push 0xe27138 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc44], eax }
	__asm { test eax, eax }
	__asm { je L_005fd295 }
	__asm { test bl, bl }
	__asm { je L_005fd297 }
	__asm { L_005fd295: }
	__asm { mov bl, 1 }
	__asm { L_005fd297: }
	__asm { push 0xe27158 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc4c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd2ab }
	__asm { test bl, bl }
	__asm { je L_005fd2ad }
	__asm { L_005fd2ab: }
	__asm { mov bl, 1 }
	__asm { L_005fd2ad: }
	__asm { push 0xe27170 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc54], eax }
	__asm { test eax, eax }
	__asm { je L_005fd2c1 }
	__asm { test bl, bl }
	__asm { je L_005fd2c3 }
	__asm { L_005fd2c1: }
	__asm { mov bl, 1 }
	__asm { L_005fd2c3: }
	__asm { push 0xe27184 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc60], eax }
	__asm { test eax, eax }
	__asm { je L_005fd2dc }
	__asm { test bl, bl }
	__asm { jne L_005fd2dc }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fd2dc: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e108b8[];
extern "C" char g_012dbcc4[];
extern "C" char g_012dbccc[];
extern "C" char g_012dbcd4[];
extern "C" char g_012dbce0[];
extern "C" char g_012dbce8[];
extern "C" char g_012dbcf0[];
extern "C" char g_012dbcf4[];
extern "C" char g_012dbd00[];
extern "C" char g_012dbd08[];
extern "C" char g_012dbd10[];
extern "C" char g_012dbd14[];
extern "C" char g_012dbd1c[];
extern "C" char g_012dbd24[];
// FUNCTION: ROBLOXSTUDIO 0x005fd440
extern "C" __declspec(naked) void asm_005fd440()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2729c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe272b0 }
	__asm { mov dword ptr [g_012dbcc4], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbccc], eax }
	__asm { test eax, eax }
	__asm { je L_005fd46d }
	__asm { test bl, bl }
	__asm { je L_005fd46f }
	__asm { L_005fd46d: }
	__asm { mov bl, 1 }
	__asm { L_005fd46f: }
	__asm { push 0xe272c4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbcd4], eax }
	__asm { test eax, eax }
	__asm { je L_005fd483 }
	__asm { test bl, bl }
	__asm { je L_005fd485 }
	__asm { L_005fd483: }
	__asm { mov bl, 1 }
	__asm { L_005fd485: }
	__asm { push 0xe272dc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbce0], eax }
	__asm { test eax, eax }
	__asm { je L_005fd499 }
	__asm { test bl, bl }
	__asm { je L_005fd49b }
	__asm { L_005fd499: }
	__asm { mov bl, 1 }
	__asm { L_005fd49b: }
	__asm { push 0xe272f4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbce8], eax }
	__asm { test eax, eax }
	__asm { je L_005fd4af }
	__asm { test bl, bl }
	__asm { je L_005fd4b1 }
	__asm { L_005fd4af: }
	__asm { mov bl, 1 }
	__asm { L_005fd4b1: }
	__asm { push 0xe2730c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbcf0], eax }
	__asm { test eax, eax }
	__asm { je L_005fd4c5 }
	__asm { test bl, bl }
	__asm { je L_005fd4c7 }
	__asm { L_005fd4c5: }
	__asm { mov bl, 1 }
	__asm { L_005fd4c7: }
	__asm { push 0xe27324 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbcf4], eax }
	__asm { test eax, eax }
	__asm { je L_005fd4db }
	__asm { test bl, bl }
	__asm { je L_005fd4dd }
	__asm { L_005fd4db: }
	__asm { mov bl, 1 }
	__asm { L_005fd4dd: }
	__asm { push 0xe2733c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd00], eax }
	__asm { test eax, eax }
	__asm { je L_005fd4f1 }
	__asm { test bl, bl }
	__asm { je L_005fd4f3 }
	__asm { L_005fd4f1: }
	__asm { mov bl, 1 }
	__asm { L_005fd4f3: }
	__asm { push 0xe2735c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd08], eax }
	__asm { test eax, eax }
	__asm { je L_005fd507 }
	__asm { test bl, bl }
	__asm { je L_005fd509 }
	__asm { L_005fd507: }
	__asm { mov bl, 1 }
	__asm { L_005fd509: }
	__asm { push 0xe2737c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd10], eax }
	__asm { test eax, eax }
	__asm { je L_005fd51d }
	__asm { test bl, bl }
	__asm { je L_005fd51f }
	__asm { L_005fd51d: }
	__asm { mov bl, 1 }
	__asm { L_005fd51f: }
	__asm { push 0xe273a0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd14], eax }
	__asm { test eax, eax }
	__asm { je L_005fd533 }
	__asm { test bl, bl }
	__asm { je L_005fd535 }
	__asm { L_005fd533: }
	__asm { mov bl, 1 }
	__asm { L_005fd535: }
	__asm { push 0xe273c4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd1c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd549 }
	__asm { test bl, bl }
	__asm { je L_005fd54b }
	__asm { L_005fd549: }
	__asm { mov bl, 1 }
	__asm { L_005fd54b: }
	__asm { push 0xe273ec }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbd24], eax }
	__asm { test eax, eax }
	__asm { je L_005fd564 }
	__asm { test bl, bl }
	__asm { jne L_005fd564 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fd564: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d98d4[];
extern "C" char g_012d98d8[];
extern "C" char g_012d98e0[];
extern "C" char g_012d98e8[];
extern "C" char g_012d98f0[];
extern "C" char g_012d98f8[];
extern "C" char g_012d9904[];
extern "C" char g_012d990c[];
extern "C" char g_012d9910[];
extern "C" char g_012d991c[];
extern "C" char g_012d9920[];
extern "C" char g_012d9928[];
extern "C" char g_012d9930[];
extern "C" char g_012d9938[];
extern "C" char g_012d9944[];
extern "C" char g_012d9948[];
extern "C" char g_012d9950[];
extern "C" char g_012d9958[];
extern "C" char g_012d9960[];
// FUNCTION: ROBLOXSTUDIO 0x005fda70
extern "C" __declspec(naked) void asm_005fda70()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe27990 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe279ac }
	__asm { mov dword ptr [g_012d98d4], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d98d8], eax }
	__asm { test eax, eax }
	__asm { je L_005fda9d }
	__asm { test bl, bl }
	__asm { je L_005fda9f }
	__asm { L_005fda9d: }
	__asm { mov bl, 1 }
	__asm { L_005fda9f: }
	__asm { push 0xe279c8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d98e0], eax }
	__asm { test eax, eax }
	__asm { je L_005fdab3 }
	__asm { test bl, bl }
	__asm { je L_005fdab5 }
	__asm { L_005fdab3: }
	__asm { mov bl, 1 }
	__asm { L_005fdab5: }
	__asm { push 0xe279e0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d98e8], eax }
	__asm { test eax, eax }
	__asm { je L_005fdac9 }
	__asm { test bl, bl }
	__asm { je L_005fdacb }
	__asm { L_005fdac9: }
	__asm { mov bl, 1 }
	__asm { L_005fdacb: }
	__asm { push 0xe279f8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d98f0], eax }
	__asm { test eax, eax }
	__asm { je L_005fdadf }
	__asm { test bl, bl }
	__asm { je L_005fdae1 }
	__asm { L_005fdadf: }
	__asm { mov bl, 1 }
	__asm { L_005fdae1: }
	__asm { push 0xe27a10 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d98f8], eax }
	__asm { test eax, eax }
	__asm { je L_005fdaf5 }
	__asm { test bl, bl }
	__asm { je L_005fdaf7 }
	__asm { L_005fdaf5: }
	__asm { mov bl, 1 }
	__asm { L_005fdaf7: }
	__asm { push 0xe27a28 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9904], eax }
	__asm { test eax, eax }
	__asm { je L_005fdb0b }
	__asm { test bl, bl }
	__asm { je L_005fdb0d }
	__asm { L_005fdb0b: }
	__asm { mov bl, 1 }
	__asm { L_005fdb0d: }
	__asm { push 0xe27a40 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d990c], eax }
	__asm { test eax, eax }
	__asm { je L_005fdb21 }
	__asm { test bl, bl }
	__asm { je L_005fdb23 }
	__asm { L_005fdb21: }
	__asm { mov bl, 1 }
	__asm { L_005fdb23: }
	__asm { push 0xe27a58 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9910], eax }
	__asm { test eax, eax }
	__asm { je L_005fdb37 }
	__asm { test bl, bl }
	__asm { je L_005fdb39 }
	__asm { L_005fdb37: }
	__asm { mov bl, 1 }
	__asm { L_005fdb39: }
	__asm { push 0xe27a70 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d991c], eax }
	__asm { test eax, eax }
	__asm { je L_005fdb4d }
	__asm { test bl, bl }
	__asm { je L_005fdb4f }
	__asm { L_005fdb4d: }
	__asm { mov bl, 1 }
	__asm { L_005fdb4f: }
	__asm { push 0xe27a88 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9920], eax }
	__asm { test eax, eax }
	__asm { je L_005fdb63 }
	__asm { test bl, bl }
	__asm { je L_005fdb65 }
	__asm { L_005fdb63: }
	__asm { mov bl, 1 }
	__asm { L_005fdb65: }
	__asm { push 0xe27aa0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9928], eax }
	__asm { test eax, eax }
	__asm { je L_005fdb79 }
	__asm { test bl, bl }
	__asm { je L_005fdb7b }
	__asm { L_005fdb79: }
	__asm { mov bl, 1 }
	__asm { L_005fdb7b: }
	__asm { push 0xe27ab8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9930], eax }
	__asm { test eax, eax }
	__asm { je L_005fdb8f }
	__asm { test bl, bl }
	__asm { je L_005fdb91 }
	__asm { L_005fdb8f: }
	__asm { mov bl, 1 }
	__asm { L_005fdb91: }
	__asm { push 0xe27ad0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9938], eax }
	__asm { test eax, eax }
	__asm { je L_005fdba5 }
	__asm { test bl, bl }
	__asm { je L_005fdba7 }
	__asm { L_005fdba5: }
	__asm { mov bl, 1 }
	__asm { L_005fdba7: }
	__asm { push 0xe27ae8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9944], eax }
	__asm { test eax, eax }
	__asm { je L_005fdbbb }
	__asm { test bl, bl }
	__asm { je L_005fdbbd }
	__asm { L_005fdbbb: }
	__asm { mov bl, 1 }
	__asm { L_005fdbbd: }
	__asm { push 0xe27b00 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9948], eax }
	__asm { test eax, eax }
	__asm { je L_005fdbd1 }
	__asm { test bl, bl }
	__asm { je L_005fdbd3 }
	__asm { L_005fdbd1: }
	__asm { mov bl, 1 }
	__asm { L_005fdbd3: }
	__asm { push 0xe27b18 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9950], eax }
	__asm { test eax, eax }
	__asm { je L_005fdbe7 }
	__asm { test bl, bl }
	__asm { je L_005fdbe9 }
	__asm { L_005fdbe7: }
	__asm { mov bl, 1 }
	__asm { L_005fdbe9: }
	__asm { push 0xe27b30 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9958], eax }
	__asm { test eax, eax }
	__asm { je L_005fdbfd }
	__asm { test bl, bl }
	__asm { je L_005fdbff }
	__asm { L_005fdbfd: }
	__asm { mov bl, 1 }
	__asm { L_005fdbff: }
	__asm { push 0xe27b48 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9960], eax }
	__asm { test eax, eax }
	__asm { je L_005fdc18 }
	__asm { test bl, bl }
	__asm { jne L_005fdc18 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fdc18: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9968[];
extern "C" char g_012d9974[];
extern "C" char g_012d9978[];
extern "C" char g_012d9980[];
extern "C" char g_012d9988[];
extern "C" char g_012d9990[];
extern "C" char g_012d9998[];
extern "C" char g_012d99a4[];
extern "C" char g_012d99ac[];
extern "C" char g_012d99b4[];
extern "C" char g_012d99bc[];
extern "C" char g_012d99c4[];
// FUNCTION: ROBLOXSTUDIO 0x005fdc20
extern "C" __declspec(naked) void asm_005fdc20()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe27b60 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe27b78 }
	__asm { mov dword ptr [g_012d9968], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9974], eax }
	__asm { test eax, eax }
	__asm { je L_005fdc4d }
	__asm { test bl, bl }
	__asm { je L_005fdc4f }
	__asm { L_005fdc4d: }
	__asm { mov bl, 1 }
	__asm { L_005fdc4f: }
	__asm { push 0xe27b88 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9978], eax }
	__asm { test eax, eax }
	__asm { je L_005fdc63 }
	__asm { test bl, bl }
	__asm { je L_005fdc65 }
	__asm { L_005fdc63: }
	__asm { mov bl, 1 }
	__asm { L_005fdc65: }
	__asm { push 0xe27b9c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9980], eax }
	__asm { test eax, eax }
	__asm { je L_005fdc79 }
	__asm { test bl, bl }
	__asm { je L_005fdc7b }
	__asm { L_005fdc79: }
	__asm { mov bl, 1 }
	__asm { L_005fdc7b: }
	__asm { push 0xe27bb0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9988], eax }
	__asm { test eax, eax }
	__asm { je L_005fdc8f }
	__asm { test bl, bl }
	__asm { je L_005fdc91 }
	__asm { L_005fdc8f: }
	__asm { mov bl, 1 }
	__asm { L_005fdc91: }
	__asm { push 0xe27bc8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9990], eax }
	__asm { test eax, eax }
	__asm { je L_005fdca5 }
	__asm { test bl, bl }
	__asm { je L_005fdca7 }
	__asm { L_005fdca5: }
	__asm { mov bl, 1 }
	__asm { L_005fdca7: }
	__asm { push 0xe27bd8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9998], eax }
	__asm { test eax, eax }
	__asm { je L_005fdcbb }
	__asm { test bl, bl }
	__asm { je L_005fdcbd }
	__asm { L_005fdcbb: }
	__asm { mov bl, 1 }
	__asm { L_005fdcbd: }
	__asm { push 0xe27bec }
	__asm { call esi }
	__asm { mov dword ptr [g_012d99a4], eax }
	__asm { test eax, eax }
	__asm { je L_005fdcd1 }
	__asm { test bl, bl }
	__asm { je L_005fdcd3 }
	__asm { L_005fdcd1: }
	__asm { mov bl, 1 }
	__asm { L_005fdcd3: }
	__asm { push 0xe27c08 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d99ac], eax }
	__asm { test eax, eax }
	__asm { je L_005fdce7 }
	__asm { test bl, bl }
	__asm { je L_005fdce9 }
	__asm { L_005fdce7: }
	__asm { mov bl, 1 }
	__asm { L_005fdce9: }
	__asm { push 0xe27c1c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d99b4], eax }
	__asm { test eax, eax }
	__asm { je L_005fdcfd }
	__asm { test bl, bl }
	__asm { je L_005fdcff }
	__asm { L_005fdcfd: }
	__asm { mov bl, 1 }
	__asm { L_005fdcff: }
	__asm { push 0xe27c34 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d99bc], eax }
	__asm { test eax, eax }
	__asm { je L_005fdd13 }
	__asm { test bl, bl }
	__asm { je L_005fdd15 }
	__asm { L_005fdd13: }
	__asm { mov bl, 1 }
	__asm { L_005fdd15: }
	__asm { push 0xe27c4c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d99c4], eax }
	__asm { test eax, eax }
	__asm { je L_005fdd2e }
	__asm { test bl, bl }
	__asm { jne L_005fdd2e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fdd2e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9bcc[];
extern "C" char g_012d9bd4[];
extern "C" char g_012d9bdc[];
extern "C" char g_012d9be0[];
extern "C" char g_012d9be8[];
extern "C" char g_012d9bf4[];
extern "C" char g_012d9bf8[];
extern "C" char g_012d9c04[];
extern "C" char g_012d9c08[];
extern "C" char g_012d9c14[];
extern "C" char g_012d9c18[];
extern "C" char g_012d9c20[];
// FUNCTION: ROBLOXSTUDIO 0x005fe2d0
extern "C" __declspec(naked) void asm_005fe2d0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe281e0 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe281f8 }
	__asm { mov dword ptr [g_012d9bcc], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9bd4], eax }
	__asm { test eax, eax }
	__asm { je L_005fe2fd }
	__asm { test bl, bl }
	__asm { je L_005fe2ff }
	__asm { L_005fe2fd: }
	__asm { mov bl, 1 }
	__asm { L_005fe2ff: }
	__asm { push 0xe2821c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9bdc], eax }
	__asm { test eax, eax }
	__asm { je L_005fe313 }
	__asm { test bl, bl }
	__asm { je L_005fe315 }
	__asm { L_005fe313: }
	__asm { mov bl, 1 }
	__asm { L_005fe315: }
	__asm { push 0xe28240 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9be0], eax }
	__asm { test eax, eax }
	__asm { je L_005fe329 }
	__asm { test bl, bl }
	__asm { je L_005fe32b }
	__asm { L_005fe329: }
	__asm { mov bl, 1 }
	__asm { L_005fe32b: }
	__asm { push 0xe28254 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9be8], eax }
	__asm { test eax, eax }
	__asm { je L_005fe33f }
	__asm { test bl, bl }
	__asm { je L_005fe341 }
	__asm { L_005fe33f: }
	__asm { mov bl, 1 }
	__asm { L_005fe341: }
	__asm { push 0xe28270 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9bf4], eax }
	__asm { test eax, eax }
	__asm { je L_005fe355 }
	__asm { test bl, bl }
	__asm { je L_005fe357 }
	__asm { L_005fe355: }
	__asm { mov bl, 1 }
	__asm { L_005fe357: }
	__asm { push 0xe2828c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9bf8], eax }
	__asm { test eax, eax }
	__asm { je L_005fe36b }
	__asm { test bl, bl }
	__asm { je L_005fe36d }
	__asm { L_005fe36b: }
	__asm { mov bl, 1 }
	__asm { L_005fe36d: }
	__asm { push 0xe282a8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c04], eax }
	__asm { test eax, eax }
	__asm { je L_005fe381 }
	__asm { test bl, bl }
	__asm { je L_005fe383 }
	__asm { L_005fe381: }
	__asm { mov bl, 1 }
	__asm { L_005fe383: }
	__asm { push 0xe282c0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c08], eax }
	__asm { test eax, eax }
	__asm { je L_005fe397 }
	__asm { test bl, bl }
	__asm { je L_005fe399 }
	__asm { L_005fe397: }
	__asm { mov bl, 1 }
	__asm { L_005fe399: }
	__asm { push 0xe282d4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c14], eax }
	__asm { test eax, eax }
	__asm { je L_005fe3ad }
	__asm { test bl, bl }
	__asm { je L_005fe3af }
	__asm { L_005fe3ad: }
	__asm { mov bl, 1 }
	__asm { L_005fe3af: }
	__asm { push 0xe282f8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c18], eax }
	__asm { test eax, eax }
	__asm { je L_005fe3c3 }
	__asm { test bl, bl }
	__asm { je L_005fe3c5 }
	__asm { L_005fe3c3: }
	__asm { mov bl, 1 }
	__asm { L_005fe3c5: }
	__asm { push 0xe2831c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c20], eax }
	__asm { test eax, eax }
	__asm { je L_005fe3de }
	__asm { test bl, bl }
	__asm { jne L_005fe3de }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fe3de: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9c58[];
extern "C" char g_012d9c64[];
extern "C" char g_012d9c6c[];
extern "C" char g_012d9c70[];
extern "C" char g_012d9c7c[];
extern "C" char g_012d9c80[];
extern "C" char g_012d9c8c[];
extern "C" char g_012d9c90[];
extern "C" char g_012d9c9c[];
extern "C" char g_012d9ca4[];
extern "C" char g_012d9cac[];
extern "C" char g_012d9cb4[];
extern "C" char g_012d9cbc[];
extern "C" char g_012d9cc0[];
extern "C" char g_012d9ccc[];
extern "C" char g_012d9cd0[];
extern "C" char g_012d9cdc[];
extern "C" char g_012d9ce0[];
extern "C" char g_012d9ce8[];
extern "C" char g_012d9cf0[];
extern "C" char g_012d9cf8[];
extern "C" char g_012d9d04[];
extern "C" char g_012d9d0c[];
extern "C" char g_012d9d10[];
extern "C" char g_012d9d1c[];
extern "C" char g_012d9d20[];
extern "C" char g_012d9d28[];
extern "C" char g_012d9d30[];
extern "C" char g_012d9d38[];
extern "C" char g_012d9d44[];
extern "C" char g_012d9d48[];
// FUNCTION: ROBLOXSTUDIO 0x005fe480
extern "C" __declspec(naked) void asm_005fe480()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe283a8 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe283b8 }
	__asm { mov dword ptr [g_012d9c58], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c64], eax }
	__asm { test eax, eax }
	__asm { je L_005fe4ad }
	__asm { test bl, bl }
	__asm { je L_005fe4af }
	__asm { L_005fe4ad: }
	__asm { mov bl, 1 }
	__asm { L_005fe4af: }
	__asm { push 0xe283c8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c6c], eax }
	__asm { test eax, eax }
	__asm { je L_005fe4c3 }
	__asm { test bl, bl }
	__asm { je L_005fe4c5 }
	__asm { L_005fe4c3: }
	__asm { mov bl, 1 }
	__asm { L_005fe4c5: }
	__asm { push 0xe283d8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c70], eax }
	__asm { test eax, eax }
	__asm { je L_005fe4d9 }
	__asm { test bl, bl }
	__asm { je L_005fe4db }
	__asm { L_005fe4d9: }
	__asm { mov bl, 1 }
	__asm { L_005fe4db: }
	__asm { push 0xe283e4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c7c], eax }
	__asm { test eax, eax }
	__asm { je L_005fe4ef }
	__asm { test bl, bl }
	__asm { je L_005fe4f1 }
	__asm { L_005fe4ef: }
	__asm { mov bl, 1 }
	__asm { L_005fe4f1: }
	__asm { push 0xe283f4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c80], eax }
	__asm { test eax, eax }
	__asm { je L_005fe505 }
	__asm { test bl, bl }
	__asm { je L_005fe507 }
	__asm { L_005fe505: }
	__asm { mov bl, 1 }
	__asm { L_005fe507: }
	__asm { push 0xe283fc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c8c], eax }
	__asm { test eax, eax }
	__asm { je L_005fe51b }
	__asm { test bl, bl }
	__asm { je L_005fe51d }
	__asm { L_005fe51b: }
	__asm { mov bl, 1 }
	__asm { L_005fe51d: }
	__asm { push 0xe28404 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c90], eax }
	__asm { test eax, eax }
	__asm { je L_005fe531 }
	__asm { test bl, bl }
	__asm { je L_005fe533 }
	__asm { L_005fe531: }
	__asm { mov bl, 1 }
	__asm { L_005fe533: }
	__asm { push 0xe28410 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c9c], eax }
	__asm { test eax, eax }
	__asm { je L_005fe547 }
	__asm { test bl, bl }
	__asm { je L_005fe549 }
	__asm { L_005fe547: }
	__asm { mov bl, 1 }
	__asm { L_005fe549: }
	__asm { push 0xe2841c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ca4], eax }
	__asm { test eax, eax }
	__asm { je L_005fe55d }
	__asm { test bl, bl }
	__asm { je L_005fe55f }
	__asm { L_005fe55d: }
	__asm { mov bl, 1 }
	__asm { L_005fe55f: }
	__asm { push 0xe2842c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cac], eax }
	__asm { test eax, eax }
	__asm { je L_005fe573 }
	__asm { test bl, bl }
	__asm { je L_005fe575 }
	__asm { L_005fe573: }
	__asm { mov bl, 1 }
	__asm { L_005fe575: }
	__asm { push 0xe2843c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cb4], eax }
	__asm { test eax, eax }
	__asm { je L_005fe589 }
	__asm { test bl, bl }
	__asm { je L_005fe58b }
	__asm { L_005fe589: }
	__asm { mov bl, 1 }
	__asm { L_005fe58b: }
	__asm { push 0xe28448 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cbc], eax }
	__asm { test eax, eax }
	__asm { je L_005fe59f }
	__asm { test bl, bl }
	__asm { je L_005fe5a1 }
	__asm { L_005fe59f: }
	__asm { mov bl, 1 }
	__asm { L_005fe5a1: }
	__asm { push 0xe28454 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cc0], eax }
	__asm { test eax, eax }
	__asm { je L_005fe5b5 }
	__asm { test bl, bl }
	__asm { je L_005fe5b7 }
	__asm { L_005fe5b5: }
	__asm { mov bl, 1 }
	__asm { L_005fe5b7: }
	__asm { push 0xe28464 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ccc], eax }
	__asm { test eax, eax }
	__asm { je L_005fe5cb }
	__asm { test bl, bl }
	__asm { je L_005fe5cd }
	__asm { L_005fe5cb: }
	__asm { mov bl, 1 }
	__asm { L_005fe5cd: }
	__asm { push 0xe28474 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cd0], eax }
	__asm { test eax, eax }
	__asm { je L_005fe5e1 }
	__asm { test bl, bl }
	__asm { je L_005fe5e3 }
	__asm { L_005fe5e1: }
	__asm { mov bl, 1 }
	__asm { L_005fe5e3: }
	__asm { push 0xe28480 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cdc], eax }
	__asm { test eax, eax }
	__asm { je L_005fe5f7 }
	__asm { test bl, bl }
	__asm { je L_005fe5f9 }
	__asm { L_005fe5f7: }
	__asm { mov bl, 1 }
	__asm { L_005fe5f9: }
	__asm { push 0xe28490 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ce0], eax }
	__asm { test eax, eax }
	__asm { je L_005fe60d }
	__asm { test bl, bl }
	__asm { je L_005fe60f }
	__asm { L_005fe60d: }
	__asm { mov bl, 1 }
	__asm { L_005fe60f: }
	__asm { push 0xe284a0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9ce8], eax }
	__asm { test eax, eax }
	__asm { je L_005fe623 }
	__asm { test bl, bl }
	__asm { je L_005fe625 }
	__asm { L_005fe623: }
	__asm { mov bl, 1 }
	__asm { L_005fe625: }
	__asm { push 0xe284b4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cf0], eax }
	__asm { test eax, eax }
	__asm { je L_005fe639 }
	__asm { test bl, bl }
	__asm { je L_005fe63b }
	__asm { L_005fe639: }
	__asm { mov bl, 1 }
	__asm { L_005fe63b: }
	__asm { push 0xe284c0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9cf8], eax }
	__asm { test eax, eax }
	__asm { je L_005fe64f }
	__asm { test bl, bl }
	__asm { je L_005fe651 }
	__asm { L_005fe64f: }
	__asm { mov bl, 1 }
	__asm { L_005fe651: }
	__asm { push 0xe284cc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d04], eax }
	__asm { test eax, eax }
	__asm { je L_005fe665 }
	__asm { test bl, bl }
	__asm { je L_005fe667 }
	__asm { L_005fe665: }
	__asm { mov bl, 1 }
	__asm { L_005fe667: }
	__asm { push 0xe284d8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d0c], eax }
	__asm { test eax, eax }
	__asm { je L_005fe67b }
	__asm { test bl, bl }
	__asm { je L_005fe67d }
	__asm { L_005fe67b: }
	__asm { mov bl, 1 }
	__asm { L_005fe67d: }
	__asm { push 0xe284e8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d10], eax }
	__asm { test eax, eax }
	__asm { je L_005fe691 }
	__asm { test bl, bl }
	__asm { je L_005fe693 }
	__asm { L_005fe691: }
	__asm { mov bl, 1 }
	__asm { L_005fe693: }
	__asm { push 0xe284fc }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d1c], eax }
	__asm { test eax, eax }
	__asm { je L_005fe6a7 }
	__asm { test bl, bl }
	__asm { je L_005fe6a9 }
	__asm { L_005fe6a7: }
	__asm { mov bl, 1 }
	__asm { L_005fe6a9: }
	__asm { push 0xe28508 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d20], eax }
	__asm { test eax, eax }
	__asm { je L_005fe6bd }
	__asm { test bl, bl }
	__asm { je L_005fe6bf }
	__asm { L_005fe6bd: }
	__asm { mov bl, 1 }
	__asm { L_005fe6bf: }
	__asm { push 0xe2851c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d28], eax }
	__asm { test eax, eax }
	__asm { je L_005fe6d3 }
	__asm { test bl, bl }
	__asm { je L_005fe6d5 }
	__asm { L_005fe6d3: }
	__asm { mov bl, 1 }
	__asm { L_005fe6d5: }
	__asm { push 0xe28528 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d30], eax }
	__asm { test eax, eax }
	__asm { je L_005fe6e9 }
	__asm { test bl, bl }
	__asm { je L_005fe6eb }
	__asm { L_005fe6e9: }
	__asm { mov bl, 1 }
	__asm { L_005fe6eb: }
	__asm { push 0xe28534 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d38], eax }
	__asm { test eax, eax }
	__asm { je L_005fe6ff }
	__asm { test bl, bl }
	__asm { je L_005fe701 }
	__asm { L_005fe6ff: }
	__asm { mov bl, 1 }
	__asm { L_005fe701: }
	__asm { push 0xe28540 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d44], eax }
	__asm { test eax, eax }
	__asm { je L_005fe715 }
	__asm { test bl, bl }
	__asm { je L_005fe717 }
	__asm { L_005fe715: }
	__asm { mov bl, 1 }
	__asm { L_005fe717: }
	__asm { push 0xe28550 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9d48], eax }
	__asm { test eax, eax }
	__asm { je L_005fe730 }
	__asm { test bl, bl }
	__asm { jne L_005fe730 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fe730: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db6c0[];
extern "C" char g_012db6cc[];
extern "C" char g_012db6e0[];
extern "C" char g_012db6e4[];
extern "C" char g_012db6f8[];
extern "C" char g_012db6fc[];
extern "C" char g_012db708[];
extern "C" char g_012db714[];
extern "C" char g_012db728[];
extern "C" char g_012db72c[];
extern "C" char g_012db740[];
extern "C" char g_012db744[];
// FUNCTION: ROBLOXSTUDIO 0x00603f60
extern "C" __declspec(naked) void asm_00603f60()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2ca44 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe2ca5c }
	__asm { mov dword ptr [g_012db6c0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db6cc], eax }
	__asm { test eax, eax }
	__asm { je L_00603f8d }
	__asm { test bl, bl }
	__asm { je L_00603f8f }
	__asm { L_00603f8d: }
	__asm { mov bl, 1 }
	__asm { L_00603f8f: }
	__asm { push 0xe2ca70 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db6e0], eax }
	__asm { test eax, eax }
	__asm { je L_00603fa3 }
	__asm { test bl, bl }
	__asm { je L_00603fa5 }
	__asm { L_00603fa3: }
	__asm { mov bl, 1 }
	__asm { L_00603fa5: }
	__asm { push 0xe2ca88 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db6e4], eax }
	__asm { test eax, eax }
	__asm { je L_00603fb9 }
	__asm { test bl, bl }
	__asm { je L_00603fbb }
	__asm { L_00603fb9: }
	__asm { mov bl, 1 }
	__asm { L_00603fbb: }
	__asm { push 0xe2caa4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db6f8], eax }
	__asm { test eax, eax }
	__asm { je L_00603fcf }
	__asm { test bl, bl }
	__asm { je L_00603fd1 }
	__asm { L_00603fcf: }
	__asm { mov bl, 1 }
	__asm { L_00603fd1: }
	__asm { push 0xe2cabc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db6fc], eax }
	__asm { test eax, eax }
	__asm { je L_00603fe5 }
	__asm { test bl, bl }
	__asm { je L_00603fe7 }
	__asm { L_00603fe5: }
	__asm { mov bl, 1 }
	__asm { L_00603fe7: }
	__asm { push 0xe2cad0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db708], eax }
	__asm { test eax, eax }
	__asm { je L_00603ffb }
	__asm { test bl, bl }
	__asm { je L_00603ffd }
	__asm { L_00603ffb: }
	__asm { mov bl, 1 }
	__asm { L_00603ffd: }
	__asm { push 0xe2caec }
	__asm { call esi }
	__asm { mov dword ptr [g_012db714], eax }
	__asm { test eax, eax }
	__asm { je L_00604011 }
	__asm { test bl, bl }
	__asm { je L_00604013 }
	__asm { L_00604011: }
	__asm { mov bl, 1 }
	__asm { L_00604013: }
	__asm { push 0xe2cb08 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db728], eax }
	__asm { test eax, eax }
	__asm { je L_00604027 }
	__asm { test bl, bl }
	__asm { je L_00604029 }
	__asm { L_00604027: }
	__asm { mov bl, 1 }
	__asm { L_00604029: }
	__asm { push 0xe2cb24 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db72c], eax }
	__asm { test eax, eax }
	__asm { je L_0060403d }
	__asm { test bl, bl }
	__asm { je L_0060403f }
	__asm { L_0060403d: }
	__asm { mov bl, 1 }
	__asm { L_0060403f: }
	__asm { push 0xe2cb3c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db740], eax }
	__asm { test eax, eax }
	__asm { je L_00604053 }
	__asm { test bl, bl }
	__asm { je L_00604055 }
	__asm { L_00604053: }
	__asm { mov bl, 1 }
	__asm { L_00604055: }
	__asm { push 0xe2cb54 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db744], eax }
	__asm { test eax, eax }
	__asm { je L_0060406e }
	__asm { test bl, bl }
	__asm { jne L_0060406e }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0060406e: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10860[];
extern "C" char g_00e108c0[];
extern "C" char g_012dadec[];
extern "C" char g_012dadf8[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00606a50
extern "C" __declspec(naked) void asm_00606a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { je L_00606b3d }
	__asm { cmp dword ptr [edi + 0x30], 1 }
	__asm { ja L_00606aa5 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00606a90 }
	__asm { push 0xd8 }
	__asm { push 0xe2fbc0 }
	__asm { push 0xe18be4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00606aa5 }
	__asm { L_00606a90: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe300a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00606aa5: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00606b3d }
	__asm { cmp dword ptr [esi + 0x30], 1 }
	__asm { je L_00606aee }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00606ad9 }
	__asm { push 0xd9 }
	__asm { push 0xe2fbc0 }
	__asm { push 0xe18c88 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00606aee }
	__asm { L_00606ad9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe30120 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00606aee: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00606b3d }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { cmp eax, dword ptr [esi + 0x28] }
	__asm { jne L_00606b07 }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { cmp eax, dword ptr [esi + 0x2c] }
	__asm { je L_00606b3d }
	__asm { L_00606b07: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00606b28 }
	__asm { push 0xda }
	__asm { push 0xe2fbc0 }
	__asm { push 0xe18d28 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00606b3d }
	__asm { L_00606b28: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe30198 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00606b3d: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push 0x8ca6 }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { call dword ptr [g_00e10860] }
	__asm { push dword ptr [edi + 0x34] }
	__asm { push 0x8ca8 }
	__asm { call dword ptr [g_012dadec] }
	__asm { push dword ptr [esi + 0x34] }
	__asm { push 0x8ca9 }
	__asm { call dword ptr [g_012dadec] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { test bl, 1 }
	__asm { je L_00606ba4 }
	__asm { push 0x8ce0 }
	__asm { call dword ptr [g_00e108c0] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push 0x2601 }
	__asm { push 0x4000 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_012dadf8] }
	__asm { L_00606ba4: }
	__asm { test bl, 6 }
	__asm { je L_00606bdf }
	__asm { xor edx, edx }
	__asm { test bl, 2 }
	__asm { mov eax, 0x100 }
	__asm { cmovne edx, eax }
	__asm { test bl, 4 }
	__asm { je L_00606bc1 }
	__asm { or edx, 0x400 }
	__asm { L_00606bc1: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push 0x2600 }
	__asm { push edx }
	__asm { push eax }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_012dadf8] }
	__asm { L_00606bdf: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0x8d40 }
	__asm { call dword ptr [g_012dadec] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10848[];
extern "C" char g_00e10854[];
extern "C" char g_00e1085c[];
extern "C" char g_00e10864[];
extern "C" char g_00e19190[];
extern "C" char g_012d97c5[];
// FUNCTION: ROBLOXSTUDIO 0x00606d10
extern "C" __declspec(naked) void asm_00606d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ecx + 0x3c] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jne L_00606d2b }
	__asm { mov eax, dword ptr [ecx + 0x40] }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_00606dbf }
	__asm { L_00606d2b: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx + 0x3c], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 0x40], eax }
	__asm { cmp dword ptr [esi], 0 }
	__asm { push 0xb44 }
	__asm { jne L_00606d48 }
	__asm { call dword ptr [g_00e10854] }
	__asm { jmp L_00606d5d }
	__asm { L_00606d48: }
	__asm { call dword ptr [g_00e1085c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [eax*4 + 0xe2fb24] }
	__asm { call dword ptr [g_00e10848] }
	__asm { L_00606d5d: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { jne L_00606d76 }
	__asm { push 0x8037 }
	__asm { call dword ptr [g_00e10854] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00606d76: }
	__asm { cmp byte ptr [g_012d97c5], 0 }
	__asm { cvtsi2ss xmm0, eax }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { je L_00606d91 }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { jmp L_00606d9e }
	__asm { L_00606d91: }
	__asm { mulss xmm0, dword ptr [g_00e19190] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { L_00606d9e: }
	__asm { push 0x8037 }
	__asm { call dword ptr [g_00e1085c] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { sub esp, 8 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fstp dword ptr [esp] }
	__asm { call dword ptr [g_00e10864] }
	__asm { L_00606dbf: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1084c[];
extern "C" char g_00e10850[];
extern "C" char g_00e10854[];
extern "C" char g_00e1085c[];
extern "C" char g_00e1086c[];
extern "C" char g_00e10874[];
extern "C" char g_012da438[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00606e60
extern "C" __declspec(naked) void asm_00606e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x4c] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jne L_00606e82 }
	__asm { mov al, byte ptr [ecx + 0x50] }
	__asm { cmp al, byte ptr [esi + 4] }
	__asm { jne L_00606e82 }
	__asm { mov eax, dword ptr [ecx + 0x54] }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { je L_00606f2b }
	__asm { L_00606e82: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx + 0x4c], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 0x50], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 0x54], eax }
	__asm { cmp dword ptr [esi], 0 }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_00e1085c] }
	__asm { jne L_00606eb2 }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { jne L_00606eb2 }
	__asm { push 0xb71 }
	__asm { call dword ptr [g_00e10854] }
	__asm { jmp L_00606ed3 }
	__asm { L_00606eb2: }
	__asm { push 0xb71 }
	__asm { call edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [eax*4 + 0xe2fb60] }
	__asm { call dword ptr [g_00e1084c] }
	__asm { movzx eax, byte ptr [esi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10850] }
	__asm { L_00606ed3: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { sub eax, 0 }
	__asm { je L_00606fb1 }
	__asm { dec eax }
	__asm { je L_00606f80 }
	__asm { dec eax }
	__asm { je L_00606f30 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00606f2a }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00606f19 }
	__asm { push 0x192 }
	__asm { push 0xe2fbc0 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00606f2a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00606f19: }
	__asm { movzx eax, al }
	__asm { push 0xe302d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00606f2a: }
	__asm { pop edi }
	__asm { L_00606f2b: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00606f30: }
	__asm { push 0xb90 }
	__asm { call edi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push 0x207 }
	__asm { call dword ptr [g_00e1086c] }
	__asm { push 0x1e00 }
	__asm { push 0x8508 }
	__asm { push 0x1e00 }
	__asm { push 0x404 }
	__asm { call dword ptr [g_012da438] }
	__asm { push 0x1e00 }
	__asm { push 0x8507 }
	__asm { push 0x1e00 }
	__asm { push 0x405 }
	__asm { call dword ptr [g_012da438] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00606f80: }
	__asm { push 0xb90 }
	__asm { call edi }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push 0x205 }
	__asm { call dword ptr [g_00e1086c] }
	__asm { push 0x1e00 }
	__asm { push 0x1e00 }
	__asm { push 0x1e00 }
	__asm { call dword ptr [g_00e10874] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00606fb1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 0xb90 }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e10854] }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403160();
extern "C" void fn_006086f0();
// FUNCTION: ROBLOXSTUDIO 0x00608650
extern "C" __declspec(naked) void asm_00608650()
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
	__asm { call fn_006086f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_006086c7 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006086c6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006086c6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006086c6: }
	__asm { pop ebx }
	__asm { L_006086c7: }
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
extern "C" void fn_00608820();
// FUNCTION: ROBLOXSTUDIO 0x00608780
extern "C" __declspec(naked) void asm_00608780()
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
	__asm { call fn_00608820 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_006087f7 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006087f6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_006087f6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006087f6: }
	__asm { pop ebx }
	__asm { L_006087f7: }
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
extern "C" void fn_00608950();
// FUNCTION: ROBLOXSTUDIO 0x006088b0
extern "C" __declspec(naked) void asm_006088b0()
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
	__asm { call fn_00608950 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00608927 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00608926 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00608926 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00608926: }
	__asm { pop ebx }
	__asm { L_00608927: }
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
extern "C" void fn_00608a80();
// FUNCTION: ROBLOXSTUDIO 0x006089e0
extern "C" __declspec(naked) void asm_006089e0()
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
	__asm { call fn_00608a80 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00608a57 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00608a56 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00608a56 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00608a56: }
	__asm { pop ebx }
	__asm { L_00608a57: }
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
extern "C" void fn_00608bb0();
// FUNCTION: ROBLOXSTUDIO 0x00608b10
extern "C" __declspec(naked) void asm_00608b10()
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
	__asm { call fn_00608bb0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00608b87 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00608b86 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00608b86 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00608b86: }
	__asm { pop ebx }
	__asm { L_00608b87: }
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

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00403160();
extern "C" void fn_00608d70();
// FUNCTION: ROBLOXSTUDIO 0x00608cd0
extern "C" __declspec(naked) void asm_00608cd0()
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
	__asm { call fn_00608d70 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00608d47 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00608d46 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00608d46 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00608d46: }
	__asm { pop ebx }
	__asm { L_00608d47: }
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
extern "C" void fn_00608ea0();
// FUNCTION: ROBLOXSTUDIO 0x00608e00
extern "C" __declspec(naked) void asm_00608e00()
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
	__asm { call fn_00608ea0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00608e77 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00608e76 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00608e76 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00608e76: }
	__asm { pop ebx }
	__asm { L_00608e77: }
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
extern "C" void fn_00608fd0();
// FUNCTION: ROBLOXSTUDIO 0x00608f30
extern "C" __declspec(naked) void asm_00608f30()
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
	__asm { call fn_00608fd0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00608fa7 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00608fa6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00608fa6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00608fa6: }
	__asm { pop ebx }
	__asm { L_00608fa7: }
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

extern "C" char g_00e1025c[];
extern "C" char g_00e10260[];
extern "C" char g_00e10500[];
extern "C" void fn_005e8100();
extern "C" void fn_006092d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00609100
extern "C" __declspec(naked) void asm_00609100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f050 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, eax }
	__asm { push edi }
	__asm { sub esi, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { je L_0060926e }
	__asm { mov edi, dword ptr [ebx + 8] }
	__asm { mov ecx, edi }
	__asm { sub ecx, dword ptr [ebx + 4] }
	__asm { cmp ecx, esi }
	__asm { jae L_00609237 }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, ecx }
	__asm { dec eax }
	__asm { cmp eax, esi }
	__asm { jae L_0060915f }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0060915f: }
	__asm { sub ecx, edx }
	__asm { sub edi, edx }
	__asm { mov edx, edi }
	__asm { shr edx, 1 }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, edx }
	__asm { add ecx, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00609176 }
	__asm { xor edi, edi }
	__asm { jmp L_00609178 }
	__asm { L_00609176: }
	__asm { add edi, edx }
	__asm { L_00609178: }
	__asm { cmp edi, ecx }
	__asm { cmovb edi, ecx }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { test edi, edi }
	__asm { je L_006091a3 }
	__asm { cmp edi, -1 }
	__asm { ja L_0060919d }
	__asm { push edi }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { test ecx, ecx }
	__asm { jne L_006091a3 }
	__asm { L_0060919d: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006091a3: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub esi, eax }
	__asm { push esi }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10500] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { push ecx }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_006092d0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { add esp, 0x20 }
	__asm { sub edx, ecx }
	__asm { push edx }
	__asm { push ecx }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { sub eax, ecx }
	__asm { add esp, 0xc }
	__asm { add esi, eax }
	__asm { test ecx, ecx }
	__asm { je L_006091ff }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006091ff: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebx], ecx }
	__asm { lea eax, [ecx + edi] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea eax, [ecx + esi] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00609237: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_006092d0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x14 }
	__asm { lea edx, [ecx + esi] }
	__asm { cmp eax, ecx }
	__asm { je L_0060926b }
	__asm { cmp ecx, edx }
	__asm { je L_0060926b }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edx }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_005e8100 }
	__asm { add esp, 0x14 }
	__asm { L_0060926b: }
	__asm { add dword ptr [ebx + 4], esi }
	__asm { L_0060926e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00608c40();
extern "C" void fn_00b9e010();
// FUNCTION: ROBLOXSTUDIO 0x00609300
extern "C" __declspec(naked) void asm_00609300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00608c40 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [edx] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [eax], esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_0060934b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0060934a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0060934a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0060934a: }
	__asm { pop ebx }
	__asm { L_0060934b: }
	__asm { test edi, edi }
	__asm { je L_0060935f }
	__asm { lea ecx, [edi + 0x44] }
	__asm { test ecx, ecx }
	__asm { je L_0060935f }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b9e010 }
	__asm { L_0060935f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_005e56e0();
extern "C" void fn_006090c0();
extern "C" void fn_00609290();
extern "C" void fn_00609510();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00609370
extern "C" __declspec(naked) void asm_00609370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f060 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { cmp edi, ebx }
	__asm { je L_006093ab }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { cmp eax, ecx }
	__asm { jne L_006093c0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { L_006093a8: }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { L_006093ab: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006093c0: }
	__asm { sub ecx, eax }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { ja L_00609422 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { push ecx }
	__asm { call fn_006090c0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add esp, 0xc }
	__asm { add eax, edx }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { jmp L_006093a8 }
	__asm { L_00609422: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { ja L_0060946b }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { push dword ptr [edi] }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea esi, [ecx + eax*4] }
	__asm { push esi }
	__asm { push ecx }
	__asm { call fn_006090c0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [ebx + 4] }
	__asm { push esi }
	__asm { call fn_00609290 }
	__asm { add esp, 0x20 }
	__asm { jmp L_006093a8 }
	__asm { L_0060946b: }
	__asm { test esi, esi }
	__asm { je L_00609478 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00609478: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00609510 }
	__asm { test al, al }
	__asm { je L_006093ab }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx + 4] }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00609290 }
	__asm { add esp, 0x14 }
	__asm { jmp L_006093a8 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_005e56e0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_005eb960();
// FUNCTION: ROBLOXSTUDIO 0x006095b0
extern "C" __declspec(naked) void asm_006095b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f078 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { push dword ptr [eax + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [eax + 0x30] }
	__asm { push dword ptr [eax + 0x2c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005eb960 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe307d0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { mov dword ptr [edi + 0x44], esi }
	__asm { test esi, esi }
	__asm { je L_0060961c }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_0060961c: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0060964d }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0060964d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0060964d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0060964d: }
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

extern "C" char g_012dae14[];
extern "C" void fn_005eb950();
// FUNCTION: ROBLOXSTUDIO 0x006097a0
extern "C" __declspec(naked) void asm_006097a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f0b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe307d0 }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { lea eax, [esi + 0x3c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_006097df }
	__asm { push eax }
	__asm { push 1 }
	__asm { call dword ptr [g_012dae14] }
	__asm { L_006097df: }
	__asm { mov edi, dword ptr [esi + 0x44] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00609812 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00609811 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00609811 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00609811: }
	__asm { pop ebx }
	__asm { L_00609812: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005eb950 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dae0c[];
extern "C" void fn_0041fe80();
extern "C" void fn_005eb9a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00609da0
extern "C" __declspec(naked) void asm_00609da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f102 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [esi], 0xe307e0 }
	__asm { cmp dword ptr [esi + 0x34], 0 }
	__asm { lea eax, [esi + 0x34] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { je L_00609de0 }
	__asm { push eax }
	__asm { push 1 }
	__asm { call dword ptr [g_012dae0c] }
	__asm { L_00609de0: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x48] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00609e14 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00609e13 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00609e13 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00609e13: }
	__asm { pop ebx }
	__asm { L_00609e14: }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { pop edi }
	__asm { test eax, eax }
	__asm { je L_00609e50 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x3c] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { L_00609e50: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005eb9a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0060baa0
extern "C" __declspec(naked) void asm_0060baa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { xor eax, eax }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 0x54] }
	__asm { mov ecx, dword ptr [ecx + 0x58] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push esi }
	__asm { add eax, edx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { je L_0060bb9a }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [ecx] }
	__asm { mov byte ptr [ebp - 1], al }
	__asm { L_0060bad8: }
	__asm { test al, al }
	__asm { jne L_0060bae0 }
	__asm { xor eax, eax }
	__asm { jmp L_0060baf1 }
	__asm { L_0060bae0: }
	__asm { mov eax, ecx }
	__asm { lea edx, [eax + 1] }
	__asm { L_0060bae5: }
	__asm { mov cl, byte ptr [eax] }
	__asm { inc eax }
	__asm { test cl, cl }
	__asm { jne L_0060bae5 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sub eax, edx }
	__asm { L_0060baf1: }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { mov edi, dword ptr [ebx + 0x10] }
	__asm { jb L_0060bafe }
	__asm { mov esi, dword ptr [ebx] }
	__asm { jmp L_0060bb00 }
	__asm { L_0060bafe: }
	__asm { mov esi, ebx }
	__asm { L_0060bb00: }
	__asm { cmp edi, eax }
	__asm { mov edx, eax }
	__asm { cmovb edx, edi }
	__asm { test edx, edx }
	__asm { je L_0060bb65 }
	__asm { mov edi, ecx }
	__asm { sub edx, 4 }
	__asm { jb L_0060bb23 }
	__asm { L_0060bb12: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [edi] }
	__asm { jne L_0060bb28 }
	__asm { add esi, 4 }
	__asm { add edi, 4 }
	__asm { sub edx, 4 }
	__asm { jae L_0060bb12 }
	__asm { L_0060bb23: }
	__asm { cmp edx, -4 }
	__asm { je L_0060bb5c }
	__asm { L_0060bb28: }
	__asm { mov cl, byte ptr [esi] }
	__asm { cmp cl, byte ptr [edi] }
	__asm { jne L_0060bb55 }
	__asm { cmp edx, -3 }
	__asm { je L_0060bb5c }
	__asm { mov cl, byte ptr [esi + 1] }
	__asm { cmp cl, byte ptr [edi + 1] }
	__asm { jne L_0060bb55 }
	__asm { cmp edx, -2 }
	__asm { je L_0060bb5c }
	__asm { mov cl, byte ptr [esi + 2] }
	__asm { cmp cl, byte ptr [edi + 2] }
	__asm { jne L_0060bb55 }
	__asm { cmp edx, -1 }
	__asm { je L_0060bb5c }
	__asm { mov cl, byte ptr [esi + 3] }
	__asm { cmp cl, byte ptr [edi + 3] }
	__asm { je L_0060bb5c }
	__asm { L_0060bb55: }
	__asm { sbb ecx, ecx }
	__asm { or ecx, 1 }
	__asm { jmp L_0060bb5e }
	__asm { L_0060bb5c: }
	__asm { xor ecx, ecx }
	__asm { L_0060bb5e: }
	__asm { test ecx, ecx }
	__asm { jne L_0060bb74 }
	__asm { mov edi, dword ptr [ebx + 0x10] }
	__asm { L_0060bb65: }
	__asm { cmp edi, eax }
	__asm { jb L_0060bb74 }
	__asm { xor ecx, ecx }
	__asm { cmp edi, eax }
	__asm { setne cl }
	__asm { test ecx, ecx }
	__asm { je L_0060bb8e }
	__asm { L_0060bb74: }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { inc esi }
	__asm { add ebx, 0x28 }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { cmp esi, dword ptr [ebp - 0xc] }
	__asm { jae L_0060bb9a }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov al, byte ptr [ebp - 1] }
	__asm { jmp L_0060bad8 }
	__asm { L_0060bb8e: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0060bb9a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e105f4[];
extern "C" void fn_00403540();
extern "C" void fn_004038a0();
extern "C" void fn_00426850();
extern "C" void fn_0060e2a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060c600
extern "C" __declspec(naked) void asm_0060c600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f307 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x60 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { xor ecx, ecx }
	__asm { xor edx, edx }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { cmp dword ptr [esi + 0x10], ebx }
	__asm { jbe L_0060c7e4 }
	__asm { L_0060c645: }
	__asm { push 4 }
	__asm { push ebx }
	__asm { push 0xe319ac }
	__asm { mov ecx, esi }
	__asm { call fn_00426850 }
	__asm { mov edi, eax }
	__asm { cmp edi, -1 }
	__asm { je L_0060c800 }
	__asm { push 1 }
	__asm { push edi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp + 0xc], 0x3d }
	__asm { call fn_00426850 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp eax, -1 }
	__asm { je L_0060c800 }
	__asm { push 1 }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp + 0xc], 0xa }
	__asm { call fn_00426850 }
	__asm { mov ebx, eax }
	__asm { cmp ebx, -1 }
	__asm { je L_0060c800 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0060c6a6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0060c6a8 }
	__asm { L_0060c6a6: }
	__asm { mov eax, esi }
	__asm { L_0060c6a8: }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { add eax, edx }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0060c6b6 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0060c6b8 }
	__asm { L_0060c6b6: }
	__asm { mov ecx, esi }
	__asm { L_0060c6b8: }
	__asm { add ecx, 4 }
	__asm { add ecx, edi }
	__asm { mov dword ptr [ebp - 0x3c], 0xf }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { mov byte ptr [ebp - 0x50], 0 }
	__asm { cmp ecx, eax }
	__asm { je L_0060c6e2 }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { call fn_004038a0 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { L_0060c6e2: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0060c6f2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0060c6f4 }
	__asm { L_0060c6f2: }
	__asm { mov eax, esi }
	__asm { L_0060c6f4: }
	__asm { add eax, ebx }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0060c6ff }
	__asm { mov ecx, dword ptr [esi] }
	__asm { jmp L_0060c701 }
	__asm { L_0060c6ff: }
	__asm { mov ecx, esi }
	__asm { L_0060c701: }
	__asm { inc edx }
	__asm { add edx, ecx }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { mov dword ptr [ebp - 0x28], ecx }
	__asm { mov byte ptr [ebp - 0x38], cl }
	__asm { cmp edx, eax }
	__asm { je L_0060c726 }
	__asm { sub eax, edx }
	__asm { push eax }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { L_0060c726: }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_0060c79a }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { cmovae eax, dword ptr [ebp - 0x38] }
	__asm { cmp byte ptr [eax], 0x73 }
	__asm { jne L_0060c79a }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { mov dword ptr [ebp - 0x58], 0xf }
	__asm { mov dword ptr [ebp - 0x5c], 0 }
	__asm { mov byte ptr [ebp - 0x6c], 0 }
	__asm { call fn_00403540 }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { cmovae eax, dword ptr [ebp - 0x38] }
	__asm { inc eax }
	__asm { push eax }
	__asm { call dword ptr [g_00e105f4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0060e2a0 }
	__asm { cmp dword ptr [ebp - 0x58], 0x10 }
	__asm { jb L_0060c79a }
	__asm { push dword ptr [ebp - 0x6c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060c79a: }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { jb L_0060c7ab }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060c7ab: }
	__asm { cmp dword ptr [ebp - 0x3c], 0x10 }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x38], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jb L_0060c7d2 }
	__asm { push dword ptr [ebp - 0x50] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060c7d2: }
	__asm { cmp ebx, dword ptr [esi + 0x10] }
	__asm { jb L_0060c645 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov edx, dword ptr [ebp - 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { L_0060c7e4: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0060c800: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012da3c4[];
extern "C" char g_012da454[];
extern "C" char g_012da4ec[];
extern "C" void fn_00451670();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060c8d0
extern "C" __declspec(naked) void asm_0060c8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f32b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor ebx, ebx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { call dword ptr [g_012da4ec] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, 0x92492493 }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { sub ecx, esi }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { add eax, edx }
	__asm { je L_0060c9fe }
	__asm { L_0060c923: }
	__asm { add esi, ebx }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0060c92f }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0060c931 }
	__asm { L_0060c92f: }
	__asm { mov eax, esi }
	__asm { L_0060c931: }
	__asm { push eax }
	__asm { push edi }
	__asm { call dword ptr [g_012da3c4] }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jns L_0060c9a9 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push 0xe319b4 }
	__asm { push eax }
	__asm { call fn_00451670 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_0060c960 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0060c960: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_012da3c4] }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { setns al }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_0060c98f }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { mov al, byte ptr [ebp - 0xd] }
	__asm { add esp, 4 }
	__asm { L_0060c98f: }
	__asm { mov dword ptr [ebp - 0x1c], 0xf }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 0x30], 0 }
	__asm { test al, al }
	__asm { je L_0060c9c9 }
	__asm { test edi, edi }
	__asm { js L_0060c9c9 }
	__asm { L_0060c9a9: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [ebx + eax + 0x18] }
	__asm { push edi }
	__asm { call dword ptr [g_012da454] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, 1 }
	__asm { mov ecx, dword ptr [ebx + ecx + 0x18] }
	__asm { shl eax, cl }
	__asm { or dword ptr [ebp - 0x14], eax }
	__asm { L_0060c9c9: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { inc edi }
	__asm { add ecx, edx }
	__asm { add ebx, 0x1c }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { cmp edi, ecx }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { jb L_0060c923 }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { L_0060c9fe: }
	__asm { push 0 }
	__asm { call dword ptr [g_012da4ec] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_0060ceb0();
// FUNCTION: ROBLOXSTUDIO 0x0060d110
extern "C" __declspec(naked) void asm_0060d110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 4], 0x6666665 }
	__asm { jb L_0060d12b }
	__asm { push 0xf13d5c }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0060d12b: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_0060ceb0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { inc dword ptr [edi + 4] }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { mov edx, dword ptr [edi] }
	__asm { cmp ecx, edx }
	__asm { jne L_0060d14f }
	__asm { mov dword ptr [edx + 4], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_0060d16b }
	__asm { L_0060d14f: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_0060d161 }
	__asm { mov dword ptr [ecx], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp ecx, dword ptr [eax] }
	__asm { jne L_0060d16e }
	__asm { mov dword ptr [eax], ebx }
	__asm { jmp L_0060d16e }
	__asm { L_0060d161: }
	__asm { mov dword ptr [ecx + 8], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp ecx, dword ptr [eax + 8] }
	__asm { jne L_0060d16e }
	__asm { L_0060d16b: }
	__asm { mov dword ptr [eax + 8], ebx }
	__asm { L_0060d16e: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, ebx }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { jne L_0060d2fb }
	__asm { push esi }
	__asm { mov edi, edi }
	__asm { L_0060d180: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, dword ptr [esi] }
	__asm { cmp ecx, edx }
	__asm { jne L_0060d23b }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { cmp byte ptr [edx + 0xc], 0 }
	__asm { je L_0060d241 }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_0060d1dc }
	__asm { mov eax, ecx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_0060d1b7 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_0060d1b7: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_0060d1c9 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { jmp L_0060d1d7 }
	__asm { L_0060d1c9: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_0060d1d4 }
	__asm { mov dword ptr [ecx], edx }
	__asm { jmp L_0060d1d7 }
	__asm { L_0060d1d4: }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { L_0060d1d7: }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_0060d1dc: }
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
	__asm { jne L_0060d206 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { L_0060d206: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { jne L_0060d21e }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_0060d2ea }
	__asm { L_0060d21e: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp edx, dword ptr [ecx + 8] }
	__asm { jne L_0060d231 }
	__asm { mov dword ptr [ecx + 8], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_0060d2ea }
	__asm { L_0060d231: }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_0060d2ea }
	__asm { L_0060d23b: }
	__asm { cmp byte ptr [edx + 0xc], 0 }
	__asm { jne L_0060d25e }
	__asm { L_0060d241: }
	__asm { mov byte ptr [ecx + 0xc], 1 }
	__asm { mov byte ptr [edx + 0xc], 1 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { jmp L_0060d2ed }
	__asm { L_0060d25e: }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_0060d29e }
	__asm { mov eax, ecx }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_0060d277 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_0060d277: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_0060d289 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { jmp L_0060d298 }
	__asm { L_0060d289: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_0060d296 }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { jmp L_0060d298 }
	__asm { L_0060d296: }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_0060d298: }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_0060d29e: }
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
	__asm { jne L_0060d2c8 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { L_0060d2c8: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { jne L_0060d2da }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { jmp L_0060d2e8 }
	__asm { L_0060d2da: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { jne L_0060d2e5 }
	__asm { mov dword ptr [ecx], esi }
	__asm { jmp L_0060d2e8 }
	__asm { L_0060d2e5: }
	__asm { mov dword ptr [ecx + 8], esi }
	__asm { L_0060d2e8: }
	__asm { mov dword ptr [esi], edx }
	__asm { L_0060d2ea: }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { L_0060d2ed: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { je L_0060d180 }
	__asm { pop esi }
	__asm { L_0060d2fb: }
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

extern "C" void fn_00402fd0();
extern "C" void fn_00409af0();
extern "C" void fn_0040d6f0();
extern "C" void fn_0048e630();
extern "C" void fn_0060cee0();
extern "C" void fn_0060d4f0();
extern "C" void fn_00b68b30();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0060d310
extern "C" __declspec(naked) void asm_0060d310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f370 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_0060d36d }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [edi] }
	__asm { L_0060d34b: }
	__asm { push 1 }
	__asm { L_0060d34d: }
	__asm { mov ecx, edi }
	__asm { L_0060d34f: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_0060cee0 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_0060d36d: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_0060d3a6 }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { add eax, 0x10 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0060d384 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0060d384: }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_0060d4a6 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { jmp L_0060d34b }
	__asm { L_0060d3a6: }
	__asm { cmp eax, ecx }
	__asm { jne L_0060d3e5 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { add ecx, 0x10 }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_0060d3bd }
	__asm { mov eax, dword ptr [ebx] }
	__asm { jmp L_0060d3bf }
	__asm { L_0060d3bd: }
	__asm { mov eax, ebx }
	__asm { L_0060d3bf: }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_0060d4a6 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ebx }
	__asm { push dword ptr [eax + 8] }
	__asm { push 0 }
	__asm { jmp L_0060d34d }
	__asm { L_0060d3e5: }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { add eax, 0x10 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0060d3f3 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0060d3f3: }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [ebx + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_0060d44b }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { call fn_0040d6f0 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x13] }
	__asm { call fn_0048e630 }
	__asm { test al, al }
	__asm { je L_0060d44b }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov ecx, edi }
	__asm { push ebx }
	__asm { je L_0060d441 }
	__asm { L_0060d439: }
	__asm { push esi }
	__asm { push 0 }
	__asm { jmp L_0060d34f }
	__asm { L_0060d441: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { jmp L_0060d34f }
	__asm { L_0060d44b: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x13] }
	__asm { call fn_0048e630 }
	__asm { test al, al }
	__asm { je L_0060d4a6 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { call fn_00409af0 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp edi, dword ptr [ecx] }
	__asm { je L_0060d48e }
	__asm { lea eax, [edi + 0x10] }
	__asm { push eax }
	__asm { push ebx }
	__asm { lea ecx, [ebp + 0x13] }
	__asm { call fn_0048e630 }
	__asm { test al, al }
	__asm { je L_0060d4a3 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { L_0060d48e: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { push ebx }
	__asm { jne L_0060d439 }
	__asm { push edi }
	__asm { push 1 }
	__asm { jmp L_0060d34f }
	__asm { L_0060d4a3: }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { L_0060d4a6: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060d4f0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00b68b30 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00402fd0();
extern "C" void fn_0040d6f0();
extern "C" void fn_0060cee0();
extern "C" void fn_00b68b30();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0060d4f0
extern "C" __declspec(naked) void asm_0060d4f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f380 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov edx, ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov edx, dword ptr [edx] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov al, 1 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x24], edx }
	__asm { mov dword ptr [ebp - 0x20], edx }
	__asm { mov byte ptr [ebp - 0x18], al }
	__asm { L_0060d52d: }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { jne L_0060d694 }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { add ecx, 0x10 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_0060d5e9 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ebx, dword ptr [eax + 0x10] }
	__asm { jb L_0060d55a }
	__asm { mov esi, dword ptr [eax] }
	__asm { jmp L_0060d55c }
	__asm { L_0060d55a: }
	__asm { mov esi, eax }
	__asm { L_0060d55c: }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { mov edi, dword ptr [ecx + 0x10] }
	__asm { jb L_0060d567 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_0060d567: }
	__asm { cmp edi, ebx }
	__asm { mov edx, ebx }
	__asm { cmovb edx, edi }
	__asm { test edx, edx }
	__asm { je L_0060d5c7 }
	__asm { sub edx, 4 }
	__asm { jb L_0060d588 }
	__asm { L_0060d577: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jne L_0060d58d }
	__asm { add ecx, 4 }
	__asm { add esi, 4 }
	__asm { sub edx, 4 }
	__asm { jae L_0060d577 }
	__asm { L_0060d588: }
	__asm { cmp edx, -4 }
	__asm { je L_0060d5c1 }
	__asm { L_0060d58d: }
	__asm { mov al, byte ptr [ecx] }
	__asm { cmp al, byte ptr [esi] }
	__asm { jne L_0060d5ba }
	__asm { cmp edx, -3 }
	__asm { je L_0060d5c1 }
	__asm { mov al, byte ptr [ecx + 1] }
	__asm { cmp al, byte ptr [esi + 1] }
	__asm { jne L_0060d5ba }
	__asm { cmp edx, -2 }
	__asm { je L_0060d5c1 }
	__asm { mov al, byte ptr [ecx + 2] }
	__asm { cmp al, byte ptr [esi + 2] }
	__asm { jne L_0060d5ba }
	__asm { cmp edx, -1 }
	__asm { je L_0060d5c1 }
	__asm { mov al, byte ptr [ecx + 3] }
	__asm { cmp al, byte ptr [esi + 3] }
	__asm { je L_0060d5c1 }
	__asm { L_0060d5ba: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { jmp L_0060d5c3 }
	__asm { L_0060d5c1: }
	__asm { xor eax, eax }
	__asm { L_0060d5c3: }
	__asm { test eax, eax }
	__asm { jne L_0060d5e1 }
	__asm { L_0060d5c7: }
	__asm { cmp edi, ebx }
	__asm { jae L_0060d5d8 }
	__asm { or eax, 0xffffffff }
	__asm { test eax, eax }
	__asm { setns al }
	__asm { jmp L_0060d67b }
	__asm { L_0060d5d8: }
	__asm { xor eax, eax }
	__asm { cmp edi, ebx }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { L_0060d5e1: }
	__asm { setns al }
	__asm { jmp L_0060d67b }
	__asm { L_0060d5e9: }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { mov ebx, dword ptr [ecx + 0x10] }
	__asm { jb L_0060d5f4 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_0060d5f4: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov edi, dword ptr [eax + 0x10] }
	__asm { jb L_0060d604 }
	__asm { mov esi, dword ptr [eax] }
	__asm { jmp L_0060d606 }
	__asm { L_0060d604: }
	__asm { mov esi, eax }
	__asm { L_0060d606: }
	__asm { cmp edi, ebx }
	__asm { mov edx, ebx }
	__asm { cmovb edx, edi }
	__asm { test edx, edx }
	__asm { je L_0060d666 }
	__asm { sub edx, 4 }
	__asm { jb L_0060d627 }
	__asm { L_0060d616: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_0060d62c }
	__asm { add esi, 4 }
	__asm { add ecx, 4 }
	__asm { sub edx, 4 }
	__asm { jae L_0060d616 }
	__asm { L_0060d627: }
	__asm { cmp edx, -4 }
	__asm { je L_0060d660 }
	__asm { L_0060d62c: }
	__asm { mov al, byte ptr [esi] }
	__asm { cmp al, byte ptr [ecx] }
	__asm { jne L_0060d659 }
	__asm { cmp edx, -3 }
	__asm { je L_0060d660 }
	__asm { mov al, byte ptr [esi + 1] }
	__asm { cmp al, byte ptr [ecx + 1] }
	__asm { jne L_0060d659 }
	__asm { cmp edx, -2 }
	__asm { je L_0060d660 }
	__asm { mov al, byte ptr [esi + 2] }
	__asm { cmp al, byte ptr [ecx + 2] }
	__asm { jne L_0060d659 }
	__asm { cmp edx, -1 }
	__asm { je L_0060d660 }
	__asm { mov al, byte ptr [esi + 3] }
	__asm { cmp al, byte ptr [ecx + 3] }
	__asm { je L_0060d660 }
	__asm { L_0060d659: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { jmp L_0060d662 }
	__asm { L_0060d660: }
	__asm { xor eax, eax }
	__asm { L_0060d662: }
	__asm { test eax, eax }
	__asm { jne L_0060d678 }
	__asm { L_0060d666: }
	__asm { cmp edi, ebx }
	__asm { jae L_0060d66f }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_0060d676 }
	__asm { L_0060d66f: }
	__asm { xor eax, eax }
	__asm { cmp edi, ebx }
	__asm { setne al }
	__asm { L_0060d676: }
	__asm { test eax, eax }
	__asm { L_0060d678: }
	__asm { sets al }
	__asm { L_0060d67b: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 0x18], al }
	__asm { test al, al }
	__asm { je L_0060d68c }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { jmp L_0060d52d }
	__asm { L_0060d68c: }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { jmp L_0060d52d }
	__asm { L_0060d694: }
	__asm { mov ebx, dword ptr [ebp - 0x20] }
	__asm { mov esi, ebx }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { test al, al }
	__asm { je L_0060d6e6 }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { cmp ebx, dword ptr [eax] }
	__asm { jne L_0060d6db }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push 1 }
	__asm { L_0060d6b1: }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_0060cee0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_0060d6db: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_0040d6f0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { L_0060d6e6: }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0060d6f6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_0060d6f8 }
	__asm { L_0060d6f6: }
	__asm { mov eax, edi }
	__asm { L_0060d6f8: }
	__asm { push dword ptr [edi + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_0060d714 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { jmp L_0060d6b1 }
	__asm { L_0060d714: }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [edi + 0x24], 0x10 }
	__asm { jb L_0060d728 }
	__asm { push dword ptr [edi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060d728: }
	__asm { mov dword ptr [edi + 0x24], 0xf }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { push edi }
	__asm { mov byte ptr [edi + 0x10], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { call fn_00b68b30 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00402fd0();
extern "C" void fn_0040d6f0();
extern "C" void fn_0060d110();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0060d780
extern "C" __declspec(naked) void asm_0060d780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f390 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov al, 1 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov byte ptr [ebp - 0x18], al }
	__asm { L_0060d7ba: }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { jne L_0060d921 }
	__asm { mov dword ptr [ebp - 0x1c], ecx }
	__asm { add ecx, 0x10 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_0060d876 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov ebx, dword ptr [eax + 0x10] }
	__asm { jb L_0060d7e7 }
	__asm { mov esi, dword ptr [eax] }
	__asm { jmp L_0060d7e9 }
	__asm { L_0060d7e7: }
	__asm { mov esi, eax }
	__asm { L_0060d7e9: }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { mov edi, dword ptr [ecx + 0x10] }
	__asm { jb L_0060d7f4 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_0060d7f4: }
	__asm { cmp edi, ebx }
	__asm { mov edx, ebx }
	__asm { cmovb edx, edi }
	__asm { test edx, edx }
	__asm { je L_0060d854 }
	__asm { sub edx, 4 }
	__asm { jb L_0060d815 }
	__asm { L_0060d804: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jne L_0060d81a }
	__asm { add ecx, 4 }
	__asm { add esi, 4 }
	__asm { sub edx, 4 }
	__asm { jae L_0060d804 }
	__asm { L_0060d815: }
	__asm { cmp edx, -4 }
	__asm { je L_0060d84e }
	__asm { L_0060d81a: }
	__asm { mov al, byte ptr [ecx] }
	__asm { cmp al, byte ptr [esi] }
	__asm { jne L_0060d847 }
	__asm { cmp edx, -3 }
	__asm { je L_0060d84e }
	__asm { mov al, byte ptr [ecx + 1] }
	__asm { cmp al, byte ptr [esi + 1] }
	__asm { jne L_0060d847 }
	__asm { cmp edx, -2 }
	__asm { je L_0060d84e }
	__asm { mov al, byte ptr [ecx + 2] }
	__asm { cmp al, byte ptr [esi + 2] }
	__asm { jne L_0060d847 }
	__asm { cmp edx, -1 }
	__asm { je L_0060d84e }
	__asm { mov al, byte ptr [ecx + 3] }
	__asm { cmp al, byte ptr [esi + 3] }
	__asm { je L_0060d84e }
	__asm { L_0060d847: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { jmp L_0060d850 }
	__asm { L_0060d84e: }
	__asm { xor eax, eax }
	__asm { L_0060d850: }
	__asm { test eax, eax }
	__asm { jne L_0060d86e }
	__asm { L_0060d854: }
	__asm { cmp edi, ebx }
	__asm { jae L_0060d865 }
	__asm { or eax, 0xffffffff }
	__asm { test eax, eax }
	__asm { setns al }
	__asm { jmp L_0060d908 }
	__asm { L_0060d865: }
	__asm { xor eax, eax }
	__asm { cmp edi, ebx }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { L_0060d86e: }
	__asm { setns al }
	__asm { jmp L_0060d908 }
	__asm { L_0060d876: }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { mov ebx, dword ptr [ecx + 0x10] }
	__asm { jb L_0060d881 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_0060d881: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov edi, dword ptr [eax + 0x10] }
	__asm { jb L_0060d891 }
	__asm { mov esi, dword ptr [eax] }
	__asm { jmp L_0060d893 }
	__asm { L_0060d891: }
	__asm { mov esi, eax }
	__asm { L_0060d893: }
	__asm { cmp edi, ebx }
	__asm { mov edx, ebx }
	__asm { cmovb edx, edi }
	__asm { test edx, edx }
	__asm { je L_0060d8f3 }
	__asm { sub edx, 4 }
	__asm { jb L_0060d8b4 }
	__asm { L_0060d8a3: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_0060d8b9 }
	__asm { add esi, 4 }
	__asm { add ecx, 4 }
	__asm { sub edx, 4 }
	__asm { jae L_0060d8a3 }
	__asm { L_0060d8b4: }
	__asm { cmp edx, -4 }
	__asm { je L_0060d8ed }
	__asm { L_0060d8b9: }
	__asm { mov al, byte ptr [esi] }
	__asm { cmp al, byte ptr [ecx] }
	__asm { jne L_0060d8e6 }
	__asm { cmp edx, -3 }
	__asm { je L_0060d8ed }
	__asm { mov al, byte ptr [esi + 1] }
	__asm { cmp al, byte ptr [ecx + 1] }
	__asm { jne L_0060d8e6 }
	__asm { cmp edx, -2 }
	__asm { je L_0060d8ed }
	__asm { mov al, byte ptr [esi + 2] }
	__asm { cmp al, byte ptr [ecx + 2] }
	__asm { jne L_0060d8e6 }
	__asm { cmp edx, -1 }
	__asm { je L_0060d8ed }
	__asm { mov al, byte ptr [esi + 3] }
	__asm { cmp al, byte ptr [ecx + 3] }
	__asm { je L_0060d8ed }
	__asm { L_0060d8e6: }
	__asm { sbb eax, eax }
	__asm { or eax, 1 }
	__asm { jmp L_0060d8ef }
	__asm { L_0060d8ed: }
	__asm { xor eax, eax }
	__asm { L_0060d8ef: }
	__asm { test eax, eax }
	__asm { jne L_0060d905 }
	__asm { L_0060d8f3: }
	__asm { cmp edi, ebx }
	__asm { jae L_0060d8fc }
	__asm { or eax, 0xffffffff }
	__asm { jmp L_0060d903 }
	__asm { L_0060d8fc: }
	__asm { xor eax, eax }
	__asm { cmp edi, ebx }
	__asm { setne al }
	__asm { L_0060d903: }
	__asm { test eax, eax }
	__asm { L_0060d905: }
	__asm { sets al }
	__asm { L_0060d908: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 0x18], al }
	__asm { test al, al }
	__asm { je L_0060d919 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { jmp L_0060d7ba }
	__asm { L_0060d919: }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { jmp L_0060d7ba }
	__asm { L_0060d921: }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { mov esi, ebx }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { test al, al }
	__asm { je L_0060d972 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp ebx, dword ptr [eax] }
	__asm { jne L_0060d967 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push 1 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { L_0060d943: }
	__asm { push eax }
	__asm { call fn_0060d110 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_0060d967: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_0040d6f0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { L_0060d972: }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0060d982 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_0060d984 }
	__asm { L_0060d982: }
	__asm { mov eax, edi }
	__asm { L_0060d984: }
	__asm { push dword ptr [edi + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x10] }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_0060d9a6 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { jmp L_0060d943 }
	__asm { L_0060d9a6: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10888[];
extern "C" void fn_005eb040();
extern "C" void fn_006065f0();
extern "C" void fn_006106a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060e7e0
extern "C" __declspec(naked) void asm_0060e7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f43e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe32104 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 0x30] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_006065f0 }
	__asm { lea eax, [edi + 0x4c] }
	__asm { push eax }
	__asm { push 1 }
	__asm { call dword ptr [g_00e10888] }
	__asm { mov eax, dword ptr [edi + 0x5c] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x5c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_005eb040 }
	__asm { push dword ptr [edi + 0x5c] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [edi + 0x48] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0060e864 }
	__asm { lea eax, [ecx + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0060e864 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0060e864: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006106a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10828[];
extern "C" char g_00e10898[];
extern "C" char g_00e108a8[];
extern "C" char g_012d9da8[];
extern "C" char g_012d9db0[];
extern "C" char g_012d9dfc[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00606660();
extern "C" void fn_006106b0();
extern "C" void fn_006106d0();
extern "C" void fn_006106e0();
extern "C" void fn_00610820();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0060e890
extern "C" __declspec(naked) void asm_0060e890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov edx, dword ptr [edi + 0x28] }
	__asm { lea eax, [eax + eax*2] }
	__asm { mov ebx, dword ptr [edx*4 + 0xe32020] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { mov eax, 1 }
	__asm { test cl, cl }
	__asm { je L_0060e90d }
	__asm { cmp edx, 2 }
	__asm { mov dword ptr [ebp + 8], 6 }
	__asm { cmove eax, dword ptr [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { jb L_0060e90d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060e8fc }
	__asm { push 0xaf }
	__asm { push 0xe321b0 }
	__asm { push 0xe321f8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060e90d }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0060e8fc: }
	__asm { movzx eax, cl }
	__asm { push 0xe32220 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060e90d: }
	__asm { cmp dword ptr [edi + 0x28], 2 }
	__asm { jne L_0060e919 }
	__asm { lea ebx, [esi + 0x8515] }
	__asm { L_0060e919: }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00610820 }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x34] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { call fn_00610820 }
	__asm { push ebx }
	__asm { push dword ptr [edi + 0x38] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_00610820 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { add esp, 0x18 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { je L_0060ead4 }
	__asm { cmp ebx, dword ptr [edi + 0x3c] }
	__asm { jb L_0060e992 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060e97d }
	__asm { push 0xb6 }
	__asm { push 0xe321b0 }
	__asm { push 0xe1be7c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060e992 }
	__asm { L_0060e97d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe322a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060e992: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0060ead4 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { add eax, dword ptr [esi] }
	__asm { cmp eax, dword ptr [ebp - 0xc] }
	__asm { jbe L_0060e9df }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060e9ca }
	__asm { push 0xb7 }
	__asm { push 0xe321b0 }
	__asm { push 0xe1befc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060e9df }
	__asm { L_0060e9ca: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32308 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060e9df: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0060ead4 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { add eax, dword ptr [esi + 0x10] }
	__asm { cmp eax, dword ptr [ebp - 0x10] }
	__asm { jbe L_0060ea2d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060ea18 }
	__asm { push 0xb8 }
	__asm { push 0xe321b0 }
	__asm { push 0xe1bfa0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060ea2d }
	__asm { L_0060ea18: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32388 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060ea2d: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0060ead4 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, dword ptr [ebp - 0x14] }
	__asm { jbe L_0060ea7b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060ea66 }
	__asm { push 0xb9 }
	__asm { push 0xe321b0 }
	__asm { push 0xe1c04c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060ea7b }
	__asm { L_0060ea66: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32408 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060ea7b: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0060ead4 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { call fn_006106e0 }
	__asm { imul eax, dword ptr [esi + 0x14] }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp + 0x18], eax }
	__asm { je L_0060ead4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060eabf }
	__asm { push 0xbb }
	__asm { push 0xe321b0 }
	__asm { push 0xe1c0f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060ead4 }
	__asm { L_0060eabf: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32488 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060ead4: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { call fn_00606660 }
	__asm { push 0x84c0 }
	__asm { call dword ptr [g_012d9db0] }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { mov ebx, dword ptr [g_00e10828] }
	__asm { push dword ptr [ebp - 8] }
	__asm { call ebx }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { call fn_006106b0 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0060eb1d }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { call fn_006106d0 }
	__asm { add esp, 4 }
	__asm { cmp eax, 0x20 }
	__asm { jae L_0060eb1d }
	__asm { mov cl, 1 }
	__asm { jmp L_0060eb1f }
	__asm { L_0060eb1d: }
	__asm { xor cl, cl }
	__asm { L_0060eb1f: }
	__asm { test cl, cl }
	__asm { mov ecx, 1 }
	__asm { mov eax, 4 }
	__asm { cmovne eax, ecx }
	__asm { push eax }
	__asm { push 0xcf5 }
	__asm { call dword ptr [g_00e10898] }
	__asm { cmp dword ptr [edi + 0x28], 1 }
	__asm { jne L_0060eb81 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push dword ptr [eax*4 + 0xe32040] }
	__asm { push dword ptr [eax*4 + 0xe3203c] }
	__asm { push dword ptr [esi + 0x14] }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push dword ptr [esi + 8] }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_012d9da8] }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { call ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_0060eb81: }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { call fn_006106b0 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { je L_0060ebc7 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [eax*4 + 0xe32038] }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_012d9dfc] }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { call ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_0060ebc7: }
	__asm { push dword ptr [eax*4 + 0xe32040] }
	__asm { push dword ptr [eax*4 + 0xe3203c] }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e108a8] }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { call ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10828[];
extern "C" char g_00e10890[];
extern "C" char g_00e10898[];
extern "C" char g_012d9db0[];
extern "C" char g_012d9e14[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00606660();
extern "C" void fn_006106b0();
extern "C" void fn_006106d0();
extern "C" void fn_006106e0();
extern "C" void fn_00610820();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0060ec00
extern "C" __declspec(naked) void asm_0060ec00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov edx, dword ptr [esi + 0x28] }
	__asm { lea eax, [eax + eax*2] }
	__asm { push edi }
	__asm { mov edi, dword ptr [edx*4 + 0xe32020] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { mov eax, 1 }
	__asm { test cl, cl }
	__asm { je L_0060ec7d }
	__asm { cmp edx, 2 }
	__asm { mov dword ptr [ebp + 8], 6 }
	__asm { cmove eax, dword ptr [ebp + 8] }
	__asm { cmp ebx, eax }
	__asm { jb L_0060ec7d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060ec6c }
	__asm { push 0xe4 }
	__asm { push 0xe321b0 }
	__asm { push 0xe321f8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060ec7d }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0060ec6c: }
	__asm { movzx eax, cl }
	__asm { push 0xe32528 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060ec7d: }
	__asm { cmp dword ptr [esi + 0x28], 2 }
	__asm { jne L_0060ec8b }
	__asm { add ebx, 0x8515 }
	__asm { jmp L_0060ec8d }
	__asm { L_0060ec8b: }
	__asm { mov ebx, edi }
	__asm { L_0060ec8d: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x30] }
	__asm { call fn_00610820 }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x34] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_00610820 }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x38] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00610820 }
	__asm { add esp, 0x18 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { je L_0060ed59 }
	__asm { cmp edi, dword ptr [esi + 0x3c] }
	__asm { jb L_0060ed00 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060eceb }
	__asm { push 0xeb }
	__asm { push 0xe321b0 }
	__asm { push 0xe1be7c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060ed00 }
	__asm { L_0060eceb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe325a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060ed00: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0060ed59 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_006106e0 }
	__asm { imul eax, dword ptr [ebp - 8] }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp + 0x14], eax }
	__asm { je L_0060ed59 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060ed44 }
	__asm { push 0xec }
	__asm { push 0xe321b0 }
	__asm { push 0xe1c254 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060ed59 }
	__asm { L_0060ed44: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32610 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060ed59: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [ecx + 0x30] }
	__asm { call fn_00606660 }
	__asm { push 0x84c0 }
	__asm { call dword ptr [g_012d9db0] }
	__asm { push dword ptr [esi + 0x4c] }
	__asm { push dword ptr [ebp - 4] }
	__asm { call dword ptr [g_00e10828] }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_006106b0 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0060eda0 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_006106d0 }
	__asm { add esp, 4 }
	__asm { cmp eax, 0x20 }
	__asm { jae L_0060eda0 }
	__asm { mov cl, 1 }
	__asm { jmp L_0060eda2 }
	__asm { L_0060eda0: }
	__asm { xor cl, cl }
	__asm { L_0060eda2: }
	__asm { test cl, cl }
	__asm { mov ecx, 1 }
	__asm { mov eax, 4 }
	__asm { cmovne eax, ecx }
	__asm { push eax }
	__asm { push 0xd05 }
	__asm { call dword ptr [g_00e10898] }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_006106b0 }
	__asm { add esp, 4 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { test al, al }
	__asm { je L_0060edd9 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call dword ptr [g_012d9e14] }
	__asm { jmp L_0060edf2 }
	__asm { L_0060edd9: }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { push dword ptr [eax*4 + 0xe32040] }
	__asm { push dword ptr [eax*4 + 0xe3203c] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10890] }
	__asm { L_0060edf2: }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { call dword ptr [g_00e10828] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00421e70();
extern "C" void fn_005eae50();
extern "C" void fn_006095b0();
extern "C" void fn_0060f290();
extern "C" void fn_006b9740();
extern "C" void fn_00a5d310();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0060ee50
extern "C" __declspec(naked) void asm_0060ee50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f474 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov ebx, ecx }
	__asm { je L_0060eebd }
	__asm { test edi, edi }
	__asm { je L_0060eebd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060eea8 }
	__asm { push 0x114 }
	__asm { push 0xe321b0 }
	__asm { push 0xe326a4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060eebd }
	__asm { L_0060eea8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe326b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060eebd: }
	__asm { cmp dword ptr [ebx + 0x28], 0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { jne L_0060ef09 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0060ef09 }
	__asm { test esi, esi }
	__asm { je L_0060ef09 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060eef4 }
	__asm { push 0x115 }
	__asm { push 0xe321b0 }
	__asm { push 0xe1b904 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060ef09 }
	__asm { L_0060eef4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32710 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060ef09: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x5c] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call fn_005eae50 }
	__asm { mov edi, eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a5d310 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { or esi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { jne L_0060f0d6 }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { sub eax, 0 }
	__asm { je L_0060eff9 }
	__asm { sub eax, 2 }
	__asm { je L_0060eff0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0060ef93 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060ef82 }
	__asm { push 0x121 }
	__asm { push 0xe321b0 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060ef93 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0060ef82: }
	__asm { movzx eax, al }
	__asm { push 0xe32778 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060ef93: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0060efdb }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0060efdb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0060efdb }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0060efdb: }
	__asm { mov eax, ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0060eff0: }
	__asm { add dword ptr [ebp + 0xc], 0x8515 }
	__asm { jmp L_0060f000 }
	__asm { L_0060eff9: }
	__asm { mov dword ptr [ebp + 0xc], 0xde1 }
	__asm { L_0060f000: }
	__asm { push 0x48 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_0060f031 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebx + 0x44] }
	__asm { sub esp, 8 }
	__asm { push esp }
	__asm { call fn_00421e70 }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { call fn_006095b0 }
	__asm { jmp L_0060f033 }
	__asm { L_0060f031: }
	__asm { xor eax, eax }
	__asm { L_0060f033: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0060f290 }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edi], edx }
	__asm { cmp ebx, dword ptr [edi + 4] }
	__asm { je L_0060f077 }
	__asm { test ebx, ebx }
	__asm { je L_0060f05d }
	__asm { lea eax, [ebx + 8] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0060f05d: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0060f074 }
	__asm { lea eax, [ecx + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0060f074 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0060f074: }
	__asm { mov dword ptr [edi + 4], ebx }
	__asm { L_0060f077: }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { L_0060f07a: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov edi, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], ebx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0060f0c1 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0060f0c1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_0060f0be }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0060f0be: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { L_0060f0c1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, edx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0060f0d6: }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { jmp L_0060f07a }
}

extern "C" void fn_006089e0();
// FUNCTION: ROBLOXSTUDIO 0x0060f290
extern "C" __declspec(naked) void asm_0060f290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_006089e0 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [edi], esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { test esi, esi }
	__asm { je L_0060f2e6 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0060f2e6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0060f2e6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0060f2e6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0060f500();
// FUNCTION: ROBLOXSTUDIO 0x0060f6f0
extern "C" __declspec(naked) void asm_0060f6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f4c3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebx], 0xe32a98 }
	__asm { mov esi, dword ptr [ebx + 0x34] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0060f74c }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0060f74c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0060f74c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0060f74c: }
	__asm { mov esi, dword ptr [ebx + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0060f77a }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0060f77a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0060f77a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0060f77a: }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f500 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0060f3f0();
// FUNCTION: ROBLOXSTUDIO 0x0060f8e0
extern "C" __declspec(naked) void asm_0060f8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_0060f3f0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], 0xe32a98 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov edx, 1 }
	__asm { test eax, eax }
	__asm { je L_0060f914 }
	__asm { add eax, 4 }
	__asm { mov ecx, edx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0060f914: }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { test eax, eax }
	__asm { je L_0060f92e }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { inc edx }
	__asm { L_0060f92e: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00412d20();
extern "C" void fn_0060f960();
extern "C" void fn_0060fa40();
extern "C" void fn_0068f700();
extern "C" void fn_0068f930();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00610040
extern "C" __declspec(naked) void asm_00610040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f593 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x90 }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0061006f }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_00610071 }
	__asm { L_0061006f: }
	__asm { mov edx, eax }
	__asm { L_00610071: }
	__asm { cmp ecx, 0x10 }
	__asm { jb L_0061007a }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0061007c }
	__asm { L_0061007a: }
	__asm { mov ecx, eax }
	__asm { L_0061007c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { sub esp, 0x38 }
	__asm { add eax, ecx }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_0060f960 }
	__asm { lea eax, [ebp - 0x9c] }
	__asm { push eax }
	__asm { call fn_0068f700 }
	__asm { add esp, 0x40 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { sub esp, 0x38 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 0x20], 0 }
	__asm { mov dword ptr [eax + 0x24], 0 }
	__asm { mov dword ptr [eax + 0x28], 0 }
	__asm { mov dword ptr [eax + 0x2c], 0 }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { call fn_0068f700 }
	__asm { add esp, 0x40 }
	__asm { push 0 }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { mov dword ptr [ebp + 0xc], esp }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0068f930 }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp - 0x9c] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0068f930 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0060fa40 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { cmp esi, eax }
	__asm { je L_00610148 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { jmp L_0061014e }
	__asm { L_00610148: }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { L_0061014e: }
	__asm { test edx, edx }
	__asm { je L_0061017c }
	__asm { push edi }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_00412d20 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { L_0061017c: }
	__asm { mov eax, dword ptr [ebp - 0x5c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_006101a7 }
	__asm { test al, 1 }
	__asm { jne L_006101a0 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006101a0 }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006101a0: }
	__asm { mov dword ptr [ebp - 0x5c], 0 }
	__asm { L_006101a7: }
	__asm { mov eax, dword ptr [ebp - 0x9c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006101d4 }
	__asm { test al, 1 }
	__asm { jne L_006101d4 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_006101d4 }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_006101d4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0060f3f0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00610870
extern "C" __declspec(naked) void asm_00610870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f5c8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_0060f3f0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { mov edx, dword ptr [ebp + 0x1c] }
	__asm { mov ecx, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi], 0xe32ae8 }
	__asm { mov dword ptr [esi + 0x30], ebx }
	__asm { mov dword ptr [esi + 0x34], edi }
	__asm { mov dword ptr [esi + 0x38], edx }
	__asm { mov dword ptr [esi + 0x3c], ecx }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_006109ce }
	__asm { test ebx, ebx }
	__asm { je L_006108e9 }
	__asm { test edi, edi }
	__asm { je L_006108e9 }
	__asm { test edx, edx }
	__asm { jne L_00610922 }
	__asm { L_006108e9: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00610907 }
	__asm { push 0x3f }
	__asm { push 0xe32b10 }
	__asm { push 0xe32b54 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0061091c }
	__asm { L_00610907: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32b80 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0061091c: }
	__asm { mov ecx, dword ptr [ebp + 0x20] }
	__asm { mov edx, dword ptr [ebp + 0x1c] }
	__asm { L_00610922: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006109ce }
	__asm { test ecx, ecx }
	__asm { je L_00610951 }
	__asm { mov eax, edx }
	__asm { xor ecx, ecx }
	__asm { L_00610937: }
	__asm { test ebx, ebx }
	__asm { jne L_00610943 }
	__asm { test edi, edi }
	__asm { jne L_00610943 }
	__asm { test eax, eax }
	__asm { je L_0061094c }
	__asm { L_00610943: }
	__asm { inc ecx }
	__asm { shr ebx, 1 }
	__asm { shr edi, 1 }
	__asm { shr eax, 1 }
	__asm { jmp L_00610937 }
	__asm { L_0061094c: }
	__asm { cmp dword ptr [ebp + 0x20], ecx }
	__asm { jbe L_00610987 }
	__asm { L_00610951: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0061096f }
	__asm { push 0x40 }
	__asm { push 0xe32b10 }
	__asm { push 0xe32bf8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00610984 }
	__asm { L_0061096f: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32c40 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00610984: }
	__asm { mov edx, dword ptr [ebp + 0x1c] }
	__asm { L_00610987: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006109ce }
	__asm { cmp dword ptr [ebp + 0xc], 1 }
	__asm { je L_006109ce }
	__asm { cmp edx, 1 }
	__asm { je L_006109ce }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006109b9 }
	__asm { push 0x41 }
	__asm { push 0xe32b10 }
	__asm { push 0xe32cd4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006109ce }
	__asm { L_006109b9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32cf8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006109ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10268[];
extern "C" char g_00e104f4[];
extern "C" void fn_0043f040();
extern "C" void fn_0043f630();
extern "C" void fn_006b9800();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x006113e0
extern "C" __declspec(naked) void asm_006113e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f7b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [esi], 0xe3318c }
	__asm { lea eax, [esi + 0x24] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 9 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_0043f040 }
	__asm { push 0x4033d0 }
	__asm { push 4 }
	__asm { push 0xc }
	__asm { lea eax, [esi + 0x90] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00cf669e }
	__asm { mov ebx, dword ptr [esi + 0x8c] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test ebx, ebx }
	__asm { je L_00611480 }
	__asm { mov ebx, dword ptr [ebx + 4] }
	__asm { test ebx, ebx }
	__asm { je L_00611475 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00611475 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00611475 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00611475: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00611480: }
	__asm { mov ebx, dword ptr [esi + 0x88] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test ebx, ebx }
	__asm { je L_006114c7 }
	__asm { mov ebx, dword ptr [ebx + 4] }
	__asm { test ebx, ebx }
	__asm { je L_006114bc }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006114bc }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006114bc }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006114bc: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006114c7: }
	__asm { mov ebx, dword ptr [esi + 0x84] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test ebx, ebx }
	__asm { je L_0061150e }
	__asm { mov ebx, dword ptr [ebx + 4] }
	__asm { test ebx, ebx }
	__asm { je L_00611503 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00611503 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00611503 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00611503: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0061150e: }
	__asm { mov ebx, dword ptr [esi + 0x80] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test ebx, ebx }
	__asm { je L_00611555 }
	__asm { mov ebx, dword ptr [ebx + 4] }
	__asm { test ebx, ebx }
	__asm { je L_0061154a }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061154a }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0061154a }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061154a: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00611555: }
	__asm { mov ebx, dword ptr [esi + 0x7c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { test ebx, ebx }
	__asm { je L_00611599 }
	__asm { mov ebx, dword ptr [ebx + 4] }
	__asm { test ebx, ebx }
	__asm { je L_0061158e }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061158e }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0061158e }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061158e: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00611599: }
	__asm { cmp dword ptr [esi + 0x70], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { je L_006115cc }
	__asm { lea ecx, [esi + 0x70] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 0x70] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x70], 0 }
	__asm { mov dword ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { L_006115cc: }
	__asm { cmp dword ptr [esi + 0x64], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_006115ff }
	__asm { lea ecx, [esi + 0x64] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 0x64] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { L_006115ff: }
	__asm { mov esi, dword ptr [esi + 0x60] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0061162d }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061162d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0061162d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061162d: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xa }
	__asm { call fn_0043f630 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00611686 }
	__asm { add esi, 5 }
	__asm { je L_00611658 }
	__asm { add esi, -5 }
	__asm { jmp L_0061165a }
	__asm { L_00611658: }
	__asm { xor esi, esi }
	__asm { L_0061165a: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00611686 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00611686 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00611686: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00611770
extern "C" __declspec(naked) void asm_00611770()
{
	__asm { mov dword ptr [ecx + 0x5c], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x60] }
	__asm { mov dword ptr [ecx + 0x60], 0 }
	__asm { test esi, esi }
	__asm { je L_006117b0 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_006117af }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_006117af }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_006117af: }
	__asm { pop edi }
	__asm { L_006117b0: }
	__asm { pop esi }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00613780();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006117c0
extern "C" __declspec(naked) void asm_006117c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f7ca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, ecx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [eax + 0x1c] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax + 0x1a4] }
	__asm { push esi }
	__asm { mov ebx, dword ptr [eax + 0x28] }
	__asm { mov esi, dword ptr [eax + 0x24] }
	__asm { mov dword ptr [ebp - 0x24], esi }
	__asm { mov dword ptr [ebp - 0x20], ebx }
	__asm { test ebx, ebx }
	__asm { je L_00611807 }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00611807: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test al, al }
	__asm { je L_00611853 }
	__asm { test esi, esi }
	__asm { jne L_00611853 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00611842 }
	__asm { push 0x29b }
	__asm { push 0xe33268 }
	__asm { push 0xe334ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00611853 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00611842: }
	__asm { movzx eax, al }
	__asm { push 0xe334c0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00611853: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x1c], 1 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call dword ptr [eax + 0x30] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x1c], 2 }
	__asm { mov byte ptr [ebp - 0x18], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call dword ptr [eax + 0x38] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { lea eax, [ecx + 0x64] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00613780 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x18], 3 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x1c], 2 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call dword ptr [eax + 0x38] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push esi }
	__asm { lea eax, [ecx + 0x70] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00613780 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop edi }
	__asm { test ebx, ebx }
	__asm { je L_00611950 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00611950 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00611950 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00611950: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00611970
extern "C" __declspec(naked) void asm_00611970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { xorps xmm0, xmm0 }
	__asm { cvtsi2ss xmm2, dword ptr [eax + 0x17c] }
	__asm { cvtsi2ss xmm1, dword ptr [eax + 0x180] }
	__asm { comiss xmm0, xmm2 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { movss dword ptr [ebp - 4], xmm2 }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { lea ecx, [ebp - 4] }
	__asm { ja L_006119cd }
	__asm { lea ecx, [ebp - 8] }
	__asm { L_006119cd: }
	__asm { comiss xmm0, xmm1 }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax] }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { ja L_006119dc }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { L_006119dc: }
	__asm { comiss xmm2, xmm0 }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 4] }
	__asm { ja L_006119ec }
	__asm { lea ecx, [ebp - 8] }
	__asm { L_006119ec: }
	__asm { comiss xmm1, xmm0 }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { ja L_006119fc }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { L_006119fc: }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00618b10();
extern "C" void fn_006a04c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00611a30
extern "C" __declspec(naked) void asm_00611a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f800 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1a4] }
	__asm { call fn_006a04c0 }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edx, edx }
	__asm { je L_00611a7c }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { jmp L_00611a7e }
	__asm { L_00611a7c: }
	__asm { xor eax, eax }
	__asm { L_00611a7e: }
	__asm { cmp eax, 1 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { sete cl }
	__asm { push esi }
	__asm { push edi }
	__asm { mov byte ptr [eax], cl }
	__asm { test edx, edx }
	__asm { je L_00611afc }
	__asm { cmp dword ptr [edx + 8], 3 }
	__asm { jne L_00611afc }
	__asm { push 0x14 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00611adb }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx + 8], 0 }
	__asm { mov dword ptr [edx], 0xe33218 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_00611add }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jmp L_00611add }
	__asm { L_00611adb: }
	__asm { xor edx, edx }
	__asm { L_00611add: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebx + 4] }
	__asm { mov dword ptr [ebx], edx }
	__asm { mov dword ptr [eax], 0 }
	__asm { push eax }
	__asm { push edx }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00618b10 }
	__asm { add esp, 0xc }
	__asm { jmp L_00611b0c }
	__asm { L_00611afc: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { L_00611b0c: }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test esi, esi }
	__asm { je L_00611b44 }
	__asm { or edi, 0xffffffff }
	__asm { mov eax, edi }
	__asm { lea ecx, [esi + 4] }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00611b44 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00611b44 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00611b44: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0057dce0();
// FUNCTION: ROBLOXSTUDIO 0x00611b60
extern "C" __declspec(naked) void asm_00611b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00611b86 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { test eax, eax }
	__asm { mov edx, 0x12de598 }
	__asm { cmovne edx, eax }
	__asm { add ecx, 0x5c }
	__asm { push edx }
	__asm { call fn_0057dce0 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00611b86: }
	__asm { mov dword ptr [ecx + 0x5c], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x60] }
	__asm { mov dword ptr [ecx + 0x60], 0 }
	__asm { test esi, esi }
	__asm { je L_00611bc4 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00611bc3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00611bc3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00611bc3: }
	__asm { pop edi }
	__asm { L_00611bc4: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006aad30();
// FUNCTION: ROBLOXSTUDIO 0x00611c10
extern "C" __declspec(naked) void asm_00611c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { movss xmm0, dword ptr [edx] }
	__asm { push edi }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { movss xmm1, dword ptr [edi + 0x28] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm0, dword ptr [eax + 4] }
	__asm { movzx eax, byte ptr [edi + 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm0, dword ptr [edx + 4] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm1, dword ptr [ecx + 4] }
	__asm { subss xmm0, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea eax, [edi + 0x5c] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { mov ecx, dword ptr [ecx + 0x19c] }
	__asm { push eax }
	__asm { call fn_006aad30 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_006aaf80();
// FUNCTION: ROBLOXSTUDIO 0x00611cc0
extern "C" __declspec(naked) void asm_00611cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { movss xmm1, dword ptr [ecx + 0x28] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { fld dword ptr [eax] }
	__asm { mov ecx, dword ptr [ecx + 0x19c] }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm0, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x10 }
	__asm { subss xmm1, dword ptr [eax + 4] }
	__asm { movss dword ptr [esp + 0xc], xmm0 }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { movss dword ptr [esp + 4], xmm1 }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_006aaf80 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_006e07d0();
// FUNCTION: ROBLOXSTUDIO 0x00611d90
extern "C" __declspec(naked) void asm_00611d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f812 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebp + 0x28] }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [eax + ecx*8 + 0x1d4] }
	__asm { test eax, eax }
	__asm { jne L_00611de7 }
	__asm { call fn_006e07d0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { pop ebx }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
	__asm { L_00611de7: }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { test eax, eax }
	__asm { mov ecx, 0x12de598 }
	__asm { cmovne ecx, eax }
	__asm { push esi }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { test edx, edx }
	__asm { je L_00611e0b }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00611e0b: }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x3c] }
	__asm { mov edi, dword ptr [ebx + 0x5c] }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebx + 0x5c], esi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov esi, dword ptr [ebx + 0x60] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebx + 0x60], edx }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov ecx, dword ptr [ecx + eax*8 + 0x1d4] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ecx }
	__asm { lea edx, [ebp - 0x18] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebx + 0x5c], edi }
	__asm { mov edi, dword ptr [ebx + 0x60] }
	__asm { mov dword ptr [ebx + 0x60], esi }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { movss dword ptr [ebx], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [ebx + 4], xmm0 }
	__asm { test edi, edi }
	__asm { je L_00611eb2 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00611eb2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00611eb2 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00611eb2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" char g_00e33590[];
extern "C" char g_010380b8[];
extern "C" void fn_00613580();
// FUNCTION: ROBLOXSTUDIO 0x00611f00
extern "C" __declspec(naked) void asm_00611f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f824 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { movss xmm6, dword ptr [eax] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { addss xmm2, dword ptr [eax + 0x10] }
	__asm { movss xmm7, dword ptr [eax + 0x14] }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { movaps xmm3, xmm6 }
	__asm { addss xmm3, dword ptr [eax + 0xc] }
	__asm { mulss xmm2, xmm0 }
	__asm { addss xmm1, xmm7 }
	__asm { mov edx, ecx }
	__asm { mulss xmm3, xmm0 }
	__asm { lea ecx, [edx + 0x2c] }
	__asm { mulss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { mulss xmm0, xmm2 }
	__asm { movss dword ptr [ebp - 0x14], xmm6 }
	__asm { subss xmm7, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { movss xmm6, dword ptr [ebp + 8] }
	__asm { mulss xmm0, xmm3 }
	__asm { movss dword ptr [ebp - 0x1c], xmm7 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { mulss xmm0, xmm1 }
	__asm { addss xmm6, xmm0 }
	__asm { movaps xmm0, xmm6 }
	__asm { addss xmm0, dword ptr [ecx + 0x24] }
	__asm { movss xmm6, dword ptr [ecx + 0x10] }
	__asm { mulss xmm6, xmm2 }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0xc] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x14] }
	__asm { mulss xmm0, xmm1 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x1c] }
	__asm { mulss xmm0, xmm2 }
	__asm { addss xmm6, dword ptr [ecx + 0x28] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x18] }
	__asm { movss xmm2, dword ptr [ebp - 0x10] }
	__asm { mulss xmm0, xmm3 }
	__asm { movss xmm3, dword ptr [eax + 0x10] }
	__asm { subss xmm3, dword ptr [eax + 4] }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x20] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss xmm1, dword ptr [ebp + 8] }
	__asm { movss dword ptr [ebp - 0x30], xmm1 }
	__asm { addss xmm2, xmm0 }
	__asm { movss dword ptr [ebp - 0x2c], xmm6 }
	__asm { movss dword ptr [ebp - 0x20], xmm3 }
	__asm { addss xmm2, dword ptr [ecx + 0x2c] }
	__asm { movss dword ptr [ebp - 0x10], xmm2 }
	__asm { movss dword ptr [ebp - 0x28], xmm2 }
	__asm { movss xmm2, dword ptr [eax + 0xc] }
	__asm { subss xmm2, dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { comiss xmm3, xmm2 }
	__asm { movss dword ptr [ebp - 0x24], xmm2 }
	__asm { ja L_0061203f }
	__asm { lea eax, [ebp - 0x24] }
	__asm { L_0061203f: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm7, xmm0 }
	__asm { movss dword ptr [ebp + 8], xmm0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { ja L_00612053 }
	__asm { lea eax, [ebp + 8] }
	__asm { L_00612053: }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x40], xmm1 }
	__asm { movaps xmm1, xmm6 }
	__asm { movss dword ptr [ebp - 0x3c], xmm1 }
	__asm { movss xmm1, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [ebp - 0x38], xmm1 }
	__asm { movss xmm1, dword ptr [g_010380b8] }
	__asm { mulss xmm0, xmm1 }
	__asm { mov dword ptr [ebp - 0x44], 0xe32df8 }
	__asm { mulss xmm0, dword ptr [g_00e33590] }
	__asm { movss dword ptr [ebp - 0x34], xmm0 }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mulss xmm2, xmm1 }
	__asm { mulss xmm3, xmm1 }
	__asm { mulss xmm7, xmm1 }
	__asm { push 1 }
	__asm { push dword ptr [edx + 0x7c] }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { movss dword ptr [ebp - 0x24], xmm2 }
	__asm { movss dword ptr [ebp - 0x20], xmm3 }
	__asm { movss dword ptr [ebp - 0x1c], xmm7 }
	__asm { call fn_00613580 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00613580();
// FUNCTION: ROBLOXSTUDIO 0x006120e0
extern "C" __declspec(naked) void asm_006120e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f836 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm6, dword ptr [ecx + 0x30] }
	__asm { movss xmm2, dword ptr [eax + 4] }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { movss xmm3, dword ptr [eax + 0xc] }
	__asm { movss xmm5, dword ptr [ecx + 0x38] }
	__asm { lea edx, [ecx + 0x2c] }
	__asm { mulss xmm6, xmm4 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [edx] }
	__asm { movss xmm1, dword ptr [edx + 0x18] }
	__asm { mulss xmm5, xmm2 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [edx + 8] }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm1, xmm2 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [edx + 0x10] }
	__asm { mulss xmm0, xmm4 }
	__asm { mov dword ptr [ebp - 0x38], 0xe32df8 }
	__asm { addss xmm6, dword ptr [edx + 0x24] }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [edx + 0x14] }
	__asm { mulss xmm0, xmm3 }
	__asm { movss dword ptr [ebp - 0x24], xmm6 }
	__asm { movss dword ptr [ebp - 0x34], xmm6 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [edx + 0x1c] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm5, dword ptr [edx + 0x28] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [edx + 0x20] }
	__asm { mulss xmm0, xmm3 }
	__asm { movss dword ptr [ebp - 0x20], xmm5 }
	__asm { movss dword ptr [ebp - 0x30], xmm5 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x10] }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { addss xmm1, dword ptr [edx + 0x2c] }
	__asm { movss dword ptr [ebp - 0x1c], xmm1 }
	__asm { movss dword ptr [ebp - 0x2c], xmm1 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edx }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { push dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ecx + 0x84] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { call fn_00613580 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_005eb5a0();
extern "C" void fn_005ebd40();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00613970
extern "C" __declspec(naked) void asm_00613970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f8bc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { sar eax, 5 }
	__asm { push eax }
	__asm { push 0x20 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x38] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [ebp - 0x20] }
	__asm { sub eax, ecx }
	__asm { mov esi, dword ptr [edx] }
	__asm { and eax, 0xffffffe0 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push 0 }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [esi + 0x14] }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { sub eax, dword ptr [ebx] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push 0 }
	__asm { sar eax, 1 }
	__asm { push eax }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call dword ptr [edx + 0x3c] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { sub eax, ecx }
	__asm { mov esi, dword ptr [edx] }
	__asm { and eax, 0xfffffffe }
	__asm { push eax }
	__asm { push ecx }
	__asm { push 0 }
	__asm { mov ecx, edx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [esi + 0x14] }
	__asm { push 0x1c }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00613a61 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_005eb5a0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { sar edx, 5 }
	__asm { push edx }
	__asm { sar ecx, 1 }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_005ebd40 }
	__asm { mov ebx, eax }
	__asm { jmp L_00613a63 }
	__asm { L_00613a61: }
	__asm { xor ebx, ebx }
	__asm { L_00613a63: }
	__asm { or esi, 0xffffffff }
	__asm { test byte ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00613a9e }
	__asm { mov edi, dword ptr [ebp - 0x24] }
	__asm { test edi, edi }
	__asm { je L_00613a9e }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00613a9e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00613a9e }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00613a9e: }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00613acd }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00613acd }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00613acd }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00613acd: }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00613afe }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00613afe }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00613afe }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00613afe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00617f20();
// FUNCTION: ROBLOXSTUDIO 0x006171b0
extern "C" __declspec(naked) void asm_006171b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea ecx, [esi*2 + 2] }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { cmp ecx, eax }
	__asm { jge L_00617266 }
	__asm { L_006171d5: }
	__asm { mov eax, ecx }
	__asm { imul eax, eax, 0x4c }
	__asm { movss xmm0, dword ptr [eax + ebx + 8] }
	__asm { comiss xmm0, dword ptr [eax + ebx - 0x44] }
	__asm { jbe L_006171eb }
	__asm { dec ecx }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { L_006171eb: }
	__asm { imul ecx, ecx, 0x4c }
	__asm { imul esi, esi, 0x4c }
	__asm { mov eax, dword ptr [ecx + ebx] }
	__asm { mov dword ptr [esi + ebx], eax }
	__asm { mov eax, dword ptr [ecx + ebx + 4] }
	__asm { mov dword ptr [esi + ebx + 4], eax }
	__asm { lea eax, [ecx + ebx] }
	__asm { fld dword ptr [ecx + ebx + 8] }
	__asm { lea edx, [esi + ebx] }
	__asm { fstp dword ptr [esi + ebx + 8] }
	__asm { fld dword ptr [ecx + ebx + 0xc] }
	__asm { fstp dword ptr [esi + ebx + 0xc] }
	__asm { fld dword ptr [ecx + ebx + 0x10] }
	__asm { lea edi, [edx + 0x1c] }
	__asm { fstp dword ptr [esi + ebx + 0x10] }
	__asm { fld dword ptr [ecx + ebx + 0x14] }
	__asm { fstp dword ptr [esi + ebx + 0x14] }
	__asm { fld dword ptr [ecx + ebx + 0x18] }
	__asm { mov ecx, 9 }
	__asm { fstp dword ptr [esi + ebx + 0x18] }
	__asm { lea esi, [eax + 0x1c] }
	__asm { rep movsd }
	__asm { fld dword ptr [eax + 0x40] }
	__asm { fstp dword ptr [edx + 0x40] }
	__asm { fld dword ptr [eax + 0x44] }
	__asm { fstp dword ptr [edx + 0x44] }
	__asm { fld dword ptr [eax + 0x48] }
	__asm { fstp dword ptr [edx + 0x48] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ecx*2 + 2] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { cmp ecx, eax }
	__asm { jl L_006171d5 }
	__asm { L_00617266: }
	__asm { jne L_006172d0 }
	__asm { imul esi, esi, 0x4c }
	__asm { mov edx, eax }
	__asm { imul edx, edx, 0x4c }
	__asm { mov ecx, 9 }
	__asm { mov eax, dword ptr [edx + ebx - 0x4c] }
	__asm { mov dword ptr [esi + ebx], eax }
	__asm { mov eax, dword ptr [edx + ebx - 0x48] }
	__asm { mov dword ptr [esi + ebx + 4], eax }
	__asm { lea eax, [edx + ebx] }
	__asm { fld dword ptr [edx + ebx - 0x44] }
	__asm { fstp dword ptr [esi + ebx + 8] }
	__asm { fld dword ptr [edx + ebx - 0x40] }
	__asm { fstp dword ptr [esi + ebx + 0xc] }
	__asm { fld dword ptr [edx + ebx - 0x3c] }
	__asm { fstp dword ptr [esi + ebx + 0x10] }
	__asm { fld dword ptr [edx + ebx - 0x38] }
	__asm { fstp dword ptr [esi + ebx + 0x14] }
	__asm { fld dword ptr [edx + ebx - 0x34] }
	__asm { lea edx, [esi + ebx] }
	__asm { fstp dword ptr [esi + ebx + 0x18] }
	__asm { lea esi, [eax - 0x30] }
	__asm { lea edi, [edx + 0x1c] }
	__asm { rep movsd }
	__asm { fld dword ptr [eax - 0xc] }
	__asm { fstp dword ptr [edx + 0x40] }
	__asm { fld dword ptr [eax - 8] }
	__asm { fstp dword ptr [edx + 0x44] }
	__asm { fld dword ptr [eax - 4] }
	__asm { fstp dword ptr [edx + 0x48] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { dec esi }
	__asm { L_006172d0: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00617f20 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00618030();
extern "C" void fn_00618e60();
// FUNCTION: ROBLOXSTUDIO 0x006172f0
extern "C" __declspec(naked) void asm_006172f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { lea esi, [edi*2 + 2] }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { cmp esi, eax }
	__asm { jge L_006173ae }
	__asm { L_00617315: }
	__asm { mov ecx, esi }
	__asm { imul ecx, ecx, 0x4c }
	__asm { add ecx, ebx }
	__asm { lea eax, [ecx - 0x4c] }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { call fn_00618e60 }
	__asm { test al, al }
	__asm { je L_00617331 }
	__asm { dec esi }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { L_00617331: }
	__asm { imul edi, edi, 0x4c }
	__asm { mov ecx, esi }
	__asm { imul ecx, ecx, 0x4c }
	__asm { lea edx, [edi + ebx] }
	__asm { mov eax, dword ptr [ecx + ebx] }
	__asm { mov dword ptr [edi + ebx], eax }
	__asm { mov eax, dword ptr [ecx + ebx + 4] }
	__asm { mov dword ptr [edi + ebx + 4], eax }
	__asm { lea eax, [ecx + ebx] }
	__asm { fld dword ptr [ecx + ebx + 8] }
	__asm { fstp dword ptr [edi + ebx + 8] }
	__asm { fld dword ptr [ecx + ebx + 0xc] }
	__asm { fstp dword ptr [edi + ebx + 0xc] }
	__asm { lea esi, [eax + 0x1c] }
	__asm { fld dword ptr [ecx + ebx + 0x10] }
	__asm { fstp dword ptr [edi + ebx + 0x10] }
	__asm { fld dword ptr [ecx + ebx + 0x14] }
	__asm { fstp dword ptr [edi + ebx + 0x14] }
	__asm { fld dword ptr [ecx + ebx + 0x18] }
	__asm { mov ecx, 9 }
	__asm { fstp dword ptr [edi + ebx + 0x18] }
	__asm { lea edi, [edx + 0x1c] }
	__asm { rep movsd }
	__asm { fld dword ptr [eax + 0x40] }
	__asm { fstp dword ptr [edx + 0x40] }
	__asm { fld dword ptr [eax + 0x44] }
	__asm { fstp dword ptr [edx + 0x44] }
	__asm { fld dword ptr [eax + 0x48] }
	__asm { fstp dword ptr [edx + 0x48] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edi, esi }
	__asm { lea esi, [esi*2 + 2] }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { cmp esi, eax }
	__asm { jl L_00617315 }
	__asm { L_006173ae: }
	__asm { jne L_00617418 }
	__asm { imul edi, edi, 0x4c }
	__asm { mov edx, eax }
	__asm { imul edx, edx, 0x4c }
	__asm { mov ecx, 9 }
	__asm { mov eax, dword ptr [edx + ebx - 0x4c] }
	__asm { mov dword ptr [edi + ebx], eax }
	__asm { mov eax, dword ptr [edx + ebx - 0x48] }
	__asm { mov dword ptr [edi + ebx + 4], eax }
	__asm { lea eax, [edx + ebx] }
	__asm { fld dword ptr [edx + ebx - 0x44] }
	__asm { fstp dword ptr [edi + ebx + 8] }
	__asm { fld dword ptr [edx + ebx - 0x40] }
	__asm { fstp dword ptr [edi + ebx + 0xc] }
	__asm { lea esi, [eax - 0x30] }
	__asm { fld dword ptr [edx + ebx - 0x3c] }
	__asm { fstp dword ptr [edi + ebx + 0x10] }
	__asm { fld dword ptr [edx + ebx - 0x38] }
	__asm { fstp dword ptr [edi + ebx + 0x14] }
	__asm { fld dword ptr [edx + ebx - 0x34] }
	__asm { lea edx, [edi + ebx] }
	__asm { fstp dword ptr [edi + ebx + 0x18] }
	__asm { lea edi, [edx + 0x1c] }
	__asm { rep movsd }
	__asm { fld dword ptr [eax - 0xc] }
	__asm { fstp dword ptr [edx + 0x40] }
	__asm { fld dword ptr [eax - 8] }
	__asm { fstp dword ptr [edx + 0x44] }
	__asm { fld dword ptr [eax - 4] }
	__asm { fstp dword ptr [edx + 0x48] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { dec edi }
	__asm { L_00617418: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00618030 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00617470();
// FUNCTION: ROBLOXSTUDIO 0x0061754c
extern "C" __declspec(naked) void asm_0061754c()
{
	__asm { inc esp }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { movss dword ptr [edx + 0x48], xmm0 }
	__asm { jmp L_0061761c }
	__asm { add ebx, 0x34 }
	__asm { L_00617562: }
	__asm { sub ebx, 0x4c }
	__asm { mov ecx, 9 }
	__asm { comiss xmm0, dword ptr [ebx - 0x40] }
	__asm { jbe L_006175b9 }
	__asm { mov eax, dword ptr [ebx - 0x48] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebx - 0x44] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { fld dword ptr [ebx - 0x40] }
	__asm { fstp dword ptr [esi + 8] }
	__asm { lea eax, [esi + 0x1c] }
	__asm { fld dword ptr [ebx - 0x3c] }
	__asm { mov edi, eax }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { fld dword ptr [ebx - 0x38] }
	__asm { fstp dword ptr [esi + 0x10] }
	__asm { fld dword ptr [ebx - 0x34] }
	__asm { fstp dword ptr [esi + 0x14] }
	__asm { fld dword ptr [ebx - 0x30] }
	__asm { fstp dword ptr [esi + 0x18] }
	__asm { lea esi, [ebx - 0x2c] }
	__asm { rep movsd }
	__asm { fld dword ptr [ebx - 8] }
	__asm { fstp dword ptr [eax + 0x24] }
	__asm { fld dword ptr [ebx - 4] }
	__asm { fstp dword ptr [eax + 0x28] }
	__asm { fld dword ptr [ebx] }
	__asm { fstp dword ptr [eax + 0x2c] }
	__asm { lea esi, [ebx - 0x48] }
	__asm { jmp L_00617562 }
	__asm { L_006175b9: }
	__asm { mov eax, dword ptr [ebp - 0x54] }
	__asm { movss dword ptr [esi + 8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x48] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { movss dword ptr [esi + 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x44] }
	__asm { movss dword ptr [esi + 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x40] }
	__asm { movss dword ptr [esi + 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x3c] }
	__asm { movss dword ptr [esi + 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { lea eax, [esi + 0x1c] }
	__asm { lea esi, [ebp - 0x38] }
	__asm { mov edi, eax }
	__asm { rep movsd }
	__asm { movss dword ptr [eax + 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [eax + 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { movss dword ptr [eax + 0x2c], xmm0 }
	__asm { L_0061761c: }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { add edi, 0x4c }
	__asm { add ebx, 0x4c }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { jne fn_00617470 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00618b80();
// FUNCTION: ROBLOXSTUDIO 0x00617a30
extern "C" __declspec(naked) void asm_00617a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, 0x6bca1af3 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { sub ecx, esi }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push edi }
	__asm { cmp eax, 0x28 }
	__asm { jle L_00617baf }
	__asm { inc eax }
	__asm { cdq }
	__asm { and edx, 7 }
	__asm { lea edi, [edx + eax] }
	__asm { sar edi, 3 }
	__asm { mov eax, edi }
	__asm { imul edi, edi, 0x4c }
	__asm { movss xmm0, dword ptr [edi + esi + 8] }
	__asm { imul eax, eax, 0x98 }
	__asm { lea ebx, [edi + esi] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { add eax, esi }
	__asm { comiss xmm0, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { jbe L_00617a9a }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00618b80 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { L_00617a9a: }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { comiss xmm0, dword ptr [ebx + 8] }
	__asm { jbe L_00617ac4 }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00618b80 }
	__asm { movss xmm0, dword ptr [ebx + 8] }
	__asm { add esp, 8 }
	__asm { comiss xmm0, dword ptr [esi + 8] }
	__asm { jbe L_00617ac4 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00618b80 }
	__asm { add esp, 8 }
	__asm { L_00617ac4: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { lea eax, [edi + esi] }
	__asm { mov edi, esi }
	__asm { sub edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { comiss xmm0, dword ptr [edi + 8] }
	__asm { jbe L_00617aea }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00618b80 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { L_00617aea: }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { comiss xmm0, dword ptr [esi + 8] }
	__asm { jbe L_00617b14 }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00618b80 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { add esp, 8 }
	__asm { comiss xmm0, dword ptr [edi + 8] }
	__asm { jbe L_00617b14 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00618b80 }
	__asm { add esp, 8 }
	__asm { L_00617b14: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edi, eax }
	__asm { sub edi, dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { sub ecx, dword ptr [ebp - 8] }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { comiss xmm0, dword ptr [ecx + 8] }
	__asm { jbe L_00617b3c }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_00618b80 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { L_00617b3c: }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { comiss xmm0, dword ptr [edi + 8] }
	__asm { jbe L_00617b69 }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00618b80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { add esp, 8 }
	__asm { comiss xmm0, dword ptr [eax + 8] }
	__asm { jbe L_00617b69 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00618b80 }
	__asm { add esp, 8 }
	__asm { L_00617b69: }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { comiss xmm0, dword ptr [ebx + 8] }
	__asm { jbe L_00617b7e }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00618b80 }
	__asm { add esp, 8 }
	__asm { L_00617b7e: }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { comiss xmm0, dword ptr [esi + 8] }
	__asm { jbe L_00617bf1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00618b80 }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { add esp, 8 }
	__asm { comiss xmm0, dword ptr [ebx + 8] }
	__asm { jbe L_00617bf1 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00618b80 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00617baf: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { comiss xmm0, dword ptr [esi + 8] }
	__asm { jbe L_00617bc7 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00618b80 }
	__asm { add esp, 8 }
	__asm { L_00617bc7: }
	__asm { movss xmm0, dword ptr [ebx + 8] }
	__asm { comiss xmm0, dword ptr [edi + 8] }
	__asm { jbe L_00617bf1 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00618b80 }
	__asm { movss xmm0, dword ptr [edi + 8] }
	__asm { add esp, 8 }
	__asm { comiss xmm0, dword ptr [esi + 8] }
	__asm { jbe L_00617bf1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00618b80 }
	__asm { add esp, 8 }
	__asm { L_00617bf1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006171b0();
extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x00617d40
extern "C" __declspec(naked) void asm_00617d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x4c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { movss xmm0, dword ptr [esi - 0x44] }
	__asm { mov eax, dword ptr [esi - 0x4c] }
	__asm { movss dword ptr [ebp - 0x44], xmm0 }
	__asm { movss xmm0, dword ptr [esi - 0x40] }
	__asm { movss dword ptr [ebp - 0x40], xmm0 }
	__asm { movss xmm0, dword ptr [esi - 0x3c] }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { movss xmm0, dword ptr [esi - 0x38] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { mov eax, dword ptr [esi - 0x48] }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { movss xmm0, dword ptr [esi - 0x34] }
	__asm { lea ebx, [esi - 0x30] }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x48], eax }
	__asm { movss dword ptr [ebp - 0x34], xmm0 }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi - 0x4c], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi - 0x48], eax }
	__asm { fld dword ptr [edx + 8] }
	__asm { fstp dword ptr [esi - 0x44] }
	__asm { mov ecx, 9 }
	__asm { fld dword ptr [edx + 0xc] }
	__asm { mov edi, ebx }
	__asm { fstp dword ptr [esi - 0x40] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { fld dword ptr [edx + 0x10] }
	__asm { push eax }
	__asm { fstp dword ptr [esi - 0x3c] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { fld dword ptr [edx + 0x14] }
	__asm { fstp dword ptr [esi - 0x38] }
	__asm { fld dword ptr [edx + 0x18] }
	__asm { fstp dword ptr [esi - 0x34] }
	__asm { lea esi, [edx + 0x1c] }
	__asm { rep movsd }
	__asm { fld dword ptr [edx + 0x40] }
	__asm { fstp dword ptr [ebx + 0x24] }
	__asm { fld dword ptr [edx + 0x44] }
	__asm { fstp dword ptr [ebx + 0x28] }
	__asm { fld dword ptr [edx + 0x48] }
	__asm { fstp dword ptr [ebx + 0x2c] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sub ecx, edx }
	__asm { sub ecx, 0x4c }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006171b0 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006172f0();
extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x00617e30
extern "C" __declspec(naked) void asm_00617e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x4c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { movss xmm0, dword ptr [esi - 0x44] }
	__asm { mov eax, dword ptr [esi - 0x4c] }
	__asm { movss dword ptr [ebp - 0x44], xmm0 }
	__asm { movss xmm0, dword ptr [esi - 0x40] }
	__asm { movss dword ptr [ebp - 0x40], xmm0 }
	__asm { movss xmm0, dword ptr [esi - 0x3c] }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { movss xmm0, dword ptr [esi - 0x38] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { mov eax, dword ptr [esi - 0x48] }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { movss xmm0, dword ptr [esi - 0x34] }
	__asm { lea ebx, [esi - 0x30] }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x48], eax }
	__asm { movss dword ptr [ebp - 0x34], xmm0 }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [esi - 0x4c], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi - 0x48], eax }
	__asm { fld dword ptr [edx + 8] }
	__asm { fstp dword ptr [esi - 0x44] }
	__asm { mov ecx, 9 }
	__asm { fld dword ptr [edx + 0xc] }
	__asm { mov edi, ebx }
	__asm { fstp dword ptr [esi - 0x40] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { fld dword ptr [edx + 0x10] }
	__asm { push eax }
	__asm { fstp dword ptr [esi - 0x3c] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { fld dword ptr [edx + 0x14] }
	__asm { fstp dword ptr [esi - 0x38] }
	__asm { fld dword ptr [edx + 0x18] }
	__asm { fstp dword ptr [esi - 0x34] }
	__asm { lea esi, [edx + 0x1c] }
	__asm { rep movsd }
	__asm { fld dword ptr [edx + 0x40] }
	__asm { fstp dword ptr [ebx + 0x24] }
	__asm { fld dword ptr [edx + 0x44] }
	__asm { fstp dword ptr [ebx + 0x28] }
	__asm { fld dword ptr [edx + 0x48] }
	__asm { fstp dword ptr [ebx + 0x2c] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { sub ecx, edx }
	__asm { sub ecx, 0x4c }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push eax }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006172f0 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00617f20
extern "C" __declspec(naked) void asm_00617f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea eax, [esi - 1] }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp dword ptr [ebp + 0x10], esi }
	__asm { jge L_00617fc9 }
	__asm { L_00617f40: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { imul ecx, ecx, 0x4c }
	__asm { movss xmm0, dword ptr [ecx + ebx + 8] }
	__asm { comiss xmm0, dword ptr [eax + 8] }
	__asm { jbe L_00617fc9 }
	__asm { mov eax, dword ptr [ecx + ebx] }
	__asm { imul esi, esi, 0x4c }
	__asm { mov dword ptr [esi + ebx], eax }
	__asm { mov eax, dword ptr [ecx + ebx + 4] }
	__asm { mov dword ptr [esi + ebx + 4], eax }
	__asm { lea edx, [esi + ebx] }
	__asm { fld dword ptr [ecx + ebx + 8] }
	__asm { lea eax, [ecx + ebx] }
	__asm { fstp dword ptr [esi + ebx + 8] }
	__asm { lea edi, [edx + 0x1c] }
	__asm { fld dword ptr [ecx + ebx + 0xc] }
	__asm { fstp dword ptr [esi + ebx + 0xc] }
	__asm { fld dword ptr [ecx + ebx + 0x10] }
	__asm { fstp dword ptr [esi + ebx + 0x10] }
	__asm { fld dword ptr [ecx + ebx + 0x14] }
	__asm { fstp dword ptr [esi + ebx + 0x14] }
	__asm { fld dword ptr [ecx + ebx + 0x18] }
	__asm { mov ecx, 9 }
	__asm { fstp dword ptr [esi + ebx + 0x18] }
	__asm { lea esi, [eax + 0x1c] }
	__asm { rep movsd }
	__asm { fld dword ptr [eax + 0x40] }
	__asm { fstp dword ptr [edx + 0x40] }
	__asm { fld dword ptr [eax + 0x44] }
	__asm { fstp dword ptr [edx + 0x44] }
	__asm { fld dword ptr [eax + 0x48] }
	__asm { fstp dword ptr [edx + 0x48] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov esi, eax }
	__asm { dec eax }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp dword ptr [ebp + 0x10], esi }
	__asm { jl L_00617f40 }
	__asm { L_00617fc9: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { imul esi, esi, 0x4c }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + ebx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + ebx + 4], eax }
	__asm { lea edx, [esi + ebx] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { lea eax, [ecx + 0x1c] }
	__asm { fstp dword ptr [esi + ebx + 8] }
	__asm { lea edi, [edx + 0x1c] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [esi + ebx + 0xc] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp dword ptr [esi + ebx + 0x10] }
	__asm { fld dword ptr [ecx + 0x14] }
	__asm { fstp dword ptr [esi + ebx + 0x14] }
	__asm { fld dword ptr [ecx + 0x18] }
	__asm { mov ecx, 9 }
	__asm { fstp dword ptr [esi + ebx + 0x18] }
	__asm { mov esi, eax }
	__asm { rep movsd }
	__asm { fld dword ptr [eax + 0x24] }
	__asm { fstp dword ptr [edx + 0x40] }
	__asm { fld dword ptr [eax + 0x28] }
	__asm { fstp dword ptr [edx + 0x44] }
	__asm { fld dword ptr [eax + 0x2c] }
	__asm { fstp dword ptr [edx + 0x48] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00617440();
extern "C" void fn_00617850();
extern "C" void fn_006183b0();
extern "C" void fn_00618470();
// FUNCTION: ROBLOXSTUDIO 0x00618130
extern "C" __declspec(naked) void asm_00618130()
{
	__asm { L_00618130: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, 0x6bca1af3 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0x20 }
	__asm { jle L_0061820b }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00618160: }
	__asm { test esi, esi }
	__asm { jle L_00618226 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 8] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00618470 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { sar ecx, 1 }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { add ecx, eax }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov ecx, edi }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sar edx, 5 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { add esp, 0x10 }
	__asm { shr eax, 0x1f }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { jge L_006181de }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { call L_00618130 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { jmp L_006181ea }
	__asm { L_006181de: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call L_00618130 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_006181ea: }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0x20 }
	__asm { jg L_00618160 }
	__asm { L_0061820b: }
	__asm { cmp eax, 1 }
	__asm { jle L_0061821f }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00617440 }
	__asm { add esp, 0x10 }
	__asm { L_0061821f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00618226: }
	__asm { cmp eax, 0x20 }
	__asm { jle L_0061820b }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jle L_00618256 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00617850 }
	__asm { add esp, 0x14 }
	__asm { L_00618256: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_006183b0 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00617640();
extern "C" void fn_00617910();
extern "C" void fn_00618410();
extern "C" void fn_00618630();
// FUNCTION: ROBLOXSTUDIO 0x00618270
extern "C" __declspec(naked) void asm_00618270()
{
	__asm { L_00618270: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, 0x6bca1af3 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0x20 }
	__asm { jle L_0061834b }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_006182a0: }
	__asm { test esi, esi }
	__asm { jle L_00618366 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 8] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00618630 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { sar ecx, 1 }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { add ecx, eax }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov ecx, edi }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sar edx, 5 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { add esp, 0x10 }
	__asm { shr eax, 0x1f }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { jge L_0061831e }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { call L_00618270 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { jmp L_0061832a }
	__asm { L_0061831e: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call L_00618270 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_0061832a: }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0x20 }
	__asm { jg L_006182a0 }
	__asm { L_0061834b: }
	__asm { cmp eax, 1 }
	__asm { jle L_0061835f }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00617640 }
	__asm { add esp, 0x10 }
	__asm { L_0061835f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00618366: }
	__asm { cmp eax, 0x20 }
	__asm { jle L_0061834b }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jle L_00618396 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00617910 }
	__asm { add esp, 0x14 }
	__asm { L_00618396: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00618410 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00618ac0
extern "C" __declspec(naked) void asm_00618ac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00618b05 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00618afb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00618afa }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00618afa }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00618afa: }
	__asm { pop ebx }
	__asm { L_00618afb: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00618b05: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00617120();
extern "C" void fn_00b9e010();
// FUNCTION: ROBLOXSTUDIO 0x00618b10
extern "C" __declspec(naked) void asm_00618b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00617120 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [edx] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [eax], esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00618b5b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00618b5a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00618b5a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00618b5a: }
	__asm { pop ebx }
	__asm { L_00618b5b: }
	__asm { test edi, edi }
	__asm { je L_00618b6f }
	__asm { lea ecx, [edi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00618b6f }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b9e010 }
	__asm { L_00618b6f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x00618b80
extern "C" __declspec(naked) void asm_00618b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x4c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { movss xmm0, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { movss dword ptr [ebp - 0x44], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0xc] }
	__asm { movss dword ptr [ebp - 0x40], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x10] }
	__asm { movss dword ptr [ebp - 0x3c], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 0x4c], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { movss dword ptr [ebp - 0x38], xmm0 }
	__asm { movss xmm0, dword ptr [esi + 0x18] }
	__asm { lea ebx, [esi + 0x1c] }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x48], eax }
	__asm { movss dword ptr [ebp - 0x34], xmm0 }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { movss xmm0, dword ptr [ebp - 0x44] }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { lea edx, [ecx + 0x1c] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { mov edi, ebx }
	__asm { fstp dword ptr [esi + 0x10] }
	__asm { fld dword ptr [ecx + 0x14] }
	__asm { fstp dword ptr [esi + 0x14] }
	__asm { fld dword ptr [ecx + 0x18] }
	__asm { mov ecx, 9 }
	__asm { fstp dword ptr [esi + 0x18] }
	__asm { mov esi, edx }
	__asm { rep movsd }
	__asm { fld dword ptr [edx + 0x24] }
	__asm { fstp dword ptr [ebx + 0x24] }
	__asm { fld dword ptr [edx + 0x28] }
	__asm { fstp dword ptr [ebx + 0x28] }
	__asm { fld dword ptr [edx + 0x2c] }
	__asm { fstp dword ptr [ebx + 0x2c] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, 9 }
	__asm { movss dword ptr [esi + 8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x40] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x48] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { movss dword ptr [esi + 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x3c] }
	__asm { movss dword ptr [esi + 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x38] }
	__asm { movss dword ptr [esi + 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x34] }
	__asm { movss dword ptr [esi + 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { lea esi, [ebp - 0x30] }
	__asm { mov edi, edx }
	__asm { rep movsd }
	__asm { movss dword ptr [edx + 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { movss dword ptr [edx + 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { pop edi }
	__asm { movss dword ptr [edx + 0x2c], xmm0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00619440
extern "C" __declspec(naked) void asm_00619440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss xmm1, dword ptr [ecx + 4] }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm4, dword ptr [eax + 4] }
	__asm { movss xmm3, dword ptr [eax + 8] }
	__asm { mulss xmm1, xmm4 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [ecx] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x10] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, dword ptr [ecx + 0x24] }
	__asm { movss dword ptr [eax], xmm1 }
	__asm { movss xmm1, dword ptr [ecx + 0xc] }
	__asm { mulss xmm1, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x14] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x1c] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, dword ptr [ecx + 0x28] }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss xmm1, dword ptr [ecx + 0x18] }
	__asm { mulss xmm1, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x20] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { addss xmm1, dword ptr [ecx + 0x2c] }
	__asm { movss dword ptr [eax + 8], xmm1 }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00619680
extern "C" __declspec(naked) void asm_00619680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { movss xmm4, dword ptr [ebp + 0xc] }
	__asm { movss xmm2, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movaps xmm3, xmm4 }
	__asm { addss xmm3, dword ptr [ebp + 0x14] }
	__asm { movaps xmm1, xmm2 }
	__asm { addss xmm1, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { comiss xmm4, xmm3 }
	__asm { movss dword ptr [ebp - 4], xmm4 }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { movss dword ptr [ebp + 0xc], xmm3 }
	__asm { movss dword ptr [ebp + 0x10], xmm1 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { ja L_006196dd }
	__asm { lea ecx, [ebp - 4] }
	__asm { L_006196dd: }
	__asm { comiss xmm2, xmm1 }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { ja L_006196ec }
	__asm { lea ecx, [ebp - 8] }
	__asm { L_006196ec: }
	__asm { comiss xmm3, xmm4 }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { ja L_006196fc }
	__asm { lea ecx, [ebp - 4] }
	__asm { L_006196fc: }
	__asm { comiss xmm1, xmm2 }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { ja L_0061970c }
	__asm { lea ecx, [ebp - 8] }
	__asm { L_0061970c: }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00619720
extern "C" __declspec(naked) void asm_00619720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { movss xmm1, dword ptr [ebp + 0x14] }
	__asm { comiss xmm0, xmm1 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { ja L_00619756 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { L_00619756: }
	__asm { fld dword ptr [ecx] }
	__asm { movss xmm2, dword ptr [ebp + 0x10] }
	__asm { movss xmm3, dword ptr [ebp + 0x18] }
	__asm { fstp dword ptr [eax] }
	__asm { comiss xmm2, xmm3 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { ja L_0061976f }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { L_0061976f: }
	__asm { comiss xmm1, xmm0 }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { ja L_0061977f }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { L_0061977f: }
	__asm { comiss xmm3, xmm2 }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { ja L_0061978f }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { L_0061978f: }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010385f0[];
extern "C" void fn_00619bb0();
extern "C" void fn_006dec80();
// FUNCTION: ROBLOXSTUDIO 0x006197a0
extern "C" __declspec(naked) void asm_006197a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f9b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe336a0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { call fn_00619bb0 }
	__asm { mov dword ptr [edi + 0x30], 0xffffffff }
	__asm { mov dword ptr [edi + 0x34], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x38], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], 0xe336c8 }
	__asm { mov dword ptr [edi + 0x3c], eax }
	__asm { mov dword ptr [edi + 0x40], 1 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { call fn_006dec80 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x48], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0x4c], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0x50], eax }
	__asm { call fn_006dec80 }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [g_010385f0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xorps xmm3, xmm1 }
	__asm { xorps xmm2, xmm1 }
	__asm { xorps xmm0, xmm1 }
	__asm { movss dword ptr [edi + 0x54], xmm0 }
	__asm { movss dword ptr [edi + 0x58], xmm3 }
	__asm { movss dword ptr [edi + 0x5c], xmm2 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00693380();
extern "C" void fn_00693510();
// FUNCTION: ROBLOXSTUDIO 0x00619900
extern "C" __declspec(naked) void asm_00619900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx + 0x48] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 0x4c] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 0x50] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [ecx + 0x54] }
	__asm { fld dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [ecx + 0x58] }
	__asm { fld dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [ecx + 0x5c] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm0, dword ptr [eax + 0xc] }
	__asm { ja L_0061995e }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { comiss xmm0, dword ptr [eax + 0x10] }
	__asm { ja L_0061995e }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { comiss xmm0, dword ptr [eax + 0x14] }
	__asm { ja L_0061995e }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { mov ecx, dword ptr [eax + 0x1ac] }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { pop ebp }
	__asm { jmp fn_00693380 }
	__asm { L_0061995e: }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { mov ecx, dword ptr [eax + 0x1ac] }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { pop ebp }
	__asm { jmp fn_00693510 }
}

extern "C" char g_010381e8[];
extern "C" char g_012dbec8[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004038a0();
extern "C" void fn_005eb5a0();
extern "C" void fn_005ebe10();
extern "C" void fn_0061aaa0();
extern "C" void fn_0061ac60();
extern "C" void fn_0061bab0();
extern "C" void fn_0061c420();
extern "C" void fn_0061e0e0();
extern "C" void fn_0061e370();
extern "C" void fn_006576b0();
extern "C" void fn_006a04c0();
extern "C" void fn_006b9740();
extern "C" void fn_006da0e0();
extern "C" void fn_006e34d0();
extern "C" void fn_006e3700();
extern "C" void fn_006e6a50();
extern "C" void fn_006e6b80();
extern "C" void fn_007cb440();
extern "C" void fn_00826b00();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00619e60
extern "C" __declspec(naked) void asm_00619e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fa7d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xd4 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [ebp - 0x3c], esi }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006da0e0 }
	__asm { lea ecx, [esi + 0x74] }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { call fn_006e6a50 }
	__asm { mov dword ptr [esi + 0x118], 0 }
	__asm { mov dword ptr [esi + 0x11c], 0 }
	__asm { mov dword ptr [esi + 0x120], 0 }
	__asm { mov dword ptr [esi + 0x148], 0 }
	__asm { mov dword ptr [esi + 0x144], 0 }
	__asm { mov dword ptr [esi + 0x140], 0 }
	__asm { mov dword ptr [esi + 0x13c], 0 }
	__asm { mov dword ptr [esi + 0x158], 0 }
	__asm { mov dword ptr [esi + 0x154], 0 }
	__asm { mov dword ptr [esi + 0x150], 0 }
	__asm { mov dword ptr [esi + 0x14c], 0 }
	__asm { mov dword ptr [esi + 0x168], 0 }
	__asm { mov dword ptr [esi + 0x164], 0 }
	__asm { mov dword ptr [esi + 0x160], 0 }
	__asm { mov dword ptr [esi + 0x15c], 0 }
	__asm { mov dword ptr [esi + 0x194], 0 }
	__asm { mov dword ptr [esi + 0x178], 0 }
	__asm { mov dword ptr [esi + 0x174], 0 }
	__asm { mov dword ptr [esi + 0x170], 0 }
	__asm { mov dword ptr [esi + 0x16c], 0 }
	__asm { mov dword ptr [esi + 0x198], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x1b4], 0 }
	__asm { mov edi, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x1b0], 0 }
	__asm { mov dword ptr [esi + 0x1ac], 0 }
	__asm { mov dword ptr [esi + 0x1a8], 0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test cl, cl }
	__asm { je L_0061a042 }
	__asm { test edi, edi }
	__asm { jne L_0061a042 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0061a02e }
	__asm { push 0x9e }
	__asm { push 0xe33748 }
	__asm { push 0xe3378c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0061a03f }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0061a02e: }
	__asm { movzx eax, cl }
	__asm { push 0xe33790 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0061a03f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_0061a042: }
	__asm { mov ecx, dword ptr [eax + 0x1b4] }
	__asm { push eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { call fn_0061bab0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { push 0 }
	__asm { lea eax, [edx + 0xc] }
	__asm { push eax }
	__asm { lea eax, [edx + 4] }
	__asm { push eax }
	__asm { lea eax, [edx + 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_005eb5a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov edi, dword ptr [esi + 8] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { test edi, edi }
	__asm { je L_0061a0b5 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061a0b5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0061a0b5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061a0b5: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edi, edi }
	__asm { je L_0061a0e4 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061a0e4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0061a0e4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061a0e4: }
	__asm { push 0x1c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test eax, eax }
	__asm { je L_0061a110 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [esi + 4] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_005ebe10 }
	__asm { jmp L_0061a112 }
	__asm { L_0061a110: }
	__asm { xor eax, eax }
	__asm { L_0061a112: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_0061c420 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [esi + 0xc], edx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { je L_0061a15f }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061a15f }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0061a15f }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061a15f: }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { sub ecx, dword ptr [esi + 0x1c] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0x3c }
	__asm { jae L_0061a187 }
	__asm { push 0x3c }
	__asm { lea ecx, [esi + 0x1c] }
	__asm { call fn_0061e370 }
	__asm { L_0061a187: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xe0] }
	__asm { mov dword ptr [esi + 0x68], 0 }
	__asm { mov dword ptr [esi + 0x6c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0x3f000000 }
	__asm { mov dword ptr [ebp - 0x14], 0x3f000000 }
	__asm { mov dword ptr [ebp - 0x10], 0x3f000000 }
	__asm { mov dword ptr [ebp - 0x28], 0xbf000000 }
	__asm { mov dword ptr [ebp - 0x24], 0xbf000000 }
	__asm { mov dword ptr [ebp - 0x20], 0xbf000000 }
	__asm { call fn_006e6b80 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x74] }
	__asm { call fn_0061e0e0 }
	__asm { fld dword ptr [g_010381e8] }
	__asm { mov dword ptr [esi + 0x70], 0x41200000 }
	__asm { mov dword ptr [esi + 0x118], 0 }
	__asm { mov dword ptr [esi + 0x11c], 0 }
	__asm { mov dword ptr [esi + 0x120], 0 }
	__asm { push ecx }
	__asm { mov dword ptr [esi + 0x124], 0 }
	__asm { mov dword ptr [esi + 0x128], 0x40000000 }
	__asm { fstp dword ptr [esp] }
	__asm { mov dword ptr [esi + 0x130], 0x3fc90c10 }
	__asm { mov dword ptr [esi + 0x12c], 0x3e4ccccd }
	__asm { mov dword ptr [esi + 0x134], 0x3f86080b }
	__asm { mov dword ptr [esi + 0x138], 0 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [esi + 0x13c], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x140], 0x3f800000 }
	__asm { mov dword ptr [esi + 0x144], 0 }
	__asm { mov dword ptr [esi + 0x148], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x2c], 0x432e0000 }
	__asm { mov dword ptr [ebp - 0x28], 0x43130000 }
	__asm { mov dword ptr [ebp - 0x24], 0x41800000 }
	__asm { mov dword ptr [ebp - 0x20], 0x437f0000 }
	__asm { call fn_006e3700 }
	__asm { fld dword ptr [eax] }
	__asm { push 0 }
	__asm { fstp dword ptr [esi + 0x15c] }
	__asm { push 0 }
	__asm { fld dword ptr [eax + 4] }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esi + 0x160] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esi + 0x164] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [esi + 0x168] }
	__asm { mov dword ptr [esi + 0x17c], 0x40400000 }
	__asm { mov dword ptr [esi + 0x180], 0x3e99999a }
	__asm { mov dword ptr [esi + 0x184], 0x3e99999a }
	__asm { mov dword ptr [esi + 0x188], 0x3e99999a }
	__asm { mov dword ptr [esi + 0x18c], 0 }
	__asm { mov dword ptr [esi + 0x190], 0 }
	__asm { mov dword ptr [esi + 0x19c], 0 }
	__asm { mov dword ptr [esi + 0x1a0], 0 }
	__asm { call fn_0061aaa0 }
	__asm { push 0x1d }
	__asm { push 0xe337e8 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 0x24], 0xf }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x38], 0 }
	__asm { call fn_004038a0 }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_007cb440 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { call fn_00826b00 }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { push 4 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x1a4] }
	__asm { call fn_006a04c0 }
	__asm { mov ecx, esi }
	__asm { call fn_0061ac60 }
	__asm { cmp dword ptr [ebp - 0x24], 0x10 }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { jb L_0061a382 }
	__asm { push dword ptr [ebp - 0x38] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0061a382: }
	__asm { call fn_006e34d0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm3, dword ptr [eax + 0xc] }
	__asm { lea eax, [esi + 0x1a8] }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss dword ptr [eax + 8], xmm2 }
	__asm { movss dword ptr [eax + 0xc], xmm3 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0061a3c5 }
	__asm { push eax }
	__asm { push 0xe33958 }
	__asm { call fn_006576b0 }
	__asm { L_0061a3c5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { inc dword ptr [g_012dbec8] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" char g_012dbec8[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0061a3e0
extern "C" __declspec(naked) void asm_0061a3e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fab3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov esi, dword ptr [ebx + 0x198] }
	__asm { dec dword ptr [g_012dbec8] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_0061a43f }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061a43f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0061a43f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061a43f: }
	__asm { cmp dword ptr [ebx + 0x1c], 0 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { je L_0061a472 }
	__asm { lea ecx, [ebx + 0x1c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebx + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebx + 0x1c], 0 }
	__asm { mov dword ptr [ebx + 0x20], 0 }
	__asm { mov dword ptr [ebx + 0x24], 0 }
	__asm { L_0061a472: }
	__asm { mov esi, dword ptr [ebx + 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0061a4a1 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061a4a1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0061a4a1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061a4a1: }
	__asm { mov esi, dword ptr [ebx + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0061a4d0 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061a4d0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0061a4d0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061a4d0: }
	__asm { mov esi, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0061a501 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061a501 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0061a501 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061a501: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0061c550();
extern "C" void fn_006572f0();
extern "C" void fn_006573f0();
extern "C" void fn_00657410();
extern "C" void fn_00657430();
extern "C" void fn_006576b0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0061aaa0
extern "C" __declspec(naked) void asm_0061aaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0fada }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push edi }
	__asm { cmp dword ptr [eax + ecx*8 + 0x1c], 0 }
	__asm { je L_0061ac44 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov edi, dword ptr [esi + 0x18] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { test edi, edi }
	__asm { je L_0061ab0c }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061ab0c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0061ab0c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061ab0c: }
	__asm { push 0x40 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0061ab3b }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { lea ecx, [ecx + edx*8] }
	__asm { add ecx, 0x1c }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_006572f0 }
	__asm { jmp L_0061ab3d }
	__asm { L_0061ab3b: }
	__asm { xor eax, eax }
	__asm { L_0061ab3d: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0061c550 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [esi + 0x14], edx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { je L_0061ab8d }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061ab8d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0061ab8d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061ab8d: }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { test edx, edx }
	__asm { je L_0061ac44 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x30], 2 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { sub eax, ecx }
	__asm { je L_0061abd3 }
	__asm { dec eax }
	__asm { je L_0061abcc }
	__asm { dec eax }
	__asm { jne L_0061abd8 }
	__asm { lea ecx, [eax + 5] }
	__asm { jmp L_0061abd8 }
	__asm { L_0061abcc: }
	__asm { mov ecx, 1 }
	__asm { jmp L_0061abd8 }
	__asm { L_0061abd3: }
	__asm { mov ecx, 3 }
	__asm { L_0061abd8: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x24], ecx }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { call fn_006573f0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { call fn_00657410 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00657430 }
	__asm { movss xmm2, dword ptr [esi + 0x1ac] }
	__asm { movss xmm1, dword ptr [esi + 0x1b0] }
	__asm { movss xmm0, dword ptr [esi + 0x1b4] }
	__asm { lea eax, [esi + 0x1a8] }
	__asm { movss dword ptr [eax + 4], xmm2 }
	__asm { movss dword ptr [eax + 8], xmm1 }
	__asm { movss dword ptr [eax + 0xc], xmm0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_0061ac44 }
	__asm { push eax }
	__asm { push 0xe33958 }
	__asm { call fn_006576b0 }
	__asm { L_0061ac44: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10260[];
extern "C" char g_00e10268[];
extern "C" void fn_0061d240();
extern "C" void fn_00658000();
extern "C" void fn_00658760();
extern "C" void fn_00bc02c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0061c8a0
extern "C" __declspec(naked) void asm_0061c8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fb80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { sub edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { sar edx, 3 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { add edi, edx }
	__asm { je L_0061ca49 }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_0061ca08 }
	__asm { sub ebx, dword ptr [esi] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ebx }
	__asm { sar edx, 3 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov eax, 0xccccccc }
	__asm { sub eax, ecx }
	__asm { cmp eax, edi }
	__asm { jae L_0061c92a }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0061c92a: }
	__asm { lea eax, [ecx + edi] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00658000 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { call fn_00658760 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ebx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bc02c0 }
	__asm { add esp, 0x18 }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00bc02c0 }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [ebp + 0x13] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00bc02c0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { sub ecx, dword ptr [esi] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add edi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0061c9c2 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0061c9c2: }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi], ebx }
	__asm { lea eax, [eax + eax*4] }
	__asm { lea eax, [ebx + eax*4] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { lea eax, [edi + edi*4] }
	__asm { lea eax, [ebx + eax*4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0061ca08: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00bc02c0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edi, [edi + edi*4] }
	__asm { shl edi, 2 }
	__asm { add esp, 0x14 }
	__asm { lea edx, [edi + ecx] }
	__asm { cmp eax, ecx }
	__asm { je L_0061ca46 }
	__asm { cmp ecx, edx }
	__asm { je L_0061ca46 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push edx }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_0061d240 }
	__asm { add esp, 0x14 }
	__asm { L_0061ca46: }
	__asm { add dword ptr [esi + 4], edi }
	__asm { L_0061ca49: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0061d070();
// FUNCTION: ROBLOXSTUDIO 0x0061ca60
extern "C" __declspec(naked) void asm_0061ca60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x38 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp ebx, eax }
	__asm { je L_0061cc30 }
	__asm { add ebx, 0x38 }
	__asm { cmp ebx, eax }
	__asm { je L_0061cc30 }
	__asm { push esi }
	__asm { push edi }
	__asm { L_0061ca82: }
	__asm { mov ecx, 0xe }
	__asm { mov esi, ebx }
	__asm { lea edi, [ebp - 0x38] }
	__asm { rep movsd }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ebp - 0x38] }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { comiss xmm0, xmm1 }
	__asm { mov edx, ebx }
	__asm { jbe L_0061cb3e }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebx + 0x38] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_0061d070 }
	__asm { movss xmm0, dword ptr [ebp - 0x38] }
	__asm { movss dword ptr [esi], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x34] }
	__asm { movss dword ptr [esi + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x30] }
	__asm { movss dword ptr [esi + 8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x2c] }
	__asm { movss dword ptr [esi + 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x28] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { movss dword ptr [esi + 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x24] }
	__asm { movss dword ptr [esi + 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { movss dword ptr [esi + 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [esi + 0x1c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [esi + 0x20], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [esi + 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [esi + 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 0x10 }
	__asm { movss dword ptr [esi + 0x2c], xmm0 }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { jmp L_0061cc22 }
	__asm { L_0061cb3e: }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { L_0061cb41: }
	__asm { movss xmm0, dword ptr [ecx - 0x44] }
	__asm { sub ecx, 0x38 }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_0061cba4 }
	__asm { movss dword ptr [edx], xmm0 }
	__asm { fld dword ptr [ecx - 8] }
	__asm { fstp dword ptr [edx + 4] }
	__asm { fld dword ptr [ecx - 4] }
	__asm { fstp dword ptr [edx + 8] }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [edx + 0xc] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp dword ptr [edx + 0x10] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [edx + 0x14] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [edx + 0x18] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp dword ptr [edx + 0x1c] }
	__asm { fld dword ptr [ecx + 0x14] }
	__asm { fstp dword ptr [edx + 0x20] }
	__asm { fld dword ptr [ecx + 0x18] }
	__asm { fstp dword ptr [edx + 0x24] }
	__asm { fld dword ptr [ecx + 0x1c] }
	__asm { fstp dword ptr [edx + 0x28] }
	__asm { fld dword ptr [ecx + 0x20] }
	__asm { fstp dword ptr [edx + 0x2c] }
	__asm { mov eax, dword ptr [ecx + 0x24] }
	__asm { mov dword ptr [edx + 0x30], eax }
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { mov dword ptr [edx + 0x34], eax }
	__asm { lea edx, [ecx - 0xc] }
	__asm { jmp L_0061cb41 }
	__asm { L_0061cba4: }
	__asm { movss xmm0, dword ptr [ebp - 0x34] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { movss dword ptr [edx], xmm1 }
	__asm { movss dword ptr [edx + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x30] }
	__asm { movss dword ptr [edx + 8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x2c] }
	__asm { movss dword ptr [edx + 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x28] }
	__asm { movss dword ptr [edx + 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x24] }
	__asm { movss dword ptr [edx + 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { movss dword ptr [edx + 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [edx + 0x1c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [edx + 0x20], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [edx + 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [edx + 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edx + 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { movss dword ptr [edx + 0x2c], xmm0 }
	__asm { mov dword ptr [edx + 0x34], eax }
	__asm { L_0061cc22: }
	__asm { add ebx, 0x38 }
	__asm { cmp ebx, dword ptr [ebp + 0xc] }
	__asm { jne L_0061ca82 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_0061cc30: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0061df30();
// FUNCTION: ROBLOXSTUDIO 0x0061ce30
extern "C" __declspec(naked) void asm_0061ce30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, 0x92492493 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { sub ecx, esi }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { push edi }
	__asm { cmp eax, 0x28 }
	__asm { jle L_0061cf9d }
	__asm { inc eax }
	__asm { cdq }
	__asm { and edx, 7 }
	__asm { add eax, edx }
	__asm { sar eax, 3 }
	__asm { mov ecx, eax }
	__asm { imul ecx, ecx, 0x70 }
	__asm { lea edi, [eax*8] }
	__asm { sub edi, eax }
	__asm { shl edi, 3 }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { lea ebx, [edi + esi] }
	__asm { add ecx, esi }
	__asm { comiss xmm0, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { jbe L_0061ce9e }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_0061df30 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { L_0061ce9e: }
	__asm { movss xmm0, dword ptr [ebx] }
	__asm { comiss xmm0, dword ptr [ecx] }
	__asm { jbe L_0061cec4 }
	__asm { push ebx }
	__asm { push ecx }
	__asm { call fn_0061df30 }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { add esp, 8 }
	__asm { comiss xmm0, dword ptr [ebx] }
	__asm { jbe L_0061cec4 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_0061df30 }
	__asm { add esp, 8 }
	__asm { L_0061cec4: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edi + esi] }
	__asm { mov edi, esi }
	__asm { sub edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { comiss xmm0, dword ptr [esi] }
	__asm { jbe L_0061cee8 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0061df30 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add esp, 8 }
	__asm { L_0061cee8: }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { comiss xmm0, dword ptr [eax] }
	__asm { jbe L_0061cf0e }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0061df30 }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { add esp, 8 }
	__asm { comiss xmm0, dword ptr [esi] }
	__asm { jbe L_0061cf0e }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0061df30 }
	__asm { add esp, 8 }
	__asm { L_0061cf0e: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, eax }
	__asm { sub ecx, dword ptr [ebp - 8] }
	__asm { mov edi, eax }
	__asm { sub edi, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { comiss xmm0, dword ptr [edi] }
	__asm { jbe L_0061cf34 }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_0061df30 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add esp, 8 }
	__asm { L_0061cf34: }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { comiss xmm0, dword ptr [eax] }
	__asm { jbe L_0061cf5d }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0061df30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm0, dword ptr [edi] }
	__asm { jbe L_0061cf5d }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0061df30 }
	__asm { add esp, 8 }
	__asm { L_0061cf5d: }
	__asm { movss xmm0, dword ptr [ebx] }
	__asm { comiss xmm0, dword ptr [esi] }
	__asm { jbe L_0061cf70 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_0061df30 }
	__asm { add esp, 8 }
	__asm { L_0061cf70: }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { comiss xmm0, dword ptr [edi] }
	__asm { jbe L_0061cfd5 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0061df30 }
	__asm { movss xmm0, dword ptr [ebx] }
	__asm { add esp, 8 }
	__asm { comiss xmm0, dword ptr [esi] }
	__asm { jbe L_0061cfd5 }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_0061df30 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0061cf9d: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { comiss xmm0, dword ptr [edi] }
	__asm { jbe L_0061cfaf }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0061df30 }
	__asm { add esp, 8 }
	__asm { L_0061cfaf: }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { comiss xmm0, dword ptr [ebx] }
	__asm { jbe L_0061cfd5 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_0061df30 }
	__asm { movss xmm0, dword ptr [esi] }
	__asm { add esp, 8 }
	__asm { comiss xmm0, dword ptr [edi] }
	__asm { jbe L_0061cfd5 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0061df30 }
	__asm { add esp, 8 }
	__asm { L_0061cfd5: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0061d100
extern "C" __declspec(naked) void asm_0061d100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { lea eax, [ecx - 1] }
	__asm { cdq }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub eax, edx }
	__asm { push edi }
	__asm { mov edi, eax }
	__asm { sar edi, 1 }
	__asm { cmp dword ptr [ebp + 0x10], ecx }
	__asm { jge L_0061d1c8 }
	__asm { L_0061d122: }
	__asm { movss xmm0, dword ptr [ebx] }
	__asm { lea edx, [edi*8] }
	__asm { sub edx, edi }
	__asm { movss xmm1, dword ptr [esi + edx*8] }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_0061d1c8 }
	__asm { shl ecx, 3 }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [esi + ecx*8], xmm1 }
	__asm { fld dword ptr [esi + edx*8 + 4] }
	__asm { fstp dword ptr [esi + ecx*8 + 4] }
	__asm { fld dword ptr [esi + edx*8 + 8] }
	__asm { fstp dword ptr [esi + ecx*8 + 8] }
	__asm { fld dword ptr [esi + edx*8 + 0xc] }
	__asm { fstp dword ptr [esi + ecx*8 + 0xc] }
	__asm { fld dword ptr [esi + edx*8 + 0x10] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x10] }
	__asm { fld dword ptr [esi + edx*8 + 0x14] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x14] }
	__asm { fld dword ptr [esi + edx*8 + 0x18] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x18] }
	__asm { fld dword ptr [esi + edx*8 + 0x1c] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x1c] }
	__asm { fld dword ptr [esi + edx*8 + 0x20] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x20] }
	__asm { fld dword ptr [esi + edx*8 + 0x24] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x24] }
	__asm { fld dword ptr [esi + edx*8 + 0x28] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x28] }
	__asm { fld dword ptr [esi + edx*8 + 0x2c] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x2c] }
	__asm { mov eax, dword ptr [esi + edx*8 + 0x30] }
	__asm { mov dword ptr [esi + ecx*8 + 0x30], eax }
	__asm { mov eax, dword ptr [esi + edx*8 + 0x34] }
	__asm { mov dword ptr [esi + ecx*8 + 0x34], eax }
	__asm { lea eax, [edi - 1] }
	__asm { cdq }
	__asm { mov ecx, edi }
	__asm { sub eax, edx }
	__asm { mov edi, eax }
	__asm { sar edi, 1 }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { cmp dword ptr [ebp + 0x10], ecx }
	__asm { jl L_0061d122 }
	__asm { L_0061d1c8: }
	__asm { fld dword ptr [ebx] }
	__asm { shl ecx, 3 }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { fstp dword ptr [esi + ecx*8] }
	__asm { fld dword ptr [ebx + 4] }
	__asm { fstp dword ptr [esi + ecx*8 + 4] }
	__asm { fld dword ptr [ebx + 8] }
	__asm { fstp dword ptr [esi + ecx*8 + 8] }
	__asm { fld dword ptr [ebx + 0xc] }
	__asm { fstp dword ptr [esi + ecx*8 + 0xc] }
	__asm { fld dword ptr [ebx + 0x10] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x10] }
	__asm { fld dword ptr [ebx + 0x14] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x14] }
	__asm { fld dword ptr [ebx + 0x18] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x18] }
	__asm { fld dword ptr [ebx + 0x1c] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x1c] }
	__asm { fld dword ptr [ebx + 0x20] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x20] }
	__asm { fld dword ptr [ebx + 0x24] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x24] }
	__asm { fld dword ptr [ebx + 0x28] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x28] }
	__asm { fld dword ptr [ebx + 0x2c] }
	__asm { fstp dword ptr [esi + ecx*8 + 0x2c] }
	__asm { mov eax, dword ptr [ebx + 0x30] }
	__asm { mov dword ptr [esi + ecx*8 + 0x30], eax }
	__asm { mov eax, dword ptr [ebx + 0x34] }
	__asm { mov dword ptr [esi + ecx*8 + 0x34], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0061ca60();
extern "C" void fn_0061cc40();
extern "C" void fn_0061d4d0();
extern "C" void fn_0061d5e0();
// FUNCTION: ROBLOXSTUDIO 0x0061d380
extern "C" __declspec(naked) void asm_0061d380()
{
	__asm { L_0061d380: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, 0x92492493 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0x20 }
	__asm { jle L_0061d463 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_0061d3b2: }
	__asm { test esi, esi }
	__asm { jle L_0061d47e }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 8] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_0061d5e0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, eax }
	__asm { sar ecx, 1 }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { add ecx, eax }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov ecx, edi }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { sar edx, 5 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { add esp, 0x10 }
	__asm { shr eax, 0x1f }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { jge L_0061d434 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { call L_0061d380 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { jmp L_0061d440 }
	__asm { L_0061d434: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call L_0061d380 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_0061d440: }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0x20 }
	__asm { jg L_0061d3b2 }
	__asm { L_0061d463: }
	__asm { cmp eax, 1 }
	__asm { jle L_0061d477 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_0061ca60 }
	__asm { add esp, 0x10 }
	__asm { L_0061d477: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0061d47e: }
	__asm { cmp eax, 0x20 }
	__asm { jle L_0061d463 }
	__asm { mov ecx, edi }
	__asm { sub ecx, ebx }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 1 }
	__asm { jle L_0061d4b0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_0061cc40 }
	__asm { add esp, 0x14 }
	__asm { L_0061d4b0: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_0061d4d0 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0061de20
extern "C" __declspec(naked) void asm_0061de20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { cmp edx, ebx }
	__asm { je L_0061de4e }
	__asm { push esi }
	__asm { push edi }
	__asm { L_0061de33: }
	__asm { test eax, eax }
	__asm { je L_0061de42 }
	__asm { mov ecx, 0xe }
	__asm { mov esi, edx }
	__asm { mov edi, eax }
	__asm { rep movsd }
	__asm { L_0061de42: }
	__asm { add edx, 0x38 }
	__asm { add eax, 0x38 }
	__asm { cmp edx, ebx }
	__asm { jne L_0061de33 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_0061de4e: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0061c420();
// FUNCTION: ROBLOXSTUDIO 0x0061ded0
extern "C" __declspec(naked) void asm_0061ded0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { lea ecx, [ebp - 8] }
	__asm { call fn_0061c420 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov dword ptr [edi], esi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { test esi, esi }
	__asm { je L_0061df26 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0061df26 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0061df26 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061df26: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0061df30
extern "C" __declspec(naked) void asm_0061df30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x38 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, 0xe }
	__asm { mov esi, edx }
	__asm { lea edi, [ebp - 0x38] }
	__asm { rep movsd }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movss xmm0, dword ptr [ebp - 0x38] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [edx] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp dword ptr [edx + 4] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [edx + 8] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [edx + 0xc] }
	__asm { fld dword ptr [ecx + 0x10] }
	__asm { fstp dword ptr [edx + 0x10] }
	__asm { fld dword ptr [ecx + 0x14] }
	__asm { fstp dword ptr [edx + 0x14] }
	__asm { fld dword ptr [ecx + 0x18] }
	__asm { fstp dword ptr [edx + 0x18] }
	__asm { fld dword ptr [ecx + 0x1c] }
	__asm { fstp dword ptr [edx + 0x1c] }
	__asm { fld dword ptr [ecx + 0x20] }
	__asm { fstp dword ptr [edx + 0x20] }
	__asm { fld dword ptr [ecx + 0x24] }
	__asm { fstp dword ptr [edx + 0x24] }
	__asm { fld dword ptr [ecx + 0x28] }
	__asm { fstp dword ptr [edx + 0x28] }
	__asm { fld dword ptr [ecx + 0x2c] }
	__asm { fstp dword ptr [edx + 0x2c] }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { mov dword ptr [edx + 0x30], eax }
	__asm { mov eax, dword ptr [ecx + 0x34] }
	__asm { mov dword ptr [edx + 0x34], eax }
	__asm { movss dword ptr [ecx], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x34] }
	__asm { movss dword ptr [ecx + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x30] }
	__asm { movss dword ptr [ecx + 8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x2c] }
	__asm { movss dword ptr [ecx + 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x28] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { movss dword ptr [ecx + 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x24] }
	__asm { movss dword ptr [ecx + 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { movss dword ptr [ecx + 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { movss dword ptr [ecx + 0x1c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [ecx + 0x20], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [ecx + 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [ecx + 0x28], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { movss dword ptr [ecx + 0x2c], xmm0 }
	__asm { mov dword ptr [ecx + 0x34], eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_0061c850();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0061e030
extern "C" __declspec(naked) void asm_0061e030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x34], 0 }
	__asm { je L_0061e069 }
	__asm { lea ecx, [edi + 0x34] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { L_0061e069: }
	__asm { cmp dword ptr [edi + 0x28], 0 }
	__asm { je L_0061e0aa }
	__asm { lea ecx, [edi + 0x28] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { push dword ptr [edi + 0x28] }
	__asm { call fn_0061c850 }
	__asm { push dword ptr [edi + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { L_0061e0aa: }
	__asm { mov esi, dword ptr [edi + 0x24] }
	__asm { test esi, esi }
	__asm { je L_0061e0d7 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0061e0d7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0061e0d7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061e0d7: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0061e220
extern "C" __declspec(naked) void asm_0061e220()
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
	__asm { je L_0061e240 }
	__asm { lea eax, [ecx + 4] }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { L_0061e240: }
	__asm { mov dword ptr [esi], edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { test edi, edi }
	__asm { je L_0061e272 }
	__asm { lea ecx, [edi + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0061e272 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061e272 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061e272: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0061e690
extern "C" __declspec(naked) void asm_0061e690()
{
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0061e6d2 }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_0061e6c8 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0061e6c7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0061e6c7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061e6c7: }
	__asm { pop ebx }
	__asm { L_0061e6c8: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_0061e6d2: }
	__asm { pop edi }
	__asm { ret }
}

extern "C" void fn_0061e550();
// FUNCTION: ROBLOXSTUDIO 0x0061e700
extern "C" __declspec(naked) void asm_0061e700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp esi, ecx }
	__asm { jae L_0061e74b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { cmp eax, esi }
	__asm { ja L_0061e74b }
	__asm { sub esi, eax }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 5 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { cmp ecx, dword ptr [ebx + 8] }
	__asm { jne L_0061e73b }
	__asm { push 1 }
	__asm { mov ecx, ebx }
	__asm { call fn_0061e550 }
	__asm { L_0061e73b: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { lea ecx, [esi*8] }
	__asm { sub ecx, esi }
	__asm { lea esi, [eax + ecx*8] }
	__asm { jmp L_0061e759 }
	__asm { L_0061e74b: }
	__asm { cmp ecx, dword ptr [ebx + 8] }
	__asm { jne L_0061e759 }
	__asm { push 1 }
	__asm { mov ecx, ebx }
	__asm { call fn_0061e550 }
	__asm { L_0061e759: }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { test edi, edi }
	__asm { je L_0061e767 }
	__asm { mov ecx, 0xe }
	__asm { rep movsd }
	__asm { L_0061e767: }
	__asm { add dword ptr [ebx + 4], 0x38 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0061cfe0();
extern "C" void fn_0061ddd0();
extern "C" void fn_0061e550();
extern "C" void fn_00665970();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0061e780
extern "C" __declspec(naked) void asm_0061e780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fbb0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, 0x92492493 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { sub esi, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 5 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp ecx, ebx }
	__asm { jbe L_0061e80e }
	__asm { mov ecx, dword ptr [edi] }
	__asm { lea eax, [ebx*8] }
	__asm { sub eax, ebx }
	__asm { lea eax, [ecx + eax*8] }
	__asm { cmp eax, ecx }
	__asm { jne L_0061e7f7 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [edi] }
	__asm { L_0061e7e1: }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { L_0061e7e4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0061e7f7: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { cmp eax, ecx }
	__asm { je L_0061e7e4 }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call fn_0061cfe0 }
	__asm { add esp, 0x10 }
	__asm { jmp L_0061e7e1 }
	__asm { L_0061e80e: }
	__asm { jae L_0061e7e4 }
	__asm { mov eax, ebx }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0061e550 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [edi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov ecx, ebx }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0061ddd0 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [edi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { sub ebx, eax }
	__asm { add esp, 0x14 }
	__asm { lea eax, [ebx*8] }
	__asm { sub eax, ebx }
	__asm { lea eax, [esi + eax*8] }
	__asm { jmp L_0061e7e1 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00665970 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_010385f0[];
extern "C" void fn_006dec80();
// FUNCTION: ROBLOXSTUDIO 0x0061e8a0
extern "C" __declspec(naked) void asm_0061e8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_006dec80 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { call fn_006dec80 }
	__asm { movss xmm3, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [g_010385f0] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xorps xmm0, xmm1 }
	__asm { lea edi, [edx + 8] }
	__asm { xorps xmm3, xmm1 }
	__asm { xorps xmm2, xmm1 }
	__asm { movss dword ptr [esi + 0xc], xmm0 }
	__asm { movss dword ptr [esi + 0x10], xmm3 }
	__asm { movss dword ptr [esi + 0x14], xmm2 }
	__asm { movss xmm0, dword ptr [edi] }
	__asm { comiss xmm0, dword ptr [eax + 8] }
	__asm { lea ecx, [eax + 8] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { ja L_0061e911 }
	__asm { mov ecx, edi }
	__asm { L_0061e911: }
	__asm { movss xmm2, dword ptr [ecx] }
	__asm { movss xmm0, dword ptr [edx + 4] }
	__asm { comiss xmm0, dword ptr [eax + 4] }
	__asm { lea edi, [edx + 4] }
	__asm { lea ecx, [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { ja L_0061e92c }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { L_0061e92c: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { movss xmm0, dword ptr [edx] }
	__asm { comiss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [esi] }
	__asm { mov esi, eax }
	__asm { ja L_0061e940 }
	__asm { mov esi, edx }
	__asm { L_0061e940: }
	__asm { fld dword ptr [esi] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { fstp dword ptr [esi] }
	__asm { movss dword ptr [esi + 4], xmm1 }
	__asm { movss dword ptr [esi + 8], xmm2 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { comiss xmm0, dword ptr [edx] }
	__asm { ja L_0061e961 }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { L_0061e961: }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { comiss xmm0, dword ptr [edi] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm2, dword ptr [edx] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { cmovbe ecx, edi }
	__asm { comiss xmm0, dword ptr [edx] }
	__asm { movss xmm1, dword ptr [ecx] }
	__asm { cmovbe eax, edx }
	__asm { pop edi }
	__asm { fld dword ptr [eax] }
	__asm { movss dword ptr [esi + 0x10], xmm1 }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { movss dword ptr [esi + 0x14], xmm2 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0060f500();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x0061ecc0
extern "C" __declspec(naked) void asm_0061ecc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fc36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe339d8 }
	__asm { push 0x4033d0 }
	__asm { push 6 }
	__asm { push 8 }
	__asm { lea eax, [edi + 0x34] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00cf669e }
	__asm { mov esi, dword ptr [edi + 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0061ed32 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0061ed31 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0061ed31 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061ed31: }
	__asm { pop ebx }
	__asm { L_0061ed32: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f500 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006e2150();
extern "C" void fn_006e28c0();
// FUNCTION: ROBLOXSTUDIO 0x0061f6b0
extern "C" __declspec(naked) void asm_0061f6b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_006e2150 }
	__asm { movss xmm0, dword ptr [ebp + 0x24] }
	__asm { movss xmm6, dword ptr [ebp + 0x10] }
	__asm { movss xmm1, dword ptr [ebp + 0x14] }
	__asm { movss xmm7, dword ptr [ebp + 0xc] }
	__asm { movss xmm3, dword ptr [ebp + 0x1c] }
	__asm { movss xmm5, dword ptr [ebp + 0x20] }
	__asm { movss xmm2, dword ptr [ebp + 0x18] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mulss xmm6, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm7, xmm0 }
	__asm { movaps xmm0, xmm5 }
	__asm { movaps xmm4, xmm3 }
	__asm { mulss xmm0, xmm6 }
	__asm { mulss xmm4, xmm1 }
	__asm { mulss xmm5, xmm7 }
	__asm { subss xmm4, xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, xmm1 }
	__asm { mulss xmm2, xmm6 }
	__asm { mulss xmm3, xmm7 }
	__asm { mov esi, eax }
	__asm { subss xmm5, xmm0 }
	__asm { subss xmm2, xmm3 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov ecx, 0x10 }
	__asm { mov edi, ebx }
	__asm { push eax }
	__asm { rep movsd }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { movss dword ptr [ebp - 0x10], xmm4 }
	__asm { movss dword ptr [ebp - 0xc], xmm5 }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006e28c0 }
	__asm { movss xmm0, dword ptr [ebp + 0x18] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x1c] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x20] }
	__asm { push eax }
	__asm { push 1 }
	__asm { mov ecx, ebx }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006e28c0 }
	__asm { movss xmm0, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { push 2 }
	__asm { mov ecx, ebx }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006e28c0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0061f7c0
extern "C" __declspec(naked) void asm_0061f7c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, 0x10 }
	__asm { mov esi, eax }
	__asm { mov edi, edx }
	__asm { rep movsd }
	__asm { fld dword ptr [eax + 0x40] }
	__asm { fstp dword ptr [edx + 0x40] }
	__asm { fld dword ptr [eax + 0x44] }
	__asm { fstp dword ptr [edx + 0x44] }
	__asm { fld dword ptr [eax + 0x48] }
	__asm { fstp dword ptr [edx + 0x48] }
	__asm { fld dword ptr [eax + 0x4c] }
	__asm { fstp dword ptr [edx + 0x4c] }
	__asm { fld dword ptr [eax + 0x50] }
	__asm { fstp dword ptr [edx + 0x50] }
	__asm { fld dword ptr [eax + 0x54] }
	__asm { fstp dword ptr [edx + 0x54] }
	__asm { fld dword ptr [eax + 0x58] }
	__asm { fstp dword ptr [edx + 0x58] }
	__asm { fld dword ptr [eax + 0x5c] }
	__asm { fstp dword ptr [edx + 0x5c] }
	__asm { fld dword ptr [eax + 0x60] }
	__asm { fstp dword ptr [edx + 0x60] }
	__asm { fld dword ptr [eax + 0x64] }
	__asm { fstp dword ptr [edx + 0x64] }
	__asm { fld dword ptr [eax + 0x68] }
	__asm { fstp dword ptr [edx + 0x68] }
	__asm { fld dword ptr [eax + 0x6c] }
	__asm { fstp dword ptr [edx + 0x6c] }
	__asm { fld dword ptr [eax + 0x70] }
	__asm { fstp dword ptr [edx + 0x70] }
	__asm { fld dword ptr [eax + 0x74] }
	__asm { fstp dword ptr [edx + 0x74] }
	__asm { fld dword ptr [eax + 0x78] }
	__asm { fstp dword ptr [edx + 0x78] }
	__asm { fld dword ptr [eax + 0x7c] }
	__asm { fstp dword ptr [edx + 0x7c] }
	__asm { fld dword ptr [eax + 0x80] }
	__asm { fstp dword ptr [edx + 0x80] }
	__asm { fld dword ptr [eax + 0x84] }
	__asm { fstp dword ptr [edx + 0x84] }
	__asm { fld dword ptr [eax + 0x88] }
	__asm { fstp dword ptr [edx + 0x88] }
	__asm { fld dword ptr [eax + 0x8c] }
	__asm { fstp dword ptr [edx + 0x8c] }
	__asm { fld dword ptr [eax + 0x90] }
	__asm { fstp dword ptr [edx + 0x90] }
	__asm { fld dword ptr [eax + 0x94] }
	__asm { fstp dword ptr [edx + 0x94] }
	__asm { fld dword ptr [eax + 0x98] }
	__asm { fstp dword ptr [edx + 0x98] }
	__asm { fld dword ptr [eax + 0x9c] }
	__asm { fstp dword ptr [edx + 0x9c] }
	__asm { fld dword ptr [eax + 0xa0] }
	__asm { fstp dword ptr [edx + 0xa0] }
	__asm { fld dword ptr [eax + 0xa4] }
	__asm { fstp dword ptr [edx + 0xa4] }
	__asm { fld dword ptr [eax + 0xa8] }
	__asm { fstp dword ptr [edx + 0xa8] }
	__asm { fld dword ptr [eax + 0xac] }
	__asm { fstp dword ptr [edx + 0xac] }
	__asm { fld dword ptr [eax + 0xb0] }
	__asm { fstp dword ptr [edx + 0xb0] }
	__asm { fld dword ptr [eax + 0xb4] }
	__asm { fstp dword ptr [edx + 0xb4] }
	__asm { fld dword ptr [eax + 0xb8] }
	__asm { fstp dword ptr [edx + 0xb8] }
	__asm { fld dword ptr [eax + 0xbc] }
	__asm { fstp dword ptr [edx + 0xbc] }
	__asm { fld dword ptr [eax + 0xc0] }
	__asm { fstp dword ptr [edx + 0xc0] }
	__asm { fld dword ptr [eax + 0xc4] }
	__asm { fstp dword ptr [edx + 0xc4] }
	__asm { fld dword ptr [eax + 0xc8] }
	__asm { fstp dword ptr [edx + 0xc8] }
	__asm { fld dword ptr [eax + 0xcc] }
	__asm { fstp dword ptr [edx + 0xcc] }
	__asm { fld dword ptr [eax + 0xd0] }
	__asm { fstp dword ptr [edx + 0xd0] }
	__asm { fld dword ptr [eax + 0xd4] }
	__asm { fstp dword ptr [edx + 0xd4] }
	__asm { fld dword ptr [eax + 0xd8] }
	__asm { fstp dword ptr [edx + 0xd8] }
	__asm { fld dword ptr [eax + 0xdc] }
	__asm { fstp dword ptr [edx + 0xdc] }
	__asm { fld dword ptr [eax + 0xe0] }
	__asm { fstp dword ptr [edx + 0xe0] }
	__asm { fld dword ptr [eax + 0xe4] }
	__asm { fstp dword ptr [edx + 0xe4] }
	__asm { fld dword ptr [eax + 0xe8] }
	__asm { fstp dword ptr [edx + 0xe8] }
	__asm { fld dword ptr [eax + 0xec] }
	__asm { fstp dword ptr [edx + 0xec] }
	__asm { fld dword ptr [eax + 0xf0] }
	__asm { fstp dword ptr [edx + 0xf0] }
	__asm { fld dword ptr [eax + 0xf4] }
	__asm { fstp dword ptr [edx + 0xf4] }
	__asm { fld dword ptr [eax + 0xf8] }
	__asm { fstp dword ptr [edx + 0xf8] }
	__asm { fld dword ptr [eax + 0xfc] }
	__asm { fstp dword ptr [edx + 0xfc] }
	__asm { fld dword ptr [eax + 0x100] }
	__asm { fstp dword ptr [edx + 0x100] }
	__asm { fld dword ptr [eax + 0x104] }
	__asm { fstp dword ptr [edx + 0x104] }
	__asm { fld dword ptr [eax + 0x108] }
	__asm { fstp dword ptr [edx + 0x108] }
	__asm { fld dword ptr [eax + 0x10c] }
	__asm { fstp dword ptr [edx + 0x10c] }
	__asm { fld dword ptr [eax + 0x110] }
	__asm { fstp dword ptr [edx + 0x110] }
	__asm { fld dword ptr [eax + 0x114] }
	__asm { fstp dword ptr [edx + 0x114] }
	__asm { fld dword ptr [eax + 0x118] }
	__asm { fstp dword ptr [edx + 0x118] }
	__asm { fld dword ptr [eax + 0x11c] }
	__asm { fstp dword ptr [edx + 0x11c] }
	__asm { fld dword ptr [eax + 0x120] }
	__asm { fstp dword ptr [edx + 0x120] }
	__asm { fld dword ptr [eax + 0x124] }
	__asm { fstp dword ptr [edx + 0x124] }
	__asm { fld dword ptr [eax + 0x128] }
	__asm { fstp dword ptr [edx + 0x128] }
	__asm { fld dword ptr [eax + 0x12c] }
	__asm { fstp dword ptr [edx + 0x12c] }
	__asm { fld dword ptr [eax + 0x130] }
	__asm { fstp dword ptr [edx + 0x130] }
	__asm { fld dword ptr [eax + 0x134] }
	__asm { fstp dword ptr [edx + 0x134] }
	__asm { fld dword ptr [eax + 0x138] }
	__asm { fstp dword ptr [edx + 0x138] }
	__asm { fld dword ptr [eax + 0x13c] }
	__asm { fstp dword ptr [edx + 0x13c] }
	__asm { fld dword ptr [eax + 0x140] }
	__asm { fstp dword ptr [edx + 0x140] }
	__asm { fld dword ptr [eax + 0x144] }
	__asm { fstp dword ptr [edx + 0x144] }
	__asm { fld dword ptr [eax + 0x148] }
	__asm { fstp dword ptr [edx + 0x148] }
	__asm { fld dword ptr [eax + 0x14c] }
	__asm { fstp dword ptr [edx + 0x14c] }
	__asm { fld dword ptr [eax + 0x150] }
	__asm { fstp dword ptr [edx + 0x150] }
	__asm { fld dword ptr [eax + 0x154] }
	__asm { fstp dword ptr [edx + 0x154] }
	__asm { fld dword ptr [eax + 0x158] }
	__asm { fstp dword ptr [edx + 0x158] }
	__asm { fld dword ptr [eax + 0x15c] }
	__asm { fstp dword ptr [edx + 0x15c] }
	__asm { fld dword ptr [eax + 0x160] }
	__asm { fstp dword ptr [edx + 0x160] }
	__asm { fld dword ptr [eax + 0x164] }
	__asm { fstp dword ptr [edx + 0x164] }
	__asm { fld dword ptr [eax + 0x168] }
	__asm { fstp dword ptr [edx + 0x168] }
	__asm { fld dword ptr [eax + 0x16c] }
	__asm { fstp dword ptr [edx + 0x16c] }
	__asm { fld dword ptr [eax + 0x170] }
	__asm { fstp dword ptr [edx + 0x170] }
	__asm { fld dword ptr [eax + 0x174] }
	__asm { pop edi }
	__asm { fstp dword ptr [edx + 0x174] }
	__asm { pop esi }
	__asm { fld dword ptr [eax + 0x178] }
	__asm { fstp dword ptr [edx + 0x178] }
	__asm { fld dword ptr [eax + 0x17c] }
	__asm { fstp dword ptr [edx + 0x17c] }
	__asm { fld dword ptr [eax + 0x180] }
	__asm { fstp dword ptr [edx + 0x180] }
	__asm { fld dword ptr [eax + 0x184] }
	__asm { fstp dword ptr [edx + 0x184] }
	__asm { fld dword ptr [eax + 0x188] }
	__asm { fstp dword ptr [edx + 0x188] }
	__asm { fld dword ptr [eax + 0x18c] }
	__asm { fstp dword ptr [edx + 0x18c] }
	__asm { fld dword ptr [eax + 0x190] }
	__asm { fstp dword ptr [edx + 0x190] }
	__asm { fld dword ptr [eax + 0x194] }
	__asm { fstp dword ptr [edx + 0x194] }
	__asm { fld dword ptr [eax + 0x198] }
	__asm { fstp dword ptr [edx + 0x198] }
	__asm { fld dword ptr [eax + 0x19c] }
	__asm { mov eax, edx }
	__asm { fstp dword ptr [edx + 0x19c] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380b8[];
extern "C" void fn_0057dce0();
extern "C" void fn_00624b30();
extern "C" void fn_00657590();
extern "C" void fn_00657900();
extern "C" void fn_00659560();
extern "C" void fn_00673bb0();
// FUNCTION: ROBLOXSTUDIO 0x0061fbd0
extern "C" __declspec(naked) void asm_0061fbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fca9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00673bb0 }
	__asm { mov dword ptr [esi], 0xe33b64 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { test eax, eax }
	__asm { je L_0061fc3e }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0061fc3e: }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00624b30 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { movss xmm1, dword ptr [eax + 0xc] }
	__asm { movss xmm2, dword ptr [eax + 0x10] }
	__asm { movss xmm3, dword ptr [eax + 0x14] }
	__asm { addss xmm1, dword ptr [eax] }
	__asm { addss xmm2, dword ptr [eax + 4] }
	__asm { addss xmm3, dword ptr [eax + 8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { mulss xmm3, xmm0 }
	__asm { movss dword ptr [esi + 0x54], xmm1 }
	__asm { movss dword ptr [esi + 0x58], xmm2 }
	__asm { movss dword ptr [esi + 0x5c], xmm3 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_0061fcc3 }
	__asm { push 0 }
	__asm { call fn_00657900 }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { je L_0061fcbd }
	__asm { call fn_00659560 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00657590 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x34] }
	__asm { call fn_0057dce0 }
	__asm { L_0061fcbd: }
	__asm { mov byte ptr [esi + 0x44], 1 }
	__asm { jmp L_0061fcc7 }
	__asm { L_0061fcc3: }
	__asm { mov byte ptr [esi + 0x44], 0 }
	__asm { L_0061fcc7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00673c30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0061fce0
extern "C" __declspec(naked) void asm_0061fce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fcc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xe33b64 }
	__asm { cmp dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0061fd3d }
	__asm { lea ecx, [edi + 0x48] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x48], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { mov dword ptr [edi + 0x50], 0 }
	__asm { L_0061fd3d: }
	__asm { mov esi, dword ptr [edi + 0x40] }
	__asm { or ebx, 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0061fd6b }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061fd6b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0061fd6b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061fd6b: }
	__asm { mov esi, dword ptr [edi + 0x38] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0061fd99 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0061fd99 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0061fd99 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061fd99: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00673c30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0057dce0();
extern "C" void fn_00673ce0();
// FUNCTION: ROBLOXSTUDIO 0x0061ff40
extern "C" __declspec(naked) void asm_0061ff40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0fcd8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { test eax, eax }
	__asm { je L_0061fffc }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0061fffc }
	__asm { cmp ecx, 3 }
	__asm { jne L_0062000c }
	__asm { cmp dword ptr [esi + 8], ecx }
	__asm { jne L_0061ffa5 }
	__asm { cmp byte ptr [eax + 0x14], 0 }
	__asm { jne L_0061ff9e }
	__asm { lea eax, [esi + 0x3c] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x2c] }
	__asm { call fn_0057dce0 }
	__asm { mov dword ptr [esi + 8], 1 }
	__asm { jmp L_0061ffa5 }
	__asm { L_0061ff9e: }
	__asm { mov dword ptr [esi + 8], 2 }
	__asm { L_0061ffa5: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057dce0 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_0061fffc }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0061fffb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_0061fffb }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0061fffb: }
	__asm { pop ebx }
	__asm { L_0061fffc: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00673ce0 }
	__asm { L_0062000c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_010380b8[];
extern "C" void fn_00686800();
// FUNCTION: ROBLOXSTUDIO 0x006223a0
extern "C" __declspec(naked) void asm_006223a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ecx + 0xc4], 0 }
	__asm { jne L_0062242a }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [edx] }
	__asm { movss xmm3, dword ptr [edx + 0xc] }
	__asm { comiss xmm1, xmm3 }
	__asm { ja L_0062242a }
	__asm { movss xmm0, dword ptr [edx + 4] }
	__asm { comiss xmm0, dword ptr [edx + 0x10] }
	__asm { ja L_0062242a }
	__asm { movss xmm4, dword ptr [edx + 8] }
	__asm { comiss xmm4, dword ptr [edx + 0x14] }
	__asm { ja L_0062242a }
	__asm { movss xmm2, dword ptr [edx + 0x14] }
	__asm { movzx eax, byte ptr [ecx + 0xcc] }
	__asm { mov ecx, dword ptr [ecx + 0x38] }
	__asm { addss xmm3, xmm1 }
	__asm { movss xmm1, dword ptr [edx + 0x10] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [g_010380b8] }
	__asm { addss xmm2, xmm4 }
	__asm { push eax }
	__asm { mulss xmm3, xmm0 }
	__asm { mulss xmm1, xmm0 }
	__asm { mulss xmm2, xmm0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0xc], xmm3 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { movss dword ptr [ebp - 4], xmm2 }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { push edx }
	__asm { call fn_00686800 }
	__asm { L_0062242a: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00624aa0();
// FUNCTION: ROBLOXSTUDIO 0x006226c0
extern "C" __declspec(naked) void asm_006226c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0fe73 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { lea esi, [ebx + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov edi, 1 }
	__asm { test eax, eax }
	__asm { je L_0062270d }
	__asm { add eax, 4 }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0062270d: }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_00622732 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { inc edi }
	__asm { L_00622732: }
	__asm { mov eax, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { lea eax, [edx + 0x20] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00624aa0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00624aa0();
// FUNCTION: ROBLOXSTUDIO 0x00622760
extern "C" __declspec(naked) void asm_00622760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0fe73 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea edx, [ebx + 8] }
	__asm { push edi }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov edi, 1 }
	__asm { test eax, eax }
	__asm { je L_006227af }
	__asm { add eax, 4 }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006227af: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_006227d4 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { inc edi }
	__asm { L_006227d4: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { lea eax, [esi + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [edx + 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00624aa0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00624b30();
extern "C" void fn_00624bd0();
extern "C" void fn_00626a00();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00622910
extern "C" __declspec(naked) void asm_00622910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fe9c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00626a00 }
	__asm { lea ebx, [eax + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ebx, ebx }
	__asm { je L_00622987 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov esi, eax }
	__asm { mov ecx, 0xa }
	__asm { mov edi, ebx }
	__asm { add eax, 0x28 }
	__asm { rep movsd }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x28] }
	__asm { call fn_00624bd0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add eax, 0x34 }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x34] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00624b30 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { L_00622987: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00622a30
extern "C" __declspec(naked) void asm_00622a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ebx }
	__asm { je L_00622a7a }
	__asm { add edi, 0x20 }
	__asm { push esi }
	__asm { L_00622a43: }
	__asm { mov esi, dword ptr [edi] }
	__asm { test esi, esi }
	__asm { je L_00622a6f }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00622a6f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00622a6f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00622a6f: }
	__asm { add edi, 0x24 }
	__asm { lea eax, [edi - 0x20] }
	__asm { cmp eax, ebx }
	__asm { jne L_00622a43 }
	__asm { pop esi }
	__asm { L_00622a7a: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_006264e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00622a80
extern "C" __declspec(naked) void asm_00622a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp eax, 0x4924923 }
	__asm { jb L_00622ab1 }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { lea ecx, [esi + 0x18] }
	__asm { call fn_006264e0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0xf13d5c }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00622ab1: }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, ecx }
	__asm { jne L_00622ad2 }
	__asm { mov dword ptr [ecx + 4], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax + 8], ebx }
	__asm { jmp L_00622af1 }
	__asm { L_00622ad2: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00622ae4 }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_00622af1 }
	__asm { mov dword ptr [ecx], ebx }
	__asm { jmp L_00622af1 }
	__asm { L_00622ae4: }
	__asm { mov dword ptr [eax + 8], ebx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_00622af1 }
	__asm { mov dword ptr [ecx + 8], ebx }
	__asm { L_00622af1: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, ebx }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { jne L_00622c7a }
	__asm { L_00622b00: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, dword ptr [esi] }
	__asm { cmp ecx, edx }
	__asm { jne L_00622bbb }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { cmp byte ptr [edx + 0xc], 0 }
	__asm { je L_00622bc1 }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_00622b5c }
	__asm { mov eax, ecx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00622b37 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00622b37: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_00622b49 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { jmp L_00622b57 }
	__asm { L_00622b49: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_00622b54 }
	__asm { mov dword ptr [ecx], edx }
	__asm { jmp L_00622b57 }
	__asm { L_00622b54: }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { L_00622b57: }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_00622b5c: }
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
	__asm { jne L_00622b86 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { L_00622b86: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { jne L_00622b9e }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_00622c6a }
	__asm { L_00622b9e: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp edx, dword ptr [ecx + 8] }
	__asm { jne L_00622bb1 }
	__asm { mov dword ptr [ecx + 8], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_00622c6a }
	__asm { L_00622bb1: }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_00622c6a }
	__asm { L_00622bbb: }
	__asm { cmp byte ptr [edx + 0xc], 0 }
	__asm { jne L_00622bde }
	__asm { L_00622bc1: }
	__asm { mov byte ptr [ecx + 0xc], 1 }
	__asm { mov byte ptr [edx + 0xc], 1 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { jmp L_00622c6d }
	__asm { L_00622bde: }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_00622c1e }
	__asm { mov eax, ecx }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00622bf7 }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00622bf7: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_00622c09 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { jmp L_00622c18 }
	__asm { L_00622c09: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_00622c16 }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { jmp L_00622c18 }
	__asm { L_00622c16: }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_00622c18: }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_00622c1e: }
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
	__asm { jne L_00622c48 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { L_00622c48: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { jne L_00622c5a }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { jmp L_00622c68 }
	__asm { L_00622c5a: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { jne L_00622c65 }
	__asm { mov dword ptr [ecx], esi }
	__asm { jmp L_00622c68 }
	__asm { L_00622c65: }
	__asm { mov dword ptr [ecx + 8], esi }
	__asm { L_00622c68: }
	__asm { mov dword ptr [esi], edx }
	__asm { L_00622c6a: }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { L_00622c6d: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { je L_00622b00 }
	__asm { L_00622c7a: }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 0xc], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00409af0();
extern "C" void fn_0040d6f0();
extern "C" void fn_00622a80();
extern "C" void fn_00622ed0();
extern "C" void fn_00626830();
extern "C" void fn_00626a80();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00622c90
extern "C" __declspec(naked) void asm_00622c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fed0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00622ce9 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ecx] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00622a80 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00622ce9: }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { cmp esi, dword ptr [edi] }
	__asm { jne L_00622d37 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { cmp eax, edx }
	__asm { jb L_00622d12 }
	__asm { cmp edx, eax }
	__asm { jb L_00622e98 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { cmp eax, dword ptr [esi + 0x14] }
	__asm { jge L_00622e98 }
	__asm { L_00622d12: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { L_00622d16: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00622a80 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00622d37: }
	__asm { cmp esi, edi }
	__asm { jne L_00622d80 }
	__asm { mov edx, dword ptr [edi + 8] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { cmp eax, esi }
	__asm { jb L_00622d5b }
	__asm { cmp esi, eax }
	__asm { jb L_00622e98 }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { cmp eax, dword ptr [ebx + 4] }
	__asm { jge L_00622e98 }
	__asm { L_00622d5b: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push edx }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00622a80 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00622d80: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { cmp eax, edx }
	__asm { jb L_00622d98 }
	__asm { cmp edx, eax }
	__asm { jb L_00622df5 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jge L_00622df5 }
	__asm { L_00622d98: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { call fn_0040d6f0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { lea eax, [ebx + 0x10] }
	__asm { push eax }
	__asm { call fn_00626830 }
	__asm { test al, al }
	__asm { je L_00622def }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { je L_00622d16 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00622a80 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00622def: }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { L_00622df5: }
	__asm { push ebx }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { call fn_00626830 }
	__asm { test al, al }
	__asm { je L_00622e95 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { call fn_00409af0 }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { cmp ebx, edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { je L_00622e2d }
	__asm { lea eax, [ebx + 0x10] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x11] }
	__asm { call fn_00626830 }
	__asm { test al, al }
	__asm { je L_00622e93 }
	__asm { L_00622e2d: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { je L_00622e5e }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00622a80 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00622e5e: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push 1 }
	__asm { push esi }
	__asm { call fn_00622a80 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_00626a80 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00622e93: }
	__asm { mov ebx, edi }
	__asm { L_00622e95: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { L_00622e98: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00622ed0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0040d6f0();
extern "C" void fn_00622a80();
extern "C" void fn_006264e0();
extern "C" void fn_00626a80();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00622ed0
extern "C" __declspec(naked) void asm_00622ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fee0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov ebx, eax }
	__asm { mov al, 1 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { jne L_00622f6e }
	__asm { mov ecx, dword ptr [edi] }
	__asm { L_00622f12: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov ebx, edx }
	__asm { je L_00622f44 }
	__asm { cmp eax, ecx }
	__asm { jb L_00622f31 }
	__asm { cmp ecx, eax }
	__asm { jb L_00622f2d }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jl L_00622f31 }
	__asm { L_00622f2d: }
	__asm { xor eax, eax }
	__asm { jmp L_00622f36 }
	__asm { L_00622f31: }
	__asm { mov eax, 1 }
	__asm { L_00622f36: }
	__asm { test al, al }
	__asm { sete al }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { test al, al }
	__asm { je L_00622f59 }
	__asm { jmp L_00622f63 }
	__asm { L_00622f44: }
	__asm { cmp ecx, eax }
	__asm { jb L_00622f5e }
	__asm { cmp eax, ecx }
	__asm { jb L_00622f54 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp eax, dword ptr [edx + 0x14] }
	__asm { jl L_00622f5e }
	__asm { L_00622f54: }
	__asm { xor al, al }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { L_00622f59: }
	__asm { mov edx, dword ptr [edx + 8] }
	__asm { jmp L_00622f65 }
	__asm { L_00622f5e: }
	__asm { mov al, 1 }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { L_00622f63: }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_00622f65: }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { je L_00622f12 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { L_00622f6e: }
	__asm { mov esi, ebx }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { test al, al }
	__asm { je L_00622fb6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp ebx, dword ptr [eax] }
	__asm { jne L_00622fab }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push 1 }
	__asm { L_00622f84: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00622a80 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00622fab: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_0040d6f0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { L_00622fb6: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, ecx }
	__asm { jb L_00622ffb }
	__asm { cmp ecx, eax }
	__asm { jb L_00622fcb }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jl L_00622ffb }
	__asm { L_00622fcb: }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { lea ecx, [edi + 0x18] }
	__asm { call fn_006264e0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00622ffb: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { jmp L_00622f84 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { call fn_00626a80 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00623750
extern "C" __declspec(naked) void asm_00623750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_006237b7 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { L_00623761: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test edi, edi }
	__asm { je L_006237a5 }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006237a5 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006237a5 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_006237a5: }
	__asm { add esi, 8 }
	__asm { add ebx, 8 }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jne L_00623761 }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006237b7: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006230e0();
extern "C" void fn_006232a0();
extern "C" void fn_00623b20();
extern "C" void fn_00623c10();
// FUNCTION: ROBLOXSTUDIO 0x00623940
extern "C" __declspec(naked) void asm_00623940()
{
	__asm { L_00623940: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp eax, 0x20 }
	__asm { jle L_006239d7 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov edi, edi }
	__asm { L_00623960: }
	__asm { test ebx, ebx }
	__asm { jle L_006239f2 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00623c10 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov ebx, eax }
	__asm { sar ebx, 1 }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sar eax, 1 }
	__asm { add ebx, eax }
	__asm { add esp, 0x10 }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { and ecx, 0xfffffff8 }
	__asm { and eax, 0xfffffff8 }
	__asm { push ebx }
	__asm { cmp eax, ecx }
	__asm { jge L_006239bc }
	__asm { push edx }
	__asm { push edi }
	__asm { call L_00623940 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { jmp L_006239c8 }
	__asm { L_006239bc: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call L_00623940 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_006239c8: }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0x20 }
	__asm { jg L_00623960 }
	__asm { L_006239d7: }
	__asm { cmp eax, 1 }
	__asm { jle L_006239eb }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_006230e0 }
	__asm { add esp, 0x10 }
	__asm { L_006239eb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006239f2: }
	__asm { cmp eax, 0x20 }
	__asm { jle L_006239d7 }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { and eax, 0xfffffff8 }
	__asm { cmp eax, 8 }
	__asm { jle L_00623a14 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_006232a0 }
	__asm { add esp, 0x14 }
	__asm { L_00623a14: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00623b20 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006231b0();
extern "C" void fn_00623370();
extern "C" void fn_00623ba0();
extern "C" void fn_00623e50();
// FUNCTION: ROBLOXSTUDIO 0x00623a30
extern "C" __declspec(naked) void asm_00623a30()
{
	__asm { L_00623a30: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { cmp eax, 0x20 }
	__asm { jle L_00623ac7 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov edi, edi }
	__asm { L_00623a50: }
	__asm { test ebx, ebx }
	__asm { jle L_00623ae2 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00623e50 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov ebx, eax }
	__asm { sar ebx, 1 }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sar eax, 1 }
	__asm { add ebx, eax }
	__asm { add esp, 0x10 }
	__asm { mov ecx, esi }
	__asm { sub ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, edx }
	__asm { sub eax, edi }
	__asm { and ecx, 0xfffffff8 }
	__asm { and eax, 0xfffffff8 }
	__asm { push ebx }
	__asm { cmp eax, ecx }
	__asm { jge L_00623aac }
	__asm { push edx }
	__asm { push edi }
	__asm { call L_00623a30 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { jmp L_00623ab8 }
	__asm { L_00623aac: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call L_00623a30 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_00623ab8: }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { sar eax, 3 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0x20 }
	__asm { jg L_00623a50 }
	__asm { L_00623ac7: }
	__asm { cmp eax, 1 }
	__asm { jle L_00623adb }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_006231b0 }
	__asm { add esp, 0x10 }
	__asm { L_00623adb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00623ae2: }
	__asm { cmp eax, 0x20 }
	__asm { jle L_00623ac7 }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { and eax, 0xfffffff8 }
	__asm { cmp eax, 8 }
	__asm { jle L_00623b04 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00623370 }
	__asm { add esp, 0x14 }
	__asm { L_00623b04: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00623ba0 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x006240c0
extern "C" __declspec(naked) void asm_006240c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp eax, ecx }
	__asm { je L_00624138 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { lea esi, [edi + 0x14] }
	__asm { L_006240d5: }
	__asm { test edi, edi }
	__asm { je L_00624122 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [edi], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi - 0x10], edx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi - 0xc], edx }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [eax + 0x1c] }
	__asm { fstp dword ptr [esi - 8] }
	__asm { fld dword ptr [eax + 0x10] }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov edx, dword ptr [eax + 0x20] }
	__asm { fstp dword ptr [esi - 4] }
	__asm { fld dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [esi] }
	__asm { fld dword ptr [eax + 0x18] }
	__asm { fstp dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 0xc], edx }
	__asm { test edx, edx }
	__asm { je L_00624122 }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_00624122: }
	__asm { add eax, 0x24 }
	__asm { add edi, 0x24 }
	__asm { add esi, 0x24 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp eax, ecx }
	__asm { jne L_006240d5 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00624138: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc250[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_006247c0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00624d20
extern "C" __declspec(naked) void asm_00624d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe33cdc }
	__asm { call fn_006247c0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_00624ec1 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_00624dad }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00624dad: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_00624e0b }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00624e0b: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00624e36 }
	__asm { L_00624e16: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_00624e20 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_00624e24 }
	__asm { L_00624e20: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00624e24: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00624e16 }
	__asm { cmp ecx, edx }
	__asm { je L_00624e36 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_00624e39 }
	__asm { L_00624e36: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_00624e39: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00624e76 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00624e61 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00624e76 }
	__asm { L_00624e61: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00624e76: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00624ec1 }
	__asm { cmp dword ptr [g_012dc250], 0x29a }
	__asm { jne L_00624ec1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00624eac }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00624ec1 }
	__asm { L_00624eac: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00624ec1: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_00624f11 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00624f11: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012dc250], 0x29a }
	__asm { je L_0062509b }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00624f8c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00624f8c: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_00624fe4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00624fe4: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00625010 }
	__asm { nop }
	__asm { L_00624ff0: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_00624ffa }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_00624ffe }
	__asm { L_00624ffa: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00624ffe: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00624ff0 }
	__asm { cmp ecx, edx }
	__asm { je L_00625010 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_00625013 }
	__asm { L_00625010: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_00625013: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_00625050 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0062503b }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00625050 }
	__asm { L_0062503b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00625050: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0062509b }
	__asm { cmp dword ptr [g_012dc250], 0x29a }
	__asm { je L_0062509b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00625086 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0062509b }
	__asm { L_00625086: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0062509b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc260[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_00624860();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x006250b0
extern "C" __declspec(naked) void asm_006250b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe33cfc }
	__asm { call fn_00624860 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_00625251 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0062513d }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0062513d: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_0062519b }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0062519b: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_006251c6 }
	__asm { L_006251a6: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_006251b0 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_006251b4 }
	__asm { L_006251b0: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006251b4: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_006251a6 }
	__asm { cmp ecx, edx }
	__asm { je L_006251c6 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_006251c9 }
	__asm { L_006251c6: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_006251c9: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00625206 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006251f1 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00625206 }
	__asm { L_006251f1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00625206: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00625251 }
	__asm { cmp dword ptr [g_012dc260], 0x29a }
	__asm { jne L_00625251 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0062523c }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00625251 }
	__asm { L_0062523c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00625251: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_006252a1 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006252a1: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012dc260], 0x29a }
	__asm { je L_0062542b }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0062531c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0062531c: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_00625374 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00625374: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_006253a0 }
	__asm { nop }
	__asm { L_00625380: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0062538a }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0062538e }
	__asm { L_0062538a: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0062538e: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00625380 }
	__asm { cmp ecx, edx }
	__asm { je L_006253a0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_006253a3 }
	__asm { L_006253a0: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_006253a3: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_006253e0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006253cb }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006253e0 }
	__asm { L_006253cb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006253e0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0062542b }
	__asm { cmp dword ptr [g_012dc260], 0x29a }
	__asm { je L_0062542b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00625416 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0062542b }
	__asm { L_00625416: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0062542b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc268[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_00624900();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00625440
extern "C" __declspec(naked) void asm_00625440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe33e40 }
	__asm { call fn_00624900 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_006255e1 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_006254cd }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006254cd: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_0062552b }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0062552b: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00625556 }
	__asm { L_00625536: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_00625540 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_00625544 }
	__asm { L_00625540: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00625544: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00625536 }
	__asm { cmp ecx, edx }
	__asm { je L_00625556 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_00625559 }
	__asm { L_00625556: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_00625559: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00625596 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00625581 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00625596 }
	__asm { L_00625581: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00625596: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006255e1 }
	__asm { cmp dword ptr [g_012dc268], 0x29a }
	__asm { jne L_006255e1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006255cc }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006255e1 }
	__asm { L_006255cc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006255e1: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_00625631 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00625631: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012dc268], 0x29a }
	__asm { je L_006257bb }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_006256ac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006256ac: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_00625704 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00625704: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00625730 }
	__asm { nop }
	__asm { L_00625710: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0062571a }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0062571e }
	__asm { L_0062571a: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0062571e: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00625710 }
	__asm { cmp ecx, edx }
	__asm { je L_00625730 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_00625733 }
	__asm { L_00625730: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_00625733: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_00625770 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0062575b }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00625770 }
	__asm { L_0062575b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00625770: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006257bb }
	__asm { cmp dword ptr [g_012dc268], 0x29a }
	__asm { je L_006257bb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006257a6 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006257bb }
	__asm { L_006257a6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006257bb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc258[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_006249a0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x006257d0
extern "C" __declspec(naked) void asm_006257d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe33ce4 }
	__asm { call fn_006249a0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_00625971 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0062585d }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0062585d: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_006258bb }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006258bb: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_006258e6 }
	__asm { L_006258c6: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_006258d0 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_006258d4 }
	__asm { L_006258d0: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_006258d4: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_006258c6 }
	__asm { cmp ecx, edx }
	__asm { je L_006258e6 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_006258e9 }
	__asm { L_006258e6: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_006258e9: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_00625926 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00625911 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00625926 }
	__asm { L_00625911: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00625926: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00625971 }
	__asm { cmp dword ptr [g_012dc258], 0x29a }
	__asm { jne L_00625971 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0062595c }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00625971 }
	__asm { L_0062595c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00625971: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_006259c1 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006259c1: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012dc258], 0x29a }
	__asm { je L_00625b4b }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00625a3c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00625a3c: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_00625a94 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00625a94: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00625ac0 }
	__asm { nop }
	__asm { L_00625aa0: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_00625aaa }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_00625aae }
	__asm { L_00625aaa: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00625aae: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00625aa0 }
	__asm { cmp ecx, edx }
	__asm { je L_00625ac0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_00625ac3 }
	__asm { L_00625ac0: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_00625ac3: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_00625b00 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00625aeb }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00625b00 }
	__asm { L_00625aeb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00625b00: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00625b4b }
	__asm { cmp dword ptr [g_012dc258], 0x29a }
	__asm { je L_00625b4b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00625b36 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00625b4b }
	__asm { L_00625b36: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00625b4b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00622a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00625d80
extern "C" __declspec(naked) void asm_00625d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0x34], 0 }
	__asm { je L_00625db9 }
	__asm { lea ecx, [edi + 0x34] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { L_00625db9: }
	__asm { cmp dword ptr [edi + 0x28], 0 }
	__asm { je L_00625dfa }
	__asm { lea ecx, [edi + 0x28] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { push dword ptr [edi + 0x28] }
	__asm { call fn_00622a30 }
	__asm { push dword ptr [edi + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { L_00625dfa: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x20] }
	__asm { test esi, esi }
	__asm { je L_00625e32 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00625e31 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00625e31 }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop edi }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp dword ptr [eax + 8] }
	__asm { L_00625e31: }
	__asm { pop edi }
	__asm { L_00625e32: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006276e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006264e0
extern "C" __declspec(naked) void asm_006264e0()
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
	__asm { lea ecx, [ebx + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006276e0 }
	__asm { push dword ptr [ebx + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { mov esi, dword ptr [ebx + 0x10] }
	__asm { add esp, 4 }
	__asm { or edi, 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00626549 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00626549 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00626549 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00626549: }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0062657a }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0062657a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0062657a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0062657a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006d19a0();
extern "C" void fn_006d20b0();
// FUNCTION: ROBLOXSTUDIO 0x00626760
extern "C" __declspec(naked) void asm_00626760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss xmm1, dword ptr [ecx + 4] }
	__asm { movss xmm2, dword ptr [eax + 0x24] }
	__asm { movss xmm4, dword ptr [eax + 0x28] }
	__asm { movss xmm3, dword ptr [eax + 0x2c] }
	__asm { mulss xmm1, xmm4 }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, dword ptr [ecx] }
	__asm { push esi }
	__asm { push eax }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { mulss xmm0, xmm3 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x10] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, dword ptr [ecx + 0x24] }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { movss xmm1, dword ptr [ecx + 0xc] }
	__asm { mulss xmm1, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x14] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x1c] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, dword ptr [ecx + 0x28] }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { movss xmm1, dword ptr [ecx + 0x18] }
	__asm { mulss xmm1, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ecx + 0x20] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, xmm0 }
	__asm { addss xmm1, dword ptr [ecx + 0x2c] }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { call fn_006d20b0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004033d0();
extern "C" void fn_00407e90();
extern "C" void fn_004186a0();
extern "C" void fn_0057dce0();
extern "C" void fn_00622910();
extern "C" void fn_00624ce0();
extern "C" void fn_00625d80();
extern "C" void fn_00626660();
extern "C" void fn_00629690();
extern "C" void fn_006296e0();
extern "C" void fn_00629d10();
extern "C" void fn_00629f20();
extern "C" void fn_0062a0b0();
extern "C" void fn_00658a90();
extern "C" void fn_006b9740();
extern "C" void fn_006da0e0();
extern "C" void fn_00770c10();
// FUNCTION: ROBLOXSTUDIO 0x00627070
extern "C" __declspec(naked) void asm_00627070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10133 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xf8 }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { test bl, bl }
	__asm { je L_006270f9 }
	__asm { mov esi, dword ptr [edi + 0xa8] }
	__asm { sub esi, dword ptr [edi + 0xa4] }
	__asm { mov eax, 0x92492493 }
	__asm { imul esi }
	__asm { add edx, esi }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { jb L_006270f9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006270e8 }
	__asm { push 0x59 }
	__asm { push 0xe340c8 }
	__asm { push 0xe34110 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006270f9 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_006270e8: }
	__asm { movzx eax, bl }
	__asm { push 0xe34130 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006270f9: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edi + 4] }
	__asm { xor ebx, ebx }
	__asm { cmp dword ptr [eax], ebx }
	__asm { cmovne ebx, eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1fc] }
	__asm { call fn_00658a90 }
	__asm { mov eax, dword ptr [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { jne L_00627150 }
	__asm { mov edi, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00627544 }
	__asm { or esi, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, esi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jmp L_0062752a }
	__asm { L_00627150: }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x9c] }
	__asm { call fn_00626660 }
	__asm { mov esi, eax }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_006271ca }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0057dce0 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov ecx, dword ptr [ebp - 0x2c] }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { test ecx, ecx }
	__asm { je L_00627211 }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { and edx, 0xfffffffd }
	__asm { push edx }
	__asm { push ebx }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0x1fc] }
	__asm { call fn_00658a90 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004186a0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_004033d0 }
	__asm { jmp L_00627214 }
	__asm { L_006271ca: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00627211 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, dword ptr [ebp - 0x2c] }
	__asm { je L_00627211 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00627200 }
	__asm { push 0x73 }
	__asm { push 0xe340c8 }
	__asm { push 0xe341a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00627211 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00627200: }
	__asm { movzx eax, cl }
	__asm { push 0xe341d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00627211: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { L_00627214: }
	__asm { cmp dword ptr [ebp + 0x18], 6 }
	__asm { jne L_00627244 }
	__asm { cmp dword ptr [esi + 0x1c], 0 }
	__asm { jne L_00627224 }
	__asm { xor eax, eax }
	__asm { jmp L_0062723c }
	__asm { L_00627224: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [eax + 0x30] }
	__asm { cmp ecx, dword ptr [eax + 0x34] }
	__asm { jne L_00627236 }
	__asm { xor eax, eax }
	__asm { jmp L_0062723c }
	__asm { L_00627236: }
	__asm { mov eax, dword ptr [eax + 0x34] }
	__asm { mov eax, dword ptr [eax - 0x24] }
	__asm { L_0062723c: }
	__asm { cmp edi, eax }
	__asm { je L_00627244 }
	__asm { mov cl, 1 }
	__asm { jmp L_00627246 }
	__asm { L_00627244: }
	__asm { xor cl, cl }
	__asm { L_00627246: }
	__asm { cmp dword ptr [esi + 0x1c], 0 }
	__asm { je L_006272b4 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { lea edi, [esi + 0x18] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp dword ptr [eax + 0x28], 0x8000 }
	__asm { jae L_006272b4 }
	__asm { test cl, cl }
	__asm { jne L_006272b4 }
	__asm { mov ecx, dword ptr [eax + 0x40] }
	__asm { sub ecx, dword ptr [eax + 0x3c] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { sar ecx, 2 }
	__asm { cmp ecx, dword ptr [esi + 0x94] }
	__asm { jb L_00627335 }
	__asm { mov eax, dword ptr [eax + 0x40] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [eax - 4], ecx }
	__asm { je L_00627335 }
	__asm { lea ecx, [ebp - 0x104] }
	__asm { call fn_00624ce0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00629690 }
	__asm { lea ecx, [ebp - 0x104] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00625d80 }
	__asm { jmp L_00627335 }
	__asm { L_006272b4: }
	__asm { lea ecx, [ebp - 0x7c] }
	__asm { call fn_00629f20 }
	__asm { mov dword ptr [ebp - 0x54], 0 }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov dword ptr [ebp - 0x48], 0 }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { lea edi, [esi + 0x18] }
	__asm { lea eax, [ebp - 0x7c] }
	__asm { mov esi, dword ptr [edi] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00622910 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, 0x38e38e2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_0062731a }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0062731a: }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { lea ecx, [ebp - 0x7c] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00625d80 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { L_00627335: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add eax, 8 }
	__asm { test byte ptr [ebp + 0x14], 0x20 }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { jne L_0062735d }
	__asm { test ebx, ebx }
	__asm { je L_00627359 }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00770c10 }
	__asm { test al, al }
	__asm { jne L_0062735d }
	__asm { L_00627359: }
	__asm { xor eax, eax }
	__asm { jmp L_00627362 }
	__asm { L_0062735d: }
	__asm { mov eax, 1 }
	__asm { L_00627362: }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push eax }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00629d10 }
	__asm { add esp, 0x14 }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0xc4], 0 }
	__asm { call fn_006da0e0 }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, ebx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x84], 0 }
	__asm { mov dword ptr [ebp - 0x88], 0 }
	__asm { mov dword ptr [ebp - 0x8c], 0 }
	__asm { mov dword ptr [ebp - 0x90], 0 }
	__asm { mov byte ptr [ebp - 0x80], 0 }
	__asm { call fn_0062a0b0 }
	__asm { mov edx, dword ptr [ebx + 0x34] }
	__asm { mov ecx, dword ptr [ebx + 0x38] }
	__asm { cmp edx, ecx }
	__asm { je L_006273eb }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { cmp dword ptr [eax - 4], esi }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { je L_00627445 }
	__asm { L_006273eb: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00627439 }
	__asm { sub ecx, edx }
	__asm { sar ecx, 2 }
	__asm { cmp ecx, dword ptr [esi + 0x94] }
	__asm { jb L_00627439 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00627428 }
	__asm { push 0x9c }
	__asm { push 0xe340c8 }
	__asm { push 0xe34254 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00627439 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00627428: }
	__asm { movzx eax, al }
	__asm { push 0xe34280 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00627439: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x34] }
	__asm { call fn_00407e90 }
	__asm { L_00627445: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { movss xmm0, dword ptr [ebp - 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov eax, dword ptr [ebx + 0x38] }
	__asm { sub eax, dword ptr [ebx + 0x34] }
	__asm { movss dword ptr [ebp - 0x54], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x24] }
	__asm { sar eax, 2 }
	__asm { dec eax }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { movss dword ptr [ebp - 0x50], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x44], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { movss dword ptr [ebp - 0x4c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x60], ecx }
	__asm { movss dword ptr [ebp - 0x48], xmm0 }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { test eax, eax }
	__asm { je L_006274a2 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006274a2: }
	__asm { lea eax, [ebp - 0x60] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x28] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_006296e0 }
	__asm { mov edi, dword ptr [ebp - 0x40] }
	__asm { or esi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test edi, edi }
	__asm { je L_006274e4 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_006274e4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_006274e4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_006274e4: }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00627513 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00627513 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00627513 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00627513: }
	__asm { mov edi, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00627544 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_0062752a: }
	__asm { jne L_00627544 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00627544 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00627544: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012dc250[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006244c0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006277a0
extern "C" __declspec(naked) void asm_006277a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0062780f }
	__asm { cmp dword ptr [g_012dc250], 0x29a }
	__asm { je L_0062780f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006277fe }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0062780f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006277fe: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0062780f: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_006244c0 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00627828 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0062782a }
	__asm { L_00627828: }
	__asm { xor eax, eax }
	__asm { L_0062782a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_0062789b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00627886 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_00627886 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00627886: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0062789b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dc260[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00624560();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006278b0
extern "C" __declspec(naked) void asm_006278b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0062791f }
	__asm { cmp dword ptr [g_012dc260], 0x29a }
	__asm { je L_0062791f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0062790e }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0062791f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0062790e: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0062791f: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00624560 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00627938 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0062793a }
	__asm { L_00627938: }
	__asm { xor eax, eax }
	__asm { L_0062793a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_006279ab }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00627996 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_00627996 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00627996: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_006279ab: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dc268[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00624640();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006279c0
extern "C" __declspec(naked) void asm_006279c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00627a2f }
	__asm { cmp dword ptr [g_012dc268], 0x29a }
	__asm { je L_00627a2f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00627a1e }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00627a2f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00627a1e: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00627a2f: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00624640 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00627a48 }
	__asm { add eax, 0x18 }
	__asm { jmp L_00627a4a }
	__asm { L_00627a48: }
	__asm { xor eax, eax }
	__asm { L_00627a4a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_00627abb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00627aa6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_00627aa6 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00627aa6: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00627abb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dc258[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00624720();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00627ad0
extern "C" __declspec(naked) void asm_00627ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00627b3f }
	__asm { cmp dword ptr [g_012dc258], 0x29a }
	__asm { je L_00627b3f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00627b2e }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00627b3f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00627b2e: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00627b3f: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00624720 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00627b58 }
	__asm { add eax, 0x18 }
	__asm { jmp L_00627b5a }
	__asm { L_00627b58: }
	__asm { xor eax, eax }
	__asm { L_00627b5a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_00627bcb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00627bb6 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_00627bb6 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00627bb6: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00627bcb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380e0[];
extern "C" void fn_0099c980();
extern "C" void fn_0099d320();
// FUNCTION: ROBLOXSTUDIO 0x00629040
extern "C" __declspec(naked) void asm_00629040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xe0] }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_0099c980 }
	__asm { mov ecx, esi }
	__asm { mov edi, eax }
	__asm { call fn_0099d320 }
	__asm { movss xmm2, dword ptr [ebx + 0x20] }
	__asm { mulss xmm2, dword ptr [edi + 0x2c] }
	__asm { xorps xmm4, xmm4 }
	__asm { movss xmm0, dword ptr [edi + 0x24] }
	__asm { comiss xmm4, xmm2 }
	__asm { movss xmm1, dword ptr [ebx + 0x1c] }
	__asm { mulss xmm0, dword ptr [ebx + 0x18] }
	__asm { mulss xmm1, dword ptr [edi + 0x28] }
	__asm { movss xmm3, dword ptr [g_010380e0] }
	__asm { jbe L_00629096 }
	__asm { subss xmm2, xmm3 }
	__asm { L_00629096: }
	__asm { comiss xmm4, xmm1 }
	__asm { cvttss2si esi, xmm2 }
	__asm { jbe L_006290a3 }
	__asm { subss xmm1, xmm3 }
	__asm { L_006290a3: }
	__asm { comiss xmm4, xmm0 }
	__asm { cvttss2si edx, xmm1 }
	__asm { jbe L_006290b0 }
	__asm { subss xmm0, xmm3 }
	__asm { L_006290b0: }
	__asm { cvttss2si ecx, xmm0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { comiss xmm0, dword ptr [ebx + 0x24] }
	__asm { mov word ptr [ebp - 8], cx }
	__asm { mov word ptr [ebp - 6], dx }
	__asm { jae L_006290e0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { comiss xmm0, dword ptr [ebx + 0x28] }
	__asm { jae L_006290e0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { comiss xmm0, dword ptr [ebx + 0x2c] }
	__asm { jae L_006290e0 }
	__asm { xor dl, dl }
	__asm { jmp L_006290e2 }
	__asm { L_006290e0: }
	__asm { mov dl, 1 }
	__asm { L_006290e2: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { xor ecx, ecx }
	__asm { test dl, dl }
	__asm { setne cl }
	__asm { pop edi }
	__asm { mov word ptr [eax + 4], si }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { or cx, word ptr [ebp + 0x10] }
	__asm { mov word ptr [eax + 6], cx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_006d2240();
extern "C" void fn_006d2c10();
extern "C" void fn_006da0e0();
// FUNCTION: ROBLOXSTUDIO 0x00629560
extern "C" __declspec(naked) void asm_00629560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov ecx, edi }
	__asm { call fn_006da0e0 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_006d2c10 }
	__asm { mov esi, eax }
	__asm { mov ecx, 9 }
	__asm { rep movsd }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006d2240 }
	__asm { movss xmm3, dword ptr [ebx + 0x24] }
	__asm { movss xmm5, dword ptr [ebx + 0x28] }
	__asm { movss xmm6, dword ptr [eax + 4] }
	__asm { movss xmm4, dword ptr [ebx + 0x2c] }
	__asm { movss xmm2, dword ptr [eax + 0xc] }
	__asm { movss xmm1, dword ptr [eax + 0x18] }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [eax] }
	__asm { mulss xmm6, xmm5 }
	__asm { mulss xmm2, xmm3 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm3 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x10] }
	__asm { mulss xmm0, xmm5 }
	__asm { pop edi }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x1c] }
	__asm { mulss xmm0, xmm5 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss dword ptr [esi + 0x24], xmm6 }
	__asm { movss dword ptr [esi + 0x28], xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { mov eax, esi }
	__asm { movss dword ptr [esi + 0x2c], xmm1 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00626e60();
// FUNCTION: ROBLOXSTUDIO 0x006296e0
extern "C" __declspec(naked) void asm_006296e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_00629761 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_00629761 }
	__asm { sub edi, eax }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul edi }
	__asm { sar edx, 3 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00629718 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00626e60 }
	__asm { L_00629718: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea edx, [edi + edi*8] }
	__asm { mov edi, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_006297ba }
	__asm { mov eax, dword ptr [edi + edx*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + edx*4 + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + edx*4 + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { fld dword ptr [edi + edx*4 + 0xc] }
	__asm { mov eax, dword ptr [edi + edx*4 + 0x1c] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [edi + edx*4 + 0x10] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + edx*4 + 0x20] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [edi + edx*4 + 0x14] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { fld dword ptr [edi + edx*4 + 0x18] }
	__asm { jmp L_006297a4 }
	__asm { L_00629761: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_0062976f }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00626e60 }
	__asm { L_0062976f: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_006297ba }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { fld dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [edi + 0x14] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { fld dword ptr [edi + 0x18] }
	__asm { L_006297a4: }
	__asm { fstp dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [ecx + 0x20], eax }
	__asm { test eax, eax }
	__asm { je L_006297ba }
	__asm { mov ecx, 1 }
	__asm { add eax, 4 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_006297ba: }
	__asm { add dword ptr [esi + 4], 0x24 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_006236c0();
extern "C" void fn_00624140();
extern "C" void fn_00626f10();
extern "C" void fn_00665970();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006298b0
extern "C" __declspec(naked) void asm_006298b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10240 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov edx, edi }
	__asm { sub edx, dword ptr [ebx] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { cmp ecx, esi }
	__asm { jbe L_00629932 }
	__asm { imul esi, esi, 0x4c }
	__asm { add esi, dword ptr [ebx] }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { jne L_0062991e }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { L_00629908: }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_0062990b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0062991e: }
	__asm { cmp esi, edi }
	__asm { je L_0062990b }
	__asm { push dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { push edi }
	__asm { call fn_006236c0 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00629908 }
	__asm { L_00629932: }
	__asm { jae L_0062990b }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00626f10 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov ecx, esi }
	__asm { sub ecx, eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00624140 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { sub esi, eax }
	__asm { imul esi, esi, 0x4c }
	__asm { add esp, 0x14 }
	__asm { add dword ptr [ebx + 4], esi }
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
}

// FUNCTION: ROBLOXSTUDIO 0x006299c0
extern "C" __declspec(naked) void asm_006299c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10260 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov eax, ecx }
	__asm { or esi, 0xffffffff }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test edx, edx }
	__asm { je L_00629a12 }
	__asm { mov edx, dword ptr [edx + 0x2c] }
	__asm { cmp edi, edx }
	__asm { ja L_00629a12 }
	__asm { mov ecx, edx }
	__asm { mov eax, 0xcccccccd }
	__asm { mul edx }
	__asm { sub ecx, edi }
	__asm { shr edx, 3 }
	__asm { cmp ecx, edx }
	__asm { jb L_00629aa2 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { L_00629a12: }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0x4c }
	__asm { lea edx, [ebp - 0x1c] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x38] }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test edi, edi }
	__asm { je L_00629a70 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00629a70 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00629a70 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00629a70: }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00629aa2 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00629aa2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00629aa2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00629aa2: }
	__asm { mov edx, dword ptr [ebx + 8] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { test edx, edx }
	__asm { je L_00629ac9 }
	__asm { mov edx, dword ptr [edx + 0x2c] }
	__asm { cmp edi, edx }
	__asm { ja L_00629ac9 }
	__asm { mov ecx, edx }
	__asm { mov eax, 0xcccccccd }
	__asm { mul edx }
	__asm { sub ecx, edi }
	__asm { shr edx, 3 }
	__asm { cmp ecx, edx }
	__asm { jb L_00629b5a }
	__asm { L_00629ac9: }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push 2 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x14] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx + 8], ecx }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebx + 0xc], edx }
	__asm { test edi, edi }
	__asm { je L_00629b29 }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00629b29 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { mov edx, esi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00629b29 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00629b29: }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00629b5a }
	__asm { lea eax, [edi + 4] }
	__asm { mov ecx, esi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00629b5a }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { dec esi }
	__asm { jne L_00629b5a }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00629b5a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_010380e4[];
extern "C" void fn_0063edc0();
extern "C" void fn_006da0e0();
extern "C" void fn_007cd560();
extern "C" void fn_00891b30();
// FUNCTION: ROBLOXSTUDIO 0x00629ba0
extern "C" __declspec(naked) void asm_00629ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006da0e0 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebx + 0x40], 0 }
	__asm { mov dword ptr [ebx + 0x3c], 0 }
	__asm { mov dword ptr [ebx + 0x38], 0 }
	__asm { mov dword ptr [ebx + 0x34], 0 }
	__asm { test esi, esi }
	__asm { je L_00629beb }
	__asm { mov esi, dword ptr [esi + 0x28] }
	__asm { call fn_0063edc0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00629beb }
	__asm { xor edi, edi }
	__asm { jmp L_00629bf0 }
	__asm { L_00629beb: }
	__asm { mov edi, 0x10 }
	__asm { L_00629bf0: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { test al, 2 }
	__asm { je L_00629bfe }
	__asm { mov esi, 2 }
	__asm { jmp L_00629c0e }
	__asm { L_00629bfe: }
	__asm { test al, 1 }
	__asm { mov eax, 0 }
	__asm { setne al }
	__asm { inc eax }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov esi, eax }
	__asm { L_00629c0e: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { xor ecx, ecx }
	__asm { cmp byte ptr [eax + 0x18], cl }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, 8 }
	__asm { mov eax, dword ptr [eax + 0x1b8] }
	__asm { cmovne ecx, edx }
	__asm { cmp byte ptr [eax + 0x39], 0 }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { jne L_00629c50 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00891b30 }
	__asm { cmp dword ptr [eax + 0x34], 0x100 }
	__asm { je L_00629c50 }
	__asm { mov ecx, 0x20 }
	__asm { jmp L_00629c52 }
	__asm { L_00629c50: }
	__asm { xor ecx, ecx }
	__asm { L_00629c52: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { xorps xmm1, xmm1 }
	__asm { mov eax, dword ptr [eax + 0x1c4] }
	__asm { xor edx, edx }
	__asm { cmp edx, dword ptr [eax + 0x30] }
	__asm { sbb eax, eax }
	__asm { and eax, 0xffffffc0 }
	__asm { add eax, 0x40 }
	__asm { or eax, ecx }
	__asm { or eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { or eax, esi }
	__asm { or eax, edi }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov al, byte ptr [ebp + 0x20] }
	__asm { mov byte ptr [ebx + 0x44], al }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00629cbe }
	__asm { movss xmm0, dword ptr [ecx + 4] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00629cbe }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_00629cbe }
	__asm { movss xmm0, dword ptr [ecx + 0xc] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_00629cd8 }
	__asm { L_00629cbe: }
	__asm { or dword ptr [ebx], 4 }
	__asm { fld dword ptr [ecx] }
	__asm { fstp dword ptr [ebx + 0x34] }
	__asm { fld dword ptr [ecx + 4] }
	__asm { fstp dword ptr [ebx + 0x38] }
	__asm { fld dword ptr [ecx + 8] }
	__asm { fstp dword ptr [ebx + 0x3c] }
	__asm { fld dword ptr [ecx + 0xc] }
	__asm { fstp dword ptr [ebx + 0x40] }
	__asm { L_00629cd8: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov esi, eax }
	__asm { lea edi, [ebx + 4] }
	__asm { mov ecx, 9 }
	__asm { rep movsd }
	__asm { fld dword ptr [eax + 0x24] }
	__asm { fstp dword ptr [ebx + 0x28] }
	__asm { fld dword ptr [eax + 0x28] }
	__asm { fstp dword ptr [ebx + 0x2c] }
	__asm { fld dword ptr [eax + 0x2c] }
	__asm { fstp dword ptr [ebx + 0x30] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00631a90();
extern "C" void fn_00632610();
extern "C" void fn_0063ee40();
extern "C" void fn_0063eec0();
extern "C" void fn_00640970();
extern "C" void fn_006b9740();
extern "C" void fn_006dec40();
extern "C" void fn_006dec80();
extern "C" void fn_007cd560();
extern "C" void fn_008474a0();
extern "C" void fn_009d9c50();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00629d10
extern "C" __declspec(naked) void asm_00629d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10280 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00640970 }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { test ebx, ebx }
	__asm { je L_00629d76 }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { call fn_0063eec0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00629e3e }
	__asm { mov eax, ebx }
	__asm { test eax, eax }
	__asm { je L_00629e3e }
	__asm { cmp dword ptr [eax + 0xc8], 5 }
	__asm { je L_00629e60 }
	__asm { L_00629d76: }
	__asm { test byte ptr [edi + 0xe8], 2 }
	__asm { je L_00629ea9 }
	__asm { push dword ptr [edi + 0x38] }
	__asm { call fn_009d9c50 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00629ea9 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { test cl, cl }
	__asm { je L_00629de3 }
	__asm { test esi, esi }
	__asm { je L_00629dab }
	__asm { cmp dword ptr [esi], eax }
	__asm { je L_00629de3 }
	__asm { L_00629dab: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00629dd2 }
	__asm { push 0x8e6 }
	__asm { push 0xe356b0 }
	__asm { push 0xe359dc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00629de3 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00629dd2: }
	__asm { movzx eax, cl }
	__asm { push 0xe35a00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00629de3: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push ebx }
	__asm { push edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00631a90 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00629e91 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00632610 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00629e2b }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00629e2b: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00629e3e: }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { call fn_0063ee40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00629d76 }
	__asm { mov eax, ebx }
	__asm { test eax, eax }
	__asm { je L_00629d76 }
	__asm { L_00629e60: }
	__asm { test eax, eax }
	__asm { je L_00629d76 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { add eax, 0xac }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00632610 }
	__asm { add esp, 0x10 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00629e91: }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00629ea9 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00629ea9: }
	__asm { test byte ptr [edi + 0xe8], 0x10 }
	__asm { je L_00629eff }
	__asm { push 0xe35334 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_008474a0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00632610 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x34], 0x10 }
	__asm { jb L_00629e2b }
	__asm { push dword ptr [ebp - 0x48] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00629eff: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_006dec80 }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [esi], edx }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { call fn_006dec40 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [esi + 0xc], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [esi + 0x10], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e362bc[];
extern "C" char g_00ec9ab0[];
extern "C" char g_010380b8[];
extern "C" void fn_0062eff0();
extern "C" void fn_006dda80();
// FUNCTION: ROBLOXSTUDIO 0x0062ee40
extern "C" __declspec(naked) void asm_0062ee40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { jne L_0062efe4 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_006dda80 }
	__asm { sub eax, 0 }
	__asm { je L_0062ef49 }
	__asm { dec eax }
	__asm { je L_0062eed0 }
	__asm { dec eax }
	__asm { jne L_0062efe3 }
	__asm { movss xmm1, dword ptr [esi + 8] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm1, dword ptr [g_010380b8] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mulss xmm0, dword ptr [g_00e362bc] }
	__asm { addss xmm1, dword ptr [g_00ec9ab0] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { cvttss2si eax, xmm1 }
	__asm { mov dword ptr [ebp - 8], 0xbf800000 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0x3f800000 }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { jmp L_0062efaa }
	__asm { L_0062eed0: }
	__asm { movss xmm1, dword ptr [esi + 4] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm1, dword ptr [g_010380b8] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mulss xmm0, dword ptr [g_00e362bc] }
	__asm { addss xmm1, dword ptr [g_00ec9ab0] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { cvttss2si eax, xmm1 }
	__asm { mov dword ptr [ebp - 0x28], 0x3f800000 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x18], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { jmp L_0062efbf }
	__asm { L_0062ef49: }
	__asm { movss xmm1, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { movaps xmm0, xmm1 }
	__asm { mulss xmm1, dword ptr [g_010380b8] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mulss xmm0, dword ptr [g_00e362bc] }
	__asm { addss xmm1, dword ptr [g_00ec9ab0] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x2c], 0xbf800000 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { cvttss2si eax, xmm1 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], 0xbf800000 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { L_0062efaa: }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { L_0062efbf: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_0062eff0 }
	__asm { L_0062efe3: }
	__asm { pop esi }
	__asm { L_0062efe4: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_010385f0[];
extern "C" void fn_0062f280();
// FUNCTION: ROBLOXSTUDIO 0x0062eff0
extern "C" __declspec(naked) void asm_0062eff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x28 }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { test edx, edx }
	__asm { je L_0062f278 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov edi, dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov ecx, 2 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { cmp esi, 1 }
	__asm { push edi }
	__asm { cmove esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { movss xmm2, dword ptr [ecx] }
	__asm { movss xmm1, dword ptr [ecx + 4] }
	__asm { movss xmm0, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { subss xmm2, dword ptr [eax] }
	__asm { subss xmm1, dword ptr [eax + 4] }
	__asm { subss xmm0, dword ptr [eax + 8] }
	__asm { push edx }
	__asm { push 0 }
	__asm { subss xmm2, dword ptr [ecx] }
	__asm { subss xmm1, dword ptr [ecx + 4] }
	__asm { subss xmm0, dword ptr [ecx + 8] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x10], xmm2 }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { call fn_0062f280 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { movss xmm5, dword ptr [eax] }
	__asm { movss xmm6, dword ptr [g_010385f0] }
	__asm { movss xmm4, dword ptr [eax + 4] }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { movss xmm3, dword ptr [eax + 8] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss xmm1, dword ptr [ecx + 4] }
	__asm { movss xmm2, dword ptr [ecx + 8] }
	__asm { subss xmm1, dword ptr [eax + 4] }
	__asm { subss xmm2, dword ptr [eax + 8] }
	__asm { movaps xmm0, xmm5 }
	__asm { xorps xmm0, xmm6 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movaps xmm0, xmm4 }
	__asm { xorps xmm0, xmm6 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { movaps xmm0, xmm3 }
	__asm { xorps xmm0, xmm6 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { subss xmm0, dword ptr [eax] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push 1 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { addss xmm5, xmm0 }
	__asm { addss xmm4, xmm1 }
	__asm { addss xmm3, xmm2 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x1c], xmm5 }
	__asm { movss dword ptr [ebp - 0x18], xmm4 }
	__asm { movss dword ptr [ebp - 0x14], xmm3 }
	__asm { call fn_0062f280 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { movss xmm6, dword ptr [eax] }
	__asm { movss xmm7, dword ptr [g_010385f0] }
	__asm { movss xmm5, dword ptr [eax + 4] }
	__asm { movss xmm4, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movaps xmm0, xmm6 }
	__asm { xorps xmm0, xmm7 }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movaps xmm0, xmm5 }
	__asm { xorps xmm0, xmm7 }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movaps xmm0, xmm4 }
	__asm { xorps xmm0, xmm7 }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { addss xmm3, dword ptr [eax] }
	__asm { xorps xmm0, xmm7 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { movaps xmm0, xmm1 }
	__asm { xorps xmm0, xmm7 }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { push edi }
	__asm { movaps xmm0, xmm2 }
	__asm { xorps xmm0, xmm7 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { addss xmm0, xmm1 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { push 0 }
	__asm { addss xmm1, xmm2 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push esi }
	__asm { addss xmm6, xmm3 }
	__asm { addss xmm5, xmm0 }
	__asm { addss xmm4, xmm1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x28], xmm6 }
	__asm { movss dword ptr [ebp - 0x24], xmm5 }
	__asm { movss dword ptr [ebp - 0x20], xmm4 }
	__asm { call fn_0062f280 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss xmm6, dword ptr [g_010385f0] }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movaps xmm0, xmm3 }
	__asm { addss xmm3, dword ptr [eax] }
	__asm { xorps xmm0, xmm6 }
	__asm { movss dword ptr [ebp - 0x28], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { xorps xmm0, xmm6 }
	__asm { movss dword ptr [ebp - 0x24], xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { xorps xmm0, xmm6 }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { addss xmm0, xmm1 }
	__asm { movss xmm1, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { addss xmm1, xmm2 }
	__asm { subss xmm3, dword ptr [eax] }
	__asm { subss xmm0, dword ptr [eax + 4] }
	__asm { subss xmm1, dword ptr [eax + 8] }
	__asm { movss dword ptr [ebp - 0x1c], xmm3 }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push ecx }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_0062f280 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_0062f278: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_006312b0();
extern "C" void fn_007709e0();
extern "C" void fn_007cb440();
extern "C" void fn_008474a0();
extern "C" void fn_009fd170();
// FUNCTION: ROBLOXSTUDIO 0x00631a90
extern "C" __declspec(naked) void asm_00631a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd102d3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_007709e0 }
	__asm { test eax, eax }
	__asm { je L_00631ae1 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_009fd170 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00631ae1: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { cmp esi, dword ptr [edi + 0x18] }
	__asm { jne L_00631b0d }
	__asm { test al, 1 }
	__asm { je L_00631b0d }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xe354f4 }
	__asm { call fn_008474a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00631b0d: }
	__asm { cmp esi, dword ptr [edi + 0x10] }
	__asm { jne L_00631b36 }
	__asm { test al, 1 }
	__asm { je L_00631b36 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xe35510 }
	__asm { call fn_008474a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00631b36: }
	__asm { cmp esi, dword ptr [edi + 0x14] }
	__asm { jne L_00631b5f }
	__asm { test al, 1 }
	__asm { je L_00631b5f }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xe35530 }
	__asm { call fn_008474a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00631b5f: }
	__asm { cmp esi, dword ptr [edi + 8] }
	__asm { jne L_00631b88 }
	__asm { test al, 1 }
	__asm { je L_00631b88 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xe35550 }
	__asm { call fn_008474a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00631b88: }
	__asm { cmp esi, dword ptr [edi + 0xc] }
	__asm { jne L_00631bb1 }
	__asm { test al, 1 }
	__asm { je L_00631bb1 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0xe35570 }
	__asm { call fn_008474a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00631bb1: }
	__asm { cmp esi, dword ptr [edi + 4] }
	__asm { jne L_00631bdc }
	__asm { test al, 1 }
	__asm { je L_00631bdc }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_006312b0 }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00631bdc: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e36260[];
extern "C" char g_010380e4[];
extern "C" void fn_00891b30();
// FUNCTION: ROBLOXSTUDIO 0x00631c20
extern "C" __declspec(naked) void asm_00631c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { call fn_00891b30 }
	__asm { cmp dword ptr [eax + 0x34], 0x100 }
	__asm { mov ecx, edi }
	__asm { jne L_00631caf }
	__asm { call fn_00891b30 }
	__asm { mov ecx, edi }
	__asm { lea esi, [eax + 0x44] }
	__asm { call fn_00891b30 }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm0, dword ptr [eax + 0x3c] }
	__asm { mov ecx, edi }
	__asm { mulss xmm0, dword ptr [esi] }
	__asm { subss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { call fn_00891b30 }
	__asm { movss xmm2, dword ptr [eax + 0x40] }
	__asm { xorps xmm1, xmm1 }
	__asm { comiss xmm1, xmm2 }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { jae L_00631c90 }
	__asm { comiss xmm2, xmm0 }
	__asm { jb L_00631c8d }
	__asm { movaps xmm1, xmm0 }
	__asm { jmp L_00631c90 }
	__asm { L_00631c8d: }
	__asm { movaps xmm1, xmm2 }
	__asm { L_00631c90: }
	__asm { mulss xmm1, dword ptr [g_00e36260] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { subss xmm0, xmm1 }
	__asm { mulss xmm0, dword ptr [ebp - 4] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00631caf: }
	__asm { call fn_00891b30 }
	__asm { mov ecx, edi }
	__asm { lea esi, [eax + 0x44] }
	__asm { call fn_00891b30 }
	__asm { movss xmm1, dword ptr [g_010380e4] }
	__asm { movaps xmm0, xmm1 }
	__asm { subss xmm0, dword ptr [eax + 0x3c] }
	__asm { pop edi }
	__asm { mulss xmm0, dword ptr [esi] }
	__asm { pop esi }
	__asm { subss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { fld dword ptr [ebp - 4] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_010380e4[];
extern "C" char g_010381e8[];
extern "C" void fn_00631c20();
extern "C" void fn_0063ee40();
extern "C" void fn_006cfe50();
extern "C" void fn_006e8260();
extern "C" void fn_007cd560();
extern "C" void fn_00891b30();
extern "C" void fn_008e9990();
// FUNCTION: ROBLOXSTUDIO 0x00631cf0
extern "C" __declspec(naked) void asm_00631cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00631d0d }
	__asm { movss xmm1, dword ptr [esi + 0xa4] }
	__asm { jmp L_00631d1e }
	__asm { L_00631d0d: }
	__asm { push edi }
	__asm { call fn_00631c20 }
	__asm { fstp dword ptr [ebp + 0x10] }
	__asm { movss xmm1, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { L_00631d1e: }
	__asm { xorps xmm0, xmm0 }
	__asm { comiss xmm0, xmm1 }
	__asm { jae L_00631d36 }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { comiss xmm1, xmm0 }
	__asm { jae L_00631d36 }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00631d36: }
	__asm { mulss xmm0, dword ptr [g_010381e8] }
	__asm { or bl, 0xff }
	__asm { cvttss2si eax, xmm0 }
	__asm { sub bl, al }
	__asm { test esi, esi }
	__asm { jne L_00631de5 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test al, 2 }
	__asm { je L_00631da6 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { test eax, eax }
	__asm { je L_00631de5 }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00631de5 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0063ee40 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00631de5 }
	__asm { add edi, -0x1c }
	__asm { je L_00631de5 }
	__asm { cmp dword ptr [edi + 0xa0], 0 }
	__asm { je L_00631de5 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add eax, 0x70 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call fn_006cfe50 }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x11] }
	__asm { call fn_006e8260 }
	__asm { jmp L_00631dc3 }
	__asm { L_00631da6: }
	__asm { test al, 1 }
	__asm { je L_00631de5 }
	__asm { mov ecx, edi }
	__asm { call fn_00891b30 }
	__asm { mov eax, dword ptr [eax + 0x38] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp + 0x11] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 4] }
	__asm { call fn_008e9990 }
	__asm { L_00631dc3: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { movzx ecx, byte ptr [eax] }
	__asm { mov byte ptr [edx], cl }
	__asm { movzx ecx, byte ptr [eax + 1] }
	__asm { mov byte ptr [edx + 1], cl }
	__asm { movzx ecx, byte ptr [eax + 2] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [edx + 3], bl }
	__asm { mov eax, edx }
	__asm { mov byte ptr [edx + 2], cl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00631de5: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 3], bl }
	__asm { mov word ptr [eax], 0xffff }
	__asm { mov byte ptr [eax + 2], 0xff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e36260[];
extern "C" char g_010380e4[];
extern "C" char g_010381e8[];
extern "C" void fn_00658fa0();
extern "C" void fn_00891b30();
// FUNCTION: ROBLOXSTUDIO 0x00631ea0
extern "C" __declspec(naked) void asm_00631ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00891b30 }
	__asm { push dword ptr [eax + 0x34] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_00658fa0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 8 }
	__asm { call fn_00891b30 }
	__asm { movss xmm1, dword ptr [eax + 0x40] }
	__asm { xorps xmm0, xmm0 }
	__asm { comiss xmm0, xmm1 }
	__asm { jae L_00631ee0 }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { comiss xmm1, xmm0 }
	__asm { jae L_00631ee0 }
	__asm { movaps xmm0, xmm1 }
	__asm { L_00631ee0: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { test byte ptr [eax], 0x40 }
	__asm { je L_00631efd }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00631efd: }
	__asm { movzx eax, byte ptr [eax + 0x44] }
	__asm { mulss xmm0, dword ptr [g_00e36260] }
	__asm { mov byte ptr [ebp + 0x10], al }
	__asm { movzx eax, byte ptr [ebp - 4] }
	__asm { mulss xmm0, dword ptr [g_010381e8] }
	__asm { mov byte ptr [ebp + 0x11], al }
	__asm { movzx eax, byte ptr [ebp - 2] }
	__asm { mov byte ptr [ebp + 0x12], al }
	__asm { cvttss2si eax, xmm0 }
	__asm { mov byte ptr [ebp + 0x13], al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e36254[];
extern "C" char g_00e36258[];
extern "C" char g_00e36260[];
extern "C" char g_011d7f18[];
extern "C" void fn_0063eec0();
extern "C" void fn_006dea40();
extern "C" void fn_00770920();
extern "C" void fn_00770990();
extern "C" void fn_00770c10();
extern "C" void fn_007cd560();
extern "C" void fn_00892db0();
// FUNCTION: ROBLOXSTUDIO 0x00631f40
extern "C" __declspec(naked) void asm_00631f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { test edi, edi }
	__asm { je L_00632068 }
	__asm { test byte ptr [ebx + 0xe8], 8 }
	__asm { je L_00631f7b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edi + 0x64] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edi + 0x68] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edi + 0x6c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00631f7b: }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_0063eec0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00632068 }
	__asm { test edi, edi }
	__asm { je L_00632068 }
	__asm { mov eax, dword ptr [edi + 0xc8] }
	__asm { test eax, eax }
	__asm { jne L_0063200f }
	__asm { mov ecx, ebx }
	__asm { call fn_00892db0 }
	__asm { movss xmm1, dword ptr [edi + 0x64] }
	__asm { mulss xmm1, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [edi + 0x6c] }
	__asm { mulss xmm0, dword ptr [eax + 8] }
	__asm { movss xmm2, dword ptr [edi + 0x68] }
	__asm { mulss xmm2, dword ptr [eax + 4] }
	__asm { comiss xmm1, xmm0 }
	__asm { movss dword ptr [ebp - 0xc], xmm1 }
	__asm { movss dword ptr [ebp - 8], xmm2 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { lea eax, [ebp - 4] }
	__asm { ja L_00631fe3 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { L_00631fe3: }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mulss xmm1, dword ptr [g_00e36260] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mulss xmm2, dword ptr [g_00e36260] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { movss dword ptr [eax], xmm1 }
	__asm { movss dword ptr [eax + 4], xmm2 }
	__asm { movss dword ptr [eax + 8], xmm1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063200f: }
	__asm { cmp eax, 3 }
	__asm { jne L_00632068 }
	__asm { mov ecx, ebx }
	__asm { call fn_00892db0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [edi + 0x68] }
	__asm { movss xmm2, dword ptr [edi + 0x6c] }
	__asm { mulss xmm0, dword ptr [edi + 0x64] }
	__asm { mulss xmm1, dword ptr [eax + 4] }
	__asm { mulss xmm2, dword ptr [eax + 8] }
	__asm { mulss xmm0, dword ptr [g_00e36254] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mulss xmm1, dword ptr [g_00e36258] }
	__asm { mulss xmm2, dword ptr [g_00e36258] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss dword ptr [eax + 4], xmm1 }
	__asm { movss dword ptr [eax + 8], xmm2 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00632068: }
	__asm { cmp byte ptr [g_011d7f18], 0 }
	__asm { je L_00632141 }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { test esi, esi }
	__asm { je L_00632141 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00770990 }
	__asm { cmp eax, 4 }
	__asm { je L_00632141 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00770c10 }
	__asm { test al, al }
	__asm { je L_006320e7 }
	__asm { mov ecx, ebx }
	__asm { call fn_00892db0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { comiss xmm0, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { ja L_006320c6 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { L_006320c6: }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { movss dword ptr [eax], xmm1 }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss dword ptr [eax + 8], xmm1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006320e7: }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00770920 }
	__asm { mov ecx, ebx }
	__asm { call fn_00892db0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { movss xmm0, dword ptr [ebp - 0xc] }
	__asm { divss xmm0, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { divss xmm0, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { divss xmm0, dword ptr [ebp - 0x10] }
	__asm { pop esi }
	__asm { movss dword ptr [eax + 8], xmm0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00632141: }
	__asm { call fn_006dea40 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov eax, edx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_010380b8[];
extern "C" char g_010380e4[];
extern "C" char g_01038120[];
// FUNCTION: ROBLOXSTUDIO 0x00632170
extern "C" __declspec(naked) void asm_00632170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov edx, ecx }
	__asm { shr edx, 3 }
	__asm { shr ecx, 9 }
	__asm { and edx, 0x3f }
	__asm { and ecx, 0x3f }
	__asm { cmp eax, 0x350 }
	__asm { je L_006321f6 }
	__asm { cmp eax, 0x210 }
	__asm { je L_006321f6 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss xmm3, dword ptr [edx*4 + 0xe35120] }
	__asm { movss xmm4, dword ptr [eax + 4] }
	__asm { addss xmm4, dword ptr [eax] }
	__asm { movss xmm2, dword ptr [ecx*4 + 0xe35120] }
	__asm { mulss xmm3, dword ptr [g_01038120] }
	__asm { mulss xmm2, dword ptr [g_01038120] }
	__asm { addss xmm4, dword ptr [eax + 8] }
	__asm { subss xmm3, dword ptr [g_010380e4] }
	__asm { subss xmm2, dword ptr [g_010380e4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mulss xmm4, dword ptr [g_010380b8] }
	__asm { mulss xmm3, xmm4 }
	__asm { mulss xmm2, xmm4 }
	__asm { movss dword ptr [eax], xmm3 }
	__asm { movss dword ptr [eax + 4], xmm2 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006321f6: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cvtsi2ss xmm0, edx }
	__asm { movss dword ptr [eax], xmm0 }
	__asm { cvtsi2ss xmm0, ecx }
	__asm { movss dword ptr [eax + 4], xmm0 }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_0121590c[];
extern "C" char g_012dc6d4[];
extern "C" char g_012dc6d8[];
extern "C" void fn_004033d0();
extern "C" void fn_00463750();
extern "C" void fn_0063b840();
extern "C" void fn_00963570();
extern "C" void fn_0097df90();
extern "C" void fn_00a00d30();
// FUNCTION: ROBLOXSTUDIO 0x00632610
extern "C" __declspec(naked) void asm_00632610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd102fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [ebx + 0x10], 0 }
	__asm { jne L_0063265b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063265b: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00463750 }
	__asm { push eax }
	__asm { call fn_0063b840 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_006326b8 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 2 }
	__asm { mov eax, dword ptr [g_012dc6d4] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012dc6d8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ecx, dword ptr [g_012dc6d8] }
	__asm { test ecx, ecx }
	__asm { je L_006327bf }
	__asm { add ecx, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006326b8: }
	__asm { fld dword ptr [g_0121590c] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { push 1 }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { fstp dword ptr [esp] }
	__asm { push ebx }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00a00d30 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00963570 }
	__asm { add esp, 8 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00632717 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00632716 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00632716 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00632716: }
	__asm { pop edi }
	__asm { L_00632717: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { sub ecx, 0 }
	__asm { je L_0063276d }
	__asm { dec ecx }
	__asm { je L_00632749 }
	__asm { sub eax, 0 }
	__asm { je L_00632739 }
	__asm { sub eax, 2 }
	__asm { jne L_00632784 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax], 2 }
	__asm { jmp L_00632784 }
	__asm { L_00632739: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [eax], 1 }
	__asm { jne L_00632784 }
	__asm { mov dword ptr [eax], 0 }
	__asm { jmp L_00632784 }
	__asm { L_00632749: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { jmp L_006327ac }
	__asm { L_0063276d: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [ecx], 1 }
	__asm { jne L_0063277b }
	__asm { mov dword ptr [ecx], 0 }
	__asm { L_0063277b: }
	__asm { push ebx }
	__asm { add ecx, 4 }
	__asm { call fn_0097df90 }
	__asm { L_00632784: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [g_012dc6d4] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012dc6d8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ecx, dword ptr [g_012dc6d8] }
	__asm { test ecx, ecx }
	__asm { je L_006327ac }
	__asm { mov edx, 1 }
	__asm { add ecx, 4 }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { L_006327ac: }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_004033d0 }
	__asm { L_006327bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dce00[];
extern "C" char g_012dce04[];
extern "C" char g_012dce08[];
extern "C" char g_012dce0c[];
extern "C" char g_012dce10[];
extern "C" char g_012dce14[];
extern "C" char g_012dce18[];
extern "C" char g_012dce1c[];
extern "C" char g_012dce20[];
extern "C" char g_012dce24[];
extern "C" char g_012dce28[];
extern "C" char g_012dce2c[];
extern "C" char g_012dce30[];
extern "C" char g_012dce34[];
extern "C" char g_012dce38[];
extern "C" char g_012dce3c[];
extern "C" char g_012dce48[];
extern "C" char g_012dce4c[];
extern "C" void fn_007cb250();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x0063b190
extern "C" __declspec(naked) void asm_0063b190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd103de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dce1c] }
	__asm { test al, 1 }
	__asm { jne L_0063b1d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce1c], eax }
	__asm { push 0xe9a630 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce18], eax }
	__asm { L_0063b1d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd103fe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dce2c] }
	__asm { test al, 1 }
	__asm { jne L_0063b222 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce2c], eax }
	__asm { push 0xe9b1bc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce28], eax }
	__asm { L_0063b222: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd104be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dce3c] }
	__asm { test al, 1 }
	__asm { jne L_0063b272 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce3c], eax }
	__asm { push 0xe9b9d8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce38], eax }
	__asm { L_0063b272: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd437de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dce34] }
	__asm { test al, 1 }
	__asm { jne L_0063b2c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce34], eax }
	__asm { push 0xe9b7fc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce30], eax }
	__asm { L_0063b2c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd104de }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dce0c] }
	__asm { test al, 1 }
	__asm { jne L_0063b312 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce0c], eax }
	__asm { push 0xe9a620 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce08], eax }
	__asm { L_0063b312: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1041e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dce14] }
	__asm { test al, 1 }
	__asm { jne L_0063b362 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce14], eax }
	__asm { push 0xe9a624 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce10], eax }
	__asm { L_0063b362: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1043e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dce04] }
	__asm { test al, 1 }
	__asm { jne L_0063b3b2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce04], eax }
	__asm { push 0xe9a62c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce00], eax }
	__asm { L_0063b3b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1045e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dce24] }
	__asm { test al, 1 }
	__asm { jne L_0063b402 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce24], eax }
	__asm { push 0xe9a618 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dce20], eax }
	__asm { L_0063b402: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1047e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dce4c] }
	__asm { test al, 1 }
	__asm { jne L_0063b44a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce4c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_012dce48], eax }
	__asm { L_0063b44a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dce48[];
extern "C" char g_012dce4c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00408d90();
extern "C" void fn_004115f0();
extern "C" void fn_0057dce0();
extern "C" void fn_0063b650();
extern "C" void fn_0063bcf0();
extern "C" void fn_0063c070();
extern "C" void fn_006b9740();
extern "C" void fn_007b5ac0();
extern "C" void fn_007cb440();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x0063b6f0
extern "C" __declspec(naked) void asm_0063b6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd104a6 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { call fn_0063c070 }
	__asm { test eax, eax }
	__asm { jne L_0063b82d }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_0063b650 }
	__asm { add esp, 4 }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007b5ac0 }
	__asm { push 0x63b410 }
	__asm { push 0x12dce40 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dce4c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0063b774 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce4c], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0089c670 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [g_012dce48], ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_0063b77a }
	__asm { L_0063b774: }
	__asm { mov ecx, dword ptr [g_012dce48] }
	__asm { L_0063b77a: }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx + 0x64] }
	__asm { lea ecx, [eax + ecx*8] }
	__asm { call fn_0057dce0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063b7f5 }
	__asm { call fn_0063bcf0 }
	__asm { mov esi, eax }
	__asm { call fn_007cb440 }
	__asm { cmp esi, eax }
	__asm { je L_0063b7f5 }
	__asm { call fn_0063bcf0 }
	__asm { mov esi, dword ptr [ebx + 0x70] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x70] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00408d90 }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_0063b7f5 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063b7e0 }
	__asm { push 0x69 }
	__asm { push 0xe35f88 }
	__asm { push 0x1003e40 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063b7f5 }
	__asm { L_0063b7e0: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe35fd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063b7f5: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0063b829 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0063b829 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [esi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_0063b829 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0063b829: }
	__asm { pop esi }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { L_0063b82d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dce48[];
extern "C" char g_012dce4c[];
extern "C" void fn_004115f0();
extern "C" void fn_00418a50();
extern "C" void fn_0041ffd0();
extern "C" void fn_0063bcf0();
extern "C" void fn_00640c10();
extern "C" void fn_0089c470();
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x0063c070
extern "C" __declspec(naked) void asm_0063c070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1050e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 0x63b410 }
	__asm { push 0x12dce40 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_012dce4c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0063c0d3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dce4c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [g_012dce48], esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_0063c0d9 }
	__asm { L_0063c0d3: }
	__asm { mov esi, dword ptr [g_012dce48] }
	__asm { L_0063c0d9: }
	__asm { mov eax, dword ptr [ebx + 0x68] }
	__asm { lea edi, [ebx + 0x64] }
	__asm { mov ecx, eax }
	__asm { mov ebx, dword ptr [edi] }
	__asm { sub ecx, ebx }
	__asm { sar ecx, 3 }
	__asm { lea edx, [esi + 1] }
	__asm { cmp edx, ecx }
	__asm { jbe L_0063c124 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp ecx, edx }
	__asm { jae L_0063c11b }
	__asm { lea ebx, [ebp - 0x24] }
	__asm { push ebx }
	__asm { sub edx, ecx }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0041ffd0 }
	__asm { L_0063c11b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jmp L_0063c12f }
	__asm { L_0063c124: }
	__asm { mov eax, dword ptr [ebx + esi*8] }
	__asm { test eax, eax }
	__asm { jne L_0063c1af }
	__asm { L_0063c12f: }
	__asm { call fn_00640c10 }
	__asm { test al, al }
	__asm { je L_0063c14b }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0063c14b: }
	__asm { call fn_0063bcf0 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_0089c470 }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test ebx, ebx }
	__asm { je L_0063c179 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [eax + esi*8] }
	__asm { call fn_00418a50 }
	__asm { L_0063c179: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0063c1ad }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0063c1ad }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_0063c1ad }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0063c1ad: }
	__asm { mov eax, ebx }
	__asm { L_0063c1af: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc878[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_0063bb10();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063c660
extern "C" __declspec(naked) void asm_0063c660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe3523c }
	__asm { call fn_0063bb10 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_0063c801 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0063c6ed }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063c6ed: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_0063c74b }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063c74b: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0063c776 }
	__asm { L_0063c756: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0063c760 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0063c764 }
	__asm { L_0063c760: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0063c764: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0063c756 }
	__asm { cmp ecx, edx }
	__asm { je L_0063c776 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0063c779 }
	__asm { L_0063c776: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_0063c779: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_0063c7b6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063c7a1 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063c7b6 }
	__asm { L_0063c7a1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063c7b6: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063c801 }
	__asm { cmp dword ptr [g_012dc878], 0x29a }
	__asm { jne L_0063c801 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063c7ec }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063c801 }
	__asm { L_0063c7ec: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063c801: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0063c851 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063c851: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012dc878], 0x29a }
	__asm { je L_0063c9db }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0063c8cc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063c8cc: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_0063c924 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063c924: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0063c950 }
	__asm { nop }
	__asm { L_0063c930: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0063c93a }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0063c93e }
	__asm { L_0063c93a: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0063c93e: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0063c930 }
	__asm { cmp ecx, edx }
	__asm { je L_0063c950 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0063c953 }
	__asm { L_0063c950: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_0063c953: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_0063c990 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063c97b }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063c990 }
	__asm { L_0063c97b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063c990: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063c9db }
	__asm { cmp dword ptr [g_012dc878], 0x29a }
	__asm { je L_0063c9db }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063c9c6 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063c9db }
	__asm { L_0063c9c6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063c9db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc888[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_0063bbb0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063c9f0
extern "C" __declspec(naked) void asm_0063c9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe3524c }
	__asm { call fn_0063bbb0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_0063cb91 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0063ca7d }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063ca7d: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_0063cadb }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063cadb: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0063cb06 }
	__asm { L_0063cae6: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0063caf0 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0063caf4 }
	__asm { L_0063caf0: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0063caf4: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0063cae6 }
	__asm { cmp ecx, edx }
	__asm { je L_0063cb06 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0063cb09 }
	__asm { L_0063cb06: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_0063cb09: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_0063cb46 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063cb31 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063cb46 }
	__asm { L_0063cb31: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063cb46: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063cb91 }
	__asm { cmp dword ptr [g_012dc888], 0x29a }
	__asm { jne L_0063cb91 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063cb7c }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063cb91 }
	__asm { L_0063cb7c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063cb91: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0063cbe1 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063cbe1: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012dc888], 0x29a }
	__asm { je L_0063cd6b }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0063cc5c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063cc5c: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_0063ccb4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063ccb4: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0063cce0 }
	__asm { nop }
	__asm { L_0063ccc0: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0063ccca }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0063ccce }
	__asm { L_0063ccca: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0063ccce: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0063ccc0 }
	__asm { cmp ecx, edx }
	__asm { je L_0063cce0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0063cce3 }
	__asm { L_0063cce0: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_0063cce3: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_0063cd20 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063cd0b }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063cd20 }
	__asm { L_0063cd0b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063cd20: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063cd6b }
	__asm { cmp dword ptr [g_012dc888], 0x29a }
	__asm { je L_0063cd6b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063cd56 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063cd6b }
	__asm { L_0063cd56: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063cd6b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc890[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_0063bc50();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063cd80
extern "C" __declspec(naked) void asm_0063cd80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe35254 }
	__asm { call fn_0063bc50 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_0063cf21 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0063ce0d }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063ce0d: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_0063ce6b }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063ce6b: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0063ce96 }
	__asm { L_0063ce76: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0063ce80 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0063ce84 }
	__asm { L_0063ce80: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0063ce84: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0063ce76 }
	__asm { cmp ecx, edx }
	__asm { je L_0063ce96 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0063ce99 }
	__asm { L_0063ce96: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_0063ce99: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_0063ced6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063cec1 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063ced6 }
	__asm { L_0063cec1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063ced6: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063cf21 }
	__asm { cmp dword ptr [g_012dc890], 0x29a }
	__asm { jne L_0063cf21 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063cf0c }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063cf21 }
	__asm { L_0063cf0c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063cf21: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0063cf71 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063cf71: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012dc890], 0x29a }
	__asm { je L_0063d0fb }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0063cfec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063cfec: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_0063d044 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063d044: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0063d070 }
	__asm { nop }
	__asm { L_0063d050: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0063d05a }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0063d05e }
	__asm { L_0063d05a: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0063d05e: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0063d050 }
	__asm { cmp ecx, edx }
	__asm { je L_0063d070 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0063d073 }
	__asm { L_0063d070: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_0063d073: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_0063d0b0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063d09b }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063d0b0 }
	__asm { L_0063d09b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063d0b0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063d0fb }
	__asm { cmp dword ptr [g_012dc890], 0x29a }
	__asm { je L_0063d0fb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063d0e6 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063d0fb }
	__asm { L_0063d0e6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063d0fb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc868[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_0063bd90();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063d110
extern "C" __declspec(naked) void asm_0063d110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe3522c }
	__asm { call fn_0063bd90 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_0063d2b1 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0063d19d }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063d19d: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_0063d1fb }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063d1fb: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0063d226 }
	__asm { L_0063d206: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0063d210 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0063d214 }
	__asm { L_0063d210: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0063d214: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0063d206 }
	__asm { cmp ecx, edx }
	__asm { je L_0063d226 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0063d229 }
	__asm { L_0063d226: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_0063d229: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_0063d266 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063d251 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063d266 }
	__asm { L_0063d251: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063d266: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063d2b1 }
	__asm { cmp dword ptr [g_012dc868], 0x29a }
	__asm { jne L_0063d2b1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063d29c }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063d2b1 }
	__asm { L_0063d29c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063d2b1: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0063d301 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063d301: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012dc868], 0x29a }
	__asm { je L_0063d48b }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0063d37c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063d37c: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_0063d3d4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063d3d4: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0063d400 }
	__asm { nop }
	__asm { L_0063d3e0: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0063d3ea }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0063d3ee }
	__asm { L_0063d3ea: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0063d3ee: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0063d3e0 }
	__asm { cmp ecx, edx }
	__asm { je L_0063d400 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0063d403 }
	__asm { L_0063d400: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_0063d403: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_0063d440 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063d42b }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063d440 }
	__asm { L_0063d42b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063d440: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063d48b }
	__asm { cmp dword ptr [g_012dc868], 0x29a }
	__asm { je L_0063d48b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063d476 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063d48b }
	__asm { L_0063d476: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063d48b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc870[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_0063be30();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063d4a0
extern "C" __declspec(naked) void asm_0063d4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe35234 }
	__asm { call fn_0063be30 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_0063d641 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0063d52d }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063d52d: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_0063d58b }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063d58b: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0063d5b6 }
	__asm { L_0063d596: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0063d5a0 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0063d5a4 }
	__asm { L_0063d5a0: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0063d5a4: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0063d596 }
	__asm { cmp ecx, edx }
	__asm { je L_0063d5b6 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0063d5b9 }
	__asm { L_0063d5b6: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_0063d5b9: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_0063d5f6 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063d5e1 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063d5f6 }
	__asm { L_0063d5e1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063d5f6: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063d641 }
	__asm { cmp dword ptr [g_012dc870], 0x29a }
	__asm { jne L_0063d641 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063d62c }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063d641 }
	__asm { L_0063d62c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063d641: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0063d691 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063d691: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012dc870], 0x29a }
	__asm { je L_0063d81b }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0063d70c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063d70c: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_0063d764 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063d764: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0063d790 }
	__asm { nop }
	__asm { L_0063d770: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0063d77a }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0063d77e }
	__asm { L_0063d77a: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0063d77e: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0063d770 }
	__asm { cmp ecx, edx }
	__asm { je L_0063d790 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0063d793 }
	__asm { L_0063d790: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_0063d793: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_0063d7d0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063d7bb }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063d7d0 }
	__asm { L_0063d7bb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063d7d0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063d81b }
	__asm { cmp dword ptr [g_012dc870], 0x29a }
	__asm { je L_0063d81b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063d806 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063d81b }
	__asm { L_0063d806: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063d81b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc860[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_0063bed0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063d830
extern "C" __declspec(naked) void asm_0063d830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe35224 }
	__asm { call fn_0063bed0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_0063d9d1 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0063d8bd }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063d8bd: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_0063d91b }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063d91b: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0063d946 }
	__asm { L_0063d926: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0063d930 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0063d934 }
	__asm { L_0063d930: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0063d934: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0063d926 }
	__asm { cmp ecx, edx }
	__asm { je L_0063d946 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0063d949 }
	__asm { L_0063d946: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_0063d949: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_0063d986 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063d971 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063d986 }
	__asm { L_0063d971: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063d986: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063d9d1 }
	__asm { cmp dword ptr [g_012dc860], 0x29a }
	__asm { jne L_0063d9d1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063d9bc }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063d9d1 }
	__asm { L_0063d9bc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063d9d1: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0063da21 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063da21: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012dc860], 0x29a }
	__asm { je L_0063dbab }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0063da9c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063da9c: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_0063daf4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063daf4: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0063db20 }
	__asm { nop }
	__asm { L_0063db00: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0063db0a }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0063db0e }
	__asm { L_0063db0a: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0063db0e: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0063db00 }
	__asm { cmp ecx, edx }
	__asm { je L_0063db20 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0063db23 }
	__asm { L_0063db20: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_0063db23: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_0063db60 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063db4b }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063db60 }
	__asm { L_0063db4b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063db60: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063dbab }
	__asm { cmp dword ptr [g_012dc860], 0x29a }
	__asm { je L_0063dbab }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063db96 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063dbab }
	__asm { L_0063db96: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063dbab: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc880[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_0063bf70();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063dbc0
extern "C" __declspec(naked) void asm_0063dbc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd22dc6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe35244 }
	__asm { call fn_0063bf70 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { je L_0063dd61 }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0063dc4d }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063dc4d: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test cl, 1 }
	__asm { jne L_0063dcab }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063dcab: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0063dcd6 }
	__asm { L_0063dcb6: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0063dcc0 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0063dcc4 }
	__asm { L_0063dcc0: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0063dcc4: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0063dcb6 }
	__asm { cmp ecx, edx }
	__asm { je L_0063dcd6 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0063dcd9 }
	__asm { L_0063dcd6: }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { L_0063dcd9: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_0063dd16 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063dd01 }
	__asm { push 0xf1 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063dd16 }
	__asm { L_0063dd01: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32f48 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063dd16: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063dd61 }
	__asm { cmp dword ptr [g_012dc880], 0x29a }
	__asm { jne L_0063dd61 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063dd4c }
	__asm { push 0xf2 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13dd0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063dd61 }
	__asm { L_0063dd4c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32fd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063dd61: }
	__asm { mov ecx, dword ptr [g_0131a2a4] }
	__asm { test cl, 1 }
	__asm { jne L_0063ddb1 }
	__asm { or dword ptr [g_0131a2a4], 1 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063ddb1: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { mov dword ptr [eax], ebx }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_012dc880], 0x29a }
	__asm { je L_0063df3b }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0063de2c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063de2c: }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { mov esi, edx }
	__asm { test al, 1 }
	__asm { jne L_0063de84 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { mov edx, dword ptr [g_0131a2a8] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063de84: }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, edx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0063deb0 }
	__asm { nop }
	__asm { L_0063de90: }
	__asm { cmp dword ptr [eax + 0x10], edi }
	__asm { jae L_0063de9a }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { jmp L_0063de9e }
	__asm { L_0063de9a: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0063de9e: }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_0063de90 }
	__asm { cmp ecx, edx }
	__asm { je L_0063deb0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp edi, dword ptr [ecx + 0x10] }
	__asm { jae L_0063deb3 }
	__asm { L_0063deb0: }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_0063deb3: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { cmp dword ptr [eax], esi }
	__asm { jne L_0063def0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063dedb }
	__asm { push 0xf7 }
	__asm { push 0xe32e0c }
	__asm { push 0xf13d1c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063def0 }
	__asm { L_0063dedb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33038 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063def0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063df3b }
	__asm { cmp dword ptr [g_012dc880], 0x29a }
	__asm { je L_0063df3b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063df26 }
	__asm { push 0xf8 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063df3b }
	__asm { L_0063df26: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe330c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063df3b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc878[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0063b480();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0063ef40
extern "C" __declspec(naked) void asm_0063ef40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0063efaf }
	__asm { cmp dword ptr [g_012dc878], 0x29a }
	__asm { je L_0063efaf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0063ef9e }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063efaf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0063ef9e: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063efaf: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_0063b480 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_0063efc8 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0063efca }
	__asm { L_0063efc8: }
	__asm { xor eax, eax }
	__asm { L_0063efca: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_0063f03b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0063f026 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_0063f026 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0063f026: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0063f03b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dc888[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0063b520();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0063f050
extern "C" __declspec(naked) void asm_0063f050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0063f0bf }
	__asm { cmp dword ptr [g_012dc888], 0x29a }
	__asm { je L_0063f0bf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0063f0ae }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063f0bf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0063f0ae: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063f0bf: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_0063b520 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_0063f0d8 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0063f0da }
	__asm { L_0063f0d8: }
	__asm { xor eax, eax }
	__asm { L_0063f0da: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_0063f14b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0063f136 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_0063f136 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0063f136: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0063f14b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dc890[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0063b5b0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0063f160
extern "C" __declspec(naked) void asm_0063f160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0063f1cf }
	__asm { cmp dword ptr [g_012dc890], 0x29a }
	__asm { je L_0063f1cf }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0063f1be }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063f1cf }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0063f1be: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063f1cf: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_0063b5b0 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_0063f1e8 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0063f1ea }
	__asm { L_0063f1e8: }
	__asm { xor eax, eax }
	__asm { L_0063f1ea: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_0063f25b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0063f246 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_0063f246 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0063f246: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0063f25b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dc868[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0063b8a0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0063f270
extern "C" __declspec(naked) void asm_0063f270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0063f2df }
	__asm { cmp dword ptr [g_012dc868], 0x29a }
	__asm { je L_0063f2df }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0063f2ce }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063f2df }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0063f2ce: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063f2df: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_0063b8a0 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_0063f2f8 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0063f2fa }
	__asm { L_0063f2f8: }
	__asm { xor eax, eax }
	__asm { L_0063f2fa: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_0063f36b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0063f356 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_0063f356 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0063f356: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0063f36b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dc870[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0063b940();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0063f380
extern "C" __declspec(naked) void asm_0063f380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0063f3ef }
	__asm { cmp dword ptr [g_012dc870], 0x29a }
	__asm { je L_0063f3ef }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0063f3de }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063f3ef }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0063f3de: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063f3ef: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_0063b940 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_0063f408 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0063f40a }
	__asm { L_0063f408: }
	__asm { xor eax, eax }
	__asm { L_0063f40a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_0063f47b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0063f466 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_0063f466 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0063f466: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0063f47b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dc860[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0063b9e0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0063f490
extern "C" __declspec(naked) void asm_0063f490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0063f4ff }
	__asm { cmp dword ptr [g_012dc860], 0x29a }
	__asm { je L_0063f4ff }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0063f4ee }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063f4ff }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0063f4ee: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063f4ff: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_0063b9e0 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_0063f518 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0063f51a }
	__asm { L_0063f518: }
	__asm { xor eax, eax }
	__asm { L_0063f51a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_0063f58b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0063f576 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_0063f576 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0063f576: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0063f58b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dc880[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0063ba80();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0063f5a0
extern "C" __declspec(naked) void asm_0063f5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0063f60f }
	__asm { cmp dword ptr [g_012dc880], 0x29a }
	__asm { je L_0063f60f }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0063f5fe }
	__asm { push 0xe4 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063f60f }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0063f5fe: }
	__asm { movzx eax, al }
	__asm { push 0xe32e50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063f60f: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_0063ba80 }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_0063f628 }
	__asm { add eax, 0x18 }
	__asm { jmp L_0063f62a }
	__asm { L_0063f628: }
	__asm { xor eax, eax }
	__asm { L_0063f62a: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_0063f69b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0063f686 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_0063f686 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0063f686: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0063f69b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_006d1e60();
extern "C" void fn_006d2c10();
extern "C" void fn_006e24f0();
// FUNCTION: ROBLOXSTUDIO 0x00641380
extern "C" __declspec(naked) void asm_00641380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x58 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { call fn_006e24f0 }
	__asm { mov ecx, eax }
	__asm { call fn_006d2c10 }
	__asm { lea esi, [ebx + 0x8c] }
	__asm { mov ecx, 0x10 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { rep movsd }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_006d1e60 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { movss dword ptr [esi + 0x40], xmm0 }
	__asm { movss dword ptr [esi + 0x44], xmm1 }
	__asm { movss dword ptr [esi + 0x48], xmm2 }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { call fn_006d1e60 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss dword ptr [esi + 0x50], xmm0 }
	__asm { movss dword ptr [esi + 0x54], xmm1 }
	__asm { movss dword ptr [esi + 0x58], xmm2 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { movss xmm0, dword ptr [ebx] }
	__asm { movss xmm1, dword ptr [ebx + 4] }
	__asm { movss xmm2, dword ptr [ebx + 8] }
	__asm { pop edi }
	__asm { movss dword ptr [esi + 0x60], xmm0 }
	__asm { movss dword ptr [esi + 0x64], xmm1 }
	__asm { movss dword ptr [esi + 0x68], xmm2 }
	__asm { mov dword ptr [esi + 0x6c], 0x3f800000 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00641670
extern "C" __declspec(naked) void asm_00641670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00641693 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00641693: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10398[];
extern "C" char g_00e103b0[];
extern "C" char g_00e103d4[];
extern "C" char g_00e10528[];
extern "C" void fn_004038a0();
extern "C" void fn_006426a0();
extern "C" void fn_00642b90();
extern "C" void fn_00643210();
extern "C" void fn_006ed7f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006416b0
extern "C" __declspec(naked) void asm_006416b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10628 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x70 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0x40 }
	__asm { lea eax, [ebp - 0x7c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e103b0] }
	__asm { push 0 }
	__asm { push 0xf12f2d }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_004038a0 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { push 8 }
	__asm { push dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x7c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006ed7f0 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00641744 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00641744: }
	__asm { cmp edi, 9 }
	__asm { jne L_00641772 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp + 0xc], 0xe36d9c }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x24], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00641772: }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push 0 }
	__asm { add ecx, esi }
	__asm { call dword ptr [g_00e10398] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { call dword ptr [g_00e103d4] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { cmp edi, 0xa }
	__asm { jne L_006417dc }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_006426a0 }
	__asm { add esp, 0x10 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006417dc: }
	__asm { cmp edi, 0xb }
	__asm { jne L_00641800 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00642b90 }
	__asm { add esp, 0x10 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00641800: }
	__asm { push edi }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00643210 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x14 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00642290
extern "C" __declspec(naked) void asm_00642290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dl, byte ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov cl, dl }
	__asm { and cl, 0xf }
	__asm { mov al, cl }
	__asm { shl al, 4 }
	__asm { or al, cl }
	__asm { mov byte ptr [edi + 3], al }
	__asm { and dl, 0xf0 }
	__asm { mov al, dl }
	__asm { shr al, 4 }
	__asm { or al, dl }
	__asm { mov byte ptr [edi + 7], al }
	__asm { mov dl, byte ptr [esi + 1] }
	__asm { mov cl, dl }
	__asm { and cl, 0xf }
	__asm { mov al, cl }
	__asm { shl al, 4 }
	__asm { or al, cl }
	__asm { mov byte ptr [edi + 0xb], al }
	__asm { and dl, 0xf0 }
	__asm { mov al, dl }
	__asm { shr al, 4 }
	__asm { or al, dl }
	__asm { mov byte ptr [edi + 0xf], al }
	__asm { mov dl, byte ptr [esi + 2] }
	__asm { mov cl, dl }
	__asm { and cl, 0xf }
	__asm { mov al, cl }
	__asm { shl al, 4 }
	__asm { or al, cl }
	__asm { mov byte ptr [edi + 0x13], al }
	__asm { and dl, 0xf0 }
	__asm { mov al, dl }
	__asm { shr al, 4 }
	__asm { or al, dl }
	__asm { mov byte ptr [edi + 0x17], al }
	__asm { mov dl, byte ptr [esi + 3] }
	__asm { mov cl, dl }
	__asm { and cl, 0xf }
	__asm { mov al, cl }
	__asm { shl al, 4 }
	__asm { or al, cl }
	__asm { mov byte ptr [edi + 0x1b], al }
	__asm { and dl, 0xf0 }
	__asm { mov al, dl }
	__asm { shr al, 4 }
	__asm { or al, dl }
	__asm { mov byte ptr [edi + 0x1f], al }
	__asm { mov dl, byte ptr [esi + 4] }
	__asm { mov cl, dl }
	__asm { and cl, 0xf }
	__asm { mov al, cl }
	__asm { shl al, 4 }
	__asm { or al, cl }
	__asm { mov byte ptr [edi + 0x23], al }
	__asm { and dl, 0xf0 }
	__asm { mov al, dl }
	__asm { shr al, 4 }
	__asm { or al, dl }
	__asm { mov byte ptr [edi + 0x27], al }
	__asm { mov dl, byte ptr [esi + 5] }
	__asm { mov cl, dl }
	__asm { and cl, 0xf }
	__asm { mov al, cl }
	__asm { shl al, 4 }
	__asm { or al, cl }
	__asm { and dl, 0xf0 }
	__asm { mov byte ptr [edi + 0x2b], al }
	__asm { mov al, dl }
	__asm { shr al, 4 }
	__asm { or al, dl }
	__asm { mov byte ptr [edi + 0x2f], al }
	__asm { mov dl, byte ptr [esi + 6] }
	__asm { mov cl, dl }
	__asm { and cl, 0xf }
	__asm { and dl, 0xf0 }
	__asm { mov al, cl }
	__asm { shl al, 4 }
	__asm { or al, cl }
	__asm { mov byte ptr [edi + 0x33], al }
	__asm { mov al, dl }
	__asm { shr al, 4 }
	__asm { or al, dl }
	__asm { mov byte ptr [edi + 0x37], al }
	__asm { mov dl, byte ptr [esi + 7] }
	__asm { mov cl, dl }
	__asm { and cl, 0xf }
	__asm { mov al, cl }
	__asm { shl al, 4 }
	__asm { or al, cl }
	__asm { mov byte ptr [edi + 0x3b], al }
	__asm { and dl, 0xf0 }
	__asm { mov al, dl }
	__asm { shr al, 4 }
	__asm { or al, dl }
	__asm { mov byte ptr [edi + 0x3f], al }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10384[];
extern "C" char g_00e103b0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006106b0();
extern "C" void fn_006106e0();
extern "C" void fn_00610820();
extern "C" void fn_00641820();
extern "C" void fn_006419d0();
extern "C" void fn_00641d60();
extern "C" void fn_00641e20();
extern "C" void fn_00641e70();
extern "C" void fn_00641ea0();
extern "C" void fn_00641f30();
extern "C" void fn_00642660();
extern "C" void fn_006434e0();
extern "C" void fn_006b9740();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006426a0
extern "C" __declspec(naked) void asm_006426a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10686 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xcc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 4 }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 0x58], 0 }
	__asm { call dword ptr [g_00e103b0] }
	__asm { cmp dword ptr [ebx + 8], 4 }
	__asm { jne L_00642b23 }
	__asm { cmp dword ptr [ebx + 0xc], 0 }
	__asm { jne L_00642b23 }
	__asm { push 0 }
	__asm { push 0x7c }
	__asm { lea eax, [ebp - 0xd8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e103b0] }
	__asm { cmp dword ptr [ebx + 8], 0x7c }
	__asm { jne L_00642b02 }
	__asm { cmp dword ptr [ebx + 0xc], 0 }
	__asm { jne L_00642b02 }
	__asm { cmp dword ptr [ebp - 0x54], 0x20534444 }
	__asm { je L_0064273e }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xe36730 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_0064273e: }
	__asm { cmp dword ptr [ebp - 0xcc], 0 }
	__asm { je L_00642ae3 }
	__asm { cmp dword ptr [ebp - 0xd0], 0 }
	__asm { je L_00642ae3 }
	__asm { lea eax, [ebp - 0xd8] }
	__asm { push eax }
	__asm { call fn_00641ea0 }
	__asm { mov edi, eax }
	__asm { lea eax, [ebp - 0xd8] }
	__asm { push eax }
	__asm { call fn_00641f30 }
	__asm { mov ebx, eax }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x3c], ebx }
	__asm { call fn_006106b0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { je L_00642792 }
	__asm { mov dword ptr [ebp - 0x18], 3 }
	__asm { test al, 1 }
	__asm { jne L_00642795 }
	__asm { L_00642792: }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { L_00642795: }
	__asm { mov ebx, dword ptr [ebp - 0xc0] }
	__asm { mov edx, 1 }
	__asm { cmp edi, 2 }
	__asm { mov ecx, edx }
	__asm { mov esi, 6 }
	__asm { cmove ecx, esi }
	__asm { cmp edi, edx }
	__asm { mov esi, edx }
	__asm { cmove esi, dword ptr [ebp - 0xc4] }
	__asm { test ebx, ebx }
	__asm { cmove ebx, edx }
	__asm { mov edx, dword ptr [ebp - 0xd0] }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xcc] }
	__asm { mov dword ptr [ebp - 0x40], esi }
	__asm { mov dword ptr [ebp - 0x48], ebx }
	__asm { test al, 2 }
	__asm { je L_00642813 }
	__asm { mov eax, ecx }
	__asm { neg eax }
	__asm { and eax, ecx }
	__asm { cmp eax, ecx }
	__asm { jne L_006427f4 }
	__asm { mov eax, edx }
	__asm { neg eax }
	__asm { and eax, edx }
	__asm { cmp eax, edx }
	__asm { jne L_006427f4 }
	__asm { mov eax, esi }
	__asm { neg eax }
	__asm { and eax, esi }
	__asm { cmp eax, esi }
	__asm { je L_00642813 }
	__asm { L_006427f4: }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xe36770 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00642813: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edx }
	__asm { push ecx }
	__asm { call fn_00641e70 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { cmp eax, ebx }
	__asm { jb L_00642849 }
	__asm { push ebx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xe367ac }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00642849: }
	__asm { push 0x28 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x44], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006428a5 }
	__asm { mov ecx, ebx }
	__asm { mov ebx, dword ptr [ebp - 0x34] }
	__asm { sub ecx, ebx }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00610820 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 0xd0] }
	__asm { call fn_00610820 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 0xcc] }
	__asm { call fn_00610820 }
	__asm { add esp, 8 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { push edi }
	__asm { call fn_006419d0 }
	__asm { jmp L_006428a7 }
	__asm { L_006428a5: }
	__asm { xor eax, eax }
	__asm { L_006428a7: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006434e0 }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x28], ecx }
	__asm { cmp dword ptr [ebp - 0x2c], ecx }
	__asm { jbe L_00642a5d }
	__asm { mov eax, dword ptr [ebp - 0x48] }
	__asm { mov edx, dword ptr [ebp - 0x2c] }
	__asm { nop }
	__asm { L_006428d0: }
	__asm { xor ebx, ebx }
	__asm { test eax, eax }
	__asm { je L_00642a51 }
	__asm { mov esi, dword ptr [ebp - 0x34] }
	__asm { neg esi }
	__asm { mov dword ptr [ebp - 0x38], esi }
	__asm { L_006428e2: }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 0xcc] }
	__asm { call fn_00610820 }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 0xd0] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x30], edi }
	__asm { call fn_00610820 }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_00610820 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { call fn_006106e0 }
	__asm { mov edi, eax }
	__asm { imul edi, dword ptr [ebp - 0x10] }
	__asm { add esp, 0x24 }
	__asm { cmp ebx, dword ptr [ebp - 0x34] }
	__asm { jae L_0064293b }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10384] }
	__asm { jmp L_00642a39 }
	__asm { L_0064293b: }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00641d60 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x44], esi }
	__asm { push edi }
	__asm { cmp eax, dword ptr [ebp - 0x3c] }
	__asm { jne L_006429e3 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00641e20 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp - 0x18], 3 }
	__asm { jne L_00642a39 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_006429b9 }
	__asm { cmp dword ptr [ebp - 0x84], 0x20 }
	__asm { je L_006429b9 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006429a8 }
	__asm { push 0x229 }
	__asm { push 0xe36690 }
	__asm { push 0xe367ec }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006429b9 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006429a8: }
	__asm { movzx eax, al }
	__asm { push 0xe36810 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006429b9: }
	__asm { cmp dword ptr [ebp - 0x78], 0xff }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { sete cl }
	__asm { shr eax, 2 }
	__asm { and al, 1 }
	__asm { cmp cl, al }
	__asm { je L_00642a39 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { push esi }
	__asm { call fn_00642660 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00642a39 }
	__asm { L_006429e3: }
	__asm { call fn_00cf64a0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x5c], esi }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00641e20 }
	__asm { push dword ptr [ebp - 0x3c] }
	__asm { mov edi, dword ptr [ebp - 0x44] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00641820 }
	__asm { add esp, 0x28 }
	__asm { test byte ptr [ebp + 0x14], 4 }
	__asm { je L_00642a2c }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { push edi }
	__asm { call fn_00642660 }
	__asm { add esp, 0x10 }
	__asm { L_00642a2c: }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00642a39: }
	__asm { inc dword ptr [ebp - 0x38] }
	__asm { mov eax, dword ptr [ebp - 0x48] }
	__asm { mov esi, dword ptr [ebp - 0x38] }
	__asm { inc ebx }
	__asm { cmp ebx, eax }
	__asm { jb L_006428e2 }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { mov edx, dword ptr [ebp - 0x2c] }
	__asm { L_00642a51: }
	__asm { inc ecx }
	__asm { mov dword ptr [ebp - 0x28], ecx }
	__asm { cmp ecx, edx }
	__asm { jb L_006428d0 }
	__asm { L_00642a5d: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp - 0x4c] }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov ecx, dword ptr [ebp - 0xcc] }
	__asm { mov edx, dword ptr [ebp - 0xd0] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov byte ptr [ebp - 0x1c], 1 }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { test esi, esi }
	__asm { je L_00642a8f }
	__asm { lea eax, [esi + 4] }
	__asm { mov esi, 1 }
	__asm { lock xadd dword ptr [eax], esi }
	__asm { inc esi }
	__asm { mov esi, dword ptr [ebp - 0x4c] }
	__asm { L_00642a8f: }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [edi + 0xc], edx }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [ebp - 0x58], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00642ad0 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00642ad0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00642ad0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00642ad0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00642ae3: }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xe36744 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00642b02: }
	__asm { push 0x7c }
	__asm { L_00642b04: }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xe36588 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00642b23: }
	__asm { push 4 }
	__asm { jmp L_00642b04 }
}

extern "C" char g_00e10380[];
extern "C" char g_00e10384[];
extern "C" char g_00e1039c[];
extern "C" char g_00e103d4[];
extern "C" void fn_004274e0();
extern "C" void fn_00641e20();
extern "C" void fn_006b98f0();
extern "C" void fn_006e8f20();
extern "C" void fn_006e90b0();
extern "C" void fn_006efca0();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00642e30
extern "C" __declspec(naked) void asm_00642e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd106d9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xa0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 2 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10384] }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10380] }
	__asm { mov edi, dword ptr [eax + 8] }
	__asm { add edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { adc esi, dword ptr [eax + 4] }
	__asm { sub esp, 0x18 }
	__asm { mov eax, esp }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [eax + 0xc], 0 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { call dword ptr [g_00e103d4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { add ecx, ebx }
	__asm { call dword ptr [g_00e1039c] }
	__asm { test al, al }
	__asm { jne L_00642f5f }
	__asm { test esi, esi }
	__asm { jl L_00642f5f }
	__asm { jg L_00642ed2 }
	__asm { test edi, edi }
	__asm { jb L_00642f5f }
	__asm { L_00642ed2: }
	__asm { push edi }
	__asm { call fn_00cf64a0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { push edi }
	__asm { push esi }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00641e20 }
	__asm { add esp, 0x10 }
	__asm { lea ecx, [ebp - 0xac] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_006e8f20 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0xac] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006efca0 }
	__asm { lea ecx, [ebp - 0xac] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006e90b0 }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_004274e0 }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00642f5f: }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0xe36964 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00643700();
extern "C" void fn_00643840();
extern "C" void fn_00643a30();
extern "C" void fn_00643c20();
extern "C" void fn_00643e10();
extern "C" void fn_00644040();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006430a0
extern "C" __declspec(naked) void asm_006430a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov eax, ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { sub eax, 0 }
	__asm { je L_00643152 }
	__asm { dec eax }
	__asm { je L_0064310a }
	__asm { sub eax, 2 }
	__asm { jne L_0064319a }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edi + edi] }
	__asm { cmp eax, edx }
	__asm { jne L_006430f2 }
	__asm { lea eax, [esi + esi] }
	__asm { cmp eax, ecx }
	__asm { jne L_006430f2 }
	__asm { push ecx }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00643a30 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006430f2: }
	__asm { push ecx }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00644040 }
	__asm { add esp, 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0064310a: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edi + edi] }
	__asm { cmp eax, edx }
	__asm { jne L_0064313a }
	__asm { lea eax, [esi + esi] }
	__asm { cmp eax, ecx }
	__asm { jne L_0064313a }
	__asm { push ecx }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00643840 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0064313a: }
	__asm { push ecx }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00643e10 }
	__asm { add esp, 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00643152: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [ebp + 0x1c] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edi + edi] }
	__asm { cmp eax, edx }
	__asm { jne L_00643182 }
	__asm { lea eax, [esi + esi] }
	__asm { cmp eax, ecx }
	__asm { jne L_00643182 }
	__asm { push ecx }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00643700 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00643182: }
	__asm { push ecx }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00643c20 }
	__asm { add esp, 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0064319a: }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0xe36a44 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10140[];
extern "C" void fn_006106e0();
extern "C" void fn_00610820();
extern "C" void fn_00610840();
extern "C" void fn_006419d0();
extern "C" void fn_00641d60();
extern "C" void fn_00642660();
extern "C" void fn_00642e30();
extern "C" void fn_00642f80();
extern "C" void fn_00642fe0();
extern "C" void fn_006430a0();
extern "C" void fn_006431c0();
extern "C" void fn_006434e0();
extern "C" void fn_006b98f0();
extern "C" void fn_006e84d0();
extern "C" void fn_006e85b0();
extern "C" void fn_006ede20();
extern "C" void fn_006ee7b0();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00643210
extern "C" __declspec(naked) void asm_00643210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1071f }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x58 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push edi }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { call fn_006e85b0 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006ede20 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_0064328a }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10140] }
	__asm { test eax, eax }
	__asm { jne L_00643283 }
	__asm { mov ecx, esi }
	__asm { call fn_006e84d0 }
	__asm { test esi, esi }
	__asm { je L_00643283 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { L_00643283: }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { L_0064328a: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_00642e30 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp - 0x54], 0 }
	__asm { jle L_006434b1 }
	__asm { cmp dword ptr [ebp - 0x50], 0 }
	__asm { jle L_006434b1 }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { call fn_006431c0 }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { call fn_00642fe0 }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { cmp ebx, 3 }
	__asm { jne L_006432ef }
	__asm { test al, 4 }
	__asm { je L_006432ef }
	__asm { push 1 }
	__asm { push dword ptr [ebp - 0x50] }
	__asm { push dword ptr [ebp - 0x54] }
	__asm { push dword ptr [ebp - 0x5c] }
	__asm { call fn_00642660 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { add esp, 0x10 }
	__asm { L_006432ef: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x54] }
	__asm { call fn_00642f80 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov edi, eax }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 0x2c], edi }
	__asm { call fn_00642f80 }
	__asm { push 1 }
	__asm { push eax }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_00610840 }
	__asm { mov esi, eax }
	__asm { push 0x28 }
	__asm { mov dword ptr [ebp - 0x34], esi }
	__asm { call fn_00cf661e }
	__asm { add esp, 0x28 }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test eax, eax }
	__asm { je L_00643346 }
	__asm { push esi }
	__asm { push 1 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, eax }
	__asm { push edi }
	__asm { push ebx }
	__asm { push 0 }
	__asm { call fn_006419d0 }
	__asm { jmp L_00643348 }
	__asm { L_00643346: }
	__asm { xor eax, eax }
	__asm { L_00643348: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006434e0 }
	__asm { xor ebx, ebx }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { test esi, esi }
	__asm { je L_00643424 }
	__asm { L_00643366: }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00610820 }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x30], edi }
	__asm { call fn_00610820 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 0x10 }
	__asm { mov esi, eax }
	__asm { push ebx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x20], esi }
	__asm { call fn_00641d60 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { test ebx, ebx }
	__asm { jne L_006433d3 }
	__asm { mov edx, dword ptr [ebp - 0x54] }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { cmp edi, edx }
	__asm { jne L_006433c1 }
	__asm { cmp esi, ecx }
	__asm { jne L_006433c1 }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { mov esi, dword ptr [ebp - 0x5c] }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_006106e0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0x18 }
	__asm { jmp L_00643414 }
	__asm { L_006433c1: }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { push ecx }
	__asm { push edx }
	__asm { push dword ptr [ebp - 0x5c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_006430a0 }
	__asm { jmp L_00643411 }
	__asm { L_006433d3: }
	__asm { lea edi, [ebx - 1] }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00610820 }
	__asm { push edi }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ebx, eax }
	__asm { call fn_00610820 }
	__asm { mov ecx, dword ptr [ebp - 0x40] }
	__asm { add esp, 0x10 }
	__asm { mov esi, eax }
	__asm { push edi }
	__asm { push 0 }
	__asm { call fn_00641d60 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { push esi }
	__asm { push ebx }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x20] }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_006430a0 }
	__asm { mov ebx, dword ptr [ebp - 0x28] }
	__asm { L_00643411: }
	__asm { add esp, 0x1c }
	__asm { L_00643414: }
	__asm { mov edi, dword ptr [ebp - 0x2c] }
	__asm { inc ebx }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { cmp ebx, dword ptr [ebp - 0x34] }
	__asm { jb L_00643366 }
	__asm { L_00643424: }
	__asm { mov al, byte ptr [ebp - 0xd] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp - 0x3c] }
	__asm { mov edx, dword ptr [ebp - 0x54] }
	__asm { mov ebx, dword ptr [ebp - 0x50] }
	__asm { mov byte ptr [ebp - 0x44], al }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { test esi, esi }
	__asm { je L_00643451 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { mov esi, dword ptr [ebp - 0x3c] }
	__asm { L_00643451: }
	__asm { mov eax, dword ptr [ebp - 0x44] }
	__asm { mov dword ptr [edi + 8], edx }
	__asm { mov dword ptr [edi + 0xc], ebx }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov dword ptr [ebp - 0x38], 1 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_00643492 }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00643492 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00643492 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00643492: }
	__asm { lea ecx, [ebp - 0x64] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_006ee7b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006434b1: }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push 0xe36a78 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403160();
extern "C" void fn_00643580();
// FUNCTION: ROBLOXSTUDIO 0x006434e0
extern "C" __declspec(naked) void asm_006434e0()
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
	__asm { call fn_00643580 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test esi, esi }
	__asm { je L_00643557 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00643556 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00643556 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00643556: }
	__asm { pop ebx }
	__asm { L_00643557: }
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
