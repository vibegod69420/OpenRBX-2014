// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00b936d0();
extern "C" void fn_00b9e010();
extern "C" void fn_00c04c80();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94b60
extern "C" __declspec(naked) void asm_00b94b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x48 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b94bae }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00c04c80 }
	__asm { mov esi, eax }
	__asm { jmp L_00b94bb0 }
	__asm { L_00b94bae: }
	__asm { xor esi, esi }
	__asm { L_00b94bb0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b936d0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b94be1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b94be1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b94be1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097f630();
extern "C" void fn_00b93760();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94c00
extern "C" __declspec(naked) void asm_00b94c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b94c62 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_0097f630 }
	__asm { mov dword ptr [esi], 0xed5f6c }
	__asm { mov dword ptr [esi + 4], 0xed5fcc }
	__asm { mov dword ptr [esi + 0x1c], 0xed6000 }
	__asm { jmp L_00b94c64 }
	__asm { L_00b94c62: }
	__asm { xor esi, esi }
	__asm { L_00b94c64: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93760 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b94c95 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b94c95 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b94c95: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097f630();
extern "C" void fn_00b937f0();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94cb0
extern "C" __declspec(naked) void asm_00b94cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b94d12 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_0097f630 }
	__asm { mov dword ptr [esi], 0xed60ac }
	__asm { mov dword ptr [esi + 4], 0xed610c }
	__asm { mov dword ptr [esi + 0x1c], 0xed6140 }
	__asm { jmp L_00b94d14 }
	__asm { L_00b94d12: }
	__asm { xor esi, esi }
	__asm { L_00b94d14: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b937f0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b94d45 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b94d45 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b94d45: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b47dc0();
extern "C" void fn_00b93880();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94d60
extern "C" __declspec(naked) void asm_00b94d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x48 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b94dc2 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_00b47dc0 }
	__asm { mov dword ptr [esi], 0xed6324 }
	__asm { mov dword ptr [esi + 4], 0xed6380 }
	__asm { mov dword ptr [esi + 0x1c], 0xed63b4 }
	__asm { jmp L_00b94dc4 }
	__asm { L_00b94dc2: }
	__asm { xor esi, esi }
	__asm { L_00b94dc4: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93880 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b94df5 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b94df5 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b94df5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0093cce0();
extern "C" void fn_00b93910();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94e10
extern "C" __declspec(naked) void asm_00b94e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x48 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b94e72 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_0093cce0 }
	__asm { mov dword ptr [esi], 0xed5c2c }
	__asm { mov dword ptr [esi + 4], 0xed5c88 }
	__asm { mov dword ptr [esi + 0x1c], 0xed5cbc }
	__asm { jmp L_00b94e74 }
	__asm { L_00b94e72: }
	__asm { xor esi, esi }
	__asm { L_00b94e74: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93910 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b94ea5 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b94ea5 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b94ea5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b939a0();
extern "C" void fn_00b96d40();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94ec0
extern "C" __declspec(naked) void asm_00b94ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x108 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b94f11 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00b96d40 }
	__asm { mov esi, eax }
	__asm { jmp L_00b94f13 }
	__asm { L_00b94f11: }
	__asm { xor esi, esi }
	__asm { L_00b94f13: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b939a0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b94f44 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b94f44 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b94f44: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b93a30();
extern "C" void fn_00b9d0c0();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b94f60
extern "C" __declspec(naked) void asm_00b94f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x40 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b94fae }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_00b9d0c0 }
	__asm { mov esi, eax }
	__asm { jmp L_00b94fb0 }
	__asm { L_00b94fae: }
	__asm { xor esi, esi }
	__asm { L_00b94fb0: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93a30 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b94fe1 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b94fe1 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b94fe1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097f630();
extern "C" void fn_00b93ac0();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b95000
extern "C" __declspec(naked) void asm_00b95000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b95062 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_0097f630 }
	__asm { mov dword ptr [esi], 0xed614c }
	__asm { mov dword ptr [esi + 4], 0xed61ac }
	__asm { mov dword ptr [esi + 0x1c], 0xed61e0 }
	__asm { jmp L_00b95064 }
	__asm { L_00b95062: }
	__asm { xor esi, esi }
	__asm { L_00b95064: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93ac0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b95095 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b95095 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b95095: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097f630();
extern "C" void fn_00b93b50();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b950b0
extern "C" __declspec(naked) void asm_00b950b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b95112 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_0097f630 }
	__asm { mov dword ptr [esi], 0xed61ec }
	__asm { mov dword ptr [esi + 4], 0xed624c }
	__asm { mov dword ptr [esi + 0x1c], 0xed6280 }
	__asm { jmp L_00b95114 }
	__asm { L_00b95112: }
	__asm { xor esi, esi }
	__asm { L_00b95114: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93b50 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b95145 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b95145 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b95145: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097f630();
extern "C" void fn_00b93be0();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b95160
extern "C" __declspec(naked) void asm_00b95160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b951c2 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_0097f630 }
	__asm { mov dword ptr [esi], 0xed5ecc }
	__asm { mov dword ptr [esi + 4], 0xed5f2c }
	__asm { mov dword ptr [esi + 0x1c], 0xed5f60 }
	__asm { jmp L_00b951c4 }
	__asm { L_00b951c2: }
	__asm { xor esi, esi }
	__asm { L_00b951c4: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93be0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b951f5 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b951f5 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b951f5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097f630();
extern "C" void fn_00b93c70();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b95210
extern "C" __declspec(naked) void asm_00b95210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b95272 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_0097f630 }
	__asm { mov dword ptr [esi], 0xed600c }
	__asm { mov dword ptr [esi + 4], 0xed606c }
	__asm { mov dword ptr [esi + 0x1c], 0xed60a0 }
	__asm { jmp L_00b95274 }
	__asm { L_00b95272: }
	__asm { xor esi, esi }
	__asm { L_00b95274: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93c70 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b952a5 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b952a5 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b952a5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0097f630();
extern "C" void fn_00b93d00();
extern "C" void fn_00b9e010();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b952c0
extern "C" __declspec(naked) void asm_00b952c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd39f46 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x6c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b95322 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { call fn_0097f630 }
	__asm { mov dword ptr [esi], 0xed5e24 }
	__asm { mov dword ptr [esi + 4], 0xed5e84 }
	__asm { mov dword ptr [esi + 0x1c], 0xed5eb8 }
	__asm { jmp L_00b95324 }
	__asm { L_00b95322: }
	__asm { xor esi, esi }
	__asm { L_00b95324: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00b93d00 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b95355 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00b95355 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00b9e010 }
	__asm { L_00b95355: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_006da0e0();
extern "C" void fn_009646c0();
// FUNCTION: ROBLOXSTUDIO 0x00b96d40
extern "C" __declspec(naked) void asm_00b96d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c2a6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_009646c0 }
	__asm { mov dword ptr [esi], 0xed645c }
	__asm { mov dword ptr [esi + 4], 0xed64c0 }
	__asm { mov dword ptr [esi + 0x1c], 0xed64f4 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov byte ptr [esi + 0x8c], 0 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x94], 0 }
	__asm { mov dword ptr [esi + 0x98], 0 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0xa0], eax }
	__asm { lea ecx, [esi + 0xb0] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0xa4], eax }
	__asm { mov dword ptr [esi + 0xa8], eax }
	__asm { mov byte ptr [esi + 0xac], al }
	__asm { call fn_006da0e0 }
	__asm { lea ecx, [esi + 0xec] }
	__asm { mov dword ptr [esi + 0xe0], 0 }
	__asm { mov dword ptr [esi + 0xe4], 0 }
	__asm { mov dword ptr [esi + 0xe8], 0 }
	__asm { push 0x11 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe57060 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x104], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012fc98e[];
extern "C" void fn_006b8a90();
extern "C" void fn_00933390();
extern "C" void fn_0099a220();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b97090
extern "C" __declspec(naked) void asm_00b97090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a5d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi + 0x6c], 0xe461dc }
	__asm { cmp dword ptr [esi + 0x60], 0x10 }
	__asm { jb L_00b970c7 }
	__asm { push dword ptr [esi + 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b970c7: }
	__asm { mov dword ptr [esi + 0x60], 0xf }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { push edi }
	__asm { mov byte ptr [esi + 0x4c], 0 }
	__asm { mov edi, dword ptr [esi + 0x48] }
	__asm { test edi, edi }
	__asm { je L_00b970f1 }
	__asm { mov ecx, edi }
	__asm { call fn_0099a220 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b970f1: }
	__asm { mov dword ptr [esi], 0xe8592c }
	__asm { mov dword ptr [esi + 4], 0xe85988 }
	__asm { mov dword ptr [esi + 0x1c], 0xe859bc }
	__asm { mov al, byte ptr [g_012fc98e] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { pop edi }
	__asm { test al, al }
	__asm { je L_00b97128 }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe859d8 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00b97128: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00933390 }
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
// FUNCTION: ROBLOXSTUDIO 0x00b9bb40
extern "C" __declspec(naked) void asm_00b9bb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp word ptr [esi], 0 }
	__asm { mov edi, ecx }
	__asm { jne L_00b9bb80 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor edx, edx }
	__asm { mov dword ptr [eax], 0 }
	__asm { cmp word ptr [esi + 2], dx }
	__asm { setle dl }
	__asm { xor eax, eax }
	__asm { cmp word ptr [esi + 4], ax }
	__asm { setle al }
	__asm { lea eax, [eax + edx*2] }
	__asm { lea eax, [eax + 4] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { pop edi }
	__asm { lea eax, [eax + ecx*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b9bb80: }
	__asm { cmp word ptr [esi + 2], 0 }
	__asm { jne L_00b9bbb6 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], 1 }
	__asm { cmp word ptr [esi], cx }
	__asm { setle cl }
	__asm { xor eax, eax }
	__asm { cmp word ptr [esi + 4], ax }
	__asm { setle al }
	__asm { lea eax, [eax + ecx*4] }
	__asm { lea eax, [eax + 2] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { pop edi }
	__asm { lea eax, [eax + ecx*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b9bbb6: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b9bbfe }
	__asm { cmp word ptr [esi + 4], 0 }
	__asm { je L_00b9bbfe }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b9bbed }
	__asm { push 0x119 }
	__asm { push 0xed6da0 }
	__asm { push 0xed6e50 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b9bbfe }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b9bbed: }
	__asm { movzx eax, al }
	__asm { push 0xed6e58 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b9bbfe: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [eax], 2 }
	__asm { cmp word ptr [esi], cx }
	__asm { setle cl }
	__asm { xor eax, eax }
	__asm { cmp word ptr [esi + 2], ax }
	__asm { setle al }
	__asm { lea eax, [eax + ecx*2] }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { pop edi }
	__asm { lea eax, [eax + ecx*8] }
	__asm { add eax, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b9bc30
extern "C" __declspec(naked) void asm_00b9bc30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { movzx eax, word ptr [esi] }
	__asm { mov edi, ecx }
	__asm { test ax, ax }
	__asm { je L_00b9bc6b }
	__asm { xor ecx, ecx }
	__asm { test ax, ax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, 3 }
	__asm { cmovg edx, ecx }
	__asm { mov dword ptr [eax], edx }
	__asm { xor eax, eax }
	__asm { cmp word ptr [esi], ax }
	__asm { setle al }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 4 }
	__asm { add eax, dword ptr [edi + 0x34] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b9bc6b: }
	__asm { movzx eax, word ptr [esi + 2] }
	__asm { test ax, ax }
	__asm { je L_00b9bc9e }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, 4 }
	__asm { mov edx, 1 }
	__asm { cmovg ecx, edx }
	__asm { mov dword ptr [eax], ecx }
	__asm { xor eax, eax }
	__asm { cmp word ptr [esi + 2], ax }
	__asm { setle al }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { pop edi }
	__asm { lea eax, [eax + ecx*8] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00b9bc9e: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b9bce6 }
	__asm { cmp word ptr [esi + 4], 0 }
	__asm { jne L_00b9bce6 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b9bcd5 }
	__asm { push 0x130 }
	__asm { push 0xed6da0 }
	__asm { push 0xed6eac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b9bce6 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b9bcd5: }
	__asm { movzx eax, al }
	__asm { push 0xed6eb8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b9bce6: }
	__asm { cmp word ptr [esi + 4], 0 }
	__asm { mov eax, 2 }
	__asm { mov ecx, 5 }
	__asm { cmovg ecx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { xor eax, eax }
	__asm { cmp word ptr [esi + 4], ax }
	__asm { setle al }
	__asm { lea ecx, [eax + eax*2] }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { pop edi }
	__asm { lea eax, [eax + ecx*4] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_00b9a310();
extern "C" void fn_00b9adb0();
extern "C" void fn_00b9b170();
extern "C" void fn_00b9b3e0();
extern "C" void fn_00b9cec0();
extern "C" void fn_00bb2650();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b9be50
extern "C" __declspec(naked) void asm_00b9be50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c35e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_00b9cec0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ebx, [esi + 8] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bb2650 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { je L_00b9beb4 }
	__asm { mov esi, dword ptr [eax + 0x1c] }
	__asm { jmp L_00b9bf0a }
	__asm { L_00b9beb4: }
	__asm { push 8 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b9bef9 }
	__asm { push 0x60 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00b9b170 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00b9bef3 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00b9adb0 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00b9befb }
	__asm { L_00b9bef3: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00b9befb }
	__asm { L_00b9bef9: }
	__asm { xor esi, esi }
	__asm { L_00b9befb: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b9b3e0 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00b9bf0a: }
	__asm { inc dword ptr [esi + 4] }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b9bf30 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { jmp L_00b9bf32 }
	__asm { L_00b9bf30: }
	__asm { xor eax, eax }
	__asm { L_00b9bf32: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b9a310 }
	__asm { test ebx, ebx }
	__asm { je L_00b9bf44 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { L_00b9bf44: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_009001f0();
extern "C" void fn_00b9a440();
extern "C" void fn_00b9af50();
extern "C" void fn_00b9b1e0();
extern "C" void fn_00b9b3e0();
extern "C" void fn_00bb2650();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b9bf60
extern "C" __declspec(naked) void asm_00b9bf60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c38e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_009001f0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ebx, [esi + 8] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bb2650 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { je L_00b9bfc4 }
	__asm { mov esi, dword ptr [eax + 0x1c] }
	__asm { jmp L_00b9c01a }
	__asm { L_00b9bfc4: }
	__asm { push 8 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b9c009 }
	__asm { push 0x24 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00b9b1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00b9c003 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00b9af50 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00b9c00b }
	__asm { L_00b9c003: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00b9c00b }
	__asm { L_00b9c009: }
	__asm { xor esi, esi }
	__asm { L_00b9c00b: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b9b3e0 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00b9c01a: }
	__asm { inc dword ptr [esi + 4] }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b9c040 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { jmp L_00b9c042 }
	__asm { L_00b9c040: }
	__asm { xor eax, eax }
	__asm { L_00b9c042: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b9a440 }
	__asm { test ebx, ebx }
	__asm { je L_00b9c054 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { L_00b9c054: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_00b9a570();
extern "C" void fn_00b9b250();
extern "C" void fn_00b9b3e0();
extern "C" void fn_00b9cf50();
extern "C" void fn_00bb2650();
extern "C" void fn_00c03e50();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b9c070
extern "C" __declspec(naked) void asm_00b9c070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c3be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_00b9cf50 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ebx, [esi + 8] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bb2650 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { je L_00b9c0d4 }
	__asm { mov esi, dword ptr [eax + 0x1c] }
	__asm { jmp L_00b9c12a }
	__asm { L_00b9c0d4: }
	__asm { push 8 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00b9c119 }
	__asm { push 4 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00b9b250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00b9c113 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00c03e50 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00b9c11b }
	__asm { L_00b9c113: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00b9c11b }
	__asm { L_00b9c119: }
	__asm { xor esi, esi }
	__asm { L_00b9c11b: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b9b3e0 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00b9c12a: }
	__asm { inc dword ptr [esi + 4] }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b9c150 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { jmp L_00b9c152 }
	__asm { L_00b9c150: }
	__asm { xor eax, eax }
	__asm { L_00b9c152: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b9a570 }
	__asm { test ebx, ebx }
	__asm { je L_00b9c164 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { L_00b9c164: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00421eb0();
extern "C" void fn_008523c0();
extern "C" void fn_00933630();
extern "C" void fn_00933cc0();
extern "C" void fn_00a61340();
extern "C" void fn_00b92b70();
extern "C" void fn_00c2fed0();
// FUNCTION: ROBLOXSTUDIO 0x00b9d270
extern "C" __declspec(naked) void asm_00b9d270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c478 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { call fn_00b92b70 }
	__asm { push dword ptr [ebx + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_008523c0 }
	__asm { push eax }
	__asm { call fn_00c2fed0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebx + 0x2c] }
	__asm { call fn_00933cc0 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x18 }
	__asm { movzx eax, byte ptr [eax] }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_00933630 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { fstp dword ptr [esp + 8] }
	__asm { push dword ptr [ebx] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { call fn_00a61340 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { add esp, 0x14 }
	__asm { mov byte ptr [ecx], al }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00b19a70();
// FUNCTION: ROBLOXSTUDIO 0x00b9e720
extern "C" __declspec(naked) void asm_00b9e720()
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
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b9e76b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00b9e76b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00b9e7b2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xec53f0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xed79ac }
	__asm { mov dword ptr [esi + 8], 0xed79bc }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xed79c4 }
	__asm { mov dword ptr [esi + 8], 0xed79d4 }
	__asm { jmp L_00b9e7b4 }
	__asm { L_00b9e7b2: }
	__asm { xor esi, esi }
	__asm { L_00b9e7b4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00b19a70 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00b9e7d1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00b9e7d1: }
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
extern "C" void fn_00ba0310();
// FUNCTION: ROBLOXSTUDIO 0x00b9e7f0
extern "C" __declspec(naked) void asm_00b9e7f0()
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
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00b9e83b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00b9e83b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00b9e882 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xed7974 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xed797c }
	__asm { mov dword ptr [esi + 8], 0xed798c }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0xed7994 }
	__asm { mov dword ptr [esi + 8], 0xed79a4 }
	__asm { jmp L_00b9e884 }
	__asm { L_00b9e882: }
	__asm { xor esi, esi }
	__asm { L_00b9e884: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba0310 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00b9e8a1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00b9e8a1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
extern "C" void fn_00b9ffc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b9ed20
extern "C" __declspec(naked) void asm_00b9ed20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00b9ed70 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00b9ed70: }
	__asm { lea esi, [edi + 0x18] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00b9ed97 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00b9ed97: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00b9ffc0 }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006da0e0();
extern "C" void fn_00aef7c0();
extern "C" void fn_00af0eb0();
extern "C" void fn_00b8df20();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ba0560
extern "C" __declspec(naked) void asm_00ba0560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5c72b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { sub esp, 0x60 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [edi + esi*4 + 0x120], 2 }
	__asm { je L_00ba05a2 }
	__asm { cmp dword ptr [ebx + eax*4 + 0x120], 2 }
	__asm { jne L_00ba063c }
	__asm { L_00ba05a2: }
	__asm { push eax }
	__asm { push esi }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00af0eb0 }
	__asm { add esp, 0x10 }
	__asm { test al, al }
	__asm { je L_00ba063c }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { call fn_006da0e0 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_006da0e0 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_00b8df20 }
	__asm { push 0x94 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 0x1c }
	__asm { mov dword ptr [ebp + 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00ba0627 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00aef7c0 }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0xe7a31c }
	__asm { mov dword ptr [esi + 0x1c], 0xe7a368 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ba0627: }
	__asm { xor esi, esi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00ba063c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00ba0650
extern "C" __declspec(naked) void asm_00ba0650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { push ebx }
	__asm { cmp dword ptr [edx + 0x98], -1 }
	__asm { jne L_00ba06c3 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [edx + 0x94] }
	__asm { xor edx, edx }
	__asm { mov eax, edi }
	__asm { mov ecx, 0x1ff }
	__asm { div ecx }
	__asm { mov esi, eax }
	__asm { lea ecx, [edx - 0x100] }
	__asm { mov eax, 0x100c081 }
	__asm { mul edi }
	__asm { sub edi, edx }
	__asm { shr edi, 1 }
	__asm { movzx ebx, cx }
	__asm { lea eax, [edx + edi] }
	__asm { shr eax, 0x11 }
	__asm { xor edx, edx }
	__asm { mov ecx, 0x3f }
	__asm { div ecx }
	__asm { mov eax, esi }
	__asm { mov esi, 0x1ff }
	__asm { pop edi }
	__asm { movzx ecx, dx }
	__asm { xor edx, edx }
	__asm { div esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov word ptr [eax], bx }
	__asm { mov word ptr [eax + 2], cx }
	__asm { pop ebx }
	__asm { sub edx, 0x100 }
	__asm { movzx edx, dx }
	__asm { mov word ptr [eax + 4], dx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba06c3: }
	__asm { movzx ecx, byte ptr [edx + 0x9a] }
	__asm { movzx eax, byte ptr [edx + 0x96] }
	__asm { movzx ebx, word ptr [edx + 0x94] }
	__asm { movzx edx, word ptr [edx + 0x98] }
	__asm { shl cx, 8 }
	__asm { or cx, ax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { movzx ecx, cx }
	__asm { mov word ptr [eax], bx }
	__asm { mov word ptr [eax + 2], cx }
	__asm { mov word ptr [eax + 4], dx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5be10();
// FUNCTION: ROBLOXSTUDIO 0x00ba07c0
extern "C" __declspec(naked) void asm_00ba07c0()
{
	__asm { L_00ba07c0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [ebx + 0x18], esi }
	__asm { jle L_00ba085e }
	__asm { push edi }
	__asm { nop }
	__asm { L_00ba07e0: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00ba082a }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_00ba082a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba0819 }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba082a }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00ba0819: }
	__asm { movzx eax, cl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba082a: }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov edi, dword ptr [eax + esi*4] }
	__asm { test edi, edi }
	__asm { je L_00ba0839 }
	__asm { add edi, -8 }
	__asm { jmp L_00ba083b }
	__asm { L_00ba0839: }
	__asm { xor edi, edi }
	__asm { L_00ba083b: }
	__asm { push edi }
	__asm { call fn_00b5be10 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00ba0857 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call L_00ba07c0 }
	__asm { L_00ba0857: }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [ebx + 0x18] }
	__asm { jl L_00ba07e0 }
	__asm { pop edi }
	__asm { L_00ba085e: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00695f20();
extern "C" void fn_00b5cbf0();
extern "C" void fn_00cf676b();
// FUNCTION: ROBLOXSTUDIO 0x00ba0870
extern "C" __declspec(naked) void asm_00ba0870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd47d70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x665970 }
	__asm { push 0x478c90 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push 4 }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { push 0xc }
	__asm { lea eax, [esi + 0x30] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { call fn_00cf676b }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x60], 0 }
	__asm { mov dword ptr [esi + 0x64], 0 }
	__asm { call fn_00b5cbf0 }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov dword ptr [esi + 0x7c], 0 }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov dword ptr [esi + 0x84], 0 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov dword ptr [esi + 0x8c], 0 }
	__asm { mov dword ptr [esi + 0x90], 0x30 }
	__asm { mov dword ptr [esi + 0x94], 0x20 }
	__asm { mov dword ptr [esi + 0x98], 0x20 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0xa4], 0 }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { mov dword ptr [esi + 0xac], 0 }
	__asm { mov dword ptr [esi + 0xb0], 0x20 }
	__asm { mov dword ptr [esi + 0xb4], 0x20 }
	__asm { mov dword ptr [esi + 0xb8], 0x20 }
	__asm { mov dword ptr [esi + 0xbc], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00695f20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00ba12c0();
extern "C" void fn_00c0fd50();
// FUNCTION: ROBLOXSTUDIO 0x00ba1100
extern "C" __declspec(naked) void asm_00ba1100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi], 1 }
	__asm { jbe L_00ba1117 }
	__asm { push esi }
	__asm { call fn_00ba12c0 }
	__asm { jmp L_00ba1119 }
	__asm { L_00ba1117: }
	__asm { xor eax, eax }
	__asm { L_00ba1119: }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c0fd50 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add esp, 8 }
	__asm { test ecx, ecx }
	__asm { je L_00ba1131 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00ba1131: }
	__asm { dec dword ptr [edi] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { test ecx, ecx }
	__asm { je L_00ba1194 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ba118a }
	__asm { cmp dword ptr [ecx + 0x64], esi }
	__asm { je L_00ba118a }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba1179 }
	__asm { push 0x2d }
	__asm { push 0xed7cf0 }
	__asm { push 0xed7e4c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba118a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba1179: }
	__asm { movzx eax, al }
	__asm { push 0xed7e78 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba118a: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [eax + 0x64], 0 }
	__asm { L_00ba1194: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5b980();
extern "C" void fn_00b5cb90();
extern "C" void fn_00ba0fc0();
extern "C" void fn_00ba1080();
extern "C" void fn_00c0f880();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ba1330
extern "C" __declspec(naked) void asm_00ba1330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd30f5b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00ba1398 }
	__asm { push esi }
	__asm { call fn_00b5cb90 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00ba1398 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba1383 }
	__asm { push 0x36 }
	__asm { push 0xed7cf0 }
	__asm { push 0xecf6c8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba1398 }
	__asm { L_00ba1383: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed7ef0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba1398: }
	__asm { cmp dword ptr [esi + 0x64], 0 }
	__asm { jne L_00ba13e1 }
	__asm { push 0x1c }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ba13c0 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00c0f880 }
	__asm { jmp L_00ba13c2 }
	__asm { L_00ba13c0: }
	__asm { xor eax, eax }
	__asm { L_00ba13c2: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00ba1080 }
	__asm { mov ecx, esi }
	__asm { call fn_00b5b980 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x30] }
	__asm { call fn_00ba0fc0 }
	__asm { L_00ba13e1: }
	__asm { mov eax, dword ptr [esi + 0x64] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { inc dword ptr [eax + 0x18] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00ba14e0
extern "C" __declspec(naked) void asm_00ba14e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { je L_00ba156c }
	__asm { test edi, edi }
	__asm { jne L_00ba152a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba1515 }
	__asm { push 0x31 }
	__asm { push 0xe78b18 }
	__asm { push 0xecec60 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba152a }
	__asm { L_00ba1515: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed7f80 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba152a: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba156c }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00ba156c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba1557 }
	__asm { push 0x32 }
	__asm { push 0xe78b18 }
	__asm { push 0xe78b60 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba156c }
	__asm { L_00ba1557: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed7fe0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba156c: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [esi + 4], edi }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5d560();
extern "C" void fn_00b8c530();
// FUNCTION: ROBLOXSTUDIO 0x00ba15c0
extern "C" __declspec(naked) void asm_00ba15c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b5d560 }
	__asm { test al, al }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { je L_00ba163d }
	__asm { test al, al }
	__asm { je L_00ba1626 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00ba15f1 }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { test edx, edx }
	__asm { je L_00ba15f1 }
	__asm { cmp ecx, edx }
	__asm { jne L_00ba1626 }
	__asm { L_00ba15f1: }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba1615 }
	__asm { push 0x53 }
	__asm { push 0xed8044 }
	__asm { push 0xed8254 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba1626 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba1615: }
	__asm { movzx eax, al }
	__asm { push 0xed8268 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba1626: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x10] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c530 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba163d: }
	__asm { test al, al }
	__asm { je L_00ba1688 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00ba1688 }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { test edx, edx }
	__asm { je L_00ba1688 }
	__asm { cmp ecx, edx }
	__asm { je L_00ba1688 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba1677 }
	__asm { push 0x57 }
	__asm { push 0xed8044 }
	__asm { push 0xed82cc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba1688 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba1677: }
	__asm { movzx eax, al }
	__asm { push 0xed82e0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba1688: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c530 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5d560();
extern "C" void fn_00ba2180();
// FUNCTION: ROBLOXSTUDIO 0x00ba1ad0
extern "C" __declspec(naked) void asm_00ba1ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax + 0x10] }
	__asm { mov ebx, ecx }
	__asm { je L_00ba1b7b }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00b5d560 }
	__asm { test al, al }
	__asm { jne L_00ba1b30 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba1b1b }
	__asm { push 0xc5 }
	__asm { push 0xed8430 }
	__asm { push 0xed8b64 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba1b30 }
	__asm { L_00ba1b1b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed8b80 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba1b30: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba1b7b }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_00b5d560 }
	__asm { test al, al }
	__asm { jne L_00ba1b7b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba1b66 }
	__asm { push 0xc6 }
	__asm { push 0xed8430 }
	__asm { push 0xed8bec }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba1b7b }
	__asm { L_00ba1b66: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed8c08 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba1b7b: }
	__asm { cmp byte ptr [esi + 0x110], 0 }
	__asm { jne L_00ba1b91 }
	__asm { cmp byte ptr [esi + 0x111], 0 }
	__asm { jne L_00ba1b91 }
	__asm { xor al, al }
	__asm { jmp L_00ba1b93 }
	__asm { L_00ba1b91: }
	__asm { mov al, 1 }
	__asm { L_00ba1b93: }
	__asm { cmp byte ptr [edi + 0x110], 0 }
	__asm { jne L_00ba1ba9 }
	__asm { cmp byte ptr [edi + 0x111], 0 }
	__asm { jne L_00ba1ba9 }
	__asm { xor cl, cl }
	__asm { jmp L_00ba1bab }
	__asm { L_00ba1ba9: }
	__asm { mov cl, 1 }
	__asm { L_00ba1bab: }
	__asm { cmp al, cl }
	__asm { je L_00ba1bc8 }
	__asm { mov ecx, ebx }
	__asm { test al, al }
	__asm { je L_00ba1bc2 }
	__asm { push edi }
	__asm { call fn_00ba2180 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba1bc2: }
	__asm { push esi }
	__asm { call fn_00ba2180 }
	__asm { L_00ba1bc8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5d560();
// FUNCTION: ROBLOXSTUDIO 0x00ba1d50
extern "C" __declspec(naked) void asm_00ba1d50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00ba1e39 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { jne L_00ba1da3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba1d8e }
	__asm { push 0xb3 }
	__asm { push 0xed8430 }
	__asm { push 0xed8878 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba1da3 }
	__asm { L_00ba1d8e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed8890 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba1da3: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba1e38 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { jne L_00ba1dec }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba1dd7 }
	__asm { push 0xb4 }
	__asm { push 0xed8430 }
	__asm { push 0xed88f4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba1dec }
	__asm { L_00ba1dd7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed8908 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba1dec: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba1e38 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { call fn_00b5d560 }
	__asm { test al, al }
	__asm { jne L_00ba1e38 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba1e23 }
	__asm { push 0xb5 }
	__asm { push 0xed8430 }
	__asm { push 0xed896c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba1e38 }
	__asm { L_00ba1e23: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed8998 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba1e38: }
	__asm { pop esi }
	__asm { L_00ba1e39: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b5d560();
// FUNCTION: ROBLOXSTUDIO 0x00ba1e40
extern "C" __declspec(naked) void asm_00ba1e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00ba1f29 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { jne L_00ba1e93 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba1e7e }
	__asm { push 0xbb }
	__asm { push 0xed8430 }
	__asm { push 0xed8878 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba1e93 }
	__asm { L_00ba1e7e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed8a18 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba1e93: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba1f28 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { jne L_00ba1edc }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba1ec7 }
	__asm { push 0xbc }
	__asm { push 0xed8430 }
	__asm { push 0xed88f4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba1edc }
	__asm { L_00ba1ec7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed8a80 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba1edc: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba1f28 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { push edi }
	__asm { call fn_00b5d560 }
	__asm { test al, al }
	__asm { jne L_00ba1f28 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba1f13 }
	__asm { push 0xbd }
	__asm { push 0xed8430 }
	__asm { push 0xed896c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba1f28 }
	__asm { L_00ba1f13: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed8ae8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba1f28: }
	__asm { pop esi }
	__asm { L_00ba1f29: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c360();
extern "C" void fn_00ba1960();
extern "C" void fn_00c11150();
// FUNCTION: ROBLOXSTUDIO 0x00ba1f30
extern "C" __declspec(naked) void asm_00ba1f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test dl, dl }
	__asm { je L_00ba1f87 }
	__asm { mov eax, dword ptr [esi + 0xc0] }
	__asm { add eax, dword ptr [esi + 0x9c] }
	__asm { je L_00ba1f87 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba1f76 }
	__asm { push 0x27 }
	__asm { push 0xed8430 }
	__asm { push 0xe8f66c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba1f87 }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00ba1f76: }
	__asm { movzx eax, dl }
	__asm { push 0xed8470 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba1f87: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c360 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { call fn_00c11150 }
	__asm { cmp byte ptr [esi + 0x110], 0 }
	__asm { jne L_00ba1fbb }
	__asm { cmp byte ptr [esi + 0x111], 0 }
	__asm { jne L_00ba1fbb }
	__asm { xor eax, eax }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba1960 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba1fbb: }
	__asm { mov eax, 1 }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba1960 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b8c620();
extern "C" void fn_00ba2250();
extern "C" void fn_00c11170();
// FUNCTION: ROBLOXSTUDIO 0x00ba2090
extern "C" __declspec(naked) void asm_00ba2090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test dl, dl }
	__asm { je L_00ba20ea }
	__asm { mov eax, dword ptr [esi + 0xc0] }
	__asm { add eax, dword ptr [esi + 0x9c] }
	__asm { cmp eax, 1 }
	__asm { je L_00ba20ea }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba20d9 }
	__asm { push 0x33 }
	__asm { push 0xed8430 }
	__asm { push 0xed84d8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba20ea }
	__asm { mov dl, byte ptr [g_012de657] }
	__asm { L_00ba20d9: }
	__asm { movzx eax, dl }
	__asm { push 0xed84f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba20ea: }
	__asm { cmp byte ptr [esi + 0x110], 0 }
	__asm { jne L_00ba2100 }
	__asm { cmp byte ptr [esi + 0x111], 0 }
	__asm { jne L_00ba2100 }
	__asm { xor eax, eax }
	__asm { jmp L_00ba2105 }
	__asm { L_00ba2100: }
	__asm { mov eax, 1 }
	__asm { L_00ba2105: }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba2250 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { call fn_00c11170 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c620 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00ba216c }
	__asm { mov eax, dword ptr [esi + 0xc0] }
	__asm { add eax, dword ptr [esi + 0x9c] }
	__asm { je L_00ba216c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba215b }
	__asm { push 0x39 }
	__asm { push 0xed8430 }
	__asm { push 0xe8f66c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba216c }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00ba215b: }
	__asm { movzx eax, cl }
	__asm { push 0xed8558 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba216c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00af1070();
extern "C" void fn_00ba1960();
extern "C" void fn_00ba1bd0();
extern "C" void fn_00ba2250();
// FUNCTION: ROBLOXSTUDIO 0x00ba2180
extern "C" __declspec(naked) void asm_00ba2180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0x110], 0 }
	__asm { mov edi, ecx }
	__asm { jne L_00ba21fb }
	__asm { cmp byte ptr [esi + 0x111], 0 }
	__asm { jne L_00ba21fb }
	__asm { push esi }
	__asm { call fn_00ba1bd0 }
	__asm { test eax, eax }
	__asm { je L_00ba21d2 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00af1070 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00ba2249 }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba2250 }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba1960 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba21d2: }
	__asm { push 0xb }
	__asm { push esi }
	__asm { call fn_00af1070 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00ba2249 }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba2250 }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba1960 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba21fb: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba2249 }
	__asm { push 0 }
	__asm { push esi }
	__asm { call fn_00af1070 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00ba2249 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba2234 }
	__asm { push 0xf8 }
	__asm { push 0xed8430 }
	__asm { push 0xed8c74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba2249 }
	__asm { L_00ba2234: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed8ca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba2249: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00ba23a0
extern "C" __declspec(naked) void asm_00ba23a0()
{
	__asm { L_00ba23a0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test edi, edi }
	__asm { je L_00ba23b0 }
	__asm { lea eax, [edi - 8] }
	__asm { jmp L_00ba23b2 }
	__asm { L_00ba23b0: }
	__asm { xor eax, eax }
	__asm { L_00ba23b2: }
	__asm { push eax }
	__asm { call dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [edi + 0x10], esi }
	__asm { jle L_00ba2421 }
	__asm { L_00ba23c0: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00ba240a }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_00ba240a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba23f9 }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba240a }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00ba23f9: }
	__asm { movzx eax, cl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba240a: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ecx + esi*4] }
	__asm { call L_00ba23a0 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x10] }
	__asm { jl L_00ba23c0 }
	__asm { L_00ba2421: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00b5cfb0();
extern "C" void fn_00c11270();
extern "C" void fn_00c11cf0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ba2430
extern "C" __declspec(naked) void asm_00ba2430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c839 }
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
	__asm { je L_00ba247a }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00c11cf0 }
	__asm { mov ecx, eax }
	__asm { jmp L_00ba247c }
	__asm { L_00ba247a: }
	__asm { xor ecx, ecx }
	__asm { L_00ba247c: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edi + 8], ecx }
	__asm { mov dword ptr [edi + 0xc], esi }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00c11270 }
	__asm { mov dword ptr [edi], 0xed8da8 }
	__asm { mov dword ptr [edi + 0x10], 0xed8dc4 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { lea ecx, [edi + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi + 0x2c], 0 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { call fn_00b5cfb0 }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { lea ecx, [edi + 0x34] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { call fn_00b5cfb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00c11290();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ba2500
extern "C" __declspec(naked) void asm_00ba2500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c879 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xed8da8 }
	__asm { mov dword ptr [edi + 0x10], 0xed8dc4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { je L_00ba25bb }
	__asm { cmp dword ptr [edi + 0x30], 0 }
	__asm { je L_00ba2579 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba2564 }
	__asm { push 0x23 }
	__asm { push 0xed8e9c }
	__asm { push 0xed8edc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba2579 }
	__asm { L_00ba2564: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed8ef8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba2579: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba25bb }
	__asm { cmp dword ptr [edi + 0x38], 0 }
	__asm { je L_00ba25bb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba25a6 }
	__asm { push 0x24 }
	__asm { push 0xed8e9c }
	__asm { push 0xed8f64 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba25bb }
	__asm { L_00ba25a6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed8f88 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba25bb: }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x34] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_008ff0a0 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x2c] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008ff0a0 }
	__asm { push dword ptr [edi + 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00c11290 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00ba2620 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00ba2620: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130f1ca[];
extern "C" void fn_006b9740();
extern "C" void fn_00a0f490();
extern "C" void fn_00b8c2b0();
extern "C" void fn_00ba14e0();
extern "C" void fn_00baa510();
extern "C" void fn_00c11de0();
// FUNCTION: ROBLOXSTUDIO 0x00ba2810
extern "C" __declspec(naked) void asm_00ba2810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00ba2868 }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00baa510 }
	__asm { test eax, eax }
	__asm { je L_00ba2868 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba2853 }
	__asm { push 0x182 }
	__asm { push 0xed8e9c }
	__asm { push 0xed9dc0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba2868 }
	__asm { L_00ba2853: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed9de0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba2868: }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jne L_00ba2876 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00b8c2b0 }
	__asm { L_00ba2876: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba28c1 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00ba14e0 }
	__asm { test al, al }
	__asm { jne L_00ba28c1 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba28ac }
	__asm { push 0x188 }
	__asm { push 0xed8e9c }
	__asm { push 0xed9e4c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba28c1 }
	__asm { L_00ba28ac: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed9e60 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba28c1: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push esi }
	__asm { call fn_00c11de0 }
	__asm { movzx eax, byte ptr [g_0130f1ca] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x34] }
	__asm { call fn_00a0f490 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { test cl, cl }
	__asm { je L_00ba292e }
	__asm { cmp byte ptr [eax + 4], 0 }
	__asm { jne L_00ba292e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba291d }
	__asm { push 0x18b }
	__asm { push 0xed8e9c }
	__asm { push 0x102af38 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba292e }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00ba291d: }
	__asm { movzx eax, cl }
	__asm { push 0xed9ec0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba292e: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00410ef0();
extern "C" void fn_008ff0a0();
extern "C" void fn_0099c7f0();
extern "C" void fn_0099c800();
extern "C" void fn_0099d070();
extern "C" void fn_00ba3a00();
extern "C" void fn_00baa870();
// FUNCTION: ROBLOXSTUDIO 0x00ba2990
extern "C" __declspec(naked) void asm_00ba2990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { mov ecx, edi }
	__asm { call fn_0099d070 }
	__asm { mov ebx, eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { call fn_0099c7f0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_0099c800 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { call fn_00ba3a00 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x2c] }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { lea ecx, [esi + 0x2c] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { add ecx, 8 }
	__asm { call fn_00baa870 }
	__asm { mov esi, dword ptr [ebp - 8] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call fn_00baa870 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_00baa870 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00ba2a17 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00ba2a17: }
	__asm { test esi, esi }
	__asm { je L_00ba2a24 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x1c] }
	__asm { L_00ba2a24: }
	__asm { test ebx, ebx }
	__asm { je L_00ba2a30 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 1 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { L_00ba2a30: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00ba2b40
extern "C" __declspec(naked) void asm_00ba2b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00ba2bcc }
	__asm { test esi, esi }
	__asm { jne L_00ba2b8a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba2b75 }
	__asm { push 0x3c }
	__asm { push 0xe78b18 }
	__asm { push 0xecec60 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba2b8a }
	__asm { L_00ba2b75: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed8dd8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba2b8a: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba2bcc }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { jne L_00ba2bcc }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba2bb7 }
	__asm { push 0x3d }
	__asm { push 0xe78b18 }
	__asm { push 0xe78b60 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba2bcc }
	__asm { L_00ba2bb7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xed8e38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba2bcc: }
	__asm { mov edi, dword ptr [edi + 4] }
	__asm { test edi, edi }
	__asm { je L_00ba2bf3 }
	__asm { test esi, esi }
	__asm { je L_00ba2bf3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call dword ptr [edx + 4] }
	__asm { cmp eax, esi }
	__asm { jl L_00ba2bf3 }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba2bf3: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_00b5d560();
extern "C" void fn_00b8c530();
extern "C" void fn_00b9a6a0();
extern "C" void fn_00ba23a0();
extern "C" void fn_00c11ed0();
// FUNCTION: ROBLOXSTUDIO 0x00ba3a00
extern "C" __declspec(naked) void asm_00ba3a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { cmp dword ptr [eax + 4], 0 }
	__asm { je L_00ba3acb }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00b5d560 }
	__asm { test al, al }
	__asm { je L_00ba3abd }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c11ed0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x34] }
	__asm { call fn_00410ef0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [eax + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b9a6a0 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x34] }
	__asm { call fn_008ff0a0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test cl, cl }
	__asm { je L_00ba3abd }
	__asm { cmp dword ptr [ebp - 4], 1 }
	__asm { je L_00ba3abd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba3aac }
	__asm { push 0x148 }
	__asm { push 0xed8e9c }
	__asm { push 0xe55f98 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba3abd }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00ba3aac: }
	__asm { movzx eax, cl }
	__asm { push 0xed9d18 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba3abd: }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00b8c530 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { L_00ba3acb: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba3af2 }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { test eax, eax }
	__asm { je L_00ba3ae0 }
	__asm { lea ecx, [eax - 8] }
	__asm { jmp L_00ba3ae2 }
	__asm { L_00ba3ae0: }
	__asm { xor ecx, ecx }
	__asm { L_00ba3ae2: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { add ecx, 8 }
	__asm { push 0xba2770 }
	__asm { call fn_00ba23a0 }
	__asm { L_00ba3af2: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00410ef0();
extern "C" void fn_006b9740();
extern "C" void fn_008ff0a0();
extern "C" void fn_0099c7f0();
// FUNCTION: ROBLOXSTUDIO 0x00ba4370
extern "C" __declspec(naked) void asm_00ba4370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [eax + 0x38] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00ba43de }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { test ecx, ecx }
	__asm { je L_00ba4399 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00ba4399: }
	__asm { dec dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { call fn_0099c7f0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { lea ecx, [edi + 0x1c] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { call fn_008ff0a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba43de: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ba442a }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { add esi, 0x28 }
	__asm { test ecx, ecx }
	__asm { je L_00ba442a }
	__asm { cmp ecx, esi }
	__asm { je L_00ba442a }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba4419 }
	__asm { push 0x34 }
	__asm { push 0xeda3e0 }
	__asm { push 0xeda4ac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba442a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba4419: }
	__asm { movzx eax, al }
	__asm { push 0xeda4d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba442a: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0093d360();
extern "C" void fn_00c12600();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ba4470
extern "C" __declspec(naked) void asm_00ba4470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c969 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ba44ba }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00c12600 }
	__asm { mov ecx, eax }
	__asm { jmp L_00ba44bc }
	__asm { L_00ba44ba: }
	__asm { xor ecx, ecx }
	__asm { L_00ba44bc: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 8], ecx }
	__asm { mov dword ptr [esi + 0xc], edi }
	__asm { mov dword ptr [esi], 0xeda5d4 }
	__asm { lea eax, [esi + 0x14] }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [eax], eax }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { push 0x1838 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_00ba4523 }
	__asm { push 0xe60ddc }
	__asm { mov ecx, eax }
	__asm { call fn_0093d360 }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ba4523: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x1c], 0 }
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
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00ba4540
extern "C" __declspec(naked) void asm_00ba4540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5c99e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xeda5d4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test al, al }
	__asm { je L_00ba45b8 }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { lea ecx, [esi + 0x14] }
	__asm { test edx, edx }
	__asm { je L_00ba45b8 }
	__asm { cmp edx, ecx }
	__asm { je L_00ba45b8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba45a7 }
	__asm { push 0x1b }
	__asm { push 0xeda5f0 }
	__asm { push 0xeda634 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba45b8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba45a7: }
	__asm { movzx eax, al }
	__asm { push 0xeda650 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba45b8: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00ba45c9 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00ba45c9: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { lea ecx, [esi + 0x14] }
	__asm { cmp eax, ecx }
	__asm { je L_00ba45e8 }
	__asm { L_00ba45d3: }
	__asm { lea edx, [eax] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { cmp eax, ecx }
	__asm { jne L_00ba45d3 }
	__asm { L_00ba45e8: }
	__asm { mov dword ptr [ecx], ecx }
	__asm { mov dword ptr [ecx + 4], ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_00ba4609 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00ba4609: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0093d380();
extern "C" void fn_0093d4b0();
// FUNCTION: ROBLOXSTUDIO 0x00ba4650
extern "C" __declspec(naked) void asm_00ba4650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd59088 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0 }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_0093d380 }
	__asm { lea edi, [esi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { cmp esi, edi }
	__asm { je L_00ba46f8 }
	__asm { mov edi, edi }
	__asm { L_00ba4690: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba46e2 }
	__asm { test esi, esi }
	__asm { je L_00ba46a2 }
	__asm { lea ecx, [esi - 0x20] }
	__asm { jmp L_00ba46a4 }
	__asm { L_00ba46a2: }
	__asm { xor ecx, ecx }
	__asm { L_00ba46a4: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x34] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_00ba46e2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba46cd }
	__asm { push 0x69 }
	__asm { push 0xeda5f0 }
	__asm { push 0xeda760 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba46e2 }
	__asm { L_00ba46cd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeda778 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba46e2: }
	__asm { test esi, esi }
	__asm { je L_00ba46eb }
	__asm { lea ecx, [esi - 0x20] }
	__asm { jmp L_00ba46ed }
	__asm { L_00ba46eb: }
	__asm { xor ecx, ecx }
	__asm { L_00ba46ed: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x3c] }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp esi, edi }
	__asm { jne L_00ba4690 }
	__asm { L_00ba46f8: }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0093d4b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012339a0[];
extern "C" void fn_00b5b800();
extern "C" void fn_00b5b9e0();
extern "C" void fn_00b5c030();
extern "C" void fn_00b5c0b0();
extern "C" void fn_00ba2b40();
extern "C" void fn_00ba6560();
// FUNCTION: ROBLOXSTUDIO 0x00ba6220
extern "C" __declspec(naked) void asm_00ba6220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp byte ptr [g_012339a0], 0 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { jne L_00ba623e }
	__asm { mov eax, 3 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba623e: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 1], 1 }
	__asm { call fn_00b5b800 }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { cmp dword ptr [eax + 4], esi }
	__asm { jle L_00ba62ae }
	__asm { L_00ba6256: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push ebx }
	__asm { mov edi, dword ptr [ecx + esi*4] }
	__asm { mov ecx, edi }
	__asm { call fn_00ba2b40 }
	__asm { test al, al }
	__asm { je L_00ba62a5 }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00ba6560 }
	__asm { test al, al }
	__asm { je L_00ba62a5 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { call fn_00b5c030 }
	__asm { mov edi, eax }
	__asm { mov ecx, edi }
	__asm { call fn_00b5b9e0 }
	__asm { cmp eax, 3 }
	__asm { jne L_00ba62a5 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_00ba2b40 }
	__asm { test al, al }
	__asm { je L_00ba62a5 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 1], 0 }
	__asm { call fn_00b5c0b0 }
	__asm { test al, al }
	__asm { jne L_00ba62c2 }
	__asm { L_00ba62a5: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [eax + 4] }
	__asm { jl L_00ba6256 }
	__asm { L_00ba62ae: }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ebp - 1], al }
	__asm { pop edi }
	__asm { setne al }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { add eax, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba62c2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 3 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0088fab0();
// FUNCTION: ROBLOXSTUDIO 0x00ba62d0
extern "C" __declspec(naked) void asm_00ba62d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00ba635c }
	__asm { test esi, esi }
	__asm { jne L_00ba631a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba6305 }
	__asm { push 0x3c }
	__asm { push 0xe68c50 }
	__asm { push 0x10041ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba631a }
	__asm { L_00ba6305: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fc38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba631a: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba635c }
	__asm { cmp dword ptr [esi + 0x20], -1 }
	__asm { je L_00ba635c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba6347 }
	__asm { push 0x3d }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fc90 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba635c }
	__asm { L_00ba6347: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fca8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba635c: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x20], eax }
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
// FUNCTION: ROBLOXSTUDIO 0x00ba6380
extern "C" __declspec(naked) void asm_00ba6380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x20] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00ba6411 }
	__asm { test esi, esi }
	__asm { jns L_00ba63ce }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba63b9 }
	__asm { push 0x4a }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd10 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba63ce }
	__asm { L_00ba63b9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fd28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba63ce: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba6411 }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + esi*4], ebx }
	__asm { je L_00ba6411 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba63fc }
	__asm { push 0x4b }
	__asm { push 0xe68c50 }
	__asm { push 0xe8fd8c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba6411 }
	__asm { L_00ba63fc: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe8fda8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba6411: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [ecx + eax*4 - 4] }
	__asm { mov dword ptr [ecx + esi*4], eax }
	__asm { mov dword ptr [eax + 0x20], esi }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { dec eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00896d00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0x20], 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00ba2b40();
// FUNCTION: ROBLOXSTUDIO 0x00ba6560
extern "C" __declspec(naked) void asm_00ba6560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { je L_00ba65fe }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00ba2b40 }
	__asm { test al, al }
	__asm { jne L_00ba65b7 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba65a2 }
	__asm { push 0x1e9 }
	__asm { push 0xeda7fc }
	__asm { push 0xedc250 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba65b7 }
	__asm { L_00ba65a2: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xedc270 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba65b7: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ba65fe }
	__asm { cmp byte ptr [esi + 8], 0 }
	__asm { jne L_00ba65fe }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba65ed }
	__asm { push 0x1ea }
	__asm { push 0xeda7fc }
	__asm { push 0xedc2e0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba65fe }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba65ed: }
	__asm { movzx eax, al }
	__asm { push 0xedc308 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba65fe: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov bl, byte ptr [esi + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { cmp eax, 1 }
	__asm { jne L_00ba662a }
	__asm { cmp bl, 3 }
	__asm { je L_00ba661f }
	__asm { cmp bl, 4 }
	__asm { je L_00ba661f }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba661f: }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba662a: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b5b9e0();
extern "C" void fn_00b5c730();
extern "C" void fn_00ba2b40();
extern "C" void fn_00ba57e0();
// FUNCTION: ROBLOXSTUDIO 0x00ba6de0
extern "C" __declspec(naked) void asm_00ba6de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { mov edi, ecx }
	__asm { je L_00ba6e52 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00ba2b40 }
	__asm { test al, al }
	__asm { je L_00ba6e52 }
	__asm { mov ecx, esi }
	__asm { call fn_00b5c730 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov ecx, esi }
	__asm { je L_00ba6e30 }
	__asm { mov byte ptr [edi + 0xfc], 1 }
	__asm { call fn_00b5b9e0 }
	__asm { test eax, eax }
	__asm { je L_00ba6e52 }
	__asm { cmp eax, 1 }
	__asm { je L_00ba6e52 }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba57e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ba6e30: }
	__asm { call fn_00b5b9e0 }
	__asm { test eax, eax }
	__asm { je L_00ba6e52 }
	__asm { cmp eax, 3 }
	__asm { je L_00ba6e52 }
	__asm { cmp eax, 2 }
	__asm { je L_00ba6e52 }
	__asm { cmp eax, 1 }
	__asm { je L_00ba6e52 }
	__asm { push 2 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ba57e0 }
	__asm { L_00ba6e52: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10338[];
extern "C" void fn_00ccbbe0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ba6e60
extern "C" __declspec(naked) void asm_00ba6e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10338] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { add eax, ecx }
	__asm { test al, 3 }
	__asm { jne L_00ba6e8c }
	__asm { lea eax, [ecx + 4] }
	__asm { shr eax, 2 }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { ja L_00ba6e8c }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00ccbbe0 }
	__asm { L_00ba6e8c: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push ebx }
	__asm { lea eax, [ecx*4 - 1] }
	__asm { and dword ptr [esi + 0xc], eax }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x10] }
	__asm { add edi, dword ptr [esi + 0xc] }
	__asm { dec ecx }
	__asm { mov eax, edi }
	__asm { shr eax, 2 }
	__asm { and ecx, eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea ebx, [ecx*4] }
	__asm { cmp dword ptr [ebx + eax], 0 }
	__asm { jne L_00ba6ed5 }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00ba6ecf }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00ba6ecf: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebx + eax], ecx }
	__asm { L_00ba6ed5: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { and edi, 3 }
	__asm { mov eax, dword ptr [eax + ebx] }
	__asm { lea ecx, [eax + edi*4] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_00ba6eee }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00ba6eee: }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00ba9ad0();
// FUNCTION: ROBLOXSTUDIO 0x00ba97d0
extern "C" __declspec(naked) void asm_00ba97d0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x2c], 0 }
	__asm { jne L_00ba9872 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ba9824 }
	__asm { cmp dword ptr [esi + 0x10], 1 }
	__asm { je L_00ba9824 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba9813 }
	__asm { push 0xd2 }
	__asm { push 0xedd31c }
	__asm { push 0xeddba8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba9824 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba9813: }
	__asm { movzx eax, al }
	__asm { push 0xeddbc0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba9824: }
	__asm { mov ecx, esi }
	__asm { call fn_00ba9ad0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ba9872 }
	__asm { cmp dword ptr [esi + 0x2c], 0 }
	__asm { jne L_00ba9872 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba9861 }
	__asm { push 0xd4 }
	__asm { push 0xedd31c }
	__asm { push 0xedd5b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba9872 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba9861: }
	__asm { movzx eax, al }
	__asm { push 0xeddc20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba9872: }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00b65f80();
extern "C" void fn_00ba8e40();
// FUNCTION: ROBLOXSTUDIO 0x00ba9990
extern "C" __declspec(naked) void asm_00ba9990()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { test eax, eax }
	__asm { je L_00ba99a8 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { L_00ba99a8: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00ba9a51 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba9ac4 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { cmp eax, dword ptr [ecx + 0x28] }
	__asm { je L_00ba99fe }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba99e9 }
	__asm { push 0x8d }
	__asm { push 0xedd31c }
	__asm { push 0xedda08 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba99fe }
	__asm { L_00ba99e9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xedda28 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba99fe: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba9ac4 }
	__asm { cmp dword ptr [esi + 0x30], 0 }
	__asm { je L_00ba9ac4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba9a3a }
	__asm { push 0x8e }
	__asm { push 0xedd31c }
	__asm { push 0xedd7a4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba9ac4 }
	__asm { L_00ba9a3a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xedda98 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00ba9a51: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba9aa4 }
	__asm { mov dword ptr [esi + 0x28], esi }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ba9aa4 }
	__asm { cmp dword ptr [esi + 0x30], 0 }
	__asm { jne L_00ba9aa4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ba9a93 }
	__asm { push 0x92 }
	__asm { push 0xedd31c }
	__asm { push 0xedd428 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba9aa4 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ba9a93: }
	__asm { movzx eax, al }
	__asm { push 0xeddaf0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba9aa4: }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x30] }
	__asm { test edi, edi }
	__asm { je L_00ba9abc }
	__asm { mov ecx, edi }
	__asm { call fn_00b65f80 }
	__asm { push edi }
	__asm { call fn_00ba8e40 }
	__asm { add esp, 4 }
	__asm { L_00ba9abc: }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { pop edi }
	__asm { L_00ba9ac4: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130f1dc[];
extern "C" void fn_006b9740();
extern "C" void fn_00ba94d0();
// FUNCTION: ROBLOXSTUDIO 0x00ba9ef0
extern "C" __declspec(naked) void asm_00ba9ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { je L_00ba9f3d }
	__asm { test edi, edi }
	__asm { jne L_00ba9f3d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba9f28 }
	__asm { push 0xfc }
	__asm { push 0xedd31c }
	__asm { push 0xeddd5c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba9f3d }
	__asm { L_00ba9f28: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xeddd68 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba9f3d: }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { test eax, eax }
	__asm { je L_00ba9f4f }
	__asm { cmp eax, edi }
	__asm { je L_00ba9f4f }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { L_00ba9f4f: }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { je L_00ba9f7e }
	__asm { mov dword ptr [esi + 0x34], edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { call fn_00ba94d0 }
	__asm { mov ecx, dword ptr [g_0130f1dc] }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { inc ecx }
	__asm { pop edi }
	__asm { mov dword ptr [g_0130f1dc], ecx }
	__asm { mov dword ptr [eax + 0xa0], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ba9f7e: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ba9fbd }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ba9fa8 }
	__asm { push 0x109 }
	__asm { push 0xedd31c }
	__asm { push 0x10062b8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ba9fbd }
	__asm { L_00ba9fa8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xedddb8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ba9fbd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00c04b70();
// FUNCTION: ROBLOXSTUDIO 0x00baa3e0
extern "C" __declspec(naked) void asm_00baa3e0()
{
	__asm { L_00baa3e0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00baa3fd }
	__asm { push ebx }
	__asm { call fn_00c04b70 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00baa3fd: }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x10], esi }
	__asm { jle L_00baa462 }
	__asm { L_00baa405: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00baa44f }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [eax + esi*4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_00baa44f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00baa43e }
	__asm { push 0x67 }
	__asm { push 0xe68c50 }
	__asm { push 0xe68c94 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00baa44f }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00baa43e: }
	__asm { movzx eax, cl }
	__asm { push 0xe68cb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00baa44f: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [eax + esi*4] }
	__asm { call L_00baa3e0 }
	__asm { inc esi }
	__asm { cmp esi, dword ptr [edi + 0x10] }
	__asm { jl L_00baa405 }
	__asm { L_00baa462: }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00baa470();
// FUNCTION: ROBLOXSTUDIO 0x00baa520
extern "C" __declspec(naked) void asm_00baa520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00baa536 }
	__asm { cmp dword ptr [esi + 0x1c], 0 }
	__asm { je L_00baa536 }
	__asm { mov bl, 1 }
	__asm { jmp L_00baa538 }
	__asm { L_00baa536: }
	__asm { xor bl, bl }
	__asm { L_00baa538: }
	__asm { mov bh, byte ptr [g_012de657] }
	__asm { test bh, bh }
	__asm { je L_00baa5ae }
	__asm { test esi, esi }
	__asm { je L_00baa56d }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00baa561 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00baa55f }
	__asm { push eax }
	__asm { call fn_00baa470 }
	__asm { add esp, 4 }
	__asm { jmp L_00baa561 }
	__asm { L_00baa55f: }
	__asm { xor eax, eax }
	__asm { L_00baa561: }
	__asm { cmp dword ptr [eax + 0x20], esi }
	__asm { jne L_00baa56d }
	__asm { mov ecx, 1 }
	__asm { jmp L_00baa56f }
	__asm { L_00baa56d: }
	__asm { xor ecx, ecx }
	__asm { L_00baa56f: }
	__asm { movzx eax, bl }
	__asm { cmp eax, ecx }
	__asm { je L_00baa5ae }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00baa59d }
	__asm { push 0xdc }
	__asm { push 0xeddfc0 }
	__asm { push 0xede370 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00baa5ae }
	__asm { mov bh, byte ptr [g_012de657] }
	__asm { L_00baa59d: }
	__asm { movzx eax, bh }
	__asm { push 0xede3b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00baa5ae: }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00baa3e0();
extern "C" void fn_00baa470();
extern "C" void fn_00baa5c0();
extern "C" void fn_00baa690();
extern "C" void fn_00baa8e0();
// FUNCTION: ROBLOXSTUDIO 0x00baa5e0
extern "C" __declspec(naked) void asm_00baa5e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_00baa61c }
	__asm { mov edi, dword ptr [edi + 0x24] }
	__asm { test edi, edi }
	__asm { je L_00baa61c }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00baa8e0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x20] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00baa610 }
	__asm { call fn_00baa5c0 }
	__asm { L_00baa610: }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00baa61c }
	__asm { call fn_00baa5c0 }
	__asm { L_00baa61c: }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { test edi, edi }
	__asm { je L_00baa651 }
	__asm { mov edi, dword ptr [edi + 0x24] }
	__asm { test edi, edi }
	__asm { je L_00baa651 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00baa3e0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x20] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00baa645 }
	__asm { call fn_00baa5c0 }
	__asm { L_00baa645: }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00baa651 }
	__asm { call fn_00baa5c0 }
	__asm { L_00baa651: }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { test eax, eax }
	__asm { jne L_00baa678 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00baa676 }
	__asm { push eax }
	__asm { call fn_00baa470 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { push eax }
	__asm { call fn_00baa690 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00baa676: }
	__asm { xor eax, eax }
	__asm { L_00baa678: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00baa690 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00babc60
extern "C" __declspec(naked) void asm_00babc60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { test al, al }
	__asm { je L_00babcdd }
	__asm { cmp edx, -1 }
	__asm { jne L_00babce2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00babc9b }
	__asm { push 0x63 }
	__asm { push 0xede4bc }
	__asm { push 0xede5d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00babcac }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00babc9b: }
	__asm { movzx eax, al }
	__asm { push 0xede648 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00babcac: }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00babcc1: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00babcdd: }
	__asm { cmp edx, -1 }
	__asm { je L_00babcac }
	__asm { L_00babce2: }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { lea edx, [edx + edx*8] }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { mov eax, dword ptr [ecx + edx*4 + 0x14] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ecx + edx*4 + 0x18] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ecx + edx*4 + 0x1c] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_00babcc1 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00a206d0();
// FUNCTION: ROBLOXSTUDIO 0x00babd10
extern "C" __declspec(naked) void asm_00babd10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0xc }
	__asm { test al, al }
	__asm { je L_00babd8d }
	__asm { cmp edx, -1 }
	__asm { jne L_00babd92 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00babd4b }
	__asm { push 0x69 }
	__asm { push 0xede4bc }
	__asm { push 0xede5d0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00babd5c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00babd4b: }
	__asm { movzx eax, al }
	__asm { push 0xede6a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00babd5c: }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00babd71: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00babd8d: }
	__asm { cmp edx, -1 }
	__asm { je L_00babd5c }
	__asm { L_00babd92: }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { lea ecx, [edx + edx*8] }
	__asm { mov eax, dword ptr [eax + 0x18] }
	__asm { push 0 }
	__asm { lea edx, [eax + ecx*4] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { push edx }
	__asm { mov ecx, dword ptr [eax + ecx*4] }
	__asm { call fn_00a206d0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_00babd71 }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_00b9b3e0();
extern "C" void fn_00badf10();
extern "C" void fn_00bae380();
extern "C" void fn_00baf2e0();
extern "C" void fn_00bb2650();
extern "C" void fn_00c04370();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bae980
extern "C" __declspec(naked) void asm_00bae980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5ceae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_00baf2e0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ebx, [esi + 8] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bb2650 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { je L_00bae9e4 }
	__asm { mov esi, dword ptr [eax + 0x1c] }
	__asm { jmp L_00baea3a }
	__asm { L_00bae9e4: }
	__asm { push 8 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00baea29 }
	__asm { push 4 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00bae380 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00baea23 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00c04370 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00baea2b }
	__asm { L_00baea23: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00baea2b }
	__asm { L_00baea29: }
	__asm { xor esi, esi }
	__asm { L_00baea2b: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b9b3e0 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00baea3a: }
	__asm { inc dword ptr [esi + 4] }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00baea60 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { jmp L_00baea62 }
	__asm { L_00baea60: }
	__asm { xor eax, eax }
	__asm { L_00baea62: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00badf10 }
	__asm { test ebx, ebx }
	__asm { je L_00baea74 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { L_00baea74: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00402f60();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bafdc0
extern "C" __declspec(naked) void asm_00bafdc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { jb L_00bafdd8 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { jmp L_00bafdda }
	__asm { L_00bafdd8: }
	__asm { mov ecx, edi }
	__asm { L_00bafdda: }
	__asm { mov eax, 8 }
	__asm { cmp esi, eax }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { push 0xea58dc }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00bafe10 }
	__asm { cmp esi, 8 }
	__asm { jb L_00bafe10 }
	__asm { cmp esi, 8 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_00bafe10 }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bafe10: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00bafe18 }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_00bafe18: }
	__asm { mov eax, 9 }
	__asm { cmp esi, eax }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { push 0xea58e8 }
	__asm { push edi }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00bafe4e }
	__asm { cmp esi, 9 }
	__asm { jb L_00bafe4e }
	__asm { cmp esi, 9 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_00bafe4e }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bafe4e: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bafe8c }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bafe7b }
	__asm { push 0x30 }
	__asm { push 0xedea9c }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bafe8c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bafe7b: }
	__asm { movzx eax, al }
	__asm { push 0xedeb30 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bafe8c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00402f60();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bb0730
extern "C" __declspec(naked) void asm_00bb0730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0x10] }
	__asm { mov esi, ecx }
	__asm { jb L_00bb0748 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { jmp L_00bb074a }
	__asm { L_00bb0748: }
	__asm { mov ecx, ebx }
	__asm { L_00bb074a: }
	__asm { mov eax, 8 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0xea58dc }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00bb0793 }
	__asm { cmp edi, 8 }
	__asm { jb L_00bb0793 }
	__asm { cmp edi, 8 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_00bb0793 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi + 0x24], eax }
	__asm { je L_00bb081e }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x78] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00bb0793: }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_00bb079b }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { L_00bb079b: }
	__asm { mov eax, 9 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0xea58e8 }
	__asm { push ebx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00bb07e0 }
	__asm { cmp edi, 9 }
	__asm { jb L_00bb07e0 }
	__asm { cmp edi, 9 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_00bb07e0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi + 0x28], eax }
	__asm { je L_00bb081e }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x78] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00bb07e0: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bb081e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb080d }
	__asm { push 0x23 }
	__asm { push 0xedea9c }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb081e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb080d: }
	__asm { movzx eax, al }
	__asm { push 0xedeae0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb081e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00402f60();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bb1720
extern "C" __declspec(naked) void asm_00bb1720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov esi, dword ptr [edi + 0x10] }
	__asm { jb L_00bb1738 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { jmp L_00bb173a }
	__asm { L_00bb1738: }
	__asm { mov ecx, edi }
	__asm { L_00bb173a: }
	__asm { mov eax, 8 }
	__asm { cmp esi, eax }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { push 0xea58dc }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00bb1770 }
	__asm { cmp esi, 8 }
	__asm { jb L_00bb1770 }
	__asm { cmp esi, 8 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_00bb1770 }
	__asm { mov eax, dword ptr [ebx + 0x24] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bb1770: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00bb1778 }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_00bb1778: }
	__asm { mov eax, 9 }
	__asm { cmp esi, eax }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { push 0xea58e8 }
	__asm { push edi }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00bb17ae }
	__asm { cmp esi, 9 }
	__asm { jb L_00bb17ae }
	__asm { cmp esi, 9 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_00bb17ae }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bb17ae: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bb17ec }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb17db }
	__asm { push 0x30 }
	__asm { push 0xedec18 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb17ec }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb17db: }
	__asm { movzx eax, al }
	__asm { push 0xedecb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb17ec: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00402f60();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bb2060
extern "C" __declspec(naked) void asm_00bb2060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0x10] }
	__asm { mov esi, ecx }
	__asm { jb L_00bb2078 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { jmp L_00bb207a }
	__asm { L_00bb2078: }
	__asm { mov ecx, ebx }
	__asm { L_00bb207a: }
	__asm { mov eax, 8 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0xea58dc }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00bb20c3 }
	__asm { cmp edi, 8 }
	__asm { jb L_00bb20c3 }
	__asm { cmp edi, 8 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_00bb20c3 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, dword ptr [esi + 0x24] }
	__asm { je L_00bb214e }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x78] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00bb20c3: }
	__asm { cmp dword ptr [ebx + 0x14], 0x10 }
	__asm { jb L_00bb20cb }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { L_00bb20cb: }
	__asm { mov eax, 9 }
	__asm { cmp edi, eax }
	__asm { cmovb eax, edi }
	__asm { push eax }
	__asm { push 0xea58e8 }
	__asm { push ebx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00bb2110 }
	__asm { cmp edi, 9 }
	__asm { jb L_00bb2110 }
	__asm { cmp edi, 9 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { jne L_00bb2110 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, dword ptr [esi + 0x28] }
	__asm { je L_00bb214e }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x78] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00bb2110: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bb214e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb213d }
	__asm { push 0x23 }
	__asm { push 0xedec18 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb214e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb213d: }
	__asm { movzx eax, al }
	__asm { push 0xedec58 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb214e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_00b9b3e0();
extern "C" void fn_00bb21f0();
extern "C" void fn_00bb2340();
extern "C" void fn_00bb2480();
extern "C" void fn_00bb2650();
extern "C" void fn_00bb2cd0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bb2930
extern "C" __declspec(naked) void asm_00bb2930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d04e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_00bb2cd0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ebx, [esi + 8] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bb2650 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { je L_00bb2994 }
	__asm { mov esi, dword ptr [eax + 0x1c] }
	__asm { jmp L_00bb29ea }
	__asm { L_00bb2994: }
	__asm { push 8 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00bb29d9 }
	__asm { push 0x30 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00bb2480 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00bb29d3 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00bb2340 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00bb29db }
	__asm { L_00bb29d3: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00bb29db }
	__asm { L_00bb29d9: }
	__asm { xor esi, esi }
	__asm { L_00bb29db: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b9b3e0 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00bb29ea: }
	__asm { inc dword ptr [esi + 4] }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00bb2a10 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { jmp L_00bb2a12 }
	__asm { L_00bb2a10: }
	__asm { xor eax, eax }
	__asm { L_00bb2a12: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bb21f0 }
	__asm { test ebx, ebx }
	__asm { je L_00bb2a24 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { L_00bb2a24: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_00b9b3e0();
extern "C" void fn_00bb2650();
extern "C" void fn_00bb2d60();
extern "C" void fn_00bb2eb0();
extern "C" void fn_00bb2ff0();
extern "C" void fn_00bb35c0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bb3220
extern "C" __declspec(naked) void asm_00bb3220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d0ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_00bb35c0 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ebx, [esi + 8] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bb2650 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { je L_00bb3284 }
	__asm { mov esi, dword ptr [eax + 0x1c] }
	__asm { jmp L_00bb32da }
	__asm { L_00bb3284: }
	__asm { push 8 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00bb32c9 }
	__asm { push 0x30 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00bb2ff0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00bb32c3 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00bb2eb0 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00bb32cb }
	__asm { L_00bb32c3: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00bb32cb }
	__asm { L_00bb32c9: }
	__asm { xor esi, esi }
	__asm { L_00bb32cb: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b9b3e0 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00bb32da: }
	__asm { inc dword ptr [esi + 4] }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00bb3300 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { jmp L_00bb3302 }
	__asm { L_00bb3300: }
	__asm { xor eax, eax }
	__asm { L_00bb3302: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bb2d60 }
	__asm { test ebx, ebx }
	__asm { je L_00bb3314 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { L_00bb3314: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0049a1e0();
extern "C" void fn_00b9b3e0();
extern "C" void fn_00bb2650();
extern "C" void fn_00bb3650();
extern "C" void fn_00bb3a90();
extern "C" void fn_00bb4930();
extern "C" void fn_00c03f40();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bb3fd0
extern "C" __declspec(naked) void asm_00bb3fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d11e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_00bb4930 }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { lea ebx, [esi + 8] }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 0x24], 0 }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x28], ebx }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bb2650 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { je L_00bb4034 }
	__asm { mov esi, dword ptr [eax + 0x1c] }
	__asm { jmp L_00bb408a }
	__asm { L_00bb4034: }
	__asm { push 8 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00bb4079 }
	__asm { push 4 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00bb3a90 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00bb4073 }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_00c03f40 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00bb407b }
	__asm { L_00bb4073: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_00bb407b }
	__asm { L_00bb4079: }
	__asm { xor esi, esi }
	__asm { L_00bb407b: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00b9b3e0 }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00bb408a: }
	__asm { inc dword ptr [esi + 4] }
	__asm { push 0x10 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00bb40b0 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { jmp L_00bb40b2 }
	__asm { L_00bb40b0: }
	__asm { xor eax, eax }
	__asm { L_00bb40b2: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00bb3650 }
	__asm { test ebx, ebx }
	__asm { je L_00bb40c4 }
	__asm { mov byte ptr [ebx], 0 }
	__asm { L_00bb40c4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0052c1b0();
// FUNCTION: ROBLOXSTUDIO 0x00bb4f50
extern "C" __declspec(naked) void asm_00bb4f50()
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
	__asm { je L_00bb4f9b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00bb4f9b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00bb4fee }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe390dc }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xee05a0 }
	__asm { mov dword ptr [esi + 8], 0xee05b0 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xee05b8 }
	__asm { mov dword ptr [esi + 8], 0xee05c8 }
	__asm { jmp L_00bb4ff0 }
	__asm { L_00bb4fee: }
	__asm { xor esi, esi }
	__asm { L_00bb4ff0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0052c1b0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00bb500d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00bb500d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_009d86b0();
extern "C" void fn_009d8ed0();
extern "C" void fn_00bb94b0();
// FUNCTION: ROBLOXSTUDIO 0x00bb6cc0
extern "C" __declspec(naked) void asm_00bb6cc0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { push edi }
	__asm { test cl, cl }
	__asm { je L_00bb6d12 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp dword ptr [eax + 0x324], 0 }
	__asm { jne L_00bb6d12 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb6d01 }
	__asm { push 0x370 }
	__asm { push 0xedf868 }
	__asm { push 0xedffc0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb6d12 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00bb6d01: }
	__asm { movzx eax, cl }
	__asm { push 0xee0098 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb6d12: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov edi, dword ptr [ecx + 0x38] }
	__asm { call fn_009d8ed0 }
	__asm { test eax, eax }
	__asm { je L_00bb6d5f }
	__asm { push edi }
	__asm { push dword ptr [eax + 0xe0] }
	__asm { call fn_00bb94b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { jne L_00bb6d53 }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_009d86b0 }
	__asm { test eax, eax }
	__asm { je L_00bb6da0 }
	__asm { push edi }
	__asm { push dword ptr [eax + 0xe0] }
	__asm { call fn_00bb94b0 }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00bb6da0 }
	__asm { L_00bb6d53: }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00bb6d5f: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bb6da0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb6d8f }
	__asm { push 0x382 }
	__asm { push 0xedf868 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb6da0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb6d8f: }
	__asm { movzx eax, al }
	__asm { push 0xee0100 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb6da0: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00bb6350();
extern "C" void fn_00bb64b0();
extern "C" void fn_00bb91f0();
extern "C" void fn_00bb9a00();
// FUNCTION: ROBLOXSTUDIO 0x00bb7920
extern "C" __declspec(naked) void asm_00bb7920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { cmp ebx, eax }
	__asm { je L_00bb795b }
	__asm { cmp eax, 0x12 }
	__asm { je L_00bb795b }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bb6350 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { add esp, 4 }
	__asm { call fn_00bb9a00 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb795b: }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { mov edi, edi }
	__asm { L_00bb7960: }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00bb91f0 }
	__asm { mov edi, eax }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { add esp, 8 }
	__asm { test al, al }
	__asm { je L_00bb79b4 }
	__asm { cmp edi, 9 }
	__asm { jne L_00bb79b4 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb79a1 }
	__asm { push 0x229 }
	__asm { push 0xedf868 }
	__asm { push 0xedfcb4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb79b9 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb79a1: }
	__asm { movzx eax, al }
	__asm { push 0xedfcd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { jmp L_00bb79b9 }
	__asm { L_00bb79b4: }
	__asm { cmp edi, 0x12 }
	__asm { je L_00bb79cc }
	__asm { L_00bb79b9: }
	__asm { cmp edi, ebx }
	__asm { je L_00bb79cc }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { call fn_00bb64b0 }
	__asm { test al, al }
	__asm { jne L_00bb79d7 }
	__asm { L_00bb79cc: }
	__asm { inc esi }
	__asm { cmp esi, 0x1a }
	__asm { jl L_00bb7960 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bb79d7: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00bb6350 }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { add esp, 4 }
	__asm { call fn_00bb9a00 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bb91f0
extern "C" __declspec(naked) void asm_00bb91f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { je L_00bb928d }
	__asm { mov eax, esi }
	__asm { imul eax, eax, 0x6c }
	__asm { cmp dword ptr [eax + 0xedee54], esi }
	__asm { je L_00bb9248 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb9233 }
	__asm { push 0x57 }
	__asm { push 0xedf868 }
	__asm { push 0xedf8ac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb9248 }
	__asm { L_00bb9233: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xedf8d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb9248: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bb928d }
	__asm { cmp dword ptr [edi*4 + 0xededec], edi }
	__asm { je L_00bb928d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bb9278 }
	__asm { push 0x58 }
	__asm { push 0xedf868 }
	__asm { push 0xedf954 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb928d }
	__asm { L_00bb9278: }
	__asm { movzx ecx, byte ptr [g_012de657] }
	__asm { push 0xedf980 }
	__asm { push ecx }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb928d: }
	__asm { imul esi, esi, 0x1b }
	__asm { add esi, edi }
	__asm { pop edi }
	__asm { mov eax, dword ptr [esi*4 + 0xedee58] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099e740();
extern "C" void fn_009d8730();
extern "C" void fn_009d8ac0();
// FUNCTION: ROBLOXSTUDIO 0x00bba570
extern "C" __declspec(naked) void asm_00bba570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00bba5be }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00bba5be }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bba5ad }
	__asm { push 0xeb }
	__asm { push 0xedf868 }
	__asm { push 0xe7baac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bba5be }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bba5ad: }
	__asm { movzx eax, al }
	__asm { push 0xedfa00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bba5be: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_009d8730 }
	__asm { mov bl, byte ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00bba5e1 }
	__asm { test bl, bl }
	__asm { sete cl }
	__asm { movzx ecx, cl }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0xe0] }
	__asm { call fn_0099e740 }
	__asm { L_00bba5e1: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bba628 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00bba628 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bba617 }
	__asm { push 0xeb }
	__asm { push 0xedf868 }
	__asm { push 0xe7baac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bba628 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bba617: }
	__asm { movzx eax, al }
	__asm { push 0xedfa00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bba628: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_009d8ac0 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00bba64d }
	__asm { test bl, bl }
	__asm { sete cl }
	__asm { movzx ecx, cl }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [eax + 0xe0] }
	__asm { pop ebp }
	__asm { jmp fn_0099e740 }
	__asm { L_00bba64d: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_0099e740();
extern "C" void fn_009d8740();
extern "C" void fn_009d8ad0();
// FUNCTION: ROBLOXSTUDIO 0x00bba7d0
extern "C" __declspec(naked) void asm_00bba7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_00bba81e }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00bba81e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bba80d }
	__asm { push 0xeb }
	__asm { push 0xedf868 }
	__asm { push 0xe7baac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bba81e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bba80d: }
	__asm { movzx eax, al }
	__asm { push 0xedfa00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bba81e: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_009d8740 }
	__asm { mov bl, byte ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { je L_00bba841 }
	__asm { test bl, bl }
	__asm { sete cl }
	__asm { movzx ecx, cl }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax + 0xe0] }
	__asm { call fn_0099e740 }
	__asm { L_00bba841: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bba888 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00bba888 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bba877 }
	__asm { push 0xeb }
	__asm { push 0xedf868 }
	__asm { push 0xe7baac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bba888 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bba877: }
	__asm { movzx eax, al }
	__asm { push 0xedfa00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bba888: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_009d8ad0 }
	__asm { pop esi }
	__asm { test eax, eax }
	__asm { je L_00bba8ad }
	__asm { test bl, bl }
	__asm { sete cl }
	__asm { movzx ecx, cl }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [eax + 0xe0] }
	__asm { pop ebp }
	__asm { jmp fn_0099e740 }
	__asm { L_00bba8ad: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0130f3a8[];
extern "C" void fn_006b9740();
extern "C" void fn_0099e740();
extern "C" void fn_009d8ed0();
extern "C" void fn_009d90c0();
// FUNCTION: ROBLOXSTUDIO 0x00bba8e0
extern "C" __declspec(naked) void asm_00bba8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_0130f3a8], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_00bba940 }
	__asm { test al, al }
	__asm { je L_00bba936 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00bba936 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bba925 }
	__asm { push 0xeb }
	__asm { push 0xedf868 }
	__asm { push 0xe7baac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bba936 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bba925: }
	__asm { movzx eax, al }
	__asm { push 0xedfa00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bba936: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_009d90c0 }
	__asm { jmp L_00bba98a }
	__asm { L_00bba940: }
	__asm { test al, al }
	__asm { je L_00bba982 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00bba982 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bba971 }
	__asm { push 0xeb }
	__asm { push 0xedf868 }
	__asm { push 0xe7baac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bba982 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bba971: }
	__asm { movzx eax, al }
	__asm { push 0xedfa00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bba982: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_009d8ed0 }
	__asm { L_00bba98a: }
	__asm { mov ecx, eax }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_00bba9aa }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { sete al }
	__asm { movzx eax, al }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov ecx, dword ptr [ecx + 0xe0] }
	__asm { pop ebp }
	__asm { jmp fn_0099e740 }
	__asm { L_00bba9aa: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10530[];
extern "C" char g_00e105fc[];
extern "C" char g_00e10644[];
extern "C" char g_00e106d4[];
// FUNCTION: ROBLOXSTUDIO 0x00bbaf80
extern "C" __declspec(naked) void asm_00bbaf80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x18 }
	__asm { mov ebx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10530] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { jne L_00bbafc0 }
	__asm { push 0xee06b4 }
	__asm { L_00bbafa0: }
	__asm { push 0xee0638 }
	__asm { call dword ptr [g_00e106d4] }
	__asm { add eax, 0x40 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10644] }
	__asm { add esp, 0xc }
	__asm { push 0 }
	__asm { call dword ptr [g_00e105fc] }
	__asm { L_00bbafc0: }
	__asm { push 0x18 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00bbafd8 }
	__asm { push 0xee069c }
	__asm { jmp L_00bbafa0 }
	__asm { L_00bbafd8: }
	__asm { fld qword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { fstp qword ptr [ecx] }
	__asm { fld qword ptr [ebp + 0x18] }
	__asm { fstp qword ptr [ecx + 8] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 0x14], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax], 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 0x10], ebx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 0x6c], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10338[];
extern "C" char g_00e1033c[];
extern "C" void fn_006c4220();
extern "C" void fn_00bbd950();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bbd690
extern "C" __declspec(naked) void asm_00bbd690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d664 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { lea ecx, [edi + 0x24c] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00bbd950 }
	__asm { lea ecx, [edi + 0x24c] }
	__asm { call dword ptr [g_00e10338] }
	__asm { push dword ptr [edi + 0x24c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x24c] }
	__asm { mov dword ptr [edi + 0x24c], 0 }
	__asm { call dword ptr [g_00e1033c] }
	__asm { mov eax, dword ptr [edi + 0x228] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00bbd726 }
	__asm { test al, 1 }
	__asm { jne L_00bbd71c }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [edi + 0x230] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bbd71c }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bbd71c: }
	__asm { mov dword ptr [edi + 0x228], 0 }
	__asm { L_00bbd726: }
	__asm { mov eax, dword ptr [edi + 0x208] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00bbd75a }
	__asm { test al, 1 }
	__asm { jne L_00bbd750 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [edi + 0x210] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00bbd750 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00bbd750: }
	__asm { mov dword ptr [edi + 0x208], 0 }
	__asm { L_00bbd75a: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006c4220 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0042ba60();
extern "C" void fn_0049a1e0();
extern "C" void fn_00bbd780();
extern "C" void fn_00bbde20();
// FUNCTION: ROBLOXSTUDIO 0x00bbdee0
extern "C" __declspec(naked) void asm_00bbdee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd46528 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { lea esi, [edi + 0x14] }
	__asm { push esi }
	__asm { call fn_0049a1e0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { cmp dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_00bbdf54 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0042ba60 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { je L_00bbdf34 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00bbdf34: }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { dec ecx }
	__asm { and ecx, dword ptr [edx + 8] }
	__asm { push dword ptr [eax + ecx*4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00bbd780 }
	__asm { mov ecx, edi }
	__asm { call fn_00bbde20 }
	__asm { mov al, 1 }
	__asm { jmp L_00bbdf56 }
	__asm { L_00bbdf54: }
	__asm { xor al, al }
	__asm { L_00bbdf56: }
	__asm { test esi, esi }
	__asm { je L_00bbdf5d }
	__asm { mov byte ptr [esi], 0 }
	__asm { L_00bbdf5d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10344[];
extern "C" char g_00e10348[];
// FUNCTION: ROBLOXSTUDIO 0x00bbe560
extern "C" __declspec(naked) void asm_00bbe560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, dword ptr [g_00e10348] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { xor ebx, ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00bbe597 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { jne L_00bbe595 }
	__asm { push 3 }
	__asm { lea ecx, [ebp - 4] }
	__asm { call edx }
	__asm { lea ecx, [ebp - 4] }
	__asm { call dword ptr [g_00e10344] }
	__asm { mov edx, dword ptr [g_00e10348] }
	__asm { jmp L_00bbe597 }
	__asm { L_00bbe595: }
	__asm { mov ebx, dword ptr [eax] }
	__asm { L_00bbe597: }
	__asm { mov edi, dword ptr [edi + 8] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00bbe5d9 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test eax, eax }
	__asm { jne L_00bbe5d5 }
	__asm { push 3 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call edx }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call dword ptr [g_00e10344] }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00bbe5d5: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00bbe5d9: }
	__asm { mov dword ptr [esi + 8], edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10338[];
extern "C" void fn_00bbe5f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bbf630
extern "C" __declspec(naked) void asm_00bbf630()
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
	__asm { jne L_00bbf65b }
	__asm { lea eax, [ecx + 2] }
	__asm { shr eax, 1 }
	__asm { cmp dword ptr [esi + 8], eax }
	__asm { ja L_00bbf65b }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bbe5f0 }
	__asm { L_00bbf65b: }
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
	__asm { jne L_00bbf6a3 }
	__asm { push 0xa }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00bbf69d }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00bbf69d: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebx + eax], ecx }
	__asm { L_00bbf6a3: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { and edi, 1 }
	__asm { lea edx, [edi + edi*4] }
	__asm { add edx, dword ptr [eax + ebx] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { je L_00bbf6c0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov al, byte ptr [ecx + 4] }
	__asm { mov byte ptr [edx + 4], al }
	__asm { L_00bbf6c0: }
	__asm { inc dword ptr [esi + 0x10] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bbf8f0();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00bbf840
extern "C" __declspec(naked) void asm_00bbf840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { lea eax, [ecx + edi] }
	__asm { and eax, 0x1fffffff }
	__asm { mov dword ptr [esi], eax }
	__asm { cmp eax, ecx }
	__asm { jae L_00bbf85f }
	__asm { inc dword ptr [esi + 4] }
	__asm { L_00bbf85f: }
	__asm { mov eax, edi }
	__asm { shr eax, 0x1d }
	__asm { add dword ptr [esi + 4], eax }
	__asm { and ecx, 0x3f }
	__asm { je L_00bbf8b8 }
	__asm { mov eax, 0x40 }
	__asm { sub eax, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp edi, eax }
	__asm { jae L_00bbf891 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [esi + 0x18] }
	__asm { add eax, ecx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bbf891: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [esi + 0x18] }
	__asm { add eax, ecx }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add ebx, dword ptr [ebp + 8] }
	__asm { sub edi, dword ptr [ebp + 8] }
	__asm { push 0x40 }
	__asm { lea eax, [esi + 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00bbf8f0 }
	__asm { add esp, 0x18 }
	__asm { jmp L_00bbf8bb }
	__asm { L_00bbf8b8: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { L_00bbf8bb: }
	__asm { cmp edi, 0x40 }
	__asm { jb L_00bbf8d5 }
	__asm { mov eax, edi }
	__asm { and eax, 0xffffffc0 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00bbf8f0 }
	__asm { add esp, 0xc }
	__asm { mov ebx, eax }
	__asm { and edi, 0x3f }
	__asm { L_00bbf8d5: }
	__asm { push edi }
	__asm { lea eax, [esi + 0x18] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008e75e0();
extern "C" void fn_00b600b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bc03d0
extern "C" __declspec(naked) void asm_00bc03d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d7b1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00bc0404: }
	__asm { cmp edi, ebx }
	__asm { je L_00bc0469 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00bc0435 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { lea eax, [edi + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_008e75e0 }
	__asm { L_00bc0435: }
	__asm { add esi, 0x1c }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { add edi, 0x1c }
	__asm { jmp L_00bc0404 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00bc0460 }
	__asm { mov edi, edi }
	__asm { L_00bc0450: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { call fn_00b600b0 }
	__asm { add esi, 0x1c }
	__asm { cmp esi, edi }
	__asm { jne L_00bc0450 }
	__asm { L_00bc0460: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00bc0469: }
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

extern "C" void fn_006deac0();
extern "C" void fn_008bbcc0();
// FUNCTION: ROBLOXSTUDIO 0x00bc0590
extern "C" __declspec(naked) void asm_00bc0590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d7d6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], eax }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x10], 0xe370e4 }
	__asm { call fn_006deac0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x14], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0x18], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov dword ptr [edi + 0x20], 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_008bbcc0 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_008bbcc0 }
	__asm { lea eax, [ebp + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_008bbcc0 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_008bbcc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00bc02c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bc06f0
extern "C" __declspec(naked) void asm_00bc06f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d7e0 }
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
	__asm { je L_00bc0745 }
	__asm { cmp edi, 0xccccccc }
	__asm { ja L_00bc073f }
	__asm { lea eax, [edi + edi*4] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00bc0745 }
	__asm { L_00bc073f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00bc0745: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00bc02c0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x66666667 }
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
	__asm { je L_00bc0792 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bc0792: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + edi*4] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*4] }
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
extern "C" void fn_00b5fe30();
extern "C" void fn_00bc0310();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bc07e0
extern "C" __declspec(naked) void asm_00bc07e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d7f0 }
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
	__asm { je L_00bc0835 }
	__asm { cmp edi, 0x71c71c7 }
	__asm { ja L_00bc082f }
	__asm { lea eax, [edi + edi*8] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00bc0835 }
	__asm { L_00bc082f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00bc0835: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00bc0310 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00bc0893 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_00b5fe30 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00bc0893: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + edi*8] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
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

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00b5fe90();
extern "C" void fn_00bc03d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00bc08e0
extern "C" __declspec(naked) void asm_00bc08e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d800 }
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
	__asm { je L_00bc093b }
	__asm { cmp edi, 0x9249249 }
	__asm { ja L_00bc0935 }
	__asm { lea eax, [edi*8] }
	__asm { sub eax, edi }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00bc093b }
	__asm { L_00bc0935: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00bc093b: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00bc03d0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00bc099b }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_00b5fe90 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00bc099b: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { lea eax, [edi*8] }
	__asm { sub eax, edi }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea eax, [ecx*8] }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
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
extern "C" void fn_00bc06f0();
// FUNCTION: ROBLOXSTUDIO 0x00bc09f0
extern "C" __declspec(naked) void asm_00bc09f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00bc0a8b }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul esi }
	__asm { sar edx, 3 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0xccccccc }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00bc0a41 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00bc0a41: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ebx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0xccccccc }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00bc0a78 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00bc06f0 }
	__asm { L_00bc0a78: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00bc06f0 }
	__asm { L_00bc0a8b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00bc07e0();
// FUNCTION: ROBLOXSTUDIO 0x00bc0aa0
extern "C" __declspec(naked) void asm_00bc0aa0()
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
	__asm { jae L_00bc0b3b }
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
	__asm { jae L_00bc0af1 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00bc0af1: }
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
	__asm { jae L_00bc0b28 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00bc07e0 }
	__asm { L_00bc0b28: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00bc07e0 }
	__asm { L_00bc0b3b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00bc0c40
extern "C" __declspec(naked) void asm_00bc0c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { jne L_00bc0c58 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bc0c58: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { je L_00bc0cde }
	__asm { cmp edi, eax }
	__asm { jne L_00bc0c9c }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bc0c87 }
	__asm { push 0x60 }
	__asm { push 0xea3f40 }
	__asm { push 0xee13d8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bc0c9c }
	__asm { L_00bc0c87: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee13e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bc0c9c: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00bc0cde }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { je L_00bc0cde }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00bc0cc9 }
	__asm { push 0x61 }
	__asm { push 0xea3f40 }
	__asm { push 0xee1448 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bc0cde }
	__asm { L_00bc0cc9: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xee1458 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bc0cde: }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00bc0640();
extern "C" void fn_00bc0c40();
extern "C" void fn_00bc1900();
extern "C" void fn_00bc25b0();
extern "C" void fn_00bc5ed0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bc1060
extern "C" __declspec(naked) void asm_00bc1060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d838 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov eax, ecx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_00bc1900 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00bc1900 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_00bc1900 }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { sub ecx, dword ptr [edi + 0x18] }
	__asm { mov ebx, eax }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { sar edx, 3 }
	__asm { mov esi, edx }
	__asm { mov dword ptr [ebp + 0x10], ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_00bc0640 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bc5ed0 }
	__asm { cmp dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x24], 0xe370e4 }
	__asm { je L_00bc1128 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { L_00bc1128: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { lea ecx, [esi + esi*8] }
	__asm { lea esi, [eax + ecx*4] }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00bc0c40 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00bc0c40 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00bc0c40 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc25b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10268[];
extern "C" void fn_00bc0590();
extern "C" void fn_00bc0c40();
extern "C" void fn_00bc1900();
extern "C" void fn_00bc25b0();
extern "C" void fn_00bc5ed0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bc1170
extern "C" __declspec(naked) void asm_00bc1170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5d858 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov eax, ecx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_00bc1900 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_00bc1900 }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_00bc1900 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00bc1900 }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { sub ecx, dword ptr [edi + 0x18] }
	__asm { mov ebx, eax }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { sar edx, 3 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, edx }
	__asm { mov dword ptr [ebp + 0x10], ebx }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_00bc0590 }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00bc5ed0 }
	__asm { cmp dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x28], 0xe370e4 }
	__asm { je L_00bc124b }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { L_00bc124b: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { lea ecx, [esi + esi*8] }
	__asm { lea esi, [eax + ecx*4] }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_00bc0c40 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00bc0c40 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { call fn_00bc0c40 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { call fn_00bc0c40 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc25b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00bc09f0();
// FUNCTION: ROBLOXSTUDIO 0x00bc5e20
extern "C" __declspec(naked) void asm_00bc5e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_00bc5e8d }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_00bc5e8d }
	__asm { sub edi, eax }
	__asm { mov eax, 0x66666667 }
	__asm { imul edi }
	__asm { sar edx, 3 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00bc5e58 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc09f0 }
	__asm { L_00bc5e58: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*4] }
	__asm { lea edx, [eax + ecx*4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00bc5ebe }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { add dword ptr [esi + 4], 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bc5e8d: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00bc5e9b }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc09f0 }
	__asm { L_00bc5e9b: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00bc5ebe }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { L_00bc5ebe: }
	__asm { add dword ptr [esi + 4], 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008e75e0();
extern "C" void fn_00bc0aa0();
// FUNCTION: ROBLOXSTUDIO 0x00bc5ed0
extern "C" __declspec(naked) void asm_00bc5ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d972 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ebx, ecx }
	__asm { jae L_00bc5f7e }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, ebx }
	__asm { ja L_00bc5f7e }
	__asm { sub ebx, eax }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ebx }
	__asm { sar edx, 3 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00bc5f25 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc0aa0 }
	__asm { L_00bc5f25: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { lea ebx, [edi + edi*8] }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00bc5fcf }
	__asm { mov eax, dword ptr [ecx + ebx*4] }
	__asm { mov dword ptr [edi], eax }
	__asm { lea eax, [ecx + 4] }
	__asm { lea ecx, [edi + 4] }
	__asm { lea eax, [eax + ebx*4] }
	__asm { push eax }
	__asm { call fn_008e75e0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x10], 0xe370e4 }
	__asm { mov eax, dword ptr [ecx + ebx*4 + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + ebx*4 + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + ebx*4 + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { fld dword ptr [ecx + ebx*4 + 0x20] }
	__asm { jmp L_00bc5fcc }
	__asm { L_00bc5f7e: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00bc5f8c }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc0aa0 }
	__asm { L_00bc5f8c: }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00bc5fcf }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [edi], eax }
	__asm { lea eax, [ebx + 4] }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_008e75e0 }
	__asm { mov dword ptr [edi + 0x10], 0xe370e4 }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [edi + 0x14], eax }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov eax, dword ptr [ebx + 0x1c] }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { fld dword ptr [ebx + 0x20] }
	__asm { L_00bc5fcc: }
	__asm { fstp dword ptr [edi + 0x20] }
	__asm { L_00bc5fcf: }
	__asm { add dword ptr [esi + 4], 0x24 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008e75e0();
extern "C" void fn_00bc0b50();
// FUNCTION: ROBLOXSTUDIO 0x00bc5ff0
extern "C" __declspec(naked) void asm_00bc5ff0()
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
	__asm { jae L_00bc607d }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_00bc607d }
	__asm { sub edi, eax }
	__asm { mov eax, 0x92492493 }
	__asm { imul edi }
	__asm { add edx, edi }
	__asm { sar edx, 4 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00bc6040 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc0b50 }
	__asm { L_00bc6040: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi*8] }
	__asm { sub ecx, edi }
	__asm { lea edx, [eax + ecx*4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00bc60c1 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { lea eax, [edx + 0x10] }
	__asm { jmp L_00bc60b8 }
	__asm { L_00bc607d: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00bc608b }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00bc0b50 }
	__asm { L_00bc608b: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00bc60c1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { lea eax, [edi + 0x10] }
	__asm { L_00bc60b8: }
	__asm { push eax }
	__asm { add ecx, 0x10 }
	__asm { call fn_008e75e0 }
	__asm { L_00bc60c1: }
	__asm { add dword ptr [esi + 4], 0x1c }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a36d10();
extern "C" void fn_00a379c0();
// FUNCTION: ROBLOXSTUDIO 0x00bc6340
extern "C" __declspec(naked) void asm_00bc6340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { sub eax, edx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { sar eax, 1 }
	__asm { cmp ecx, eax }
	__asm { jl L_00bc636f }
	__asm { cmp ecx, esi }
	__asm { jl L_00bc637c }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { push ebx }
	__asm { call fn_00a379c0 }
	__asm { add esp, 8 }
	__asm { jmp L_00bc637c }
	__asm { L_00bc636f: }
	__asm { lea esi, [ecx + ecx] }
	__asm { mov eax, 4 }
	__asm { cmp esi, eax }
	__asm { cmovl esi, eax }
	__asm { L_00bc637c: }
	__asm { xor edx, edx }
	__asm { mov eax, 0xfffffffd }
	__asm { div dword ptr [ebp + 0x14] }
	__asm { lea ecx, [esi + 1] }
	__asm { cmp ecx, eax }
	__asm { ja L_00bc63e3 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov edi, esi }
	__asm { mov edx, dword ptr [eax] }
	__asm { imul edi, dword ptr [ebp + 0x14] }
	__asm { imul edx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { push edi }
	__asm { push edx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 0x18], eax }
	__asm { push dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [ebp + 0x14], edx }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { jne L_00bc63cb }
	__asm { test edi, edi }
	__asm { je L_00bc63cb }
	__asm { push 4 }
	__asm { push ebx }
	__asm { call fn_00a36d10 }
	__asm { add esp, 8 }
	__asm { L_00bc63cb: }
	__asm { sub edi, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { add dword ptr [ecx + 0x44], edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc63e3: }
	__asm { push 0xee1c94 }
	__asm { push ebx }
	__asm { call fn_00a379c0 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [edi], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
// FUNCTION: ROBLOXSTUDIO 0x00bc6600
extern "C" __declspec(naked) void asm_00bc6600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0xc] }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { push 0 }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { push 0 }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { push dword ptr [edi + 8] }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { push 0 }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x14] }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { add esp, 0x40 }
	__asm { lea eax, [eax + eax*2] }
	__asm { push 0 }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x18] }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { mov eax, dword ptr [edi + 0x24] }
	__asm { push 0 }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x1c] }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { push 0 }
	__asm { push 0x4c }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x30 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a365b0();
extern "C" void fn_00bc6250();
// FUNCTION: ROBLOXSTUDIO 0x00bc68a0
extern "C" __declspec(naked) void asm_00bc68a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx + 0x10] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { cmp edi, ecx }
	__asm { jne L_00bc68c3 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { jmp L_00bc68c7 }
	__asm { L_00bc68c3: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00bc68c7: }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [esi + 0x70] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov cl, byte ptr [esi + 0x14] }
	__asm { mov al, byte ptr [edi + 5] }
	__asm { and cl, 3 }
	__asm { and al, 0xf8 }
	__asm { or cl, al }
	__asm { mov byte ptr [edi + 5], cl }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bc697e }
	__asm { test byte ptr [ecx + 6], 4 }
	__asm { jne L_00bc697e }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { push dword ptr [eax + 0xc4] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { call fn_00bc6250 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { test eax, eax }
	__asm { je L_00bc697e }
	__asm { cmp byte ptr [edi + 0x14], 0 }
	__asm { je L_00bc697e }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [esi + 0x40] }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push ebx }
	__asm { mov bl, byte ptr [edx + 0x39] }
	__asm { mov byte ptr [edx + 0x39], 0 }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { add eax, eax }
	__asm { mov dword ptr [ecx + 0x40], eax }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 0x10], edi }
	__asm { mov dword ptr [eax + 0x18], 7 }
	__asm { add dword ptr [edx + 8], 0x20 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { add eax, -0x20 }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00a365b0 }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [edx + 0x39], bl }
	__asm { mov dword ptr [eax + 0x40], esi }
	__asm { pop ebx }
	__asm { L_00bc697e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6400();
extern "C" void fn_00bc6450();
extern "C" void fn_00bc9630();
// FUNCTION: ROBLOXSTUDIO 0x00bc6ad0
extern "C" __declspec(naked) void asm_00bc6ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x10] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { and edx, 3 }
	__asm { add eax, edx }
	__asm { sar eax, 2 }
	__asm { cmp dword ptr [esi + 4], eax }
	__asm { jae L_00bc6b04 }
	__asm { cmp ecx, 0x40 }
	__asm { jle L_00bc6b04 }
	__asm { mov eax, ecx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00bc9630 }
	__asm { add esp, 8 }
	__asm { L_00bc6b04: }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { cmp ecx, 0x40 }
	__asm { jbe L_00bc6b42 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { shr edi, 1 }
	__asm { lea eax, [edi + 1] }
	__asm { cmp eax, -3 }
	__asm { ja L_00bc6b32 }
	__asm { push edi }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x34] }
	__asm { push ebx }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x3c], edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc6b32: }
	__asm { push ebx }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x3c], edi }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { pop edi }
	__asm { L_00bc6b42: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc6c40();
extern "C" void fn_00bc7950();
// FUNCTION: ROBLOXSTUDIO 0x00bc6e50
extern "C" __declspec(naked) void asm_00bc6e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x10] }
	__asm { push -3 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [esi + 0x14], 0x43 }
	__asm { call fn_00bc7950 }
	__asm { xor edx, edx }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { cmp dword ptr [esi + 8], edx }
	__asm { jle L_00bc6f1e }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push edi }
	__asm { L_00bc6e86: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov esi, dword ptr [eax + edx*4] }
	__asm { lea edi, [eax + edx*4] }
	__asm { mov edx, dword ptr [ecx + 0x10] }
	__asm { mov ebx, 0xfffffffd }
	__asm { movzx eax, byte ptr [edx + 0x14] }
	__asm { xor eax, 3 }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { test esi, esi }
	__asm { je L_00bc6f09 }
	__asm { L_00bc6ea7: }
	__asm { mov eax, ebx }
	__asm { dec ebx }
	__asm { test eax, eax }
	__asm { je L_00bc6f09 }
	__asm { cmp byte ptr [esi + 4], 8 }
	__asm { jne L_00bc6ec3 }
	__asm { push -3 }
	__asm { lea eax, [esi + 0x68] }
	__asm { push eax }
	__asm { push ecx }
	__asm { call fn_00bc7950 }
	__asm { add esp, 0xc }
	__asm { L_00bc6ec3: }
	__asm { mov cl, byte ptr [esi + 5] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { movzx eax, cl }
	__asm { xor eax, 3 }
	__asm { test dword ptr [ebp - 0xc], eax }
	__asm { je L_00bc6ee5 }
	__asm { mov al, byte ptr [edx + 0x14] }
	__asm { and al, 3 }
	__asm { and cl, 0xf8 }
	__asm { or al, cl }
	__asm { mov byte ptr [esi + 5], al }
	__asm { mov edi, esi }
	__asm { jmp L_00bc6f00 }
	__asm { L_00bc6ee5: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { cmp esi, dword ptr [edx + 0x1c] }
	__asm { jne L_00bc6ef3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { L_00bc6ef3: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push ecx }
	__asm { call fn_00bc6c40 }
	__asm { add esp, 8 }
	__asm { L_00bc6f00: }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { jne L_00bc6ea7 }
	__asm { L_00bc6f09: }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { inc edx }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { cmp edx, dword ptr [esi + 8] }
	__asm { jl L_00bc6e86 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00bc6f1e: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bc8720();
extern "C" void fn_00bca570();
// FUNCTION: ROBLOXSTUDIO 0x00bc7fa0
extern "C" __declspec(naked) void asm_00bc7fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { lea eax, [edx - 1] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test edx, edx }
	__asm { je L_00bc7fc8 }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { inc eax }
	__asm { movzx edx, byte ptr [eax - 1] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { jmp L_00bc7fd5 }
	__asm { L_00bc7fc8: }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_00bca570 }
	__asm { add esp, 4 }
	__asm { mov edx, eax }
	__asm { L_00bc7fd5: }
	__asm { mov dword ptr [esi], edx }
	__asm { cmp edx, 0xa }
	__asm { je L_00bc7fe1 }
	__asm { cmp edx, 0xd }
	__asm { jne L_00bc8012 }
	__asm { L_00bc7fe1: }
	__asm { cmp edx, edi }
	__asm { je L_00bc8012 }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { lea eax, [edx - 1] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test edx, edx }
	__asm { je L_00bc8003 }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { inc eax }
	__asm { movzx edx, byte ptr [eax - 1] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { jmp L_00bc8010 }
	__asm { L_00bc8003: }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_00bca570 }
	__asm { add esp, 4 }
	__asm { mov edx, eax }
	__asm { L_00bc8010: }
	__asm { mov dword ptr [esi], edx }
	__asm { L_00bc8012: }
	__asm { inc dword ptr [esi + 4] }
	__asm { cmp dword ptr [esi + 4], 0x7ffffffd }
	__asm { jl L_00bc802f }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push 0xee1da0 }
	__asm { push esi }
	__asm { call fn_00bc8720 }
	__asm { add esp, 0xc }
	__asm { L_00bc802f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a36d10();
extern "C" void fn_00a45610();
extern "C" void fn_00a457e0();
extern "C" void fn_00bc6400();
extern "C" void fn_00bc6450();
// FUNCTION: ROBLOXSTUDIO 0x00bc90f0
extern "C" __declspec(naked) void asm_00bc90f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x50 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 0x3c] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { cmp eax, ecx }
	__asm { jbe L_00bc917a }
	__asm { cmp ecx, 0x7ffffffe }
	__asm { jb L_00bc9149 }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { add eax, 0x10 }
	__asm { push 0x50 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { call fn_00a45610 }
	__asm { push 0xee1d64 }
	__asm { push dword ptr [edi + 4] }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { push 0xea705c }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push 3 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00a36d10 }
	__asm { add esp, 0x28 }
	__asm { L_00bc9149: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { push ebx }
	__asm { lea ebx, [ecx + ecx] }
	__asm { lea eax, [ebx + 1] }
	__asm { cmp eax, -3 }
	__asm { ja L_00bc9169 }
	__asm { push ebx }
	__asm { push ecx }
	__asm { push dword ptr [esi] }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00bc6400 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00bc9174 }
	__asm { L_00bc9169: }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00bc6450 }
	__asm { add esp, 4 }
	__asm { L_00bc9174: }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { mov dword ptr [esi], eax }
	__asm { pop ebx }
	__asm { L_00bc917a: }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov al, byte ptr [ebp + 0xc] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { inc dword ptr [esi + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10768[];
extern "C" void fn_00a36d10();
extern "C" void fn_00a45610();
extern "C" void fn_00a457e0();
extern "C" void fn_00a45b60();
extern "C" void fn_00bc90f0();
// FUNCTION: ROBLOXSTUDIO 0x00bc92d0
extern "C" __declspec(naked) void asm_00bc92d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e10768] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov bl, byte ptr [edi + 0x44] }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { je L_00bc92f3 }
	__asm { call esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dl, byte ptr [eax] }
	__asm { jmp L_00bc92f5 }
	__asm { L_00bc92f3: }
	__asm { mov dl, 0x2e }
	__asm { L_00bc92f5: }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov byte ptr [edi + 0x44], dl }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_00bc9311 }
	__asm { L_00bc9304: }
	__asm { dec ecx }
	__asm { cmp byte ptr [eax + ecx], bl }
	__asm { jne L_00bc930d }
	__asm { mov byte ptr [eax + ecx], dl }
	__asm { L_00bc930d: }
	__asm { test ecx, ecx }
	__asm { jne L_00bc9304 }
	__asm { L_00bc9311: }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { call fn_00a45b60 }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_00bc9397 }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dl, byte ptr [edi + 0x44] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_00bc9342 }
	__asm { L_00bc9334: }
	__asm { dec ecx }
	__asm { cmp byte ptr [eax + ecx], dl }
	__asm { jne L_00bc933e }
	__asm { mov byte ptr [eax + ecx], 0x2e }
	__asm { L_00bc933e: }
	__asm { test ecx, ecx }
	__asm { jne L_00bc9334 }
	__asm { L_00bc9342: }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { add eax, 0x10 }
	__asm { push 0x50 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { call fn_00a45610 }
	__asm { push 0xee1dbc }
	__asm { push dword ptr [edi + 4] }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { push 0xea705c }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov esi, eax }
	__asm { call fn_00bc90f0 }
	__asm { mov ecx, dword ptr [edi + 0x3c] }
	__asm { push dword ptr [ecx] }
	__asm { push esi }
	__asm { push 0xee1d90 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00a457e0 }
	__asm { push 3 }
	__asm { push dword ptr [edi + 0x34] }
	__asm { call fn_00a36d10 }
	__asm { add esp, 0x40 }
	__asm { L_00bc9397: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bc9700
extern "C" __declspec(naked) void asm_00bc9700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { xor ecx, ecx }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { xor ebx, ebx }
	__asm { lea esi, [ecx + 1] }
	__asm { cmp dword ptr [edx], ecx }
	__asm { jle L_00bc9750 }
	__asm { L_00bc9716: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { test eax, eax }
	__asm { jle L_00bc9733 }
	__asm { add ecx, eax }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { sar eax, 1 }
	__asm { cmp ecx, eax }
	__asm { jle L_00bc9733 }
	__asm { mov ebx, esi }
	__asm { mov edi, ecx }
	__asm { L_00bc9733: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, dword ptr [eax] }
	__asm { je L_00bc9759 }
	__asm { add edx, 4 }
	__asm { add esi, esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { sar eax, 1 }
	__asm { cmp eax, dword ptr [edx] }
	__asm { jl L_00bc9716 }
	__asm { L_00bc9750: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [edx], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bc9759: }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00bcaad0
extern "C" __declspec(naked) void asm_00bcaad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { je L_00bcab28 }
	__asm { lea edi, [eax + 0x10] }
	__asm { test edi, edi }
	__asm { je L_00bcab28 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { inc eax }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jne L_00bcab4e }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push 4 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { jne L_00bcab4e }
	__asm { push dword ptr [esi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { push dword ptr [esi] }
	__asm { call eax }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcab28: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { cmp dword ptr [esi + 0x10], 0 }
	__asm { jne L_00bcab4e }
	__asm { push dword ptr [esi + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push 4 }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { call eax }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { add esp, 0x10 }
	__asm { L_00bcab4e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a365b0();
extern "C" void fn_00a36700();
// FUNCTION: ROBLOXSTUDIO 0x00bcada0
extern "C" __declspec(naked) void asm_00bcada0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 0x24], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x28], eax }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + 0x30], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 0x34], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 0x38], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { sub eax, dword ptr [esi + 8] }
	__asm { cmp eax, 0x40 }
	__asm { jg L_00bcae18 }
	__asm { push 4 }
	__asm { push esi }
	__asm { call fn_00a36700 }
	__asm { add esp, 8 }
	__asm { L_00bcae18: }
	__asm { add dword ptr [esi + 8], 0x40 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push 0 }
	__asm { add eax, -0x40 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a365b0 }
	__asm { add esp, 0xc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a365b0();
extern "C" void fn_00a36700();
// FUNCTION: ROBLOXSTUDIO 0x00bcae40
extern "C" __declspec(naked) void asm_00bcae40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { sub edi, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 0x24], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { sub eax, dword ptr [esi + 8] }
	__asm { cmp eax, 0x30 }
	__asm { jg L_00bcaea8 }
	__asm { push 3 }
	__asm { push esi }
	__asm { call fn_00a36700 }
	__asm { add esp, 8 }
	__asm { L_00bcaea8: }
	__asm { add dword ptr [esi + 8], 0x30 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push 1 }
	__asm { add eax, -0x30 }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00a365b0 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { add esp, 0xc }
	__asm { add dword ptr [esi + 8], -0x10 }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx + edi], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + edi + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + edi + 8], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a45b00();
extern "C" void fn_00bc6280();
extern "C" void fn_00bcae40();
// FUNCTION: ROBLOXSTUDIO 0x00bcaee0
extern "C" __declspec(naked) void asm_00bcaee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00bc6280 }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { jne L_00bcaf09 }
	__asm { L_00bcaf01: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcaf09: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { call fn_00bc6280 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a45b00 }
	__asm { add esp, 0x14 }
	__asm { test eax, eax }
	__asm { je L_00bcaf01 }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push dword ptr [esi + 8] }
	__asm { push esi }
	__asm { call fn_00bcae40 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { add esp, 0x14 }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00bcaf51 }
	__asm { cmp ecx, 1 }
	__asm { jne L_00bcaf47 }
	__asm { cmp dword ptr [eax], 0 }
	__asm { je L_00bcaf51 }
	__asm { L_00bcaf47: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcaf51: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a45b00();
extern "C" void fn_00bc6250();
// FUNCTION: ROBLOXSTUDIO 0x00bcaf60
extern "C" __declspec(naked) void asm_00bcaf60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { je L_00bcafe0 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov ebx, 1 }
	__asm { shl ebx, cl }
	__asm { test byte ptr [esi + 6], bl }
	__asm { jne L_00bcafe0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea edx, [ecx*4 + 0xbc] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { push dword ptr [eax + edx] }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00bc6250 }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { test edi, edi }
	__asm { je L_00bcafe0 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { cmp esi, ecx }
	__asm { je L_00bcafe2 }
	__asm { test ecx, ecx }
	__asm { je L_00bcafe0 }
	__asm { test byte ptr [ecx + 6], bl }
	__asm { jne L_00bcafe0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { push dword ptr [eax + edx] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { call fn_00bc6250 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_00bcafe0 }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00a45b00 }
	__asm { add esp, 8 }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { and eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcafe0: }
	__asm { xor eax, eax }
	__asm { L_00bcafe2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00a379c0();
extern "C" void fn_00a379f0();
extern "C" void fn_00bc6250();
extern "C" void fn_00bc6280();
extern "C" void fn_00bc98e0();
extern "C" void fn_00bcae40();
// FUNCTION: ROBLOXSTUDIO 0x00bcc670
extern "C" __declspec(naked) void asm_00bcc670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00bcc686: }
	__asm { cmp dword ptr [esi + 8], 5 }
	__asm { jne L_00bcc6e9 }
	__asm { mov edi, dword ptr [esi] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { call fn_00bc98e0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { cmp dword ptr [edx + 8], 0 }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { jne L_00bcc6cf }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00bcc6cf }
	__asm { test byte ptr [ecx + 6], 1 }
	__asm { jne L_00bcc6cf }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { push dword ptr [eax + 0xbc] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { call fn_00bc6250 }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { test edi, edi }
	__asm { jne L_00bcc70c }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { L_00bcc6cf: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcc6e9: }
	__asm { push 0 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00bc6280 }
	__asm { mov edi, eax }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { jne L_00bcc70c }
	__asm { push 0x1025014 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00a379f0 }
	__asm { add esp, 0xc }
	__asm { L_00bcc70c: }
	__asm { cmp dword ptr [edi + 8], 6 }
	__asm { je L_00bcc739 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { inc eax }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp eax, 0x64 }
	__asm { jl L_00bcc686 }
	__asm { push 0xee1ee0 }
	__asm { push ebx }
	__asm { call fn_00a379c0 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcc739: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { call fn_00bcae40 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c183e0();
extern "C" void fn_00c18750();
extern "C" void fn_00c18b80();
extern "C" void fn_00c18dd0();
// FUNCTION: ROBLOXSTUDIO 0x00bcc9d0
extern "C" __declspec(naked) void asm_00bcc9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax + 0x30] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { sub edi, dword ptr [ebp + 0x10] }
	__asm { cmp eax, 0xd }
	__asm { je L_00bcca1d }
	__asm { cmp eax, 0xe }
	__asm { je L_00bcca1d }
	__asm { test eax, eax }
	__asm { je L_00bcc9fe }
	__asm { push ecx }
	__asm { push ebx }
	__asm { call fn_00c183e0 }
	__asm { add esp, 8 }
	__asm { L_00bcc9fe: }
	__asm { test edi, edi }
	__asm { jle L_00bcca43 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x24] }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00c18b80 }
	__asm { push edi }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00c18750 }
	__asm { add esp, 0x14 }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00bcca1d: }
	__asm { mov eax, 0 }
	__asm { inc edi }
	__asm { cmovs edi, eax }
	__asm { push edi }
	__asm { push ecx }
	__asm { push ebx }
	__asm { call fn_00c18dd0 }
	__asm { add esp, 0xc }
	__asm { cmp edi, 1 }
	__asm { jle L_00bcca43 }
	__asm { lea eax, [edi - 1] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00c18b80 }
	__asm { add esp, 8 }
	__asm { L_00bcca43: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}
